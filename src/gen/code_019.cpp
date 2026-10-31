#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// bta_sys_event
void f_801AD4FC(Ctx* __restrict c) {
  trace_call(0x801AD4FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD4FC
  c->r[0]=c->lr; // 801AD500
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD504
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD508
  c->r[31]=0u+0x00000001u; // 801AD50C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AD510
  c->r[30]=c->r[3]|c->r[3]; // 801AD514
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801AD518
  cmpu(c,0,c->r[0],0x00000004u); // 801AD51C
  if (crb(c,0)) { goto L_801AD538; } // 801AD520
  c->r[4]=0u+0x80330000u; // 801AD524
  c->r[5]=R16(c->r[30]+0x00000000u); // 801AD528
  c->r[4]=c->r[4]+0x000016D8u; // 801AD52C
  c->r[3]=0u+0x00000503u; // 801AD530
  c->lr=0x801AD538u; f_801ACB38(c); // 801AD534
L_801AD538:;
  c->r[3]=0u+0x803C0000u; // 801AD538
  c->r[4]=R16(c->r[30]+0x00000000u); // 801AD53C
  c->r[3]=c->r[3]+0x00007C78u; // 801AD540
  c->r[0]=R8(c->r[3]+0x0000007Eu); // 801AD544
  c->r[5]=sraw(c,c->r[4],8); // 801AD548
  cmps(c,0,(int32_t)c->r[0],0); // 801AD54C
  if (crb(c,2)) { goto L_801AD56C; } // 801AD550
  cmpu(c,0,c->r[4],0x00000101u); // 801AD554
  if (!crb(c,2)) { goto L_801AD560; } // 801AD558
  c->lr=0x801AD560u; f_801AFBCC(c); // 801AD55C
L_801AD560:;
  c->r[3]=c->r[30]|c->r[30]; // 801AD560
  c->lr=0x801AD568u; f_801AA228(c); // 801AD564
  goto L_801AD5D0; // 801AD568
L_801AD56C:;
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; // 801AD56C
  cmpu(c,0,c->r[0],0x0000001Au); // 801AD570
  if (!crb(c,0)) { goto L_801AD5A0; } // 801AD574
  c->r[0]=rotl(c->r[5],2)&0x000003FCu; // 801AD578
  c->r[3]=R32(c->r[3]+c->r[0]); // 801AD57C
  cmps(c,0,(int32_t)c->r[3],0); // 801AD580
  if (crb(c,2)) { goto L_801AD5A0; } // 801AD584
  c->r[12]=R32(c->r[3]+0x00000000u); // 801AD588
  c->r[3]=c->r[30]|c->r[30]; // 801AD58C
  c->ctr=c->r[12]; // 801AD590
  if (true) { c->lr=0x801AD598u; dispatch(c,c->ctr); } // 801AD594
  c->r[31]=c->r[3]|c->r[3]; // 801AD598
  goto L_801AD5C0; // 801AD59C
L_801AD5A0:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801AD5A0
  cmpu(c,0,c->r[0],0x00000002u); // 801AD5A4
  if (crb(c,0)) { goto L_801AD5C0; } // 801AD5A8
  c->r[4]=0u+0x80330000u; // 801AD5AC
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 801AD5B0
  c->r[4]=c->r[4]+0x000016ECu; // 801AD5B4
  c->r[3]=0u+0x00000501u; // 801AD5B8
  c->lr=0x801AD5C0u; f_801ACB38(c); // 801AD5BC
L_801AD5C0:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[0]); // 801AD5C0
  if (crb(c,2)) { goto L_801AD5D0; } // 801AD5C4
  c->r[3]=c->r[30]|c->r[30]; // 801AD5C8
  c->lr=0x801AD5D0u; f_801AA228(c); // 801AD5CC
L_801AD5D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD5D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD5D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AD5D8
  c->lr=c->r[0]; // 801AD5DC
  c->r[1]=c->r[1]+0x00000010u; // 801AD5E0
  return; // 801AD5E4
}

// bta_sys_timer_update
void f_801AD5E8(Ctx* __restrict c) {
  trace_call(0x801AD5E8u);
  c->r[3]=0u+0x803C0000u; // 801AD5E8
  c->r[3]=c->r[3]+0x00007C78u; // 801AD5EC
  c->r[0]=R8(c->r[3]+0x0000007Cu); // 801AD5F0
  cmps(c,0,(int32_t)c->r[0],0); // 801AD5F4
  if (!crb(c,2)) return; // 801AD5F8
  c->r[3]=c->r[3]+0x00000068u; // 801AD5FC
  f_801AD728(c); return; // 801AD600
  return; // 801AD604
}

// bta_sys_register
void f_801AD608(Ctx* __restrict c) {
  trace_call(0x801AD608u);
  c->r[5]=0u+0x803C0000u; // 801AD608
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801AD60C
  c->r[5]=c->r[5]+0x00007C78u; // 801AD610
  W32(c->r[5]+c->r[0],c->r[4]); // 801AD614
  return; // 801AD618
}

// bta_sys_sendmsg
void f_801AD61C(Ctx* __restrict c) {
  trace_call(0x801AD61Cu);
  c->r[4]=R32(c->r[13]+0xFFFF9460u); // 801AD61C
  c->r[6]=0u+0x803C0000u; // 801AD620
  c->r[6]=c->r[6]+0x00007C78u; // 801AD624
  c->r[5]=c->r[3]|c->r[3]; // 801AD628
  c->r[3]=R8(c->r[6]+0x0000007Du); // 801AD62C
  c->r[4]=R8(c->r[4]+0x00000002u); // 801AD630
  f_801AA3DC(c); return; // 801AD634
}

// bta_sys_start_timer
void f_801AD638(Ctx* __restrict c) {
  trace_call(0x801AD638u);
  c->r[7]=0u+0x803C0000u; // 801AD638
  c->r[0]=c->r[4]|c->r[4]; // 801AD63C
  c->r[7]=c->r[7]+0x00007C78u; // 801AD640
  c->r[6]=c->r[5]|c->r[5]; // 801AD644
  c->r[4]=c->r[3]|c->r[3]; // 801AD648
  c->r[5]=c->r[0]|c->r[0]; // 801AD64C
  c->r[3]=c->r[7]+0x00000068u; // 801AD650
  f_801AD7DC(c); return; // 801AD654
}

// bta_sys_stop_timer
void f_801AD658(Ctx* __restrict c) {
  trace_call(0x801AD658u);
  c->r[5]=0u+0x803C0000u; // 801AD658
  c->r[4]=c->r[3]|c->r[3]; // 801AD65C
  c->r[5]=c->r[5]+0x00007C78u; // 801AD660
  c->r[3]=c->r[5]+0x00000068u; // 801AD664
  f_801AD87C(c); return; // 801AD668
}

// bta_sys_disable
void f_801AD66C(Ctx* __restrict c) {
  trace_call(0x801AD66Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD66C
  c->r[0]=c->lr; // 801AD670
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD674
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD678
  c->r[31]=0u+0x803C0000u; // 801AD67C
  c->r[31]=c->r[31]+0x00007C78u; // 801AD680
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AD684
  c->r[30]=0u+0x00000000u; // 801AD688
L_801AD68C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801AD68C
  cmps(c,0,(int32_t)c->r[3],0); // 801AD690
  if (crb(c,2)) { goto L_801AD6AC; } // 801AD694
  c->r[12]=R32(c->r[3]+0x00000004u); // 801AD698
  cmps(c,0,(int32_t)c->r[12],0); // 801AD69C
  if (crb(c,2)) { goto L_801AD6AC; } // 801AD6A0
  c->ctr=c->r[12]; // 801AD6A4
  if (true) { c->lr=0x801AD6ACu; dispatch(c,c->ctr); } // 801AD6A8
L_801AD6AC:;
  c->r[30]=c->r[30]+0x00000001u; // 801AD6AC
  c->r[31]=c->r[31]+0x00000004u; // 801AD6B0
  cmps(c,0,(int32_t)c->r[30],26); // 801AD6B4
  if (crb(c,0)) { IRQCHK(c); goto L_801AD68C; } // 801AD6B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD6BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD6C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AD6C4
  c->lr=c->r[0]; // 801AD6C8
  c->r[1]=c->r[1]+0x00000010u; // 801AD6CC
  return; // 801AD6D0
}

// fn_801AD6D4
void f_801AD6D4(Ctx* __restrict c) {
  W8(c->r[13]+0xFFFFA220u,c->r[3]); // 801AD6D4
  return; // 801AD6D8
}

// ptim_init
void f_801AD6DC(Ctx* __restrict c) {
  trace_call(0x801AD6DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD6DC
  c->r[0]=c->lr; // 801AD6E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD6E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AD6E8
  c->r[31]=c->r[5]|c->r[5]; // 801AD6EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AD6F0
  c->r[30]=c->r[4]|c->r[4]; // 801AD6F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AD6F8
  c->r[29]=c->r[3]|c->r[3]; // 801AD6FC
  c->lr=0x801AD704u; f_801AB1AC(c); // 801AD700
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801AD704
  W8(c->r[29]+0x00000010u,c->r[31]); // 801AD708
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AD70C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AD710
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AD714
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD718
  c->lr=c->r[0]; // 801AD71C
  c->r[1]=c->r[1]+0x00000020u; // 801AD720
  return; // 801AD724
}

// ptim_timer_update
void f_801AD728(Ctx* __restrict c) {
  trace_call(0x801AD728u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD728
  c->r[0]=c->lr; // 801AD72C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD730
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD734
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AD738
  c->r[30]=c->r[3]|c->r[3]; // 801AD73C
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 801AD740
  c->lr=0x801AD748u; f_801AB1C0(c); // 801AD744
  goto L_801AD79C; // 801AD748
L_801AD74C:;
  c->r[3]=c->r[30]|c->r[30]; // 801AD74C
  c->r[4]=c->r[31]|c->r[31]; // 801AD750
  c->lr=0x801AD758u; f_801AB338(c); // 801AD754
  c->r[12]=R32(c->r[31]+0x00000008u); // 801AD758
  cmps(c,0,(int32_t)c->r[12],0); // 801AD75C
  if (crb(c,2)) { goto L_801AD774; } // 801AD760
  c->r[3]=c->r[31]|c->r[31]; // 801AD764
  c->ctr=c->r[12]; // 801AD768
  if (true) { c->lr=0x801AD770u; dispatch(c,c->ctr); } // 801AD76C
  goto L_801AD79C; // 801AD770
L_801AD774:;
  c->r[0]=R16(c->r[31]+0x00000014u); // 801AD774
  cmps(c,0,(int32_t)c->r[0],0); // 801AD778
  if (crb(c,2)) { goto L_801AD79C; } // 801AD77C
  c->r[3]=0u+0x00000008u; // 801AD780
  c->lr=0x801AD788u; f_801A9FA0(c); // 801AD784
  cmps(c,0,(int32_t)c->r[3],0); // 801AD788
  if (crb(c,2)) { goto L_801AD79C; } // 801AD78C
  c->r[0]=R16(c->r[31]+0x00000014u); // 801AD790
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AD794
  c->lr=0x801AD79Cu; f_801AD61C(c); // 801AD798
L_801AD79C:;
  c->r[31]=R32(c->r[30]+0x00000000u); // 801AD79C
  cmps(c,0,(int32_t)c->r[31],0); // 801AD7A0
  if (crb(c,2)) { goto L_801AD7B4; } // 801AD7A4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801AD7A8
  cmps(c,0,(int32_t)c->r[0],0); // 801AD7AC
  if (!crb(c,1)) { IRQCHK(c); goto L_801AD74C; } // 801AD7B0
L_801AD7B4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801AD7B4
  if (!crb(c,2)) { goto L_801AD7C4; } // 801AD7B8
  c->r[3]=R8(c->r[30]+0x00000010u); // 801AD7BC
  c->lr=0x801AD7C4u; f_801AB124(c); // 801AD7C0
L_801AD7C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD7C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD7C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AD7CC
  c->lr=c->r[0]; // 801AD7D0
  c->r[1]=c->r[1]+0x00000010u; // 801AD7D4
  return; // 801AD7D8
}

// ptim_start_timer
void f_801AD7DC(Ctx* __restrict c) {
  trace_call(0x801AD7DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD7DC
  c->r[0]=c->lr; // 801AD7E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD7E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AD7E8
  c->r[31]=c->r[6]|c->r[6]; // 801AD7EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AD7F0
  c->r[30]=c->r[5]|c->r[5]; // 801AD7F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AD7F8
  c->r[29]=c->r[4]|c->r[4]; // 801AD7FC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801AD800
  c->r[28]=c->r[3]|c->r[3]; // 801AD804
  c->r[0]=R32(c->r[3]+0x00000000u); // 801AD808
  cmps(c,0,(int32_t)c->r[0],0); // 801AD80C
  if (!crb(c,2)) { goto L_801AD83C; } // 801AD810
  c->r[4]=0u+0x66660000u; // 801AD814
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801AD818
  c->r[4]=c->r[4]+0x00006667u; // 801AD81C
  c->r[3]=R8(c->r[3]+0x00000010u); // 801AD820
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801AD824
  c->r[5]=0u+0x00000001u; // 801AD828
  c->r[0]=sraw(c,c->r[0],2); // 801AD82C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801AD830
  c->r[4]=c->r[0]+c->r[4]; // 801AD834
  c->lr=0x801AD83Cu; f_801AAFD4(c); // 801AD838
L_801AD83C:;
  c->r[3]=c->r[28]|c->r[28]; // 801AD83C
  c->r[4]=c->r[29]|c->r[29]; // 801AD840
  c->lr=0x801AD848u; f_801AB338(c); // 801AD844
  W16(c->r[29]+0x00000014u,c->r[30]); // 801AD848
  c->r[3]=c->r[28]|c->r[28]; // 801AD84C
  c->r[4]=c->r[29]|c->r[29]; // 801AD850
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 801AD854
  c->lr=0x801AD85Cu; f_801AB24C(c); // 801AD858
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD85C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AD860
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AD864
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AD868
  c->r[28]=R32(c->r[1]+0x00000010u); // 801AD86C
  c->lr=c->r[0]; // 801AD870
  c->r[1]=c->r[1]+0x00000020u; // 801AD874
  return; // 801AD878
}

// ptim_stop_timer
void f_801AD87C(Ctx* __restrict c) {
  trace_call(0x801AD87Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD87C
  c->r[0]=c->lr; // 801AD880
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD884
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD888
  c->r[31]=c->r[3]|c->r[3]; // 801AD88C
  c->lr=0x801AD894u; f_801AB338(c); // 801AD890
  c->r[0]=R32(c->r[31]+0x00000000u); // 801AD894
  cmps(c,0,(int32_t)c->r[0],0); // 801AD898
  if (!crb(c,2)) { goto L_801AD8A8; } // 801AD89C
  c->r[3]=R8(c->r[31]+0x00000010u); // 801AD8A0
  c->lr=0x801AD8A8u; f_801AB124(c); // 801AD8A4
L_801AD8A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD8A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD8AC
  c->lr=c->r[0]; // 801AD8B0
  c->r[1]=c->r[1]+0x00000010u; // 801AD8B4
  return; // 801AD8B8
}

// utl_freebuf
void f_801AD8BC(Ctx* __restrict c) {
  trace_call(0x801AD8BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD8BC
  c->r[0]=c->lr; // 801AD8C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD8C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD8C8
  c->r[31]=c->r[3]|c->r[3]; // 801AD8CC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801AD8D0
  cmps(c,0,(int32_t)c->r[0],0); // 801AD8D4
  if (crb(c,2)) { goto L_801AD8EC; } // 801AD8D8
  c->r[3]=c->r[0]|c->r[0]; // 801AD8DC
  c->lr=0x801AD8E4u; f_801AA228(c); // 801AD8E0
  c->r[0]=0u+0x00000000u; // 801AD8E4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801AD8E8
L_801AD8EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD8EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD8F0
  c->lr=c->r[0]; // 801AD8F4
  c->r[1]=c->r[1]+0x00000010u; // 801AD8F8
  return; // 801AD8FC
}

// bta_dm_enable
void f_801AD900(Ctx* __restrict c) {
  trace_call(0x801AD900u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD900
  c->r[0]=c->lr; // 801AD904
  c->r[4]=0u+0x803C0000u; // 801AD908
  c->r[5]=0u+0x0000007Cu; // 801AD90C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD910
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AD914
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AD918
  c->r[30]=c->r[3]|c->r[3]; // 801AD91C
  c->r[3]=c->r[4]+0x00007D38u; // 801AD920
  c->r[4]=0u+0x00000000u; // 801AD924
  c->lr=0x801AD92Cu; f_80004688(c); // 801AD928
  c->r[3]=0u+0x803C0000u; // 801AD92C
  c->r[4]=0u+0x00000000u; // 801AD930
  c->r[3]=c->r[3]+0x00007EB8u; // 801AD934
  c->r[5]=0u+0x0000002Eu; // 801AD938
  c->lr=0x801AD940u; f_80004688(c); // 801AD93C
  c->r[31]=0u+0x802E0000u; // 801AD940
  c->r[3]=c->r[1]+0x00000008u; // 801AD944
  c->r[4]=c->r[31]+0x00001010u; // 801AD948
  c->r[5]=0u+0x00000003u; // 801AD94C
  c->lr=0x801AD954u; f_80004338(c); // 801AD950
  c->r[3]=c->r[1]+0x00000008u; // 801AD954
  c->lr=0x801AD95Cu; f_801B64E0(c); // 801AD958
  c->r[4]=0u+0x803C0000u; // 801AD95C
  c->r[0]=R32(c->r[30]+0x00000008u); // 801AD960
  c->r[4]=c->r[4]+0x00007DB4u; // 801AD964
  c->r[3]=0u+0x802E0000u; // 801AD968
  W32(c->r[4]+0x00000050u,c->r[0]); // 801AD96C
  c->r[3]=c->r[3]+0x00001140u; // 801AD970
  c->lr=0x801AD978u; f_801BA4C8(c); // 801AD974
  c->r[31]=c->r[31]+0x00001010u; // 801AD978
  c->r[3]=R16(c->r[31]+0x00000008u); // 801AD97C
  c->lr=0x801AD984u; f_801B3E60(c); // 801AD980
  c->r[3]=R16(c->r[31]+0x00000006u); // 801AD984
  c->lr=0x801AD98Cu; f_801B67D0(c); // 801AD988
  c->r[3]=R16(c->r[31]+0x00000004u); // 801AD98C
  c->lr=0x801AD994u; f_801B3A94(c); // 801AD990
  c->r[3]=0u+0x801B0000u; // 801AD994
  c->r[3]=c->r[3]+0xFFFFF340u; // 801AD998
  c->lr=0x801AD9A0u; f_801B44DC(c); // 801AD99C
  c->r[3]=0u+0x801B0000u; // 801AD9A0
  c->r[3]=c->r[3]+0xFFFFF1E8u; // 801AD9A4
  c->lr=0x801AD9ACu; f_801B640C(c); // 801AD9A8
  c->r[3]=0u+0x801B0000u; // 801AD9AC
  c->r[3]=c->r[3]+0xFFFFFA40u; // 801AD9B0
  c->lr=0x801AD9B8u; f_801AD244(c); // 801AD9B4
  c->r[31]=0u+0x801B0000u; // 801AD9B8
  c->r[3]=c->r[31]+0xFFFFF808u; // 801AD9BC
  c->lr=0x801AD9C4u; f_801AD254(c); // 801AD9C0
  c->lr=0x801AD9C8u; f_801B0208(c); // 801AD9C4
  c->r[3]=0u+0x803C0000u; // 801AD9C8
  c->r[4]=0u+0x00000000u; // 801AD9CC
  c->r[3]=c->r[3]+0x00007D08u; // 801AD9D0
  c->r[5]=0u+0x0000002Du; // 801AD9D4
  c->lr=0x801AD9DCu; f_80004688(c); // 801AD9D8
  c->r[3]=c->r[31]+0xFFFFF808u; // 801AD9DC
  c->lr=0x801AD9E4u; f_801AD254(c); // 801AD9E0
  c->r[3]=0u+0x801B0000u; // 801AD9E4
  c->r[4]=0u+0x00000000u; // 801AD9E8
  c->r[3]=c->r[3]+0xFFFFF724u; // 801AD9EC
  c->lr=0x801AD9F4u; f_801C6008(c); // 801AD9F0
  c->lr=0x801AD9F8u; f_801BE760(c); // 801AD9F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD9F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AD9FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801ADA00
  c->lr=c->r[0]; // 801ADA04
  c->r[1]=c->r[1]+0x00000020u; // 801ADA08
  return; // 801ADA0C
}

// bta_dm_disable
void f_801ADA10(Ctx* __restrict c) {
  trace_call(0x801ADA10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADA10
  c->r[0]=c->lr; // 801ADA14
  c->r[3]=c->r[2]+0xFFFF9520u; // 801ADA18
  c->r[4]=0u+0x00000000u; // 801ADA1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADA20
  c->lr=0x801ADA28u; f_801C5EEC(c); // 801ADA24
  c->lr=0x801ADA2Cu; f_801AD66C(c); // 801ADA28
  c->r[3]=0u+0x00000000u; // 801ADA2C
  c->r[4]=0u+0x00000000u; // 801ADA30
  c->r[5]=0u+0x00000000u; // 801ADA34
  c->lr=0x801ADA3Cu; f_801B6F08(c); // 801ADA38
  c->r[3]=0u+0x00000000u; // 801ADA3C
  c->r[4]=0u+0x00000000u; // 801ADA40
  c->r[5]=0u+0x00000000u; // 801ADA44
  c->lr=0x801ADA4Cu; f_801B7384(c); // 801ADA48
  c->lr=0x801ADA50u; f_801B0270(c); // 801ADA4C
  c->lr=0x801ADA54u; f_801B3F48(c); // 801ADA50
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801ADA54
  if (!crb(c,2)) { goto L_801ADA84; } // 801ADA58
  c->r[6]=0u+0x801B0000u; // 801ADA5C
  c->r[3]=0u+0x803C0000u; // 801ADA60
  c->r[3]=c->r[3]+0x00007DB4u; // 801ADA64
  c->r[4]=0u+0x00000000u; // 801ADA68
  c->r[6]=c->r[6]+0xFFFFF630u; // 801ADA6C
  c->r[5]=0u+0x000003E8u; // 801ADA70
  W32(c->r[3]+0x0000007Cu,c->r[6]); // 801ADA74
  c->r[3]=c->r[3]+0x00000074u; // 801ADA78
  c->lr=0x801ADA80u; f_801AD638(c); // 801ADA7C
  goto L_801ADAB0; // 801ADA80
L_801ADA84:;
  c->r[6]=0u+0x803C0000u; // 801ADA84
  c->r[5]=0u+0x801B0000u; // 801ADA88
  c->r[6]=c->r[6]+0x00007DB4u; // 801ADA8C
  c->r[0]=0u+0x00000001u; // 801ADA90
  c->r[5]=c->r[5]+0xFFFFDAC0u; // 801ADA94
  W8(c->r[6]+0x00000072u,c->r[0]); // 801ADA98
  c->r[3]=c->r[6]+0x00000074u; // 801ADA9C
  c->r[4]=0u+0x00000000u; // 801ADAA0
  W32(c->r[6]+0x0000007Cu,c->r[5]); // 801ADAA4
  c->r[5]=0u+0x00001388u; // 801ADAA8
  c->lr=0x801ADAB0u; f_801AD638(c); // 801ADAAC
L_801ADAB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADAB0
  c->lr=c->r[0]; // 801ADAB4
  c->r[1]=c->r[1]+0x00000010u; // 801ADAB8
  return; // 801ADABC
}

// bta_dm_disable_timer_cback
void f_801ADAC0(Ctx* __restrict c) {
  trace_call(0x801ADAC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADAC0
  c->r[0]=c->lr; // 801ADAC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADAC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADACC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ADAD0
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801ADAD4
  cmpu(c,0,c->r[0],0x00000004u); // 801ADAD8
  if (crb(c,0)) { goto L_801ADAF0; } // 801ADADC
  c->r[4]=0u+0x80330000u; // 801ADAE0
  c->r[3]=0u+0x00000503u; // 801ADAE4
  c->r[4]=c->r[4]+0x00001710u; // 801ADAE8
  c->lr=0x801ADAF0u; f_801ACB20(c); // 801ADAEC
L_801ADAF0:;
  c->lr=0x801ADAF4u; f_801B3F48(c); // 801ADAF0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801ADAF4
  if (crb(c,2)) { goto L_801ADB40; } // 801ADAF8
  c->r[3]=0u+0x803C0000u; // 801ADAFC
  c->r[31]=c->r[3]+0x00007DB4u; // 801ADB00
  c->r[0]=R8(c->r[31]+0x00000101u); // 801ADB04
  cmps(c,0,(int32_t)c->r[0],0); // 801ADB08
  if (!crb(c,2)) { goto L_801ADB40; } // 801ADB0C
  c->r[30]=0u+0x00000000u; // 801ADB10
  goto L_801ADB2C; // 801ADB14
L_801ADB18:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801ADB18
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801ADB1C
  c->r[3]=c->r[31]+c->r[0]; // 801ADB20
  c->lr=0x801ADB28u; f_801B4AA4(c); // 801ADB24
  c->r[30]=c->r[30]+0x00000001u; // 801ADB28
L_801ADB2C:;
  c->r[0]=R8(c->r[31]+0x0000004Du); // 801ADB2C
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801ADB30
  cmpu(c,0,c->r[3],c->r[0]); // 801ADB34
  if (crb(c,0)) { IRQCHK(c); goto L_801ADB18; } // 801ADB38
  goto L_801ADB64; // 801ADB3C
L_801ADB40:;
  c->r[5]=0u+0x803C0000u; // 801ADB40
  c->r[0]=0u+0x00000000u; // 801ADB44
  c->r[5]=c->r[5]+0x00007DB4u; // 801ADB48
  c->r[3]=0u+0x00000001u; // 801ADB4C
  c->r[12]=R32(c->r[5]+0x00000050u); // 801ADB50
  c->r[4]=0u+0x00000000u; // 801ADB54
  W8(c->r[5]+0x00000072u,c->r[0]); // 801ADB58
  c->ctr=c->r[12]; // 801ADB5C
  if (true) { c->lr=0x801ADB64u; dispatch(c,c->ctr); } // 801ADB60
L_801ADB64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADB64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADB68
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ADB6C
  c->lr=c->r[0]; // 801ADB70
  c->r[1]=c->r[1]+0x00000010u; // 801ADB74
  return; // 801ADB78
}

// fn_801ADB7C
void f_801ADB7C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000008u; // 801ADB7C
  f_801B62C8(c); return; // 801ADB80
}

// bta_dm_set_visibility
void f_801ADB84(Ctx* __restrict c) {
  trace_call(0x801ADB84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADB84
  c->r[0]=c->lr; // 801ADB88
  c->r[4]=0u+0x00000000u; // 801ADB8C
  c->r[5]=0u+0x00000000u; // 801ADB90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADB94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADB98
  c->r[31]=c->r[3]|c->r[3]; // 801ADB9C
  c->r[3]=R8(c->r[3]+0x00000008u); // 801ADBA0
  c->lr=0x801ADBA8u; f_801B6F08(c); // 801ADBA4
  c->r[3]=R8(c->r[31]+0x00000009u); // 801ADBA8
  c->r[4]=0u+0x00000000u; // 801ADBAC
  c->r[5]=0u+0x00000000u; // 801ADBB0
  c->lr=0x801ADBB8u; f_801B7384(c); // 801ADBB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADBB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADBBC
  c->lr=c->r[0]; // 801ADBC0
  c->r[1]=c->r[1]+0x00000010u; // 801ADBC4
  return; // 801ADBC8
}

// bta_dm_bond
void f_801ADBCC(Ctx* __restrict c) {
  trace_call(0x801ADBCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADBCC
  c->r[0]=c->lr; // 801ADBD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ADBD4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ADBD8
  c->r[31]=c->r[3]|c->r[3]; // 801ADBDC
  c->r[3]=c->r[3]+0x00000008u; // 801ADBE0
  c->lr=0x801ADBE8u; f_801BD458(c); // 801ADBE4
  cmps(c,0,(int32_t)c->r[3],0); // 801ADBE8
  if (crb(c,2)) { goto L_801ADC04; } // 801ADBEC
  c->r[4]=c->r[3]|c->r[3]; // 801ADBF0
  c->r[3]=c->r[1]+0x00000008u; // 801ADBF4
  c->r[5]=0u+0x00000008u; // 801ADBF8
  c->lr=0x801ADC00u; f_80004338(c); // 801ADBFC
  goto L_801ADC14; // 801ADC00
L_801ADC04:;
  c->r[3]=c->r[1]+0x00000008u; // 801ADC04
  c->r[4]=0u+0x00000000u; // 801ADC08
  c->r[5]=0u+0x00000008u; // 801ADC0C
  c->lr=0x801ADC14u; f_80004688(c); // 801ADC10
L_801ADC14:;
  c->r[4]=R8(c->r[31]+0x0000000Eu); // 801ADC14
  c->r[3]=c->r[31]+0x00000008u; // 801ADC18
  c->r[5]=c->r[31]+0x0000000Fu; // 801ADC1C
  c->r[6]=c->r[1]+0x00000008u; // 801ADC20
  c->lr=0x801ADC28u; f_801BAB5C(c); // 801ADC24
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ADC28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801ADC2C
  c->lr=c->r[0]; // 801ADC30
  c->r[1]=c->r[1]+0x00000020u; // 801ADC34
  return; // 801ADC38
}

// bta_dm_pin_reply
void f_801ADC3C(Ctx* __restrict c) {
  trace_call(0x801ADC3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADC3C
  c->r[0]=c->lr; // 801ADC40
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ADC44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ADC48
  c->r[31]=c->r[3]|c->r[3]; // 801ADC4C
  c->r[3]=c->r[3]+0x00000008u; // 801ADC50
  c->lr=0x801ADC58u; f_801BD458(c); // 801ADC54
  cmps(c,0,(int32_t)c->r[3],0); // 801ADC58
  if (crb(c,2)) { goto L_801ADC74; } // 801ADC5C
  c->r[4]=c->r[3]|c->r[3]; // 801ADC60
  c->r[3]=c->r[1]+0x00000008u; // 801ADC64
  c->r[5]=0u+0x00000008u; // 801ADC68
  c->lr=0x801ADC70u; f_80004338(c); // 801ADC6C
  goto L_801ADC84; // 801ADC70
L_801ADC74:;
  c->r[3]=c->r[1]+0x00000008u; // 801ADC74
  c->r[4]=0u+0x00000000u; // 801ADC78
  c->r[5]=0u+0x00000008u; // 801ADC7C
  c->lr=0x801ADC84u; f_80004688(c); // 801ADC80
L_801ADC84:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801ADC84
  cmps(c,0,(int32_t)c->r[0],0); // 801ADC88
  if (crb(c,2)) { goto L_801ADCAC; } // 801ADC8C
  c->r[5]=R8(c->r[31]+0x0000000Fu); // 801ADC90
  c->r[3]=c->r[31]+0x00000008u; // 801ADC94
  c->r[6]=c->r[31]+0x00000010u; // 801ADC98
  c->r[7]=c->r[1]+0x00000008u; // 801ADC9C
  c->r[4]=0u+0x00000000u; // 801ADCA0
  c->lr=0x801ADCA8u; f_801BA8BC(c); // 801ADCA4
  goto L_801ADCC4; // 801ADCA8
L_801ADCAC:;
  c->r[3]=c->r[31]+0x00000008u; // 801ADCAC
  c->r[7]=c->r[1]+0x00000008u; // 801ADCB0
  c->r[4]=0u+0x0000000Bu; // 801ADCB4
  c->r[5]=0u+0x00000000u; // 801ADCB8
  c->r[6]=0u+0x00000000u; // 801ADCBC
  c->lr=0x801ADCC4u; f_801BA8BC(c); // 801ADCC0
L_801ADCC4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ADCC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801ADCC8
  c->lr=c->r[0]; // 801ADCCC
  c->r[1]=c->r[1]+0x00000020u; // 801ADCD0
  return; // 801ADCD4
}

// bta_dm_auth_reply
void f_801ADCD8(Ctx* __restrict c) {
  trace_call(0x801ADCD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADCD8
  c->r[0]=c->lr; // 801ADCDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ADCE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ADCE4
  c->r[31]=c->r[3]|c->r[3]; // 801ADCE8
  c->r[3]=c->r[3]+0x00000008u; // 801ADCEC
  c->lr=0x801ADCF4u; f_801BD458(c); // 801ADCF0
  cmps(c,0,(int32_t)c->r[3],0); // 801ADCF4
  if (crb(c,2)) { goto L_801ADD10; } // 801ADCF8
  c->r[4]=c->r[3]|c->r[3]; // 801ADCFC
  c->r[3]=c->r[1]+0x00000008u; // 801ADD00
  c->r[5]=0u+0x00000008u; // 801ADD04
  c->lr=0x801ADD0Cu; f_80004338(c); // 801ADD08
  goto L_801ADD20; // 801ADD0C
L_801ADD10:;
  c->r[3]=c->r[1]+0x00000008u; // 801ADD10
  c->r[4]=0u+0x00000000u; // 801ADD14
  c->r[5]=0u+0x00000008u; // 801ADD18
  c->lr=0x801ADD20u; f_80004688(c); // 801ADD1C
L_801ADD20:;
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 801ADD20
  cmpu(c,0,c->r[0],0x00000002u); // 801ADD24
  if (crb(c,2)) { goto L_801ADD88; } // 801ADD28
  cmps(c,0,(int32_t)c->r[0],0); // 801ADD2C
  if (!crb(c,2)) { goto L_801ADD74; } // 801ADD30
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801ADD34
  cmpu(c,0,c->r[0],0x00000017u); // 801ADD38
  if (crb(c,1)) { goto L_801ADD74; } // 801ADD3C
  c->r[3]=0u+0x802E0000u; // 801ADD40
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801ADD44
  c->r[3]=c->r[3]+0x000010E0u; // 801ADD48
  c->r[5]=c->r[1]+0x00000008u; // 801ADD4C
  c->r[4]=R32(c->r[3]+c->r[0]); // 801ADD50
  c->r[3]=0u+0x00000001u; // 801ADD54
  c->r[0]=rotl(c->r[4],0)&0x00001FE0u; // 801ADD58
  c->r[6]=rotl(c->r[4],29)&0x000003FCu; // 801ADD5C
  c->r[0]=c->r[4]-c->r[0]; // 801ADD60
  c->r[4]=R32(c->r[5]+c->r[6]); // 801ADD64
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801ADD68
  c->r[0]=c->r[4]|c->r[0]; // 801ADD6C
  W32(c->r[5]+c->r[6],c->r[0]); // 801ADD70
L_801ADD74:;
  c->r[3]=c->r[31]+0x00000008u; // 801ADD74
  c->r[5]=c->r[1]+0x00000008u; // 801ADD78
  c->r[4]=0u+0x00000000u; // 801ADD7C
  c->lr=0x801ADD84u; f_801BA980(c); // 801ADD80
  goto L_801ADD98; // 801ADD84
L_801ADD88:;
  c->r[3]=c->r[31]+0x00000008u; // 801ADD88
  c->r[5]=c->r[1]+0x00000008u; // 801ADD8C
  c->r[4]=0u+0x0000000Bu; // 801ADD90
  c->lr=0x801ADD98u; f_801BA980(c); // 801ADD94
L_801ADD98:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ADD98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801ADD9C
  c->lr=c->r[0]; // 801ADDA0
  c->r[1]=c->r[1]+0x00000020u; // 801ADDA4
  return; // 801ADDA8
}

// bta_dm_search_start
void f_801ADDAC(Ctx* __restrict c) {
  trace_call(0x801ADDACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADDAC
  c->r[0]=c->lr; // 801ADDB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADDB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADDB8
  c->r[31]=c->r[3]|c->r[3]; // 801ADDBC
  c->r[3]=0u+0x00000000u; // 801ADDC0
  c->lr=0x801ADDC8u; f_801B7BEC(c); // 801ADDC4
  c->r[0]=R32(c->r[31]+0x00000018u); // 801ADDC8
  c->r[3]=0u+0x803C0000u; // 801ADDCC
  c->r[4]=0u+0x801B0000u; // 801ADDD0
  c->r[5]=0u+0x801B0000u; // 801ADDD4
  W32(c->r[3]+0x00007D38u,c->r[0]); // 801ADDD8
  c->r[6]=c->r[3]+0x00007D38u; // 801ADDDC
  c->r[3]=c->r[31]+0x00000008u; // 801ADDE0
  c->r[4]=c->r[4]+0xFFFFEBD4u; // 801ADDE4
  c->r[0]=R32(c->r[31]+0x00000014u); // 801ADDE8
  c->r[5]=c->r[5]+0xFFFFEC64u; // 801ADDEC
  W32(c->r[6]+0x00000008u,c->r[0]); // 801ADDF0
  c->lr=0x801ADDF8u; f_801B7624(c); // 801ADDF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADDF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADDFC
  c->lr=c->r[0]; // 801ADE00
  c->r[1]=c->r[1]+0x00000010u; // 801ADE04
  return; // 801ADE08
}

// bta_dm_search_cancel
void f_801ADE0C(Ctx* __restrict c) {
  trace_call(0x801ADE0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADE0C
  c->r[0]=c->lr; // 801ADE10
  c->r[3]=0u+0x00000000u; // 801ADE14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADE18
  c->lr=0x801ADE20u; f_801B7BEC(c); // 801ADE1C
  c->lr=0x801ADE24u; f_801B750C(c); // 801ADE20
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801ADE24
  if (crb(c,2)) { goto L_801ADE68; } // 801ADE28
  c->lr=0x801ADE30u; f_801B751C(c); // 801ADE2C
  c->r[4]=0u+0x803C0000u; // 801ADE30
  c->r[3]=0u+0x00000004u; // 801ADE34
  c->r[12]=R32(c->r[4]+0x00007D38u); // 801ADE38
  c->r[4]=0u+0x00000000u; // 801ADE3C
  c->ctr=c->r[12]; // 801ADE40
  if (true) { c->lr=0x801ADE48u; dispatch(c,c->ctr); } // 801ADE44
  c->r[3]=0u+0x00000110u; // 801ADE48
  c->lr=0x801ADE50u; f_801A9FA0(c); // 801ADE4C
  cmps(c,0,(int32_t)c->r[3],0); // 801ADE50
  if (crb(c,2)) { goto L_801ADE80; } // 801ADE54
  c->r[0]=0u+0x00000207u; // 801ADE58
  W16(c->r[3]+0x00000000u,c->r[0]); // 801ADE5C
  c->lr=0x801ADE64u; f_801AD61C(c); // 801ADE60
  goto L_801ADE80; // 801ADE64
L_801ADE68:;
  c->r[3]=0u+0x803C0000u; // 801ADE68
  c->r[3]=c->r[3]+0x00007D38u; // 801ADE6C
  c->r[0]=R32(c->r[3]+0x00000008u); // 801ADE70
  cmps(c,0,(int32_t)c->r[0],0); // 801ADE74
  if (!crb(c,2)) { goto L_801ADE80; } // 801ADE78
  c->lr=0x801ADE80u; f_801B78C0(c); // 801ADE7C
L_801ADE80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADE80
  c->lr=c->r[0]; // 801ADE84
  c->r[1]=c->r[1]+0x00000010u; // 801ADE88
  return; // 801ADE8C
}

// bta_dm_discover
void f_801ADE90(Ctx* __restrict c) {
  trace_call(0x801ADE90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADE90
  c->r[0]=c->lr; // 801ADE94
  c->r[4]=0u+0x803C0000u; // 801ADE98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADE9C
  c->r[0]=0u+0x00000000u; // 801ADEA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADEA4
  c->r[31]=c->r[4]+0x00007D38u; // 801ADEA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ADEAC
  c->r[30]=c->r[3]|c->r[3]; // 801ADEB0
  c->r[5]=R32(c->r[3]+0x00000014u); // 801ADEB4
  W32(c->r[4]+0x00007D38u,c->r[5]); // 801ADEB8
  c->r[4]=0u+0x801B0000u; // 801ADEBC
  c->r[5]=R32(c->r[3]+0x00000010u); // 801ADEC0
  c->r[3]=c->r[4]+0xFFFFECB0u; // 801ADEC4
  W32(c->r[31]+0x00000008u,c->r[5]); // 801ADEC8
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 801ADECC
  W8(c->r[31]+0x00000070u,c->r[0]); // 801ADED0
  W32(c->r[31]+0x00000010u,c->r[0]); // 801ADED4
  W8(c->r[31]+0x00000020u,c->r[0]); // 801ADED8
  c->lr=0x801ADEE0u; f_801BA540(c); // 801ADEDC
  c->r[3]=c->r[31]+0x0000001Au; // 801ADEE0
  c->r[4]=c->r[30]+0x00000008u; // 801ADEE4
  c->lr=0x801ADEECu; f_801AD170(c); // 801ADEE8
  c->r[0]=R32(c->r[31]+0x00000008u); // 801ADEEC
  cmps(c,0,(int32_t)c->r[0],0); // 801ADEF0
  if (crb(c,2)) { goto L_801ADF04; } // 801ADEF4
  c->r[3]=c->r[31]+0x0000001Au; // 801ADEF8
  c->lr=0x801ADF00u; f_801AE90C(c); // 801ADEFC
  goto L_801ADF8C; // 801ADF00
L_801ADF04:;
  c->r[3]=0u+0x803D0000u; // 801ADF04
  c->r[3]=c->r[3]+0xFFFF8118u; // 801ADF08
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 801ADF0C
  cmpu(c,0,c->r[4],0x00007530u); // 801ADF10
  if (!crb(c,0)) { goto L_801ADF28; } // 801ADF14
  c->r[5]=c->r[4]+0x00000064u; // 801ADF18
  c->r[3]=c->r[31]+0x00000058u; // 801ADF1C
  c->r[4]=0u+0x00000205u; // 801ADF20
  c->lr=0x801ADF28u; f_801AD638(c); // 801ADF24
L_801ADF28:;
  c->r[31]=0u+0x803C0000u; // 801ADF28
  c->r[4]=0u+0x801B0000u; // 801ADF2C
  c->r[31]=c->r[31]+0x00007D38u; // 801ADF30
  c->r[3]=c->r[31]+0x0000001Au; // 801ADF34
  c->r[4]=c->r[4]+0xFFFFED7Cu; // 801ADF38
  c->lr=0x801ADF40u; f_801B77D8(c); // 801ADF3C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801ADF40
  cmpu(c,0,c->r[0],0x00000001u); // 801ADF44
  if (crb(c,2)) { goto L_801ADF8C; } // 801ADF48
  c->r[3]=c->r[31]+0x00000058u; // 801ADF4C
  c->lr=0x801ADF54u; f_801AD658(c); // 801ADF50
  c->r[3]=0u+0x00000110u; // 801ADF54
  c->lr=0x801ADF5Cu; f_801A9FA0(c); // 801ADF58
  cmps(c,0,(int32_t)c->r[3],0); // 801ADF5C
  c->r[30]=c->r[3]|c->r[3]; // 801ADF60
  if (crb(c,2)) { goto L_801ADF8C; } // 801ADF64
  c->r[3]=c->r[3]+0x00000008u; // 801ADF68
  c->r[4]=c->r[31]+0x0000001Au; // 801ADF6C
  c->lr=0x801ADF74u; f_801AD170(c); // 801ADF70
  c->r[3]=0u+0x00000000u; // 801ADF74
  c->r[0]=0u+0x00000204u; // 801ADF78
  W8(c->r[30]+0x0000000Eu,c->r[3]); // 801ADF7C
  c->r[3]=c->r[30]|c->r[30]; // 801ADF80
  W16(c->r[30]+0x00000000u,c->r[0]); // 801ADF84
  c->lr=0x801ADF8Cu; f_801AD61C(c); // 801ADF88
L_801ADF8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADF8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADF90
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ADF94
  c->lr=c->r[0]; // 801ADF98
  c->r[1]=c->r[1]+0x00000010u; // 801ADF9C
  return; // 801ADFA0
}

// bta_dm_inq_cmpl
void f_801ADFA4(Ctx* __restrict c) {
  trace_call(0x801ADFA4u);
  {uint32_t ea=c->r[1]+0xFFFFFDD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADFA4
  c->r[0]=c->lr; // 801ADFA8
  W32(c->r[1]+0x00000234u,c->r[0]); // 801ADFAC
  c->r[11]=c->r[1]+0x00000230u; // 801ADFB0
  c->lr=0x801ADFB8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ADFB4
  c->r[31]=c->r[3]|c->r[3]; // 801ADFB8
  c->r[27]=0u+0x00000001u; // 801ADFBC
  c->lr=0x801ADFC4u; f_801B79F8(c); // 801ADFC0
  c->r[28]=0u+0x803C0000u; // 801ADFC4
  cmps(c,0,(int32_t)c->r[3],0); // 801ADFC8
  c->r[29]=c->r[28]+0x00007D38u; // 801ADFCC
  W32(c->r[29]+0x00000004u,c->r[3]); // 801ADFD0
  if (crb(c,2)) { goto L_801AE15C; } // 801ADFD4
  c->r[0]=R32(c->r[29]+0x00000008u); // 801ADFD8
  c->r[27]=0u+0x00000000u; // 801ADFDC
  cmps(c,0,(int32_t)c->r[0],0); // 801ADFE0
  if (crb(c,2)) { goto L_801AE05C; } // 801ADFE4
  c->r[3]=c->r[3]+0x00000002u; // 801ADFE8
  c->lr=0x801ADFF0u; f_801B3E70(c); // 801ADFEC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801ADFF0
  if (crb(c,2)) { goto L_801AE004; } // 801ADFF4
  c->r[0]=0u+0x00000000u; // 801ADFF8
  W8(c->r[29]+0x00000078u,c->r[0]); // 801ADFFC
  goto L_801AE00C; // 801AE000
L_801AE004:;
  c->r[0]=0u+0x00000001u; // 801AE004
  W8(c->r[29]+0x00000078u,c->r[0]); // 801AE008
L_801AE00C:;
  c->r[30]=0u+0x803C0000u; // 801AE00C
  c->r[3]=0u+0x801B0000u; // 801AE010
  c->r[30]=c->r[30]+0x00007D38u; // 801AE014
  c->r[29]=0u+0x00000000u; // 801AE018
  W8(c->r[30]+0x00000079u,c->r[29]); // 801AE01C
  c->r[3]=c->r[3]+0xFFFFECB0u; // 801AE020
  c->lr=0x801AE028u; f_801BA540(c); // 801AE024
  c->r[0]=R32(c->r[30]+0x00000008u); // 801AE028
  c->r[3]=c->r[30]+0x0000001Au; // 801AE02C
  c->r[4]=R32(c->r[30]+0x00000004u); // 801AE030
  W8(c->r[30]+0x00000070u,c->r[29]); // 801AE034
  c->r[4]=c->r[4]+0x00000002u; // 801AE038
  W32(c->r[30]+0x00000010u,c->r[29]); // 801AE03C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801AE040
  W8(c->r[30]+0x00000020u,c->r[29]); // 801AE044
  c->lr=0x801AE04Cu; f_801AD170(c); // 801AE048
  c->r[3]=R32(c->r[30]+0x00000004u); // 801AE04C
  c->r[3]=c->r[3]+0x00000002u; // 801AE050
  c->lr=0x801AE058u; f_801AE90C(c); // 801AE054
  goto L_801AE15C; // 801AE058
L_801AE05C:;
  c->r[27]=0u+0x00000001u; // 801AE05C
  c->r[30]=0u+0x00000000u; // 801AE060
  goto L_801AE150; // 801AE064
L_801AE068:;
  c->r[0]=R8(c->r[4]+0x00000010u); // 801AE068
  cmps(c,0,(int32_t)c->r[0],0); // 801AE06C
  if (crb(c,2)) { goto L_801AE0A0; } // 801AE070
  c->r[3]=c->r[1]+0x00000008u; // 801AE074
  c->r[4]=c->r[4]+0x00000002u; // 801AE078
  c->lr=0x801AE080u; f_801AD170(c); // 801AE07C
  c->r[12]=R32(c->r[28]+0x00007D38u); // 801AE080
  c->r[4]=c->r[1]+0x00000008u; // 801AE084
  W8(c->r[1]+0x0000000Eu,c->r[30]); // 801AE088
  c->r[3]=0u+0x00000002u; // 801AE08C
  W32(c->r[1]+0x00000108u,c->r[30]); // 801AE090
  c->ctr=c->r[12]; // 801AE094
  if (true) { c->lr=0x801AE09Cu; dispatch(c,c->ctr); } // 801AE098
  goto L_801AE144; // 801AE09C
L_801AE0A0:;
  c->r[3]=0u+0x803D0000u; // 801AE0A0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801AE0A4
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 801AE0A8
  cmpu(c,0,c->r[4],0x00007530u); // 801AE0AC
  if (!crb(c,0)) { goto L_801AE0CC; } // 801AE0B0
  c->r[3]=0u+0x803C0000u; // 801AE0B4
  c->r[5]=c->r[4]+0x00000064u; // 801AE0B8
  c->r[3]=c->r[3]+0x00007D38u; // 801AE0BC
  c->r[4]=0u+0x00000205u; // 801AE0C0
  c->r[3]=c->r[3]+0x00000058u; // 801AE0C4
  c->lr=0x801AE0CCu; f_801AD638(c); // 801AE0C8
L_801AE0CC:;
  c->r[30]=0u+0x803C0000u; // 801AE0CC
  c->r[4]=0u+0x801B0000u; // 801AE0D0
  c->r[30]=c->r[30]+0x00007D38u; // 801AE0D4
  c->r[3]=R32(c->r[30]+0x00000004u); // 801AE0D8
  c->r[4]=c->r[4]+0xFFFFECF0u; // 801AE0DC
  c->r[3]=c->r[3]+0x00000002u; // 801AE0E0
  c->lr=0x801AE0E8u; f_801B77D8(c); // 801AE0E4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801AE0E8
  cmpu(c,0,c->r[0],0x00000001u); // 801AE0EC
  if (crb(c,2)) { goto L_801AE13C; } // 801AE0F0
  c->r[3]=c->r[30]+0x00000058u; // 801AE0F4
  c->lr=0x801AE0FCu; f_801AD658(c); // 801AE0F8
  c->r[4]=R32(c->r[30]+0x00000004u); // 801AE0FC
  c->r[3]=0u+0x00000110u; // 801AE100
  c->r[28]=c->r[4]+0x00000002u; // 801AE104
  c->lr=0x801AE10Cu; f_801A9FA0(c); // 801AE108
  cmps(c,0,(int32_t)c->r[3],0); // 801AE10C
  c->r[29]=c->r[3]|c->r[3]; // 801AE110
  if (crb(c,2)) { goto L_801AE13C; } // 801AE114
  c->r[4]=c->r[28]|c->r[28]; // 801AE118
  c->r[3]=c->r[3]+0x00000008u; // 801AE11C
  c->lr=0x801AE124u; f_801AD170(c); // 801AE120
  c->r[3]=0u+0x00000000u; // 801AE124
  c->r[0]=0u+0x00000204u; // 801AE128
  W8(c->r[29]+0x0000000Eu,c->r[3]); // 801AE12C
  c->r[3]=c->r[29]|c->r[29]; // 801AE130
  W16(c->r[29]+0x00000000u,c->r[0]); // 801AE134
  c->lr=0x801AE13Cu; f_801AD61C(c); // 801AE138
L_801AE13C:;
  c->r[27]=0u+0x00000000u; // 801AE13C
  goto L_801AE15C; // 801AE140
L_801AE144:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801AE144
  c->lr=0x801AE14Cu; f_801B7AB0(c); // 801AE148
  W32(c->r[29]+0x00000004u,c->r[3]); // 801AE14C
L_801AE150:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 801AE150
  cmps(c,0,(int32_t)c->r[4],0); // 801AE154
  if (!crb(c,2)) { IRQCHK(c); goto L_801AE068; } // 801AE158
L_801AE15C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801AE15C
  if (crb(c,2)) { goto L_801AE190; } // 801AE160
  c->r[4]=0u+0x803C0000u; // 801AE164
  c->r[0]=0u+0x00000000u; // 801AE168
  c->r[4]=c->r[4]+0x00007D38u; // 801AE16C
  c->r[3]=0u+0x00000110u; // 801AE170
  W32(c->r[4]+0x00000008u,c->r[0]); // 801AE174
  c->lr=0x801AE17Cu; f_801A9FA0(c); // 801AE178
  cmps(c,0,(int32_t)c->r[3],0); // 801AE17C
  if (crb(c,2)) { goto L_801AE190; } // 801AE180
  c->r[0]=0u+0x00000207u; // 801AE184
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE188
  c->lr=0x801AE190u; f_801AD61C(c); // 801AE18C
L_801AE190:;
  c->r[3]=0u+0x803C0000u; // 801AE190
  c->r[0]=R8(c->r[31]+0x00000008u); // 801AE194
  c->r[12]=R32(c->r[3]+0x00007D38u); // 801AE198
  c->r[4]=c->r[1]+0x00000110u; // 801AE19C
  W8(c->r[1]+0x00000110u,c->r[0]); // 801AE1A0
  c->r[3]=0u+0x00000001u; // 801AE1A4
  c->ctr=c->r[12]; // 801AE1A8
  if (true) { c->lr=0x801AE1B0u; dispatch(c,c->ctr); } // 801AE1AC
  c->r[11]=c->r[1]+0x00000230u; // 801AE1B0
  c->lr=0x801AE1B8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AE1B4
  c->r[0]=R32(c->r[1]+0x00000234u); // 801AE1B8
  c->lr=c->r[0]; // 801AE1BC
  c->r[1]=c->r[1]+0x00000230u; // 801AE1C0
  return; // 801AE1C4
}

// bta_dm_rmt_name
void f_801AE1C8(Ctx* __restrict c) {
  trace_call(0x801AE1C8u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE1C8
  c->r[0]=c->lr; // 801AE1CC
  W32(c->r[1]+0x00000134u,c->r[0]); // 801AE1D0
  c->r[11]=c->r[1]+0x00000130u; // 801AE1D4
  c->lr=0x801AE1DCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AE1D8
  c->r[28]=0u+0x803C0000u; // 801AE1DC
  c->r[31]=c->r[3]|c->r[3]; // 801AE1E0
  c->r[27]=0u+0x00000001u; // 801AE1E4
  c->r[30]=0u+0x00000000u; // 801AE1E8
  c->r[29]=c->r[28]+0x00007D38u; // 801AE1EC
  goto L_801AE2CC; // 801AE1F0
L_801AE1F4:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 801AE1F4
  c->r[0]=R8(c->r[4]+0x00000010u); // 801AE1F8
  cmps(c,0,(int32_t)c->r[0],0); // 801AE1FC
  if (crb(c,2)) { goto L_801AE230; } // 801AE200
  c->r[3]=c->r[1]+0x00000008u; // 801AE204
  c->r[4]=c->r[4]+0x00000002u; // 801AE208
  c->lr=0x801AE210u; f_801AD170(c); // 801AE20C
  c->r[12]=R32(c->r[28]+0x00007D38u); // 801AE210
  c->r[4]=c->r[1]+0x00000008u; // 801AE214
  W8(c->r[1]+0x0000000Eu,c->r[30]); // 801AE218
  c->r[3]=0u+0x00000002u; // 801AE21C
  W32(c->r[1]+0x00000108u,c->r[30]); // 801AE220
  c->ctr=c->r[12]; // 801AE224
  if (true) { c->lr=0x801AE22Cu; dispatch(c,c->ctr); } // 801AE228
  goto L_801AE2CC; // 801AE22C
L_801AE230:;
  c->r[3]=0u+0x803D0000u; // 801AE230
  c->r[3]=c->r[3]+0xFFFF8118u; // 801AE234
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 801AE238
  cmpu(c,0,c->r[4],0x00007530u); // 801AE23C
  if (!crb(c,0)) { goto L_801AE254; } // 801AE240
  c->r[5]=c->r[4]+0x00000064u; // 801AE244
  c->r[3]=c->r[29]+0x00000058u; // 801AE248
  c->r[4]=0u+0x00000205u; // 801AE24C
  c->lr=0x801AE254u; f_801AD638(c); // 801AE250
L_801AE254:;
  c->r[30]=0u+0x803C0000u; // 801AE254
  c->r[4]=0u+0x801B0000u; // 801AE258
  c->r[30]=c->r[30]+0x00007D38u; // 801AE25C
  c->r[3]=R32(c->r[30]+0x00000004u); // 801AE260
  c->r[4]=c->r[4]+0xFFFFECF0u; // 801AE264
  c->r[3]=c->r[3]+0x00000002u; // 801AE268
  c->lr=0x801AE270u; f_801B77D8(c); // 801AE26C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801AE270
  cmpu(c,0,c->r[0],0x00000001u); // 801AE274
  if (crb(c,2)) { goto L_801AE2C4; } // 801AE278
  c->r[3]=c->r[30]+0x00000058u; // 801AE27C
  c->lr=0x801AE284u; f_801AD658(c); // 801AE280
  c->r[4]=R32(c->r[30]+0x00000004u); // 801AE284
  c->r[3]=0u+0x00000110u; // 801AE288
  c->r[28]=c->r[4]+0x00000002u; // 801AE28C
  c->lr=0x801AE294u; f_801A9FA0(c); // 801AE290
  cmps(c,0,(int32_t)c->r[3],0); // 801AE294
  c->r[29]=c->r[3]|c->r[3]; // 801AE298
  if (crb(c,2)) { goto L_801AE2C4; } // 801AE29C
  c->r[4]=c->r[28]|c->r[28]; // 801AE2A0
  c->r[3]=c->r[3]+0x00000008u; // 801AE2A4
  c->lr=0x801AE2ACu; f_801AD170(c); // 801AE2A8
  c->r[3]=0u+0x00000000u; // 801AE2AC
  c->r[0]=0u+0x00000204u; // 801AE2B0
  W8(c->r[29]+0x0000000Eu,c->r[3]); // 801AE2B4
  c->r[3]=c->r[29]|c->r[29]; // 801AE2B8
  W16(c->r[29]+0x00000000u,c->r[0]); // 801AE2BC
  c->lr=0x801AE2C4u; f_801AD61C(c); // 801AE2C0
L_801AE2C4:;
  c->r[27]=0u+0x00000000u; // 801AE2C4
  goto L_801AE2E0; // 801AE2C8
L_801AE2CC:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801AE2CC
  c->lr=0x801AE2D4u; f_801B7AB0(c); // 801AE2D0
  cmps(c,0,(int32_t)c->r[3],0); // 801AE2D4
  W32(c->r[29]+0x00000004u,c->r[3]); // 801AE2D8
  if (!crb(c,2)) { IRQCHK(c); goto L_801AE1F4; } // 801AE2DC
L_801AE2E0:;
  cmps(c,0,(int32_t)c->r[27],0); // 801AE2E0
  if (crb(c,2)) { goto L_801AE304; } // 801AE2E4
  c->r[3]=0u+0x00000110u; // 801AE2E8
  c->lr=0x801AE2F0u; f_801A9FA0(c); // 801AE2EC
  cmps(c,0,(int32_t)c->r[3],0); // 801AE2F0
  if (crb(c,2)) { goto L_801AE304; } // 801AE2F4
  c->r[0]=0u+0x00000207u; // 801AE2F8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE2FC
  c->lr=0x801AE304u; f_801AD61C(c); // 801AE300
L_801AE304:;
  c->r[3]=0u+0x803C0000u; // 801AE304
  c->r[4]=c->r[31]+0x00000008u; // 801AE308
  c->r[12]=R32(c->r[3]+0x00007D38u); // 801AE30C
  c->r[3]=0u+0x00000002u; // 801AE310
  c->ctr=c->r[12]; // 801AE314
  if (true) { c->lr=0x801AE31Cu; dispatch(c,c->ctr); } // 801AE318
  c->r[11]=c->r[1]+0x00000130u; // 801AE31C
  c->lr=0x801AE324u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AE320
  c->r[0]=R32(c->r[1]+0x00000134u); // 801AE324
  c->lr=c->r[0]; // 801AE328
  c->r[1]=c->r[1]+0x00000130u; // 801AE32C
  return; // 801AE330
}

// bta_dm_disc_rmt_name
void f_801AE334(Ctx* __restrict c) {
  trace_call(0x801AE334u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE334
  c->r[0]=c->lr; // 801AE338
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE33C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE340
  c->r[31]=c->r[3]|c->r[3]; // 801AE344
  c->r[3]=0u+0x00000110u; // 801AE348
  c->lr=0x801AE350u; f_801A9FA0(c); // 801AE34C
  cmps(c,0,(int32_t)c->r[3],0); // 801AE350
  if (crb(c,2)) { goto L_801AE364; } // 801AE354
  c->r[0]=0u+0x00000207u; // 801AE358
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE35C
  c->lr=0x801AE364u; f_801AD61C(c); // 801AE360
L_801AE364:;
  c->r[0]=0u+0x00000000u; // 801AE364
  c->r[5]=0u+0x803C0000u; // 801AE368
  W32(c->r[31]+0x00000108u,c->r[0]); // 801AE36C
  c->r[4]=c->r[31]+0x00000008u; // 801AE370
  c->r[3]=0u+0x00000002u; // 801AE374
  c->r[12]=R32(c->r[5]+0x00007D38u); // 801AE378
  c->ctr=c->r[12]; // 801AE37C
  if (true) { c->lr=0x801AE384u; dispatch(c,c->ctr); } // 801AE380
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE384
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE388
  c->lr=c->r[0]; // 801AE38C
  c->r[1]=c->r[1]+0x00000010u; // 801AE390
  return; // 801AE394
}

// bta_dm_sdp_result
void f_801AE398(Ctx* __restrict c) {
  trace_call(0x801AE398u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE398
  c->r[0]=c->lr; // 801AE39C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AE3A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AE3A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AE3A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AE3AC
  c->r[29]=0u+0x00000000u; // 801AE3B0
  c->r[5]=R16(c->r[3]+0x00000008u); // 801AE3B4
  c->r[3]=0u+0x00000000u; // 801AE3B8
  cmps(c,0,(int32_t)c->r[5],0); // 801AE3BC
  if (crb(c,2)) { goto L_801AE3D4; } // 801AE3C0
  cmpu(c,0,c->r[5],0x0000FFF0u); // 801AE3C4
  if (crb(c,2)) { goto L_801AE3D4; } // 801AE3C8
  cmpu(c,0,c->r[5],0x0000FFF4u); // 801AE3CC
  if (!crb(c,2)) { goto L_801AE524; } // 801AE3D0
L_801AE3D4:;
  c->r[6]=0u+0x803C0000u; // 801AE3D4
  c->r[4]=0u+0x802E0000u; // 801AE3D8
  c->r[6]=c->r[6]+0x00007D38u; // 801AE3DC
  cmpu(c,0,c->r[5],0x0000FFF4u); // 801AE3E0
  c->r[5]=R8(c->r[6]+0x00000070u); // 801AE3E4
  c->r[4]=c->r[4]+0x000010B0u; // 801AE3E8
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801AE3EC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801AE3F0
  c->r[30]=R16(c->r[4]+c->r[0]); // 801AE3F4
  if (crb(c,2)) { goto L_801AE414; } // 801AE3F8
  c->r[3]=R32(c->r[6]+0x00000014u); // 801AE3FC
  c->r[4]=c->r[30]|c->r[30]; // 801AE400
  c->r[5]=0u+0x00000000u; // 801AE404
  c->lr=0x801AE40Cu; f_801D1E58(c); // 801AE408
  cmps(c,0,(int32_t)c->r[3],0); // 801AE40C
  if (crb(c,2)) { goto L_801AE474; } // 801AE410
L_801AE414:;
  cmpu(c,0,c->r[30],0x00001200u); // 801AE414
  if (!crb(c,2)) { goto L_801AE444; } // 801AE418
  cmps(c,0,(int32_t)c->r[3],0); // 801AE41C
  if (crb(c,2)) { goto L_801AE448; } // 801AE420
  c->r[4]=0u+0x00010000u; // 801AE424
  c->r[0]=c->r[4]+0xFFFF8001u; // 801AE428
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801AE42C
  c->lr=0x801AE434u; f_801D1E30(c); // 801AE430
  cmps(c,0,(int32_t)c->r[3],0); // 801AE434
  if (crb(c,2)) { goto L_801AE448; } // 801AE438
  c->r[29]=0u+0x00000001u; // 801AE43C
  goto L_801AE448; // 801AE440
L_801AE444:;
  c->r[29]=0u+0x00000001u; // 801AE444
L_801AE448:;
  cmps(c,0,(int32_t)c->r[29],0); // 801AE448
  if (crb(c,2)) { goto L_801AE474; } // 801AE44C
  c->r[6]=0u+0x803C0000u; // 801AE450
  c->r[4]=0u+0x00000001u; // 801AE454
  c->r[6]=c->r[6]+0x00007D38u; // 801AE458
  c->r[3]=R8(c->r[6]+0x00000070u); // 801AE45C
  c->r[5]=R32(c->r[6]+0x00000010u); // 801AE460
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801AE464
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801AE468
  c->r[0]=c->r[5]|c->r[0]; // 801AE46C
  W32(c->r[6]+0x00000010u,c->r[0]); // 801AE470
L_801AE474:;
  c->r[30]=0u+0x803C0000u; // 801AE474
  c->r[30]=c->r[30]+0x00007D38u; // 801AE478
  c->r[3]=R32(c->r[30]+0x00000014u); // 801AE47C
  c->lr=0x801AE484u; f_801AA228(c); // 801AE480
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801AE484
  c->r[31]=0u+0x00000000u; // 801AE488
  W32(c->r[30]+0x00000014u,c->r[31]); // 801AE48C
  cmps(c,0,(int32_t)c->r[0],0); // 801AE490
  if (crb(c,2)) { goto L_801AE4A4; } // 801AE494
  c->r[3]=c->r[30]+0x0000001Au; // 801AE498
  c->lr=0x801AE4A0u; f_801AE90C(c); // 801AE49C
  goto L_801AE5E4; // 801AE4A0
L_801AE4A4:;
  c->r[3]=0u+0x801B0000u; // 801AE4A4
  c->r[3]=c->r[3]+0xFFFFECB0u; // 801AE4A8
  c->lr=0x801AE4B0u; f_801BA590(c); // 801AE4AC
  c->r[3]=0u+0x00000110u; // 801AE4B0
  c->lr=0x801AE4B8u; f_801A9FA0(c); // 801AE4B4
  cmps(c,0,(int32_t)c->r[3],0); // 801AE4B8
  c->r[29]=c->r[3]|c->r[3]; // 801AE4BC
  if (crb(c,2)) { goto L_801AE5E4; } // 801AE4C0
  c->r[0]=0u+0x00000208u; // 801AE4C4
  c->r[4]=c->r[30]+0x0000001Au; // 801AE4C8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE4CC
  W8(c->r[3]+0x0000010Cu,c->r[31]); // 801AE4D0
  c->r[0]=R32(c->r[30]+0x00000010u); // 801AE4D4
  W32(c->r[3]+0x00000108u,c->r[0]); // 801AE4D8
  c->r[3]=c->r[3]+0x00000008u; // 801AE4DC
  c->lr=0x801AE4E4u; f_801AD170(c); // 801AE4E0
  c->r[0]=R8(c->r[30]+0x00000020u); // 801AE4E4
  c->r[31]=c->r[30]+0x00000020u; // 801AE4E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AE4EC
  if (!crb(c,2)) { goto L_801AE508; } // 801AE4F0
  c->r[3]=c->r[30]+0x0000001Au; // 801AE4F4
  c->lr=0x801AE4FCu; f_801B4FB4(c); // 801AE4F8
  cmps(c,0,(int32_t)c->r[3],0); // 801AE4FC
  if (crb(c,2)) { goto L_801AE508; } // 801AE500
  c->r[31]=c->r[3]|c->r[3]; // 801AE504
L_801AE508:;
  c->r[4]=c->r[31]|c->r[31]; // 801AE508
  c->r[3]=c->r[29]+0x0000000Eu; // 801AE50C
  c->r[5]=0u+0x00000020u; // 801AE510
  c->lr=0x801AE518u; f_801900A4(c); // 801AE514
  c->r[3]=c->r[29]|c->r[29]; // 801AE518
  c->lr=0x801AE520u; f_801AD61C(c); // 801AE51C
  goto L_801AE5E4; // 801AE520
L_801AE524:;
  cmpu(c,0,c->r[5],0x0000FFF1u); // 801AE524
  if (crb(c,2)) { goto L_801AE53C; } // 801AE528
  c->r[0]=c->r[5]+0x0000000Au; // 801AE52C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801AE530
  cmpu(c,0,c->r[0],0x00000001u); // 801AE534
  if (crb(c,1)) { goto L_801AE54C; } // 801AE538
L_801AE53C:;
  c->r[3]=0u+0x803C0000u; // 801AE53C
  c->r[0]=0u+0x00000000u; // 801AE540
  c->r[3]=c->r[3]+0x00007D38u; // 801AE544
  W8(c->r[3]+0x00000078u,c->r[0]); // 801AE548
L_801AE54C:;
  c->r[31]=0u+0x803C0000u; // 801AE54C
  c->r[31]=c->r[31]+0x00007D38u; // 801AE550
  c->r[3]=R32(c->r[31]+0x00000014u); // 801AE554
  c->lr=0x801AE55Cu; f_801AA228(c); // 801AE558
  c->r[0]=0u+0x00000000u; // 801AE55C
  c->r[3]=0u+0x801B0000u; // 801AE560
  W32(c->r[31]+0x00000014u,c->r[0]); // 801AE564
  c->r[3]=c->r[3]+0xFFFFECB0u; // 801AE568
  c->lr=0x801AE570u; f_801BA590(c); // 801AE56C
  c->r[3]=0u+0x00000110u; // 801AE570
  c->lr=0x801AE578u; f_801A9FA0(c); // 801AE574
  cmps(c,0,(int32_t)c->r[3],0); // 801AE578
  c->r[29]=c->r[3]|c->r[3]; // 801AE57C
  if (crb(c,2)) { goto L_801AE5E4; } // 801AE580
  c->r[4]=0u+0x00000208u; // 801AE584
  c->r[0]=0u+0x00000001u; // 801AE588
  W16(c->r[3]+0x00000000u,c->r[4]); // 801AE58C
  c->r[4]=c->r[31]+0x0000001Au; // 801AE590
  W8(c->r[3]+0x0000010Cu,c->r[0]); // 801AE594
  c->r[0]=R32(c->r[31]+0x00000010u); // 801AE598
  W32(c->r[3]+0x00000108u,c->r[0]); // 801AE59C
  c->r[3]=c->r[3]+0x00000008u; // 801AE5A0
  c->lr=0x801AE5A8u; f_801AD170(c); // 801AE5A4
  c->r[0]=R8(c->r[31]+0x00000020u); // 801AE5A8
  c->r[30]=c->r[31]+0x00000020u; // 801AE5AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AE5B0
  if (!crb(c,2)) { goto L_801AE5CC; } // 801AE5B4
  c->r[3]=c->r[31]+0x0000001Au; // 801AE5B8
  c->lr=0x801AE5C0u; f_801B4FB4(c); // 801AE5BC
  cmps(c,0,(int32_t)c->r[3],0); // 801AE5C0
  if (crb(c,2)) { goto L_801AE5CC; } // 801AE5C4
  c->r[30]=c->r[3]|c->r[3]; // 801AE5C8
L_801AE5CC:;
  c->r[4]=c->r[30]|c->r[30]; // 801AE5CC
  c->r[3]=c->r[29]+0x0000000Eu; // 801AE5D0
  c->r[5]=0u+0x00000020u; // 801AE5D4
  c->lr=0x801AE5DCu; f_801900A4(c); // 801AE5D8
  c->r[3]=c->r[29]|c->r[29]; // 801AE5DC
  c->lr=0x801AE5E4u; f_801AD61C(c); // 801AE5E0
L_801AE5E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AE5E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AE5E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AE5EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AE5F0
  c->lr=c->r[0]; // 801AE5F4
  c->r[1]=c->r[1]+0x00000020u; // 801AE5F8
  return; // 801AE5FC
}

// fn_801AE600
void f_801AE600(Ctx* __restrict c) {
  c->r[4]=0u+0x803C0000u; // 801AE600
  c->r[3]=0u+0x00000003u; // 801AE604
  c->r[12]=R32(c->r[4]+0x00007D38u); // 801AE608
  c->r[4]=0u+0x00000000u; // 801AE60C
  c->ctr=c->r[12]; // 801AE610
  if (true) { dispatch(c,c->ctr); return; } // 801AE614
}

// bta_dm_disc_result
void f_801AE618(Ctx* __restrict c) {
  trace_call(0x801AE618u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE618
  c->r[0]=c->lr; // 801AE61C
  c->r[4]=0u+0x803C0000u; // 801AE620
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE624
  c->r[12]=R32(c->r[4]+0x00007D38u); // 801AE628
  c->r[4]=c->r[3]+0x00000008u; // 801AE62C
  c->r[3]=0u+0x00000002u; // 801AE630
  c->ctr=c->r[12]; // 801AE634
  if (true) { c->lr=0x801AE63Cu; dispatch(c,c->ctr); } // 801AE638
  c->r[3]=0u+0x00000110u; // 801AE63C
  c->lr=0x801AE644u; f_801A9FA0(c); // 801AE640
  cmps(c,0,(int32_t)c->r[3],0); // 801AE644
  if (crb(c,2)) { goto L_801AE658; } // 801AE648
  c->r[0]=0u+0x00000207u; // 801AE64C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE650
  c->lr=0x801AE658u; f_801AD61C(c); // 801AE654
L_801AE658:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE658
  c->lr=c->r[0]; // 801AE65C
  c->r[1]=c->r[1]+0x00000010u; // 801AE660
  return; // 801AE664
}

// bta_dm_search_result
void f_801AE668(Ctx* __restrict c) {
  trace_call(0x801AE668u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE668
  c->r[0]=c->lr; // 801AE66C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE670
  c->r[0]=R32(c->r[3]+0x00000108u); // 801AE674
  cmps(c,0,(int32_t)c->r[0],0); // 801AE678
  if (crb(c,2)) { goto L_801AE698; } // 801AE67C
  c->r[5]=0u+0x803C0000u; // 801AE680
  c->r[4]=c->r[3]+0x00000008u; // 801AE684
  c->r[12]=R32(c->r[5]+0x00007D38u); // 801AE688
  c->r[3]=0u+0x00000002u; // 801AE68C
  c->ctr=c->r[12]; // 801AE690
  if (true) { c->lr=0x801AE698u; dispatch(c,c->ctr); } // 801AE694
L_801AE698:;
  c->r[6]=0u+0x803C0000u; // 801AE698
  c->r[6]=c->r[6]+0x00007D38u; // 801AE69C
  c->r[0]=R8(c->r[6]+0x00000078u); // 801AE6A0
  cmps(c,0,(int32_t)c->r[0],0); // 801AE6A4
  if (!crb(c,2)) { goto L_801AE6BC; } // 801AE6A8
  c->r[0]=0u+0x00000000u; // 801AE6AC
  W8(c->r[6]+0x00000078u,c->r[0]); // 801AE6B0
  c->lr=0x801AE6B8u; f_801AEAAC(c); // 801AE6B4
  goto L_801AE6E0; // 801AE6B8
L_801AE6BC:;
  c->r[5]=0u+0x801B0000u; // 801AE6BC
  c->r[0]=0u+0x00000001u; // 801AE6C0
  c->r[5]=c->r[5]+0xFFFFE6F0u; // 801AE6C4
  W8(c->r[6]+0x00000079u,c->r[0]); // 801AE6C8
  c->r[3]=c->r[6]+0x00000040u; // 801AE6CC
  c->r[4]=0u+0x00000000u; // 801AE6D0
  W32(c->r[6]+0x00000048u,c->r[5]); // 801AE6D4
  c->r[5]=0u+0x00000BB8u; // 801AE6D8
  c->lr=0x801AE6E0u; f_801AD638(c); // 801AE6DC
L_801AE6E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE6E0
  c->lr=c->r[0]; // 801AE6E4
  c->r[1]=c->r[1]+0x00000010u; // 801AE6E8
  return; // 801AE6EC
}

// bta_dm_search_timer_cback
void f_801AE6F0(Ctx* __restrict c) {
  trace_call(0x801AE6F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE6F0
  c->r[0]=c->lr; // 801AE6F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE6F8
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801AE6FC
  cmpu(c,0,c->r[0],0x00000004u); // 801AE700
  if (crb(c,0)) { goto L_801AE718; } // 801AE704
  c->r[4]=0u+0x80330000u; // 801AE708
  c->r[3]=0u+0x00000503u; // 801AE70C
  c->r[4]=c->r[4]+0x00001730u; // 801AE710
  c->lr=0x801AE718u; f_801ACB20(c); // 801AE714
L_801AE718:;
  c->r[3]=0u+0x803C0000u; // 801AE718
  c->r[0]=0u+0x00000000u; // 801AE71C
  c->r[3]=c->r[3]+0x00007D38u; // 801AE720
  W8(c->r[3]+0x00000078u,c->r[0]); // 801AE724
  c->lr=0x801AE72Cu; f_801AEAAC(c); // 801AE728
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE72C
  c->lr=c->r[0]; // 801AE730
  c->r[1]=c->r[1]+0x00000010u; // 801AE734
  return; // 801AE738
}

// fn_801AE73C
void f_801AE73C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE73C
  c->r[0]=c->lr; // 801AE740
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE744
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE748
  c->r[31]=0u+0x803C0000u; // 801AE74C
  c->r[31]=c->r[31]+0x00007D38u; // 801AE750
  c->r[3]=R32(c->r[31]+0x00000014u); // 801AE754
  cmps(c,0,(int32_t)c->r[3],0); // 801AE758
  if (crb(c,2)) { goto L_801AE76C; } // 801AE75C
  c->lr=0x801AE764u; f_801AA228(c); // 801AE760
  c->r[0]=0u+0x00000000u; // 801AE764
  W32(c->r[31]+0x00000014u,c->r[0]); // 801AE768
L_801AE76C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE76C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE770
  c->lr=c->r[0]; // 801AE774
  c->r[1]=c->r[1]+0x00000010u; // 801AE778
  return; // 801AE77C
}

// fn_801AE780
void f_801AE780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE780
  c->r[0]=c->lr; // 801AE784
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE78C
  c->r[31]=c->r[3]|c->r[3]; // 801AE790
  c->r[3]=0u+0x0000001Cu; // 801AE794
  c->lr=0x801AE79Cu; f_801A9FA0(c); // 801AE798
  c->r[6]=0u+0x803C0000u; // 801AE79C
  c->r[4]=c->r[31]|c->r[31]; // 801AE7A0
  c->r[6]=c->r[6]+0x00007D38u; // 801AE7A4
  c->r[5]=0u+0x0000001Cu; // 801AE7A8
  W32(c->r[6]+0x00000074u,c->r[3]); // 801AE7AC
  c->lr=0x801AE7B4u; f_80004338(c); // 801AE7B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE7B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE7B8
  c->lr=c->r[0]; // 801AE7BC
  c->r[1]=c->r[1]+0x00000010u; // 801AE7C0
  return; // 801AE7C4
}

// fn_801AE7C8
void f_801AE7C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE7C8
  c->r[0]=c->lr; // 801AE7CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE7D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE7D4
  c->r[31]=c->r[3]|c->r[3]; // 801AE7D8
  c->r[3]=0u+0x00000018u; // 801AE7DC
  c->lr=0x801AE7E4u; f_801A9FA0(c); // 801AE7E0
  c->r[6]=0u+0x803C0000u; // 801AE7E4
  c->r[4]=c->r[31]|c->r[31]; // 801AE7E8
  c->r[6]=c->r[6]+0x00007D38u; // 801AE7EC
  c->r[5]=0u+0x00000018u; // 801AE7F0
  W32(c->r[6]+0x00000074u,c->r[3]); // 801AE7F4
  c->lr=0x801AE7FCu; f_80004338(c); // 801AE7F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE7FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE800
  c->lr=c->r[0]; // 801AE804
  c->r[1]=c->r[1]+0x00000010u; // 801AE808
  return; // 801AE80C
}

// fn_801AE810
void f_801AE810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE810
  c->r[0]=c->lr; // 801AE814
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE81C
  c->r[31]=0u+0x803C0000u; // 801AE820
  c->r[31]=c->r[31]+0x00007D38u; // 801AE824
  c->r[3]=R32(c->r[31]+0x00000074u); // 801AE828
  cmps(c,0,(int32_t)c->r[3],0); // 801AE82C
  if (crb(c,2)) { goto L_801AE840; } // 801AE830
  c->lr=0x801AE838u; f_801AA228(c); // 801AE834
  c->r[0]=0u+0x00000000u; // 801AE838
  W32(c->r[31]+0x00000074u,c->r[0]); // 801AE83C
L_801AE840:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE840
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE844
  c->lr=c->r[0]; // 801AE848
  c->r[1]=c->r[1]+0x00000010u; // 801AE84C
  return; // 801AE850
}

// fn_801AE854
void f_801AE854(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE854
  c->r[0]=c->lr; // 801AE858
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE85C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE860
  c->r[31]=0u+0x803C0000u; // 801AE864
  c->r[31]=c->r[31]+0x00007D38u; // 801AE868
  c->r[3]=R32(c->r[31]+0x00000074u); // 801AE86C
  cmps(c,0,(int32_t)c->r[3],0); // 801AE870
  if (crb(c,2)) { goto L_801AE884; } // 801AE874
  c->lr=0x801AE87Cu; f_801AD61C(c); // 801AE878
  c->r[0]=0u+0x00000000u; // 801AE87C
  W32(c->r[31]+0x00000074u,c->r[0]); // 801AE880
L_801AE884:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE884
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE888
  c->lr=c->r[0]; // 801AE88C
  c->r[1]=c->r[1]+0x00000010u; // 801AE890
  return; // 801AE894
}

// bta_dm_search_cancel_transac_cmpl
void f_801AE898(Ctx* __restrict c) {
  trace_call(0x801AE898u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE898
  c->r[0]=c->lr; // 801AE89C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE8A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE8A4
  c->r[31]=0u+0x803C0000u; // 801AE8A8
  c->r[31]=c->r[31]+0x00007D38u; // 801AE8AC
  c->r[3]=R32(c->r[31]+0x00000014u); // 801AE8B0
  cmps(c,0,(int32_t)c->r[3],0); // 801AE8B4
  if (crb(c,2)) { goto L_801AE8C8; } // 801AE8B8
  c->lr=0x801AE8C0u; f_801AA228(c); // 801AE8BC
  c->r[0]=0u+0x00000000u; // 801AE8C0
  W32(c->r[31]+0x00000014u,c->r[0]); // 801AE8C4
L_801AE8C8:;
  c->r[4]=0u+0x803C0000u; // 801AE8C8
  c->r[3]=0u+0x00000004u; // 801AE8CC
  c->r[12]=R32(c->r[4]+0x00007D38u); // 801AE8D0
  c->r[4]=0u+0x00000000u; // 801AE8D4
  c->ctr=c->r[12]; // 801AE8D8
  if (true) { c->lr=0x801AE8E0u; dispatch(c,c->ctr); } // 801AE8DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE8E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE8E4
  c->lr=c->r[0]; // 801AE8E8
  c->r[1]=c->r[1]+0x00000010u; // 801AE8EC
  return; // 801AE8F0
}

// fn_801AE8F4
void f_801AE8F4(Ctx* __restrict c) {
  c->r[4]=0u+0x803C0000u; // 801AE8F4
  c->r[3]=0u+0x00000004u; // 801AE8F8
  c->r[12]=R32(c->r[4]+0x00007D38u); // 801AE8FC
  c->r[4]=0u+0x00000000u; // 801AE900
  c->ctr=c->r[12]; // 801AE904
  if (true) { dispatch(c,c->ctr); return; } // 801AE908
}

// bta_dm_find_services
void f_801AE90C(Ctx* __restrict c) {
  trace_call(0x801AE90Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE90C
  c->r[0]=c->lr; // 801AE910
  W32(c->r[1]+0x00000054u,c->r[0]); // 801AE914
  c->r[11]=c->r[1]+0x00000050u; // 801AE918
  c->lr=0x801AE920u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AE91C
  c->r[4]=R16(c->r[2]+0xFFFF94E8u); // 801AE920
  c->r[26]=0u+0x803C0000u; // 801AE924
  c->r[0]=R16(c->r[2]+0xFFFF94EAu); // 801AE928
  c->r[25]=0u+0x802E0000u; // 801AE92C
  W16(c->r[1]+0x00000008u,c->r[4]); // 801AE930
  c->r[30]=c->r[3]|c->r[3]; // 801AE934
  c->r[25]=c->r[25]+0x000010B0u; // 801AE938
  c->r[26]=c->r[26]+0x00007D38u; // 801AE93C
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801AE940
  c->r[31]=0u+0x00000001u; // 801AE944
  c->r[23]=0u+0x00000001u; // 801AE948
  c->r[24]=0u+0x00000002u; // 801AE94C
  c->r[27]=0u+0x801B0000u; // 801AE950
  c->r[28]=0u+0x00000000u; // 801AE954
  c->r[29]=0u+0x00000017u; // 801AE958
  goto L_801AEA18; // 801AE95C
L_801AE960:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 801AE960
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[23]<<((c->r[0])&31)); // 801AE964
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801AE968
  if (crb(c,2)) { goto L_801AEA0C; } // 801AE96C
  c->r[3]=0u+0x000000FAu; // 801AE970
  c->lr=0x801AE978u; f_801A9FA0(c); // 801AE974
  cmps(c,0,(int32_t)c->r[3],0); // 801AE978
  W32(c->r[26]+0x00000014u,c->r[3]); // 801AE97C
  if (crb(c,2)) { goto L_801AEA0C; } // 801AE980
  c->r[3]=R8(c->r[26]+0x00000070u); // 801AE984
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 801AE988
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801AE98C
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[23]<<((c->r[3])&31)); // 801AE990
  c->r[0]=R16(c->r[25]+c->r[0]); // 801AE994
  c->r[3]=c->r[4]&~c->r[3]; // 801AE998
  W32(c->r[26]+0x0000000Cu,c->r[3]); // 801AE99C
  cmpu(c,0,c->r[0],0x00001200u); // 801AE9A0
  W16(c->r[1]+0x0000000Cu,c->r[24]); // 801AE9A4
  W16(c->r[1]+0x00000010u,c->r[0]); // 801AE9A8
  if (!crb(c,2)) { goto L_801AE9B4; } // 801AE9AC
  c->r[31]=0u+0x00000002u; // 801AE9B0
L_801AE9B4:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 801AE9B4
  c->r[7]=c->r[31]|c->r[31]; // 801AE9B8
  c->r[6]=c->r[1]+0x0000000Cu; // 801AE9BC
  c->r[8]=c->r[1]+0x00000008u; // 801AE9C0
  c->r[4]=0u+0x000000FAu; // 801AE9C4
  c->r[5]=0u+0x00000001u; // 801AE9C8
  c->lr=0x801AE9D0u; f_801D19F8(c); // 801AE9CC
  c->r[4]=R32(c->r[26]+0x00000014u); // 801AE9D0
  c->r[3]=c->r[30]|c->r[30]; // 801AE9D4
  c->r[5]=c->r[27]+0xFFFFEB8Cu; // 801AE9D8
  c->lr=0x801AE9E0u; f_801D1DCC(c); // 801AE9DC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AE9E0
  if (!crb(c,2)) { goto L_801AE9FC; } // 801AE9E4
  c->r[3]=R32(c->r[26]+0x00000014u); // 801AE9E8
  c->lr=0x801AE9F0u; f_801AA228(c); // 801AE9EC
  W32(c->r[26]+0x00000014u,c->r[28]); // 801AE9F0
  W8(c->r[26]+0x00000070u,c->r[29]); // 801AE9F4
  goto L_801AEA0C; // 801AE9F8
L_801AE9FC:;
  c->r[3]=R8(c->r[26]+0x00000070u); // 801AE9FC
  c->r[0]=c->r[3]+0x00000001u; // 801AEA00
  W8(c->r[26]+0x00000070u,c->r[0]); // 801AEA04
  goto L_801AEA94; // 801AEA08
L_801AEA0C:;
  c->r[3]=R8(c->r[26]+0x00000070u); // 801AEA0C
  c->r[0]=c->r[3]+0x00000001u; // 801AEA10
  W8(c->r[26]+0x00000070u,c->r[0]); // 801AEA14
L_801AEA18:;
  c->r[0]=R8(c->r[26]+0x00000070u); // 801AEA18
  cmpu(c,0,c->r[0],0x00000017u); // 801AEA1C
  if (crb(c,0)) { IRQCHK(c); goto L_801AE960; } // 801AEA20
  if (crb(c,0)) { goto L_801AEA94; } // 801AEA24
  c->r[3]=0u+0x00000110u; // 801AEA28
  c->lr=0x801AEA30u; f_801A9FA0(c); // 801AEA2C
  cmps(c,0,(int32_t)c->r[3],0); // 801AEA30
  c->r[24]=c->r[3]|c->r[3]; // 801AEA34
  if (crb(c,2)) { goto L_801AEA94; } // 801AEA38
  c->r[0]=0u+0x00000208u; // 801AEA3C
  c->r[4]=c->r[26]+0x0000001Au; // 801AEA40
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AEA44
  c->r[0]=R32(c->r[26]+0x00000010u); // 801AEA48
  W32(c->r[3]+0x00000108u,c->r[0]); // 801AEA4C
  c->r[3]=c->r[3]+0x00000008u; // 801AEA50
  c->lr=0x801AEA58u; f_801AD170(c); // 801AEA54
  c->r[0]=R8(c->r[26]+0x00000020u); // 801AEA58
  c->r[23]=c->r[26]+0x00000020u; // 801AEA5C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AEA60
  if (!crb(c,2)) { goto L_801AEA7C; } // 801AEA64
  c->r[3]=c->r[26]+0x0000001Au; // 801AEA68
  c->lr=0x801AEA70u; f_801B4FB4(c); // 801AEA6C
  cmps(c,0,(int32_t)c->r[3],0); // 801AEA70
  if (crb(c,2)) { goto L_801AEA7C; } // 801AEA74
  c->r[23]=c->r[3]|c->r[3]; // 801AEA78
L_801AEA7C:;
  c->r[4]=c->r[23]|c->r[23]; // 801AEA7C
  c->r[3]=c->r[24]+0x0000000Eu; // 801AEA80
  c->r[5]=0u+0x00000020u; // 801AEA84
  c->lr=0x801AEA8Cu; f_801900A4(c); // 801AEA88
  c->r[3]=c->r[24]|c->r[24]; // 801AEA8C
  c->lr=0x801AEA94u; f_801AD61C(c); // 801AEA90
L_801AEA94:;
  c->r[11]=c->r[1]+0x00000050u; // 801AEA94
  c->lr=0x801AEA9Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AEA98
  c->r[0]=R32(c->r[1]+0x00000054u); // 801AEA9C
  c->lr=c->r[0]; // 801AEAA0
  c->r[1]=c->r[1]+0x00000050u; // 801AEAA4
  return; // 801AEAA8
}

// bta_dm_discover_next_device
void f_801AEAAC(Ctx* __restrict c) {
  trace_call(0x801AEAACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEAAC
  c->r[0]=c->lr; // 801AEAB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEAB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AEAB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AEABC
  c->r[30]=0u+0x803C0000u; // 801AEAC0
  c->r[30]=c->r[30]+0x00007D38u; // 801AEAC4
  c->r[3]=R32(c->r[30]+0x00000004u); // 801AEAC8
  c->lr=0x801AEAD0u; f_801B7AB0(c); // 801AEACC
  cmps(c,0,(int32_t)c->r[3],0); // 801AEAD0
  W32(c->r[30]+0x00000004u,c->r[3]); // 801AEAD4
  if (crb(c,2)) { goto L_801AEB50; } // 801AEAD8
  c->r[3]=c->r[3]+0x00000002u; // 801AEADC
  c->lr=0x801AEAE4u; f_801B3E70(c); // 801AEAE0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AEAE4
  if (crb(c,2)) { goto L_801AEAF8; } // 801AEAE8
  c->r[0]=0u+0x00000000u; // 801AEAEC
  W8(c->r[30]+0x00000078u,c->r[0]); // 801AEAF0
  goto L_801AEB00; // 801AEAF4
L_801AEAF8:;
  c->r[0]=0u+0x00000001u; // 801AEAF8
  W8(c->r[30]+0x00000078u,c->r[0]); // 801AEAFC
L_801AEB00:;
  c->r[31]=0u+0x803C0000u; // 801AEB00
  c->r[3]=0u+0x801B0000u; // 801AEB04
  c->r[31]=c->r[31]+0x00007D38u; // 801AEB08
  c->r[30]=0u+0x00000000u; // 801AEB0C
  W8(c->r[31]+0x00000079u,c->r[30]); // 801AEB10
  c->r[3]=c->r[3]+0xFFFFECB0u; // 801AEB14
  c->lr=0x801AEB1Cu; f_801BA540(c); // 801AEB18
  c->r[0]=R32(c->r[31]+0x00000008u); // 801AEB1C
  c->r[3]=c->r[31]+0x0000001Au; // 801AEB20
  c->r[4]=R32(c->r[31]+0x00000004u); // 801AEB24
  W8(c->r[31]+0x00000070u,c->r[30]); // 801AEB28
  c->r[4]=c->r[4]+0x00000002u; // 801AEB2C
  W32(c->r[31]+0x00000010u,c->r[30]); // 801AEB30
  W8(c->r[31]+0x00000020u,c->r[30]); // 801AEB34
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801AEB38
  c->lr=0x801AEB40u; f_801AD170(c); // 801AEB3C
  c->r[3]=R32(c->r[31]+0x00000004u); // 801AEB40
  c->r[3]=c->r[3]+0x00000002u; // 801AEB44
  c->lr=0x801AEB4Cu; f_801AE90C(c); // 801AEB48
  goto L_801AEB74; // 801AEB4C
L_801AEB50:;
  c->r[0]=0u+0x00000000u; // 801AEB50
  c->r[3]=0u+0x00000110u; // 801AEB54
  W32(c->r[30]+0x00000008u,c->r[0]); // 801AEB58
  c->lr=0x801AEB60u; f_801A9FA0(c); // 801AEB5C
  cmps(c,0,(int32_t)c->r[3],0); // 801AEB60
  if (crb(c,2)) { goto L_801AEB74; } // 801AEB64
  c->r[0]=0u+0x00000207u; // 801AEB68
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AEB6C
  c->lr=0x801AEB74u; f_801AD61C(c); // 801AEB70
L_801AEB74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEB74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AEB78
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AEB7C
  c->lr=c->r[0]; // 801AEB80
  c->r[1]=c->r[1]+0x00000010u; // 801AEB84
  return; // 801AEB88
}

// bta_dm_sdp_callback
void f_801AEB8C(Ctx* __restrict c) {
  trace_call(0x801AEB8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEB8C
  c->r[0]=c->lr; // 801AEB90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEB94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AEB98
  c->r[31]=c->r[3]|c->r[3]; // 801AEB9C
  c->r[3]=0u+0x0000000Au; // 801AEBA0
  c->lr=0x801AEBA8u; f_801A9FA0(c); // 801AEBA4
  cmps(c,0,(int32_t)c->r[3],0); // 801AEBA8
  if (crb(c,2)) { goto L_801AEBC0; } // 801AEBAC
  c->r[0]=0u+0x00000206u; // 801AEBB0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AEBB4
  W16(c->r[3]+0x00000008u,c->r[31]); // 801AEBB8
  c->lr=0x801AEBC0u; f_801AD61C(c); // 801AEBBC
L_801AEBC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEBC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AEBC4
  c->lr=c->r[0]; // 801AEBC8
  c->r[1]=c->r[1]+0x00000010u; // 801AEBCC
  return; // 801AEBD0
}

// bta_dm_inq_results_cb
void f_801AEBD4(Ctx* __restrict c) {
  trace_call(0x801AEBD4u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEBD4
  c->r[0]=c->lr; // 801AEBD8
  W32(c->r[1]+0x00000124u,c->r[0]); // 801AEBDC
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801AEBE0
  c->r[31]=c->r[3]|c->r[3]; // 801AEBE4
  c->r[3]=c->r[1]+0x00000008u; // 801AEBE8
  c->r[4]=c->r[31]+0x00000002u; // 801AEBEC
  c->lr=0x801AEBF4u; f_801AD170(c); // 801AEBF0
  c->r[3]=c->r[1]+0x0000000Eu; // 801AEBF4
  c->r[4]=c->r[31]+0x00000008u; // 801AEBF8
  c->r[5]=0u+0x00000003u; // 801AEBFC
  c->lr=0x801AEC04u; f_80004338(c); // 801AEC00
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801AEC04
  c->r[3]=c->r[31]+0x00000002u; // 801AEC08
  W8(c->r[1]+0x00000011u,c->r[0]); // 801AEC0C
  c->lr=0x801AEC14u; f_801B7938(c); // 801AEC10
  cmps(c,0,(int32_t)c->r[3],0); // 801AEC14
  c->r[31]=c->r[3]|c->r[3]; // 801AEC18
  if (crb(c,2)) { goto L_801AEC28; } // 801AEC1C
  c->r[0]=0u+0x00000000u; // 801AEC20
  W8(c->r[1]+0x00000012u,c->r[0]); // 801AEC24
L_801AEC28:;
  c->r[3]=0u+0x803C0000u; // 801AEC28
  c->r[4]=c->r[1]+0x00000008u; // 801AEC2C
  c->r[12]=R32(c->r[3]+0x00007D38u); // 801AEC30
  c->r[3]=0u+0x00000000u; // 801AEC34
  c->ctr=c->r[12]; // 801AEC38
  if (true) { c->lr=0x801AEC40u; dispatch(c,c->ctr); } // 801AEC3C
  cmps(c,0,(int32_t)c->r[31],0); // 801AEC40
  if (crb(c,2)) { goto L_801AEC50; } // 801AEC44
  c->r[0]=R8(c->r[1]+0x00000012u); // 801AEC48
  W8(c->r[31]+0x00000010u,c->r[0]); // 801AEC4C
L_801AEC50:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 801AEC50
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801AEC54
  c->lr=c->r[0]; // 801AEC58
  c->r[1]=c->r[1]+0x00000120u; // 801AEC5C
  return; // 801AEC60
}

// bta_dm_inq_cmpl_cb
void f_801AEC64(Ctx* __restrict c) {
  trace_call(0x801AEC64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEC64
  c->r[0]=c->lr; // 801AEC68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEC6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AEC70
  c->r[31]=c->r[3]|c->r[3]; // 801AEC74
  c->r[3]=0u+0x00000110u; // 801AEC78
  c->lr=0x801AEC80u; f_801A9FA0(c); // 801AEC7C
  cmps(c,0,(int32_t)c->r[3],0); // 801AEC80
  if (crb(c,2)) { goto L_801AEC9C; } // 801AEC84
  c->r[0]=0u+0x00000203u; // 801AEC88
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AEC8C
  c->r[0]=R8(c->r[31]+0x00000001u); // 801AEC90
  W8(c->r[3]+0x00000008u,c->r[0]); // 801AEC94
  c->lr=0x801AEC9Cu; f_801AD61C(c); // 801AEC98
L_801AEC9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEC9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AECA0
  c->lr=c->r[0]; // 801AECA4
  c->r[1]=c->r[1]+0x00000010u; // 801AECA8
  return; // 801AECAC
}

// bta_dm_service_search_remname_cback
void f_801AECB0(Ctx* __restrict c) {
  trace_call(0x801AECB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AECB0
  c->r[0]=c->lr; // 801AECB4
  c->r[3]=0u+0x803C0000u; // 801AECB8
  c->r[4]=c->r[5]|c->r[5]; // 801AECBC
  c->r[3]=c->r[3]+0x00007D38u; // 801AECC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AECC4
  c->r[5]=0u+0x0000001Fu; // 801AECC8
  c->r[3]=c->r[3]+0x00000020u; // 801AECCC
  c->lr=0x801AECD4u; f_801900A4(c); // 801AECD0
  c->r[3]=0u+0x801B0000u; // 801AECD4
  c->r[3]=c->r[3]+0xFFFFECB0u; // 801AECD8
  c->lr=0x801AECE0u; f_801BA590(c); // 801AECDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AECE0
  c->lr=c->r[0]; // 801AECE4
  c->r[1]=c->r[1]+0x00000010u; // 801AECE8
  return; // 801AECEC
}

// bta_dm_remname_cback
void f_801AECF0(Ctx* __restrict c) {
  trace_call(0x801AECF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AECF0
  c->r[0]=c->lr; // 801AECF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AECF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AECFC
  c->r[31]=0u+0x803C0000u; // 801AED00
  c->r[31]=c->r[31]+0x00007D38u; // 801AED04
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AED08
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AED0C
  c->r[29]=c->r[3]|c->r[3]; // 801AED10
  c->r[3]=c->r[31]+0x00000058u; // 801AED14
  c->lr=0x801AED1Cu; f_801AD658(c); // 801AED18
  c->r[3]=0u+0x00000110u; // 801AED1C
  c->lr=0x801AED24u; f_801A9FA0(c); // 801AED20
  cmps(c,0,(int32_t)c->r[3],0); // 801AED24
  c->r[30]=c->r[3]|c->r[3]; // 801AED28
  if (crb(c,2)) { goto L_801AED60; } // 801AED2C
  c->r[4]=R32(c->r[31]+0x00000004u); // 801AED30
  c->r[3]=c->r[3]+0x00000008u; // 801AED34
  c->r[4]=c->r[4]+0x00000002u; // 801AED38
  c->lr=0x801AED40u; f_801AD170(c); // 801AED3C
  c->r[3]=c->r[30]+0x0000000Eu; // 801AED40
  c->r[4]=c->r[29]+0x00000004u; // 801AED44
  c->r[5]=0u+0x00000020u; // 801AED48
  c->lr=0x801AED50u; f_801900A4(c); // 801AED4C
  c->r[0]=0u+0x00000204u; // 801AED50
  c->r[3]=c->r[30]|c->r[30]; // 801AED54
  W16(c->r[30]+0x00000000u,c->r[0]); // 801AED58
  c->lr=0x801AED60u; f_801AD61C(c); // 801AED5C
L_801AED60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AED60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AED64
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AED68
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AED6C
  c->lr=c->r[0]; // 801AED70
  c->r[1]=c->r[1]+0x00000020u; // 801AED74
  return; // 801AED78
}

// bta_dm_disc_remname_cback
void f_801AED7C(Ctx* __restrict c) {
  trace_call(0x801AED7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AED7C
  c->r[0]=c->lr; // 801AED80
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AED84
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AED88
  c->r[31]=0u+0x803C0000u; // 801AED8C
  c->r[31]=c->r[31]+0x00007D38u; // 801AED90
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AED94
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AED98
  c->r[29]=c->r[3]|c->r[3]; // 801AED9C
  c->r[3]=c->r[31]+0x00000058u; // 801AEDA0
  c->lr=0x801AEDA8u; f_801AD658(c); // 801AEDA4
  c->r[3]=0u+0x00000110u; // 801AEDA8
  c->lr=0x801AEDB0u; f_801A9FA0(c); // 801AEDAC
  cmps(c,0,(int32_t)c->r[3],0); // 801AEDB0
  c->r[30]=c->r[3]|c->r[3]; // 801AEDB4
  if (crb(c,2)) { goto L_801AEDE8; } // 801AEDB8
  c->r[3]=c->r[3]+0x00000008u; // 801AEDBC
  c->r[4]=c->r[31]+0x0000001Au; // 801AEDC0
  c->lr=0x801AEDC8u; f_801AD170(c); // 801AEDC4
  c->r[3]=c->r[30]+0x0000000Eu; // 801AEDC8
  c->r[4]=c->r[29]+0x00000004u; // 801AEDCC
  c->r[5]=0u+0x00000020u; // 801AEDD0
  c->lr=0x801AEDD8u; f_801900A4(c); // 801AEDD4
  c->r[0]=0u+0x00000204u; // 801AEDD8
  c->r[3]=c->r[30]|c->r[30]; // 801AEDDC
  W16(c->r[30]+0x00000000u,c->r[0]); // 801AEDE0
  c->lr=0x801AEDE8u; f_801AD61C(c); // 801AEDE4
L_801AEDE8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AEDE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AEDEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AEDF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AEDF4
  c->lr=c->r[0]; // 801AEDF8
  c->r[1]=c->r[1]+0x00000020u; // 801AEDFC
  return; // 801AEE00
}

// fn_801AEE04
void f_801AEE04(Ctx* __restrict c) {
  f_801B78C0(c); return; // 801AEE04
}

// bta_dm_authorize_cback
void f_801AEE08(Ctx* __restrict c) {
  trace_call(0x801AEE08u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEE08
  c->r[0]=c->lr; // 801AEE0C
  c->r[4]=c->r[3]|c->r[3]; // 801AEE10
  W32(c->r[1]+0x00000134u,c->r[0]); // 801AEE14
  c->r[3]=c->r[1]+0x00000008u; // 801AEE18
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 801AEE1C
  c->r[31]=0u+0x00000001u; // 801AEE20
  W32(c->r[1]+0x00000128u,c->r[30]); // 801AEE24
  c->r[30]=c->r[7]|c->r[7]; // 801AEE28
  W32(c->r[1]+0x00000124u,c->r[29]); // 801AEE2C
  c->r[29]=c->r[5]|c->r[5]; // 801AEE30
  c->lr=0x801AEE38u; f_801AD170(c); // 801AEE34
  c->r[4]=c->r[29]|c->r[29]; // 801AEE38
  c->r[3]=c->r[1]+0x0000000Eu; // 801AEE3C
  c->r[5]=0u+0x00000020u; // 801AEE40
  c->lr=0x801AEE48u; f_801900A4(c); // 801AEE44
  c->r[3]=0u+0x802E0000u; // 801AEE48
  c->r[0]=0u+0x00000017u; // 801AEE4C
  c->r[3]=c->r[3]+0x000010E0u; // 801AEE50
  c->ctr=c->r[0]; // 801AEE54
L_801AEE58:;
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 801AEE58
  c->r[0]=R32(c->r[3]+c->r[0]); // 801AEE5C
  cmpu(c,0,c->r[30],c->r[0]); // 801AEE60
  if (!crb(c,2)) { goto L_801AEE70; } // 801AEE64
  W8(c->r[1]+0x00000106u,c->r[31]); // 801AEE68
  goto L_801AEE78; // 801AEE6C
L_801AEE70:;
  c->r[31]=c->r[31]+0x00000001u; // 801AEE70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AEE58; } // 801AEE74
L_801AEE78:;
  c->r[3]=0u+0x803C0000u; // 801AEE78
  c->r[3]=c->r[3]+0x00007DB4u; // 801AEE7C
  c->r[12]=R32(c->r[3]+0x00000050u); // 801AEE80
  cmps(c,0,(int32_t)c->r[12],0); // 801AEE84
  if (crb(c,2)) { goto L_801AEEB0; } // 801AEE88
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801AEE8C
  cmpu(c,0,c->r[0],0x00000017u); // 801AEE90
  if (crb(c,1)) { goto L_801AEEB0; } // 801AEE94
  c->r[4]=c->r[1]+0x00000008u; // 801AEE98
  c->r[3]=0u+0x00000004u; // 801AEE9C
  c->ctr=c->r[12]; // 801AEEA0
  if (true) { c->lr=0x801AEEA8u; dispatch(c,c->ctr); } // 801AEEA4
  c->r[3]=0u+0x00000001u; // 801AEEA8
  goto L_801AEEB4; // 801AEEAC
L_801AEEB0:;
  c->r[3]=0u+0x0000000Bu; // 801AEEB0
L_801AEEB4:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 801AEEB4
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 801AEEB8
  c->r[30]=R32(c->r[1]+0x00000128u); // 801AEEBC
  c->r[29]=R32(c->r[1]+0x00000124u); // 801AEEC0
  c->lr=c->r[0]; // 801AEEC4
  c->r[1]=c->r[1]+0x00000130u; // 801AEEC8
  return; // 801AEECC
}

// bta_dm_pinname_cback
void f_801AEED0(Ctx* __restrict c) {
  trace_call(0x801AEED0u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEED0
  c->r[0]=c->lr; // 801AEED4
  W32(c->r[1]+0x00000124u,c->r[0]); // 801AEED8
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801AEEDC
  c->r[31]=0u+0x803C0000u; // 801AEEE0
  c->r[31]=c->r[31]+0x00007DB4u; // 801AEEE4
  W32(c->r[1]+0x00000118u,c->r[30]); // 801AEEE8
  c->r[30]=c->r[3]|c->r[3]; // 801AEEEC
  c->r[3]=c->r[1]+0x00000008u; // 801AEEF0
  c->r[4]=c->r[31]+0x000000F8u; // 801AEEF4
  c->lr=0x801AEEFCu; f_801AD170(c); // 801AEEF8
  c->r[4]=R8(c->r[31]+0x000000FEu); // 801AEEFC
  cmps(c,0,(int32_t)c->r[30],0); // 801AEF00
  c->r[3]=R8(c->r[31]+0x000000FFu); // 801AEF04
  c->r[0]=R8(c->r[31]+0x00000100u); // 801AEF08
  W8(c->r[1]+0x00000106u,c->r[4]); // 801AEF0C
  W8(c->r[1]+0x00000107u,c->r[3]); // 801AEF10
  W8(c->r[1]+0x00000108u,c->r[0]); // 801AEF14
  if (crb(c,2)) { goto L_801AEF54; } // 801AEF18
  c->r[0]=R16(c->r[30]+0x00000000u); // 801AEF1C
  cmps(c,0,(int32_t)c->r[0],0); // 801AEF20
  if (!crb(c,2)) { goto L_801AEF54; } // 801AEF24
  c->r[0]=R16(c->r[30]+0x00000002u); // 801AEF28
  c->r[3]=c->r[1]+0x0000000Eu; // 801AEF2C
  c->r[4]=c->r[30]+0x00000004u; // 801AEF30
  c->r[5]=0u+0x00000020u; // 801AEF34
  cmpu(c,0,c->r[0],0x00000020u); // 801AEF38
  if (!crb(c,0)) { goto L_801AEF44; } // 801AEF3C
  c->r[5]=c->r[0]|c->r[0]; // 801AEF40
L_801AEF44:;
  c->lr=0x801AEF48u; f_80004338(c); // 801AEF44
  c->r[0]=0u+0x00000000u; // 801AEF48
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 801AEF4C
  goto L_801AEF5C; // 801AEF50
L_801AEF54:;
  c->r[0]=0u+0x00000000u; // 801AEF54
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801AEF58
L_801AEF5C:;
  c->r[5]=0u+0x803C0000u; // 801AEF5C
  c->r[4]=c->r[1]+0x00000008u; // 801AEF60
  c->r[5]=c->r[5]+0x00007DB4u; // 801AEF64
  c->r[3]=0u+0x00000002u; // 801AEF68
  c->r[12]=R32(c->r[5]+0x00000050u); // 801AEF6C
  c->ctr=c->r[12]; // 801AEF70
  if (true) { c->lr=0x801AEF78u; dispatch(c,c->ctr); } // 801AEF74
  c->r[0]=R32(c->r[1]+0x00000124u); // 801AEF78
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801AEF7C
  c->r[30]=R32(c->r[1]+0x00000118u); // 801AEF80
  c->lr=c->r[0]; // 801AEF84
  c->r[1]=c->r[1]+0x00000120u; // 801AEF88
  return; // 801AEF8C
}

// bta_dm_pin_cback
void f_801AEF90(Ctx* __restrict c) {
  trace_call(0x801AEF90u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEF90
  c->r[0]=c->lr; // 801AEF94
  W32(c->r[1]+0x00000134u,c->r[0]); // 801AEF98
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 801AEF9C
  c->r[31]=0u+0x803C0000u; // 801AEFA0
  c->r[31]=c->r[31]+0x00007DB4u; // 801AEFA4
  W32(c->r[1]+0x00000128u,c->r[30]); // 801AEFA8
  c->r[30]=c->r[5]|c->r[5]; // 801AEFAC
  W32(c->r[1]+0x00000124u,c->r[29]); // 801AEFB0
  c->r[29]=c->r[4]|c->r[4]; // 801AEFB4
  W32(c->r[1]+0x00000120u,c->r[28]); // 801AEFB8
  c->r[28]=c->r[3]|c->r[3]; // 801AEFBC
  c->r[0]=R32(c->r[31]+0x00000050u); // 801AEFC0
  cmps(c,0,(int32_t)c->r[0],0); // 801AEFC4
  if (!crb(c,2)) { goto L_801AEFD4; } // 801AEFC8
  c->r[3]=0u+0x0000000Bu; // 801AEFCC
  goto L_801AF0A0; // 801AEFD0
L_801AEFD4:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801AEFD4
  cmps(c,0,(int32_t)c->r[0],0); // 801AEFD8
  if (!crb(c,2)) { goto L_801AF044; } // 801AEFDC
  c->r[4]=c->r[28]|c->r[28]; // 801AEFE0
  c->r[3]=c->r[31]+0x000000F8u; // 801AEFE4
  c->lr=0x801AEFECu; f_801AD170(c); // 801AEFE8
  c->r[0]=R8(c->r[29]+0x00000000u); // 801AEFEC
  c->r[4]=0u+0x801B0000u; // 801AEFF0
  c->r[3]=c->r[28]|c->r[28]; // 801AEFF4
  W8(c->r[31]+0x000000FEu,c->r[0]); // 801AEFF8
  c->r[4]=c->r[4]+0xFFFFEED0u; // 801AEFFC
  c->r[0]=R8(c->r[29]+0x00000001u); // 801AF000
  W8(c->r[31]+0x000000FFu,c->r[0]); // 801AF004
  c->r[0]=R8(c->r[29]+0x00000002u); // 801AF008
  W8(c->r[31]+0x00000100u,c->r[0]); // 801AF00C
  c->lr=0x801AF014u; f_801B77D8(c); // 801AF010
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801AF014
  cmpu(c,0,c->r[0],0x00000001u); // 801AF018
  if (!crb(c,2)) { goto L_801AF028; } // 801AF01C
  c->r[3]=0u+0x00000001u; // 801AF020
  goto L_801AF0A0; // 801AF024
L_801AF028:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801AF028
  cmpu(c,0,c->r[0],0x00000002u); // 801AF02C
  if (crb(c,0)) { goto L_801AF044; } // 801AF030
  c->r[4]=0u+0x80330000u; // 801AF034
  c->r[3]=0u+0x00000501u; // 801AF038
  c->r[4]=c->r[4]+0x00001750u; // 801AF03C
  c->lr=0x801AF044u; f_801ACB20(c); // 801AF040
L_801AF044:;
  c->r[4]=c->r[28]|c->r[28]; // 801AF044
  c->r[3]=c->r[1]+0x00000008u; // 801AF048
  c->lr=0x801AF050u; f_801AD170(c); // 801AF04C
  c->r[0]=R8(c->r[29]+0x00000000u); // 801AF050
  c->r[4]=c->r[30]|c->r[30]; // 801AF054
  c->r[3]=c->r[1]+0x0000000Eu; // 801AF058
  c->r[5]=0u+0x00000020u; // 801AF05C
  W8(c->r[1]+0x00000106u,c->r[0]); // 801AF060
  c->r[0]=R8(c->r[29]+0x00000001u); // 801AF064
  W8(c->r[1]+0x00000107u,c->r[0]); // 801AF068
  c->r[0]=R8(c->r[29]+0x00000002u); // 801AF06C
  W8(c->r[1]+0x00000108u,c->r[0]); // 801AF070
  c->lr=0x801AF078u; f_801900A4(c); // 801AF074
  c->r[3]=0u+0x803C0000u; // 801AF078
  c->r[0]=0u+0x00000000u; // 801AF07C
  c->r[3]=c->r[3]+0x00007DB4u; // 801AF080
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 801AF084
  c->r[12]=R32(c->r[3]+0x00000050u); // 801AF088
  c->r[4]=c->r[1]+0x00000008u; // 801AF08C
  c->r[3]=0u+0x00000002u; // 801AF090
  c->ctr=c->r[12]; // 801AF094
  if (true) { c->lr=0x801AF09Cu; dispatch(c,c->ctr); } // 801AF098
  c->r[3]=0u+0x00000001u; // 801AF09C
L_801AF0A0:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 801AF0A0
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 801AF0A4
  c->r[30]=R32(c->r[1]+0x00000128u); // 801AF0A8
  c->r[29]=R32(c->r[1]+0x00000124u); // 801AF0AC
  c->r[28]=R32(c->r[1]+0x00000120u); // 801AF0B0
  c->lr=c->r[0]; // 801AF0B4
  c->r[1]=c->r[1]+0x00000130u; // 801AF0B8
  return; // 801AF0BC
}

// fn_801AF0C0
void f_801AF0C0(Ctx* __restrict c) {
  c->r[3]=0u+0x0000000Bu; // 801AF0C0
  return; // 801AF0C4
}

// bta_dm_new_link_key_cback
void f_801AF0C8(Ctx* __restrict c) {
  trace_call(0x801AF0C8u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF0C8
  c->r[0]=c->lr; // 801AF0CC
  c->r[4]=c->r[3]|c->r[3]; // 801AF0D0
  W32(c->r[1]+0x00000124u,c->r[0]); // 801AF0D4
  c->r[3]=c->r[1]+0x00000008u; // 801AF0D8
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801AF0DC
  c->r[31]=c->r[6]|c->r[6]; // 801AF0E0
  W32(c->r[1]+0x00000118u,c->r[30]); // 801AF0E4
  c->r[30]=c->r[5]|c->r[5]; // 801AF0E8
  c->lr=0x801AF0F0u; f_801AD170(c); // 801AF0EC
  c->r[4]=c->r[30]|c->r[30]; // 801AF0F0
  c->r[3]=c->r[1]+0x0000000Eu; // 801AF0F4
  c->r[5]=0u+0x0000001Fu; // 801AF0F8
  c->lr=0x801AF100u; f_80004338(c); // 801AF0FC
  c->r[0]=0u+0x00000000u; // 801AF100
  c->r[4]=c->r[31]|c->r[31]; // 801AF104
  W8(c->r[1]+0x0000002Du,c->r[0]); // 801AF108
  c->r[3]=c->r[1]+0x00000107u; // 801AF10C
  c->r[5]=0u+0x00000010u; // 801AF110
  c->lr=0x801AF118u; f_80004338(c); // 801AF114
  c->r[3]=0u+0x803C0000u; // 801AF118
  c->r[0]=0u+0x00000001u; // 801AF11C
  c->r[3]=c->r[3]+0x00007DB4u; // 801AF120
  W8(c->r[1]+0x00000106u,c->r[0]); // 801AF124
  c->r[12]=R32(c->r[3]+0x00000050u); // 801AF128
  W8(c->r[1]+0x00000117u,c->r[0]); // 801AF12C
  cmps(c,0,(int32_t)c->r[12],0); // 801AF130
  if (crb(c,2)) { goto L_801AF148; } // 801AF134
  c->r[4]=c->r[1]+0x00000008u; // 801AF138
  c->r[3]=0u+0x00000003u; // 801AF13C
  c->ctr=c->r[12]; // 801AF140
  if (true) { c->lr=0x801AF148u; dispatch(c,c->ctr); } // 801AF144
L_801AF148:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801AF148
  c->r[3]=0u+0x00000001u; // 801AF14C
  c->r[30]=R32(c->r[1]+0x00000118u); // 801AF150
  c->r[0]=R32(c->r[1]+0x00000124u); // 801AF154
  c->lr=c->r[0]; // 801AF158
  c->r[1]=c->r[1]+0x00000120u; // 801AF15C
  return; // 801AF160
}

// bta_dm_authentication_complete_cback
void f_801AF164(Ctx* __restrict c) {
  trace_call(0x801AF164u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF164
  c->r[0]=c->lr; // 801AF168
  cmps(c,0,(int32_t)c->r[6],0); // 801AF16C
  W32(c->r[1]+0x00000124u,c->r[0]); // 801AF170
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801AF174
  c->r[31]=c->r[5]|c->r[5]; // 801AF178
  if (crb(c,2)) { goto L_801AF1D0; } // 801AF17C
  c->r[4]=c->r[3]|c->r[3]; // 801AF180
  c->r[3]=c->r[1]+0x00000008u; // 801AF184
  c->lr=0x801AF18Cu; f_801AD170(c); // 801AF188
  c->r[4]=c->r[31]|c->r[31]; // 801AF18C
  c->r[3]=c->r[1]+0x0000000Eu; // 801AF190
  c->r[5]=0u+0x0000001Fu; // 801AF194
  c->lr=0x801AF19Cu; f_80004338(c); // 801AF198
  c->r[3]=0u+0x803C0000u; // 801AF19C
  c->r[0]=0u+0x00000000u; // 801AF1A0
  c->r[3]=c->r[3]+0x00007DB4u; // 801AF1A4
  W8(c->r[1]+0x0000002Du,c->r[0]); // 801AF1A8
  c->r[12]=R32(c->r[3]+0x00000050u); // 801AF1AC
  W8(c->r[1]+0x00000117u,c->r[0]); // 801AF1B0
  cmps(c,0,(int32_t)c->r[12],0); // 801AF1B4
  W8(c->r[1]+0x00000106u,c->r[0]); // 801AF1B8
  if (crb(c,2)) { goto L_801AF1D0; } // 801AF1BC
  c->r[4]=c->r[1]+0x00000008u; // 801AF1C0
  c->r[3]=0u+0x00000003u; // 801AF1C4
  c->ctr=c->r[12]; // 801AF1C8
  if (true) { c->lr=0x801AF1D0u; dispatch(c,c->ctr); } // 801AF1CC
L_801AF1D0:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801AF1D0
  c->r[3]=0u+0x00000000u; // 801AF1D4
  c->r[0]=R32(c->r[1]+0x00000124u); // 801AF1D8
  c->lr=c->r[0]; // 801AF1DC
  c->r[1]=c->r[1]+0x00000120u; // 801AF1E0
  return; // 801AF1E4
}

// bta_dm_local_addr_cback
void f_801AF1E8(Ctx* __restrict c) {
  trace_call(0x801AF1E8u);
  c->r[4]=0u+0x803C0000u; // 801AF1E8
  c->r[4]=c->r[4]+0x00007DB4u; // 801AF1EC
  c->r[12]=R32(c->r[4]+0x00000050u); // 801AF1F0
  cmps(c,0,(int32_t)c->r[12],0); // 801AF1F4
  if (crb(c,2)) return; // 801AF1F8
  c->r[4]=c->r[3]|c->r[3]; // 801AF1FC
  c->r[3]=0u+0x00000000u; // 801AF200
  c->ctr=c->r[12]; // 801AF204
  if (true) { dispatch(c,c->ctr); return; } // 801AF208
  return; // 801AF20C
}

// bta_dm_signal_strength
void f_801AF210(Ctx* __restrict c) {
  trace_call(0x801AF210u);
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801AF210
  cmps(c,0,(int32_t)c->r[0],0); // 801AF214
  if (crb(c,2)) { goto L_801AF23C; } // 801AF218
  c->r[4]=0u+0x803C0000u; // 801AF21C
  c->r[0]=R8(c->r[3]+0x00000008u); // 801AF220
  c->r[4]=c->r[4]+0x00007DB4u; // 801AF224
  W8(c->r[4]+0x0000006Cu,c->r[0]); // 801AF228
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801AF22C
  c->r[3]=0u+0x00000000u; // 801AF230
  W16(c->r[4]+0x00000070u,c->r[0]); // 801AF234
  f_801AF24C(c); return; // 801AF238
L_801AF23C:;
  c->r[3]=0u+0x803C0000u; // 801AF23C
  c->r[3]=c->r[3]+0x00007DB4u; // 801AF240
  c->r[3]=c->r[3]+0x00000054u; // 801AF244
  f_801AD658(c); return; // 801AF248
}

// bta_dm_signal_strength_timer_cback
void f_801AF24C(Ctx* __restrict c) {
  trace_call(0x801AF24Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF24C
  c->r[0]=c->lr; // 801AF250
  c->r[3]=0u+0x803C0000u; // 801AF254
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF258
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AF25C
  c->r[31]=c->r[3]+0x00007DB4u; // 801AF260
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AF264
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AF268
  c->r[0]=R8(c->r[31]+0x0000006Cu); // 801AF26C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801AF270
  if (crb(c,2)) { goto L_801AF2AC; } // 801AF274
  c->r[29]=0u+0x00000000u; // 801AF278
  c->r[30]=0u+0x801B0000u; // 801AF27C
  goto L_801AF29C; // 801AF280
L_801AF284:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801AF284
  c->r[4]=c->r[30]+0xFFFFF64Cu; // 801AF288
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801AF28C
  c->r[3]=c->r[31]+c->r[0]; // 801AF290
  c->lr=0x801AF298u; f_801B45F8(c); // 801AF294
  c->r[29]=c->r[29]+0x00000001u; // 801AF298
L_801AF29C:;
  c->r[0]=R8(c->r[31]+0x0000004Du); // 801AF29C
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801AF2A0
  cmpu(c,0,c->r[3],c->r[0]); // 801AF2A4
  if (crb(c,0)) { IRQCHK(c); goto L_801AF284; } // 801AF2A8
L_801AF2AC:;
  c->r[3]=0u+0x803C0000u; // 801AF2AC
  c->r[30]=c->r[3]+0x00007DB4u; // 801AF2B0
  c->r[0]=R8(c->r[30]+0x0000006Cu); // 801AF2B4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801AF2B8
  if (crb(c,2)) { goto L_801AF2F4; } // 801AF2BC
  c->r[29]=0u+0x00000000u; // 801AF2C0
  c->r[31]=0u+0x801B0000u; // 801AF2C4
  goto L_801AF2E4; // 801AF2C8
L_801AF2CC:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801AF2CC
  c->r[4]=c->r[31]+0xFFFFF6B8u; // 801AF2D0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801AF2D4
  c->r[3]=c->r[30]+c->r[0]; // 801AF2D8
  c->lr=0x801AF2E0u; f_801B4734(c); // 801AF2DC
  c->r[29]=c->r[29]+0x00000001u; // 801AF2E0
L_801AF2E4:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801AF2E4
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801AF2E8
  cmpu(c,0,c->r[3],c->r[0]); // 801AF2EC
  if (crb(c,0)) { IRQCHK(c); goto L_801AF2CC; } // 801AF2F0
L_801AF2F4:;
  c->r[7]=0u+0x803C0000u; // 801AF2F4
  c->r[7]=c->r[7]+0x00007DB4u; // 801AF2F8
  c->r[0]=R16(c->r[7]+0x00000070u); // 801AF2FC
  cmps(c,0,(int32_t)c->r[0],0); // 801AF300
  if (crb(c,2)) { goto L_801AF324; } // 801AF304
  c->r[6]=0u+0x801B0000u; // 801AF308
  c->r[3]=c->r[7]+0x00000054u; // 801AF30C
  c->r[6]=c->r[6]+0xFFFFF24Cu; // 801AF310
  c->r[4]=0u+0x00000000u; // 801AF314
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 801AF318
  W32(c->r[7]+0x0000005Cu,c->r[6]); // 801AF31C
  c->lr=0x801AF324u; f_801AD638(c); // 801AF320
L_801AF324:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AF324
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AF328
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AF32C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AF330
  c->lr=c->r[0]; // 801AF334
  c->r[1]=c->r[1]+0x00000020u; // 801AF338
  return; // 801AF33C
}

// bta_dm_acl_change_cback
void f_801AF340(Ctx* __restrict c) {
  trace_call(0x801AF340u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF340
  c->r[0]=c->lr; // 801AF344
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF348
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AF34C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AF350
  c->r[30]=c->r[7]|c->r[7]; // 801AF354
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AF358
  c->r[29]=c->r[3]|c->r[3]; // 801AF35C
  c->r[3]=0u+0x00000012u; // 801AF360
  c->lr=0x801AF368u; f_801A9FA0(c); // 801AF364
  cmps(c,0,(int32_t)c->r[3],0); // 801AF368
  c->r[31]=c->r[3]|c->r[3]; // 801AF36C
  if (crb(c,2)) { goto L_801AF394; } // 801AF370
  c->r[4]=c->r[29]|c->r[29]; // 801AF374
  c->r[3]=c->r[3]+0x0000000Bu; // 801AF378
  c->lr=0x801AF380u; f_801AD170(c); // 801AF37C
  W8(c->r[31]+0x0000000Au,c->r[30]); // 801AF380
  c->r[0]=0u+0x00000105u; // 801AF384
  c->r[3]=c->r[31]|c->r[31]; // 801AF388
  W16(c->r[31]+0x00000000u,c->r[0]); // 801AF38C
  c->lr=0x801AF394u; f_801AD61C(c); // 801AF390
L_801AF394:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AF394
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AF398
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AF39C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AF3A0
  c->lr=c->r[0]; // 801AF3A4
  c->r[1]=c->r[1]+0x00000020u; // 801AF3A8
  return; // 801AF3AC
}

// bta_dm_acl_change
void f_801AF3B0(Ctx* __restrict c) {
  trace_call(0x801AF3B0u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF3B0
  c->r[0]=c->lr; // 801AF3B4
  W32(c->r[1]+0x00000134u,c->r[0]); // 801AF3B8
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 801AF3BC
  c->r[31]=c->r[3]+0x0000000Bu; // 801AF3C0
  W32(c->r[1]+0x00000128u,c->r[30]); // 801AF3C4
  W32(c->r[1]+0x00000124u,c->r[29]); // 801AF3C8
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801AF3CC
  cmps(c,0,(int32_t)c->r[0],0); // 801AF3D0
  if (crb(c,2)) { goto L_801AF494; } // 801AF3D4
  c->r[3]=0u+0x803C0000u; // 801AF3D8
  c->r[29]=0u+0x00000000u; // 801AF3DC
  c->r[30]=c->r[3]+0x00007DB4u; // 801AF3E0
  goto L_801AF408; // 801AF3E4
L_801AF3E8:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801AF3E8
  c->r[4]=c->r[31]|c->r[31]; // 801AF3EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801AF3F0
  c->r[3]=c->r[30]+c->r[0]; // 801AF3F4
  c->lr=0x801AF3FCu; f_801AD1A4(c); // 801AF3F8
  cmps(c,0,(int32_t)c->r[3],0); // 801AF3FC
  if (crb(c,2)) { goto L_801AF418; } // 801AF400
  c->r[29]=c->r[29]+0x00000001u; // 801AF404
L_801AF408:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801AF408
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801AF40C
  cmpu(c,0,c->r[3],c->r[0]); // 801AF410
  if (crb(c,0)) { IRQCHK(c); goto L_801AF3E8; } // 801AF414
L_801AF418:;
  c->r[30]=0u+0x803C0000u; // 801AF418
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801AF41C
  c->r[30]=c->r[30]+0x00007DB4u; // 801AF420
  c->r[3]=R8(c->r[30]+0x0000004Du); // 801AF424
  cmpu(c,0,c->r[0],c->r[3]); // 801AF428
  if (!crb(c,2)) { goto L_801AF44C; } // 801AF42C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)11); // 801AF430
  c->r[4]=c->r[31]|c->r[31]; // 801AF434
  c->r[3]=c->r[30]+c->r[0]; // 801AF438
  c->lr=0x801AF440u; f_801AD170(c); // 801AF43C
  c->r[3]=R8(c->r[30]+0x0000004Du); // 801AF440
  c->r[0]=c->r[3]+0x00000001u; // 801AF444
  W8(c->r[30]+0x0000004Du,c->r[0]); // 801AF448
L_801AF44C:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801AF44C
  c->r[30]=0u+0x803C0000u; // 801AF450
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801AF454
  c->r[3]=0u+0x00000001u; // 801AF458
  c->r[30]=c->r[30]+0x00007DB4u; // 801AF45C
  c->r[0]=0u+0x00000000u; // 801AF460
  c->r[5]=c->r[30]+c->r[4]; // 801AF464
  W8(c->r[5]+0x00000006u,c->r[3]); // 801AF468
  c->r[4]=c->r[31]|c->r[31]; // 801AF46C
  c->r[3]=c->r[1]+0x00000008u; // 801AF470
  W8(c->r[5]+0x00000007u,c->r[0]); // 801AF474
  c->lr=0x801AF47Cu; f_801AD170(c); // 801AF478
  c->r[12]=R32(c->r[30]+0x00000050u); // 801AF47C
  c->r[4]=c->r[1]+0x00000008u; // 801AF480
  c->r[3]=0u+0x00000005u; // 801AF484
  c->ctr=c->r[12]; // 801AF488
  if (true) { c->lr=0x801AF490u; dispatch(c,c->ctr); } // 801AF48C
  goto L_801AF614; // 801AF490
L_801AF494:;
  c->r[3]=0u+0x803C0000u; // 801AF494
  c->r[29]=0u+0x00000000u; // 801AF498
  c->r[30]=c->r[3]+0x00007DB4u; // 801AF49C
  goto L_801AF508; // 801AF4A0
L_801AF4A4:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801AF4A4
  c->r[4]=c->r[31]|c->r[31]; // 801AF4A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801AF4AC
  c->r[3]=c->r[30]+c->r[0]; // 801AF4B0
  c->lr=0x801AF4B8u; f_801AD1A4(c); // 801AF4B4
  cmps(c,0,(int32_t)c->r[3],0); // 801AF4B8
  if (!crb(c,2)) { goto L_801AF504; } // 801AF4BC
  c->r[3]=0u+0x803C0000u; // 801AF4C0
  c->r[30]=c->r[3]+0x00007DB4u; // 801AF4C4
  goto L_801AF4F0; // 801AF4C8
L_801AF4CC:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801AF4CC
  c->r[5]=0u+0x0000000Bu; // 801AF4D0
  c->r[0]=c->r[3]+0x00000001u; // 801AF4D4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)11); // 801AF4D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801AF4DC
  c->r[3]=c->r[30]+c->r[3]; // 801AF4E0
  c->r[4]=c->r[30]+c->r[0]; // 801AF4E4
  c->lr=0x801AF4ECu; f_80004338(c); // 801AF4E8
  c->r[29]=c->r[29]+0x00000001u; // 801AF4EC
L_801AF4F0:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801AF4F0
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801AF4F4
  cmpu(c,0,c->r[3],c->r[0]); // 801AF4F8
  if (crb(c,0)) { IRQCHK(c); goto L_801AF4CC; } // 801AF4FC
  goto L_801AF518; // 801AF500
L_801AF504:;
  c->r[29]=c->r[29]+0x00000001u; // 801AF504
L_801AF508:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801AF508
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801AF50C
  cmpu(c,0,c->r[3],c->r[0]); // 801AF510
  if (crb(c,0)) { IRQCHK(c); goto L_801AF4A4; } // 801AF514
L_801AF518:;
  c->r[4]=0u+0x803C0000u; // 801AF518
  c->r[30]=0u+0x803C0000u; // 801AF51C
  c->r[4]=c->r[4]+0x00007DB4u; // 801AF520
  c->r[30]=c->r[30]+0x00007D38u; // 801AF524
  c->r[3]=R8(c->r[4]+0x0000004Du); // 801AF528
  c->r[0]=R8(c->r[30]+0x00000078u); // 801AF52C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801AF530
  cmps(c,0,(int32_t)c->r[0],0); // 801AF534
  W8(c->r[4]+0x0000004Du,c->r[3]); // 801AF538
  if (crb(c,2)) { goto L_801AF598; } // 801AF53C
  c->r[4]=c->r[31]|c->r[31]; // 801AF540
  c->r[3]=c->r[30]+0x0000001Au; // 801AF544
  c->lr=0x801AF54Cu; f_801AD1A4(c); // 801AF548
  cmps(c,0,(int32_t)c->r[3],0); // 801AF54C
  if (!crb(c,2)) { goto L_801AF598; } // 801AF550
  c->r[0]=R8(c->r[30]+0x00000079u); // 801AF554
  c->r[3]=0u+0x00000000u; // 801AF558
  W8(c->r[30]+0x00000078u,c->r[3]); // 801AF55C
  cmps(c,0,(int32_t)c->r[0],0); // 801AF560
  if (crb(c,2)) { goto L_801AF598; } // 801AF564
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801AF568
  cmpu(c,0,c->r[0],0x00000004u); // 801AF56C
  if (crb(c,0)) { goto L_801AF584; } // 801AF570
  c->r[4]=0u+0x80330000u; // 801AF574
  c->r[3]=0u+0x00000503u; // 801AF578
  c->r[4]=c->r[4]+0x00001790u; // 801AF57C
  c->lr=0x801AF584u; f_801ACB20(c); // 801AF580
L_801AF584:;
  c->r[3]=0u+0x803C0000u; // 801AF584
  c->r[3]=c->r[3]+0x00007D38u; // 801AF588
  c->r[3]=c->r[3]+0x00000040u; // 801AF58C
  c->lr=0x801AF594u; f_801AD658(c); // 801AF590
  c->lr=0x801AF598u; f_801AEAAC(c); // 801AF594
L_801AF598:;
  c->r[30]=0u+0x803C0000u; // 801AF598
  c->r[30]=c->r[30]+0x00007DB4u; // 801AF59C
  c->r[0]=R8(c->r[30]+0x00000072u); // 801AF5A0
  cmps(c,0,(int32_t)c->r[0],0); // 801AF5A4
  if (crb(c,2)) { goto L_801AF5E4; } // 801AF5A8
  c->lr=0x801AF5B0u; f_801B3F48(c); // 801AF5AC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801AF5B0
  if (!crb(c,2)) { goto L_801AF5E4; } // 801AF5B4
  c->r[0]=0u+0x00000000u; // 801AF5B8
  c->r[3]=c->r[30]+0x00000074u; // 801AF5BC
  W8(c->r[30]+0x00000072u,c->r[0]); // 801AF5C0
  c->lr=0x801AF5C8u; f_801AD658(c); // 801AF5C4
  c->r[5]=0u+0x801B0000u; // 801AF5C8
  c->r[3]=c->r[30]+0x00000074u; // 801AF5CC
  c->r[5]=c->r[5]+0xFFFFF630u; // 801AF5D0
  c->r[4]=0u+0x00000000u; // 801AF5D4
  W32(c->r[30]+0x0000007Cu,c->r[5]); // 801AF5D8
  c->r[5]=0u+0x000003E8u; // 801AF5DC
  c->lr=0x801AF5E4u; f_801AD638(c); // 801AF5E0
L_801AF5E4:;
  c->r[4]=c->r[31]|c->r[31]; // 801AF5E4
  c->r[3]=c->r[1]+0x00000008u; // 801AF5E8
  c->lr=0x801AF5F0u; f_801AD170(c); // 801AF5EC
  c->lr=0x801AF5F4u; f_801B3FA4(c); // 801AF5F0
  c->r[5]=0u+0x803C0000u; // 801AF5F4
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801AF5F8
  c->r[5]=c->r[5]+0x00007DB4u; // 801AF5FC
  c->r[4]=c->r[1]+0x00000008u; // 801AF600
  c->r[12]=R32(c->r[5]+0x00000050u); // 801AF604
  c->r[3]=0u+0x00000006u; // 801AF608
  c->ctr=c->r[12]; // 801AF60C
  if (true) { c->lr=0x801AF614u; dispatch(c,c->ctr); } // 801AF610
L_801AF614:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 801AF614
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 801AF618
  c->r[30]=R32(c->r[1]+0x00000128u); // 801AF61C
  c->r[29]=R32(c->r[1]+0x00000124u); // 801AF620
  c->lr=c->r[0]; // 801AF624
  c->r[1]=c->r[1]+0x00000130u; // 801AF628
  return; // 801AF62C
}

// fn_801AF630
void f_801AF630(Ctx* __restrict c) {
  c->r[5]=0u+0x803C0000u; // 801AF630
  c->r[3]=0u+0x00000001u; // 801AF634
  c->r[5]=c->r[5]+0x00007DB4u; // 801AF638
  c->r[4]=0u+0x00000000u; // 801AF63C
  c->r[12]=R32(c->r[5]+0x00000050u); // 801AF640
  c->ctr=c->r[12]; // 801AF644
  if (true) { dispatch(c,c->ctr); return; } // 801AF648
}

// fn_801AF64C
void f_801AF64C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF64C
  c->r[0]=c->lr; // 801AF650
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF654
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AF658
  c->r[31]=c->r[3]|c->r[3]; // 801AF65C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801AF660
  cmps(c,0,(int32_t)c->r[0],0); // 801AF664
  if (!crb(c,2)) { goto L_801AF6A4; } // 801AF668
  c->r[3]=c->r[1]+0x00000008u; // 801AF66C
  c->r[4]=c->r[31]+0x00000003u; // 801AF670
  c->lr=0x801AF678u; f_801AD170(c); // 801AF674
  c->r[0]=0u+0x00000001u; // 801AF678
  c->r[3]=0u+0x803C0000u; // 801AF67C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801AF680
  c->r[3]=c->r[3]+0x00007DB4u; // 801AF684
  c->r[12]=R32(c->r[3]+0x00000050u); // 801AF688
  c->r[4]=c->r[1]+0x00000008u; // 801AF68C
  c->r[0]=R8(c->r[31]+0x00000002u); // 801AF690
  c->r[3]=0u+0x00000007u; // 801AF694
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801AF698
  c->ctr=c->r[12]; // 801AF69C
  if (true) { c->lr=0x801AF6A4u; dispatch(c,c->ctr); } // 801AF6A0
L_801AF6A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AF6A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AF6A8
  c->lr=c->r[0]; // 801AF6AC
  c->r[1]=c->r[1]+0x00000020u; // 801AF6B0
  return; // 801AF6B4
}

// fn_801AF6B8
void f_801AF6B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF6B8
  c->r[0]=c->lr; // 801AF6BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF6C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AF6C4
  c->r[31]=c->r[3]|c->r[3]; // 801AF6C8
  c->r[0]=R8(c->r[3]+0x00000000u); // 801AF6CC
  cmps(c,0,(int32_t)c->r[0],0); // 801AF6D0
  if (!crb(c,2)) { goto L_801AF710; } // 801AF6D4
  c->r[3]=c->r[1]+0x00000008u; // 801AF6D8
  c->r[4]=c->r[31]+0x00000003u; // 801AF6DC
  c->lr=0x801AF6E4u; f_801AD170(c); // 801AF6E0
  c->r[0]=0u+0x00000002u; // 801AF6E4
  c->r[3]=0u+0x803C0000u; // 801AF6E8
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801AF6EC
  c->r[3]=c->r[3]+0x00007DB4u; // 801AF6F0
  c->r[12]=R32(c->r[3]+0x00000050u); // 801AF6F4
  c->r[4]=c->r[1]+0x00000008u; // 801AF6F8
  c->r[0]=R8(c->r[31]+0x00000002u); // 801AF6FC
  c->r[3]=0u+0x00000007u; // 801AF700
  W8(c->r[1]+0x00000010u,c->r[0]); // 801AF704
  c->ctr=c->r[12]; // 801AF708
  if (true) { c->lr=0x801AF710u; dispatch(c,c->ctr); } // 801AF70C
L_801AF710:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AF710
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AF714
  c->lr=c->r[0]; // 801AF718
  c->r[1]=c->r[1]+0x00000020u; // 801AF71C
  return; // 801AF720
}

// bta_dm_l2cap_server_compress_cback
void f_801AF724(Ctx* __restrict c) {
  trace_call(0x801AF724u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF724
  c->r[0]=c->lr; // 801AF728
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AF72C
  c->r[11]=c->r[1]+0x00000030u; // 801AF730
  c->lr=0x801AF738u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AF734
  c->r[31]=0u+0x803C0000u; // 801AF738
  c->r[27]=R32(c->r[1]+0x00000038u); // 801AF73C
  c->r[31]=c->r[31]+0x00007D08u; // 801AF740
  c->r[25]=c->r[3]|c->r[3]; // 801AF744
  c->r[26]=c->r[10]|c->r[10]; // 801AF748
  c->r[29]=0u+0x00000000u; // 801AF74C
  c->r[30]=c->r[31]|c->r[31]; // 801AF750
  c->r[28]=0u+0x00000000u; // 801AF754
L_801AF758:;
  c->r[0]=R8(c->r[31]+0x00000008u); // 801AF758
  cmpu(c,0,c->r[0],0x00000001u); // 801AF75C
  if (!crb(c,2)) { goto L_801AF7D8; } // 801AF760
  c->r[3]=c->r[30]|c->r[30]; // 801AF764
  c->r[4]=c->r[25]|c->r[25]; // 801AF768
  c->lr=0x801AF770u; f_801AD1A4(c); // 801AF76C
  cmps(c,0,(int32_t)c->r[3],0); // 801AF770
  if (!crb(c,2)) { goto L_801AF7D8; } // 801AF774
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801AF778
  cmpu(c,0,c->r[0],0x00000004u); // 801AF77C
  if (crb(c,0)) { goto L_801AF7AC; } // 801AF780
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801AF784
  c->r[5]=0u+0x803C0000u; // 801AF788
  c->r[5]=c->r[5]+0x00007D08u; // 801AF78C
  c->r[4]=0u+0x80330000u; // 801AF790
  c->r[0]=c->r[0]+c->r[28]; // 801AF794
  c->r[3]=0u+0x00000503u; // 801AF798
  c->r[5]=c->r[5]+c->r[0]; // 801AF79C
  c->r[4]=c->r[4]+0x000017A4u; // 801AF7A0
  c->r[5]=R8(c->r[5]+0x00000006u); // 801AF7A4
  c->lr=0x801AF7ACu; f_801ACB38(c); // 801AF7A8
L_801AF7AC:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801AF7AC
  c->r[3]=0u+0x803C0000u; // 801AF7B0
  c->r[3]=c->r[3]+0x00007D08u; // 801AF7B4
  c->r[4]=c->r[26]|c->r[26]; // 801AF7B8
  c->r[0]=c->r[0]+c->r[28]; // 801AF7BC
  c->r[5]=c->r[27]|c->r[27]; // 801AF7C0
  c->r[3]=c->r[3]+c->r[0]; // 801AF7C4
  c->r[3]=R8(c->r[3]+0x00000006u); // 801AF7C8
  c->lr=0x801AF7D0u; f_801EBD28(c); // 801AF7CC
  c->r[29]=c->r[3]|c->r[3]; // 801AF7D0
  goto L_801AF7EC; // 801AF7D4
L_801AF7D8:;
  c->r[28]=c->r[28]+0x00000001u; // 801AF7D8
  c->r[30]=c->r[30]+0x00000009u; // 801AF7DC
  cmps(c,0,(int32_t)c->r[28],5); // 801AF7E0
  c->r[31]=c->r[31]+0x00000009u; // 801AF7E4
  if (crb(c,0)) { IRQCHK(c); goto L_801AF758; } // 801AF7E8
L_801AF7EC:;
  c->r[11]=c->r[1]+0x00000030u; // 801AF7EC
  c->r[3]=c->r[29]|c->r[29]; // 801AF7F0
  c->lr=0x801AF7F8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AF7F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AF7F8
  c->lr=c->r[0]; // 801AF7FC
  c->r[1]=c->r[1]+0x00000030u; // 801AF800
  return; // 801AF804
}

// bta_dm_compress_cback
void f_801AF808(Ctx* __restrict c) {
  trace_call(0x801AF808u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF808
  c->r[0]=c->lr; // 801AF80C
  cmps(c,0,(int32_t)c->r[3],0); // 801AF810
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF814
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AF818
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AF81C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AF820
  if (!crb(c,2)) { goto L_801AF97C; } // 801AF824
  c->r[3]=R32(c->r[13]+0xFFFF943Cu); // 801AF828
  c->r[7]=0u+0x00000001u; // 801AF82C
  c->r[9]=R8(c->r[3]+0x00000001u); // 801AF830
  goto L_801AF96C; // 801AF834
L_801AF838:;
  c->r[8]=rotl(c->r[7],0)&0x000000FFu; // 801AF838
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 801AF83C
  c->r[0]=c->r[0]-c->r[8]; // 801AF840
  c->r[8]=c->r[3]+c->r[0]; // 801AF844
  c->r[0]=R8(c->r[8]+0x00000001u); // 801AF848
  cmpu(c,0,c->r[5],c->r[0]); // 801AF84C
  if (crb(c,2)) { goto L_801AF85C; } // 801AF850
  cmpu(c,0,c->r[0],0x000000FFu); // 801AF854
  if (!crb(c,2)) { goto L_801AF968; } // 801AF858
L_801AF85C:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 801AF85C
  cmpu(c,0,c->r[4],c->r[0]); // 801AF860
  if (!crb(c,2)) { goto L_801AF968; } // 801AF864
  c->r[0]=R8(c->r[8]+0x00000002u); // 801AF868
  cmpu(c,0,c->r[0],0x00000001u); // 801AF86C
  if (!crb(c,2)) { goto L_801AF968; } // 801AF870
  c->r[8]=0u+0x803C0000u; // 801AF874
  c->r[11]=R8(c->r[3]+0x00000001u); // 801AF878
  c->r[10]=R8(c->r[8]+0x00007EB8u); // 801AF87C
  c->r[9]=c->r[8]+0x00007EB8u; // 801AF880
  c->r[31]=0u+0x00000000u; // 801AF884
  c->r[29]=0u+0x00000001u; // 801AF888
  goto L_801AF8EC; // 801AF88C
L_801AF890:;
  c->r[8]=rotl(c->r[29],0)&0x000000FFu; // 801AF890
  c->r[0]=rotl(c->r[29],2)&0x000003FCu; // 801AF894
  c->r[0]=c->r[0]-c->r[8]; // 801AF898
  c->r[12]=c->r[3]+c->r[0]; // 801AF89C
  c->r[0]=R8(c->r[12]+0x00000002u); // 801AF8A0
  cmpu(c,0,c->r[0],0x00000002u); // 801AF8A4
  if (!crb(c,2)) { goto L_801AF8E8; } // 801AF8A8
  c->r[30]=0u+0x00000000u; // 801AF8AC
  goto L_801AF8DC; // 801AF8B0
L_801AF8B4:;
  c->r[8]=rotl(c->r[30],0)&0x000000FFu; // 801AF8B4
  c->r[0]=rotl(c->r[30],3)&0x000007F8u; // 801AF8B8
  c->r[8]=c->r[0]+c->r[8]; // 801AF8BC
  c->r[0]=R8(c->r[12]+0x00000000u); // 801AF8C0
  c->r[8]=c->r[9]+c->r[8]; // 801AF8C4
  c->r[8]=R8(c->r[8]+0x00000007u); // 801AF8C8
  cmpu(c,0,c->r[8],c->r[0]); // 801AF8CC
  if (!crb(c,2)) { goto L_801AF8D8; } // 801AF8D0
  c->r[31]=0u+0x00000001u; // 801AF8D4
L_801AF8D8:;
  c->r[30]=c->r[30]+0x00000001u; // 801AF8D8
L_801AF8DC:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801AF8DC
  cmpu(c,0,c->r[0],c->r[10]); // 801AF8E0
  if (crb(c,0)) { IRQCHK(c); goto L_801AF8B4; } // 801AF8E4
L_801AF8E8:;
  c->r[29]=c->r[29]+0x00000001u; // 801AF8E8
L_801AF8EC:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801AF8EC
  cmpu(c,0,c->r[0],c->r[11]); // 801AF8F0
  if (!crb(c,1)) { IRQCHK(c); goto L_801AF890; } // 801AF8F4
  cmps(c,0,(int32_t)c->r[31],0); // 801AF8F8
  if (!crb(c,2)) { goto L_801AFA24; } // 801AF8FC
  c->r[3]=rotl(c->r[7],0)&0x000000FFu; // 801AF900
  c->r[30]=0u+0x803C0000u; // 801AF904
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801AF908
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801AF90C
  c->r[30]=c->r[30]+0x00007D08u; // 801AF910
  c->r[29]=c->r[0]+c->r[3]; // 801AF914
  c->r[31]=c->r[30]+c->r[29]; // 801AF918
  W8(c->r[31]+0x00000007u,c->r[5]); // 801AF91C
  c->r[3]=c->r[31]|c->r[31]; // 801AF920
  W8(c->r[31]+0x00000006u,c->r[4]); // 801AF924
  c->r[4]=c->r[6]|c->r[6]; // 801AF928
  c->lr=0x801AF930u; f_801AD170(c); // 801AF92C
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801AF930
  c->r[3]=0u+0x00000001u; // 801AF934
  W8(c->r[31]+0x00000008u,c->r[3]); // 801AF938
  c->r[7]=c->r[31]|c->r[31]; // 801AF93C
  cmpu(c,0,c->r[0],0x00000004u); // 801AF940
  if (crb(c,0)) { goto L_801AFA24; } // 801AF944
  c->r[4]=0u+0x80330000u; // 801AF948
  c->r[5]=R8(c->r[31]+0x00000007u); // 801AF94C
  c->r[6]=R8(c->r[31]+0x00000006u); // 801AF950
  c->r[4]=c->r[4]+0x000017D4u; // 801AF954
  c->r[7]=R8(c->r[7]+0x00000008u); // 801AF958
  c->r[3]=0u+0x00000503u; // 801AF95C
  c->lr=0x801AF964u; f_801ACB68(c); // 801AF960
  goto L_801AFA24; // 801AF964
L_801AF968:;
  c->r[7]=c->r[7]+0x00000001u; // 801AF968
L_801AF96C:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 801AF96C
  cmpu(c,0,c->r[0],c->r[9]); // 801AF970
  if (!crb(c,1)) { IRQCHK(c); goto L_801AF838; } // 801AF974
  goto L_801AFA24; // 801AF978
L_801AF97C:;
  cmpu(c,0,c->r[3],0x00000001u); // 801AF97C
  if (!crb(c,2)) { goto L_801AFA24; } // 801AF980
  c->r[7]=R32(c->r[13]+0xFFFF943Cu); // 801AF984
  c->r[8]=0u+0x00000001u; // 801AF988
  c->r[6]=R8(c->r[7]+0x00000001u); // 801AF98C
  goto L_801AFA18; // 801AF990
L_801AF994:;
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 801AF994
  c->r[0]=rotl(c->r[8],2)&0x000003FCu; // 801AF998
  c->r[0]=c->r[0]-c->r[3]; // 801AF99C
  c->r[3]=c->r[7]+c->r[0]; // 801AF9A0
  c->r[0]=R8(c->r[3]+0x00000001u); // 801AF9A4
  cmpu(c,0,c->r[5],c->r[0]); // 801AF9A8
  if (crb(c,2)) { goto L_801AF9B8; } // 801AF9AC
  cmpu(c,0,c->r[0],0x000000FFu); // 801AF9B0
  if (!crb(c,2)) { goto L_801AFA14; } // 801AF9B4
L_801AF9B8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801AF9B8
  cmpu(c,0,c->r[4],c->r[0]); // 801AF9BC
  if (!crb(c,2)) { goto L_801AFA14; } // 801AF9C0
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 801AF9C4
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801AF9C8
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 801AF9CC
  c->r[3]=0u+0x803C0000u; // 801AF9D0
  cmpu(c,0,c->r[0],0x00000004u); // 801AF9D4
  c->r[4]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801AF9D8
  c->r[0]=c->r[4]+c->r[5]; // 801AF9DC
  c->r[3]=c->r[3]+0x00007D08u; // 801AF9E0
  c->r[3]=c->r[3]+c->r[0]; // 801AF9E4
  c->r[0]=0u+0x00000000u; // 801AF9E8
  W8(c->r[3]+0x00000008u,c->r[0]); // 801AF9EC
  if (crb(c,0)) { goto L_801AFA24; } // 801AF9F0
  c->r[4]=0u+0x80330000u; // 801AF9F4
  c->r[5]=R8(c->r[3]+0x00000007u); // 801AF9F8
  c->r[6]=R8(c->r[3]+0x00000006u); // 801AF9FC
  c->r[4]=c->r[4]+0x00001810u; // 801AFA00
  c->r[7]=R8(c->r[3]+0x00000008u); // 801AFA04
  c->r[3]=0u+0x00000503u; // 801AFA08
  c->lr=0x801AFA10u; f_801ACB68(c); // 801AFA0C
  goto L_801AFA24; // 801AFA10
L_801AFA14:;
  c->r[8]=c->r[8]+0x00000001u; // 801AFA14
L_801AFA18:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 801AFA18
  cmpu(c,0,c->r[0],c->r[6]); // 801AFA1C
  if (!crb(c,1)) { IRQCHK(c); goto L_801AF994; } // 801AFA20
L_801AFA24:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AFA24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AFA28
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AFA2C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AFA30
  c->lr=c->r[0]; // 801AFA34
  c->r[1]=c->r[1]+0x00000020u; // 801AFA38
  return; // 801AFA3C
}

// bta_dm_rm_cback
void f_801AFA40(Ctx* __restrict c) {
  trace_call(0x801AFA40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFA40
  c->r[0]=c->lr; // 801AFA44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AFA48
  c->r[11]=c->r[1]+0x00000020u; // 801AFA4C
  c->lr=0x801AFA54u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AFA50
  cmps(c,0,(int32_t)c->r[3],0); // 801AFA54
  c->r[30]=c->r[4]|c->r[4]; // 801AFA58
  c->r[31]=c->r[5]|c->r[5]; // 801AFA5C
  c->r[26]=c->r[6]|c->r[6]; // 801AFA60
  if (!crb(c,2)) { goto L_801AFB30; } // 801AFA64
  c->r[3]=0u+0x803C0000u; // 801AFA68
  c->r[27]=0u+0x00000000u; // 801AFA6C
  c->r[29]=c->r[3]+0x00007DB4u; // 801AFA70
  goto L_801AFB20; // 801AFA74
L_801AFA78:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801AFA78
  c->r[4]=c->r[26]|c->r[26]; // 801AFA7C
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801AFA80
  c->r[3]=c->r[29]+c->r[28]; // 801AFA84
  c->lr=0x801AFA8Cu; f_801AD1A4(c); // 801AFA88
  cmps(c,0,(int32_t)c->r[3],0); // 801AFA8C
  if (!crb(c,2)) { goto L_801AFB1C; } // 801AFA90
  c->r[3]=c->r[29]+c->r[28]; // 801AFA94
  c->r[0]=0u+0x00000001u; // 801AFA98
  W8(c->r[3]+0x00000006u,c->r[0]); // 801AFA9C
  c->r[7]=0u+0x00000001u; // 801AFAA0
  c->r[6]=R32(c->r[13]+0xFFFF9438u); // 801AFAA4
  c->r[4]=R8(c->r[6]+0x00000001u); // 801AFAA8
  goto L_801AFB0C; // 801AFAAC
L_801AFAB0:;
  c->r[3]=rotl(c->r[7],0)&0x000000FFu; // 801AFAB0
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 801AFAB4
  c->r[5]=c->r[0]-c->r[3]; // 801AFAB8
  c->r[3]=c->r[6]+c->r[5]; // 801AFABC
  c->r[0]=R8(c->r[3]+0x00000001u); // 801AFAC0
  cmpu(c,0,c->r[31],c->r[0]); // 801AFAC4
  if (crb(c,2)) { goto L_801AFAD4; } // 801AFAC8
  cmpu(c,0,c->r[0],0x000000FFu); // 801AFACC
  if (!crb(c,2)) { goto L_801AFB08; } // 801AFAD0
L_801AFAD4:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801AFAD4
  cmpu(c,0,c->r[30],c->r[0]); // 801AFAD8
  if (!crb(c,2)) { goto L_801AFB08; } // 801AFADC
  c->r[3]=0u+0x803C0000u; // 801AFAE0
  c->r[4]=c->r[6]+c->r[5]; // 801AFAE4
  c->r[3]=c->r[3]+0x00007DB4u; // 801AFAE8
  c->r[4]=R8(c->r[4]+0x00000002u); // 801AFAEC
  c->r[3]=c->r[3]+c->r[28]; // 801AFAF0
  c->r[0]=R8(c->r[3]+0x00000007u); // 801AFAF4
  cmpu(c,0,c->r[4],c->r[0]); // 801AFAF8
  if (!crb(c,1)) { goto L_801AFB30; } // 801AFAFC
  W8(c->r[3]+0x00000007u,c->r[4]); // 801AFB00
  goto L_801AFB30; // 801AFB04
L_801AFB08:;
  c->r[7]=c->r[7]+0x00000001u; // 801AFB08
L_801AFB0C:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 801AFB0C
  cmpu(c,0,c->r[0],c->r[4]); // 801AFB10
  if (!crb(c,1)) { IRQCHK(c); goto L_801AFAB0; } // 801AFB14
  goto L_801AFB30; // 801AFB18
L_801AFB1C:;
  c->r[27]=c->r[27]+0x00000001u; // 801AFB1C
L_801AFB20:;
  c->r[0]=R8(c->r[29]+0x0000004Du); // 801AFB20
  c->r[3]=rotl(c->r[27],0)&0x000000FFu; // 801AFB24
  cmpu(c,0,c->r[3],c->r[0]); // 801AFB28
  if (crb(c,0)) { IRQCHK(c); goto L_801AFA78; } // 801AFB2C
L_801AFB30:;
  c->r[11]=c->r[1]+0x00000020u; // 801AFB30
  c->lr=0x801AFB38u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AFB34
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AFB38
  c->lr=c->r[0]; // 801AFB3C
  c->r[1]=c->r[1]+0x00000020u; // 801AFB40
  return; // 801AFB44
}

// bta_dm_keep_acl
void f_801AFB48(Ctx* __restrict c) {
  trace_call(0x801AFB48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFB48
  c->r[0]=c->lr; // 801AFB4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AFB50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AFB54
  c->r[4]=R16(c->r[3]+0x00000006u); // 801AFB58
  c->r[3]=0u+0x803C0000u; // 801AFB5C
  c->r[3]=c->r[3]+0x00007DB4u; // 801AFB60
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[0]); // 801AFB64
  W8(c->r[3]+0x00000101u,c->r[4]); // 801AFB68
  if (crb(c,2)) { goto L_801AFB9C; } // 801AFB6C
  c->r[31]=0u+0x00010000u; // 801AFB70
  c->r[3]=c->r[2]+0xFFFF9520u; // 801AFB74
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801AFB78
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801AFB7C
  c->lr=0x801AFB84u; f_801C5EEC(c); // 801AFB80
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801AFB84
  c->r[3]=0u+0x00000000u; // 801AFB88
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801AFB8C
  c->r[5]=0u+0x00000001u; // 801AFB90
  c->lr=0x801AFB98u; f_801C5E24(c); // 801AFB94
  goto L_801AFBB8; // 801AFB98
L_801AFB9C:;
  c->r[3]=c->r[2]+0xFFFF9520u; // 801AFB9C
  c->r[4]=0u+0x00000002u; // 801AFBA0
  c->lr=0x801AFBA8u; f_801C5EEC(c); // 801AFBA4
  c->r[3]=0u+0x00000000u; // 801AFBA8
  c->r[4]=0u+0x00000002u; // 801AFBAC
  c->r[5]=0u+0x00000001u; // 801AFBB0
  c->lr=0x801AFBB8u; f_801C5E24(c); // 801AFBB4
L_801AFBB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AFBB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AFBBC
  c->lr=c->r[0]; // 801AFBC0
  c->r[1]=c->r[1]+0x00000010u; // 801AFBC4
  return; // 801AFBC8
}

// bta_dm_immediate_disable
void f_801AFBCC(Ctx* __restrict c) {
  trace_call(0x801AFBCCu);
  c->r[5]=0u+0x803C0000u; // 801AFBCC
  c->r[3]=0u+0x00000001u; // 801AFBD0
  c->r[5]=c->r[5]+0x00007DB4u; // 801AFBD4
  c->r[4]=0u+0x00000000u; // 801AFBD8
  c->r[12]=R32(c->r[5]+0x00000050u); // 801AFBDC
  c->ctr=c->r[12]; // 801AFBE0
  if (true) { dispatch(c,c->ctr); return; } // 801AFBE4
}

// fn_801AFBE8
void f_801AFBE8(Ctx* __restrict c) {
  return; // 801AFBE8
}

// bta_dm_send_hci_reset
void f_801AFBEC(Ctx* __restrict c) {
  trace_call(0x801AFBECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFBEC
  c->r[0]=c->lr; // 801AFBF0
  c->r[4]=0u+0x803C0000u; // 801AFBF4
  c->r[3]=0u+0x00000002u; // 801AFBF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AFBFC
  c->r[0]=0u+0x00000001u; // 801AFC00
  c->r[4]=c->r[4]+0x00007C78u; // 801AFC04
  W8(c->r[4]+0x0000007Eu,c->r[0]); // 801AFC08
  c->lr=0x801AFC10u; f_801AA140(c); // 801AFC0C
  cmps(c,0,(int32_t)c->r[3],0); // 801AFC10
  if (crb(c,2)) { goto L_801AFC20; } // 801AFC14
  c->r[4]=0u+0x00000000u; // 801AFC18
  c->lr=0x801AFC20u; f_801C1550(c); // 801AFC1C
L_801AFC20:;
  c->r[3]=0u+0x801B0000u; // 801AFC20
  c->r[3]=c->r[3]+0xFFFFFBE8u; // 801AFC24
  c->lr=0x801AFC2Cu; f_801B5638(c); // 801AFC28
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AFC2C
  c->lr=c->r[0]; // 801AFC30
  c->r[1]=c->r[1]+0x00000010u; // 801AFC34
  return; // 801AFC38
}

// BTA_EnableBluetooth
void f_801AFC3C(Ctx* __restrict c) {
  trace_call(0x801AFC3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFC3C
  c->r[0]=c->lr; // 801AFC40
  c->r[4]=0u+0x803C0000u; // 801AFC44
  c->r[5]=0u+0x00000104u; // 801AFC48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AFC4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AFC50
  c->r[31]=c->r[3]|c->r[3]; // 801AFC54
  c->r[3]=c->r[4]+0x00007DB4u; // 801AFC58
  c->r[4]=0u+0x00000000u; // 801AFC5C
  c->lr=0x801AFC64u; f_80004688(c); // 801AFC60
  c->lr=0x801AFC68u; f_801AB598(c); // 801AFC64
  c->r[3]=0u+0x00000001u; // 801AFC68
  c->r[4]=c->r[2]+0xFFFF94F0u; // 801AFC6C
  c->lr=0x801AFC74u; f_801AD608(c); // 801AFC70
  c->r[3]=0u+0x00000002u; // 801AFC74
  c->r[4]=c->r[2]+0xFFFF94F8u; // 801AFC78
  c->lr=0x801AFC80u; f_801AD608(c); // 801AFC7C
  c->lr=0x801AFC84u; f_801AB59C(c); // 801AFC80
  c->r[3]=0u+0x0000000Cu; // 801AFC84
  c->lr=0x801AFC8Cu; f_801A9FA0(c); // 801AFC88
  cmps(c,0,(int32_t)c->r[3],0); // 801AFC8C
  if (crb(c,2)) { goto L_801AFCAC; } // 801AFC90
  c->r[0]=0u+0x00000100u; // 801AFC94
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AFC98
  W32(c->r[3]+0x00000008u,c->r[31]); // 801AFC9C
  c->lr=0x801AFCA4u; f_801AD61C(c); // 801AFCA0
  c->r[3]=0u+0x00000000u; // 801AFCA4
  goto L_801AFCB0; // 801AFCA8
L_801AFCAC:;
  c->r[3]=0u+0x00000001u; // 801AFCAC
L_801AFCB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AFCB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AFCB4
  c->lr=c->r[0]; // 801AFCB8
  c->r[1]=c->r[1]+0x00000010u; // 801AFCBC
  return; // 801AFCC0
}

// BTA_DisableBluetooth
void f_801AFCC4(Ctx* __restrict c) {
  trace_call(0x801AFCC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFCC4
  c->r[0]=c->lr; // 801AFCC8
  c->r[3]=0u+0x00000008u; // 801AFCCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AFCD0
  c->lr=0x801AFCD8u; f_801A9FA0(c); // 801AFCD4
  cmps(c,0,(int32_t)c->r[3],0); // 801AFCD8
  if (crb(c,2)) { goto L_801AFCEC; } // 801AFCDC
  c->r[0]=0u+0x00000101u; // 801AFCE0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AFCE4
  c->lr=0x801AFCECu; f_801AD61C(c); // 801AFCE8
L_801AFCEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AFCEC
  c->lr=c->r[0]; // 801AFCF0
  c->r[1]=c->r[1]+0x00000010u; // 801AFCF4
  return; // 801AFCF8
}

// BTA_DmIsDeviceUp
void f_801AFCFC(Ctx* __restrict c) {
  trace_call(0x801AFCFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFCFC
  c->r[0]=c->lr; // 801AFD00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AFD04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AFD08
  c->lr=0x801AFD10u; f_801AB598(c); // 801AFD0C
  c->lr=0x801AFD14u; f_801B56E0(c); // 801AFD10
  c->r[31]=c->r[3]|c->r[3]; // 801AFD14
  c->lr=0x801AFD1Cu; f_801AB59C(c); // 801AFD18
  c->r[3]=c->r[31]|c->r[31]; // 801AFD1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AFD20
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AFD24
  c->lr=c->r[0]; // 801AFD28
  c->r[1]=c->r[1]+0x00000010u; // 801AFD2C
  return; // 801AFD30
}

// BTA_DmSetDeviceName
void f_801AFD34(Ctx* __restrict c) {
  trace_call(0x801AFD34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFD34
  c->r[0]=c->lr; // 801AFD38
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AFD3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AFD40
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AFD44
  c->r[30]=c->r[3]|c->r[3]; // 801AFD48
  c->r[3]=0u+0x00000028u; // 801AFD4C
  c->lr=0x801AFD54u; f_801A9FA0(c); // 801AFD50
  cmps(c,0,(int32_t)c->r[3],0); // 801AFD54
  c->r[31]=c->r[3]|c->r[3]; // 801AFD58
  if (crb(c,2)) { goto L_801AFD80; } // 801AFD5C
  c->r[0]=0u+0x00000102u; // 801AFD60
  c->r[4]=c->r[30]|c->r[30]; // 801AFD64
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AFD68
  c->r[5]=0u+0x00000020u; // 801AFD6C
  c->r[3]=c->r[3]+0x00000008u; // 801AFD70
  c->lr=0x801AFD78u; f_801900A4(c); // 801AFD74
  c->r[3]=c->r[31]|c->r[31]; // 801AFD78
  c->lr=0x801AFD80u; f_801AD61C(c); // 801AFD7C
L_801AFD80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AFD80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AFD84
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AFD88
  c->lr=c->r[0]; // 801AFD8C
  c->r[1]=c->r[1]+0x00000010u; // 801AFD90
  return; // 801AFD94
}

// BTA_DmSetVisibility
void f_801AFD98(Ctx* __restrict c) {
  trace_call(0x801AFD98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFD98
  c->r[0]=c->lr; // 801AFD9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AFDA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AFDA4
  c->r[31]=c->r[4]|c->r[4]; // 801AFDA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AFDAC
  c->r[30]=c->r[3]|c->r[3]; // 801AFDB0
  c->r[3]=0u+0x00000110u; // 801AFDB4
  c->lr=0x801AFDBCu; f_801A9FA0(c); // 801AFDB8
  cmps(c,0,(int32_t)c->r[3],0); // 801AFDBC
  if (crb(c,2)) { goto L_801AFDD8; } // 801AFDC0
  c->r[0]=0u+0x00000103u; // 801AFDC4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AFDC8
  W8(c->r[3]+0x00000008u,c->r[30]); // 801AFDCC
  W8(c->r[3]+0x00000009u,c->r[31]); // 801AFDD0
  c->lr=0x801AFDD8u; f_801AD61C(c); // 801AFDD4
L_801AFDD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AFDD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AFDDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AFDE0
  c->lr=c->r[0]; // 801AFDE4
  c->r[1]=c->r[1]+0x00000010u; // 801AFDE8
  return; // 801AFDEC
}

// BTA_DmSearch
void f_801AFDF0(Ctx* __restrict c) {
  trace_call(0x801AFDF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFDF0
  c->r[0]=c->lr; // 801AFDF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AFDF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AFDFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AFE00
  c->r[30]=c->r[5]|c->r[5]; // 801AFE04
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AFE08
  c->r[29]=c->r[4]|c->r[4]; // 801AFE0C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801AFE10
  c->r[28]=c->r[3]|c->r[3]; // 801AFE14
  c->r[3]=0u+0x0000001Cu; // 801AFE18
  c->lr=0x801AFE20u; f_801A9FA0(c); // 801AFE1C
  cmps(c,0,(int32_t)c->r[3],0); // 801AFE20
  c->r[31]=c->r[3]|c->r[3]; // 801AFE24
  if (crb(c,2)) { goto L_801AFE54; } // 801AFE28
  c->r[0]=0u+0x00000200u; // 801AFE2C
  c->r[4]=c->r[28]|c->r[28]; // 801AFE30
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AFE34
  c->r[5]=0u+0x0000000Au; // 801AFE38
  c->r[3]=c->r[3]+0x00000008u; // 801AFE3C
  c->lr=0x801AFE44u; f_80004338(c); // 801AFE40
  W32(c->r[31]+0x00000014u,c->r[29]); // 801AFE44
  c->r[3]=c->r[31]|c->r[31]; // 801AFE48
  W32(c->r[31]+0x00000018u,c->r[30]); // 801AFE4C
  c->lr=0x801AFE54u; f_801AD61C(c); // 801AFE50
L_801AFE54:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AFE54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AFE58
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AFE5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AFE60
  c->r[28]=R32(c->r[1]+0x00000010u); // 801AFE64
  c->lr=c->r[0]; // 801AFE68
  c->r[1]=c->r[1]+0x00000020u; // 801AFE6C
  return; // 801AFE70
}

// fn_801AFE74
void f_801AFE74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFE74
  c->r[0]=c->lr; // 801AFE78
  c->r[3]=0u+0x00000008u; // 801AFE7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AFE80
  c->lr=0x801AFE88u; f_801A9FA0(c); // 801AFE84
  cmps(c,0,(int32_t)c->r[3],0); // 801AFE88
  if (crb(c,2)) { goto L_801AFE9C; } // 801AFE8C
  c->r[0]=0u+0x00000201u; // 801AFE90
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AFE94
  c->lr=0x801AFE9Cu; f_801AD61C(c); // 801AFE98
L_801AFE9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AFE9C
  c->lr=c->r[0]; // 801AFEA0
  c->r[1]=c->r[1]+0x00000010u; // 801AFEA4
  return; // 801AFEA8
}

// BTA_DmPinReply
void f_801AFEAC(Ctx* __restrict c) {
  trace_call(0x801AFEACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFEAC
  c->r[0]=c->lr; // 801AFEB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AFEB4
  c->r[11]=c->r[1]+0x00000020u; // 801AFEB8
  c->lr=0x801AFEC0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AFEBC
  c->r[27]=c->r[3]|c->r[3]; // 801AFEC0
  c->r[28]=c->r[4]|c->r[4]; // 801AFEC4
  c->r[29]=c->r[5]|c->r[5]; // 801AFEC8
  c->r[30]=c->r[6]|c->r[6]; // 801AFECC
  c->r[3]=0u+0x00000020u; // 801AFED0
  c->lr=0x801AFED8u; f_801A9FA0(c); // 801AFED4
  cmps(c,0,(int32_t)c->r[3],0); // 801AFED8
  c->r[31]=c->r[3]|c->r[3]; // 801AFEDC
  if (crb(c,2)) { goto L_801AFF20; } // 801AFEE0
  c->r[0]=0u+0x00000107u; // 801AFEE4
  c->r[4]=c->r[27]|c->r[27]; // 801AFEE8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AFEEC
  c->r[3]=c->r[3]+0x00000008u; // 801AFEF0
  c->lr=0x801AFEF8u; f_801AD170(c); // 801AFEF4
  cmps(c,0,(int32_t)c->r[28],0); // 801AFEF8
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 801AFEFC
  if (crb(c,2)) { goto L_801AFF18; } // 801AFF00
  W8(c->r[31]+0x0000000Fu,c->r[29]); // 801AFF04
  c->r[4]=c->r[30]|c->r[30]; // 801AFF08
  c->r[5]=c->r[29]|c->r[29]; // 801AFF0C
  c->r[3]=c->r[31]+0x00000010u; // 801AFF10
  c->lr=0x801AFF18u; f_80004338(c); // 801AFF14
L_801AFF18:;
  c->r[3]=c->r[31]|c->r[31]; // 801AFF18
  c->lr=0x801AFF20u; f_801AD61C(c); // 801AFF1C
L_801AFF20:;
  c->r[11]=c->r[1]+0x00000020u; // 801AFF20
  c->lr=0x801AFF28u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AFF24
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AFF28
  c->lr=c->r[0]; // 801AFF2C
  c->r[1]=c->r[1]+0x00000020u; // 801AFF30
  return; // 801AFF34
}

// BTA_DmAddDevice
void f_801AFF38(Ctx* __restrict c) {
  trace_call(0x801AFF38u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFF38
  c->r[0]=c->lr; // 801AFF3C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AFF40
  c->r[11]=c->r[1]+0x00000030u; // 801AFF44
  c->lr=0x801AFF4Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AFF48
  c->r[28]=c->r[3]|c->r[3]; // 801AFF4C
  c->r[29]=c->r[4]|c->r[4]; // 801AFF50
  c->r[30]=c->r[5]|c->r[5]; // 801AFF54
  c->r[27]=c->r[6]|c->r[6]; // 801AFF58
  c->r[3]=c->r[1]+0x00000008u; // 801AFF5C
  c->r[31]=0u+0x00000000u; // 801AFF60
  c->r[4]=0u+0x00000000u; // 801AFF64
  c->r[5]=0u+0x00000008u; // 801AFF68
  c->lr=0x801AFF70u; f_80004688(c); // 801AFF6C
  cmps(c,0,(int32_t)c->r[27],0); // 801AFF70
  if (crb(c,2)) { goto L_801AFFDC; } // 801AFF74
  c->r[7]=0u+0x802E0000u; // 801AFF78
  c->r[5]=c->r[1]+0x00000008u; // 801AFF7C
  c->r[7]=c->r[7]+0x000010E0u; // 801AFF80
  c->r[3]=0u+0x00000001u; // 801AFF84
  goto L_801AFFC8; // 801AFF88
L_801AFF8C:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801AFF8C
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801AFF90
  c->r[0]=c->r[30]&c->r[4]; cr0(c,c->r[0]); // 801AFF94
  if (crb(c,2)) { goto L_801AFFC4; } // 801AFF98
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 801AFF9C
  c->r[30]=c->r[30]&~c->r[4]; // 801AFFA0
  c->r[4]=R32(c->r[7]+c->r[0]); // 801AFFA4
  c->r[0]=rotl(c->r[4],0)&0x00001FE0u; // 801AFFA8
  c->r[6]=rotl(c->r[4],29)&0x000003FCu; // 801AFFAC
  c->r[0]=c->r[4]-c->r[0]; // 801AFFB0
  c->r[4]=R32(c->r[5]+c->r[6]); // 801AFFB4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801AFFB8
  c->r[0]=c->r[4]|c->r[0]; // 801AFFBC
  W32(c->r[5]+c->r[6],c->r[0]); // 801AFFC0
L_801AFFC4:;
  c->r[31]=c->r[31]+0x00000001u; // 801AFFC4
L_801AFFC8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801AFFC8
  if (crb(c,2)) { goto L_801AFFDC; } // 801AFFCC
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801AFFD0
  cmpu(c,0,c->r[0],0x00000017u); // 801AFFD4
  if (crb(c,0)) { IRQCHK(c); goto L_801AFF8C; } // 801AFFD8
L_801AFFDC:;
  c->lr=0x801AFFE0u; f_801AB598(c); // 801AFFDC
  c->r[3]=c->r[28]|c->r[28]; // 801AFFE0
  c->r[8]=c->r[29]|c->r[29]; // 801AFFE4
  c->r[7]=c->r[1]+0x00000008u; // 801AFFE8
  c->r[4]=0u+0x00000000u; // 801AFFEC
  c->r[5]=0u+0x00000000u; // 801AFFF0
  c->r[6]=0u+0x00000000u; // 801AFFF4
  c->lr=0x801AFFFCu; f_801B4D80(c); // 801AFFF8
  c->r[28]=c->r[3]|c->r[3]; // 801AFFFC
  c->lr=0x801B0004u; f_801AB59C(c); // 801B0000
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 801B0004
  c->r[11]=c->r[1]+0x00000030u; // 801B0008
  c->r[0]=cntlz(c->r[0]); // 801B000C
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801B0010
  c->lr=0x801B0018u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0014
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B0018
  c->lr=c->r[0]; // 801B001C
  c->r[1]=c->r[1]+0x00000030u; // 801B0020
  return; // 801B0024
}

// BTA_DmRemoveDevice
void f_801B0028(Ctx* __restrict c) {
  trace_call(0x801B0028u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0028
  c->r[0]=c->lr; // 801B002C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0030
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0034
  c->r[31]=c->r[3]|c->r[3]; // 801B0038
  c->lr=0x801B0040u; f_801AB598(c); // 801B003C
  c->r[3]=c->r[31]|c->r[31]; // 801B0040
  c->lr=0x801B0048u; f_801B4F08(c); // 801B0044
  c->r[31]=c->r[3]|c->r[3]; // 801B0048
  c->lr=0x801B0050u; f_801AB59C(c); // 801B004C
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801B0050
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0054
  c->r[0]=cntlz(c->r[0]); // 801B0058
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801B005C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0060
  c->lr=c->r[0]; // 801B0064
  c->r[1]=c->r[1]+0x00000010u; // 801B0068
  return; // 801B006C
}

// fn_801B0070
void f_801B0070(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0070
  c->r[0]=c->lr; // 801B0074
  c->r[3]=0u+0x00000008u; // 801B0078
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B007C
  c->lr=0x801B0084u; f_801A9FA0(c); // 801B0080
  cmps(c,0,(int32_t)c->r[3],0); // 801B0084
  if (crb(c,2)) { goto L_801B0098; } // 801B0088
  c->r[0]=0u+0x0000010Cu; // 801B008C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801B0090
  c->lr=0x801B0098u; f_801AD61C(c); // 801B0094
L_801B0098:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0098
  c->lr=c->r[0]; // 801B009C
  c->r[1]=c->r[1]+0x00000010u; // 801B00A0
  return; // 801B00A4
}

// bta_dm_sm_execute
void f_801B00A8(Ctx* __restrict c) {
  trace_call(0x801B00A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B00A8
  c->r[0]=c->lr; // 801B00AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B00B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B00B4
  c->r[31]=0u+0x802E0000u; // 801B00B8
  c->r[31]=c->r[31]+0x00001158u; // 801B00BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B00C0
  c->r[30]=0u+0x802E0000u; // 801B00C4
  c->r[30]=c->r[30]+0x0000118Cu; // 801B00C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B00CC
  c->r[29]=0u+0x00000000u; // 801B00D0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B00D4
  c->r[28]=c->r[3]|c->r[3]; // 801B00D8
L_801B00DC:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801B00DC
  c->r[0]=c->r[29]+c->r[30]; // 801B00E0
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801B00E4
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 801B00E8
  c->r[3]=c->r[3]-c->r[4]; // 801B00EC
  c->r[0]=R8(c->r[3]+c->r[0]); // 801B00F0
  cmpu(c,0,c->r[0],0x0000000Du); // 801B00F4
  if (crb(c,2)) { goto L_801B011C; } // 801B00F8
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801B00FC
  c->r[3]=c->r[28]|c->r[28]; // 801B0100
  c->r[12]=R32(c->r[31]+c->r[0]); // 801B0104
  c->ctr=c->r[12]; // 801B0108
  if (true) { c->lr=0x801B0110u; dispatch(c,c->ctr); } // 801B010C
  c->r[29]=c->r[29]+0x00000001u; // 801B0110
  cmps(c,0,(int32_t)c->r[29],2); // 801B0114
  if (crb(c,0)) { IRQCHK(c); goto L_801B00DC; } // 801B0118
L_801B011C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B011C
  c->r[3]=0u+0x00000001u; // 801B0120
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B0124
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B0128
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B012C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0130
  c->lr=c->r[0]; // 801B0134
  c->r[1]=c->r[1]+0x00000020u; // 801B0138
  return; // 801B013C
}

// bta_dm_search_sm_execute
void f_801B0140(Ctx* __restrict c) {
  trace_call(0x801B0140u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0140
  c->r[0]=c->lr; // 801B0144
  c->r[7]=0u+0x803C0000u; // 801B0148
  c->r[5]=0u+0x802E0000u; // 801B014C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0150
  c->r[7]=c->r[7]+0x00007D38u; // 801B0154
  c->r[5]=c->r[5]+0x00001270u; // 801B0158
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B015C
  c->r[31]=0u+0x802E0000u; // 801B0160
  c->r[31]=c->r[31]+0x000011B8u; // 801B0164
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B0168
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B016C
  c->r[29]=0u+0x00000000u; // 801B0170
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B0174
  c->r[28]=c->r[3]|c->r[3]; // 801B0178
  c->r[6]=R16(c->r[7]+0x00000018u); // 801B017C
  c->r[0]=R16(c->r[3]+0x00000000u); // 801B0180
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801B0184
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801B0188
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801B018C
  c->r[30]=R32(c->r[5]+c->r[6]); // 801B0190
  c->r[0]=c->r[0]-c->r[4]; // 801B0194
  c->r[3]=c->r[30]+c->r[0]; // 801B0198
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B019C
  W16(c->r[7]+0x00000018u,c->r[0]); // 801B01A0
L_801B01A4:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801B01A4
  c->r[0]=c->r[29]+c->r[30]; // 801B01A8
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801B01AC
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 801B01B0
  c->r[3]=c->r[3]-c->r[4]; // 801B01B4
  c->r[0]=R8(c->r[3]+c->r[0]); // 801B01B8
  cmpu(c,0,c->r[0],0x00000012u); // 801B01BC
  if (crb(c,2)) { goto L_801B01E4; } // 801B01C0
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801B01C4
  c->r[3]=c->r[28]|c->r[28]; // 801B01C8
  c->r[12]=R32(c->r[31]+c->r[0]); // 801B01CC
  c->ctr=c->r[12]; // 801B01D0
  if (true) { c->lr=0x801B01D8u; dispatch(c,c->ctr); } // 801B01D4
  c->r[29]=c->r[29]+0x00000001u; // 801B01D8
  cmps(c,0,(int32_t)c->r[29],2); // 801B01DC
  if (crb(c,0)) { IRQCHK(c); goto L_801B01A4; } // 801B01E0
L_801B01E4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B01E4
  c->r[3]=0u+0x00000001u; // 801B01E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B01EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B01F0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B01F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B01F8
  c->lr=c->r[0]; // 801B01FC
  c->r[1]=c->r[1]+0x00000020u; // 801B0200
  return; // 801B0204
}

// bta_dm_init_pm
void f_801B0208(Ctx* __restrict c) {
  trace_call(0x801B0208u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0208
  c->r[0]=c->lr; // 801B020C
  c->r[3]=0u+0x803C0000u; // 801B0210
  c->r[4]=0u+0x00000000u; // 801B0214
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0218
  c->r[3]=c->r[3]+0x00007EB8u; // 801B021C
  c->r[5]=0u+0x0000002Eu; // 801B0220
  c->lr=0x801B0228u; f_80004688(c); // 801B0224
  c->r[3]=R32(c->r[13]+0xFFFF9440u); // 801B0228
  c->r[0]=R8(c->r[3]+0x00000001u); // 801B022C
  cmps(c,0,(int32_t)c->r[0],0); // 801B0230
  if (crb(c,2)) { goto L_801B0260; } // 801B0234
  c->r[3]=0u+0x801B0000u; // 801B0238
  c->r[3]=c->r[3]+0x00000288u; // 801B023C
  c->lr=0x801B0244u; f_801AD264(c); // 801B0240
  c->r[4]=0u+0x803C0000u; // 801B0244
  c->r[5]=0u+0x801B0000u; // 801B0248
  c->r[4]=c->r[4]+0x00007DB4u; // 801B024C
  c->r[3]=0u+0x00000003u; // 801B0250
  c->r[4]=c->r[4]+0x00000095u; // 801B0254
  c->r[5]=c->r[5]+0x00000988u; // 801B0258
  c->lr=0x801B0260u; f_801B89FC(c); // 801B025C
L_801B0260:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0260
  c->lr=c->r[0]; // 801B0264
  c->r[1]=c->r[1]+0x00000010u; // 801B0268
  return; // 801B026C
}

// bta_dm_disable_pm
void f_801B0270(Ctx* __restrict c) {
  trace_call(0x801B0270u);
  c->r[4]=0u+0x803C0000u; // 801B0270
  c->r[3]=0u+0x00000004u; // 801B0274
  c->r[4]=c->r[4]+0x00007DB4u; // 801B0278
  c->r[5]=0u+0x00000000u; // 801B027C
  c->r[4]=c->r[4]+0x00000095u; // 801B0280
  f_801B89FC(c); return; // 801B0284
}

// bta_dm_pm_cback
void f_801B0288(Ctx* __restrict c) {
  trace_call(0x801B0288u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0288
  c->r[0]=c->lr; // 801B028C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B0290
  c->r[11]=c->r[1]+0x00000040u; // 801B0294
  c->lr=0x801B029Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0298
  c->r[25]=c->r[3]|c->r[3]; // 801B029C
  c->r[26]=c->r[4]|c->r[4]; // 801B02A0
  c->r[27]=c->r[5]|c->r[5]; // 801B02A4
  c->r[28]=c->r[6]|c->r[6]; // 801B02A8
  c->r[3]=c->r[1]+0x0000000Cu; // 801B02AC
  c->lr=0x801B02B4u; f_801B6494(c); // 801B02B0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B02B4
  if (!crb(c,2)) { goto L_801B0324; } // 801B02B8
  c->r[0]=R16(c->r[1]+0x00000012u); // 801B02BC
  cmpu(c,0,c->r[0],0x0000000Fu); // 801B02C0
  if (!crb(c,2)) { goto L_801B0324; } // 801B02C4
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801B02C8
  cmpu(c,0,c->r[0],0x00000003u); // 801B02CC
  if (!crb(c,0)) { goto L_801B0324; } // 801B02D0
  cmpu(c,0,c->r[25],0x00000004u); // 801B02D4
  if (!crb(c,2)) { goto L_801B0300; } // 801B02D8
  c->r[5]=0u+0x802E0000u; // 801B02DC
  c->r[3]=c->r[28]|c->r[28]; // 801B02E0
  c->r[5]=c->r[5]+0x00001010u; // 801B02E4
  c->r[4]=c->r[1]+0x00000008u; // 801B02E8
  c->r[0]=R16(c->r[5]+0x00000004u); // 801B02EC
  c->r[0]=c->r[0]&0x0000000Bu; cr0(c,c->r[0]); // 801B02F0
  W16(c->r[1]+0x00000008u,c->r[0]); // 801B02F4
  c->lr=0x801B02FCu; f_801B38A4(c); // 801B02F8
  goto L_801B0324; // 801B02FC
L_801B0300:;
  cmpu(c,0,c->r[25],0x00000005u); // 801B0300
  if (!crb(c,2)) { goto L_801B0324; } // 801B0304
  c->r[5]=0u+0x802E0000u; // 801B0308
  c->r[3]=c->r[28]|c->r[28]; // 801B030C
  c->r[5]=c->r[5]+0x00001010u; // 801B0310
  c->r[4]=c->r[1]+0x00000008u; // 801B0314
  c->r[0]=R16(c->r[5]+0x00000004u); // 801B0318
  W16(c->r[1]+0x00000008u,c->r[0]); // 801B031C
  c->lr=0x801B0324u; f_801B38A4(c); // 801B0320
L_801B0324:;
  c->r[5]=R32(c->r[13]+0xFFFF9440u); // 801B0324
  c->r[30]=0u+0x00000001u; // 801B0328
  c->r[4]=R8(c->r[5]+0x00000001u); // 801B032C
  goto L_801B0368; // 801B0330
L_801B0334:;
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801B0334
  c->r[0]=rotl(c->r[30],2)&0x000003FCu; // 801B0338
  c->r[0]=c->r[0]-c->r[3]; // 801B033C
  c->r[3]=c->r[5]+c->r[0]; // 801B0340
  c->r[0]=R8(c->r[5]+c->r[0]); // 801B0344
  cmpu(c,0,c->r[26],c->r[0]); // 801B0348
  if (!crb(c,2)) { goto L_801B0364; } // 801B034C
  c->r[0]=R8(c->r[3]+0x00000001u); // 801B0350
  cmpu(c,0,c->r[0],0x000000FFu); // 801B0354
  if (crb(c,2)) { goto L_801B0374; } // 801B0358
  cmpu(c,0,c->r[27],c->r[0]); // 801B035C
  if (crb(c,2)) { goto L_801B0374; } // 801B0360
L_801B0364:;
  c->r[30]=c->r[30]+0x00000001u; // 801B0364
L_801B0368:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801B0368
  cmpu(c,0,c->r[0],c->r[4]); // 801B036C
  if (!crb(c,1)) { IRQCHK(c); goto L_801B0334; } // 801B0370
L_801B0374:;
  c->r[0]=R8(c->r[5]+0x00000001u); // 801B0374
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801B0378
  cmpu(c,0,c->r[3],c->r[0]); // 801B037C
  if (crb(c,1)) { goto L_801B05F0; } // 801B0380
  c->r[23]=0u+0x803C0000u; // 801B0384
  c->r[31]=0u+0x00000000u; // 801B0388
  c->r[23]=c->r[23]+0x00007DB4u; // 801B038C
L_801B0390:;
  c->r[29]=rotl(c->r[31],5)&0x00001FE0u; // 801B0390
  c->r[24]=c->r[23]+c->r[29]; // 801B0394
  c->r[0]=R8(c->r[24]+0x000000B6u); // 801B0398
  cmps(c,0,(int32_t)c->r[0],0); // 801B039C
  if (crb(c,2)) { goto L_801B03D0; } // 801B03A0
  c->r[4]=c->r[28]|c->r[28]; // 801B03A4
  c->r[3]=c->r[24]+0x000000B0u; // 801B03A8
  c->lr=0x801B03B0u; f_801AD1A4(c); // 801B03AC
  cmps(c,0,(int32_t)c->r[3],0); // 801B03B0
  if (!crb(c,2)) { goto L_801B03D0; } // 801B03B4
  c->r[3]=c->r[24]|c->r[24]; // 801B03B8
  c->r[3]=c->r[3]+0x00000098u; // 801B03BC
  c->lr=0x801B03C4u; f_801AD658(c); // 801B03C0
  c->r[0]=0u+0x00000000u; // 801B03C4
  W8(c->r[24]+0x000000B6u,c->r[0]); // 801B03C8
  goto L_801B03DC; // 801B03CC
L_801B03D0:;
  c->r[31]=c->r[31]+0x00000001u; // 801B03D0
  cmpu(c,0,c->r[31],0x00000003u); // 801B03D4
  if (crb(c,0)) { IRQCHK(c); goto L_801B0390; } // 801B03D8
L_801B03DC:;
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801B03DC
  c->r[3]=rotl(c->r[30],2)&0x000003FCu; // 801B03E0
  c->r[30]=c->r[3]-c->r[4]; // 801B03E4
  c->r[0]=R32(c->r[13]+0xFFFF9440u); // 801B03E8
  c->r[4]=R32(c->r[13]+0xFFFF9444u); // 801B03EC
  c->r[31]=rotl(c->r[25],3)&0x000007F8u; // 801B03F0
  c->r[3]=c->r[0]+c->r[30]; // 801B03F4
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B03F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)74); // 801B03FC
  c->r[0]=c->r[4]+c->r[0]; // 801B0400
  c->r[3]=c->r[0]+c->r[31]; // 801B0404
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B0408
  cmps(c,0,(int32_t)c->r[0],0); // 801B040C
  if (crb(c,2)) { goto L_801B05F0; } // 801B0410
  c->r[23]=0u+0x803C0000u; // 801B0414
  c->r[29]=0u+0x00000000u; // 801B0418
  c->r[24]=c->r[23]+0x00007EB8u; // 801B041C
  goto L_801B0464; // 801B0420
L_801B0424:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801B0424
  c->r[0]=rotl(c->r[29],3)&0x000007F8u; // 801B0428
  c->r[0]=c->r[0]+c->r[3]; // 801B042C
  c->r[3]=c->r[24]+c->r[0]; // 801B0430
  c->r[0]=R8(c->r[3]+0x00000007u); // 801B0434
  cmpu(c,0,c->r[26],c->r[0]); // 801B0438
  if (!crb(c,2)) { goto L_801B0460; } // 801B043C
  c->r[0]=R8(c->r[3]+0x00000008u); // 801B0440
  cmpu(c,0,c->r[27],c->r[0]); // 801B0444
  if (!crb(c,2)) { goto L_801B0460; } // 801B0448
  c->r[4]=c->r[28]|c->r[28]; // 801B044C
  c->r[3]=c->r[3]+0x00000001u; // 801B0450
  c->lr=0x801B0458u; f_801AD1A4(c); // 801B0454
  cmps(c,0,(int32_t)c->r[3],0); // 801B0458
  if (crb(c,2)) { goto L_801B0474; } // 801B045C
L_801B0460:;
  c->r[29]=c->r[29]+0x00000001u; // 801B0460
L_801B0464:;
  c->r[0]=R8(c->r[23]+0x00007EB8u); // 801B0464
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801B0468
  cmpu(c,0,c->r[3],c->r[0]); // 801B046C
  if (crb(c,0)) { IRQCHK(c); goto L_801B0424; } // 801B0470
L_801B0474:;
  c->r[0]=R32(c->r[13]+0xFFFF9440u); // 801B0474
  c->r[4]=R32(c->r[13]+0xFFFF9444u); // 801B0478
  c->r[3]=c->r[0]+c->r[30]; // 801B047C
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B0480
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)74); // 801B0484
  c->r[0]=c->r[4]+c->r[0]; // 801B0488
  c->r[3]=c->r[0]+c->r[31]; // 801B048C
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B0490
  cmpu(c,0,c->r[0],0x00000010u); // 801B0494
  if (!crb(c,2)) { goto L_801B0508; } // 801B0498
  c->r[27]=0u+0x803C0000u; // 801B049C
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801B04A0
  c->r[0]=R8(c->r[27]+0x00007EB8u); // 801B04A4
  cmpu(c,0,c->r[3],c->r[0]); // 801B04A8
  if (crb(c,2)) { goto L_801B0574; } // 801B04AC
  c->r[26]=c->r[27]+0x00007EB8u; // 801B04B0
  goto L_801B04EC; // 801B04B4
L_801B04B8:;
  c->r[6]=rotl(c->r[29],0)&0x000000FFu; // 801B04B8
  c->r[4]=rotl(c->r[29],3)&0x000007F8u; // 801B04BC
  c->r[3]=c->r[6]+0x00000001u; // 801B04C0
  c->r[5]=0u+0x00000009u; // 801B04C4
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801B04C8
  c->r[4]=c->r[4]+c->r[6]; // 801B04CC
  c->r[0]=c->r[0]+c->r[3]; // 801B04D0
  c->r[3]=c->r[26]+c->r[4]; // 801B04D4
  c->r[4]=c->r[26]+c->r[0]; // 801B04D8
  c->r[3]=c->r[3]+0x00000001u; // 801B04DC
  c->r[4]=c->r[4]+0x00000001u; // 801B04E0
  c->lr=0x801B04E8u; f_80004338(c); // 801B04E4
  c->r[29]=c->r[29]+0x00000001u; // 801B04E8
L_801B04EC:;
  c->r[3]=R8(c->r[27]+0x00007EB8u); // 801B04EC
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801B04F0
  cmpu(c,0,c->r[0],c->r[3]); // 801B04F4
  if (crb(c,0)) { IRQCHK(c); goto L_801B04B8; } // 801B04F8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B04FC
  W8(c->r[27]+0x00007EB8u,c->r[0]); // 801B0500
  goto L_801B0574; // 801B0504
L_801B0508:;
  c->r[30]=0u+0x803C0000u; // 801B0508
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 801B050C
  c->r[0]=R8(c->r[30]+0x00007EB8u); // 801B0510
  cmpu(c,0,c->r[4],c->r[0]); // 801B0514
  if (!crb(c,2)) { goto L_801B0574; } // 801B0518
  cmpu(c,0,c->r[0],0x00000005u); // 801B051C
  if (!crb(c,2)) { goto L_801B0544; } // 801B0520
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B0524
  cmpu(c,0,c->r[0],0x00000002u); // 801B0528
  if (crb(c,0)) { goto L_801B05F0; } // 801B052C
  c->r[4]=0u+0x80330000u; // 801B0530
  c->r[3]=0u+0x00000501u; // 801B0534
  c->r[4]=c->r[4]+0x00001850u; // 801B0538
  c->lr=0x801B0540u; f_801ACB20(c); // 801B053C
  goto L_801B05F0; // 801B0540
L_801B0544:;
  c->r[3]=rotl(c->r[29],3)&0x000007F8u; // 801B0544
  c->r[0]=c->r[30]+0x00007EB8u; // 801B0548
  c->r[3]=c->r[3]+c->r[4]; // 801B054C
  c->r[4]=c->r[28]|c->r[28]; // 801B0550
  c->r[5]=c->r[0]+c->r[3]; // 801B0554
  W8(c->r[5]+0x00000007u,c->r[26]); // 801B0558
  c->r[3]=c->r[5]+0x00000001u; // 801B055C
  W8(c->r[5]+0x00000008u,c->r[27]); // 801B0560
  c->lr=0x801B0568u; f_801AD170(c); // 801B0564
  c->r[3]=R8(c->r[30]+0x00007EB8u); // 801B0568
  c->r[0]=c->r[3]+0x00000001u; // 801B056C
  W8(c->r[30]+0x00007EB8u,c->r[0]); // 801B0570
L_801B0574:;
  c->r[3]=0u+0x803C0000u; // 801B0574
  c->r[24]=0u+0x00000000u; // 801B0578
  c->r[26]=c->r[3]+0x00007DB4u; // 801B057C
  goto L_801B05B8; // 801B0580
L_801B0584:;
  c->r[0]=rotl(c->r[24],0)&0x000000FFu; // 801B0584
  c->r[4]=c->r[28]|c->r[28]; // 801B0588
  c->r[23]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801B058C
  c->r[3]=c->r[26]+c->r[23]; // 801B0590
  c->lr=0x801B0598u; f_801AD1A4(c); // 801B0594
  cmps(c,0,(int32_t)c->r[3],0); // 801B0598
  if (!crb(c,2)) { goto L_801B05B4; } // 801B059C
  c->r[3]=c->r[26]+c->r[23]; // 801B05A0
  c->r[0]=0u+0x00000000u; // 801B05A4
  W8(c->r[3]+0x00000009u,c->r[0]); // 801B05A8
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801B05AC
  goto L_801B05C8; // 801B05B0
L_801B05B4:;
  c->r[24]=c->r[24]+0x00000001u; // 801B05B4
L_801B05B8:;
  c->r[0]=R8(c->r[26]+0x0000004Du); // 801B05B8
  c->r[3]=rotl(c->r[24],0)&0x000000FFu; // 801B05BC
  cmpu(c,0,c->r[3],c->r[0]); // 801B05C0
  if (crb(c,0)) { IRQCHK(c); goto L_801B0584; } // 801B05C4
L_801B05C8:;
  c->r[6]=0u+0x803C0000u; // 801B05C8
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 801B05CC
  c->r[0]=rotl(c->r[29],3)&0x000007F8u; // 801B05D0
  c->r[3]=c->r[28]|c->r[28]; // 801B05D4
  c->r[6]=c->r[6]+0x00007EB8u; // 801B05D8
  c->r[4]=0u+0x00000000u; // 801B05DC
  c->r[0]=c->r[0]+c->r[5]; // 801B05E0
  c->r[5]=c->r[6]+c->r[0]; // 801B05E4
  W8(c->r[5]+0x00000009u,c->r[25]); // 801B05E8
  c->lr=0x801B05F0u; f_801B0608(c); // 801B05EC
L_801B05F0:;
  c->r[11]=c->r[1]+0x00000040u; // 801B05F0
  c->lr=0x801B05F8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B05F4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B05F8
  c->lr=c->r[0]; // 801B05FC
  c->r[1]=c->r[1]+0x00000040u; // 801B0600
  return; // 801B0604
}

// bta_dm_pm_set_mode
void f_801B0608(Ctx* __restrict c) {
  trace_call(0x801B0608u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0608
  c->r[0]=c->lr; // 801B060C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B0610
  c->r[11]=c->r[1]+0x00000050u; // 801B0614
  c->lr=0x801B061Cu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0618
  c->r[5]=0u+0x803C0000u; // 801B061C
  c->r[20]=c->r[3]|c->r[3]; // 801B0620
  c->r[28]=c->r[5]+0x00007DB4u; // 801B0624
  c->r[21]=c->r[4]|c->r[4]; // 801B0628
  c->r[0]=R8(c->r[28]+0x0000004Du); // 801B062C
  c->r[27]=0u+0x00000000u; // 801B0630
  c->r[26]=0u+0x00000000u; // 801B0634
  c->r[25]=0u+0x00000000u; // 801B0638
  cmps(c,0,(int32_t)c->r[0],0); // 801B063C
  c->r[24]=0u+0x00000000u; // 801B0640
  c->r[23]=0u+0x00000000u; // 801B0644
  c->r[22]=0u+0x00000000u; // 801B0648
  if (crb(c,2)) { goto L_801B0970; } // 801B064C
  c->r[30]=0u+0x00000000u; // 801B0650
  goto L_801B0684; // 801B0654
L_801B0658:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801B0658
  c->r[4]=c->r[20]|c->r[20]; // 801B065C
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801B0660
  c->r[3]=c->r[28]+c->r[29]; // 801B0664
  c->lr=0x801B066Cu; f_801AD1A4(c); // 801B0668
  cmps(c,0,(int32_t)c->r[3],0); // 801B066C
  if (!crb(c,2)) { goto L_801B0680; } // 801B0670
  c->r[24]=c->r[28]+c->r[29]; // 801B0674
  c->r[25]=R8(c->r[24]+0x0000000Au); // 801B0678
  goto L_801B0694; // 801B067C
L_801B0680:;
  c->r[30]=c->r[30]+0x00000001u; // 801B0680
L_801B0684:;
  c->r[0]=R8(c->r[28]+0x0000004Du); // 801B0684
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801B0688
  cmpu(c,0,c->r[3],c->r[0]); // 801B068C
  if (crb(c,0)) { IRQCHK(c); goto L_801B0658; } // 801B0690
L_801B0694:;
  cmps(c,0,(int32_t)c->r[24],0); // 801B0694
  if (crb(c,2)) { goto L_801B0970; } // 801B0698
  c->r[30]=0u+0x803C0000u; // 801B069C
  c->r[28]=0u+0x00000000u; // 801B06A0
  c->r[31]=c->r[30]+0x00007EB8u; // 801B06A4
  goto L_801B07D8; // 801B06A8
L_801B06AC:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 801B06AC
  c->r[0]=rotl(c->r[28],3)&0x000007F8u; // 801B06B0
  c->r[29]=c->r[0]+c->r[3]; // 801B06B4
  c->r[4]=c->r[20]|c->r[20]; // 801B06B8
  c->r[3]=c->r[31]+c->r[29]; // 801B06BC
  c->r[3]=c->r[3]+0x00000001u; // 801B06C0
  c->lr=0x801B06C8u; f_801AD1A4(c); // 801B06C4
  cmps(c,0,(int32_t)c->r[3],0); // 801B06C8
  if (!crb(c,2)) { goto L_801B07D4; } // 801B06CC
  c->r[7]=R32(c->r[13]+0xFFFF9440u); // 801B06D0
  c->r[8]=c->r[31]+c->r[29]; // 801B06D4
  c->r[3]=R8(c->r[8]+0x00000008u); // 801B06D8
  c->r[9]=0u+0x00000001u; // 801B06DC
  c->r[6]=R8(c->r[7]+0x00000001u); // 801B06E0
  c->r[4]=R8(c->r[8]+0x00000007u); // 801B06E4
  goto L_801B0720; // 801B06E8
L_801B06EC:;
  c->r[5]=rotl(c->r[9],0)&0x000000FFu; // 801B06EC
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 801B06F0
  c->r[0]=c->r[0]-c->r[5]; // 801B06F4
  c->r[5]=c->r[7]+c->r[0]; // 801B06F8
  c->r[0]=R8(c->r[7]+c->r[0]); // 801B06FC
  cmpu(c,0,c->r[0],c->r[4]); // 801B0700
  if (!crb(c,2)) { goto L_801B071C; } // 801B0704
  c->r[0]=R8(c->r[5]+0x00000001u); // 801B0708
  cmpu(c,0,c->r[0],0x000000FFu); // 801B070C
  if (crb(c,2)) { goto L_801B072C; } // 801B0710
  cmpu(c,0,c->r[0],c->r[3]); // 801B0714
  if (crb(c,2)) { goto L_801B072C; } // 801B0718
L_801B071C:;
  c->r[9]=c->r[9]+0x00000001u; // 801B071C
L_801B0720:;
  c->r[0]=rotl(c->r[9],0)&0x000000FFu; // 801B0720
  cmpu(c,0,c->r[0],c->r[6]); // 801B0724
  if (!crb(c,1)) { IRQCHK(c); goto L_801B06EC; } // 801B0728
L_801B072C:;
  c->r[3]=rotl(c->r[9],0)&0x000000FFu; // 801B072C
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 801B0730
  c->r[3]=c->r[0]-c->r[3]; // 801B0734
  c->r[0]=R8(c->r[8]+0x00000009u); // 801B0738
  c->r[4]=c->r[7]+c->r[3]; // 801B073C
  c->r[3]=R32(c->r[13]+0xFFFF9444u); // 801B0740
  c->r[4]=R8(c->r[4]+0x00000002u); // 801B0744
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801B0748
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)74); // 801B074C
  c->r[5]=c->r[3]+c->r[4]; // 801B0750
  c->r[3]=c->r[5]+c->r[0]; // 801B0754
  c->r[0]=R8(c->r[5]+0x00000000u); // 801B0758
  c->r[4]=R8(c->r[3]+0x00000002u); // 801B075C
  c->r[23]=c->r[23]|c->r[0]; // 801B0760
  c->r[0]=c->r[25]&c->r[4]; cr0(c,c->r[0]); // 801B0764
  if (!crb(c,2)) { goto L_801B079C; } // 801B0768
  c->r[3]=c->r[31]+c->r[29]; // 801B076C
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801B0770
  c->r[3]=R8(c->r[3]+0x00000009u); // 801B0774
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801B0778
  c->r[5]=c->r[5]+c->r[3]; // 801B077C
  c->r[3]=R8(c->r[5]+0x00000002u); // 801B0780
  cmpu(c,0,c->r[3],c->r[0]); // 801B0784
  c->r[22]=c->r[22]|c->r[3]; // 801B0788
  if (!crb(c,1)) { goto L_801B07D4; } // 801B078C
  c->r[26]=R16(c->r[5]+0x00000004u); // 801B0790
  c->r[27]=c->r[4]|c->r[4]; // 801B0794
  goto L_801B07D4; // 801B0798
L_801B079C:;
  c->r[3]=R8(c->r[3]+0x00000006u); // 801B079C
  c->r[0]=c->r[25]&c->r[3]; cr0(c,c->r[0]); // 801B07A0
  if (!crb(c,2)) { goto L_801B07D4; } // 801B07A4
  c->r[4]=c->r[31]+c->r[29]; // 801B07A8
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801B07AC
  c->r[4]=R8(c->r[4]+0x00000009u); // 801B07B0
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801B07B4
  c->r[5]=c->r[5]+c->r[4]; // 801B07B8
  c->r[4]=R8(c->r[5]+0x00000006u); // 801B07BC
  cmpu(c,0,c->r[4],c->r[0]); // 801B07C0
  c->r[22]=c->r[22]|c->r[4]; // 801B07C4
  if (!crb(c,1)) { goto L_801B07D4; } // 801B07C8
  c->r[27]=c->r[3]|c->r[3]; // 801B07CC
  c->r[26]=R16(c->r[5]+0x00000008u); // 801B07D0
L_801B07D4:;
  c->r[28]=c->r[28]+0x00000001u; // 801B07D4
L_801B07D8:;
  c->r[0]=R8(c->r[30]+0x00007EB8u); // 801B07D8
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 801B07DC
  cmpu(c,0,c->r[3],c->r[0]); // 801B07E0
  if (crb(c,0)) { IRQCHK(c); goto L_801B06AC; } // 801B07E4
  c->r[0]=rotl(c->r[27],0)&0x00000003u; cr0(c,c->r[0]); // 801B07E8
  if (crb(c,2)) { goto L_801B0810; } // 801B07EC
  c->r[3]=rotl(c->r[23],0)&0x000000FFu; // 801B07F0
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801B07F4
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801B07F8
  if (!crb(c,2)) { goto L_801B0810; } // 801B07FC
  c->r[0]=c->r[23]&c->r[22]; // 801B0800
  c->r[27]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[27]); // 801B0804
  if (!crb(c,2)) { goto L_801B0810; } // 801B0808
  c->r[26]=0u+0x00000000u; // 801B080C
L_801B0810:;
  cmps(c,0,(int32_t)c->r[21],0); // 801B0810
  if (!crb(c,2)) { goto L_801B08B4; } // 801B0814
  cmps(c,0,(int32_t)c->r[26],0); // 801B0818
  if (crb(c,2)) { goto L_801B08B4; } // 801B081C
  c->r[21]=0u+0x803C0000u; // 801B0820
  c->r[0]=0u+0x00000003u; // 801B0824
  c->r[21]=c->r[21]+0x00007DB4u; // 801B0828
  c->r[4]=0u+0x00000000u; // 801B082C
  c->ctr=c->r[0]; // 801B0830
L_801B0834:;
  c->r[22]=rotl(c->r[4],5)&0x00001FE0u; // 801B0834
  c->r[3]=c->r[21]+c->r[22]; // 801B0838
  c->r[0]=R8(c->r[3]+0x000000B6u); // 801B083C
  cmps(c,0,(int32_t)c->r[0],0); // 801B0840
  if (!crb(c,2)) { goto L_801B0880; } // 801B0844
  c->r[0]=0u+0x00000001u; // 801B0848
  c->r[4]=c->r[20]|c->r[20]; // 801B084C
  W8(c->r[3]+0x000000B6u,c->r[0]); // 801B0850
  c->r[3]=c->r[3]+0x000000B0u; // 801B0854
  c->lr=0x801B085Cu; f_801AD170(c); // 801B0858
  c->r[4]=0u+0x801B0000u; // 801B085C
  c->r[3]=c->r[21]+c->r[22]; // 801B0860
  c->r[4]=c->r[4]+0x00000A00u; // 801B0864
  c->r[5]=c->r[26]|c->r[26]; // 801B0868
  W32(c->r[3]+0x000000A0u,c->r[4]); // 801B086C
  c->r[3]=c->r[3]+0x00000098u; // 801B0870
  c->r[4]=0u+0x00000000u; // 801B0874
  c->lr=0x801B087Cu; f_801AD638(c); // 801B0878
  goto L_801B0970; // 801B087C
L_801B0880:;
  c->r[4]=c->r[4]+0x00000001u; // 801B0880
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801B0884
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B0834; } // 801B0888
  cmpu(c,0,c->r[0],0x00000003u); // 801B088C
  if (!crb(c,2)) { goto L_801B08B4; } // 801B0890
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B0894
  cmpu(c,0,c->r[0],0x00000002u); // 801B0898
  if (crb(c,0)) { goto L_801B0970; } // 801B089C
  c->r[4]=0u+0x80330000u; // 801B08A0
  c->r[3]=0u+0x00000501u; // 801B08A4
  c->r[4]=c->r[4]+0x0000187Cu; // 801B08A8
  c->lr=0x801B08B0u; f_801ACB20(c); // 801B08AC
  goto L_801B0970; // 801B08B0
L_801B08B4:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; cr0(c,c->r[0]); // 801B08B4
  if (crb(c,2)) { goto L_801B0970; } // 801B08B8
  cmpu(c,0,c->r[0],0x00000001u); // 801B08BC
  if (!crb(c,2)) { goto L_801B0904; } // 801B08C0
  c->r[0]=0u+0x00000001u; // 801B08C4
  c->r[3]=c->r[20]|c->r[20]; // 801B08C8
  W8(c->r[24]+0x00000009u,c->r[0]); // 801B08CC
  c->r[4]=c->r[1]+0x00000009u; // 801B08D0
  c->lr=0x801B08D8u; f_801B8C88(c); // 801B08D4
  c->r[0]=R8(c->r[1]+0x00000009u); // 801B08D8
  cmpu(c,0,c->r[0],0x00000003u); // 801B08DC
  if (crb(c,2)) { goto L_801B0970; } // 801B08E0
  c->r[3]=0u+0x803C0000u; // 801B08E4
  c->r[5]=R32(c->r[13]+0xFFFF9448u); // 801B08E8
  c->r[3]=c->r[3]+0x00007DB4u; // 801B08EC
  c->r[4]=c->r[20]|c->r[20]; // 801B08F0
  c->r[3]=R8(c->r[3]+0x00000095u); // 801B08F4
  c->r[5]=c->r[5]+0x0000000Au; // 801B08F8
  c->lr=0x801B0900u; f_801B8AB8(c); // 801B08FC
  goto L_801B0970; // 801B0900
L_801B0904:;
  cmpu(c,0,c->r[0],0x00000002u); // 801B0904
  if (!crb(c,2)) { goto L_801B0948; } // 801B0908
  c->r[0]=0u+0x00000002u; // 801B090C
  c->r[3]=c->r[20]|c->r[20]; // 801B0910
  W8(c->r[24]+0x00000009u,c->r[0]); // 801B0914
  c->r[4]=c->r[1]+0x00000008u; // 801B0918
  c->lr=0x801B0920u; f_801B8C88(c); // 801B091C
  c->r[0]=R8(c->r[1]+0x00000008u); // 801B0920
  cmpu(c,0,c->r[0],0x00000002u); // 801B0924
  if (crb(c,2)) { goto L_801B0970; } // 801B0928
  c->r[3]=0u+0x803C0000u; // 801B092C
  c->r[5]=R32(c->r[13]+0xFFFF9448u); // 801B0930
  c->r[3]=c->r[3]+0x00007DB4u; // 801B0934
  c->r[4]=c->r[20]|c->r[20]; // 801B0938
  c->r[3]=R8(c->r[3]+0x00000095u); // 801B093C
  c->lr=0x801B0944u; f_801B8AB8(c); // 801B0940
  goto L_801B0970; // 801B0944
L_801B0948:;
  cmpu(c,0,c->r[0],0x00000004u); // 801B0948
  if (!crb(c,2)) { goto L_801B0970; } // 801B094C
  c->r[3]=0u+0x803C0000u; // 801B0950
  c->r[0]=0u+0x00000000u; // 801B0954
  c->r[3]=c->r[3]+0x00007DB4u; // 801B0958
  W8(c->r[1]+0x00000014u,c->r[0]); // 801B095C
  c->r[3]=R8(c->r[3]+0x00000095u); // 801B0960
  c->r[4]=c->r[20]|c->r[20]; // 801B0964
  c->r[5]=c->r[1]+0x0000000Cu; // 801B0968
  c->lr=0x801B0970u; f_801B8AB8(c); // 801B096C
L_801B0970:;
  c->r[11]=c->r[1]+0x00000050u; // 801B0970
  c->lr=0x801B0978u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0974
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B0978
  c->lr=c->r[0]; // 801B097C
  c->r[1]=c->r[1]+0x00000050u; // 801B0980
  return; // 801B0984
}

// bta_dm_pm_btm_cback
void f_801B0988(Ctx* __restrict c) {
  trace_call(0x801B0988u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0988
  c->r[0]=c->lr; // 801B098C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0990
  c->r[11]=c->r[1]+0x00000020u; // 801B0994
  c->lr=0x801B099Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0998
  c->r[27]=c->r[3]|c->r[3]; // 801B099C
  c->r[28]=c->r[4]|c->r[4]; // 801B09A0
  c->r[29]=c->r[5]|c->r[5]; // 801B09A4
  c->r[30]=c->r[6]|c->r[6]; // 801B09A8
  c->r[3]=0u+0x00000014u; // 801B09AC
  c->lr=0x801B09B4u; f_801A9FA0(c); // 801B09B0
  cmps(c,0,(int32_t)c->r[3],0); // 801B09B4
  c->r[31]=c->r[3]|c->r[3]; // 801B09B8
  if (crb(c,2)) { goto L_801B09E8; } // 801B09BC
  c->r[0]=0u+0x00000109u; // 801B09C0
  c->r[4]=c->r[27]|c->r[27]; // 801B09C4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801B09C8
  W8(c->r[3]+0x0000000Eu,c->r[28]); // 801B09CC
  W16(c->r[3]+0x00000010u,c->r[29]); // 801B09D0
  W8(c->r[3]+0x00000012u,c->r[30]); // 801B09D4
  c->r[3]=c->r[3]+0x00000008u; // 801B09D8
  c->lr=0x801B09E0u; f_801AD170(c); // 801B09DC
  c->r[3]=c->r[31]|c->r[31]; // 801B09E0
  c->lr=0x801B09E8u; f_801AD61C(c); // 801B09E4
L_801B09E8:;
  c->r[11]=c->r[1]+0x00000020u; // 801B09E8
  c->lr=0x801B09F0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B09EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B09F0
  c->lr=c->r[0]; // 801B09F4
  c->r[1]=c->r[1]+0x00000020u; // 801B09F8
  return; // 801B09FC
}

// bta_dm_pm_timer_cback
void f_801B0A00(Ctx* __restrict c) {
  trace_call(0x801B0A00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0A00
  c->r[0]=c->lr; // 801B0A04
  c->r[4]=0u+0x803C0000u; // 801B0A08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0A0C
  c->r[4]=c->r[4]+0x00007DB4u; // 801B0A10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0A14
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0A18
  c->r[30]=0u+0x00000000u; // 801B0A1C
  c->r[0]=R8(c->r[4]+0x000000B6u); // 801B0A20
  cmps(c,0,(int32_t)c->r[0],0); // 801B0A24
  if (crb(c,2)) { goto L_801B0A44; } // 801B0A28
  c->r[0]=c->r[4]+0x00000098u; // 801B0A2C
  cmpu(c,0,c->r[0],c->r[3]); // 801B0A30
  if (!crb(c,2)) { goto L_801B0A44; } // 801B0A34
  c->r[0]=0u+0x00000000u; // 801B0A38
  W8(c->r[4]+0x000000B6u,c->r[0]); // 801B0A3C
  goto L_801B0A98; // 801B0A40
L_801B0A44:;
  c->r[0]=R8(c->r[4]+0x000000D6u); // 801B0A44
  c->r[30]=0u+0x00000001u; // 801B0A48
  cmps(c,0,(int32_t)c->r[0],0); // 801B0A4C
  if (crb(c,2)) { goto L_801B0A6C; } // 801B0A50
  c->r[0]=c->r[4]+0x000000B8u; // 801B0A54
  cmpu(c,0,c->r[0],c->r[3]); // 801B0A58
  if (!crb(c,2)) { goto L_801B0A6C; } // 801B0A5C
  c->r[0]=0u+0x00000000u; // 801B0A60
  W8(c->r[4]+0x000000D6u,c->r[0]); // 801B0A64
  goto L_801B0A98; // 801B0A68
L_801B0A6C:;
  c->r[0]=R8(c->r[4]+0x000000F6u); // 801B0A6C
  c->r[30]=0u+0x00000002u; // 801B0A70
  cmps(c,0,(int32_t)c->r[0],0); // 801B0A74
  if (crb(c,2)) { goto L_801B0A94; } // 801B0A78
  c->r[0]=c->r[4]+0x000000D8u; // 801B0A7C
  cmpu(c,0,c->r[0],c->r[3]); // 801B0A80
  if (!crb(c,2)) { goto L_801B0A94; } // 801B0A84
  c->r[0]=0u+0x00000000u; // 801B0A88
  W8(c->r[4]+0x000000F6u,c->r[0]); // 801B0A8C
  goto L_801B0A98; // 801B0A90
L_801B0A94:;
  c->r[30]=0u+0x00000003u; // 801B0A94
L_801B0A98:;
  cmpu(c,0,c->r[30],0x00000003u); // 801B0A98
  if (crb(c,2)) { goto L_801B0AE0; } // 801B0A9C
  c->r[3]=0u+0x0000000Eu; // 801B0AA0
  c->lr=0x801B0AA8u; f_801A9FA0(c); // 801B0AA4
  cmps(c,0,(int32_t)c->r[3],0); // 801B0AA8
  c->r[31]=c->r[3]|c->r[3]; // 801B0AAC
  if (crb(c,2)) { goto L_801B0AE0; } // 801B0AB0
  c->r[4]=0u+0x803C0000u; // 801B0AB4
  c->r[5]=0u+0x0000010Au; // 801B0AB8
  c->r[4]=c->r[4]+0x00007DB4u; // 801B0ABC
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801B0AC0
  W16(c->r[3]+0x00000000u,c->r[5]); // 801B0AC4
  c->r[4]=c->r[4]+c->r[0]; // 801B0AC8
  c->r[4]=c->r[4]+0x000000B0u; // 801B0ACC
  c->r[3]=c->r[3]+0x00000008u; // 801B0AD0
  c->lr=0x801B0AD8u; f_801AD170(c); // 801B0AD4
  c->r[3]=c->r[31]|c->r[31]; // 801B0AD8
  c->lr=0x801B0AE0u; f_801AD61C(c); // 801B0ADC
L_801B0AE0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0AE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0AE4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B0AE8
  c->lr=c->r[0]; // 801B0AEC
  c->r[1]=c->r[1]+0x00000010u; // 801B0AF0
  return; // 801B0AF4
}

// bta_dm_pm_btm_status
void f_801B0AF8(Ctx* __restrict c) {
  trace_call(0x801B0AF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0AF8
  c->r[0]=c->lr; // 801B0AFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0B00
  c->r[11]=c->r[1]+0x00000020u; // 801B0B04
  c->lr=0x801B0B0Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0B08
  c->r[30]=0u+0x803C0000u; // 801B0B0C
  c->r[31]=c->r[3]|c->r[3]; // 801B0B10
  c->r[30]=c->r[30]+0x00007DB4u; // 801B0B14
  c->r[27]=0u+0x00000000u; // 801B0B18
L_801B0B1C:;
  c->r[28]=rotl(c->r[27],5)&0x00001FE0u; // 801B0B1C
  c->r[29]=c->r[30]+c->r[28]; // 801B0B20
  c->r[0]=R8(c->r[29]+0x000000B6u); // 801B0B24
  cmps(c,0,(int32_t)c->r[0],0); // 801B0B28
  if (crb(c,2)) { goto L_801B0B5C; } // 801B0B2C
  c->r[3]=c->r[29]+0x000000B0u; // 801B0B30
  c->r[4]=c->r[31]+0x00000008u; // 801B0B34
  c->lr=0x801B0B3Cu; f_801AD1A4(c); // 801B0B38
  cmps(c,0,(int32_t)c->r[3],0); // 801B0B3C
  if (!crb(c,2)) { goto L_801B0B5C; } // 801B0B40
  c->r[3]=c->r[29]|c->r[29]; // 801B0B44
  c->r[3]=c->r[3]+0x00000098u; // 801B0B48
  c->lr=0x801B0B50u; f_801AD658(c); // 801B0B4C
  c->r[0]=0u+0x00000000u; // 801B0B50
  W8(c->r[29]+0x000000B6u,c->r[0]); // 801B0B54
  goto L_801B0B68; // 801B0B58
L_801B0B5C:;
  c->r[27]=c->r[27]+0x00000001u; // 801B0B5C
  cmpu(c,0,c->r[27],0x00000003u); // 801B0B60
  if (crb(c,0)) { IRQCHK(c); goto L_801B0B1C; } // 801B0B64
L_801B0B68:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801B0B68
  cmps(c,0,(int32_t)c->r[0],0); // 801B0B6C
  if (crb(c,2)) { goto L_801B0B78; } // 801B0B70
  goto L_801B0C00; // 801B0B74
L_801B0B78:;
  c->r[0]=R8(c->r[31]+0x00000012u); // 801B0B78
  cmps(c,0,(int32_t)c->r[0],0); // 801B0B7C
  if (crb(c,2)) { goto L_801B0BF4; } // 801B0B80
  c->r[3]=0u+0x803C0000u; // 801B0B84
  c->r[29]=0u+0x00000000u; // 801B0B88
  c->r[30]=c->r[3]+0x00007DB4u; // 801B0B8C
  goto L_801B0BE0; // 801B0B90
L_801B0B94:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801B0B94
  c->r[4]=c->r[31]+0x00000008u; // 801B0B98
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801B0B9C
  c->r[3]=c->r[30]+c->r[28]; // 801B0BA0
  c->lr=0x801B0BA8u; f_801AD1A4(c); // 801B0BA4
  cmps(c,0,(int32_t)c->r[3],0); // 801B0BA8
  if (!crb(c,2)) { goto L_801B0BDC; } // 801B0BAC
  c->r[5]=c->r[30]+c->r[28]; // 801B0BB0
  c->r[0]=R8(c->r[5]+0x00000009u); // 801B0BB4
  c->r[6]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[6]); // 801B0BB8
  if (crb(c,2)) { goto L_801B0C00; } // 801B0BBC
  c->r[0]=R8(c->r[5]+0x0000000Au); // 801B0BC0
  c->r[3]=c->r[31]+0x00000008u; // 801B0BC4
  c->r[4]=0u+0x00000000u; // 801B0BC8
  c->r[0]=c->r[0]|c->r[6]; // 801B0BCC
  W8(c->r[5]+0x0000000Au,c->r[0]); // 801B0BD0
  c->lr=0x801B0BD8u; f_801B0608(c); // 801B0BD4
  goto L_801B0C00; // 801B0BD8
L_801B0BDC:;
  c->r[29]=c->r[29]+0x00000001u; // 801B0BDC
L_801B0BE0:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801B0BE0
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801B0BE4
  cmpu(c,0,c->r[3],c->r[0]); // 801B0BE8
  if (crb(c,0)) { IRQCHK(c); goto L_801B0B94; } // 801B0BEC
  goto L_801B0C00; // 801B0BF0
L_801B0BF4:;
  c->r[3]=c->r[31]+0x00000008u; // 801B0BF4
  c->r[4]=0u+0x00000000u; // 801B0BF8
  c->lr=0x801B0C00u; f_801B0608(c); // 801B0BFC
L_801B0C00:;
  c->r[11]=c->r[1]+0x00000020u; // 801B0C00
  c->lr=0x801B0C08u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0C04
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0C08
  c->lr=c->r[0]; // 801B0C0C
  c->r[1]=c->r[1]+0x00000020u; // 801B0C10
  return; // 801B0C14
}

// bta_dm_pm_timer
void f_801B0C18(Ctx* __restrict c) {
  trace_call(0x801B0C18u);
  c->r[4]=0u+0x00000001u; // 801B0C18
  c->r[3]=c->r[3]+0x00000008u; // 801B0C1C
  f_801B0608(c); return; // 801B0C20
}

// bta_hh_api_enable
void f_801B0C24(Ctx* __restrict c) {
  trace_call(0x801B0C24u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0C24
  c->r[0]=c->lr; // 801B0C28
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0C2C
  c->r[0]=0u+0x00000006u; // 801B0C30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B0C34
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B0C38
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B0C3C
  c->r[29]=c->r[3]|c->r[3]; // 801B0C40
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B0C44
  c->lr=0x801B0C4Cu; f_801C2B98(c); // 801B0C48
  c->r[31]=0u+0x803C0000u; // 801B0C4C
  c->r[4]=0u+0x00000000u; // 801B0C50
  c->r[3]=c->r[31]+0x00007EE8u; // 801B0C54
  c->r[5]=0u+0x00000230u; // 801B0C58
  c->lr=0x801B0C60u; f_80004688(c); // 801B0C5C
  c->r[4]=R8(c->r[29]+0x00000008u); // 801B0C60
  c->r[3]=c->r[13]+0xFFFF9480u; // 801B0C64
  c->lr=0x801B0C6Cu; f_801C31D8(c); // 801B0C68
  c->r[3]=0u+0x801B0000u; // 801B0C6C
  c->r[3]=c->r[3]+0x000020D4u; // 801B0C70
  c->lr=0x801B0C78u; f_801C2BDC(c); // 801B0C74
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B0C78
  if (!crb(c,2)) { goto L_801B0D60; } // 801B0C7C
  c->r[4]=R32(c->r[29]+0x00000030u); // 801B0C80
  c->r[12]=c->r[31]+0x00007EE8u; // 801B0C84
  c->r[3]=0u+0x00000000u; // 801B0C88
  c->r[0]=0u+0x00000002u; // 801B0C8C
  W32(c->r[12]+0x00000224u,c->r[4]); // 801B0C90
  c->r[29]=0u+0x00000000u; // 801B0C94
  c->r[11]=0u+0x00000001u; // 801B0C98
  c->r[10]=0u+0x000000FFu; // 801B0C9C
  W8(c->r[1]+0x00000008u,c->r[3]); // 801B0CA0
  c->r[9]=0u+0x00000010u; // 801B0CA4
  c->ctr=c->r[0]; // 801B0CA8
L_801B0CAC:;
  c->r[3]=rotl(c->r[29],5)&0x00001FE0u; // 801B0CAC
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801B0CB0
  c->r[31]=c->r[12]+c->r[3]; // 801B0CB4
  c->r[8]=c->r[29]+0x00000001u; // 801B0CB8
  W8(c->r[31]+0x0000002Cu,c->r[11]); // 801B0CBC
  c->r[30]=c->r[12]+c->r[0]; // 801B0CC0
  c->r[7]=c->r[29]+0x00000002u; // 801B0CC4
  c->r[6]=c->r[29]+0x00000003u; // 801B0CC8
  W8(c->r[31]+0x00000026u,c->r[10]); // 801B0CCC
  c->r[5]=c->r[29]+0x00000004u; // 801B0CD0
  c->r[4]=c->r[29]+0x00000005u; // 801B0CD4
  c->r[3]=c->r[29]+0x00000006u; // 801B0CD8
  W8(c->r[31]+0x00000022u,c->r[29]); // 801B0CDC
  c->r[0]=c->r[29]+0x00000007u; // 801B0CE0
  c->r[29]=c->r[29]+0x00000008u; // 801B0CE4
  W8(c->r[30]+0x00000214u,c->r[9]); // 801B0CE8
  W8(c->r[31]+0x0000004Cu,c->r[11]); // 801B0CEC
  W8(c->r[31]+0x00000046u,c->r[10]); // 801B0CF0
  W8(c->r[31]+0x00000042u,c->r[8]); // 801B0CF4
  W8(c->r[30]+0x00000215u,c->r[9]); // 801B0CF8
  W8(c->r[31]+0x0000006Cu,c->r[11]); // 801B0CFC
  W8(c->r[31]+0x00000066u,c->r[10]); // 801B0D00
  W8(c->r[31]+0x00000062u,c->r[7]); // 801B0D04
  W8(c->r[30]+0x00000216u,c->r[9]); // 801B0D08
  W8(c->r[31]+0x0000008Cu,c->r[11]); // 801B0D0C
  W8(c->r[31]+0x00000086u,c->r[10]); // 801B0D10
  W8(c->r[31]+0x00000082u,c->r[6]); // 801B0D14
  W8(c->r[30]+0x00000217u,c->r[9]); // 801B0D18
  W8(c->r[31]+0x000000ACu,c->r[11]); // 801B0D1C
  W8(c->r[31]+0x000000A6u,c->r[10]); // 801B0D20
  W8(c->r[31]+0x000000A2u,c->r[5]); // 801B0D24
  W8(c->r[30]+0x00000218u,c->r[9]); // 801B0D28
  W8(c->r[31]+0x000000CCu,c->r[11]); // 801B0D2C
  W8(c->r[31]+0x000000C6u,c->r[10]); // 801B0D30
  W8(c->r[31]+0x000000C2u,c->r[4]); // 801B0D34
  W8(c->r[30]+0x00000219u,c->r[9]); // 801B0D38
  W8(c->r[31]+0x000000ECu,c->r[11]); // 801B0D3C
  W8(c->r[31]+0x000000E6u,c->r[10]); // 801B0D40
  W8(c->r[31]+0x000000E2u,c->r[3]); // 801B0D44
  W8(c->r[30]+0x0000021Au,c->r[9]); // 801B0D48
  W8(c->r[31]+0x0000010Cu,c->r[11]); // 801B0D4C
  W8(c->r[31]+0x00000106u,c->r[10]); // 801B0D50
  W8(c->r[31]+0x00000102u,c->r[0]); // 801B0D54
  W8(c->r[30]+0x0000021Bu,c->r[9]); // 801B0D58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B0CAC; } // 801B0D5C
L_801B0D60:;
  c->r[5]=0u+0x803C0000u; // 801B0D60
  c->r[4]=c->r[1]+0x00000008u; // 801B0D64
  c->r[5]=c->r[5]+0x00007EE8u; // 801B0D68
  c->r[3]=0u+0x00000000u; // 801B0D6C
  c->r[12]=R32(c->r[5]+0x00000224u); // 801B0D70
  c->ctr=c->r[12]; // 801B0D74
  if (true) { c->lr=0x801B0D7Cu; dispatch(c,c->ctr); } // 801B0D78
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0D7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B0D80
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B0D84
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B0D88
  c->lr=c->r[0]; // 801B0D8C
  c->r[1]=c->r[1]+0x00000020u; // 801B0D90
  return; // 801B0D94
}

// bta_hh_api_disable
void f_801B0D98(Ctx* __restrict c) {
  trace_call(0x801B0D98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0D98
  c->r[0]=c->lr; // 801B0D9C
  c->r[3]=0u+0x803C0000u; // 801B0DA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0DA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B0DA8
  c->r[31]=c->r[3]+0x00007EE8u; // 801B0DAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B0DB0
  c->r[0]=R32(c->r[31]+0x00000224u); // 801B0DB4
  cmps(c,0,(int32_t)c->r[0],0); // 801B0DB8
  if (crb(c,2)) { goto L_801B0E84; } // 801B0DBC
  c->r[0]=R8(c->r[31]+0x0000022Du); // 801B0DC0
  cmps(c,0,(int32_t)c->r[0],0); // 801B0DC4
  if (!crb(c,2)) { goto L_801B0E48; } // 801B0DC8
  c->r[0]=0u+0x00000000u; // 801B0DCC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B0DD0
  c->lr=0x801B0DD8u; f_801C2C58(c); // 801B0DD4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B0DD8
  if (crb(c,2)) { goto L_801B0DE8; } // 801B0DDC
  c->r[0]=0u+0x00000006u; // 801B0DE0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B0DE4
L_801B0DE8:;
  c->r[31]=0u+0x803C0000u; // 801B0DE8
  c->r[30]=0u+0x00000000u; // 801B0DEC
  c->r[31]=c->r[31]+0x00007EE8u; // 801B0DF0
L_801B0DF4:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801B0DF4
  c->r[3]=c->r[31]+c->r[0]; // 801B0DF8
  c->r[3]=c->r[3]+0x00000014u; // 801B0DFC
  c->lr=0x801B0E04u; f_801AD8BC(c); // 801B0E00
  c->r[30]=c->r[30]+0x00000001u; // 801B0E04
  cmpu(c,0,c->r[30],0x00000010u); // 801B0E08
  if (crb(c,0)) { IRQCHK(c); goto L_801B0DF4; } // 801B0E0C
  c->r[31]=0u+0x803C0000u; // 801B0E10
  c->r[31]=c->r[31]+0x00007EE8u; // 801B0E14
  c->r[3]=c->r[31]+0x00000228u; // 801B0E18
  c->lr=0x801B0E20u; f_801AD8BC(c); // 801B0E1C
  c->r[12]=R32(c->r[31]+0x00000224u); // 801B0E20
  c->r[4]=c->r[1]+0x00000008u; // 801B0E24
  c->r[3]=0u+0x00000001u; // 801B0E28
  c->ctr=c->r[12]; // 801B0E2C
  if (true) { c->lr=0x801B0E34u; dispatch(c,c->ctr); } // 801B0E30
  c->r[3]=c->r[31]|c->r[31]; // 801B0E34
  c->r[4]=0u+0x00000000u; // 801B0E38
  c->r[5]=0u+0x00000230u; // 801B0E3C
  c->lr=0x801B0E44u; f_80004688(c); // 801B0E40
  goto L_801B0E84; // 801B0E44
L_801B0E48:;
  c->r[0]=0u+0x00000001u; // 801B0E48
  c->r[30]=0u+0x00000000u; // 801B0E4C
  W8(c->r[31]+0x0000022Eu,c->r[0]); // 801B0E50
L_801B0E54:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801B0E54
  c->r[3]=c->r[31]+c->r[0]; // 801B0E58
  c->r[0]=R8(c->r[3]+0x0000002Cu); // 801B0E5C
  cmpu(c,0,c->r[0],0x00000003u); // 801B0E60
  if (!crb(c,2)) { goto L_801B0E78; } // 801B0E64
  c->r[3]=c->r[3]+0x00000010u; // 801B0E68
  c->r[4]=0u+0x00001701u; // 801B0E6C
  c->r[5]=0u+0x00000000u; // 801B0E70
  c->lr=0x801B0E78u; f_801B273C(c); // 801B0E74
L_801B0E78:;
  c->r[30]=c->r[30]+0x00000001u; // 801B0E78
  cmpu(c,0,c->r[30],0x00000010u); // 801B0E7C
  if (crb(c,0)) { IRQCHK(c); goto L_801B0E54; } // 801B0E80
L_801B0E84:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0E84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B0E88
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B0E8C
  c->lr=c->r[0]; // 801B0E90
  c->r[1]=c->r[1]+0x00000020u; // 801B0E94
  return; // 801B0E98
}

// bta_hh_disc_cmpl
void f_801B0E9C(Ctx* __restrict c) {
  trace_call(0x801B0E9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0E9C
  c->r[0]=c->lr; // 801B0EA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0EA4
  c->r[0]=0u+0x00000000u; // 801B0EA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B0EAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B0EB0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B0EB4
  c->lr=0x801B0EBCu; f_801C2C58(c); // 801B0EB8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B0EBC
  if (crb(c,2)) { goto L_801B0ECC; } // 801B0EC0
  c->r[0]=0u+0x00000006u; // 801B0EC4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B0EC8
L_801B0ECC:;
  c->r[31]=0u+0x803C0000u; // 801B0ECC
  c->r[30]=0u+0x00000000u; // 801B0ED0
  c->r[31]=c->r[31]+0x00007EE8u; // 801B0ED4
L_801B0ED8:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801B0ED8
  c->r[3]=c->r[31]+c->r[0]; // 801B0EDC
  c->r[3]=c->r[3]+0x00000014u; // 801B0EE0
  c->lr=0x801B0EE8u; f_801AD8BC(c); // 801B0EE4
  c->r[30]=c->r[30]+0x00000001u; // 801B0EE8
  cmpu(c,0,c->r[30],0x00000010u); // 801B0EEC
  if (crb(c,0)) { IRQCHK(c); goto L_801B0ED8; } // 801B0EF0
  c->r[31]=0u+0x803C0000u; // 801B0EF4
  c->r[31]=c->r[31]+0x00007EE8u; // 801B0EF8
  c->r[3]=c->r[31]+0x00000228u; // 801B0EFC
  c->lr=0x801B0F04u; f_801AD8BC(c); // 801B0F00
  c->r[12]=R32(c->r[31]+0x00000224u); // 801B0F04
  c->r[4]=c->r[1]+0x00000008u; // 801B0F08
  c->r[3]=0u+0x00000001u; // 801B0F0C
  c->ctr=c->r[12]; // 801B0F10
  if (true) { c->lr=0x801B0F18u; dispatch(c,c->ctr); } // 801B0F14
  c->r[3]=c->r[31]|c->r[31]; // 801B0F18
  c->r[4]=0u+0x00000000u; // 801B0F1C
  c->r[5]=0u+0x00000230u; // 801B0F20
  c->lr=0x801B0F28u; f_80004688(c); // 801B0F24
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0F28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B0F2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B0F30
  c->lr=c->r[0]; // 801B0F34
  c->r[1]=c->r[1]+0x00000020u; // 801B0F38
  return; // 801B0F3C
}

// bta_hh_sdp_cback
void f_801B0F40(Ctx* __restrict c) {
  trace_call(0x801B0F40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0F40
  c->r[0]=c->lr; // 801B0F44
  c->r[6]=0u+0x803C0000u; // 801B0F48
  cmps(c,0,(int32_t)c->r[3],0); // 801B0F4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0F50
  c->r[0]=0u+0x00000010u; // 801B0F54
  c->r[6]=c->r[6]+0x00007EE8u; // 801B0F58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B0F5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B0F60
  c->r[30]=c->r[5]|c->r[5]; // 801B0F64
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B0F68
  c->r[29]=c->r[4]|c->r[4]; // 801B0F6C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B0F70
  c->r[31]=R32(c->r[6]+0x00000210u); // 801B0F74
  if (!crb(c,2)) { goto L_801B1038; } // 801B0F78
  c->r[0]=R8(c->r[31]+0x00000014u); // 801B0F7C
  cmps(c,0,(int32_t)c->r[0],0); // 801B0F80
  if (crb(c,2)) { goto L_801B0F8C; } // 801B0F84
  c->r[29]=c->r[4]|0x00008000u; // 801B0F88
L_801B0F8C:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B0F8C
  cmpu(c,0,c->r[0],0x00000004u); // 801B0F90
  if (crb(c,0)) { goto L_801B0FB4; } // 801B0F94
  c->r[4]=0u+0x80330000u; // 801B0F98
  c->r[6]=c->r[3]|c->r[3]; // 801B0F9C
  c->r[5]=c->r[31]|c->r[31]; // 801B0FA0
  c->r[7]=rotl(c->r[29],0)&0x0000FFFFu; // 801B0FA4
  c->r[4]=c->r[4]+0x000018A0u; // 801B0FA8
  c->r[3]=0u+0x00000503u; // 801B0FAC
  c->lr=0x801B0FB4u; f_801ACB68(c); // 801B0FB0
L_801B0FB4:;
  c->r[4]=R8(c->r[30]+0x00000064u); // 801B0FB4
  c->r[3]=c->r[31]|c->r[31]; // 801B0FB8
  c->lr=0x801B0FC0u; f_801B2F08(c); // 801B0FBC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B0FC0
  if (crb(c,2)) { goto L_801B1030; } // 801B0FC4
  c->r[0]=R8(c->r[31]+0x00000016u); // 801B0FC8
  cmpu(c,0,c->r[0],0x000000FFu); // 801B0FCC
  if (!crb(c,2)) { goto L_801B1038; } // 801B0FD0
  c->r[3]=c->r[31]+0x00000008u; // 801B0FD4
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 801B0FD8
  c->r[5]=c->r[1]+0x00000009u; // 801B0FDC
  c->lr=0x801B0FE4u; f_801C2D3C(c); // 801B0FE0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B0FE4
  W8(c->r[1]+0x00000008u,c->r[3]); // 801B0FE8
  if (!crb(c,2)) { goto L_801B1024; } // 801B0FEC
  c->r[3]=0u+0x803C0000u; // 801B0FF0
  c->r[4]=R8(c->r[1]+0x00000009u); // 801B0FF4
  c->r[3]=c->r[3]+0x00007EE8u; // 801B0FF8
  c->r[0]=R8(c->r[31]+0x00000012u); // 801B0FFC
  c->r[5]=c->r[3]+c->r[4]; // 801B1000
  c->r[6]=c->r[30]+0x00000068u; // 801B1004
  W8(c->r[5]+0x00000214u,c->r[0]); // 801B1008
  c->r[3]=c->r[31]|c->r[31]; // 801B100C
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 801B1010
  c->r[7]=R8(c->r[30]+0x00000064u); // 801B1014
  c->r[8]=R8(c->r[31]+0x00000015u); // 801B1018
  c->lr=0x801B1020u; f_801B2E4C(c); // 801B101C
  goto L_801B1038; // 801B1020
L_801B1024:;
  c->r[0]=0u+0x00000000u; // 801B1024
  W8(c->r[31]+0x00000015u,c->r[0]); // 801B1028
  goto L_801B1038; // 801B102C
L_801B1030:;
  c->r[0]=0u+0x000000FFu; // 801B1030
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B1034
L_801B1038:;
  c->r[3]=0u+0x803C0000u; // 801B1038
  c->r[3]=c->r[3]+0x00007EE8u; // 801B103C
  c->r[3]=c->r[3]+0x00000228u; // 801B1040
  c->lr=0x801B1048u; f_801AD8BC(c); // 801B1044
  c->r[3]=c->r[31]|c->r[31]; // 801B1048
  c->r[5]=c->r[1]+0x00000008u; // 801B104C
  c->r[4]=0u+0x00001707u; // 801B1050
  c->lr=0x801B1058u; f_801B273C(c); // 801B1054
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1058
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B105C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B1060
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B1064
  c->lr=c->r[0]; // 801B1068
  c->r[1]=c->r[1]+0x00000020u; // 801B106C
  return; // 801B1070
}

// bta_hh_start_sdp
void f_801B1074(Ctx* __restrict c) {
  trace_call(0x801B1074u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1074
  c->r[0]=c->lr; // 801B1078
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B107C
  c->r[0]=0u+0x00000010u; // 801B1080
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B1084
  c->r[31]=c->r[3]|c->r[3]; // 801B1088
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B108C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B1090
  c->r[29]=c->r[4]|c->r[4]; // 801B1094
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B1098
  c->r[5]=R8(c->r[4]+0x0000000Eu); // 801B109C
  c->r[0]=R8(c->r[3]+0x00000015u); // 801B10A0
  W8(c->r[3]+0x00000014u,c->r[5]); // 801B10A4
  cmps(c,0,(int32_t)c->r[0],0); // 801B10A8
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 801B10AC
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 801B10B0
  if (crb(c,2)) { goto L_801B114C; } // 801B10B4
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B10B8
  c->r[3]=0u+0x00000000u; // 801B10BC
  W8(c->r[1]+0x00000009u,c->r[3]); // 801B10C0
  cmpu(c,0,c->r[0],0x00000005u); // 801B10C4
  if (crb(c,0)) { goto L_801B10DC; } // 801B10C8
  c->r[4]=0u+0x80330000u; // 801B10CC
  c->r[3]=0u+0x00000504u; // 801B10D0
  c->r[4]=c->r[4]+0x000018F8u; // 801B10D4
  c->lr=0x801B10DCu; f_801ACB20(c); // 801B10D8
L_801B10DC:;
  c->r[0]=R8(c->r[31]+0x00000016u); // 801B10DC
  cmpu(c,0,c->r[0],0x000000FFu); // 801B10E0
  if (!crb(c,2)) { goto L_801B1138; } // 801B10E4
  c->r[4]=R16(c->r[31]+0x0000000Eu); // 801B10E8
  c->r[3]=c->r[31]+0x00000008u; // 801B10EC
  c->r[5]=c->r[1]+0x00000008u; // 801B10F0
  c->lr=0x801B10F8u; f_801C2D3C(c); // 801B10F4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B10F8
  W8(c->r[1]+0x00000009u,c->r[3]); // 801B10FC
  if (!crb(c,2)) { goto L_801B1138; } // 801B1100
  c->r[4]=R8(c->r[1]+0x00000008u); // 801B1104
  c->r[3]=c->r[31]|c->r[31]; // 801B1108
  c->r[5]=R16(c->r[31]+0x0000000Eu); // 801B110C
  c->r[6]=0u+0x00000000u; // 801B1110
  c->r[7]=R8(c->r[31]+0x00000013u); // 801B1114
  c->r[8]=R8(c->r[31]+0x00000015u); // 801B1118
  c->lr=0x801B1120u; f_801B2E4C(c); // 801B111C
  c->r[3]=0u+0x803C0000u; // 801B1120
  c->r[0]=R8(c->r[1]+0x00000008u); // 801B1124
  c->r[3]=c->r[3]+0x00007EE8u; // 801B1128
  c->r[4]=R8(c->r[31]+0x00000012u); // 801B112C
  c->r[3]=c->r[3]+c->r[0]; // 801B1130
  W8(c->r[3]+0x00000214u,c->r[4]); // 801B1134
L_801B1138:;
  c->r[3]=c->r[31]|c->r[31]; // 801B1138
  c->r[5]=c->r[1]+0x00000009u; // 801B113C
  c->r[4]=0u+0x00001707u; // 801B1140
  c->lr=0x801B1148u; f_801B273C(c); // 801B1144
  goto L_801B11EC; // 801B1148
L_801B114C:;
  c->r[30]=0u+0x803C0000u; // 801B114C
  c->r[30]=c->r[30]+0x00007EE8u; // 801B1150
  c->r[0]=R32(c->r[30]+0x00000228u); // 801B1154
  cmps(c,0,(int32_t)c->r[0],0); // 801B1158
  if (!crb(c,2)) { goto L_801B11D0; } // 801B115C
  c->r[3]=R32(c->r[13]+0xFFFF9458u); // 801B1160
  c->r[3]=R16(c->r[3]+0x00000008u); // 801B1164
  c->lr=0x801B116Cu; f_801A9FA0(c); // 801B1168
  W32(c->r[30]+0x00000228u,c->r[3]); // 801B116C
  c->r[6]=0u+0x801B0000u; // 801B1170
  c->r[5]=R32(c->r[13]+0xFFFF9458u); // 801B1174
  c->r[4]=c->r[3]|c->r[3]; // 801B1178
  W32(c->r[30]+0x00000210u,c->r[31]); // 801B117C
  c->r[3]=c->r[29]+0x00000008u; // 801B1180
  c->r[6]=c->r[6]+0x00000F40u; // 801B1184
  c->r[5]=R16(c->r[5]+0x00000008u); // 801B1188
  c->lr=0x801B1190u; f_801C2680(c); // 801B118C
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 801B1190
  W8(c->r[1]+0x00000009u,c->r[3]); // 801B1194
  if (crb(c,2)) { goto L_801B11D0; } // 801B1198
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B119C
  cmpu(c,0,c->r[0],0x00000005u); // 801B11A0
  if (crb(c,0)) { goto L_801B11B8; } // 801B11A4
  c->r[4]=0u+0x80330000u; // 801B11A8
  c->r[3]=0u+0x00000504u; // 801B11AC
  c->r[4]=c->r[4]+0x00001928u; // 801B11B0
  c->lr=0x801B11B8u; f_801ACB38(c); // 801B11B4
L_801B11B8:;
  c->r[0]=0u+0x00000007u; // 801B11B8
  c->r[3]=0u+0x803C0000u; // 801B11BC
  c->r[3]=c->r[3]+0x00007EE8u; // 801B11C0
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B11C4
  c->r[3]=c->r[3]+0x00000228u; // 801B11C8
  c->lr=0x801B11D0u; f_801AD8BC(c); // 801B11CC
L_801B11D0:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 801B11D0
  cmps(c,0,(int32_t)c->r[0],0); // 801B11D4
  if (crb(c,2)) { goto L_801B11EC; } // 801B11D8
  c->r[3]=c->r[31]|c->r[31]; // 801B11DC
  c->r[5]=c->r[1]+0x00000009u; // 801B11E0
  c->r[4]=0u+0x00001707u; // 801B11E4
  c->lr=0x801B11ECu; f_801B273C(c); // 801B11E8
L_801B11EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B11EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B11F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B11F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B11F8
  c->lr=c->r[0]; // 801B11FC
  c->r[1]=c->r[1]+0x00000020u; // 801B1200
  return; // 801B1204
}

// bta_hh_sdp_cmpl
void f_801B1208(Ctx* __restrict c) {
  trace_call(0x801B1208u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1208
  c->r[0]=c->lr; // 801B120C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1210
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B1214
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1218
  c->r[30]=c->r[4]|c->r[4]; // 801B121C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B1220
  c->r[29]=c->r[3]|c->r[3]; // 801B1224
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B1228
  cmpu(c,0,c->r[0],0x00000005u); // 801B122C
  if (crb(c,0)) { goto L_801B1248; } // 801B1230
  c->r[4]=0u+0x80330000u; // 801B1234
  c->r[5]=R8(c->r[30]+0x00000000u); // 801B1238
  c->r[4]=c->r[4]+0x00001978u; // 801B123C
  c->r[3]=0u+0x00000504u; // 801B1240
  c->lr=0x801B1248u; f_801ACB38(c); // 801B1244
L_801B1248:;
  c->r[3]=c->r[1]+0x00000008u; // 801B1248
  c->r[4]=0u+0x00000000u; // 801B124C
  c->r[5]=0u+0x00000008u; // 801B1250
  c->lr=0x801B1258u; f_80004688(c); // 801B1254
  c->r[0]=R8(c->r[29]+0x00000016u); // 801B1258
  c->r[3]=c->r[1]+0x00000008u; // 801B125C
  c->r[4]=c->r[29]+0x00000008u; // 801B1260
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801B1264
  c->lr=0x801B126Cu; f_801AD170(c); // 801B1268
  c->r[31]=R8(c->r[30]+0x00000000u); // 801B126C
  cmps(c,0,(int32_t)c->r[31],0); // 801B1270
  if (!crb(c,2)) { goto L_801B12DC; } // 801B1274
  c->r[0]=R8(c->r[29]+0x00000019u); // 801B1278
  cmps(c,0,(int32_t)c->r[0],0); // 801B127C
  if (!crb(c,2)) { goto L_801B12CC; } // 801B1280
  c->r[4]=R8(c->r[29]+0x00000014u); // 801B1284
  c->r[3]=c->r[13]+0xFFFF9480u; // 801B1288
  c->lr=0x801B1290u; f_801C31D8(c); // 801B128C
  c->r[3]=R8(c->r[29]+0x00000016u); // 801B1290
  c->lr=0x801B1298u; f_801C2F94(c); // 801B1294
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 801B1298
  c->r[31]=c->r[3]|c->r[3]; // 801B129C
  if (crb(c,2)) { goto L_801B12DC; } // 801B12A0
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B12A4
  cmpu(c,0,c->r[0],0x00000005u); // 801B12A8
  if (crb(c,0)) { goto L_801B12C0; } // 801B12AC
  c->r[4]=0u+0x80330000u; // 801B12B0
  c->r[3]=0u+0x00000504u; // 801B12B4
  c->r[4]=c->r[4]+0x00001998u; // 801B12B8
  c->lr=0x801B12C0u; f_801ACB38(c); // 801B12BC
L_801B12C0:;
  c->r[3]=R8(c->r[29]+0x00000016u); // 801B12C0
  c->lr=0x801B12C8u; f_801C2ECC(c); // 801B12C4
  goto L_801B12DC; // 801B12C8
L_801B12CC:;
  c->r[3]=c->r[29]|c->r[29]; // 801B12CC
  c->r[4]=0u+0x0000170Bu; // 801B12D0
  c->r[5]=0u+0x00000000u; // 801B12D4
  c->lr=0x801B12DCu; f_801B273C(c); // 801B12D8
L_801B12DC:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[0]); // 801B12DC
  if (crb(c,2)) { goto L_801B1354; } // 801B12E0
  c->r[0]=R8(c->r[30]+0x00000000u); // 801B12E4
  cmpu(c,0,c->r[0],0x000000FFu); // 801B12E8
  if (!crb(c,2)) { goto L_801B12FC; } // 801B12EC
  c->r[0]=0u+0x0000000Au; // 801B12F0
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801B12F4
  goto L_801B1304; // 801B12F8
L_801B12FC:;
  c->r[0]=0u+0x00000007u; // 801B12FC
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801B1300
L_801B1304:;
  c->r[5]=0u+0x803C0000u; // 801B1304
  c->r[4]=c->r[1]+0x00000008u; // 801B1308
  c->r[5]=c->r[5]+0x00007EE8u; // 801B130C
  c->r[3]=0u+0x00000002u; // 801B1310
  c->r[12]=R32(c->r[5]+0x00000224u); // 801B1314
  c->ctr=c->r[12]; // 801B1318
  if (true) { c->lr=0x801B1320u; dispatch(c,c->ctr); } // 801B131C
  c->r[3]=c->r[29]|c->r[29]; // 801B1320
  c->r[4]=0u+0x00001701u; // 801B1324
  c->r[5]=0u+0x00000000u; // 801B1328
  c->lr=0x801B1330u; f_801B273C(c); // 801B132C
  c->r[0]=R8(c->r[29]+0x00000015u); // 801B1330
  cmps(c,0,(int32_t)c->r[0],0); // 801B1334
  if (!crb(c,2)) { goto L_801B1350; } // 801B1338
  c->r[0]=R8(c->r[29]+0x00000019u); // 801B133C
  cmps(c,0,(int32_t)c->r[0],0); // 801B1340
  if (!crb(c,2)) { goto L_801B1350; } // 801B1344
  c->r[3]=c->r[29]|c->r[29]; // 801B1348
  c->lr=0x801B1350u; f_801B2DCC(c); // 801B134C
L_801B1350:;
  c->lr=0x801B1354u; f_801B2F5C(c); // 801B1350
L_801B1354:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1354
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B1358
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B135C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B1360
  c->lr=c->r[0]; // 801B1364
  c->r[1]=c->r[1]+0x00000020u; // 801B1368
  return; // 801B136C
}

// bta_hh_api_disc_act
void f_801B1370(Ctx* __restrict c) {
  trace_call(0x801B1370u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1370
  c->r[0]=c->lr; // 801B1374
  cmps(c,0,(int32_t)c->r[4],0); // 801B1378
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B137C
  if (crb(c,2)) { goto L_801B1390; } // 801B1380
  c->r[0]=R16(c->r[4]+0x00000006u); // 801B1384
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 801B1388
  goto L_801B1394; // 801B138C
L_801B1390:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 801B1390
L_801B1394:;
  c->r[0]=0u+0x00000006u; // 801B1394
  W8(c->r[1]+0x00000009u,c->r[3]); // 801B1398
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B139C
  c->lr=0x801B13A4u; f_801C3138(c); // 801B13A0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B13A4
  if (crb(c,2)) { goto L_801B13C8; } // 801B13A8
  c->r[5]=0u+0x803C0000u; // 801B13AC
  c->r[4]=c->r[1]+0x00000008u; // 801B13B0
  c->r[5]=c->r[5]+0x00007EE8u; // 801B13B4
  c->r[3]=0u+0x00000003u; // 801B13B8
  c->r[12]=R32(c->r[5]+0x00000224u); // 801B13BC
  c->ctr=c->r[12]; // 801B13C0
  if (true) { c->lr=0x801B13C8u; dispatch(c,c->ctr); } // 801B13C4
L_801B13C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B13C8
  c->lr=c->r[0]; // 801B13CC
  c->r[1]=c->r[1]+0x00000010u; // 801B13D0
  return; // 801B13D4
}

// bta_hh_open_cmpl_act
void f_801B13D8(Ctx* __restrict c) {
  trace_call(0x801B13D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B13D8
  c->r[0]=c->lr; // 801B13DC
  cmps(c,0,(int32_t)c->r[4],0); // 801B13E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B13E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B13E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B13EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B13F0
  c->r[29]=c->r[3]|c->r[3]; // 801B13F4
  if (crb(c,2)) { goto L_801B1408; } // 801B13F8
  c->r[0]=R16(c->r[4]+0x00000006u); // 801B13FC
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 801B1400
  goto L_801B140C; // 801B1404
L_801B1408:;
  c->r[30]=R8(c->r[3]+0x00000016u); // 801B1408
L_801B140C:;
  c->r[3]=c->r[1]+0x00000008u; // 801B140C
  c->r[4]=0u+0x00000000u; // 801B1410
  c->r[5]=0u+0x00000008u; // 801B1414
  c->lr=0x801B141Cu; f_80004688(c); // 801B1418
  W8(c->r[1]+0x0000000Fu,c->r[30]); // 801B141C
  c->r[3]=c->r[1]+0x00000008u; // 801B1420
  c->r[4]=c->r[29]+0x00000008u; // 801B1424
  c->lr=0x801B142Cu; f_801AD170(c); // 801B1428
  c->r[31]=0u+0x803C0000u; // 801B142C
  c->r[31]=c->r[31]+0x00007EE8u; // 801B1430
  c->r[3]=R8(c->r[31]+0x0000022Du); // 801B1434
  c->r[0]=c->r[3]+0x00000001u; // 801B1438
  W8(c->r[31]+0x0000022Du,c->r[0]); // 801B143C
  c->r[3]=R8(c->r[29]+0x00000016u); // 801B1440
  c->r[4]=R8(c->r[29]+0x00000013u); // 801B1444
  c->r[5]=R16(c->r[29]+0x0000000Eu); // 801B1448
  c->r[6]=R8(c->r[29]+0x00000015u); // 801B144C
  c->lr=0x801B1454u; f_801EBD08(c); // 801B1450
  c->r[4]=R8(c->r[29]+0x00000015u); // 801B1454
  c->r[5]=c->r[29]+0x00000008u; // 801B1458
  c->r[3]=0u+0x00000017u; // 801B145C
  c->lr=0x801B1464u; f_801AD274(c); // 801B1460
  c->r[5]=R8(c->r[29]+0x0000001Bu); // 801B1464
  cmps(c,0,(int32_t)c->r[5],0); // 801B1468
  if (crb(c,2)) { goto L_801B14C0; } // 801B146C
  c->r[3]=c->r[30]|c->r[30]; // 801B1470
  c->r[4]=0u+0x00000007u; // 801B1474
  c->r[6]=0u+0x00000000u; // 801B1478
  c->r[7]=0u+0x00000000u; // 801B147C
  c->r[8]=0u+0x00000000u; // 801B1480
  c->lr=0x801B1488u; f_801C2FF8(c); // 801B1484
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B1488
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801B148C
  if (crb(c,2)) { goto L_801B14B4; } // 801B1490
  c->r[12]=R32(c->r[31]+0x00000224u); // 801B1494
  c->r[0]=0u+0x00000008u; // 801B1498
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801B149C
  c->r[4]=c->r[1]+0x00000008u; // 801B14A0
  c->r[3]=0u+0x00000002u; // 801B14A4
  c->ctr=c->r[12]; // 801B14A8
  if (true) { c->lr=0x801B14B0u; dispatch(c,c->ctr); } // 801B14AC
  goto L_801B14DC; // 801B14B0
L_801B14B4:;
  c->r[0]=0u+0x00000002u; // 801B14B4
  W16(c->r[29]+0x00000010u,c->r[0]); // 801B14B8
  goto L_801B14DC; // 801B14BC
L_801B14C0:;
  c->r[0]=0u+0x00000001u; // 801B14C0
  c->r[4]=c->r[1]+0x00000008u; // 801B14C4
  W8(c->r[29]+0x0000001Au,c->r[0]); // 801B14C8
  c->r[3]=0u+0x00000002u; // 801B14CC
  c->r[12]=R32(c->r[31]+0x00000224u); // 801B14D0
  c->ctr=c->r[12]; // 801B14D4
  if (true) { c->lr=0x801B14DCu; dispatch(c,c->ctr); } // 801B14D8
L_801B14DC:;
  c->r[0]=0u+0x00000000u; // 801B14DC
  W8(c->r[29]+0x00000019u,c->r[0]); // 801B14E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B14E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B14E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B14EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B14F0
  c->lr=c->r[0]; // 801B14F4
  c->r[1]=c->r[1]+0x00000020u; // 801B14F8
  return; // 801B14FC
}

// bta_hh_open_act
void f_801B1500(Ctx* __restrict c) {
  trace_call(0x801B1500u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1500
  c->r[0]=c->lr; // 801B1504
  cmps(c,0,(int32_t)c->r[4],0); // 801B1508
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B150C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B1510
  c->r[31]=c->r[4]|c->r[4]; // 801B1514
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1518
  c->r[30]=c->r[3]|c->r[3]; // 801B151C
  if (crb(c,2)) { goto L_801B1530; } // 801B1520
  c->r[0]=R16(c->r[4]+0x00000006u); // 801B1524
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 801B1528
  goto L_801B1534; // 801B152C
L_801B1530:;
  c->r[5]=R8(c->r[3]+0x00000016u); // 801B1530
L_801B1534:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B1534
  cmpu(c,0,c->r[0],0x00000004u); // 801B1538
  if (crb(c,0)) { goto L_801B1550; } // 801B153C
  c->r[4]=0u+0x80330000u; // 801B1540
  c->r[3]=0u+0x00000503u; // 801B1544
  c->r[4]=c->r[4]+0x000019E4u; // 801B1548
  c->lr=0x801B1550u; f_801ACB38(c); // 801B154C
L_801B1550:;
  c->r[0]=R8(c->r[30]+0x00000015u); // 801B1550
  cmps(c,0,(int32_t)c->r[0],0); // 801B1554
  if (crb(c,2)) { goto L_801B1570; } // 801B1558
  c->r[3]=c->r[30]|c->r[30]; // 801B155C
  c->r[5]=c->r[31]|c->r[31]; // 801B1560
  c->r[4]=0u+0x0000170Bu; // 801B1564
  c->lr=0x801B156Cu; f_801B273C(c); // 801B1568
  goto L_801B15A0; // 801B156C
L_801B1570:;
  c->r[0]=0u+0x00000001u; // 801B1570
  c->r[3]=c->r[1]+0x00000008u; // 801B1574
  W8(c->r[30]+0x00000019u,c->r[0]); // 801B1578
  c->r[4]=0u+0x00000000u; // 801B157C
  c->r[5]=0u+0x00000010u; // 801B1580
  c->lr=0x801B1588u; f_80004688(c); // 801B1584
  c->r[3]=c->r[1]+0x00000010u; // 801B1588
  c->r[4]=c->r[30]+0x00000008u; // 801B158C
  c->lr=0x801B1594u; f_801AD170(c); // 801B1590
  c->r[3]=c->r[30]|c->r[30]; // 801B1594
  c->r[4]=c->r[1]+0x00000008u; // 801B1598
  c->lr=0x801B15A0u; f_801B1074(c); // 801B159C
L_801B15A0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B15A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B15A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B15A8
  c->lr=c->r[0]; // 801B15AC
  c->r[1]=c->r[1]+0x00000020u; // 801B15B0
  return; // 801B15B4
}

// bta_hh_data_act
void f_801B15B8(Ctx* __restrict c) {
  trace_call(0x801B15B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B15B8
  c->r[0]=c->lr; // 801B15BC
  c->r[8]=c->r[3]|c->r[3]; // 801B15C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B15C4
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801B15C8
  W32(c->r[1]+0x00000008u,c->r[5]); // 801B15CC
  c->r[0]=R16(c->r[5]+0x00000004u); // 801B15D0
  c->r[3]=R16(c->r[4]+0x00000006u); // 801B15D4
  c->r[4]=c->r[5]+c->r[0]; // 801B15D8
  c->r[5]=R16(c->r[5]+0x00000002u); // 801B15DC
  c->r[6]=R8(c->r[8]+0x0000001Bu); // 801B15E0
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801B15E4
  c->r[7]=R8(c->r[8]+0x00000013u); // 801B15E8
  c->r[4]=c->r[4]+0x00000008u; // 801B15EC
  c->r[8]=R8(c->r[8]+0x00000015u); // 801B15F0
  c->lr=0x801B15F8u; f_801EBCCC(c); // 801B15F4
  c->r[3]=c->r[1]+0x00000008u; // 801B15F8
  c->lr=0x801B1600u; f_801AD8BC(c); // 801B15FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1600
  c->lr=c->r[0]; // 801B1604
  c->r[1]=c->r[1]+0x00000010u; // 801B1608
  return; // 801B160C
}

// bta_hh_handsk_act
void f_801B1610(Ctx* __restrict c) {
  trace_call(0x801B1610u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1610
  c->r[0]=c->lr; // 801B1614
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B1618
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801B161C
  c->r[31]=c->r[3]|c->r[3]; // 801B1620
  W32(c->r[1]+0x00000038u,c->r[30]); // 801B1624
  c->r[30]=0u+0x80330000u; // 801B1628
  c->r[30]=c->r[30]+0x000018A0u; // 801B162C
  W32(c->r[1]+0x00000034u,c->r[29]); // 801B1630
  c->r[29]=c->r[4]|c->r[4]; // 801B1634
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B1638
  cmpu(c,0,c->r[0],0x00000005u); // 801B163C
  if (crb(c,0)) { goto L_801B16B4; } // 801B1640
  c->r[0]=R16(c->r[3]+0x00000010u); // 801B1644
  cmpu(c,0,c->r[0],0x00000009u); // 801B1648
  if (crb(c,1)) { goto L_801B16A0; } // 801B164C
  c->r[3]=0u+0x80330000u; // 801B1650
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1654
  c->r[3]=c->r[3]+0x00001B20u; // 801B1658
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B165C
  c->ctr=c->r[3]; // 801B1660
  if (true) { switch (c->ctr) { case 0x801B1668u: goto L_801B1668; case 0x801B1670u: goto L_801B1670; case 0x801B1678u: goto L_801B1678; case 0x801B1680u: goto L_801B1680; case 0x801B1688u: goto L_801B1688; case 0x801B1690u: goto L_801B1690; case 0x801B1698u: goto L_801B1698; case 0x801B16A0u: goto L_801B16A0; case 0x801B16D8u: goto L_801B16D8; case 0x801B1758u: goto L_801B1758; case 0x801B17C8u: goto L_801B17C8; case 0x801B1834u: goto L_801B1834; default: break; } dispatch(c,c->ctr); return; } // 801B1664
L_801B1668:;
  c->r[5]=c->r[30]+0x0000016Cu; // 801B1668
  goto L_801B16A4; // 801B166C
L_801B1670:;
  c->r[5]=c->r[30]+0x00000180u; // 801B1670
  goto L_801B16A4; // 801B1674
L_801B1678:;
  c->r[5]=c->r[30]+0x00000194u; // 801B1678
  goto L_801B16A4; // 801B167C
L_801B1680:;
  c->r[5]=c->r[30]+0x000001ACu; // 801B1680
  goto L_801B16A4; // 801B1684
L_801B1688:;
  c->r[5]=c->r[30]+0x000001C4u; // 801B1688
  goto L_801B16A4; // 801B168C
L_801B1690:;
  c->r[5]=c->r[30]+0x000001D8u; // 801B1690
  goto L_801B16A4; // 801B1694
L_801B1698:;
  c->r[5]=c->r[30]+0x000001F0u; // 801B1698
  goto L_801B16A4; // 801B169C
L_801B16A0:;
  c->r[5]=c->r[30]+0x00000200u; // 801B16A0
L_801B16A4:;
  c->r[6]=R32(c->r[29]+0x00000008u); // 801B16A4
  c->r[4]=c->r[30]+0x00000210u; // 801B16A8
  c->r[3]=0u+0x00000504u; // 801B16AC
  c->lr=0x801B16B4u; f_801ACB50(c); // 801B16B0
L_801B16B4:;
  c->r[0]=R16(c->r[31]+0x00000010u); // 801B16B4
  cmpu(c,0,c->r[0],0x00000009u); // 801B16B8
  if (crb(c,1)) { goto L_801B1834; } // 801B16BC
  c->r[3]=0u+0x80330000u; // 801B16C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B16C4
  c->r[3]=c->r[3]+0x00001AF8u; // 801B16C8
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B16CC
  c->ctr=c->r[3]; // 801B16D0
  if (true) { switch (c->ctr) { case 0x801B1668u: goto L_801B1668; case 0x801B1670u: goto L_801B1670; case 0x801B1678u: goto L_801B1678; case 0x801B1680u: goto L_801B1680; case 0x801B1688u: goto L_801B1688; case 0x801B1690u: goto L_801B1690; case 0x801B1698u: goto L_801B1698; case 0x801B16A0u: goto L_801B16A0; case 0x801B16D8u: goto L_801B16D8; case 0x801B1758u: goto L_801B1758; case 0x801B17C8u: goto L_801B17C8; case 0x801B1834u: goto L_801B1834; default: break; } dispatch(c,c->ctr); return; } // 801B16D4
L_801B16D8:;
  c->r[3]=c->r[1]+0x00000018u; // 801B16D8
  c->r[4]=0u+0x00000000u; // 801B16DC
  c->r[5]=0u+0x0000000Au; // 801B16E0
  c->lr=0x801B16E8u; f_80004688(c); // 801B16E4
  c->r[0]=R8(c->r[31]+0x00000016u); // 801B16E8
  W8(c->r[1]+0x00000019u,c->r[0]); // 801B16EC
  c->r[0]=R32(c->r[29]+0x00000008u); // 801B16F0
  cmps(c,0,(int32_t)c->r[0],5); // 801B16F4
  if (!crb(c,0)) { goto L_801B170C; } // 801B16F8
  cmps(c,0,(int32_t)c->r[0],0); // 801B16FC
  if (crb(c,2)) { goto L_801B1718; } // 801B1700
  if (!crb(c,0)) { goto L_801B1720; } // 801B1704
  goto L_801B1728; // 801B1708
L_801B170C:;
  cmps(c,0,(int32_t)c->r[0],16); // 801B170C
  if (!crb(c,0)) { goto L_801B1728; } // 801B1710
  goto L_801B1728; // 801B1714
L_801B1718:;
  c->r[0]=0u+0x00000000u; // 801B1718
  goto L_801B172C; // 801B171C
L_801B1720:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801B1720
  goto L_801B172C; // 801B1724
L_801B1728:;
  c->r[0]=0u+0x00000005u; // 801B1728
L_801B172C:;
  c->r[3]=0u+0x803C0000u; // 801B172C
  W8(c->r[1]+0x00000018u,c->r[0]); // 801B1730
  c->r[3]=c->r[3]+0x00007EE8u; // 801B1734
  c->r[4]=c->r[1]+0x00000018u; // 801B1738
  c->r[12]=R32(c->r[3]+0x00000224u); // 801B173C
  c->r[3]=R16(c->r[31]+0x00000010u); // 801B1740
  c->ctr=c->r[12]; // 801B1744
  if (true) { c->lr=0x801B174Cu; dispatch(c,c->ctr); } // 801B1748
  c->r[0]=0u+0x00000000u; // 801B174C
  W16(c->r[31]+0x00000010u,c->r[0]); // 801B1750
  goto L_801B184C; // 801B1754
L_801B1758:;
  c->r[0]=R8(c->r[31]+0x00000016u); // 801B1758
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B175C
  c->r[0]=R32(c->r[29]+0x00000008u); // 801B1760
  cmps(c,0,(int32_t)c->r[0],5); // 801B1764
  if (!crb(c,0)) { goto L_801B177C; } // 801B1768
  cmps(c,0,(int32_t)c->r[0],0); // 801B176C
  if (crb(c,2)) { goto L_801B1788; } // 801B1770
  if (!crb(c,0)) { goto L_801B1790; } // 801B1774
  goto L_801B1798; // 801B1778
L_801B177C:;
  cmps(c,0,(int32_t)c->r[0],16); // 801B177C
  if (!crb(c,0)) { goto L_801B1798; } // 801B1780
  goto L_801B1798; // 801B1784
L_801B1788:;
  c->r[0]=0u+0x00000000u; // 801B1788
  goto L_801B179C; // 801B178C
L_801B1790:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801B1790
  goto L_801B179C; // 801B1794
L_801B1798:;
  c->r[0]=0u+0x00000005u; // 801B1798
L_801B179C:;
  c->r[3]=0u+0x803C0000u; // 801B179C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B17A0
  c->r[3]=c->r[3]+0x00007EE8u; // 801B17A4
  c->r[4]=c->r[1]+0x00000008u; // 801B17A8
  c->r[12]=R32(c->r[3]+0x00000224u); // 801B17AC
  c->r[3]=R16(c->r[31]+0x00000010u); // 801B17B0
  c->ctr=c->r[12]; // 801B17B4
  if (true) { c->lr=0x801B17BCu; dispatch(c,c->ctr); } // 801B17B8
  c->r[0]=0u+0x00000000u; // 801B17BC
  W16(c->r[31]+0x00000010u,c->r[0]); // 801B17C0
  goto L_801B184C; // 801B17C4
L_801B17C8:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801B17C8
  c->r[3]=0u+0x00000000u; // 801B17CC
  cmps(c,0,(int32_t)c->r[0],0); // 801B17D0
  if (crb(c,2)) { goto L_801B17DC; } // 801B17D4
  c->r[3]=0u+0x00000008u; // 801B17D8
L_801B17DC:;
  W8(c->r[1]+0x00000016u,c->r[3]); // 801B17DC
  c->r[3]=c->r[1]+0x00000010u; // 801B17E0
  c->r[4]=c->r[31]+0x00000008u; // 801B17E4
  c->r[0]=R8(c->r[31]+0x00000016u); // 801B17E8
  W8(c->r[1]+0x00000017u,c->r[0]); // 801B17EC
  c->lr=0x801B17F4u; f_801AD170(c); // 801B17F0
  c->r[5]=0u+0x803C0000u; // 801B17F4
  c->r[4]=c->r[1]+0x00000010u; // 801B17F8
  c->r[5]=c->r[5]+0x00007EE8u; // 801B17FC
  c->r[3]=R16(c->r[31]+0x00000010u); // 801B1800
  c->r[12]=R32(c->r[5]+0x00000224u); // 801B1804
  c->ctr=c->r[12]; // 801B1808
  if (true) { c->lr=0x801B1810u; dispatch(c,c->ctr); } // 801B180C
  c->lr=0x801B1814u; f_801B2F5C(c); // 801B1810
  c->r[0]=0u+0x00000000u; // 801B1814
  W16(c->r[31]+0x00000010u,c->r[0]); // 801B1818
  c->r[0]=R8(c->r[1]+0x00000016u); // 801B181C
  cmps(c,0,(int32_t)c->r[0],0); // 801B1820
  if (!crb(c,2)) { goto L_801B184C; } // 801B1824
  c->r[0]=0u+0x00000001u; // 801B1828
  W8(c->r[31]+0x0000001Au,c->r[0]); // 801B182C
  goto L_801B184C; // 801B1830
L_801B1834:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B1834
  cmpu(c,0,c->r[0],0x00000005u); // 801B1838
  if (crb(c,0)) { goto L_801B184C; } // 801B183C
  c->r[4]=c->r[30]+0x0000023Cu; // 801B1840
  c->r[3]=0u+0x00000504u; // 801B1844
  c->lr=0x801B184Cu; f_801ACB20(c); // 801B1848
L_801B184C:;
  c->r[4]=R8(c->r[31]+0x00000015u); // 801B184C
  c->r[5]=c->r[31]+0x00000008u; // 801B1850
  c->r[3]=0u+0x00000017u; // 801B1854
  c->lr=0x801B185Cu; f_801AD430(c); // 801B1858
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B185C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801B1860
  c->r[30]=R32(c->r[1]+0x00000038u); // 801B1864
  c->r[29]=R32(c->r[1]+0x00000034u); // 801B1868
  c->lr=c->r[0]; // 801B186C
  c->r[1]=c->r[1]+0x00000040u; // 801B1870
  return; // 801B1874
}

// bta_hh_ctrl_dat_act
void f_801B1878(Ctx* __restrict c) {
  trace_call(0x801B1878u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1878
  c->r[0]=c->lr; // 801B187C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B1880
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B1884
  c->r[31]=c->r[3]|c->r[3]; // 801B1888
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B188C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B1890
  c->r[29]=0u+0x80330000u; // 801B1894
  c->r[29]=c->r[29]+0x000018A0u; // 801B1898
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 801B189C
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B18A0
  W32(c->r[1]+0x00000008u,c->r[4]); // 801B18A4
  cmpu(c,0,c->r[0],0x00000005u); // 801B18A8
  c->r[0]=R16(c->r[4]+0x00000004u); // 801B18AC
  c->r[30]=c->r[4]+c->r[0]; // 801B18B0
  if (crb(c,0)) { goto L_801B1924; } // 801B18B4
  c->r[0]=R16(c->r[3]+0x00000010u); // 801B18B8
  cmpu(c,0,c->r[0],0x00000009u); // 801B18BC
  if (crb(c,1)) { goto L_801B1914; } // 801B18C0
  c->r[3]=0u+0x80330000u; // 801B18C4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B18C8
  c->r[3]=c->r[3]+0x00001BCCu; // 801B18CC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B18D0
  c->ctr=c->r[3]; // 801B18D4
  if (true) { switch (c->ctr) { case 0x801B18DCu: goto L_801B18DC; case 0x801B18E4u: goto L_801B18E4; case 0x801B18ECu: goto L_801B18EC; case 0x801B18F4u: goto L_801B18F4; case 0x801B18FCu: goto L_801B18FC; case 0x801B1904u: goto L_801B1904; case 0x801B190Cu: goto L_801B190C; case 0x801B1914u: goto L_801B1914; case 0x801B19C0u: goto L_801B19C0; case 0x801B19C8u: goto L_801B19C8; case 0x801B19D0u: goto L_801B19D0; case 0x801B19D8u: goto L_801B19D8; case 0x801B19E0u: goto L_801B19E0; case 0x801B19E8u: goto L_801B19E8; case 0x801B19F0u: goto L_801B19F0; case 0x801B19F8u: goto L_801B19F8; default: break; } dispatch(c,c->ctr); return; } // 801B18D8
L_801B18DC:;
  c->r[5]=c->r[29]+0x0000016Cu; // 801B18DC
  goto L_801B1918; // 801B18E0
L_801B18E4:;
  c->r[5]=c->r[29]+0x00000180u; // 801B18E4
  goto L_801B1918; // 801B18E8
L_801B18EC:;
  c->r[5]=c->r[29]+0x00000194u; // 801B18EC
  goto L_801B1918; // 801B18F0
L_801B18F4:;
  c->r[5]=c->r[29]+0x000001ACu; // 801B18F4
  goto L_801B1918; // 801B18F8
L_801B18FC:;
  c->r[5]=c->r[29]+0x000001C4u; // 801B18FC
  goto L_801B1918; // 801B1900
L_801B1904:;
  c->r[5]=c->r[29]+0x000001D8u; // 801B1904
  goto L_801B1918; // 801B1908
L_801B190C:;
  c->r[5]=c->r[29]+0x000001F0u; // 801B190C
  goto L_801B1918; // 801B1910
L_801B1914:;
  c->r[5]=c->r[29]+0x00000200u; // 801B1914
L_801B1918:;
  c->r[4]=c->r[29]+0x000002A8u; // 801B1918
  c->r[3]=0u+0x00000504u; // 801B191C
  c->lr=0x801B1924u; f_801ACB38(c); // 801B1920
L_801B1924:;
  c->r[0]=0u+0x00000000u; // 801B1924
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801B1928
  c->r[0]=R8(c->r[31]+0x00000016u); // 801B192C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801B1930
  c->r[4]=R16(c->r[31]+0x00000010u); // 801B1934
  cmps(c,0,(int32_t)c->r[4],7); // 801B1938
  if (crb(c,2)) { goto L_801B1994; } // 801B193C
  if (!crb(c,0)) { goto L_801B195C; } // 801B1940
  cmps(c,0,(int32_t)c->r[4],5); // 801B1944
  if (crb(c,2)) { goto L_801B1994; } // 801B1948
  if (!crb(c,0)) { goto L_801B1988; } // 801B194C
  cmps(c,0,(int32_t)c->r[4],4); // 801B1950
  if (!crb(c,0)) { goto L_801B1974; } // 801B1954
  goto L_801B1994; // 801B1958
L_801B195C:;
  cmps(c,0,(int32_t)c->r[4],9); // 801B195C
  if (crb(c,2)) { goto L_801B1994; } // 801B1960
  if (!crb(c,0)) { goto L_801B1994; } // 801B1964
  c->r[0]=R8(c->r[30]+0x00000008u); // 801B1968
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801B196C
  goto L_801B1A08; // 801B1970
L_801B1974:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B1974
  c->r[3]=c->r[1]+0x0000000Eu; // 801B1978
  c->r[5]=0u+0x00000008u; // 801B197C
  c->lr=0x801B1984u; f_80004338(c); // 801B1980
  goto L_801B1A08; // 801B1984
L_801B1988:;
  c->r[0]=R8(c->r[30]+0x00000008u); // 801B1988
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801B198C
  goto L_801B1A08; // 801B1990
L_801B1994:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B1994
  cmpu(c,0,c->r[0],0x00000005u); // 801B1998
  if (crb(c,0)) { goto L_801B1A08; } // 801B199C
  cmpu(c,0,c->r[4],0x00000009u); // 801B19A0
  if (crb(c,1)) { goto L_801B19F8; } // 801B19A4
  c->r[3]=0u+0x80330000u; // 801B19A8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801B19AC
  c->r[3]=c->r[3]+0x00001BA4u; // 801B19B0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B19B4
  c->ctr=c->r[3]; // 801B19B8
  if (true) { switch (c->ctr) { case 0x801B18DCu: goto L_801B18DC; case 0x801B18E4u: goto L_801B18E4; case 0x801B18ECu: goto L_801B18EC; case 0x801B18F4u: goto L_801B18F4; case 0x801B18FCu: goto L_801B18FC; case 0x801B1904u: goto L_801B1904; case 0x801B190Cu: goto L_801B190C; case 0x801B1914u: goto L_801B1914; case 0x801B19C0u: goto L_801B19C0; case 0x801B19C8u: goto L_801B19C8; case 0x801B19D0u: goto L_801B19D0; case 0x801B19D8u: goto L_801B19D8; case 0x801B19E0u: goto L_801B19E0; case 0x801B19E8u: goto L_801B19E8; case 0x801B19F0u: goto L_801B19F0; case 0x801B19F8u: goto L_801B19F8; default: break; } dispatch(c,c->ctr); return; } // 801B19BC
L_801B19C0:;
  c->r[5]=c->r[29]+0x0000016Cu; // 801B19C0
  goto L_801B19FC; // 801B19C4
L_801B19C8:;
  c->r[5]=c->r[29]+0x00000180u; // 801B19C8
  goto L_801B19FC; // 801B19CC
L_801B19D0:;
  c->r[5]=c->r[29]+0x00000194u; // 801B19D0
  goto L_801B19FC; // 801B19D4
L_801B19D8:;
  c->r[5]=c->r[29]+0x000001ACu; // 801B19D8
  goto L_801B19FC; // 801B19DC
L_801B19E0:;
  c->r[5]=c->r[29]+0x000001C4u; // 801B19E0
  goto L_801B19FC; // 801B19E4
L_801B19E8:;
  c->r[5]=c->r[29]+0x000001D8u; // 801B19E8
  goto L_801B19FC; // 801B19EC
L_801B19F0:;
  c->r[5]=c->r[29]+0x000001F0u; // 801B19F0
  goto L_801B19FC; // 801B19F4
L_801B19F8:;
  c->r[5]=c->r[29]+0x00000200u; // 801B19F8
L_801B19FC:;
  c->r[4]=c->r[29]+0x000002CCu; // 801B19FC
  c->r[3]=0u+0x00000504u; // 801B1A00
  c->lr=0x801B1A08u; f_801ACB38(c); // 801B1A04
L_801B1A08:;
  c->r[4]=R8(c->r[31]+0x00000015u); // 801B1A08
  c->r[5]=c->r[31]+0x00000008u; // 801B1A0C
  c->r[3]=0u+0x00000017u; // 801B1A10
  c->lr=0x801B1A18u; f_801AD464(c); // 801B1A14
  c->r[4]=R8(c->r[31]+0x00000015u); // 801B1A18
  c->r[5]=c->r[31]+0x00000008u; // 801B1A1C
  c->r[3]=0u+0x00000017u; // 801B1A20
  c->lr=0x801B1A28u; f_801AD430(c); // 801B1A24
  c->r[5]=0u+0x803C0000u; // 801B1A28
  c->r[4]=c->r[1]+0x0000000Cu; // 801B1A2C
  c->r[5]=c->r[5]+0x00007EE8u; // 801B1A30
  c->r[3]=R16(c->r[31]+0x00000010u); // 801B1A34
  c->r[12]=R32(c->r[5]+0x00000224u); // 801B1A38
  c->ctr=c->r[12]; // 801B1A3C
  if (true) { c->lr=0x801B1A44u; dispatch(c,c->ctr); } // 801B1A40
  c->r[0]=0u+0x00000000u; // 801B1A44
  c->r[3]=c->r[1]+0x00000008u; // 801B1A48
  W16(c->r[31]+0x00000010u,c->r[0]); // 801B1A4C
  c->lr=0x801B1A54u; f_801AD8BC(c); // 801B1A50
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B1A54
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B1A58
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B1A5C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B1A60
  c->lr=c->r[0]; // 801B1A64
  c->r[1]=c->r[1]+0x00000030u; // 801B1A68
  return; // 801B1A6C
}

// bta_hh_close_act
void f_801B1A70(Ctx* __restrict c) {
  trace_call(0x801B1A70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1A70
  c->r[0]=c->lr; // 801B1A74
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1A78
  c->r[0]=0u+0x00000000u; // 801B1A7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B1A80
  c->r[31]=c->r[3]|c->r[3]; // 801B1A84
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1A88
  c->r[30]=0u+0x00000003u; // 801B1A8C
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801B1A90
  c->r[0]=R8(c->r[3]+0x00000017u); // 801B1A94
  c->r[6]=R32(c->r[4]+0x00000008u); // 801B1A98
  cmps(c,0,(int32_t)c->r[0],0); // 801B1A9C
  if (crb(c,2)) { goto L_801B1AA8; } // 801B1AA0
  c->r[30]=0u+0x0000000Du; // 801B1AA4
L_801B1AA8:;
  c->r[5]=R8(c->r[3]+0x00000016u); // 801B1AA8
  c->r[0]=rotl(c->r[6],0)&0x00000700u; cr0(c,c->r[0]); // 801B1AAC
  W8(c->r[1]+0x0000000Du,c->r[5]); // 801B1AB0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B1AB4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801B1AB8
  if (!crb(c,2)) { goto L_801B1ADC; } // 801B1ABC
  cmpu(c,0,c->r[6],0x0000000Fu); // 801B1AC0
  if (crb(c,2)) { goto L_801B1ADC; } // 801B1AC4
  cmpu(c,0,c->r[6],0x0000000Eu); // 801B1AC8
  if (crb(c,2)) { goto L_801B1ADC; } // 801B1ACC
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801B1AD0
  cmps(c,0,(int32_t)c->r[0],0); // 801B1AD4
  if (!crb(c,2)) { goto L_801B1B30; } // 801B1AD8
L_801B1ADC:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 801B1ADC
  cmpu(c,0,c->r[6],0x0000000Fu); // 801B1AE0
  c->r[0]=0u+0x00000006u; // 801B1AE4
  W8(c->r[1]+0x00000017u,c->r[3]); // 801B1AE8
  if (!crb(c,2)) { goto L_801B1AF4; } // 801B1AEC
  c->r[0]=0u+0x0000000Cu; // 801B1AF0
L_801B1AF4:;
  W8(c->r[1]+0x00000016u,c->r[0]); // 801B1AF4
  c->r[3]=c->r[1]+0x00000010u; // 801B1AF8
  c->r[4]=c->r[31]+0x00000008u; // 801B1AFC
  c->lr=0x801B1B04u; f_801AD170(c); // 801B1B00
  c->r[3]=R8(c->r[31]+0x00000016u); // 801B1B04
  c->lr=0x801B1B0Cu; f_801C3138(c); // 801B1B08
  c->r[5]=0u+0x803C0000u; // 801B1B0C
  c->r[4]=c->r[1]+0x00000010u; // 801B1B10
  c->r[5]=c->r[5]+0x00007EE8u; // 801B1B14
  c->r[3]=0u+0x00000002u; // 801B1B18
  c->r[12]=R32(c->r[5]+0x00000224u); // 801B1B1C
  c->ctr=c->r[12]; // 801B1B20
  if (true) { c->lr=0x801B1B28u; dispatch(c,c->ctr); } // 801B1B24
  c->lr=0x801B1B2Cu; f_801B2F5C(c); // 801B1B28
  goto L_801B1C58; // 801B1B2C
L_801B1B30:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 801B1B30
  c->r[4]=R8(c->r[31]+0x00000015u); // 801B1B34
  c->lr=0x801B1B3Cu; f_801EBD18(c); // 801B1B38
  c->r[4]=R8(c->r[31]+0x00000015u); // 801B1B3C
  c->r[5]=c->r[31]+0x00000008u; // 801B1B40
  c->r[3]=0u+0x00000017u; // 801B1B44
  c->lr=0x801B1B4Cu; f_801AD338(c); // 801B1B48
  c->r[4]=0u+0x803C0000u; // 801B1B4C
  c->r[0]=0u+0x00000000u; // 801B1B50
  c->r[4]=c->r[4]+0x00007EE8u; // 801B1B54
  c->r[3]=R8(c->r[4]+0x0000022Du); // 801B1B58
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B1B5C
  W8(c->r[4]+0x0000022Du,c->r[3]); // 801B1B60
  W8(c->r[31]+0x0000001Au,c->r[0]); // 801B1B64
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801B1B68
  cmps(c,0,(int32_t)c->r[0],0); // 801B1B6C
  if (crb(c,2)) { goto L_801B1B7C; } // 801B1B70
  c->r[0]=0u+0x00000006u; // 801B1B74
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801B1B78
L_801B1B7C:;
  c->r[5]=0u+0x803C0000u; // 801B1B7C
  c->r[3]=c->r[30]|c->r[30]; // 801B1B80
  c->r[5]=c->r[5]+0x00007EE8u; // 801B1B84
  c->r[4]=c->r[1]+0x0000000Cu; // 801B1B88
  c->r[12]=R32(c->r[5]+0x00000224u); // 801B1B8C
  c->ctr=c->r[12]; // 801B1B90
  if (true) { c->lr=0x801B1B98u; dispatch(c,c->ctr); } // 801B1B94
  c->r[0]=R8(c->r[31]+0x00000017u); // 801B1B98
  cmps(c,0,(int32_t)c->r[0],0); // 801B1B9C
  if (crb(c,2)) { goto L_801B1BB4; } // 801B1BA0
  c->r[3]=R8(c->r[31]+0x00000016u); // 801B1BA4
  c->lr=0x801B1BACu; f_801C2ECC(c); // 801B1BA8
  c->r[3]=c->r[31]|c->r[31]; // 801B1BAC
  c->lr=0x801B1BB4u; f_801B2DCC(c); // 801B1BB0
L_801B1BB4:;
  c->lr=0x801B1BB8u; f_801B2F5C(c); // 801B1BB4
  c->r[4]=0u+0x00000000u; // 801B1BB8
  c->r[3]=0u+0x803C0000u; // 801B1BBC
  W8(c->r[31]+0x00000017u,c->r[4]); // 801B1BC0
  c->r[3]=c->r[3]+0x00007EE8u; // 801B1BC4
  W16(c->r[31]+0x00000010u,c->r[4]); // 801B1BC8
  c->r[0]=R8(c->r[3]+0x0000022Du); // 801B1BCC
  cmps(c,0,(int32_t)c->r[0],0); // 801B1BD0
  if (!crb(c,2)) { goto L_801B1C58; } // 801B1BD4
  c->r[0]=R8(c->r[3]+0x0000022Eu); // 801B1BD8
  cmps(c,0,(int32_t)c->r[0],0); // 801B1BDC
  if (crb(c,2)) { goto L_801B1C58; } // 801B1BE0
  W8(c->r[1]+0x00000008u,c->r[4]); // 801B1BE4
  c->lr=0x801B1BECu; f_801C2C58(c); // 801B1BE8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B1BEC
  if (crb(c,2)) { goto L_801B1BFC; } // 801B1BF0
  c->r[0]=0u+0x00000006u; // 801B1BF4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B1BF8
L_801B1BFC:;
  c->r[31]=0u+0x803C0000u; // 801B1BFC
  c->r[30]=0u+0x00000000u; // 801B1C00
  c->r[31]=c->r[31]+0x00007EE8u; // 801B1C04
L_801B1C08:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801B1C08
  c->r[3]=c->r[31]+c->r[0]; // 801B1C0C
  c->r[3]=c->r[3]+0x00000014u; // 801B1C10
  c->lr=0x801B1C18u; f_801AD8BC(c); // 801B1C14
  c->r[30]=c->r[30]+0x00000001u; // 801B1C18
  cmpu(c,0,c->r[30],0x00000010u); // 801B1C1C
  if (crb(c,0)) { IRQCHK(c); goto L_801B1C08; } // 801B1C20
  c->r[31]=0u+0x803C0000u; // 801B1C24
  c->r[31]=c->r[31]+0x00007EE8u; // 801B1C28
  c->r[3]=c->r[31]+0x00000228u; // 801B1C2C
  c->lr=0x801B1C34u; f_801AD8BC(c); // 801B1C30
  c->r[12]=R32(c->r[31]+0x00000224u); // 801B1C34
  c->r[4]=c->r[1]+0x00000008u; // 801B1C38
  c->r[3]=0u+0x00000001u; // 801B1C3C
  c->ctr=c->r[12]; // 801B1C40
  if (true) { c->lr=0x801B1C48u; dispatch(c,c->ctr); } // 801B1C44
  c->r[3]=c->r[31]|c->r[31]; // 801B1C48
  c->r[4]=0u+0x00000000u; // 801B1C4C
  c->r[5]=0u+0x00000230u; // 801B1C50
  c->lr=0x801B1C58u; f_80004688(c); // 801B1C54
L_801B1C58:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1C58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B1C5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B1C60
  c->lr=c->r[0]; // 801B1C64
  c->r[1]=c->r[1]+0x00000020u; // 801B1C68
  return; // 801B1C6C
}

// bta_hh_get_dscp_act
void f_801B1C70(Ctx* __restrict c) {
  trace_call(0x801B1C70u);
  c->r[5]=0u+0x803C0000u; // 801B1C70
  c->r[4]=c->r[3]|c->r[3]; // 801B1C74
  c->r[5]=c->r[5]+0x00007EE8u; // 801B1C78
  c->r[3]=0u+0x0000000Au; // 801B1C7C
  c->r[12]=R32(c->r[5]+0x00000224u); // 801B1C80
  c->ctr=c->r[12]; // 801B1C84
  if (true) { dispatch(c,c->ctr); return; } // 801B1C88
}

// bta_hh_maint_dev_act
void f_801B1C8C(Ctx* __restrict c) {
  trace_call(0x801B1C8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1C8C
  c->r[0]=c->lr; // 801B1C90
  c->r[5]=0u+0x00000006u; // 801B1C94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1C98
  c->r[0]=0u+0x000000FFu; // 801B1C9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B1CA0
  c->r[31]=c->r[4]|c->r[4]; // 801B1CA4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1CA8
  c->r[30]=c->r[3]|c->r[3]; // 801B1CAC
  W8(c->r[1]+0x00000016u,c->r[5]); // 801B1CB0
  W8(c->r[1]+0x00000017u,c->r[0]); // 801B1CB4
  c->r[0]=R16(c->r[4]+0x00000010u); // 801B1CB8
  cmps(c,0,(int32_t)c->r[0],12); // 801B1CBC
  if (crb(c,2)) { goto L_801B1D5C; } // 801B1CC0
  if (!crb(c,0)) { goto L_801B1DA0; } // 801B1CC4
  cmps(c,0,(int32_t)c->r[0],11); // 801B1CC8
  if (!crb(c,0)) { goto L_801B1CD4; } // 801B1CCC
  goto L_801B1DA0; // 801B1CD0
L_801B1CD4:;
  c->r[3]=c->r[1]+0x00000010u; // 801B1CD4
  c->r[4]=c->r[4]+0x00000008u; // 801B1CD8
  c->lr=0x801B1CE0u; f_801AD170(c); // 801B1CDC
  c->r[3]=R8(c->r[30]+0x00000016u); // 801B1CE0
  cmpu(c,0,c->r[3],0x000000FFu); // 801B1CE4
  if (!crb(c,2)) { goto L_801B1D48; } // 801B1CE8
  c->r[4]=R16(c->r[31]+0x0000000Eu); // 801B1CEC
  c->r[3]=c->r[31]+0x00000008u; // 801B1CF0
  c->r[5]=c->r[1]+0x00000008u; // 801B1CF4
  c->lr=0x801B1CFCu; f_801C2D3C(c); // 801B1CF8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B1CFC
  if (!crb(c,2)) { goto L_801B1D54; } // 801B1D00
  c->r[4]=R8(c->r[1]+0x00000008u); // 801B1D04
  c->r[0]=0u+0x00000000u; // 801B1D08
  W8(c->r[1]+0x00000016u,c->r[0]); // 801B1D0C
  c->r[3]=c->r[30]|c->r[30]; // 801B1D10
  c->r[6]=0u+0x00000000u; // 801B1D14
  W8(c->r[1]+0x00000017u,c->r[4]); // 801B1D18
  c->r[5]=R16(c->r[31]+0x0000000Eu); // 801B1D1C
  c->r[7]=R8(c->r[31]+0x00000012u); // 801B1D20
  c->r[8]=R8(c->r[31]+0x00000013u); // 801B1D24
  c->lr=0x801B1D2Cu; f_801B2E4C(c); // 801B1D28
  c->r[3]=0u+0x803C0000u; // 801B1D2C
  c->r[0]=R8(c->r[1]+0x00000008u); // 801B1D30
  c->r[3]=c->r[3]+0x00007EE8u; // 801B1D34
  c->r[4]=R8(c->r[30]+0x00000012u); // 801B1D38
  c->r[3]=c->r[3]+c->r[0]; // 801B1D3C
  W8(c->r[3]+0x00000214u,c->r[4]); // 801B1D40
  goto L_801B1D54; // 801B1D44
L_801B1D48:;
  c->r[0]=0u+0x00000000u; // 801B1D48
  W8(c->r[1]+0x00000017u,c->r[3]); // 801B1D4C
  W8(c->r[1]+0x00000016u,c->r[0]); // 801B1D50
L_801B1D54:;
  c->lr=0x801B1D58u; f_801B2F5C(c); // 801B1D54
  goto L_801B1DBC; // 801B1D58
L_801B1D5C:;
  c->r[0]=R16(c->r[4]+0x00000006u); // 801B1D5C
  c->r[3]=c->r[1]+0x00000010u; // 801B1D60
  c->r[4]=c->r[30]+0x00000008u; // 801B1D64
  W8(c->r[1]+0x00000017u,c->r[0]); // 801B1D68
  c->lr=0x801B1D70u; f_801AD170(c); // 801B1D6C
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 801B1D70
  cmpu(c,0,c->r[0],0x00000003u); // 801B1D74
  if (crb(c,2)) { goto L_801B1DBC; } // 801B1D78
  c->r[3]=R8(c->r[1]+0x00000017u); // 801B1D7C
  c->lr=0x801B1D84u; f_801C2ECC(c); // 801B1D80
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B1D84
  if (!crb(c,2)) { goto L_801B1DBC; } // 801B1D88
  c->r[0]=0u+0x00000000u; // 801B1D8C
  c->r[3]=c->r[30]|c->r[30]; // 801B1D90
  W8(c->r[1]+0x00000016u,c->r[0]); // 801B1D94
  c->lr=0x801B1D9Cu; f_801B2DCC(c); // 801B1D98
  goto L_801B1DBC; // 801B1D9C
L_801B1DA0:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B1DA0
  cmpu(c,0,c->r[0],0x00000005u); // 801B1DA4
  if (crb(c,0)) { goto L_801B1DBC; } // 801B1DA8
  c->r[4]=0u+0x80330000u; // 801B1DAC
  c->r[3]=0u+0x00000504u; // 801B1DB0
  c->r[4]=c->r[4]+0x00001BF8u; // 801B1DB4
  c->lr=0x801B1DBCu; f_801ACB20(c); // 801B1DB8
L_801B1DBC:;
  c->r[5]=0u+0x803C0000u; // 801B1DBC
  c->r[4]=c->r[1]+0x00000010u; // 801B1DC0
  c->r[5]=c->r[5]+0x00007EE8u; // 801B1DC4
  c->r[3]=R16(c->r[31]+0x00000010u); // 801B1DC8
  c->r[12]=R32(c->r[5]+0x00000224u); // 801B1DCC
  c->ctr=c->r[12]; // 801B1DD0
  if (true) { c->lr=0x801B1DD8u; dispatch(c,c->ctr); } // 801B1DD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1DD8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B1DDC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B1DE0
  c->lr=c->r[0]; // 801B1DE4
  c->r[1]=c->r[1]+0x00000020u; // 801B1DE8
  return; // 801B1DEC
}

// bta_hh_get_acl_q_info
void f_801B1DF0(Ctx* __restrict c) {
  trace_call(0x801B1DF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1DF0
  c->r[0]=c->lr; // 801B1DF4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B1DF8
  c->r[11]=c->r[1]+0x00000040u; // 801B1DFC
  c->lr=0x801B1E04u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B1E00
  c->r[3]=c->r[1]+0x00000008u; // 801B1E04
  c->r[31]=0u+0x00000000u; // 801B1E08
  c->r[4]=0u+0x00000000u; // 801B1E0C
  c->r[5]=0u+0x0000001Eu; // 801B1E10
  c->lr=0x801B1E18u; f_80004688(c); // 801B1E14
  c->r[30]=0u+0x803D0000u; // 801B1E18
  c->r[29]=0u+0x803C0000u; // 801B1E1C
  c->r[30]=c->r[30]+0xFFFFADD8u; // 801B1E20
  c->r[27]=0u+0x00000000u; // 801B1E24
  c->r[29]=c->r[29]+0x00007EE8u; // 801B1E28
L_801B1E2C:;
  c->r[0]=rotl(c->r[27],5)&0x00001FE0u; // 801B1E2C
  c->r[3]=c->r[29]+c->r[0]; // 801B1E30
  c->r[0]=R8(c->r[3]+0x00000028u); // 801B1E34
  cmps(c,0,(int32_t)c->r[0],0); // 801B1E38
  if (crb(c,2)) { goto L_801B1EAC; } // 801B1E3C
  c->r[0]=R8(c->r[3]+0x0000002Cu); // 801B1E40
  cmpu(c,0,c->r[0],0x00000003u); // 801B1E44
  if (!crb(c,2)) { goto L_801B1EAC; } // 801B1E48
  c->r[4]=R8(c->r[3]+0x00000026u); // 801B1E4C
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801B1E50
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 801B1E54
  c->r[28]=c->r[1]+0x00000008u; // 801B1E58
  c->r[3]=0u+0x00000000u; // 801B1E5C
  c->r[28]=c->r[28]+c->r[5]; // 801B1E60
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)52); // 801B1E64
  W8(c->r[28]+0x00000006u,c->r[4]); // 801B1E68
  c->r[4]=c->r[30]+c->r[0]; // 801B1E6C
  c->r[4]=R16(c->r[4]+0x00000016u); // 801B1E70
  c->lr=0x801B1E78u; f_801CAD54(c); // 801B1E74
  cmps(c,0,(int32_t)c->r[3],0); // 801B1E78
  if (crb(c,2)) { goto L_801B1EA8; } // 801B1E7C
  c->r[3]=R32(c->r[3]+0x00000010u); // 801B1E80
  cmps(c,0,(int32_t)c->r[3],0); // 801B1E84
  if (crb(c,2)) { goto L_801B1EA8; } // 801B1E88
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B1E8C
  cmps(c,0,(int32_t)c->r[0],0); // 801B1E90
  if (crb(c,2)) { goto L_801B1EA8; } // 801B1E94
  c->r[0]=R16(c->r[3]+0x0000004Cu); // 801B1E98
  W16(c->r[28]+0x00000008u,c->r[0]); // 801B1E9C
  c->r[0]=R16(c->r[3]+0x00000038u); // 801B1EA0
  W16(c->r[28]+0x0000000Au,c->r[0]); // 801B1EA4
L_801B1EA8:;
  c->r[31]=c->r[31]+0x00000001u; // 801B1EA8
L_801B1EAC:;
  c->r[27]=c->r[27]+0x00000001u; // 801B1EAC
  cmpu(c,0,c->r[27],0x00000010u); // 801B1EB0
  if (crb(c,0)) { IRQCHK(c); goto L_801B1E2C; } // 801B1EB4
  c->r[4]=0u+0x803D0000u; // 801B1EB8
  c->r[3]=0u+0x803C0000u; // 801B1EBC
  c->r[4]=c->r[4]+0xFFFFB1E0u; // 801B1EC0
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801B1EC4
  c->r[3]=c->r[3]+0x00007EE8u; // 801B1EC8
  c->r[6]=R16(c->r[4]+0x00000004u); // 801B1ECC
  c->r[5]=R16(c->r[4]+0x00000002u); // 801B1ED0
  c->r[4]=c->r[1]+0x00000008u; // 801B1ED4
  c->r[12]=R32(c->r[3]+0x00000224u); // 801B1ED8
  c->r[3]=0u+0x0000000Fu; // 801B1EDC
  W16(c->r[1]+0x00000008u,c->r[6]); // 801B1EE0
  W16(c->r[1]+0x0000000Au,c->r[5]); // 801B1EE4
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801B1EE8
  c->ctr=c->r[12]; // 801B1EEC
  if (true) { c->lr=0x801B1EF4u; dispatch(c,c->ctr); } // 801B1EF0
  c->r[11]=c->r[1]+0x00000040u; // 801B1EF4
  c->lr=0x801B1EFCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B1EF8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B1EFC
  c->lr=c->r[0]; // 801B1F00
  c->r[1]=c->r[1]+0x00000040u; // 801B1F04
  return; // 801B1F08
}

// bta_hh_write_dev_act
void f_801B1F0C(Ctx* __restrict c) {
  trace_call(0x801B1F0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1F0C
  c->r[0]=c->lr; // 801B1F10
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1F14
  c->r[0]=0u+0x00000000u; // 801B1F18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B1F1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1F20
  c->r[30]=c->r[4]|c->r[4]; // 801B1F24
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B1F28
  c->r[29]=c->r[3]|c->r[3]; // 801B1F2C
  W16(c->r[1]+0x00000008u,c->r[0]); // 801B1F30
  c->r[31]=R8(c->r[4]+0x00000008u); // 801B1F34
  c->r[0]=R8(c->r[3]+0x00000016u); // 801B1F38
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B1F3C
  c->r[3]=R8(c->r[3]+0x00000016u); // 801B1F40
  c->r[4]=R8(c->r[4]+0x00000008u); // 801B1F44
  c->r[5]=R8(c->r[30]+0x00000009u); // 801B1F48
  c->r[6]=R16(c->r[30]+0x0000000Cu); // 801B1F4C
  c->r[7]=R8(c->r[30]+0x0000000Au); // 801B1F50
  c->r[8]=R32(c->r[30]+0x00000010u); // 801B1F54
  c->lr=0x801B1F5Cu; f_801C2FF8(c); // 801B1F58
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 801B1F5C
  if (crb(c,2)) { goto L_801B1FE8; } // 801B1F60
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B1F64
  cmpu(c,0,c->r[0],0x00000001u); // 801B1F68
  if (crb(c,0)) { goto L_801B1F80; } // 801B1F6C
  c->r[4]=0u+0x80330000u; // 801B1F70
  c->r[3]=0u+0x00000500u; // 801B1F74
  c->r[4]=c->r[4]+0x00001C08u; // 801B1F78
  c->lr=0x801B1F80u; f_801ACB38(c); // 801B1F7C
L_801B1F80:;
  c->r[0]=0u+0x00000006u; // 801B1F80
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B1F84
  c->r[0]=R8(c->r[30]+0x00000008u); // 801B1F88
  cmpu(c,0,c->r[0],0x00000001u); // 801B1F8C
  if (crb(c,2)) { goto L_801B1FBC; } // 801B1F90
  cmpu(c,0,c->r[0],0x0000000Au); // 801B1F94
  if (crb(c,2)) { goto L_801B1FBC; } // 801B1F98
  c->r[5]=0u+0x803C0000u; // 801B1F9C
  c->r[3]=c->r[31]|c->r[31]; // 801B1FA0
  c->r[5]=c->r[5]+0x00007EE8u; // 801B1FA4
  c->r[4]=c->r[1]+0x00000008u; // 801B1FA8
  c->r[12]=R32(c->r[5]+0x00000224u); // 801B1FAC
  c->ctr=c->r[12]; // 801B1FB0
  if (true) { c->lr=0x801B1FB8u; dispatch(c,c->ctr); } // 801B1FB4
  goto L_801B20B8; // 801B1FB8
L_801B1FBC:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 801B1FBC
  cmpu(c,0,c->r[0],0x00000005u); // 801B1FC0
  if (!crb(c,2)) { goto L_801B20B8; } // 801B1FC4
  c->r[5]=0u+0x803C0000u; // 801B1FC8
  c->r[4]=c->r[1]+0x00000008u; // 801B1FCC
  c->r[5]=c->r[5]+0x00007EE8u; // 801B1FD0
  c->r[3]=0u+0x0000000Du; // 801B1FD4
  c->r[12]=R32(c->r[5]+0x00000224u); // 801B1FD8
  c->ctr=c->r[12]; // 801B1FDC
  if (true) { c->lr=0x801B1FE4u; dispatch(c,c->ctr); } // 801B1FE0
  goto L_801B20B8; // 801B1FE4
L_801B1FE8:;
  c->r[5]=R8(c->r[30]+0x00000008u); // 801B1FE8
  cmps(c,0,(int32_t)c->r[5],10); // 801B1FEC
  if (crb(c,2)) { goto L_801B201C; } // 801B1FF0
  if (!crb(c,0)) { goto L_801B2034; } // 801B1FF4
  cmps(c,0,(int32_t)c->r[5],1); // 801B1FF8
  if (crb(c,2)) { goto L_801B201C; } // 801B1FFC
  if (crb(c,0)) { goto L_801B2034; } // 801B2000
  cmps(c,0,(int32_t)c->r[5],4); // 801B2004
  if (!crb(c,0)) { goto L_801B2014; } // 801B2008
  goto L_801B2034; // 801B200C
  goto L_801B2034; // 801B2010
L_801B2014:;
  W16(c->r[29]+0x00000010u,c->r[31]); // 801B2014
  goto L_801B2050; // 801B2018
L_801B201C:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 801B201C
  cmpu(c,0,c->r[0],0x00000005u); // 801B2020
  if (!crb(c,2)) { goto L_801B2050; } // 801B2024
  c->r[0]=0u+0x00000001u; // 801B2028
  W8(c->r[29]+0x00000017u,c->r[0]); // 801B202C
  goto L_801B2050; // 801B2030
L_801B2034:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B2034
  cmpu(c,0,c->r[0],0x00000005u); // 801B2038
  if (crb(c,0)) { goto L_801B2050; } // 801B203C
  c->r[4]=0u+0x80330000u; // 801B2040
  c->r[3]=0u+0x00000504u; // 801B2044
  c->r[4]=c->r[4]+0x00001C24u; // 801B2048
  c->lr=0x801B2050u; f_801ACB38(c); // 801B204C
L_801B2050:;
  c->r[0]=R8(c->r[30]+0x00000008u); // 801B2050
  cmpu(c,0,c->r[0],0x00000001u); // 801B2054
  if (crb(c,2)) { goto L_801B2080; } // 801B2058
  c->r[4]=R8(c->r[29]+0x00000015u); // 801B205C
  c->r[5]=c->r[29]+0x00000008u; // 801B2060
  c->r[3]=0u+0x00000017u; // 801B2064
  c->lr=0x801B206Cu; f_801AD464(c); // 801B2068
  c->r[4]=R8(c->r[29]+0x00000015u); // 801B206C
  c->r[5]=c->r[29]+0x00000008u; // 801B2070
  c->r[3]=0u+0x00000017u; // 801B2074
  c->lr=0x801B207Cu; f_801AD430(c); // 801B2078
  goto L_801B20B8; // 801B207C
L_801B2080:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 801B2080
  cmpu(c,0,c->r[0],0x00000003u); // 801B2084
  if (!crb(c,2)) { goto L_801B20A0; } // 801B2088
  c->r[4]=R8(c->r[29]+0x00000015u); // 801B208C
  c->r[5]=c->r[29]+0x00000008u; // 801B2090
  c->r[3]=0u+0x00000017u; // 801B2094
  c->lr=0x801B209Cu; f_801AD3FC(c); // 801B2098
  goto L_801B20B8; // 801B209C
L_801B20A0:;
  cmpu(c,0,c->r[0],0x00000004u); // 801B20A0
  if (!crb(c,2)) { goto L_801B20B8; } // 801B20A4
  c->r[4]=R8(c->r[29]+0x00000015u); // 801B20A8
  c->r[5]=c->r[29]+0x00000008u; // 801B20AC
  c->r[3]=0u+0x00000017u; // 801B20B0
  c->lr=0x801B20B8u; f_801AD464(c); // 801B20B4
L_801B20B8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B20B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B20BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B20C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B20C4
  c->lr=c->r[0]; // 801B20C8
  c->r[1]=c->r[1]+0x00000020u; // 801B20CC
  return; // 801B20D0
}

// bta_hh_cback
void f_801B20D4(Ctx* __restrict c) {
  trace_call(0x801B20D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B20D4
  c->r[0]=c->lr; // 801B20D8
  c->r[7]=0u+0x80330000u; // 801B20DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B20E0
  c->r[7]=c->r[7]+0x000018A0u; // 801B20E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B20E8
  c->r[31]=0u+0x00001710u; // 801B20EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B20F0
  c->r[30]=c->r[5]|c->r[5]; // 801B20F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B20F8
  c->r[29]=c->r[4]|c->r[4]; // 801B20FC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B2100
  c->r[28]=c->r[3]|c->r[3]; // 801B2104
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B2108
  W32(c->r[1]+0x00000008u,c->r[6]); // 801B210C
  cmpu(c,0,c->r[0],0x00000005u); // 801B2110
  if (crb(c,0)) { goto L_801B2190; } // 801B2114
  cmpu(c,0,c->r[4],0x00000008u); // 801B2118
  if (crb(c,1)) { goto L_801B2180; } // 801B211C
  c->r[3]=0u+0x80330000u; // 801B2120
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801B2124
  c->r[3]=c->r[3]+0x00001D74u; // 801B2128
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B212C
  c->ctr=c->r[3]; // 801B2130
  if (true) { switch (c->ctr) { case 0x801B2138u: goto L_801B2138; case 0x801B2140u: goto L_801B2140; case 0x801B2148u: goto L_801B2148; case 0x801B2150u: goto L_801B2150; case 0x801B2158u: goto L_801B2158; case 0x801B2160u: goto L_801B2160; case 0x801B2168u: goto L_801B2168; case 0x801B2170u: goto L_801B2170; case 0x801B2178u: goto L_801B2178; case 0x801B21B0u: goto L_801B21B0; case 0x801B21B8u: goto L_801B21B8; case 0x801B21C0u: goto L_801B21C0; case 0x801B21C8u: goto L_801B21C8; case 0x801B21D0u: goto L_801B21D0; case 0x801B21D8u: goto L_801B21D8; case 0x801B21E4u: goto L_801B21E4; case 0x801B231Cu: goto L_801B231C; default: break; } dispatch(c,c->ctr); return; } // 801B2134
L_801B2138:;
  c->r[5]=c->r[7]+0x000003ACu; // 801B2138
  goto L_801B2184; // 801B213C
L_801B2140:;
  c->r[5]=c->r[7]+0x000003C0u; // 801B2140
  goto L_801B2184; // 801B2144
L_801B2148:;
  c->r[5]=c->r[7]+0x000003D4u; // 801B2148
  goto L_801B2184; // 801B214C
L_801B2150:;
  c->r[5]=c->r[7]+0x000003ECu; // 801B2150
  goto L_801B2184; // 801B2154
L_801B2158:;
  c->r[5]=c->r[7]+0x00000404u; // 801B2158
  goto L_801B2184; // 801B215C
L_801B2160:;
  c->r[5]=c->r[7]+0x0000041Cu; // 801B2160
  goto L_801B2184; // 801B2164
L_801B2168:;
  c->r[5]=c->r[7]+0x00000434u; // 801B2168
  goto L_801B2184; // 801B216C
L_801B2170:;
  c->r[5]=c->r[7]+0x0000044Cu; // 801B2170
  goto L_801B2184; // 801B2174
L_801B2178:;
  c->r[5]=c->r[7]+0x00000464u; // 801B2178
  goto L_801B2184; // 801B217C
L_801B2180:;
  c->r[5]=c->r[7]+0x0000047Cu; // 801B2180
L_801B2184:;
  c->r[4]=c->r[7]+0x00000490u; // 801B2184
  c->r[3]=0u+0x00000504u; // 801B2188
  c->lr=0x801B2190u; f_801ACB38(c); // 801B218C
L_801B2190:;
  cmpu(c,0,c->r[29],0x00000008u); // 801B2190
  if (crb(c,1)) { goto L_801B231C; } // 801B2194
  c->r[3]=0u+0x80330000u; // 801B2198
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801B219C
  c->r[3]=c->r[3]+0x00001D50u; // 801B21A0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B21A4
  c->ctr=c->r[3]; // 801B21A8
  if (true) { switch (c->ctr) { case 0x801B2138u: goto L_801B2138; case 0x801B2140u: goto L_801B2140; case 0x801B2148u: goto L_801B2148; case 0x801B2150u: goto L_801B2150; case 0x801B2158u: goto L_801B2158; case 0x801B2160u: goto L_801B2160; case 0x801B2168u: goto L_801B2168; case 0x801B2170u: goto L_801B2170; case 0x801B2178u: goto L_801B2178; case 0x801B21B0u: goto L_801B21B0; case 0x801B21B8u: goto L_801B21B8; case 0x801B21C0u: goto L_801B21C0; case 0x801B21C8u: goto L_801B21C8; case 0x801B21D0u: goto L_801B21D0; case 0x801B21D8u: goto L_801B21D8; case 0x801B21E4u: goto L_801B21E4; case 0x801B231Cu: goto L_801B231C; default: break; } dispatch(c,c->ctr); return; } // 801B21AC
L_801B21B0:;
  c->r[31]=0u+0x00001702u; // 801B21B0
  goto L_801B231C; // 801B21B4
L_801B21B8:;
  c->r[31]=0u+0x00001703u; // 801B21B8
  goto L_801B231C; // 801B21BC
L_801B21C0:;
  c->r[31]=0u+0x00001704u; // 801B21C0
  goto L_801B231C; // 801B21C4
L_801B21C8:;
  c->r[31]=0u+0x00001706u; // 801B21C8
  goto L_801B231C; // 801B21CC
L_801B21D0:;
  c->r[31]=0u+0x00001705u; // 801B21D0
  goto L_801B231C; // 801B21D4
L_801B21D8:;
  c->r[3]=c->r[1]+0x00000008u; // 801B21D8
  c->lr=0x801B21E0u; f_801AD8BC(c); // 801B21DC
  goto L_801B231C; // 801B21E0
L_801B21E4:;
  c->r[4]=0u+0x803C0000u; // 801B21E4
  c->r[0]=0u+0x00000002u; // 801B21E8
  c->r[4]=c->r[4]+0x00007EE8u; // 801B21EC
  c->r[5]=0u+0x00000000u; // 801B21F0
  c->ctr=c->r[0]; // 801B21F4
L_801B21F8:;
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801B21F8
  c->r[3]=c->r[4]+c->r[0]; // 801B21FC
  c->r[0]=R8(c->r[3]+0x00000026u); // 801B2200
  cmpu(c,0,c->r[28],c->r[0]); // 801B2204
  if (!crb(c,2)) { goto L_801B2218; } // 801B2208
  c->r[0]=0u+0x00000001u; // 801B220C
  W8(c->r[3]+0x00000027u,c->r[0]); // 801B2210
  goto L_801B231C; // 801B2214
L_801B2218:;
  c->r[5]=c->r[5]+0x00000001u; // 801B2218
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801B221C
  c->r[3]=c->r[4]+c->r[0]; // 801B2220
  c->r[0]=R8(c->r[3]+0x00000026u); // 801B2224
  cmpu(c,0,c->r[28],c->r[0]); // 801B2228
  if (!crb(c,2)) { goto L_801B223C; } // 801B222C
  c->r[0]=0u+0x00000001u; // 801B2230
  W8(c->r[3]+0x00000027u,c->r[0]); // 801B2234
  goto L_801B231C; // 801B2238
L_801B223C:;
  c->r[5]=c->r[5]+0x00000001u; // 801B223C
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801B2240
  c->r[3]=c->r[4]+c->r[0]; // 801B2244
  c->r[0]=R8(c->r[3]+0x00000026u); // 801B2248
  cmpu(c,0,c->r[28],c->r[0]); // 801B224C
  if (!crb(c,2)) { goto L_801B2260; } // 801B2250
  c->r[0]=0u+0x00000001u; // 801B2254
  W8(c->r[3]+0x00000027u,c->r[0]); // 801B2258
  goto L_801B231C; // 801B225C
L_801B2260:;
  c->r[5]=c->r[5]+0x00000001u; // 801B2260
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801B2264
  c->r[3]=c->r[4]+c->r[0]; // 801B2268
  c->r[0]=R8(c->r[3]+0x00000026u); // 801B226C
  cmpu(c,0,c->r[28],c->r[0]); // 801B2270
  if (!crb(c,2)) { goto L_801B2284; } // 801B2274
  c->r[0]=0u+0x00000001u; // 801B2278
  W8(c->r[3]+0x00000027u,c->r[0]); // 801B227C
  goto L_801B231C; // 801B2280
L_801B2284:;
  c->r[5]=c->r[5]+0x00000001u; // 801B2284
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801B2288
  c->r[3]=c->r[4]+c->r[0]; // 801B228C
  c->r[0]=R8(c->r[3]+0x00000026u); // 801B2290
  cmpu(c,0,c->r[28],c->r[0]); // 801B2294
  if (!crb(c,2)) { goto L_801B22A8; } // 801B2298
  c->r[0]=0u+0x00000001u; // 801B229C
  W8(c->r[3]+0x00000027u,c->r[0]); // 801B22A0
  goto L_801B231C; // 801B22A4
L_801B22A8:;
  c->r[5]=c->r[5]+0x00000001u; // 801B22A8
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801B22AC
  c->r[3]=c->r[4]+c->r[0]; // 801B22B0
  c->r[0]=R8(c->r[3]+0x00000026u); // 801B22B4
  cmpu(c,0,c->r[28],c->r[0]); // 801B22B8
  if (!crb(c,2)) { goto L_801B22CC; } // 801B22BC
  c->r[0]=0u+0x00000001u; // 801B22C0
  W8(c->r[3]+0x00000027u,c->r[0]); // 801B22C4
  goto L_801B231C; // 801B22C8
L_801B22CC:;
  c->r[5]=c->r[5]+0x00000001u; // 801B22CC
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801B22D0
  c->r[3]=c->r[4]+c->r[0]; // 801B22D4
  c->r[0]=R8(c->r[3]+0x00000026u); // 801B22D8
  cmpu(c,0,c->r[28],c->r[0]); // 801B22DC
  if (!crb(c,2)) { goto L_801B22F0; } // 801B22E0
  c->r[0]=0u+0x00000001u; // 801B22E4
  W8(c->r[3]+0x00000027u,c->r[0]); // 801B22E8
  goto L_801B231C; // 801B22EC
L_801B22F0:;
  c->r[5]=c->r[5]+0x00000001u; // 801B22F0
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801B22F4
  c->r[3]=c->r[4]+c->r[0]; // 801B22F8
  c->r[0]=R8(c->r[3]+0x00000026u); // 801B22FC
  cmpu(c,0,c->r[28],c->r[0]); // 801B2300
  if (!crb(c,2)) { goto L_801B2314; } // 801B2304
  c->r[0]=0u+0x00000001u; // 801B2308
  W8(c->r[3]+0x00000027u,c->r[0]); // 801B230C
  goto L_801B231C; // 801B2310
L_801B2314:;
  c->r[5]=c->r[5]+0x00000001u; // 801B2314
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B21F8; } // 801B2318
L_801B231C:;
  cmpu(c,0,c->r[31],0x00001710u); // 801B231C
  if (crb(c,2)) { goto L_801B234C; } // 801B2320
  c->r[3]=0u+0x00000018u; // 801B2324
  c->lr=0x801B232Cu; f_801A9FA0(c); // 801B2328
  cmps(c,0,(int32_t)c->r[3],0); // 801B232C
  if (crb(c,2)) { goto L_801B234C; } // 801B2330
  W16(c->r[3]+0x00000000u,c->r[31]); // 801B2334
  W16(c->r[3]+0x00000006u,c->r[28]); // 801B2338
  W32(c->r[3]+0x00000008u,c->r[30]); // 801B233C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801B2340
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B2344
  c->lr=0x801B234Cu; f_801AD61C(c); // 801B2348
L_801B234C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B234C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B2350
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B2354
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B2358
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B235C
  c->lr=c->r[0]; // 801B2360
  c->r[1]=c->r[1]+0x00000020u; // 801B2364
  return; // 801B2368
}

// BTA_HhEnable
void f_801B236C(Ctx* __restrict c) {
  trace_call(0x801B236Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B236C
  c->r[0]=c->lr; // 801B2370
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2374
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B2378
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B237C
  c->r[30]=c->r[4]|c->r[4]; // 801B2380
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B2384
  c->r[29]=c->r[3]|c->r[3]; // 801B2388
  c->lr=0x801B2390u; f_801AB598(c); // 801B238C
  c->r[3]=0u+0x00000017u; // 801B2390
  c->r[4]=c->r[2]+0xFFFF9500u; // 801B2394
  c->lr=0x801B239Cu; f_801AD608(c); // 801B2398
  c->lr=0x801B23A0u; f_801AB59C(c); // 801B239C
  c->r[3]=0u+0x00000034u; // 801B23A0
  c->lr=0x801B23A8u; f_801A9FA0(c); // 801B23A4
  cmps(c,0,(int32_t)c->r[3],0); // 801B23A8
  c->r[31]=c->r[3]|c->r[3]; // 801B23AC
  if (crb(c,2)) { goto L_801B23D8; } // 801B23B0
  c->r[4]=0u+0x00000000u; // 801B23B4
  c->r[5]=0u+0x00000034u; // 801B23B8
  c->lr=0x801B23C0u; f_80004688(c); // 801B23BC
  c->r[0]=0u+0x0000170Cu; // 801B23C0
  c->r[3]=c->r[31]|c->r[31]; // 801B23C4
  W16(c->r[31]+0x00000000u,c->r[0]); // 801B23C8
  W32(c->r[31]+0x00000030u,c->r[30]); // 801B23CC
  W8(c->r[31]+0x00000008u,c->r[29]); // 801B23D0
  c->lr=0x801B23D8u; f_801AD61C(c); // 801B23D4
L_801B23D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B23D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B23DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B23E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B23E4
  c->lr=c->r[0]; // 801B23E8
  c->r[1]=c->r[1]+0x00000020u; // 801B23EC
  return; // 801B23F0
}

// fn_801B23F4
void f_801B23F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B23F4
  c->r[0]=c->lr; // 801B23F8
  c->r[3]=0u+0x00000008u; // 801B23FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2400
  c->lr=0x801B2408u; f_801A9FA0(c); // 801B2404
  cmps(c,0,(int32_t)c->r[3],0); // 801B2408
  if (crb(c,2)) { goto L_801B241C; } // 801B240C
  c->r[0]=0u+0x0000170Du; // 801B2410
  W16(c->r[3]+0x00000000u,c->r[0]); // 801B2414
  c->lr=0x801B241Cu; f_801AD61C(c); // 801B2418
L_801B241C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B241C
  c->lr=c->r[0]; // 801B2420
  c->r[1]=c->r[1]+0x00000010u; // 801B2424
  return; // 801B2428
}

// BTA_HhClose
void f_801B242C(Ctx* __restrict c) {
  trace_call(0x801B242Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B242C
  c->r[0]=c->lr; // 801B2430
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2434
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2438
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B243C
  c->r[30]=c->r[3]|c->r[3]; // 801B2440
  c->r[3]=0u+0x00000008u; // 801B2444
  c->lr=0x801B244Cu; f_801A9FA0(c); // 801B2448
  cmps(c,0,(int32_t)c->r[3],0); // 801B244C
  c->r[31]=c->r[3]|c->r[3]; // 801B2450
  if (crb(c,2)) { goto L_801B2478; } // 801B2454
  c->r[4]=0u+0x00000000u; // 801B2458
  c->r[5]=0u+0x00000008u; // 801B245C
  c->lr=0x801B2464u; f_80004688(c); // 801B2460
  c->r[0]=0u+0x00001701u; // 801B2464
  c->r[3]=c->r[31]|c->r[31]; // 801B2468
  W16(c->r[31]+0x00000000u,c->r[0]); // 801B246C
  W16(c->r[31]+0x00000006u,c->r[30]); // 801B2470
  c->lr=0x801B2478u; f_801AD61C(c); // 801B2474
L_801B2478:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2478
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B247C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B2480
  c->lr=c->r[0]; // 801B2484
  c->r[1]=c->r[1]+0x00000010u; // 801B2488
  return; // 801B248C
}

// BTA_HhOpen
void f_801B2490(Ctx* __restrict c) {
  trace_call(0x801B2490u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2490
  c->r[0]=c->lr; // 801B2494
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2498
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B249C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B24A0
  c->r[30]=c->r[5]|c->r[5]; // 801B24A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B24A8
  c->r[29]=c->r[4]|c->r[4]; // 801B24AC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B24B0
  c->r[28]=c->r[3]|c->r[3]; // 801B24B4
  c->r[3]=0u+0x00000010u; // 801B24B8
  c->lr=0x801B24C0u; f_801A9FA0(c); // 801B24BC
  cmps(c,0,(int32_t)c->r[3],0); // 801B24C0
  c->r[31]=c->r[3]|c->r[3]; // 801B24C4
  if (crb(c,2)) { goto L_801B2508; } // 801B24C8
  c->r[4]=0u+0x00000000u; // 801B24CC
  c->r[5]=0u+0x00000010u; // 801B24D0
  c->lr=0x801B24D8u; f_80004688(c); // 801B24D4
  c->r[3]=0u+0x00001700u; // 801B24D8
  c->r[0]=0u+0x000000FFu; // 801B24DC
  W16(c->r[31]+0x00000000u,c->r[3]); // 801B24E0
  c->r[4]=c->r[28]|c->r[28]; // 801B24E4
  c->r[3]=c->r[31]+0x00000008u; // 801B24E8
  W16(c->r[31]+0x00000006u,c->r[0]); // 801B24EC
  W8(c->r[31]+0x0000000Eu,c->r[30]); // 801B24F0
  W8(c->r[31]+0x0000000Fu,c->r[29]); // 801B24F4
  c->lr=0x801B24FCu; f_801AD170(c); // 801B24F8
  c->r[3]=c->r[31]|c->r[31]; // 801B24FC
  c->lr=0x801B2504u; f_801AD61C(c); // 801B2500
  goto L_801B2524; // 801B2504
L_801B2508:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B2508
  cmpu(c,0,c->r[0],0x00000001u); // 801B250C
  if (crb(c,0)) { goto L_801B2524; } // 801B2510
  c->r[4]=0u+0x80330000u; // 801B2514
  c->r[3]=0u+0x00000500u; // 801B2518
  c->r[4]=c->r[4]+0x00001D98u; // 801B251C
  c->lr=0x801B2524u; f_801ACB20(c); // 801B2520
L_801B2524:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2524
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B2528
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B252C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B2530
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B2534
  c->lr=c->r[0]; // 801B2538
  c->r[1]=c->r[1]+0x00000020u; // 801B253C
  return; // 801B2540
}

// BTA_HhSendData
void f_801B2544(Ctx* __restrict c) {
  trace_call(0x801B2544u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2544
  c->r[0]=c->lr; // 801B2548
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B254C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B2550
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B2554
  c->r[30]=c->r[4]|c->r[4]; // 801B2558
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B255C
  c->r[29]=c->r[3]|c->r[3]; // 801B2560
  c->r[3]=0u+0x00000014u; // 801B2564
  c->lr=0x801B256Cu; f_801A9FA0(c); // 801B2568
  cmps(c,0,(int32_t)c->r[3],0); // 801B256C
  c->r[31]=c->r[3]|c->r[3]; // 801B2570
  if (crb(c,2)) { goto L_801B25B8; } // 801B2574
  c->r[4]=0u+0x00000000u; // 801B2578
  c->r[5]=0u+0x00000014u; // 801B257C
  c->lr=0x801B2584u; f_80004688(c); // 801B2580
  c->r[0]=0u+0x00001708u; // 801B2584
  c->r[5]=0u+0x0000000Au; // 801B2588
  W16(c->r[31]+0x00000000u,c->r[0]); // 801B258C
  c->r[4]=0u+0x00000000u; // 801B2590
  c->r[0]=0u+0x00000002u; // 801B2594
  c->r[3]=c->r[31]|c->r[31]; // 801B2598
  W16(c->r[31]+0x00000006u,c->r[29]); // 801B259C
  W8(c->r[31]+0x00000008u,c->r[5]); // 801B25A0
  W16(c->r[31]+0x0000000Cu,c->r[4]); // 801B25A4
  W8(c->r[31]+0x00000009u,c->r[0]); // 801B25A8
  W32(c->r[31]+0x00000010u,c->r[30]); // 801B25AC
  W8(c->r[31]+0x0000000Au,c->r[4]); // 801B25B0
  c->lr=0x801B25B8u; f_801AD61C(c); // 801B25B4
L_801B25B8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B25B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B25BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B25C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B25C4
  c->lr=c->r[0]; // 801B25C8
  c->r[1]=c->r[1]+0x00000020u; // 801B25CC
  return; // 801B25D0
}

// BTA_HhAddDev
void f_801B25D4(Ctx* __restrict c) {
  trace_call(0x801B25D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B25D4
  c->r[0]=c->lr; // 801B25D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B25DC
  c->r[11]=c->r[1]+0x00000020u; // 801B25E0
  c->lr=0x801B25E8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B25E4
  c->r[26]=c->r[3]|c->r[3]; // 801B25E8
  c->r[27]=c->r[4]|c->r[4]; // 801B25EC
  c->r[28]=c->r[5]|c->r[5]; // 801B25F0
  c->r[29]=c->r[6]|c->r[6]; // 801B25F4
  c->r[30]=c->r[7]|c->r[7]; // 801B25F8
  c->r[3]=0u+0x0000001Cu; // 801B25FC
  c->lr=0x801B2604u; f_801A9FA0(c); // 801B2600
  cmps(c,0,(int32_t)c->r[3],0); // 801B2604
  c->r[31]=c->r[3]|c->r[3]; // 801B2608
  if (crb(c,2)) { goto L_801B2664; } // 801B260C
  c->r[4]=0u+0x00000000u; // 801B2610
  c->r[5]=0u+0x0000001Cu; // 801B2614
  c->lr=0x801B261Cu; f_80004688(c); // 801B2618
  c->r[0]=0u+0x0000170Au; // 801B261C
  c->r[5]=0u+0x0000000Bu; // 801B2620
  W16(c->r[31]+0x00000000u,c->r[0]); // 801B2624
  c->r[0]=0u+0x000000FFu; // 801B2628
  c->r[4]=c->r[30]|c->r[30]; // 801B262C
  c->r[3]=c->r[31]+0x00000014u; // 801B2630
  W16(c->r[31]+0x00000010u,c->r[5]); // 801B2634
  c->r[5]=0u+0x00000008u; // 801B2638
  W16(c->r[31]+0x00000006u,c->r[0]); // 801B263C
  W16(c->r[31]+0x0000000Eu,c->r[27]); // 801B2640
  W8(c->r[31]+0x00000012u,c->r[28]); // 801B2644
  W8(c->r[31]+0x00000013u,c->r[29]); // 801B2648
  c->lr=0x801B2650u; f_80004338(c); // 801B264C
  c->r[4]=c->r[26]|c->r[26]; // 801B2650
  c->r[3]=c->r[31]+0x00000008u; // 801B2654
  c->lr=0x801B265Cu; f_801AD170(c); // 801B2658
  c->r[3]=c->r[31]|c->r[31]; // 801B265C
  c->lr=0x801B2664u; f_801AD61C(c); // 801B2660
L_801B2664:;
  c->r[11]=c->r[1]+0x00000020u; // 801B2664
  c->lr=0x801B266Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B2668
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B266C
  c->lr=c->r[0]; // 801B2670
  c->r[1]=c->r[1]+0x00000020u; // 801B2674
  return; // 801B2678
}

// BTA_HhRemoveDev
void f_801B267C(Ctx* __restrict c) {
  trace_call(0x801B267Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B267C
  c->r[0]=c->lr; // 801B2680
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2684
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2688
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B268C
  c->r[30]=c->r[3]|c->r[3]; // 801B2690
  c->r[3]=0u+0x0000001Cu; // 801B2694
  c->lr=0x801B269Cu; f_801A9FA0(c); // 801B2698
  cmps(c,0,(int32_t)c->r[3],0); // 801B269C
  c->r[31]=c->r[3]|c->r[3]; // 801B26A0
  if (crb(c,2)) { goto L_801B26D0; } // 801B26A4
  c->r[4]=0u+0x00000000u; // 801B26A8
  c->r[5]=0u+0x0000001Cu; // 801B26AC
  c->lr=0x801B26B4u; f_80004688(c); // 801B26B0
  c->r[3]=0u+0x0000170Au; // 801B26B4
  c->r[0]=0u+0x0000000Cu; // 801B26B8
  W16(c->r[31]+0x00000000u,c->r[3]); // 801B26BC
  c->r[3]=c->r[31]|c->r[31]; // 801B26C0
  W16(c->r[31]+0x00000010u,c->r[0]); // 801B26C4
  W16(c->r[31]+0x00000006u,c->r[30]); // 801B26C8
  c->lr=0x801B26D0u; f_801AD61C(c); // 801B26CC
L_801B26D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B26D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B26D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B26D8
  c->lr=c->r[0]; // 801B26DC
  c->r[1]=c->r[1]+0x00000010u; // 801B26E0
  return; // 801B26E4
}

// BTA_HhGetAclQueueInfo
void f_801B26E8(Ctx* __restrict c) {
  trace_call(0x801B26E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B26E8
  c->r[0]=c->lr; // 801B26EC
  c->r[3]=0u+0x00000008u; // 801B26F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B26F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B26F8
  c->lr=0x801B2700u; f_801A9FA0(c); // 801B26FC
  cmps(c,0,(int32_t)c->r[3],0); // 801B2700
  c->r[31]=c->r[3]|c->r[3]; // 801B2704
  if (crb(c,2)) { goto L_801B2728; } // 801B2708
  c->r[4]=0u+0x00000000u; // 801B270C
  c->r[5]=0u+0x00000008u; // 801B2710
  c->lr=0x801B2718u; f_80004688(c); // 801B2714
  c->r[0]=0u+0x0000170Eu; // 801B2718
  c->r[3]=c->r[31]|c->r[31]; // 801B271C
  W16(c->r[31]+0x00000000u,c->r[0]); // 801B2720
  c->lr=0x801B2728u; f_801AD61C(c); // 801B2724
L_801B2728:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2728
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B272C
  c->lr=c->r[0]; // 801B2730
  c->r[1]=c->r[1]+0x00000010u; // 801B2734
  return; // 801B2738
}

// bta_hh_sm_execute
void f_801B273C(Ctx* __restrict c) {
  trace_call(0x801B273Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B273C
  c->r[0]=c->lr; // 801B2740
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B2744
  c->r[11]=c->r[1]+0x00000040u; // 801B2748
  c->lr=0x801B2750u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B274C
  c->r[31]=0u+0x80330000u; // 801B2750
  c->r[27]=c->r[3]|c->r[3]; // 801B2754
  c->r[28]=c->r[4]|c->r[4]; // 801B2758
  c->r[29]=c->r[5]|c->r[5]; // 801B275C
  c->r[31]=c->r[31]+0x00001DC8u; // 801B2760
  c->r[3]=c->r[1]+0x00000008u; // 801B2764
  c->r[30]=0u+0x00000000u; // 801B2768
  c->r[4]=0u+0x00000000u; // 801B276C
  c->r[5]=0u+0x00000020u; // 801B2770
  c->lr=0x801B2778u; f_80004688(c); // 801B2774
  cmps(c,0,(int32_t)c->r[27],0); // 801B2778
  if (!crb(c,2)) { goto L_801B28D4; } // 801B277C
  c->r[3]=0u+0x803C0000u; // 801B2780
  c->r[3]=c->r[3]+0x00007EE8u; // 801B2784
  c->r[0]=R32(c->r[3]+0x00000224u); // 801B2788
  cmps(c,0,(int32_t)c->r[0],0); // 801B278C
  if (crb(c,2)) { goto L_801B2A78; } // 801B2790
  cmps(c,0,(int32_t)c->r[28],5896); // 801B2794
  if (crb(c,2)) { goto L_801B2828; } // 801B2798
  if (!crb(c,0)) { goto L_801B27B8; } // 801B279C
  cmps(c,0,(int32_t)c->r[28],5889); // 801B27A0
  if (crb(c,2)) { goto L_801B287C; } // 801B27A4
  if (!crb(c,0)) { goto L_801B2894; } // 801B27A8
  cmps(c,0,(int32_t)c->r[28],5888); // 801B27AC
  if (!crb(c,0)) { goto L_801B27C4; } // 801B27B0
  goto L_801B2894; // 801B27B4
L_801B27B8:;
  cmps(c,0,(int32_t)c->r[28],5898); // 801B27B8
  if (crb(c,2)) { goto L_801B27E8; } // 801B27BC
  goto L_801B2894; // 801B27C0
L_801B27C4:;
  c->r[3]=c->r[1]+0x00000008u; // 801B27C4
  c->r[4]=c->r[29]+0x00000008u; // 801B27C8
  c->r[30]=0u+0x00000002u; // 801B27CC
  c->lr=0x801B27D4u; f_801AD170(c); // 801B27D0
  c->r[3]=0u+0x00000009u; // 801B27D4
  c->r[0]=0u+0x000000FFu; // 801B27D8
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801B27DC
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801B27E0
  goto L_801B28B0; // 801B27E4
L_801B27E8:;
  c->r[30]=R16(c->r[29]+0x00000010u); // 801B27E8
  cmpu(c,0,c->r[30],0x0000000Bu); // 801B27EC
  if (!crb(c,2)) { goto L_801B2814; } // 801B27F0
  c->r[3]=c->r[1]+0x00000008u; // 801B27F4
  c->r[4]=c->r[29]+0x00000008u; // 801B27F8
  c->lr=0x801B2800u; f_801AD170(c); // 801B27FC
  c->r[3]=0u+0x00000009u; // 801B2800
  c->r[0]=0u+0x000000FFu; // 801B2804
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801B2808
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801B280C
  goto L_801B28B0; // 801B2810
L_801B2814:;
  c->r[0]=0u+0x0000000Du; // 801B2814
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801B2818
  c->r[0]=R16(c->r[29]+0x00000006u); // 801B281C
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801B2820
  goto L_801B28B0; // 801B2824
L_801B2828:;
  c->r[30]=R8(c->r[29]+0x00000008u); // 801B2828
  cmpu(c,0,c->r[30],0x00000007u); // 801B282C
  if (crb(c,2)) { goto L_801B2844; } // 801B2830
  cmpu(c,0,c->r[30],0x00000005u); // 801B2834
  if (crb(c,2)) { goto L_801B2844; } // 801B2838
  cmpu(c,0,c->r[30],0x00000009u); // 801B283C
  if (!crb(c,2)) { goto L_801B2858; } // 801B2840
L_801B2844:;
  c->r[0]=0u+0x0000000Du; // 801B2844
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B2848
  c->r[0]=R16(c->r[29]+0x00000006u); // 801B284C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B2850
  goto L_801B28B0; // 801B2854
L_801B2858:;
  cmpu(c,0,c->r[30],0x0000000Au); // 801B2858
  if (crb(c,2)) { goto L_801B28B0; } // 801B285C
  cmpu(c,0,c->r[30],0x00000001u); // 801B2860
  if (crb(c,2)) { goto L_801B28B0; } // 801B2864
  c->r[3]=R16(c->r[29]+0x00000006u); // 801B2868
  c->r[0]=0u+0x0000000Du; // 801B286C
  W8(c->r[1]+0x00000009u,c->r[3]); // 801B2870
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B2874
  goto L_801B28B0; // 801B2878
L_801B287C:;
  c->r[0]=0u+0x0000000Du; // 801B287C
  c->r[30]=0u+0x00000003u; // 801B2880
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B2884
  c->r[0]=R16(c->r[29]+0x00000006u); // 801B2888
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B288C
  goto L_801B28B0; // 801B2890
L_801B2894:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B2894
  cmpu(c,0,c->r[0],0x00000001u); // 801B2898
  if (crb(c,0)) { goto L_801B28B0; } // 801B289C
  c->r[5]=R16(c->r[29]+0x00000006u); // 801B28A0
  c->r[4]=c->r[31]+0x00000000u; // 801B28A4
  c->r[3]=0u+0x00000500u; // 801B28A8
  c->lr=0x801B28B0u; f_801ACB38(c); // 801B28AC
L_801B28B0:;
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; cr0(c,c->r[3]); // 801B28B0
  if (crb(c,2)) { goto L_801B2A78; } // 801B28B4
  c->r[5]=0u+0x803C0000u; // 801B28B8
  c->r[4]=c->r[1]+0x00000008u; // 801B28BC
  c->r[5]=c->r[5]+0x00007EE8u; // 801B28C0
  c->r[12]=R32(c->r[5]+0x00000224u); // 801B28C4
  c->ctr=c->r[12]; // 801B28C8
  if (true) { c->lr=0x801B28D0u; dispatch(c,c->ctr); } // 801B28CC
  goto L_801B2A78; // 801B28D0
L_801B28D4:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B28D4
  c->r[30]=R8(c->r[27]+0x0000001Cu); // 801B28D8
  cmpu(c,0,c->r[0],0x00000004u); // 801B28DC
  if (crb(c,0)) { goto L_801B2950; } // 801B28E0
  cmps(c,0,(int32_t)c->r[30],2); // 801B28E4
  if (crb(c,2)) { goto L_801B291C; } // 801B28E8
  if (!crb(c,0)) { goto L_801B2900; } // 801B28EC
  cmps(c,0,(int32_t)c->r[30],0); // 801B28F0
  if (crb(c,2)) { goto L_801B290C; } // 801B28F4
  if (!crb(c,0)) { goto L_801B2914; } // 801B28F8
  goto L_801B292C; // 801B28FC
L_801B2900:;
  cmps(c,0,(int32_t)c->r[30],4); // 801B2900
  if (!crb(c,0)) { goto L_801B292C; } // 801B2904
  goto L_801B2924; // 801B2908
L_801B290C:;
  c->r[26]=c->r[31]+0x0000001Cu; // 801B290C
  goto L_801B2930; // 801B2910
L_801B2914:;
  c->r[26]=c->r[31]+0x0000002Cu; // 801B2914
  goto L_801B2930; // 801B2918
L_801B291C:;
  c->r[26]=c->r[31]+0x0000003Cu; // 801B291C
  goto L_801B2930; // 801B2920
L_801B2924:;
  c->r[26]=c->r[31]+0x00000050u; // 801B2924
  goto L_801B2930; // 801B2928
L_801B292C:;
  c->r[26]=c->r[31]+0x00000060u; // 801B292C
L_801B2930:;
  c->r[3]=c->r[28]|c->r[28]; // 801B2930
  c->lr=0x801B2938u; f_801B2BDC(c); // 801B2934
  c->r[7]=c->r[3]|c->r[3]; // 801B2938
  c->r[5]=c->r[30]|c->r[30]; // 801B293C
  c->r[6]=c->r[26]|c->r[26]; // 801B2940
  c->r[4]=c->r[31]+0x00000078u; // 801B2944
  c->r[3]=0u+0x00000503u; // 801B2948
  c->lr=0x801B2950u; f_801ACB68(c); // 801B294C
L_801B2950:;
  c->r[4]=R8(c->r[27]+0x0000001Cu); // 801B2950
  c->r[3]=0u+0x802E0000u; // 801B2954
  c->r[3]=c->r[3]+0x000012F8u; // 801B2958
  c->r[28]=rotl(c->r[28],0)&0x000000FFu; // 801B295C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801B2960
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B2964
  c->r[4]=rotl(c->r[28],1)&0xFFFFFFFEu; // 801B2968
  c->r[5]=R32(c->r[3]+c->r[0]); // 801B296C
  c->r[3]=c->r[5]+c->r[4]; // 801B2970
  c->r[0]=R8(c->r[3]+0x00000001u); // 801B2974
  W8(c->r[27]+0x0000001Cu,c->r[0]); // 801B2978
  c->r[0]=R8(c->r[5]+c->r[4]); // 801B297C
  cmpu(c,0,c->r[0],0x0000000Cu); // 801B2980
  if (crb(c,2)) { goto L_801B29A8; } // 801B2984
  c->r[4]=0u+0x802E0000u; // 801B2988
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801B298C
  c->r[4]=c->r[4]+0x00001280u; // 801B2990
  c->r[3]=c->r[27]|c->r[27]; // 801B2994
  c->r[12]=R32(c->r[4]+c->r[0]); // 801B2998
  c->r[4]=c->r[29]|c->r[29]; // 801B299C
  c->ctr=c->r[12]; // 801B29A0
  if (true) { c->lr=0x801B29A8u; dispatch(c,c->ctr); } // 801B29A4
L_801B29A8:;
  c->r[3]=R8(c->r[27]+0x0000001Cu); // 801B29A8
  cmpu(c,0,c->r[30],c->r[3]); // 801B29AC
  if (crb(c,2)) { goto L_801B2A78; } // 801B29B0
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B29B4
  cmpu(c,0,c->r[0],0x00000005u); // 801B29B8
  if (crb(c,0)) { goto L_801B2A78; } // 801B29BC
  cmps(c,0,(int32_t)c->r[30],2); // 801B29C0
  if (crb(c,2)) { goto L_801B29F8; } // 801B29C4
  if (!crb(c,0)) { goto L_801B29DC; } // 801B29C8
  cmps(c,0,(int32_t)c->r[30],0); // 801B29CC
  if (crb(c,2)) { goto L_801B29E8; } // 801B29D0
  if (!crb(c,0)) { goto L_801B29F0; } // 801B29D4
  goto L_801B2A08; // 801B29D8
L_801B29DC:;
  cmps(c,0,(int32_t)c->r[30],4); // 801B29DC
  if (!crb(c,0)) { goto L_801B2A08; } // 801B29E0
  goto L_801B2A00; // 801B29E4
L_801B29E8:;
  c->r[26]=c->r[31]+0x0000001Cu; // 801B29E8
  goto L_801B2A0C; // 801B29EC
L_801B29F0:;
  c->r[26]=c->r[31]+0x0000002Cu; // 801B29F0
  goto L_801B2A0C; // 801B29F4
L_801B29F8:;
  c->r[26]=c->r[31]+0x0000003Cu; // 801B29F8
  goto L_801B2A0C; // 801B29FC
L_801B2A00:;
  c->r[26]=c->r[31]+0x00000050u; // 801B2A00
  goto L_801B2A0C; // 801B2A04
L_801B2A08:;
  c->r[26]=c->r[31]+0x00000060u; // 801B2A08
L_801B2A0C:;
  cmps(c,0,(int32_t)c->r[3],2); // 801B2A0C
  if (crb(c,2)) { goto L_801B2A44; } // 801B2A10
  if (!crb(c,0)) { goto L_801B2A28; } // 801B2A14
  cmps(c,0,(int32_t)c->r[3],0); // 801B2A18
  if (crb(c,2)) { goto L_801B2A34; } // 801B2A1C
  if (!crb(c,0)) { goto L_801B2A3C; } // 801B2A20
  goto L_801B2A54; // 801B2A24
L_801B2A28:;
  cmps(c,0,(int32_t)c->r[3],4); // 801B2A28
  if (!crb(c,0)) { goto L_801B2A54; } // 801B2A2C
  goto L_801B2A4C; // 801B2A30
L_801B2A34:;
  c->r[27]=c->r[31]+0x0000001Cu; // 801B2A34
  goto L_801B2A58; // 801B2A38
L_801B2A3C:;
  c->r[27]=c->r[31]+0x0000002Cu; // 801B2A3C
  goto L_801B2A58; // 801B2A40
L_801B2A44:;
  c->r[27]=c->r[31]+0x0000003Cu; // 801B2A44
  goto L_801B2A58; // 801B2A48
L_801B2A4C:;
  c->r[27]=c->r[31]+0x00000050u; // 801B2A4C
  goto L_801B2A58; // 801B2A50
L_801B2A54:;
  c->r[27]=c->r[31]+0x00000060u; // 801B2A54
L_801B2A58:;
  c->r[3]=c->r[28]|c->r[28]; // 801B2A58
  c->lr=0x801B2A60u; f_801B2BDC(c); // 801B2A5C
  c->r[7]=c->r[3]|c->r[3]; // 801B2A60
  c->r[5]=c->r[26]|c->r[26]; // 801B2A64
  c->r[6]=c->r[27]|c->r[27]; // 801B2A68
  c->r[4]=c->r[31]+0x000000ACu; // 801B2A6C
  c->r[3]=0u+0x00000504u; // 801B2A70
  c->lr=0x801B2A78u; f_801ACB68(c); // 801B2A74
L_801B2A78:;
  c->r[11]=c->r[1]+0x00000040u; // 801B2A78
  c->lr=0x801B2A80u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B2A7C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B2A80
  c->lr=c->r[0]; // 801B2A84
  c->r[1]=c->r[1]+0x00000040u; // 801B2A88
  return; // 801B2A8C
}

// bta_hh_hdl_event
void f_801B2A90(Ctx* __restrict c) {
  trace_call(0x801B2A90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2A90
  c->r[0]=c->lr; // 801B2A94
  c->r[6]=0u+0x00000010u; // 801B2A98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2A9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2AA0
  c->r[31]=0u+0x00000000u; // 801B2AA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B2AA8
  c->r[30]=c->r[3]|c->r[3]; // 801B2AAC
  c->r[0]=R16(c->r[3]+0x00000000u); // 801B2AB0
  cmps(c,0,(int32_t)c->r[0],5902); // 801B2AB4
  if (crb(c,2)) { goto L_801B2AF4; } // 801B2AB8
  if (!crb(c,0)) { goto L_801B2AD0; } // 801B2ABC
  cmps(c,0,(int32_t)c->r[0],5900); // 801B2AC0
  if (crb(c,2)) { goto L_801B2ADC; } // 801B2AC4
  if (!crb(c,0)) { goto L_801B2AE4; } // 801B2AC8
  goto L_801B2AFC; // 801B2ACC
L_801B2AD0:;
  cmps(c,0,(int32_t)c->r[0],5904); // 801B2AD0
  if (!crb(c,0)) { goto L_801B2AFC; } // 801B2AD4
  goto L_801B2AEC; // 801B2AD8
L_801B2ADC:;
  c->lr=0x801B2AE0u; f_801B0C24(c); // 801B2ADC
  goto L_801B2BC0; // 801B2AE0
L_801B2AE4:;
  c->lr=0x801B2AE8u; f_801B0D98(c); // 801B2AE4
  goto L_801B2BC0; // 801B2AE8
L_801B2AEC:;
  c->lr=0x801B2AF0u; f_801B0E9C(c); // 801B2AEC
  goto L_801B2BC0; // 801B2AF0
L_801B2AF4:;
  c->lr=0x801B2AF8u; f_801B1DF0(c); // 801B2AF4
  goto L_801B2BC0; // 801B2AF8
L_801B2AFC:;
  cmpu(c,0,c->r[0],0x00001700u); // 801B2AFC
  if (!crb(c,2)) { goto L_801B2B14; } // 801B2B00
  c->r[3]=c->r[3]+0x00000008u; // 801B2B04
  c->lr=0x801B2B0Cu; f_801B2C90(c); // 801B2B08
  c->r[6]=c->r[3]|c->r[3]; // 801B2B0C
  goto L_801B2B6C; // 801B2B10
L_801B2B14:;
  cmpu(c,0,c->r[0],0x0000170Au); // 801B2B14
  if (!crb(c,2)) { goto L_801B2B50; } // 801B2B18
  c->r[0]=R16(c->r[3]+0x00000010u); // 801B2B1C
  cmpu(c,0,c->r[0],0x0000000Bu); // 801B2B20
  if (!crb(c,2)) { goto L_801B2B38; } // 801B2B24
  c->r[3]=c->r[3]+0x00000008u; // 801B2B28
  c->lr=0x801B2B30u; f_801B2C90(c); // 801B2B2C
  c->r[6]=c->r[3]|c->r[3]; // 801B2B30
  goto L_801B2B6C; // 801B2B34
L_801B2B38:;
  c->r[4]=0u+0x803C0000u; // 801B2B38
  c->r[0]=R16(c->r[3]+0x00000006u); // 801B2B3C
  c->r[4]=c->r[4]+0x00007EE8u; // 801B2B40
  c->r[3]=c->r[4]+c->r[0]; // 801B2B44
  c->r[6]=R8(c->r[3]+0x00000214u); // 801B2B48
  goto L_801B2B6C; // 801B2B4C
L_801B2B50:;
  c->r[0]=R16(c->r[3]+0x00000006u); // 801B2B50
  cmpu(c,0,c->r[0],0x00000010u); // 801B2B54
  if (!crb(c,0)) { goto L_801B2B6C; } // 801B2B58
  c->r[3]=0u+0x803C0000u; // 801B2B5C
  c->r[3]=c->r[3]+0x00007EE8u; // 801B2B60
  c->r[3]=c->r[3]+c->r[0]; // 801B2B64
  c->r[6]=R8(c->r[3]+0x00000214u); // 801B2B68
L_801B2B6C:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801B2B6C
  cmpu(c,0,c->r[0],0x00000010u); // 801B2B70
  if (crb(c,2)) { goto L_801B2B8C; } // 801B2B74
  c->r[3]=0u+0x803C0000u; // 801B2B78
  c->r[0]=rotl(c->r[6],5)&0x00001FE0u; // 801B2B7C
  c->r[3]=c->r[3]+0x00007EE8u; // 801B2B80
  c->r[3]=c->r[3]+c->r[0]; // 801B2B84
  c->r[31]=c->r[3]+0x00000010u; // 801B2B88
L_801B2B8C:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B2B8C
  cmpu(c,0,c->r[0],0x00000005u); // 801B2B90
  if (crb(c,0)) { goto L_801B2BB0; } // 801B2B94
  c->r[4]=0u+0x80330000u; // 801B2B98
  c->r[5]=R16(c->r[30]+0x00000006u); // 801B2B9C
  c->r[4]=c->r[4]+0x00001EA4u; // 801B2BA0
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 801B2BA4
  c->r[3]=0u+0x00000504u; // 801B2BA8
  c->lr=0x801B2BB0u; f_801ACB50(c); // 801B2BAC
L_801B2BB0:;
  c->r[4]=R16(c->r[30]+0x00000000u); // 801B2BB0
  c->r[3]=c->r[31]|c->r[31]; // 801B2BB4
  c->r[5]=c->r[30]|c->r[30]; // 801B2BB8
  c->lr=0x801B2BC0u; f_801B273C(c); // 801B2BBC
L_801B2BC0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2BC0
  c->r[3]=0u+0x00000001u; // 801B2BC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B2BC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2BCC
  c->lr=c->r[0]; // 801B2BD0
  c->r[1]=c->r[1]+0x00000010u; // 801B2BD4
  return; // 801B2BD8
}

// bta_hh_evt_code
void f_801B2BDC(Ctx* __restrict c) {
  trace_call(0x801B2BDCu);
  c->r[0]=c->r[3]+0xFFFFE900u; // 801B2BDC
  c->r[4]=0u+0x80330000u; // 801B2BE0
  cmpu(c,0,c->r[0],0x0000000Fu); // 801B2BE4
  c->r[4]=c->r[4]+0x00001DC8u; // 801B2BE8
  if (crb(c,1)) { goto L_801B2C88; } // 801B2BEC
  c->r[3]=0u+0x80330000u; // 801B2BF0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B2BF4
  c->r[3]=c->r[3]+0x00002068u; // 801B2BF8
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B2BFC
  c->ctr=c->r[3]; // 801B2C00
  if (true) { switch (c->ctr) { case 0x801B2C08u: goto L_801B2C08; case 0x801B2C10u: goto L_801B2C10; case 0x801B2C18u: goto L_801B2C18; case 0x801B2C20u: goto L_801B2C20; case 0x801B2C28u: goto L_801B2C28; case 0x801B2C30u: goto L_801B2C30; case 0x801B2C38u: goto L_801B2C38; case 0x801B2C40u: goto L_801B2C40; case 0x801B2C48u: goto L_801B2C48; case 0x801B2C50u: goto L_801B2C50; case 0x801B2C58u: goto L_801B2C58; case 0x801B2C60u: goto L_801B2C60; case 0x801B2C68u: goto L_801B2C68; case 0x801B2C70u: goto L_801B2C70; case 0x801B2C78u: goto L_801B2C78; case 0x801B2C80u: goto L_801B2C80; default: break; } dispatch(c,c->ctr); return; } // 801B2C04
L_801B2C08:;
  c->r[3]=c->r[4]+0x00000108u; // 801B2C08
  return; // 801B2C0C
L_801B2C10:;
  c->r[3]=c->r[4]+0x00000120u; // 801B2C10
  return; // 801B2C14
L_801B2C18:;
  c->r[3]=c->r[4]+0x00000138u; // 801B2C18
  return; // 801B2C1C
L_801B2C20:;
  c->r[3]=c->r[4]+0x0000014Cu; // 801B2C20
  return; // 801B2C24
L_801B2C28:;
  c->r[3]=c->r[4]+0x00000164u; // 801B2C28
  return; // 801B2C2C
L_801B2C30:;
  c->r[3]=c->r[4]+0x00000178u; // 801B2C30
  return; // 801B2C34
L_801B2C38:;
  c->r[3]=c->r[4]+0x00000190u; // 801B2C38
  return; // 801B2C3C
L_801B2C40:;
  c->r[3]=c->r[4]+0x000001A8u; // 801B2C40
  return; // 801B2C44
L_801B2C48:;
  c->r[3]=c->r[4]+0x000001BCu; // 801B2C48
  return; // 801B2C4C
L_801B2C50:;
  c->r[3]=c->r[4]+0x000001D4u; // 801B2C50
  return; // 801B2C54
L_801B2C58:;
  c->r[3]=c->r[4]+0x000001F0u; // 801B2C58
  return; // 801B2C5C
L_801B2C60:;
  c->r[3]=c->r[4]+0x00000204u; // 801B2C60
  return; // 801B2C64
L_801B2C68:;
  c->r[3]=c->r[4]+0x0000021Cu; // 801B2C68
  return; // 801B2C6C
L_801B2C70:;
  c->r[3]=c->r[4]+0x00000238u; // 801B2C70
  return; // 801B2C74
L_801B2C78:;
  c->r[3]=c->r[4]+0x00000250u; // 801B2C78
  return; // 801B2C7C
L_801B2C80:;
  c->r[3]=c->r[4]+0x00000268u; // 801B2C80
  return; // 801B2C84
L_801B2C88:;
  c->r[3]=c->r[4]+0x00000284u; // 801B2C88
  return; // 801B2C8C
}

// bta_hh_find_cb
void f_801B2C90(Ctx* __restrict c) {
  trace_call(0x801B2C90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2C90
  c->r[0]=c->lr; // 801B2C94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2C98
  c->r[11]=c->r[1]+0x00000020u; // 801B2C9C
  c->lr=0x801B2CA4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B2CA0
  c->r[31]=0u+0x803C0000u; // 801B2CA4
  c->r[30]=0u+0x80330000u; // 801B2CA8
  c->r[27]=c->r[3]|c->r[3]; // 801B2CAC
  c->r[28]=0u+0x00000000u; // 801B2CB0
  c->r[30]=c->r[30]+0x000020A8u; // 801B2CB4
  c->r[31]=c->r[31]+0x00007EE8u; // 801B2CB8
L_801B2CBC:;
  c->r[29]=rotl(c->r[28],5)&0x00001FE0u; // 801B2CBC
  c->r[3]=c->r[27]|c->r[27]; // 801B2CC0
  c->r[4]=c->r[31]+c->r[29]; // 801B2CC4
  c->r[4]=c->r[4]+0x00000018u; // 801B2CC8
  c->lr=0x801B2CD0u; f_801AD1A4(c); // 801B2CCC
  cmps(c,0,(int32_t)c->r[3],0); // 801B2CD0
  if (!crb(c,2)) { goto L_801B2D18; } // 801B2CD4
  c->r[3]=c->r[27]|c->r[27]; // 801B2CD8
  c->r[4]=c->r[2]+0xFFFFA2D0u; // 801B2CDC
  c->lr=0x801B2CE4u; f_801AD1A4(c); // 801B2CE0
  cmps(c,0,(int32_t)c->r[3],0); // 801B2CE4
  if (crb(c,2)) { goto L_801B2D18; } // 801B2CE8
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B2CEC
  cmpu(c,0,c->r[0],0x00000005u); // 801B2CF0
  if (crb(c,0)) { goto L_801B2D10; } // 801B2CF4
  c->r[3]=c->r[31]+c->r[29]; // 801B2CF8
  c->r[4]=c->r[30]+0x00000000u; // 801B2CFC
  c->r[6]=R8(c->r[3]+0x00000026u); // 801B2D00
  c->r[5]=rotl(c->r[28],0)&0x000000FFu; // 801B2D04
  c->r[3]=0u+0x00000504u; // 801B2D08
  c->lr=0x801B2D10u; f_801ACB50(c); // 801B2D0C
L_801B2D10:;
  c->r[3]=c->r[28]|c->r[28]; // 801B2D10
  goto L_801B2DB4; // 801B2D14
L_801B2D18:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B2D18
  cmpu(c,0,c->r[0],0x00000005u); // 801B2D1C
  if (crb(c,0)) { goto L_801B2D44; } // 801B2D20
  c->r[8]=c->r[31]+c->r[29]; // 801B2D24
  c->r[4]=c->r[30]+0x00000024u; // 801B2D28
  c->r[5]=R8(c->r[8]+0x00000028u); // 801B2D2C
  c->r[6]=rotl(c->r[28],0)&0x000000FFu; // 801B2D30
  c->r[7]=R8(c->r[8]+0x00000026u); // 801B2D34
  c->r[3]=0u+0x00000504u; // 801B2D38
  c->r[8]=R8(c->r[8]+0x0000002Cu); // 801B2D3C
  c->lr=0x801B2D44u; f_801ACB80(c); // 801B2D40
L_801B2D44:;
  c->r[28]=c->r[28]+0x00000001u; // 801B2D44
  cmpu(c,0,c->r[28],0x00000010u); // 801B2D48
  if (crb(c,0)) { IRQCHK(c); goto L_801B2CBC; } // 801B2D4C
  c->r[4]=0u+0x803C0000u; // 801B2D50
  c->r[0]=0u+0x00000010u; // 801B2D54
  c->r[4]=c->r[4]+0x00007EE8u; // 801B2D58
  c->r[29]=0u+0x00000000u; // 801B2D5C
  c->ctr=c->r[0]; // 801B2D60
L_801B2D64:;
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 801B2D64
  c->r[3]=c->r[4]+c->r[0]; // 801B2D68
  c->r[0]=R8(c->r[3]+0x00000028u); // 801B2D6C
  cmps(c,0,(int32_t)c->r[0],0); // 801B2D70
  if (!crb(c,2)) { goto L_801B2D88; } // 801B2D74
  c->r[4]=c->r[27]|c->r[27]; // 801B2D78
  c->r[3]=c->r[3]+0x00000018u; // 801B2D7C
  c->lr=0x801B2D84u; f_801AD170(c); // 801B2D80
  goto L_801B2D90; // 801B2D84
L_801B2D88:;
  c->r[29]=c->r[29]+0x00000001u; // 801B2D88
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B2D64; } // 801B2D8C
L_801B2D90:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B2D90
  cmpu(c,0,c->r[0],0x00000005u); // 801B2D94
  if (crb(c,0)) { goto L_801B2DB0; } // 801B2D98
  c->r[4]=c->r[30]+0x00000058u; // 801B2D9C
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 801B2DA0
  c->r[3]=0u+0x00000504u; // 801B2DA4
  c->r[6]=0u+0x00000010u; // 801B2DA8
  c->lr=0x801B2DB0u; f_801ACB50(c); // 801B2DAC
L_801B2DB0:;
  c->r[3]=c->r[29]|c->r[29]; // 801B2DB0
L_801B2DB4:;
  c->r[11]=c->r[1]+0x00000020u; // 801B2DB4
  c->lr=0x801B2DBCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B2DB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2DBC
  c->lr=c->r[0]; // 801B2DC0
  c->r[1]=c->r[1]+0x00000020u; // 801B2DC4
  return; // 801B2DC8
}

// bta_hh_clean_up_kdev
void f_801B2DCC(Ctx* __restrict c) {
  trace_call(0x801B2DCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2DCC
  c->r[0]=c->lr; // 801B2DD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2DD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2DD8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B2DDC
  c->r[30]=c->r[3]|c->r[3]; // 801B2DE0
  c->r[5]=R8(c->r[3]+0x00000016u); // 801B2DE4
  cmpu(c,0,c->r[5],0x000000FFu); // 801B2DE8
  if (crb(c,2)) { goto L_801B2E04; } // 801B2DEC
  c->r[4]=0u+0x803C0000u; // 801B2DF0
  c->r[0]=0u+0x00000010u; // 801B2DF4
  c->r[4]=c->r[4]+0x00007EE8u; // 801B2DF8
  c->r[4]=c->r[4]+c->r[5]; // 801B2DFC
  W8(c->r[4]+0x00000214u,c->r[0]); // 801B2E00
L_801B2E04:;
  c->r[31]=R8(c->r[3]+0x00000012u); // 801B2E04
  c->r[3]=c->r[3]+0x00000004u; // 801B2E08
  c->lr=0x801B2E10u; f_801AD8BC(c); // 801B2E0C
  c->r[3]=c->r[30]|c->r[30]; // 801B2E10
  c->r[4]=0u+0x00000000u; // 801B2E14
  c->r[5]=0u+0x00000020u; // 801B2E18
  c->lr=0x801B2E20u; f_80004688(c); // 801B2E1C
  c->r[3]=0u+0x00000001u; // 801B2E20
  c->r[0]=0u+0x000000FFu; // 801B2E24
  W8(c->r[30]+0x00000012u,c->r[31]); // 801B2E28
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 801B2E2C
  W8(c->r[30]+0x00000016u,c->r[0]); // 801B2E30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2E34
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B2E38
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2E3C
  c->lr=c->r[0]; // 801B2E40
  c->r[1]=c->r[1]+0x00000010u; // 801B2E44
  return; // 801B2E48
}

// bta_hh_add_device_to_list
void f_801B2E4C(Ctx* __restrict c) {
  trace_call(0x801B2E4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2E4C
  c->r[0]=c->lr; // 801B2E50
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2E54
  c->r[11]=c->r[1]+0x00000020u; // 801B2E58
  c->lr=0x801B2E60u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B2E5C
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B2E60
  c->r[26]=c->r[3]|c->r[3]; // 801B2E64
  c->r[27]=c->r[4]|c->r[4]; // 801B2E68
  c->r[28]=c->r[5]|c->r[5]; // 801B2E6C
  cmpu(c,0,c->r[0],0x00000005u); // 801B2E70
  c->r[29]=c->r[6]|c->r[6]; // 801B2E74
  c->r[30]=c->r[7]|c->r[7]; // 801B2E78
  c->r[31]=c->r[8]|c->r[8]; // 801B2E7C
  if (crb(c,0)) { goto L_801B2E98; } // 801B2E80
  c->r[4]=0u+0x80330000u; // 801B2E84
  c->r[5]=c->r[30]|c->r[30]; // 801B2E88
  c->r[4]=c->r[4]+0x0000212Cu; // 801B2E8C
  c->r[3]=0u+0x00000504u; // 801B2E90
  c->lr=0x801B2E98u; f_801ACB38(c); // 801B2E94
L_801B2E98:;
  c->r[0]=0u+0x00000001u; // 801B2E98
  cmps(c,0,(int32_t)c->r[29],0); // 801B2E9C
  W8(c->r[26]+0x00000016u,c->r[27]); // 801B2EA0
  W8(c->r[26]+0x00000018u,c->r[0]); // 801B2EA4
  W16(c->r[26]+0x0000000Eu,c->r[28]); // 801B2EA8
  W8(c->r[26]+0x00000013u,c->r[30]); // 801B2EAC
  W8(c->r[26]+0x00000015u,c->r[31]); // 801B2EB0
  if (crb(c,2)) { goto L_801B2EF0; } // 801B2EB4
  c->r[3]=c->r[26]+0x00000004u; // 801B2EB8
  c->lr=0x801B2EC0u; f_801AD8BC(c); // 801B2EBC
  c->r[3]=R16(c->r[29]+0x00000000u); // 801B2EC0
  cmps(c,0,(int32_t)c->r[3],0); // 801B2EC4
  if (crb(c,2)) { goto L_801B2EF0; } // 801B2EC8
  c->lr=0x801B2ED0u; f_801A9FA0(c); // 801B2ECC
  cmps(c,0,(int32_t)c->r[3],0); // 801B2ED0
  W32(c->r[26]+0x00000004u,c->r[3]); // 801B2ED4
  if (crb(c,2)) { goto L_801B2EF0; } // 801B2ED8
  c->r[0]=R16(c->r[29]+0x00000000u); // 801B2EDC
  W16(c->r[26]+0x00000000u,c->r[0]); // 801B2EE0
  c->r[4]=R32(c->r[29]+0x00000004u); // 801B2EE4
  c->r[5]=R16(c->r[29]+0x00000000u); // 801B2EE8
  c->lr=0x801B2EF0u; f_80004338(c); // 801B2EEC
L_801B2EF0:;
  c->r[11]=c->r[1]+0x00000020u; // 801B2EF0
  c->lr=0x801B2EF8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B2EF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2EF8
  c->lr=c->r[0]; // 801B2EFC
  c->r[1]=c->r[1]+0x00000020u; // 801B2F00
  return; // 801B2F04
}

// bta_hh_tod_spt
void f_801B2F08(Ctx* __restrict c) {
  trace_call(0x801B2F08u);
  c->r[7]=R32(c->r[13]+0xFFFF9458u); // 801B2F08
  c->r[9]=rotl(c->r[4],30)&0x0000003Fu; // 801B2F0C
  c->r[8]=0u+0x00000000u; // 801B2F10
  c->r[5]=R8(c->r[7]+0x00000000u); // 801B2F14
  goto L_801B2F48; // 801B2F18
L_801B2F1C:;
  c->r[4]=R32(c->r[7]+0x00000004u); // 801B2F1C
  c->r[6]=rotl(c->r[8],1)&0x000001FEu; // 801B2F20
  c->r[0]=R8(c->r[4]+c->r[6]); // 801B2F24
  cmpu(c,0,c->r[9],c->r[0]); // 801B2F28
  if (!crb(c,2)) { goto L_801B2F44; } // 801B2F2C
  c->r[4]=c->r[4]+c->r[6]; // 801B2F30
  c->r[0]=R8(c->r[4]+0x00000001u); // 801B2F34
  W8(c->r[3]+0x00000015u,c->r[0]); // 801B2F38
  c->r[3]=0u+0x00000001u; // 801B2F3C
  return; // 801B2F40
L_801B2F44:;
  c->r[8]=c->r[8]+0x00000001u; // 801B2F44
L_801B2F48:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 801B2F48
  cmpu(c,0,c->r[0],c->r[5]); // 801B2F4C
  if (crb(c,0)) { IRQCHK(c); goto L_801B2F1C; } // 801B2F50
  c->r[3]=0u+0x00000000u; // 801B2F54
  return; // 801B2F58
}

// bta_hh_trace_dev_db
void f_801B2F5C(Ctx* __restrict c) {
  trace_call(0x801B2F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2F5C
  c->r[0]=c->lr; // 801B2F60
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2F64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B2F68
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B2F6C
  c->r[30]=0u+0x80330000u; // 801B2F70
  c->r[30]=c->r[30]+0x000020A8u; // 801B2F74
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B2F78
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B2F7C
  cmpu(c,0,c->r[0],0x00000005u); // 801B2F80
  if (crb(c,0)) { goto L_801B2F94; } // 801B2F84
  c->r[4]=c->r[30]+0x000001E4u; // 801B2F88
  c->r[3]=0u+0x00000504u; // 801B2F8C
  c->lr=0x801B2F94u; f_801ACB20(c); // 801B2F90
L_801B2F94:;
  c->r[3]=0u+0x803C0000u; // 801B2F94
  c->r[29]=0u+0x00000000u; // 801B2F98
  c->r[31]=c->r[3]+0x00007EE8u; // 801B2F9C
L_801B2FA0:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B2FA0
  cmpu(c,0,c->r[0],0x00000005u); // 801B2FA4
  if (crb(c,0)) { goto L_801B2FCC; } // 801B2FA8
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 801B2FAC
  c->r[4]=c->r[30]+0x00000220u; // 801B2FB0
  c->r[7]=c->r[31]+c->r[0]; // 801B2FB4
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 801B2FB8
  c->r[6]=R8(c->r[7]+0x00000028u); // 801B2FBC
  c->r[3]=0u+0x00000504u; // 801B2FC0
  c->r[7]=R8(c->r[7]+0x00000026u); // 801B2FC4
  c->lr=0x801B2FCCu; f_801ACB68(c); // 801B2FC8
L_801B2FCC:;
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B2FCC
  cmpu(c,0,c->r[0],0x00000005u); // 801B2FD0
  if (crb(c,0)) { goto L_801B2FFC; } // 801B2FD4
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 801B2FD8
  c->r[4]=c->r[30]+0x00000244u; // 801B2FDC
  c->r[8]=c->r[31]+c->r[0]; // 801B2FE0
  c->r[3]=0u+0x00000504u; // 801B2FE4
  c->r[5]=R16(c->r[8]+0x0000001Eu); // 801B2FE8
  c->r[6]=R8(c->r[8]+0x0000002Cu); // 801B2FEC
  c->r[7]=R8(c->r[8]+0x00000023u); // 801B2FF0
  c->r[8]=R8(c->r[8]+0x00000022u); // 801B2FF4
  c->lr=0x801B2FFCu; f_801ACB80(c); // 801B2FF8
L_801B2FFC:;
  c->r[29]=c->r[29]+0x00000001u; // 801B2FFC
  cmpu(c,0,c->r[29],0x00000010u); // 801B3000
  if (crb(c,0)) { IRQCHK(c); goto L_801B2FA0; } // 801B3004
  c->r[0]=R8(c->r[13]+0xFFFFA220u); // 801B3008
  cmpu(c,0,c->r[0],0x00000005u); // 801B300C
  if (crb(c,0)) { goto L_801B3020; } // 801B3010
  c->r[4]=c->r[30]+0x00000280u; // 801B3014
  c->r[3]=0u+0x00000504u; // 801B3018
  c->lr=0x801B3020u; f_801ACB20(c); // 801B301C
L_801B3020:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3020
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B3024
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B3028
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B302C
  c->lr=c->r[0]; // 801B3030
  c->r[1]=c->r[1]+0x00000020u; // 801B3034
  return; // 801B3038
}

// btm_acl_init
void f_801B303C(Ctx* __restrict c) {
  trace_call(0x801B303Cu);
  c->r[3]=0u+0x803D0000u; // 801B303C
  c->r[4]=0u+0x00007D00u; // 801B3040
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B3044
  c->r[0]=0u+0x000000FFu; // 801B3048
  W16(c->r[3]+0x000004C6u,c->r[4]); // 801B304C
  W8(c->r[3]+0x000027BFu,c->r[0]); // 801B3050
  return; // 801B3054
}

// btm_handle_to_acl_index
void f_801B3058(Ctx* __restrict c) {
  trace_call(0x801B3058u);
  c->r[4]=0u+0x803D0000u; // 801B3058
  c->r[5]=0u+0x00000000u; // 801B305C
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B3060
  c->r[0]=R8(c->r[4]+0x0000014Du); // 801B3064
  cmps(c,0,(int32_t)c->r[0],0); // 801B3068
  if (crb(c,2)) { goto L_801B307C; } // 801B306C
  c->r[0]=R16(c->r[4]+0x00000034u); // 801B3070
  cmpu(c,0,c->r[0],c->r[3]); // 801B3074
  if (crb(c,2)) { goto L_801B30D4; } // 801B3078
L_801B307C:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 801B307C
  c->r[5]=0u+0x00000001u; // 801B3080
  cmps(c,0,(int32_t)c->r[0],0); // 801B3084
  if (crb(c,2)) { goto L_801B3098; } // 801B3088
  c->r[0]=R16(c->r[4]+0x00000150u); // 801B308C
  cmpu(c,0,c->r[0],c->r[3]); // 801B3090
  if (crb(c,2)) { goto L_801B30D4; } // 801B3094
L_801B3098:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 801B3098
  c->r[5]=0u+0x00000002u; // 801B309C
  cmps(c,0,(int32_t)c->r[0],0); // 801B30A0
  if (crb(c,2)) { goto L_801B30B4; } // 801B30A4
  c->r[0]=R16(c->r[4]+0x0000026Cu); // 801B30A8
  cmpu(c,0,c->r[0],c->r[3]); // 801B30AC
  if (crb(c,2)) { goto L_801B30D4; } // 801B30B0
L_801B30B4:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 801B30B4
  c->r[5]=0u+0x00000003u; // 801B30B8
  cmps(c,0,(int32_t)c->r[0],0); // 801B30BC
  if (crb(c,2)) { goto L_801B30D0; } // 801B30C0
  c->r[0]=R16(c->r[4]+0x00000388u); // 801B30C4
  cmpu(c,0,c->r[0],c->r[3]); // 801B30C8
  if (crb(c,2)) { goto L_801B30D4; } // 801B30CC
L_801B30D0:;
  c->r[5]=0u+0x00000004u; // 801B30D0
L_801B30D4:;
  c->r[3]=c->r[5]|c->r[5]; // 801B30D4
  return; // 801B30D8
}

// btm_acl_created
void f_801B30DC(Ctx* __restrict c) {
  trace_call(0x801B30DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B30DC
  c->r[0]=c->lr; // 801B30E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B30E4
  c->r[11]=c->r[1]+0x00000030u; // 801B30E8
  c->lr=0x801B30F0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B30EC
  c->r[8]=0u+0x803D0000u; // 801B30F0
  c->r[30]=c->r[3]|c->r[3]; // 801B30F4
  c->r[8]=c->r[8]+0xFFFF8118u; // 801B30F8
  c->r[25]=c->r[4]|c->r[4]; // 801B30FC
  c->r[26]=c->r[5]|c->r[5]; // 801B3100
  c->r[27]=c->r[6]|c->r[6]; // 801B3104
  c->r[28]=c->r[7]|c->r[7]; // 801B3108
  c->r[29]=c->r[8]+0x00000034u; // 801B310C
  c->r[31]=0u+0x00000000u; // 801B3110
L_801B3114:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801B3114
  cmps(c,0,(int32_t)c->r[0],0); // 801B3118
  if (crb(c,2)) { goto L_801B313C; } // 801B311C
  c->r[4]=c->r[30]|c->r[30]; // 801B3120
  c->r[3]=c->r[29]+0x00000008u; // 801B3124
  c->r[5]=0u+0x00000006u; // 801B3128
  c->lr=0x801B3130u; f_8018C170(c); // 801B312C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3130
  if (!crb(c,2)) { goto L_801B313C; } // 801B3134
  goto L_801B3150; // 801B3138
L_801B313C:;
  c->r[31]=c->r[31]+0x00000001u; // 801B313C
  c->r[29]=c->r[29]+0x0000011Cu; // 801B3140
  cmpu(c,0,c->r[31],0x00000004u); // 801B3144
  if (crb(c,0)) { IRQCHK(c); goto L_801B3114; } // 801B3148
  c->r[29]=0u+0x00000000u; // 801B314C
L_801B3150:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B3150
  if (crb(c,2)) { goto L_801B31A4; } // 801B3154
  W16(c->r[29]+0x00000000u,c->r[27]); // 801B3158
  c->r[3]=0u+0x803D0000u; // 801B315C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B3160
  W8(c->r[29]+0x0000011Au,c->r[28]); // 801B3164
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B3168
  cmpu(c,0,c->r[0],0x00000004u); // 801B316C
  if (crb(c,0)) { goto L_801B33D8; } // 801B3170
  c->r[3]=0u+0x000D0000u; // 801B3174
  c->r[4]=0u+0x80330000u; // 801B3178
  c->r[5]=R8(c->r[30]+0x00000000u); // 801B317C
  c->r[3]=c->r[3]+0x00000003u; // 801B3180
  c->r[6]=R8(c->r[30]+0x00000001u); // 801B3184
  c->r[4]=c->r[4]+0x00002368u; // 801B3188
  c->r[7]=R8(c->r[30]+0x00000002u); // 801B318C
  c->r[8]=R8(c->r[30]+0x00000003u); // 801B3190
  c->r[9]=R8(c->r[30]+0x00000004u); // 801B3194
  c->r[10]=R8(c->r[30]+0x00000005u); // 801B3198
  c->lr=0x801B31A0u; f_801ACBB0(c); // 801B319C
  goto L_801B33D8; // 801B31A0
L_801B31A4:;
  c->r[3]=0u+0x803D0000u; // 801B31A4
  c->r[0]=0u+0x00000004u; // 801B31A8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B31AC
  c->r[4]=0u+0x00000000u; // 801B31B0
  c->r[31]=c->r[3]+0x00000034u; // 801B31B4
  c->ctr=c->r[0]; // 801B31B8
L_801B31BC:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801B31BC
  cmps(c,0,(int32_t)c->r[0],0); // 801B31C0
  if (!crb(c,2)) { goto L_801B33CC; } // 801B31C4
  c->r[3]=0u+0x00000001u; // 801B31C8
  c->r[0]=0u+0x00000000u; // 801B31CC
  W8(c->r[31]+0x00000119u,c->r[3]); // 801B31D0
  c->r[3]=rotl(c->r[4],0)&0x000000FFu; // 801B31D4
  W16(c->r[31]+0x00000000u,c->r[27]); // 801B31D8
  W8(c->r[31]+0x0000011Au,c->r[28]); // 801B31DC
  W16(c->r[31]+0x00000004u,c->r[0]); // 801B31E0
  c->lr=0x801B31E8u; f_801B8DB8(c); // 801B31E4
  c->r[4]=c->r[30]|c->r[30]; // 801B31E8
  c->r[3]=c->r[31]+0x00000008u; // 801B31EC
  c->r[5]=0u+0x00000006u; // 801B31F0
  c->lr=0x801B31F8u; f_80004338(c); // 801B31F4
  cmps(c,0,(int32_t)c->r[25],0); // 801B31F8
  if (crb(c,2)) { goto L_801B3210; } // 801B31FC
  c->r[4]=c->r[25]|c->r[25]; // 801B3200
  c->r[3]=c->r[31]+0x0000000Eu; // 801B3204
  c->r[5]=0u+0x00000003u; // 801B3208
  c->lr=0x801B3210u; f_80004338(c); // 801B320C
L_801B3210:;
  cmps(c,0,(int32_t)c->r[26],0); // 801B3210
  if (crb(c,2)) { goto L_801B3228; } // 801B3214
  c->r[4]=c->r[26]|c->r[26]; // 801B3218
  c->r[3]=c->r[31]+0x00000011u; // 801B321C
  c->r[5]=0u+0x000000F8u; // 801B3220
  c->lr=0x801B3228u; f_80004338(c); // 801B3224
L_801B3228:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B3228
  c->lr=0x801B3230u; f_801C073C(c); // 801B322C
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B3230
  c->lr=0x801B3238u; f_801C06C0(c); // 801B3234
  c->r[3]=c->r[27]|c->r[27]; // 801B3238
  c->lr=0x801B3240u; f_801B5174(c); // 801B323C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3240
  c->r[5]=c->r[3]|c->r[3]; // 801B3244
  if (crb(c,2)) { goto L_801B33C0; } // 801B3248
  c->r[0]=0u+0x00000008u; // 801B324C
  c->r[6]=0u+0x00000000u; // 801B3250
  c->ctr=c->r[0]; // 801B3254
L_801B3258:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801B3258
  c->r[4]=c->r[3]+c->r[0]; // 801B325C
  c->r[0]=R8(c->r[4]+0x00000077u); // 801B3260
  cmps(c,0,(int32_t)c->r[0],0); // 801B3264
  if (crb(c,2)) { goto L_801B33B8; } // 801B3268
  c->r[4]=c->r[5]+0x00000077u; // 801B326C
  c->r[3]=c->r[31]+0x00000110u; // 801B3270
  c->r[5]=0u+0x00000008u; // 801B3274
  c->lr=0x801B327Cu; f_80004338(c); // 801B3278
  c->r[3]=0u+0x803D0000u; // 801B327C
  c->r[0]=0u+0xFFFFCCF9u; // 801B3280
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B3284
  c->r[5]=R16(c->r[3]+0x00000654u); // 801B3288
  c->r[3]=R8(c->r[3]+0x00000636u); // 801B328C
  c->r[4]=c->r[5]&0x0000CC18u; cr0(c,c->r[4]); // 801B3290
  cmpu(c,0,c->r[3],0x00000003u); // 801B3294
  c->r[30]=c->r[4]&c->r[0]; // 801B3298
  if (crb(c,0)) { goto L_801B32AC; } // 801B329C
  c->r[0]=c->r[5]&0x00003306u; cr0(c,c->r[0]); // 801B32A0
  c->r[0]=c->r[4]|c->r[0]; // 801B32A4
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 801B32A8
L_801B32AC:;
  c->r[3]=0u+0x803D0000u; // 801B32AC
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B32B0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B32B4
  cmpu(c,0,c->r[0],0x00000004u); // 801B32B8
  if (crb(c,0)) { goto L_801B32D8; } // 801B32BC
  c->r[3]=0u+0x000D0000u; // 801B32C0
  c->r[4]=0u+0x80330000u; // 801B32C4
  c->r[3]=c->r[3]+0x00000003u; // 801B32C8
  c->r[5]=rotl(c->r[30],0)&0x0000FFFFu; // 801B32CC
  c->r[4]=c->r[4]+0x000023A8u; // 801B32D0
  c->lr=0x801B32D8u; f_801ACB38(c); // 801B32D4
L_801B32D8:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B32D8
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 801B32DC
  c->lr=0x801B32E4u; f_801C0334(c); // 801B32E0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B32E4
  if (crb(c,2)) { goto L_801B32F0; } // 801B32E8
  W16(c->r[31]+0x00000002u,c->r[30]); // 801B32EC
L_801B32F0:;
  c->r[4]=0u+0x803D0000u; // 801B32F0
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B32F4
  c->r[0]=R16(c->r[4]+0x000004C4u); // 801B32F8
  cmps(c,0,(int32_t)c->r[0],0); // 801B32FC
  if (crb(c,2)) { goto L_801B3310; } // 801B3300
  c->r[3]=c->r[31]+0x00000008u; // 801B3304
  c->r[4]=c->r[4]+0x000004C4u; // 801B3308
  c->lr=0x801B3310u; f_801B38A4(c); // 801B330C
L_801B3310:;
  c->r[3]=0u+0x803D0000u; // 801B3310
  c->r[29]=0u+0x00000000u; // 801B3314
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B3318
  c->r[28]=R16(c->r[3]+0x000004C6u); // 801B331C
  c->r[30]=c->r[3]+0x00000034u; // 801B3320
L_801B3324:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B3324
  cmps(c,0,(int32_t)c->r[0],0); // 801B3328
  if (crb(c,2)) { goto L_801B334C; } // 801B332C
  c->r[3]=c->r[30]+0x00000008u; // 801B3330
  c->r[4]=c->r[31]+0x00000008u; // 801B3334
  c->r[5]=0u+0x00000006u; // 801B3338
  c->lr=0x801B3340u; f_8018C170(c); // 801B333C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3340
  if (!crb(c,2)) { goto L_801B334C; } // 801B3344
  goto L_801B3360; // 801B3348
L_801B334C:;
  c->r[29]=c->r[29]+0x00000001u; // 801B334C
  c->r[30]=c->r[30]+0x0000011Cu; // 801B3350
  cmpu(c,0,c->r[29],0x00000004u); // 801B3354
  if (crb(c,0)) { IRQCHK(c); goto L_801B3324; } // 801B3358
  c->r[30]=0u+0x00000000u; // 801B335C
L_801B3360:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B3360
  if (crb(c,2)) { goto L_801B3384; } // 801B3364
  W16(c->r[30]+0x0000010Eu,c->r[28]); // 801B3368
  c->r[0]=R8(c->r[30]+0x0000011Au); // 801B336C
  cmps(c,0,(int32_t)c->r[0],0); // 801B3370
  if (!crb(c,2)) { goto L_801B3384; } // 801B3374
  c->r[3]=R16(c->r[30]+0x00000000u); // 801B3378
  c->r[4]=c->r[28]|c->r[28]; // 801B337C
  c->lr=0x801B3384u; f_801C1834(c); // 801B3380
L_801B3384:;
  c->r[3]=0u+0x803D0000u; // 801B3384
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B3388
  c->r[12]=R32(c->r[3]+0x000004C8u); // 801B338C
  cmps(c,0,(int32_t)c->r[12],0); // 801B3390
  if (crb(c,2)) { goto L_801B33D8; } // 801B3394
  c->r[3]=c->r[31]+0x00000008u; // 801B3398
  c->r[4]=c->r[31]+0x0000000Eu; // 801B339C
  c->r[5]=c->r[31]+0x00000011u; // 801B33A0
  c->r[6]=c->r[31]+0x00000110u; // 801B33A4
  c->r[7]=0u+0x00000001u; // 801B33A8
  c->ctr=c->r[12]; // 801B33AC
  if (true) { c->lr=0x801B33B4u; dispatch(c,c->ctr); } // 801B33B0
  goto L_801B33D8; // 801B33B4
L_801B33B8:;
  c->r[6]=c->r[6]+0x00000001u; // 801B33B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B3258; } // 801B33BC
L_801B33C0:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B33C0
  c->lr=0x801B33C8u; f_801C0644(c); // 801B33C4
  goto L_801B33D8; // 801B33C8
L_801B33CC:;
  c->r[4]=c->r[4]+0x00000001u; // 801B33CC
  c->r[31]=c->r[31]+0x0000011Cu; // 801B33D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B31BC; } // 801B33D4
L_801B33D8:;
  c->r[11]=c->r[1]+0x00000030u; // 801B33D8
  c->lr=0x801B33E0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B33DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B33E0
  c->lr=c->r[0]; // 801B33E4
  c->r[1]=c->r[1]+0x00000030u; // 801B33E8
  return; // 801B33EC
}

// btm_acl_removed
void f_801B33F0(Ctx* __restrict c) {
  trace_call(0x801B33F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B33F0
  c->r[0]=c->lr; // 801B33F4
  c->r[4]=0u+0x803D0000u; // 801B33F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B33FC
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B3400
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B3404
  c->r[31]=0u+0x00000000u; // 801B3408
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B340C
  c->r[30]=c->r[4]+0x00000034u; // 801B3410
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B3414
  c->r[29]=c->r[3]|c->r[3]; // 801B3418
L_801B341C:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B341C
  cmps(c,0,(int32_t)c->r[0],0); // 801B3420
  if (crb(c,2)) { goto L_801B3444; } // 801B3424
  c->r[4]=c->r[29]|c->r[29]; // 801B3428
  c->r[3]=c->r[30]+0x00000008u; // 801B342C
  c->r[5]=0u+0x00000006u; // 801B3430
  c->lr=0x801B3438u; f_8018C170(c); // 801B3434
  cmps(c,0,(int32_t)c->r[3],0); // 801B3438
  if (!crb(c,2)) { goto L_801B3444; } // 801B343C
  goto L_801B3458; // 801B3440
L_801B3444:;
  c->r[31]=c->r[31]+0x00000001u; // 801B3444
  c->r[30]=c->r[30]+0x0000011Cu; // 801B3448
  cmpu(c,0,c->r[31],0x00000004u); // 801B344C
  if (crb(c,0)) { IRQCHK(c); goto L_801B341C; } // 801B3450
  c->r[30]=0u+0x00000000u; // 801B3454
L_801B3458:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B3458
  if (crb(c,2)) { goto L_801B3498; } // 801B345C
  c->r[0]=0u+0x00000000u; // 801B3460
  c->r[3]=0u+0x803D0000u; // 801B3464
  W8(c->r[30]+0x00000119u,c->r[0]); // 801B3468
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B346C
  c->r[12]=R32(c->r[3]+0x000004C8u); // 801B3470
  cmps(c,0,(int32_t)c->r[12],0); // 801B3474
  if (crb(c,2)) { goto L_801B3498; } // 801B3478
  c->r[3]=c->r[29]|c->r[29]; // 801B347C
  c->r[4]=0u+0x00000000u; // 801B3480
  c->r[5]=0u+0x00000000u; // 801B3484
  c->r[6]=0u+0x00000000u; // 801B3488
  c->r[7]=0u+0x00000000u; // 801B348C
  c->ctr=c->r[12]; // 801B3490
  if (true) { c->lr=0x801B3498u; dispatch(c,c->ctr); } // 801B3494
L_801B3498:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3498
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B349C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B34A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B34A4
  c->lr=c->r[0]; // 801B34A8
  c->r[1]=c->r[1]+0x00000020u; // 801B34AC
  return; // 801B34B0
}

// btm_acl_device_down
void f_801B34B4(Ctx* __restrict c) {
  trace_call(0x801B34B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B34B4
  c->r[0]=c->lr; // 801B34B8
  c->r[3]=0u+0x803D0000u; // 801B34BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B34C0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B34C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B34C8
  c->r[31]=c->r[3]+0x00000034u; // 801B34CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B34D0
  c->r[30]=0u+0x00000000u; // 801B34D4
L_801B34D8:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801B34D8
  cmps(c,0,(int32_t)c->r[0],0); // 801B34DC
  if (crb(c,2)) { goto L_801B34F0; } // 801B34E0
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B34E4
  c->r[4]=0u+0x00000003u; // 801B34E8
  c->lr=0x801B34F0u; f_801C7928(c); // 801B34EC
L_801B34F0:;
  c->r[30]=c->r[30]+0x00000001u; // 801B34F0
  c->r[31]=c->r[31]+0x0000011Cu; // 801B34F4
  cmpu(c,0,c->r[30],0x00000004u); // 801B34F8
  if (crb(c,0)) { IRQCHK(c); goto L_801B34D8; } // 801B34FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3500
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3504
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B3508
  c->lr=c->r[0]; // 801B350C
  c->r[1]=c->r[1]+0x00000010u; // 801B3510
  return; // 801B3514
}

// BTM_SwitchRole
void f_801B3518(Ctx* __restrict c) {
  trace_call(0x801B3518u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3518
  c->r[0]=c->lr; // 801B351C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B3520
  c->r[11]=c->r[1]+0x00000030u; // 801B3524
  c->lr=0x801B352Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3528
  c->r[6]=0u+0x803D0000u; // 801B352C
  c->r[28]=c->r[3]|c->r[3]; // 801B3530
  c->r[6]=c->r[6]+0xFFFF8118u; // 801B3534
  c->r[29]=c->r[4]|c->r[4]; // 801B3538
  c->r[0]=R8(c->r[6]+0x00000640u); // 801B353C
  c->r[30]=c->r[5]|c->r[5]; // 801B3540
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801B3544
  if (!crb(c,2)) { goto L_801B3554; } // 801B3548
  c->r[3]=0u+0x00000004u; // 801B354C
  goto L_801B371C; // 801B3550
L_801B3554:;
  c->r[31]=c->r[6]+0x00000034u; // 801B3554
  c->r[27]=0u+0x00000000u; // 801B3558
L_801B355C:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801B355C
  cmps(c,0,(int32_t)c->r[0],0); // 801B3560
  if (crb(c,2)) { goto L_801B3584; } // 801B3564
  c->r[4]=c->r[28]|c->r[28]; // 801B3568
  c->r[3]=c->r[31]+0x00000008u; // 801B356C
  c->r[5]=0u+0x00000006u; // 801B3570
  c->lr=0x801B3578u; f_8018C170(c); // 801B3574
  cmps(c,0,(int32_t)c->r[3],0); // 801B3578
  if (!crb(c,2)) { goto L_801B3584; } // 801B357C
  goto L_801B3598; // 801B3580
L_801B3584:;
  c->r[27]=c->r[27]+0x00000001u; // 801B3584
  c->r[31]=c->r[31]+0x0000011Cu; // 801B3588
  cmpu(c,0,c->r[27],0x00000004u); // 801B358C
  if (crb(c,0)) { IRQCHK(c); goto L_801B355C; } // 801B3590
  c->r[31]=0u+0x00000000u; // 801B3594
L_801B3598:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B3598
  if (!crb(c,2)) { goto L_801B35A8; } // 801B359C
  c->r[3]=0u+0x00000007u; // 801B35A0
  goto L_801B371C; // 801B35A4
L_801B35A8:;
  c->r[0]=R8(c->r[31]+0x0000011Au); // 801B35A8
  cmpu(c,0,c->r[0],c->r[29]); // 801B35AC
  if (!crb(c,2)) { goto L_801B35BC; } // 801B35B0
  c->r[3]=0u+0x00000000u; // 801B35B4
  goto L_801B371C; // 801B35B8
L_801B35BC:;
  c->r[3]=c->r[28]|c->r[28]; // 801B35BC
  c->lr=0x801B35C4u; f_801BA440(c); // 801B35C0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B35C4
  cmpu(c,0,c->r[0],0x00000001u); // 801B35C8
  if (!crb(c,2)) { goto L_801B35D8; } // 801B35CC
  c->r[3]=0u+0x00000003u; // 801B35D0
  goto L_801B371C; // 801B35D4
L_801B35D8:;
  c->r[0]=R8(c->r[31]+0x0000011Bu); // 801B35D8
  cmps(c,0,(int32_t)c->r[0],0); // 801B35DC
  if (crb(c,2)) { goto L_801B3614; } // 801B35E0
  c->r[3]=0u+0x803D0000u; // 801B35E4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B35E8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B35EC
  cmpu(c,0,c->r[0],0x00000005u); // 801B35F0
  if (crb(c,0)) { goto L_801B360C; } // 801B35F4
  c->r[3]=0u+0x000D0000u; // 801B35F8
  c->r[4]=0u+0x80330000u; // 801B35FC
  c->r[3]=c->r[3]+0x00000004u; // 801B3600
  c->r[4]=c->r[4]+0x000023C8u; // 801B3604
  c->lr=0x801B360Cu; f_801ACB20(c); // 801B3608
L_801B360C:;
  c->r[3]=0u+0x00000002u; // 801B360C
  goto L_801B371C; // 801B3610
L_801B3614:;
  c->r[3]=0u+0x803D0000u; // 801B3614
  c->r[4]=0u+0x00000000u; // 801B3618
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B361C
  c->r[5]=0u+0x00000008u; // 801B3620
  c->r[3]=c->r[3]+0x00000624u; // 801B3624
  c->lr=0x801B362Cu; f_80004688(c); // 801B3628
  c->r[3]=c->r[31]+0x00000008u; // 801B362C
  c->r[4]=c->r[1]+0x00000008u; // 801B3630
  c->lr=0x801B3638u; f_801B8C88(c); // 801B3634
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B3638
  if (crb(c,2)) { goto L_801B3644; } // 801B363C
  goto L_801B371C; // 801B3640
L_801B3644:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 801B3644
  c->r[0]=c->r[3]+0x000000FEu; // 801B3648
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801B364C
  cmpu(c,0,c->r[0],0x00000001u); // 801B3650
  if (crb(c,1)) { goto L_801B3690; } // 801B3654
  c->r[0]=0u+0x00000000u; // 801B3658
  c->r[4]=c->r[31]+0x00000008u; // 801B365C
  W8(c->r[1]+0x00000014u,c->r[0]); // 801B3660
  c->r[5]=c->r[1]+0x0000000Cu; // 801B3664
  c->r[3]=0u+0x00000080u; // 801B3668
  c->lr=0x801B3670u; f_801B8AB8(c); // 801B366C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B3670
  cmpu(c,0,c->r[0],0x00000001u); // 801B3674
  if (crb(c,2)) { goto L_801B3684; } // 801B3678
  c->r[3]=0u+0x00000006u; // 801B367C
  goto L_801B371C; // 801B3680
L_801B3684:;
  c->r[0]=0u+0x00000001u; // 801B3684
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 801B3688
  goto L_801B36F8; // 801B368C
L_801B3690:;
  c->r[3]=c->r[28]|c->r[28]; // 801B3690
  c->lr=0x801B3698u; f_801B522C(c); // 801B3694
  cmps(c,0,(int32_t)c->r[3],0); // 801B3698
  if (crb(c,2)) { goto L_801B36D4; } // 801B369C
  c->r[0]=R8(c->r[3]+0x00000076u); // 801B36A0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B36A4
  if (crb(c,2)) { goto L_801B36D4; } // 801B36A8
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B36AC
  c->r[4]=0u+0x00000000u; // 801B36B0
  c->lr=0x801B36B8u; f_801C0440(c); // 801B36B4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B36B8
  if (!crb(c,2)) { goto L_801B36C8; } // 801B36BC
  c->r[3]=0u+0x00000003u; // 801B36C0
  goto L_801B371C; // 801B36C4
L_801B36C8:;
  c->r[0]=0u+0x00000002u; // 801B36C8
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 801B36CC
  goto L_801B36F8; // 801B36D0
L_801B36D4:;
  c->r[3]=c->r[28]|c->r[28]; // 801B36D4
  c->r[4]=c->r[29]|c->r[29]; // 801B36D8
  c->lr=0x801B36E0u; f_801C0D38(c); // 801B36DC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B36E0
  if (!crb(c,2)) { goto L_801B36F0; } // 801B36E4
  c->r[3]=0u+0x00000003u; // 801B36E8
  goto L_801B371C; // 801B36EC
L_801B36F0:;
  c->r[0]=0u+0x00000005u; // 801B36F0
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 801B36F4
L_801B36F8:;
  c->r[31]=0u+0x803D0000u; // 801B36F8
  c->r[4]=c->r[28]|c->r[28]; // 801B36FC
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B3700
  c->r[5]=0u+0x00000006u; // 801B3704
  c->r[3]=c->r[31]+0x00000626u; // 801B3708
  c->lr=0x801B3710u; f_80004338(c); // 801B370C
  W8(c->r[31]+0x00000625u,c->r[29]); // 801B3710
  c->r[3]=0u+0x00000001u; // 801B3714
  W32(c->r[31]+0x0000062Cu,c->r[30]); // 801B3718
L_801B371C:;
  c->r[11]=c->r[1]+0x00000030u; // 801B371C
  c->lr=0x801B3724u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3720
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B3724
  c->lr=c->r[0]; // 801B3728
  c->r[1]=c->r[1]+0x00000030u; // 801B372C
  return; // 801B3730
}

// btm_acl_encrypt_change
void f_801B3734(Ctx* __restrict c) {
  trace_call(0x801B3734u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3734
  c->r[0]=c->lr; // 801B3738
  c->r[4]=0u+0x803D0000u; // 801B373C
  c->r[6]=0u+0x00000000u; // 801B3740
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3744
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B3748
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B374C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B3750
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B3754
  c->r[0]=R8(c->r[4]+0x0000014Du); // 801B3758
  cmps(c,0,(int32_t)c->r[0],0); // 801B375C
  if (crb(c,2)) { goto L_801B3770; } // 801B3760
  c->r[0]=R16(c->r[4]+0x00000034u); // 801B3764
  cmpu(c,0,c->r[0],c->r[3]); // 801B3768
  if (crb(c,2)) { goto L_801B37C8; } // 801B376C
L_801B3770:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 801B3770
  c->r[6]=0u+0x00000001u; // 801B3774
  cmps(c,0,(int32_t)c->r[0],0); // 801B3778
  if (crb(c,2)) { goto L_801B378C; } // 801B377C
  c->r[0]=R16(c->r[4]+0x00000150u); // 801B3780
  cmpu(c,0,c->r[0],c->r[3]); // 801B3784
  if (crb(c,2)) { goto L_801B37C8; } // 801B3788
L_801B378C:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 801B378C
  c->r[6]=0u+0x00000002u; // 801B3790
  cmps(c,0,(int32_t)c->r[0],0); // 801B3794
  if (crb(c,2)) { goto L_801B37A8; } // 801B3798
  c->r[0]=R16(c->r[4]+0x0000026Cu); // 801B379C
  cmpu(c,0,c->r[0],c->r[3]); // 801B37A0
  if (crb(c,2)) { goto L_801B37C8; } // 801B37A4
L_801B37A8:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 801B37A8
  c->r[6]=0u+0x00000003u; // 801B37AC
  cmps(c,0,(int32_t)c->r[0],0); // 801B37B0
  if (crb(c,2)) { goto L_801B37C4; } // 801B37B4
  c->r[0]=R16(c->r[4]+0x00000388u); // 801B37B8
  cmpu(c,0,c->r[0],c->r[3]); // 801B37BC
  if (crb(c,2)) { goto L_801B37C8; } // 801B37C0
L_801B37C4:;
  c->r[6]=0u+0x00000004u; // 801B37C4
L_801B37C8:;
  cmpu(c,0,c->r[6],0x00000004u); // 801B37C8
  if (!crb(c,0)) { goto L_801B3888; } // 801B37CC
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)284); // 801B37D0
  c->r[30]=0u+0x803D0000u; // 801B37D4
  c->r[30]=c->r[30]+0xFFFF8118u; // 801B37D8
  c->r[29]=c->r[30]+c->r[0]; // 801B37DC
  goto L_801B37E8; // 801B37E0
  goto L_801B3888; // 801B37E4
L_801B37E8:;
  c->r[0]=R8(c->r[29]+0x0000014Fu); // 801B37E8
  cmpu(c,0,c->r[0],0x00000002u); // 801B37EC
  if (!crb(c,2)) { goto L_801B385C; } // 801B37F0
  cmps(c,0,(int32_t)c->r[5],0); // 801B37F4
  if (crb(c,2)) { goto L_801B3808; } // 801B37F8
  c->r[0]=0u+0x00000000u; // 801B37FC
  W8(c->r[29]+0x0000014Fu,c->r[0]); // 801B3800
  goto L_801B3810; // 801B3804
L_801B3808:;
  c->r[0]=0u+0x00000003u; // 801B3808
  W8(c->r[29]+0x0000014Fu,c->r[0]); // 801B380C
L_801B3810:;
  c->r[0]=R8(c->r[29]+0x0000014Eu); // 801B3810
  c->r[3]=c->r[29]+0x0000003Cu; // 801B3814
  c->r[0]=cntlz(c->r[0]); // 801B3818
  c->r[4]=rotl(c->r[0],27)&0x000000FFu; // 801B381C
  c->lr=0x801B3824u; f_801C0D38(c); // 801B3820
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B3824
  if (!crb(c,2)) { goto L_801B3888; } // 801B3828
  c->r[30]=0u+0x00000000u; // 801B382C
  c->r[31]=0u+0x803D0000u; // 801B3830
  W8(c->r[29]+0x0000014Fu,c->r[30]); // 801B3834
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B3838
  c->r[12]=R32(c->r[31]+0x0000062Cu); // 801B383C
  cmps(c,0,(int32_t)c->r[12],0); // 801B3840
  if (crb(c,2)) { goto L_801B3888; } // 801B3844
  c->r[3]=c->r[31]+0x00000624u; // 801B3848
  c->ctr=c->r[12]; // 801B384C
  if (true) { c->lr=0x801B3854u; dispatch(c,c->ctr); } // 801B3850
  W32(c->r[31]+0x0000062Cu,c->r[30]); // 801B3854
  goto L_801B3888; // 801B3858
L_801B385C:;
  cmpu(c,0,c->r[0],0x00000004u); // 801B385C
  if (!crb(c,2)) { goto L_801B3888; } // 801B3860
  c->r[31]=0u+0x00000000u; // 801B3864
  W8(c->r[29]+0x0000014Fu,c->r[31]); // 801B3868
  c->r[12]=R32(c->r[30]+0x0000062Cu); // 801B386C
  cmps(c,0,(int32_t)c->r[12],0); // 801B3870
  if (crb(c,2)) { goto L_801B3888; } // 801B3874
  c->r[3]=c->r[30]+0x00000624u; // 801B3878
  c->ctr=c->r[12]; // 801B387C
  if (true) { c->lr=0x801B3884u; dispatch(c,c->ctr); } // 801B3880
  W32(c->r[30]+0x0000062Cu,c->r[31]); // 801B3884
L_801B3888:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3888
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B388C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B3890
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B3894
  c->lr=c->r[0]; // 801B3898
  c->r[1]=c->r[1]+0x00000020u; // 801B389C
  return; // 801B38A0
}

// BTM_SetLinkPolicy
void f_801B38A4(Ctx* __restrict c) {
  trace_call(0x801B38A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B38A4
  c->r[0]=c->lr; // 801B38A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B38AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B38B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B38B4
  c->r[30]=0u+0x80330000u; // 801B38B8
  c->r[30]=c->r[30]+0x00002368u; // 801B38BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B38C0
  c->r[29]=c->r[4]|c->r[4]; // 801B38C4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B38C8
  c->r[28]=c->r[3]|c->r[3]; // 801B38CC
  c->lr=0x801B38D4u; f_801B6570(c); // 801B38D0
  c->r[4]=R16(c->r[29]+0x00000000u); // 801B38D4
  c->r[31]=c->r[3]|c->r[3]; // 801B38D8
  cmps(c,0,(int32_t)c->r[4],0); // 801B38DC
  if (crb(c,2)) { goto L_801B39FC; } // 801B38E0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801B38E4
  if (crb(c,2)) { goto L_801B3924; } // 801B38E8
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B38EC
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801B38F0
  if (!crb(c,2)) { goto L_801B3924; } // 801B38F4
  c->r[5]=rotl(c->r[4],0)&0x0000FFFEu; // 801B38F8
  c->r[3]=0u+0x803D0000u; // 801B38FC
  W16(c->r[29]+0x00000000u,c->r[5]); // 801B3900
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B3904
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B3908
  cmpu(c,0,c->r[0],0x00000003u); // 801B390C
  if (crb(c,0)) { goto L_801B3924; } // 801B3910
  c->r[3]=0u+0x000D0000u; // 801B3914
  c->r[4]=c->r[30]+0x000000BCu; // 801B3918
  c->r[3]=c->r[3]+0x00000002u; // 801B391C
  c->lr=0x801B3924u; f_801ACB38(c); // 801B3920
L_801B3924:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 801B3924
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801B3928
  if (crb(c,2)) { goto L_801B396C; } // 801B392C
  c->r[0]=R8(c->r[31]+0x00000000u); // 801B3930
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801B3934
  if (!crb(c,2)) { goto L_801B396C; } // 801B3938
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFFDu; // 801B393C
  c->r[3]=0u+0x803D0000u; // 801B3940
  W16(c->r[29]+0x00000000u,c->r[5]); // 801B3944
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B3948
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B394C
  cmpu(c,0,c->r[0],0x00000003u); // 801B3950
  if (crb(c,0)) { goto L_801B396C; } // 801B3954
  c->r[3]=0u+0x000D0000u; // 801B3958
  c->r[4]=c->r[30]+0x000000F8u; // 801B395C
  c->r[3]=c->r[3]+0x00000002u; // 801B3960
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801B3964
  c->lr=0x801B396Cu; f_801ACB38(c); // 801B3968
L_801B396C:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 801B396C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801B3970
  if (crb(c,2)) { goto L_801B39B4; } // 801B3974
  c->r[0]=R8(c->r[31]+0x00000000u); // 801B3978
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B397C
  if (!crb(c,2)) { goto L_801B39B4; } // 801B3980
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFFBu; // 801B3984
  c->r[3]=0u+0x803D0000u; // 801B3988
  W16(c->r[29]+0x00000000u,c->r[5]); // 801B398C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B3990
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B3994
  cmpu(c,0,c->r[0],0x00000003u); // 801B3998
  if (crb(c,0)) { goto L_801B39B4; } // 801B399C
  c->r[3]=0u+0x000D0000u; // 801B39A0
  c->r[4]=c->r[30]+0x00000130u; // 801B39A4
  c->r[3]=c->r[3]+0x00000002u; // 801B39A8
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801B39AC
  c->lr=0x801B39B4u; f_801ACB38(c); // 801B39B0
L_801B39B4:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 801B39B4
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801B39B8
  if (crb(c,2)) { goto L_801B39FC; } // 801B39BC
  c->r[0]=R8(c->r[31]+0x00000001u); // 801B39C0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B39C4
  if (!crb(c,2)) { goto L_801B39FC; } // 801B39C8
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFF7u; // 801B39CC
  c->r[3]=0u+0x803D0000u; // 801B39D0
  W16(c->r[29]+0x00000000u,c->r[5]); // 801B39D4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B39D8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B39DC
  cmpu(c,0,c->r[0],0x00000003u); // 801B39E0
  if (crb(c,0)) { goto L_801B39FC; } // 801B39E4
  c->r[3]=0u+0x000D0000u; // 801B39E8
  c->r[4]=c->r[30]+0x00000170u; // 801B39EC
  c->r[3]=c->r[3]+0x00000002u; // 801B39F0
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801B39F4
  c->lr=0x801B39FCu; f_801ACB38(c); // 801B39F8
L_801B39FC:;
  c->r[3]=0u+0x803D0000u; // 801B39FC
  c->r[30]=0u+0x00000000u; // 801B3A00
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B3A04
  c->r[31]=c->r[3]+0x00000034u; // 801B3A08
L_801B3A0C:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801B3A0C
  cmps(c,0,(int32_t)c->r[0],0); // 801B3A10
  if (crb(c,2)) { goto L_801B3A34; } // 801B3A14
  c->r[4]=c->r[28]|c->r[28]; // 801B3A18
  c->r[3]=c->r[31]+0x00000008u; // 801B3A1C
  c->r[5]=0u+0x00000006u; // 801B3A20
  c->lr=0x801B3A28u; f_8018C170(c); // 801B3A24
  cmps(c,0,(int32_t)c->r[3],0); // 801B3A28
  if (!crb(c,2)) { goto L_801B3A34; } // 801B3A2C
  goto L_801B3A48; // 801B3A30
L_801B3A34:;
  c->r[30]=c->r[30]+0x00000001u; // 801B3A34
  c->r[31]=c->r[31]+0x0000011Cu; // 801B3A38
  cmpu(c,0,c->r[30],0x00000004u); // 801B3A3C
  if (crb(c,0)) { IRQCHK(c); goto L_801B3A0C; } // 801B3A40
  c->r[31]=0u+0x00000000u; // 801B3A44
L_801B3A48:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B3A48
  if (crb(c,2)) { goto L_801B3A70; } // 801B3A4C
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B3A50
  c->r[4]=R16(c->r[29]+0x00000000u); // 801B3A54
  c->lr=0x801B3A5Cu; f_801C0DE8(c); // 801B3A58
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B3A5C
  c->r[3]=0u+0x00000003u; // 801B3A60
  if (crb(c,2)) { goto L_801B3A74; } // 801B3A64
  c->r[3]=0u+0x00000001u; // 801B3A68
  goto L_801B3A74; // 801B3A6C
L_801B3A70:;
  c->r[3]=0u+0x00000007u; // 801B3A70
L_801B3A74:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3A74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B3A78
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B3A7C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B3A80
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B3A84
  c->lr=c->r[0]; // 801B3A88
  c->r[1]=c->r[1]+0x00000020u; // 801B3A8C
  return; // 801B3A90
}

// BTM_SetDefaultLinkPolicy
void f_801B3A94(Ctx* __restrict c) {
  trace_call(0x801B3A94u);
  c->r[4]=0u+0x803D0000u; // 801B3A94
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B3A98
  W16(c->r[4]+0x000004C4u,c->r[3]); // 801B3A9C
  return; // 801B3AA0
}

// btm_read_link_policy_complete
void f_801B3AA4(Ctx* __restrict c) {
  trace_call(0x801B3AA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3AA4
  c->r[0]=c->lr; // 801B3AA8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B3AAC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B3AB0
  c->r[31]=0u+0x803D0000u; // 801B3AB4
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B3AB8
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B3ABC
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B3AC0
  c->r[29]=c->r[31]+0x00000034u; // 801B3AC4
  W32(c->r[1]+0x00000020u,c->r[28]); // 801B3AC8
  c->r[28]=c->r[3]|c->r[3]; // 801B3ACC
  c->r[3]=c->r[31]+0x000005ACu; // 801B3AD0
  c->r[30]=R32(c->r[31]+0x000005C4u); // 801B3AD4
  c->lr=0x801B3ADCu; f_801AD15C(c); // 801B3AD8
  c->r[3]=0u+0x00000000u; // 801B3ADC
  cmps(c,0,(int32_t)c->r[30],0); // 801B3AE0
  W32(c->r[31]+0x000005C4u,c->r[3]); // 801B3AE4
  if (crb(c,2)) { goto L_801B3B88; } // 801B3AE8
  c->r[0]=R8(c->r[28]+0x00000000u); // 801B3AEC
  cmps(c,0,(int32_t)c->r[0],0); // 801B3AF0
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B3AF4
  if (!crb(c,2)) { goto L_801B3B70; } // 801B3AF8
  W8(c->r[1]+0x00000008u,c->r[3]); // 801B3AFC
  c->r[0]=0u+0x00000004u; // 801B3B00
  c->r[7]=0u+0x00000000u; // 801B3B04
  c->r[4]=R8(c->r[28]+0x00000002u); // 801B3B08
  c->r[3]=R8(c->r[28]+0x00000004u); // 801B3B0C
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 801B3B10
  c->r[6]=R8(c->r[28]+0x00000001u); // 801B3B14
  c->r[4]=R8(c->r[28]+0x00000003u); // 801B3B18
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801B3B1C
  c->r[5]=c->r[6]+c->r[5]; // 801B3B20
  c->r[3]=c->r[4]+c->r[3]; // 801B3B24
  W16(c->r[1]+0x00000010u,c->r[3]); // 801B3B28
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 801B3B2C
  c->ctr=c->r[0]; // 801B3B30
L_801B3B34:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801B3B34
  cmps(c,0,(int32_t)c->r[0],0); // 801B3B38
  if (crb(c,2)) { goto L_801B3B60; } // 801B3B3C
  c->r[0]=R16(c->r[29]+0x00000000u); // 801B3B40
  cmpu(c,0,c->r[3],c->r[0]); // 801B3B44
  if (!crb(c,2)) { goto L_801B3B60; } // 801B3B48
  c->r[3]=c->r[1]+0x0000000Au; // 801B3B4C
  c->r[4]=c->r[29]+0x00000008u; // 801B3B50
  c->r[5]=0u+0x00000006u; // 801B3B54
  c->lr=0x801B3B5Cu; f_80004338(c); // 801B3B58
  goto L_801B3B78; // 801B3B5C
L_801B3B60:;
  c->r[7]=c->r[7]+0x00000001u; // 801B3B60
  c->r[29]=c->r[29]+0x0000011Cu; // 801B3B64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B3B34; } // 801B3B68
  goto L_801B3B78; // 801B3B6C
L_801B3B70:;
  c->r[0]=0u+0x0000000Au; // 801B3B70
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B3B74
L_801B3B78:;
  c->r[12]=c->r[30]|c->r[30]; // 801B3B78
  c->r[3]=c->r[1]+0x00000008u; // 801B3B7C
  c->ctr=c->r[12]; // 801B3B80
  if (true) { c->lr=0x801B3B88u; dispatch(c,c->ctr); } // 801B3B84
L_801B3B88:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B3B88
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B3B8C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B3B90
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B3B94
  c->r[28]=R32(c->r[1]+0x00000020u); // 801B3B98
  c->lr=c->r[0]; // 801B3B9C
  c->r[1]=c->r[1]+0x00000030u; // 801B3BA0
  return; // 801B3BA4
}

// btm_read_remote_version_complete
void f_801B3BA8(Ctx* __restrict c) {
  trace_call(0x801B3BA8u);
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B3BA8
  c->r[4]=0u+0x803D0000u; // 801B3BAC
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B3BB0
  cmps(c,0,(int32_t)c->r[0],0); // 801B3BB4
  c->r[6]=c->r[4]+0x00000034u; // 801B3BB8
  if (!crb(c,2)) return; // 801B3BBC
  c->r[4]=R8(c->r[3]+0x00000002u); // 801B3BC0
  c->r[0]=0u+0x00000004u; // 801B3BC4
  c->r[5]=R8(c->r[3]+0x00000001u); // 801B3BC8
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801B3BCC
  c->r[4]=c->r[5]+c->r[4]; // 801B3BD0
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801B3BD4
  c->ctr=c->r[0]; // 801B3BD8
L_801B3BDC:;
  c->r[0]=R8(c->r[6]+0x00000119u); // 801B3BDC
  cmps(c,0,(int32_t)c->r[0],0); // 801B3BE0
  if (crb(c,2)) { goto L_801B3C28; } // 801B3BE4
  c->r[0]=R16(c->r[6]+0x00000000u); // 801B3BE8
  cmpu(c,0,c->r[0],c->r[4]); // 801B3BEC
  if (!crb(c,2)) { goto L_801B3C28; } // 801B3BF0
  c->r[0]=R8(c->r[3]+0x00000003u); // 801B3BF4
  W8(c->r[6]+0x00000118u,c->r[0]); // 801B3BF8
  c->r[0]=R8(c->r[3]+0x00000005u); // 801B3BFC
  c->r[4]=R8(c->r[3]+0x00000004u); // 801B3C00
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B3C04
  c->r[0]=c->r[4]+c->r[0]; // 801B3C08
  W16(c->r[6]+0x0000010Au,c->r[0]); // 801B3C0C
  c->r[0]=R8(c->r[3]+0x00000007u); // 801B3C10
  c->r[3]=R8(c->r[3]+0x00000006u); // 801B3C14
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B3C18
  c->r[0]=c->r[3]+c->r[0]; // 801B3C1C
  W16(c->r[6]+0x0000010Cu,c->r[0]); // 801B3C20
  return; // 801B3C24
L_801B3C28:;
  c->r[6]=c->r[6]+0x0000011Cu; // 801B3C28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B3BDC; } // 801B3C2C
  return; // 801B3C30
}

// btm_read_remote_features_complete
void f_801B3C34(Ctx* __restrict c) {
  trace_call(0x801B3C34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3C34
  c->r[0]=c->lr; // 801B3C38
  c->r[4]=0u+0x803D0000u; // 801B3C3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3C40
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B3C44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B3C48
  c->r[31]=c->r[4]+0x00000034u; // 801B3C4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B3C50
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B3C54
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B3C58
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B3C5C
  cmps(c,0,(int32_t)c->r[0],0); // 801B3C60
  if (!crb(c,2)) { goto L_801B3E40; } // 801B3C64
  c->r[4]=R8(c->r[3]+0x00000002u); // 801B3C68
  c->r[0]=0u+0x00000004u; // 801B3C6C
  c->r[5]=R8(c->r[3]+0x00000001u); // 801B3C70
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801B3C74
  c->r[4]=c->r[5]+c->r[4]; // 801B3C78
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801B3C7C
  c->ctr=c->r[0]; // 801B3C80
L_801B3C84:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801B3C84
  cmps(c,0,(int32_t)c->r[0],0); // 801B3C88
  if (crb(c,2)) { goto L_801B3E38; } // 801B3C8C
  c->r[0]=R16(c->r[31]+0x00000000u); // 801B3C90
  cmpu(c,0,c->r[0],c->r[4]); // 801B3C94
  if (!crb(c,2)) { goto L_801B3E38; } // 801B3C98
  c->r[0]=R8(c->r[3]+0x00000003u); // 801B3C9C
  W8(c->r[31]+0x00000110u,c->r[0]); // 801B3CA0
  c->r[0]=R8(c->r[3]+0x00000004u); // 801B3CA4
  W8(c->r[31]+0x00000111u,c->r[0]); // 801B3CA8
  c->r[0]=R8(c->r[3]+0x00000005u); // 801B3CAC
  W8(c->r[31]+0x00000112u,c->r[0]); // 801B3CB0
  c->r[0]=R8(c->r[3]+0x00000006u); // 801B3CB4
  W8(c->r[31]+0x00000113u,c->r[0]); // 801B3CB8
  c->r[0]=R8(c->r[3]+0x00000007u); // 801B3CBC
  W8(c->r[31]+0x00000114u,c->r[0]); // 801B3CC0
  c->r[0]=R8(c->r[3]+0x00000008u); // 801B3CC4
  W8(c->r[31]+0x00000115u,c->r[0]); // 801B3CC8
  c->r[0]=R8(c->r[3]+0x00000009u); // 801B3CCC
  W8(c->r[31]+0x00000116u,c->r[0]); // 801B3CD0
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801B3CD4
  c->r[3]=c->r[4]|c->r[4]; // 801B3CD8
  W8(c->r[31]+0x00000117u,c->r[0]); // 801B3CDC
  c->lr=0x801B3CE4u; f_801B5174(c); // 801B3CE0
  cmps(c,0,(int32_t)c->r[3],0); // 801B3CE4
  if (crb(c,2)) { goto L_801B3CFC; } // 801B3CE8
  c->r[4]=c->r[31]+0x00000110u; // 801B3CEC
  c->r[5]=0u+0x00000008u; // 801B3CF0
  c->r[3]=c->r[3]+0x00000077u; // 801B3CF4
  c->lr=0x801B3CFCu; f_80004338(c); // 801B3CF8
L_801B3CFC:;
  c->r[3]=0u+0x803D0000u; // 801B3CFC
  c->r[0]=0u+0xFFFFCCF9u; // 801B3D00
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B3D04
  c->r[5]=R16(c->r[3]+0x00000654u); // 801B3D08
  c->r[3]=R8(c->r[3]+0x00000636u); // 801B3D0C
  c->r[4]=c->r[5]&0x0000CC18u; cr0(c,c->r[4]); // 801B3D10
  cmpu(c,0,c->r[3],0x00000003u); // 801B3D14
  c->r[30]=c->r[4]&c->r[0]; // 801B3D18
  if (crb(c,0)) { goto L_801B3D2C; } // 801B3D1C
  c->r[0]=c->r[5]&0x00003306u; cr0(c,c->r[0]); // 801B3D20
  c->r[0]=c->r[4]|c->r[0]; // 801B3D24
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 801B3D28
L_801B3D2C:;
  c->r[3]=0u+0x803D0000u; // 801B3D2C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B3D30
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B3D34
  cmpu(c,0,c->r[0],0x00000004u); // 801B3D38
  if (crb(c,0)) { goto L_801B3D58; } // 801B3D3C
  c->r[3]=0u+0x000D0000u; // 801B3D40
  c->r[4]=0u+0x80330000u; // 801B3D44
  c->r[3]=c->r[3]+0x00000003u; // 801B3D48
  c->r[5]=rotl(c->r[30],0)&0x0000FFFFu; // 801B3D4C
  c->r[4]=c->r[4]+0x000023A8u; // 801B3D50
  c->lr=0x801B3D58u; f_801ACB38(c); // 801B3D54
L_801B3D58:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B3D58
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 801B3D5C
  c->lr=0x801B3D64u; f_801C0334(c); // 801B3D60
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B3D64
  if (crb(c,2)) { goto L_801B3D70; } // 801B3D68
  W16(c->r[31]+0x00000002u,c->r[30]); // 801B3D6C
L_801B3D70:;
  c->r[4]=0u+0x803D0000u; // 801B3D70
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B3D74
  c->r[0]=R16(c->r[4]+0x000004C4u); // 801B3D78
  cmps(c,0,(int32_t)c->r[0],0); // 801B3D7C
  if (crb(c,2)) { goto L_801B3D90; } // 801B3D80
  c->r[3]=c->r[31]+0x00000008u; // 801B3D84
  c->r[4]=c->r[4]+0x000004C4u; // 801B3D88
  c->lr=0x801B3D90u; f_801B38A4(c); // 801B3D8C
L_801B3D90:;
  c->r[3]=0u+0x803D0000u; // 801B3D90
  c->r[30]=0u+0x00000000u; // 801B3D94
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B3D98
  c->r[28]=R16(c->r[3]+0x000004C6u); // 801B3D9C
  c->r[29]=c->r[3]+0x00000034u; // 801B3DA0
L_801B3DA4:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801B3DA4
  cmps(c,0,(int32_t)c->r[0],0); // 801B3DA8
  if (crb(c,2)) { goto L_801B3DCC; } // 801B3DAC
  c->r[3]=c->r[29]+0x00000008u; // 801B3DB0
  c->r[4]=c->r[31]+0x00000008u; // 801B3DB4
  c->r[5]=0u+0x00000006u; // 801B3DB8
  c->lr=0x801B3DC0u; f_8018C170(c); // 801B3DBC
  cmps(c,0,(int32_t)c->r[3],0); // 801B3DC0
  if (!crb(c,2)) { goto L_801B3DCC; } // 801B3DC4
  goto L_801B3DE0; // 801B3DC8
L_801B3DCC:;
  c->r[30]=c->r[30]+0x00000001u; // 801B3DCC
  c->r[29]=c->r[29]+0x0000011Cu; // 801B3DD0
  cmpu(c,0,c->r[30],0x00000004u); // 801B3DD4
  if (crb(c,0)) { IRQCHK(c); goto L_801B3DA4; } // 801B3DD8
  c->r[29]=0u+0x00000000u; // 801B3DDC
L_801B3DE0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B3DE0
  if (crb(c,2)) { goto L_801B3E04; } // 801B3DE4
  W16(c->r[29]+0x0000010Eu,c->r[28]); // 801B3DE8
  c->r[0]=R8(c->r[29]+0x0000011Au); // 801B3DEC
  cmps(c,0,(int32_t)c->r[0],0); // 801B3DF0
  if (!crb(c,2)) { goto L_801B3E04; } // 801B3DF4
  c->r[3]=R16(c->r[29]+0x00000000u); // 801B3DF8
  c->r[4]=c->r[28]|c->r[28]; // 801B3DFC
  c->lr=0x801B3E04u; f_801C1834(c); // 801B3E00
L_801B3E04:;
  c->r[3]=0u+0x803D0000u; // 801B3E04
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B3E08
  c->r[12]=R32(c->r[3]+0x000004C8u); // 801B3E0C
  cmps(c,0,(int32_t)c->r[12],0); // 801B3E10
  if (crb(c,2)) { goto L_801B3E40; } // 801B3E14
  c->r[3]=c->r[31]+0x00000008u; // 801B3E18
  c->r[4]=c->r[31]+0x0000000Eu; // 801B3E1C
  c->r[5]=c->r[31]+0x00000011u; // 801B3E20
  c->r[6]=c->r[31]+0x00000110u; // 801B3E24
  c->r[7]=0u+0x00000001u; // 801B3E28
  c->ctr=c->r[12]; // 801B3E2C
  if (true) { c->lr=0x801B3E34u; dispatch(c,c->ctr); } // 801B3E30
  goto L_801B3E40; // 801B3E34
L_801B3E38:;
  c->r[31]=c->r[31]+0x0000011Cu; // 801B3E38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B3C84; } // 801B3E3C
L_801B3E40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3E40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B3E44
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B3E48
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B3E4C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B3E50
  c->lr=c->r[0]; // 801B3E54
  c->r[1]=c->r[1]+0x00000020u; // 801B3E58
  return; // 801B3E5C
}

// BTM_SetDefaultLinkSuperTout
void f_801B3E60(Ctx* __restrict c) {
  trace_call(0x801B3E60u);
  c->r[4]=0u+0x803D0000u; // 801B3E60
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B3E64
  W16(c->r[4]+0x000004C6u,c->r[3]); // 801B3E68
  return; // 801B3E6C
}

// BTM_IsAclConnectionUp
void f_801B3E70(Ctx* __restrict c) {
  trace_call(0x801B3E70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3E70
  c->r[0]=c->lr; // 801B3E74
  c->r[4]=0u+0x803D0000u; // 801B3E78
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3E7C
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B3E80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B3E84
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B3E88
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B3E8C
  c->r[29]=c->r[3]|c->r[3]; // 801B3E90
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B3E94
  cmpu(c,0,c->r[0],0x00000003u); // 801B3E98
  if (crb(c,0)) { goto L_801B3ECC; } // 801B3E9C
  c->r[3]=0u+0x000D0000u; // 801B3EA0
  c->r[4]=0u+0x80330000u; // 801B3EA4
  c->r[5]=R8(c->r[29]+0x00000000u); // 801B3EA8
  c->r[3]=c->r[3]+0x00000002u; // 801B3EAC
  c->r[6]=R8(c->r[29]+0x00000001u); // 801B3EB0
  c->r[4]=c->r[4]+0x00002548u; // 801B3EB4
  c->r[7]=R8(c->r[29]+0x00000002u); // 801B3EB8
  c->r[8]=R8(c->r[29]+0x00000003u); // 801B3EBC
  c->r[9]=R8(c->r[29]+0x00000004u); // 801B3EC0
  c->r[10]=R8(c->r[29]+0x00000005u); // 801B3EC4
  c->lr=0x801B3ECCu; f_801ACBB0(c); // 801B3EC8
L_801B3ECC:;
  c->r[3]=0u+0x803D0000u; // 801B3ECC
  c->r[31]=0u+0x00000000u; // 801B3ED0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B3ED4
  c->r[30]=c->r[3]+0x00000034u; // 801B3ED8
L_801B3EDC:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B3EDC
  cmps(c,0,(int32_t)c->r[0],0); // 801B3EE0
  if (crb(c,2)) { goto L_801B3F04; } // 801B3EE4
  c->r[4]=c->r[29]|c->r[29]; // 801B3EE8
  c->r[3]=c->r[30]+0x00000008u; // 801B3EEC
  c->r[5]=0u+0x00000006u; // 801B3EF0
  c->lr=0x801B3EF8u; f_8018C170(c); // 801B3EF4
  cmps(c,0,(int32_t)c->r[3],0); // 801B3EF8
  if (!crb(c,2)) { goto L_801B3F04; } // 801B3EFC
  goto L_801B3F18; // 801B3F00
L_801B3F04:;
  c->r[31]=c->r[31]+0x00000001u; // 801B3F04
  c->r[30]=c->r[30]+0x0000011Cu; // 801B3F08
  cmpu(c,0,c->r[31],0x00000004u); // 801B3F0C
  if (crb(c,0)) { IRQCHK(c); goto L_801B3EDC; } // 801B3F10
  c->r[30]=0u+0x00000000u; // 801B3F14
L_801B3F18:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B3F18
  if (crb(c,2)) { goto L_801B3F28; } // 801B3F1C
  c->r[3]=0u+0x00000001u; // 801B3F20
  goto L_801B3F2C; // 801B3F24
L_801B3F28:;
  c->r[3]=0u+0x00000000u; // 801B3F28
L_801B3F2C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3F2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B3F30
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B3F34
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B3F38
  c->lr=c->r[0]; // 801B3F3C
  c->r[1]=c->r[1]+0x00000020u; // 801B3F40
  return; // 801B3F44
}

// BTM_GetNumAclLinks
void f_801B3F48(Ctx* __restrict c) {
  trace_call(0x801B3F48u);
  c->r[4]=0u+0x803D0000u; // 801B3F48
  c->r[3]=0u+0x00000000u; // 801B3F4C
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B3F50
  c->r[0]=R8(c->r[4]+0x0000014Du); // 801B3F54
  cmps(c,0,(int32_t)c->r[0],0); // 801B3F58
  if (crb(c,2)) { goto L_801B3F64; } // 801B3F5C
  c->r[3]=0u+0x00000001u; // 801B3F60
L_801B3F64:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 801B3F64
  cmps(c,0,(int32_t)c->r[0],0); // 801B3F68
  if (crb(c,2)) { goto L_801B3F78; } // 801B3F6C
  c->r[0]=c->r[3]+0x00000001u; // 801B3F70
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801B3F74
L_801B3F78:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 801B3F78
  cmps(c,0,(int32_t)c->r[0],0); // 801B3F7C
  if (crb(c,2)) { goto L_801B3F8C; } // 801B3F80
  c->r[0]=c->r[3]+0x00000001u; // 801B3F84
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801B3F88
L_801B3F8C:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 801B3F8C
  cmps(c,0,(int32_t)c->r[0],0); // 801B3F90
  if (crb(c,2)) return; // 801B3F94
  c->r[0]=c->r[3]+0x00000001u; // 801B3F98
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801B3F9C
  return; // 801B3FA0
}

// btm_get_acl_disc_reason_code
void f_801B3FA4(Ctx* __restrict c) {
  trace_call(0x801B3FA4u);
  c->r[3]=0u+0x803D0000u; // 801B3FA4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B3FA8
  c->r[3]=R8(c->r[3]+0x000027BFu); // 801B3FAC
  return; // 801B3FB0
}

// BTM_GetHCIConnHandle
void f_801B3FB4(Ctx* __restrict c) {
  trace_call(0x801B3FB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3FB4
  c->r[0]=c->lr; // 801B3FB8
  c->r[4]=0u+0x803D0000u; // 801B3FBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3FC0
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B3FC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B3FC8
  c->r[31]=0u+0x00000000u; // 801B3FCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B3FD0
  c->r[30]=c->r[4]+0x00000034u; // 801B3FD4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B3FD8
  c->r[29]=c->r[3]|c->r[3]; // 801B3FDC
L_801B3FE0:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B3FE0
  cmps(c,0,(int32_t)c->r[0],0); // 801B3FE4
  if (crb(c,2)) { goto L_801B4008; } // 801B3FE8
  c->r[4]=c->r[29]|c->r[29]; // 801B3FEC
  c->r[3]=c->r[30]+0x00000008u; // 801B3FF0
  c->r[5]=0u+0x00000006u; // 801B3FF4
  c->lr=0x801B3FFCu; f_8018C170(c); // 801B3FF8
  cmps(c,0,(int32_t)c->r[3],0); // 801B3FFC
  if (!crb(c,2)) { goto L_801B4008; } // 801B4000
  goto L_801B401C; // 801B4004
L_801B4008:;
  c->r[31]=c->r[31]+0x00000001u; // 801B4008
  c->r[30]=c->r[30]+0x0000011Cu; // 801B400C
  cmpu(c,0,c->r[31],0x00000004u); // 801B4010
  if (crb(c,0)) { IRQCHK(c); goto L_801B3FE0; } // 801B4014
  c->r[30]=0u+0x00000000u; // 801B4018
L_801B401C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B401C
  if (crb(c,2)) { goto L_801B402C; } // 801B4020
  c->r[3]=R16(c->r[30]+0x00000000u); // 801B4024
  goto L_801B4034; // 801B4028
L_801B402C:;
  c->r[3]=0u+0x00010000u; // 801B402C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B4030
L_801B4034:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4034
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B4038
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B403C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B4040
  c->lr=c->r[0]; // 801B4044
  c->r[1]=c->r[1]+0x00000020u; // 801B4048
  return; // 801B404C
}

// btm_process_clk_off_comp_evt
void f_801B4050(Ctx* __restrict c) {
  trace_call(0x801B4050u);
  c->r[5]=0u+0x803D0000u; // 801B4050
  c->r[6]=0u+0x00000000u; // 801B4054
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B4058
  c->r[0]=R8(c->r[5]+0x0000014Du); // 801B405C
  cmps(c,0,(int32_t)c->r[0],0); // 801B4060
  if (crb(c,2)) { goto L_801B4074; } // 801B4064
  c->r[0]=R16(c->r[5]+0x00000034u); // 801B4068
  cmpu(c,0,c->r[0],c->r[3]); // 801B406C
  if (crb(c,2)) { goto L_801B40CC; } // 801B4070
L_801B4074:;
  c->r[0]=R8(c->r[5]+0x00000269u); // 801B4074
  c->r[6]=0u+0x00000001u; // 801B4078
  cmps(c,0,(int32_t)c->r[0],0); // 801B407C
  if (crb(c,2)) { goto L_801B4090; } // 801B4080
  c->r[0]=R16(c->r[5]+0x00000150u); // 801B4084
  cmpu(c,0,c->r[0],c->r[3]); // 801B4088
  if (crb(c,2)) { goto L_801B40CC; } // 801B408C
L_801B4090:;
  c->r[0]=R8(c->r[5]+0x00000385u); // 801B4090
  c->r[6]=0u+0x00000002u; // 801B4094
  cmps(c,0,(int32_t)c->r[0],0); // 801B4098
  if (crb(c,2)) { goto L_801B40AC; } // 801B409C
  c->r[0]=R16(c->r[5]+0x0000026Cu); // 801B40A0
  cmpu(c,0,c->r[0],c->r[3]); // 801B40A4
  if (crb(c,2)) { goto L_801B40CC; } // 801B40A8
L_801B40AC:;
  c->r[0]=R8(c->r[5]+0x000004A1u); // 801B40AC
  c->r[6]=0u+0x00000003u; // 801B40B0
  cmps(c,0,(int32_t)c->r[0],0); // 801B40B4
  if (crb(c,2)) { goto L_801B40C8; } // 801B40B8
  c->r[0]=R16(c->r[5]+0x00000388u); // 801B40BC
  cmpu(c,0,c->r[0],c->r[3]); // 801B40C0
  if (crb(c,2)) { goto L_801B40CC; } // 801B40C4
L_801B40C8:;
  c->r[6]=0u+0x00000004u; // 801B40C8
L_801B40CC:;
  cmpu(c,0,c->r[6],0x00000004u); // 801B40CC
  if (!crb(c,0)) return; // 801B40D0
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)284); // 801B40D4
  c->r[3]=0u+0x803D0000u; // 801B40D8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B40DC
  c->r[3]=c->r[3]+c->r[0]; // 801B40E0
  W16(c->r[3]+0x0000003Au,c->r[4]); // 801B40E4
  return; // 801B40E8
}

// btm_acl_role_changed
void f_801B40EC(Ctx* __restrict c) {
  trace_call(0x801B40ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B40EC
  c->r[0]=c->lr; // 801B40F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B40F4
  c->r[11]=c->r[1]+0x00000030u; // 801B40F8
  c->lr=0x801B4100u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B40FC
  cmps(c,0,(int32_t)c->r[4],0); // 801B4100
  c->r[25]=c->r[3]|c->r[3]; // 801B4104
  c->r[26]=c->r[4]|c->r[4]; // 801B4108
  c->r[28]=c->r[5]|c->r[5]; // 801B410C
  if (crb(c,2)) { goto L_801B411C; } // 801B4110
  c->r[27]=c->r[26]|c->r[26]; // 801B4114
  goto L_801B4128; // 801B4118
L_801B411C:;
  c->r[3]=0u+0x803D0000u; // 801B411C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B4120
  c->r[27]=c->r[3]+0x000027B4u; // 801B4124
L_801B4128:;
  c->r[3]=0u+0x803D0000u; // 801B4128
  c->r[30]=0u+0x00000000u; // 801B412C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B4130
  c->r[29]=c->r[3]+0x00000034u; // 801B4134
L_801B4138:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801B4138
  cmps(c,0,(int32_t)c->r[0],0); // 801B413C
  if (crb(c,2)) { goto L_801B4160; } // 801B4140
  c->r[4]=c->r[27]|c->r[27]; // 801B4144
  c->r[3]=c->r[29]+0x00000008u; // 801B4148
  c->r[5]=0u+0x00000006u; // 801B414C
  c->lr=0x801B4154u; f_8018C170(c); // 801B4150
  cmps(c,0,(int32_t)c->r[3],0); // 801B4154
  if (!crb(c,2)) { goto L_801B4160; } // 801B4158
  goto L_801B4174; // 801B415C
L_801B4160:;
  c->r[30]=c->r[30]+0x00000001u; // 801B4160
  c->r[29]=c->r[29]+0x0000011Cu; // 801B4164
  cmpu(c,0,c->r[30],0x00000004u); // 801B4168
  if (crb(c,0)) { IRQCHK(c); goto L_801B4138; } // 801B416C
  c->r[29]=0u+0x00000000u; // 801B4170
L_801B4174:;
  c->r[3]=0u+0x803D0000u; // 801B4174
  cmps(c,0,(int32_t)c->r[29],0); // 801B4178
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B417C
  c->r[31]=c->r[3]+0x00000624u; // 801B4180
  if (crb(c,2)) { goto L_801B42C8; } // 801B4184
  cmps(c,0,(int32_t)c->r[25],0); // 801B4188
  W8(c->r[31]+0x00000000u,c->r[25]); // 801B418C
  if (!crb(c,2)) { goto L_801B41AC; } // 801B4190
  W8(c->r[31]+0x00000001u,c->r[28]); // 801B4194
  c->r[4]=c->r[27]|c->r[27]; // 801B4198
  c->r[3]=c->r[31]+0x00000002u; // 801B419C
  c->r[5]=0u+0x00000006u; // 801B41A0
  c->lr=0x801B41A8u; f_80004338(c); // 801B41A4
  W8(c->r[29]+0x0000011Au,c->r[28]); // 801B41A8
L_801B41AC:;
  cmps(c,0,(int32_t)c->r[26],0); // 801B41AC
  if (crb(c,2)) { goto L_801B4228; } // 801B41B0
  c->r[3]=0u+0x803D0000u; // 801B41B4
  c->r[30]=R16(c->r[29]+0x0000010Eu); // 801B41B8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B41BC
  c->r[28]=0u+0x00000000u; // 801B41C0
  c->r[27]=c->r[3]+0x00000034u; // 801B41C4
L_801B41C8:;
  c->r[0]=R8(c->r[27]+0x00000119u); // 801B41C8
  cmps(c,0,(int32_t)c->r[0],0); // 801B41CC
  if (crb(c,2)) { goto L_801B41F0; } // 801B41D0
  c->r[3]=c->r[27]+0x00000008u; // 801B41D4
  c->r[4]=c->r[29]+0x00000008u; // 801B41D8
  c->r[5]=0u+0x00000006u; // 801B41DC
  c->lr=0x801B41E4u; f_8018C170(c); // 801B41E0
  cmps(c,0,(int32_t)c->r[3],0); // 801B41E4
  if (!crb(c,2)) { goto L_801B41F0; } // 801B41E8
  goto L_801B4204; // 801B41EC
L_801B41F0:;
  c->r[28]=c->r[28]+0x00000001u; // 801B41F0
  c->r[27]=c->r[27]+0x0000011Cu; // 801B41F4
  cmpu(c,0,c->r[28],0x00000004u); // 801B41F8
  if (crb(c,0)) { IRQCHK(c); goto L_801B41C8; } // 801B41FC
  c->r[27]=0u+0x00000000u; // 801B4200
L_801B4204:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B4204
  if (crb(c,2)) { goto L_801B4228; } // 801B4208
  W16(c->r[27]+0x0000010Eu,c->r[30]); // 801B420C
  c->r[0]=R8(c->r[27]+0x0000011Au); // 801B4210
  cmps(c,0,(int32_t)c->r[0],0); // 801B4214
  if (!crb(c,2)) { goto L_801B4228; } // 801B4218
  c->r[3]=R16(c->r[27]+0x00000000u); // 801B421C
  c->r[4]=c->r[30]|c->r[30]; // 801B4220
  c->lr=0x801B4228u; f_801C1834(c); // 801B4224
L_801B4228:;
  c->r[0]=R8(c->r[29]+0x0000011Bu); // 801B4228
  cmpu(c,0,c->r[0],0x00000003u); // 801B422C
  if (!crb(c,2)) { goto L_801B4254; } // 801B4230
  c->r[3]=R16(c->r[29]+0x00000000u); // 801B4234
  c->r[4]=0u+0x00000001u; // 801B4238
  c->lr=0x801B4240u; f_801C0440(c); // 801B423C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B4240
  if (crb(c,2)) { goto L_801B4254; } // 801B4244
  c->r[0]=0u+0x00000004u; // 801B4248
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 801B424C
  goto L_801B42C8; // 801B4250
L_801B4254:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B4254
  if (crb(c,2)) { goto L_801B4270; } // 801B4258
  c->r[0]=R8(c->r[29]+0x0000011Bu); // 801B425C
  cmpu(c,0,c->r[0],0x00000005u); // 801B4260
  if (!crb(c,2)) { goto L_801B4270; } // 801B4264
  c->r[0]=0u+0x00000000u; // 801B4268
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 801B426C
L_801B4270:;
  c->r[30]=0u+0x803D0000u; // 801B4270
  c->r[30]=c->r[30]+0xFFFF8118u; // 801B4274
  c->r[12]=R32(c->r[30]+0x0000062Cu); // 801B4278
  cmps(c,0,(int32_t)c->r[12],0); // 801B427C
  if (crb(c,2)) { goto L_801B4298; } // 801B4280
  c->r[3]=c->r[31]|c->r[31]; // 801B4284
  c->ctr=c->r[12]; // 801B4288
  if (true) { c->lr=0x801B4290u; dispatch(c,c->ctr); } // 801B428C
  c->r[0]=0u+0x00000000u; // 801B4290
  W32(c->r[30]+0x0000062Cu,c->r[0]); // 801B4294
L_801B4298:;
  c->r[3]=0u+0x803D0000u; // 801B4298
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B429C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B42A0
  cmpu(c,0,c->r[0],0x00000004u); // 801B42A4
  if (crb(c,0)) { goto L_801B42C8; } // 801B42A8
  c->r[3]=0u+0x000D0000u; // 801B42AC
  c->r[4]=0u+0x80330000u; // 801B42B0
  c->r[5]=R8(c->r[31]+0x00000001u); // 801B42B4
  c->r[3]=c->r[3]+0x00000003u; // 801B42B8
  c->r[6]=R8(c->r[31]+0x00000000u); // 801B42BC
  c->r[4]=c->r[4]+0x00002584u; // 801B42C0
  c->lr=0x801B42C8u; f_801ACB50(c); // 801B42C4
L_801B42C8:;
  c->r[11]=c->r[1]+0x00000030u; // 801B42C8
  c->lr=0x801B42D0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B42CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B42D0
  c->lr=c->r[0]; // 801B42D4
  c->r[1]=c->r[1]+0x00000030u; // 801B42D8
  return; // 801B42DC
}

// btm_acl_timeout
void f_801B42E0(Ctx* __restrict c) {
  trace_call(0x801B42E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B42E0
  c->r[0]=c->lr; // 801B42E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B42E8
  c->r[0]=R32(c->r[3]+0x00000010u); // 801B42EC
  cmpu(c,0,c->r[0],0x00000004u); // 801B42F0
  if (!crb(c,2)) { goto L_801B432C; } // 801B42F4
  c->r[4]=0u+0x803D0000u; // 801B42F8
  c->r[3]=0u+0x0000000Au; // 801B42FC
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B4300
  c->r[0]=0u+0x00000000u; // 801B4304
  c->r[12]=R32(c->r[4]+0x000005C4u); // 801B4308
  W8(c->r[1]+0x00000008u,c->r[3]); // 801B430C
  cmps(c,0,(int32_t)c->r[12],0); // 801B4310
  W16(c->r[1]+0x00000010u,c->r[0]); // 801B4314
  W32(c->r[4]+0x000005C4u,c->r[0]); // 801B4318
  if (crb(c,2)) { goto L_801B432C; } // 801B431C
  c->r[3]=c->r[1]+0x00000008u; // 801B4320
  c->ctr=c->r[12]; // 801B4324
  if (true) { c->lr=0x801B432Cu; dispatch(c,c->ctr); } // 801B4328
L_801B432C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B432C
  c->lr=c->r[0]; // 801B4330
  c->r[1]=c->r[1]+0x00000020u; // 801B4334
  return; // 801B4338
}

// btm_get_max_packet_size
void f_801B433C(Ctx* __restrict c) {
  trace_call(0x801B433Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B433C
  c->r[0]=c->lr; // 801B4340
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4344
  c->r[11]=c->r[1]+0x00000020u; // 801B4348
  c->lr=0x801B4350u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B434C
  c->r[4]=0u+0x803D0000u; // 801B4350
  c->r[27]=c->r[3]|c->r[3]; // 801B4354
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B4358
  c->r[30]=0u+0x00000000u; // 801B435C
  c->r[29]=c->r[4]+0x00000034u; // 801B4360
L_801B4364:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801B4364
  cmps(c,0,(int32_t)c->r[0],0); // 801B4368
  if (crb(c,2)) { goto L_801B438C; } // 801B436C
  c->r[4]=c->r[27]|c->r[27]; // 801B4370
  c->r[3]=c->r[29]+0x00000008u; // 801B4374
  c->r[5]=0u+0x00000006u; // 801B4378
  c->lr=0x801B4380u; f_8018C170(c); // 801B437C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4380
  if (!crb(c,2)) { goto L_801B438C; } // 801B4384
  goto L_801B43A0; // 801B4388
L_801B438C:;
  c->r[30]=c->r[30]+0x00000001u; // 801B438C
  c->r[29]=c->r[29]+0x0000011Cu; // 801B4390
  cmpu(c,0,c->r[30],0x00000004u); // 801B4394
  if (crb(c,0)) { IRQCHK(c); goto L_801B4364; } // 801B4398
  c->r[29]=0u+0x00000000u; // 801B439C
L_801B43A0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B43A0
  c->r[28]=0u+0x00000000u; // 801B43A4
  c->r[31]=0u+0x00000000u; // 801B43A8
  if (crb(c,2)) { goto L_801B43B8; } // 801B43AC
  c->r[28]=R16(c->r[29]+0x00000002u); // 801B43B0
  goto L_801B43DC; // 801B43B4
L_801B43B8:;
  c->r[30]=0u+0x803D0000u; // 801B43B8
  c->r[4]=c->r[27]|c->r[27]; // 801B43BC
  c->r[30]=c->r[30]+0xFFFF8118u; // 801B43C0
  c->r[5]=0u+0x00000006u; // 801B43C4
  c->r[3]=c->r[30]+0x00000630u; // 801B43C8
  c->lr=0x801B43D0u; f_8018C170(c); // 801B43CC
  cmps(c,0,(int32_t)c->r[3],0); // 801B43D0
  if (!crb(c,2)) { goto L_801B43DC; } // 801B43D4
  c->r[28]=R16(c->r[30]+0x00000654u); // 801B43D8
L_801B43DC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B43DC
  if (crb(c,2)) { goto L_801B44A0; } // 801B43E0
  c->r[0]=rotl(c->r[28],0)&0x00002000u; cr0(c,c->r[0]); // 801B43E4
  if (!crb(c,2)) { goto L_801B43F4; } // 801B43E8
  c->r[31]=0u+0x000003FDu; // 801B43EC
  goto L_801B44A0; // 801B43F0
L_801B43F4:;
  c->r[0]=rotl(c->r[28],0)&0x00001000u; cr0(c,c->r[0]); // 801B43F4
  if (!crb(c,2)) { goto L_801B4404; } // 801B43F8
  c->r[31]=0u+0x000002A7u; // 801B43FC
  goto L_801B44A0; // 801B4400
L_801B4404:;
  c->r[0]=rotl(c->r[28],0)&0x00000200u; cr0(c,c->r[0]); // 801B4404
  if (!crb(c,2)) { goto L_801B4414; } // 801B4408
  c->r[31]=0u+0x00000228u; // 801B440C
  goto L_801B44A0; // 801B4410
L_801B4414:;
  c->r[0]=rotl(c->r[28],0)&0x00008000u; cr0(c,c->r[0]); // 801B4414
  if (crb(c,2)) { goto L_801B4424; } // 801B4418
  c->r[31]=0u+0x00000153u; // 801B441C
  goto L_801B44A0; // 801B4420
L_801B4424:;
  c->r[0]=rotl(c->r[28],0)&0x00000100u; cr0(c,c->r[0]); // 801B4424
  if (!crb(c,2)) { goto L_801B4434; } // 801B4428
  c->r[31]=0u+0x0000016Fu; // 801B442C
  goto L_801B44A0; // 801B4430
L_801B4434:;
  c->r[0]=rotl(c->r[28],0)&0x00004000u; cr0(c,c->r[0]); // 801B4434
  if (crb(c,2)) { goto L_801B4444; } // 801B4438
  c->r[31]=0u+0x000000E0u; // 801B443C
  goto L_801B44A0; // 801B4440
L_801B4444:;
  c->r[0]=rotl(c->r[28],0)&0x00000800u; cr0(c,c->r[0]); // 801B4444
  if (crb(c,2)) { goto L_801B4454; } // 801B4448
  c->r[31]=0u+0x000000B7u; // 801B444C
  goto L_801B44A0; // 801B4450
L_801B4454:;
  c->r[0]=rotl(c->r[28],0)&0x00000400u; cr0(c,c->r[0]); // 801B4454
  if (crb(c,2)) { goto L_801B4464; } // 801B4458
  c->r[31]=0u+0x00000079u; // 801B445C
  goto L_801B44A0; // 801B4460
L_801B4464:;
  c->r[0]=rotl(c->r[28],0)&0x00000004u; cr0(c,c->r[0]); // 801B4464
  if (!crb(c,2)) { goto L_801B4474; } // 801B4468
  c->r[31]=0u+0x00000053u; // 801B446C
  goto L_801B44A0; // 801B4470
L_801B4474:;
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 801B4474
  if (!crb(c,2)) { goto L_801B4484; } // 801B4478
  c->r[31]=0u+0x00000036u; // 801B447C
  goto L_801B44A0; // 801B4480
L_801B4484:;
  c->r[0]=rotl(c->r[28],0)&0x00000010u; cr0(c,c->r[0]); // 801B4484
  if (crb(c,2)) { goto L_801B4494; } // 801B4488
  c->r[31]=0u+0x0000001Bu; // 801B448C
  goto L_801B44A0; // 801B4490
L_801B4494:;
  c->r[0]=rotl(c->r[28],0)&0x00000008u; cr0(c,c->r[0]); // 801B4494
  if (crb(c,2)) { goto L_801B44A0; } // 801B4498
  c->r[31]=0u+0x00000011u; // 801B449C
L_801B44A0:;
  cmpu(c,0,c->r[31],0x000003FDu); // 801B44A0
  if (!crb(c,2)) { goto L_801B44C0; } // 801B44A4
  c->r[3]=0u+0x803C0000u; // 801B44A8
  c->r[3]=c->r[3]+0x00007BF0u; // 801B44AC
  c->r[0]=R16(c->r[3]+0x0000007Cu); // 801B44B0
  cmpu(c,0,c->r[0],0x000003F9u); // 801B44B4
  if (!crb(c,2)) { goto L_801B44C0; } // 801B44B8
  c->r[31]=0u+0x000003F9u; // 801B44BC
L_801B44C0:;
  c->r[11]=c->r[1]+0x00000020u; // 801B44C0
  c->r[3]=c->r[31]|c->r[31]; // 801B44C4
  c->lr=0x801B44CCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B44C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B44CC
  c->lr=c->r[0]; // 801B44D0
  c->r[1]=c->r[1]+0x00000020u; // 801B44D4
  return; // 801B44D8
}

// BTM_AclRegisterForChanges
void f_801B44DC(Ctx* __restrict c) {
  trace_call(0x801B44DCu);
  cmps(c,0,(int32_t)c->r[3],0); // 801B44DC
  if (!crb(c,2)) { goto L_801B44F8; } // 801B44E0
  c->r[3]=0u+0x803D0000u; // 801B44E4
  c->r[0]=0u+0x00000000u; // 801B44E8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B44EC
  W32(c->r[3]+0x000004C8u,c->r[0]); // 801B44F0
  goto L_801B4518; // 801B44F4
L_801B44F8:;
  c->r[4]=0u+0x803D0000u; // 801B44F8
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B44FC
  c->r[0]=R32(c->r[4]+0x000004C8u); // 801B4500
  cmps(c,0,(int32_t)c->r[0],0); // 801B4504
  if (crb(c,2)) { goto L_801B4514; } // 801B4508
  c->r[3]=0u+0x00000002u; // 801B450C
  return; // 801B4510
L_801B4514:;
  W32(c->r[4]+0x000004C8u,c->r[3]); // 801B4514
L_801B4518:;
  c->r[3]=0u+0x00000000u; // 801B4518
  return; // 801B451C
}

// btm_qos_setup_complete
void f_801B4520(Ctx* __restrict c) {
  trace_call(0x801B4520u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4520
  c->r[0]=c->lr; // 801B4524
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B4528
  c->r[11]=c->r[1]+0x00000040u; // 801B452C
  c->lr=0x801B4534u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B4530
  c->r[31]=0u+0x803D0000u; // 801B4534
  c->r[27]=c->r[3]|c->r[3]; // 801B4538
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B453C
  c->r[28]=c->r[4]|c->r[4]; // 801B4540
  c->r[30]=R32(c->r[31]+0x00000618u); // 801B4544
  c->r[29]=c->r[5]|c->r[5]; // 801B4548
  c->r[3]=c->r[31]+0x00000600u; // 801B454C
  c->lr=0x801B4554u; f_801AD15C(c); // 801B4550
  c->r[0]=0u+0x00000000u; // 801B4554
  cmps(c,0,(int32_t)c->r[30],0); // 801B4558
  W32(c->r[31]+0x00000618u,c->r[0]); // 801B455C
  if (crb(c,2)) { goto L_801B45E0; } // 801B4560
  cmps(c,0,(int32_t)c->r[29],0); // 801B4564
  W8(c->r[1]+0x00000022u,c->r[27]); // 801B4568
  W16(c->r[1]+0x00000020u,c->r[28]); // 801B456C
  if (crb(c,2)) { goto L_801B45A4; } // 801B4570
  c->r[0]=R8(c->r[29]+0x00000000u); // 801B4574
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B4578
  c->r[0]=R8(c->r[29]+0x00000001u); // 801B457C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B4580
  c->r[0]=R32(c->r[29]+0x00000004u); // 801B4584
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B4588
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801B458C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4590
  c->r[0]=R32(c->r[29]+0x00000010u); // 801B4594
  W32(c->r[1]+0x00000018u,c->r[0]); // 801B4598
  c->r[0]=R32(c->r[29]+0x00000014u); // 801B459C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B45A0
L_801B45A4:;
  c->r[3]=0u+0x803D0000u; // 801B45A4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B45A8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B45AC
  cmpu(c,0,c->r[0],0x00000005u); // 801B45B0
  if (crb(c,0)) { goto L_801B45D0; } // 801B45B4
  c->r[3]=0u+0x000D0000u; // 801B45B8
  c->r[4]=0u+0x80330000u; // 801B45BC
  c->r[5]=R32(c->r[29]+0x00000014u); // 801B45C0
  c->r[3]=c->r[3]+0x00000004u; // 801B45C4
  c->r[4]=c->r[4]+0x000025ECu; // 801B45C8
  c->lr=0x801B45D0u; f_801ACB38(c); // 801B45CC
L_801B45D0:;
  c->r[12]=c->r[30]|c->r[30]; // 801B45D0
  c->r[3]=c->r[1]+0x00000008u; // 801B45D4
  c->ctr=c->r[12]; // 801B45D8
  if (true) { c->lr=0x801B45E0u; dispatch(c,c->ctr); } // 801B45DC
L_801B45E0:;
  c->r[11]=c->r[1]+0x00000040u; // 801B45E0
  c->lr=0x801B45E8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B45E4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B45E8
  c->lr=c->r[0]; // 801B45EC
  c->r[1]=c->r[1]+0x00000040u; // 801B45F0
  return; // 801B45F4
}

// BTM_ReadRSSI
void f_801B45F8(Ctx* __restrict c) {
  trace_call(0x801B45F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B45F8
  c->r[0]=c->lr; // 801B45FC
  c->r[5]=0u+0x803D0000u; // 801B4600
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4604
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B4608
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B460C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B4610
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B4614
  c->r[29]=c->r[4]|c->r[4]; // 801B4618
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B461C
  c->r[28]=c->r[3]|c->r[3]; // 801B4620
  c->r[0]=R8(c->r[5]+0x000027C0u); // 801B4624
  cmpu(c,0,c->r[0],0x00000003u); // 801B4628
  if (crb(c,0)) { goto L_801B465C; } // 801B462C
  c->r[3]=0u+0x000D0000u; // 801B4630
  c->r[4]=0u+0x80330000u; // 801B4634
  c->r[5]=R8(c->r[28]+0x00000000u); // 801B4638
  c->r[3]=c->r[3]+0x00000002u; // 801B463C
  c->r[6]=R8(c->r[28]+0x00000001u); // 801B4640
  c->r[4]=c->r[4]+0x00002614u; // 801B4644
  c->r[7]=R8(c->r[28]+0x00000002u); // 801B4648
  c->r[8]=R8(c->r[28]+0x00000003u); // 801B464C
  c->r[9]=R8(c->r[28]+0x00000004u); // 801B4650
  c->r[10]=R8(c->r[28]+0x00000005u); // 801B4654
  c->lr=0x801B465Cu; f_801ACBB0(c); // 801B4658
L_801B465C:;
  c->r[3]=0u+0x803D0000u; // 801B465C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B4660
  c->r[0]=R32(c->r[3]+0x000005E0u); // 801B4664
  cmps(c,0,(int32_t)c->r[0],0); // 801B4668
  if (crb(c,2)) { goto L_801B4678; } // 801B466C
  c->r[3]=0u+0x00000002u; // 801B4670
  goto L_801B4714; // 801B4674
L_801B4678:;
  c->r[30]=c->r[3]+0x00000034u; // 801B4678
  c->r[31]=0u+0x00000000u; // 801B467C
L_801B4680:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B4680
  cmps(c,0,(int32_t)c->r[0],0); // 801B4684
  if (crb(c,2)) { goto L_801B46A8; } // 801B4688
  c->r[4]=c->r[28]|c->r[28]; // 801B468C
  c->r[3]=c->r[30]+0x00000008u; // 801B4690
  c->r[5]=0u+0x00000006u; // 801B4694
  c->lr=0x801B469Cu; f_8018C170(c); // 801B4698
  cmps(c,0,(int32_t)c->r[3],0); // 801B469C
  if (!crb(c,2)) { goto L_801B46A8; } // 801B46A0
  goto L_801B46BC; // 801B46A4
L_801B46A8:;
  c->r[31]=c->r[31]+0x00000001u; // 801B46A8
  c->r[30]=c->r[30]+0x0000011Cu; // 801B46AC
  cmpu(c,0,c->r[31],0x00000004u); // 801B46B0
  if (crb(c,0)) { IRQCHK(c); goto L_801B4680; } // 801B46B4
  c->r[30]=0u+0x00000000u; // 801B46B8
L_801B46BC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B46BC
  if (crb(c,2)) { goto L_801B4710; } // 801B46C0
  c->r[31]=0u+0x803D0000u; // 801B46C4
  c->r[4]=0u+0x00000009u; // 801B46C8
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B46CC
  c->r[5]=0u+0x00000003u; // 801B46D0
  c->r[3]=c->r[31]+0x000005C8u; // 801B46D4
  c->lr=0x801B46DCu; f_801AD0EC(c); // 801B46D8
  W32(c->r[31]+0x000005E0u,c->r[29]); // 801B46DC
  c->r[3]=R16(c->r[30]+0x00000000u); // 801B46E0
  c->lr=0x801B46E8u; f_801C1AF8(c); // 801B46E4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B46E8
  if (!crb(c,2)) { goto L_801B4708; } // 801B46EC
  c->r[0]=0u+0x00000000u; // 801B46F0
  c->r[3]=c->r[31]+0x000005C8u; // 801B46F4
  W32(c->r[31]+0x000005E0u,c->r[0]); // 801B46F8
  c->lr=0x801B4700u; f_801AD15C(c); // 801B46FC
  c->r[3]=0u+0x00000003u; // 801B4700
  goto L_801B4714; // 801B4704
L_801B4708:;
  c->r[3]=0u+0x00000001u; // 801B4708
  goto L_801B4714; // 801B470C
L_801B4710:;
  c->r[3]=0u+0x00000007u; // 801B4710
L_801B4714:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4714
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B4718
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B471C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B4720
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B4724
  c->lr=c->r[0]; // 801B4728
  c->r[1]=c->r[1]+0x00000020u; // 801B472C
  return; // 801B4730
}

// BTM_ReadLinkQuality
void f_801B4734(Ctx* __restrict c) {
  trace_call(0x801B4734u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4734
  c->r[0]=c->lr; // 801B4738
  c->r[5]=0u+0x803D0000u; // 801B473C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4740
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B4744
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B4748
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B474C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B4750
  c->r[29]=c->r[4]|c->r[4]; // 801B4754
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B4758
  c->r[28]=c->r[3]|c->r[3]; // 801B475C
  c->r[0]=R8(c->r[5]+0x000027C0u); // 801B4760
  cmpu(c,0,c->r[0],0x00000003u); // 801B4764
  if (crb(c,0)) { goto L_801B4798; } // 801B4768
  c->r[3]=0u+0x000D0000u; // 801B476C
  c->r[4]=0u+0x80330000u; // 801B4770
  c->r[5]=R8(c->r[28]+0x00000000u); // 801B4774
  c->r[3]=c->r[3]+0x00000002u; // 801B4778
  c->r[6]=R8(c->r[28]+0x00000001u); // 801B477C
  c->r[4]=c->r[4]+0x00002648u; // 801B4780
  c->r[7]=R8(c->r[28]+0x00000002u); // 801B4784
  c->r[8]=R8(c->r[28]+0x00000003u); // 801B4788
  c->r[9]=R8(c->r[28]+0x00000004u); // 801B478C
  c->r[10]=R8(c->r[28]+0x00000005u); // 801B4790
  c->lr=0x801B4798u; f_801ACBB0(c); // 801B4794
L_801B4798:;
  c->r[3]=0u+0x803D0000u; // 801B4798
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B479C
  c->r[0]=R32(c->r[3]+0x000005FCu); // 801B47A0
  cmps(c,0,(int32_t)c->r[0],0); // 801B47A4
  if (crb(c,2)) { goto L_801B47B4; } // 801B47A8
  c->r[3]=0u+0x00000002u; // 801B47AC
  goto L_801B4850; // 801B47B0
L_801B47B4:;
  c->r[30]=c->r[3]+0x00000034u; // 801B47B4
  c->r[31]=0u+0x00000000u; // 801B47B8
L_801B47BC:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B47BC
  cmps(c,0,(int32_t)c->r[0],0); // 801B47C0
  if (crb(c,2)) { goto L_801B47E4; } // 801B47C4
  c->r[4]=c->r[28]|c->r[28]; // 801B47C8
  c->r[3]=c->r[30]+0x00000008u; // 801B47CC
  c->r[5]=0u+0x00000006u; // 801B47D0
  c->lr=0x801B47D8u; f_8018C170(c); // 801B47D4
  cmps(c,0,(int32_t)c->r[3],0); // 801B47D8
  if (!crb(c,2)) { goto L_801B47E4; } // 801B47DC
  goto L_801B47F8; // 801B47E0
L_801B47E4:;
  c->r[31]=c->r[31]+0x00000001u; // 801B47E4
  c->r[30]=c->r[30]+0x0000011Cu; // 801B47E8
  cmpu(c,0,c->r[31],0x00000004u); // 801B47EC
  if (crb(c,0)) { IRQCHK(c); goto L_801B47BC; } // 801B47F0
  c->r[30]=0u+0x00000000u; // 801B47F4
L_801B47F8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B47F8
  if (crb(c,2)) { goto L_801B484C; } // 801B47FC
  c->r[31]=0u+0x803D0000u; // 801B4800
  c->r[4]=0u+0x00000009u; // 801B4804
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B4808
  c->r[5]=0u+0x00000003u; // 801B480C
  c->r[3]=c->r[31]+0x000005E4u; // 801B4810
  c->lr=0x801B4818u; f_801AD0EC(c); // 801B4814
  W32(c->r[31]+0x000005FCu,c->r[29]); // 801B4818
  c->r[3]=R16(c->r[30]+0x00000000u); // 801B481C
  c->lr=0x801B4824u; f_801C1A7C(c); // 801B4820
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B4824
  if (!crb(c,2)) { goto L_801B4844; } // 801B4828
  c->r[3]=c->r[31]+0x000005E4u; // 801B482C
  c->lr=0x801B4834u; f_801AD15C(c); // 801B4830
  c->r[0]=0u+0x00000000u; // 801B4834
  c->r[3]=0u+0x00000003u; // 801B4838
  W32(c->r[31]+0x000005FCu,c->r[0]); // 801B483C
  goto L_801B4850; // 801B4840
L_801B4844:;
  c->r[3]=0u+0x00000001u; // 801B4844
  goto L_801B4850; // 801B4848
L_801B484C:;
  c->r[3]=0u+0x00000007u; // 801B484C
L_801B4850:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4850
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B4854
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B4858
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B485C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B4860
  c->lr=c->r[0]; // 801B4864
  c->r[1]=c->r[1]+0x00000020u; // 801B4868
  return; // 801B486C
}

// btm_read_rssi_complete
void f_801B4870(Ctx* __restrict c) {
  trace_call(0x801B4870u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4870
  c->r[0]=c->lr; // 801B4874
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B4878
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B487C
  c->r[31]=0u+0x803D0000u; // 801B4880
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B4884
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B4888
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B488C
  c->r[29]=c->r[31]+0x00000034u; // 801B4890
  W32(c->r[1]+0x00000020u,c->r[28]); // 801B4894
  c->r[28]=c->r[3]|c->r[3]; // 801B4898
  c->r[3]=c->r[31]+0x000005C8u; // 801B489C
  c->r[30]=R32(c->r[31]+0x000005E0u); // 801B48A0
  c->lr=0x801B48A8u; f_801AD15C(c); // 801B48A4
  c->r[0]=0u+0x00000000u; // 801B48A8
  cmps(c,0,(int32_t)c->r[30],0); // 801B48AC
  W32(c->r[31]+0x000005E0u,c->r[0]); // 801B48B0
  if (crb(c,2)) { goto L_801B496C; } // 801B48B4
  c->r[6]=R8(c->r[28]+0x00000000u); // 801B48B8
  cmps(c,0,(int32_t)c->r[6],0); // 801B48BC
  W8(c->r[1]+0x00000009u,c->r[6]); // 801B48C0
  if (!crb(c,2)) { goto L_801B4954; } // 801B48C4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B48C8
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B48CC
  c->r[3]=R8(c->r[28]+0x00000002u); // 801B48D0
  c->r[4]=R8(c->r[28]+0x00000001u); // 801B48D4
  cmpu(c,0,c->r[0],0x00000004u); // 801B48D8
  c->r[5]=R8(c->r[28]+0x00000003u); // 801B48DC
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 801B48E0
  c->r[0]=c->r[4]+c->r[0]; // 801B48E4
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801B48E8
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801B48EC
  if (crb(c,0)) { goto L_801B490C; } // 801B48F0
  c->r[3]=0u+0x000D0000u; // 801B48F4
  c->r[4]=0u+0x80330000u; // 801B48F8
  c->r[3]=c->r[3]+0x00000003u; // 801B48FC
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801B4900
  c->r[4]=c->r[4]+0x00002684u; // 801B4904
  c->lr=0x801B490Cu; f_801ACB50(c); // 801B4908
L_801B490C:;
  c->r[0]=0u+0x00000004u; // 801B490C
  c->r[3]=0u+0x00000000u; // 801B4910
  c->ctr=c->r[0]; // 801B4914
L_801B4918:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801B4918
  cmps(c,0,(int32_t)c->r[0],0); // 801B491C
  if (crb(c,2)) { goto L_801B4944; } // 801B4920
  c->r[0]=R16(c->r[29]+0x00000000u); // 801B4924
  cmpu(c,0,c->r[31],c->r[0]); // 801B4928
  if (!crb(c,2)) { goto L_801B4944; } // 801B492C
  c->r[3]=c->r[1]+0x0000000Bu; // 801B4930
  c->r[4]=c->r[29]+0x00000008u; // 801B4934
  c->r[5]=0u+0x00000006u; // 801B4938
  c->lr=0x801B4940u; f_80004338(c); // 801B493C
  goto L_801B495C; // 801B4940
L_801B4944:;
  c->r[3]=c->r[3]+0x00000001u; // 801B4944
  c->r[29]=c->r[29]+0x0000011Cu; // 801B4948
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B4918; } // 801B494C
  goto L_801B495C; // 801B4950
L_801B4954:;
  c->r[0]=0u+0x0000000Au; // 801B4954
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B4958
L_801B495C:;
  c->r[12]=c->r[30]|c->r[30]; // 801B495C
  c->r[3]=c->r[1]+0x00000008u; // 801B4960
  c->ctr=c->r[12]; // 801B4964
  if (true) { c->lr=0x801B496Cu; dispatch(c,c->ctr); } // 801B4968
L_801B496C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B496C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B4970
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B4974
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B4978
  c->r[28]=R32(c->r[1]+0x00000020u); // 801B497C
  c->lr=c->r[0]; // 801B4980
  c->r[1]=c->r[1]+0x00000030u; // 801B4984
  return; // 801B4988
}

// btm_read_link_quality_complete
void f_801B498C(Ctx* __restrict c) {
  trace_call(0x801B498Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B498C
  c->r[0]=c->lr; // 801B4990
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B4994
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B4998
  c->r[31]=0u+0x803D0000u; // 801B499C
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B49A0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B49A4
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B49A8
  c->r[29]=c->r[31]+0x00000034u; // 801B49AC
  W32(c->r[1]+0x00000020u,c->r[28]); // 801B49B0
  c->r[28]=c->r[3]|c->r[3]; // 801B49B4
  c->r[3]=c->r[31]+0x000005C8u; // 801B49B8
  c->r[30]=R32(c->r[31]+0x000005FCu); // 801B49BC
  c->lr=0x801B49C4u; f_801AD15C(c); // 801B49C0
  c->r[0]=0u+0x00000000u; // 801B49C4
  cmps(c,0,(int32_t)c->r[30],0); // 801B49C8
  W32(c->r[31]+0x000005FCu,c->r[0]); // 801B49CC
  if (crb(c,2)) { goto L_801B4A84; } // 801B49D0
  c->r[6]=R8(c->r[28]+0x00000000u); // 801B49D4
  cmps(c,0,(int32_t)c->r[6],0); // 801B49D8
  W8(c->r[1]+0x00000009u,c->r[6]); // 801B49DC
  if (!crb(c,2)) { goto L_801B4A6C; } // 801B49E0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B49E4
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B49E8
  c->r[3]=R8(c->r[28]+0x00000002u); // 801B49EC
  c->r[4]=R8(c->r[28]+0x00000001u); // 801B49F0
  cmpu(c,0,c->r[0],0x00000004u); // 801B49F4
  c->r[5]=R8(c->r[28]+0x00000003u); // 801B49F8
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 801B49FC
  c->r[0]=c->r[4]+c->r[0]; // 801B4A00
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801B4A04
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801B4A08
  if (crb(c,0)) { goto L_801B4A24; } // 801B4A0C
  c->r[3]=0u+0x000D0000u; // 801B4A10
  c->r[4]=0u+0x80330000u; // 801B4A14
  c->r[3]=c->r[3]+0x00000003u; // 801B4A18
  c->r[4]=c->r[4]+0x000026B4u; // 801B4A1C
  c->lr=0x801B4A24u; f_801ACB50(c); // 801B4A20
L_801B4A24:;
  c->r[0]=0u+0x00000004u; // 801B4A24
  c->r[3]=0u+0x00000000u; // 801B4A28
  c->ctr=c->r[0]; // 801B4A2C
L_801B4A30:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801B4A30
  cmps(c,0,(int32_t)c->r[0],0); // 801B4A34
  if (crb(c,2)) { goto L_801B4A5C; } // 801B4A38
  c->r[0]=R16(c->r[29]+0x00000000u); // 801B4A3C
  cmpu(c,0,c->r[31],c->r[0]); // 801B4A40
  if (!crb(c,2)) { goto L_801B4A5C; } // 801B4A44
  c->r[3]=c->r[1]+0x0000000Bu; // 801B4A48
  c->r[4]=c->r[29]+0x00000008u; // 801B4A4C
  c->r[5]=0u+0x00000006u; // 801B4A50
  c->lr=0x801B4A58u; f_80004338(c); // 801B4A54
  goto L_801B4A74; // 801B4A58
L_801B4A5C:;
  c->r[3]=c->r[3]+0x00000001u; // 801B4A5C
  c->r[29]=c->r[29]+0x0000011Cu; // 801B4A60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B4A30; } // 801B4A64
  goto L_801B4A74; // 801B4A68
L_801B4A6C:;
  c->r[0]=0u+0x0000000Au; // 801B4A6C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B4A70
L_801B4A74:;
  c->r[12]=c->r[30]|c->r[30]; // 801B4A74
  c->r[3]=c->r[1]+0x00000008u; // 801B4A78
  c->ctr=c->r[12]; // 801B4A7C
  if (true) { c->lr=0x801B4A84u; dispatch(c,c->ctr); } // 801B4A80
L_801B4A84:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B4A84
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B4A88
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B4A8C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B4A90
  c->r[28]=R32(c->r[1]+0x00000020u); // 801B4A94
  c->lr=c->r[0]; // 801B4A98
  c->r[1]=c->r[1]+0x00000030u; // 801B4A9C
  return; // 801B4AA0
}

// btm_remove_acl
void f_801B4AA4(Ctx* __restrict c) {
  trace_call(0x801B4AA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4AA4
  c->r[0]=c->lr; // 801B4AA8
  c->r[4]=0u+0x803D0000u; // 801B4AAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4AB0
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B4AB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B4AB8
  c->r[31]=0u+0x00000000u; // 801B4ABC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B4AC0
  c->r[30]=c->r[4]+0x00000034u; // 801B4AC4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B4AC8
  c->r[29]=c->r[3]|c->r[3]; // 801B4ACC
L_801B4AD0:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B4AD0
  cmps(c,0,(int32_t)c->r[0],0); // 801B4AD4
  if (crb(c,2)) { goto L_801B4AF8; } // 801B4AD8
  c->r[4]=c->r[29]|c->r[29]; // 801B4ADC
  c->r[3]=c->r[30]+0x00000008u; // 801B4AE0
  c->r[5]=0u+0x00000006u; // 801B4AE4
  c->lr=0x801B4AECu; f_8018C170(c); // 801B4AE8
  cmps(c,0,(int32_t)c->r[3],0); // 801B4AEC
  if (!crb(c,2)) { goto L_801B4AF8; } // 801B4AF0
  goto L_801B4B0C; // 801B4AF4
L_801B4AF8:;
  c->r[31]=c->r[31]+0x00000001u; // 801B4AF8
  c->r[30]=c->r[30]+0x0000011Cu; // 801B4AFC
  cmpu(c,0,c->r[31],0x00000004u); // 801B4B00
  if (crb(c,0)) { IRQCHK(c); goto L_801B4AD0; } // 801B4B04
  c->r[30]=0u+0x00000000u; // 801B4B08
L_801B4B0C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B4B0C
  if (crb(c,2)) { goto L_801B4B1C; } // 801B4B10
  c->r[3]=R16(c->r[30]+0x00000000u); // 801B4B14
  goto L_801B4B24; // 801B4B18
L_801B4B1C:;
  c->r[3]=0u+0x00010000u; // 801B4B1C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B4B20
L_801B4B24:;
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801B4B24
  c->r[4]=0u+0x00000013u; // 801B4B28
  c->lr=0x801B4B30u; f_801BFCA0(c); // 801B4B2C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B4B30
  if (!crb(c,2)) { goto L_801B4B40; } // 801B4B34
  c->r[3]=0u+0x00000003u; // 801B4B38
  goto L_801B4B44; // 801B4B3C
L_801B4B40:;
  c->r[3]=0u+0x00000000u; // 801B4B40
L_801B4B44:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4B44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B4B48
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B4B4C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B4B50
  c->lr=c->r[0]; // 801B4B54
  c->r[1]=c->r[1]+0x00000020u; // 801B4B58
  return; // 801B4B5C
}

// btm_chg_all_acl_pkt_types
void f_801B4B60(Ctx* __restrict c) {
  trace_call(0x801B4B60u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4B60
  c->r[0]=c->lr; // 801B4B64
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B4B68
  c->r[11]=c->r[1]+0x00000040u; // 801B4B6C
  c->lr=0x801B4B74u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B4B70
  c->r[4]=0u+0x803D0000u; // 801B4B74
  cmps(c,0,(int32_t)c->r[3],0); // 801B4B78
  c->r[31]=c->r[4]+0xFFFF8118u; // 801B4B7C
  c->r[30]=0u+0x80330000u; // 801B4B80
  c->r[30]=c->r[30]+0x00002368u; // 801B4B84
  c->r[28]=c->r[31]+0x00000034u; // 801B4B88
  if (crb(c,2)) { goto L_801B4C54; } // 801B4B8C
  c->r[29]=0u+0x00000000u; // 801B4B90
  c->r[26]=0u+0x000D0000u; // 801B4B94
  c->r[24]=0u+0xFFFFCCF9u; // 801B4B98
L_801B4B9C:;
  c->r[0]=R8(c->r[28]+0x00000119u); // 801B4B9C
  cmps(c,0,(int32_t)c->r[0],0); // 801B4BA0
  if (crb(c,2)) { goto L_801B4C40; } // 801B4BA4
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B4BA8
  cmpu(c,0,c->r[0],0x00000005u); // 801B4BAC
  if (crb(c,0)) { goto L_801B4BC4; } // 801B4BB0
  c->r[5]=R16(c->r[28]+0x00000000u); // 801B4BB4
  c->r[3]=c->r[26]+0x00000004u; // 801B4BB8
  c->r[4]=c->r[30]+0x0000038Cu; // 801B4BBC
  c->lr=0x801B4BC4u; f_801ACB38(c); // 801B4BC0
L_801B4BC4:;
  c->r[0]=R16(c->r[28]+0x00000002u); // 801B4BC4
  c->r[5]=0u+0x00000018u; // 801B4BC8
  W16(c->r[28]+0x00000004u,c->r[0]); // 801B4BCC
  c->r[3]=R8(c->r[31]+0x00000636u); // 801B4BD0
  cmpu(c,0,c->r[3],0x00000003u); // 801B4BD4
  if (crb(c,0)) { goto L_801B4BE4; } // 801B4BD8
  c->r[0]=c->r[5]|0x00003300u; // 801B4BDC
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801B4BE0
L_801B4BE4:;
  c->r[4]=R16(c->r[31]+0x00000654u); // 801B4BE4
  cmpu(c,1,c->r[3],0x00000003u); // 801B4BE8
  c->r[0]=c->r[5]&c->r[4]; // 801B4BEC
  c->r[3]=c->r[0]&0x0000CC18u; cr0(c,c->r[3]); // 801B4BF0
  c->r[25]=c->r[3]&c->r[24]; // 801B4BF4
  if (crb(c,4)) { goto L_801B4C0C; } // 801B4BF8
  c->r[0]=c->r[5]|c->r[4]; // 801B4BFC
  c->r[0]=c->r[0]&0x00003306u; cr0(c,c->r[0]); // 801B4C00
  c->r[0]=c->r[3]|c->r[0]; // 801B4C04
  c->r[25]=rotl(c->r[0],0)&0x0000FFFFu; // 801B4C08
L_801B4C0C:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B4C0C
  cmpu(c,0,c->r[0],0x00000004u); // 801B4C10
  if (crb(c,0)) { goto L_801B4C28; } // 801B4C14
  c->r[3]=c->r[26]+0x00000003u; // 801B4C18
  c->r[4]=c->r[30]+0x00000040u; // 801B4C1C
  c->r[5]=rotl(c->r[25],0)&0x0000FFFFu; // 801B4C20
  c->lr=0x801B4C28u; f_801ACB38(c); // 801B4C24
L_801B4C28:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801B4C28
  c->r[4]=rotl(c->r[25],0)&0x0000FFFFu; // 801B4C2C
  c->lr=0x801B4C34u; f_801C0334(c); // 801B4C30
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B4C34
  if (crb(c,2)) { goto L_801B4C40; } // 801B4C38
  W16(c->r[28]+0x00000002u,c->r[25]); // 801B4C3C
L_801B4C40:;
  c->r[29]=c->r[29]+0x00000001u; // 801B4C40
  c->r[28]=c->r[28]+0x0000011Cu; // 801B4C44
  cmpu(c,0,c->r[29],0x00000004u); // 801B4C48
  if (crb(c,0)) { IRQCHK(c); goto L_801B4B9C; } // 801B4C4C
  goto L_801B4D68; // 801B4C50
L_801B4C54:;
  c->r[29]=0u+0x00000000u; // 801B4C54
  c->r[24]=0u+0x000D0000u; // 801B4C58
  c->r[25]=0u+0x00000000u; // 801B4C5C
  c->r[27]=0u+0xFFFFCCF9u; // 801B4C60
L_801B4C64:;
  c->r[0]=R8(c->r[28]+0x00000119u); // 801B4C64
  cmps(c,0,(int32_t)c->r[0],0); // 801B4C68
  if (crb(c,2)) { goto L_801B4D58; } // 801B4C6C
  c->r[0]=R16(c->r[28]+0x00000004u); // 801B4C70
  cmps(c,0,(int32_t)c->r[0],0); // 801B4C74
  if (crb(c,2)) { goto L_801B4D58; } // 801B4C78
  c->r[3]=c->r[28]+0x00000008u; // 801B4C7C
  c->r[4]=c->r[1]+0x00000008u; // 801B4C80
  c->lr=0x801B4C88u; f_801B8C88(c); // 801B4C84
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B4C88
  if (!crb(c,2)) { goto L_801B4D58; } // 801B4C8C
  c->r[0]=R8(c->r[1]+0x00000008u); // 801B4C90
  cmpu(c,0,c->r[0],0x00000002u); // 801B4C94
  if (!crb(c,2)) { goto L_801B4CD0; } // 801B4C98
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B4C9C
  cmpu(c,0,c->r[0],0x00000005u); // 801B4CA0
  if (crb(c,0)) { goto L_801B4CB8; } // 801B4CA4
  c->r[5]=R16(c->r[28]+0x00000000u); // 801B4CA8
  c->r[3]=c->r[24]+0x00000004u; // 801B4CAC
  c->r[4]=c->r[30]+0x000003BCu; // 801B4CB0
  c->lr=0x801B4CB8u; f_801ACB38(c); // 801B4CB4
L_801B4CB8:;
  W8(c->r[1]+0x00000014u,c->r[25]); // 801B4CB8
  c->r[4]=c->r[28]+0x00000008u; // 801B4CBC
  c->r[5]=c->r[1]+0x0000000Cu; // 801B4CC0
  c->r[3]=0u+0x00000080u; // 801B4CC4
  c->lr=0x801B4CCCu; f_801B8AB8(c); // 801B4CC8
  goto L_801B4D58; // 801B4CCC
L_801B4CD0:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B4CD0
  cmpu(c,0,c->r[0],0x00000005u); // 801B4CD4
  if (crb(c,0)) { goto L_801B4CF0; } // 801B4CD8
  c->r[5]=R16(c->r[28]+0x00000000u); // 801B4CDC
  c->r[3]=c->r[24]+0x00000004u; // 801B4CE0
  c->r[6]=R16(c->r[28]+0x00000002u); // 801B4CE4
  c->r[4]=c->r[30]+0x000003ECu; // 801B4CE8
  c->lr=0x801B4CF0u; f_801ACB50(c); // 801B4CEC
L_801B4CF0:;
  c->r[4]=R16(c->r[28]+0x00000004u); // 801B4CF0
  c->r[5]=R16(c->r[31]+0x00000654u); // 801B4CF4
  c->r[0]=R8(c->r[31]+0x00000636u); // 801B4CF8
  c->r[3]=c->r[4]&c->r[5]; // 801B4CFC
  c->r[3]=c->r[3]&0x0000CC18u; cr0(c,c->r[3]); // 801B4D00
  cmpu(c,0,c->r[0],0x00000003u); // 801B4D04
  c->r[26]=c->r[3]&c->r[27]; // 801B4D08
  if (crb(c,0)) { goto L_801B4D20; } // 801B4D0C
  c->r[0]=c->r[4]|c->r[5]; // 801B4D10
  c->r[0]=c->r[0]&0x00003306u; cr0(c,c->r[0]); // 801B4D14
  c->r[0]=c->r[3]|c->r[0]; // 801B4D18
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 801B4D1C
L_801B4D20:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B4D20
  cmpu(c,0,c->r[0],0x00000004u); // 801B4D24
  if (crb(c,0)) { goto L_801B4D3C; } // 801B4D28
  c->r[3]=c->r[24]+0x00000003u; // 801B4D2C
  c->r[4]=c->r[30]+0x00000040u; // 801B4D30
  c->r[5]=rotl(c->r[26],0)&0x0000FFFFu; // 801B4D34
  c->lr=0x801B4D3Cu; f_801ACB38(c); // 801B4D38
L_801B4D3C:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801B4D3C
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 801B4D40
  c->lr=0x801B4D48u; f_801C0334(c); // 801B4D44
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B4D48
  if (crb(c,2)) { goto L_801B4D54; } // 801B4D4C
  W16(c->r[28]+0x00000002u,c->r[26]); // 801B4D50
L_801B4D54:;
  W16(c->r[28]+0x00000004u,c->r[25]); // 801B4D54
L_801B4D58:;
  c->r[29]=c->r[29]+0x00000001u; // 801B4D58
  c->r[28]=c->r[28]+0x0000011Cu; // 801B4D5C
  cmpu(c,0,c->r[29],0x00000004u); // 801B4D60
  if (crb(c,0)) { IRQCHK(c); goto L_801B4C64; } // 801B4D64
L_801B4D68:;
  c->r[11]=c->r[1]+0x00000040u; // 801B4D68
  c->lr=0x801B4D70u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B4D6C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B4D70
  c->lr=c->r[0]; // 801B4D74
  c->r[1]=c->r[1]+0x00000040u; // 801B4D78
  return; // 801B4D7C
}

// BTM_SecAddDevice
void f_801B4D80(Ctx* __restrict c) {
  trace_call(0x801B4D80u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4D80
  c->r[0]=c->lr; // 801B4D84
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B4D88
  c->r[11]=c->r[1]+0x00000030u; // 801B4D8C
  c->lr=0x801B4D94u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B4D90
  c->r[9]=0u+0x803D0000u; // 801B4D94
  c->r[24]=c->r[3]|c->r[3]; // 801B4D98
  c->r[9]=c->r[9]+0xFFFF8118u; // 801B4D9C
  c->r[25]=c->r[4]|c->r[4]; // 801B4DA0
  c->r[26]=c->r[5]|c->r[5]; // 801B4DA4
  c->r[27]=c->r[6]|c->r[6]; // 801B4DA8
  c->r[28]=c->r[7]|c->r[7]; // 801B4DAC
  c->r[29]=c->r[8]|c->r[8]; // 801B4DB0
  c->r[30]=c->r[9]+0x00001F30u; // 801B4DB4
  c->r[31]=0u+0x00000000u; // 801B4DB8
L_801B4DBC:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801B4DBC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B4DC0
  if (crb(c,2)) { goto L_801B4DE4; } // 801B4DC4
  c->r[4]=c->r[24]|c->r[24]; // 801B4DC8
  c->r[3]=c->r[30]+0x0000001Cu; // 801B4DCC
  c->r[5]=0u+0x00000006u; // 801B4DD0
  c->lr=0x801B4DD8u; f_8018C170(c); // 801B4DD4
  cmps(c,0,(int32_t)c->r[3],0); // 801B4DD8
  if (!crb(c,2)) { goto L_801B4DE4; } // 801B4DDC
  goto L_801B4DF8; // 801B4DE0
L_801B4DE4:;
  c->r[31]=c->r[31]+0x00000001u; // 801B4DE4
  c->r[30]=c->r[30]+0x00000088u; // 801B4DE8
  cmps(c,0,(int32_t)c->r[31],16); // 801B4DEC
  if (crb(c,0)) { IRQCHK(c); goto L_801B4DBC; } // 801B4DF0
  c->r[30]=0u+0x00000000u; // 801B4DF4
L_801B4DF8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B4DF8
  if (!crb(c,2)) { goto L_801B4E1C; } // 801B4DFC
  c->r[3]=c->r[24]|c->r[24]; // 801B4E00
  c->lr=0x801B4E08u; f_801B5054(c); // 801B4E04
  cmps(c,0,(int32_t)c->r[3],0); // 801B4E08
  c->r[30]=c->r[3]|c->r[3]; // 801B4E0C
  if (!crb(c,2)) { goto L_801B4E34; } // 801B4E10
  c->r[3]=0u+0x00000000u; // 801B4E14
  goto L_801B4EF0; // 801B4E18
L_801B4E1C:;
  c->r[4]=0u+0x803D0000u; // 801B4E1C
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B4E20
  c->r[3]=R32(c->r[4]+0x00001974u); // 801B4E24
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 801B4E28
  c->r[0]=c->r[3]+0x00000001u; // 801B4E2C
  W32(c->r[4]+0x00001974u,c->r[0]); // 801B4E30
L_801B4E34:;
  cmps(c,0,(int32_t)c->r[25],0); // 801B4E34
  if (crb(c,2)) { goto L_801B4E4C; } // 801B4E38
  c->r[4]=c->r[25]|c->r[25]; // 801B4E3C
  c->r[3]=c->r[30]+0x00000022u; // 801B4E40
  c->r[5]=0u+0x00000003u; // 801B4E44
  c->lr=0x801B4E4Cu; f_80004338(c); // 801B4E48
L_801B4E4C:;
  c->r[3]=c->r[30]+0x00000035u; // 801B4E4C
  c->r[4]=0u+0x00000000u; // 801B4E50
  c->r[5]=0u+0x00000041u; // 801B4E54
  c->lr=0x801B4E5Cu; f_80004688(c); // 801B4E58
  cmps(c,0,(int32_t)c->r[26],0); // 801B4E5C
  if (crb(c,2)) { goto L_801B4E8C; } // 801B4E60
  c->r[0]=R8(c->r[26]+0x00000000u); // 801B4E64
  cmps(c,0,(int32_t)c->r[0],0); // 801B4E68
  if (crb(c,2)) { goto L_801B4E8C; } // 801B4E6C
  c->r[0]=R8(c->r[30]+0x00000076u); // 801B4E70
  c->r[4]=c->r[26]|c->r[26]; // 801B4E74
  c->r[3]=c->r[30]+0x00000035u; // 801B4E78
  c->r[5]=0u+0x00000040u; // 801B4E7C
  c->r[0]=c->r[0]|0x00000008u; // 801B4E80
  W8(c->r[30]+0x00000076u,c->r[0]); // 801B4E84
  c->lr=0x801B4E8Cu; f_801900A4(c); // 801B4E88
L_801B4E8C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B4E8C
  if (crb(c,2)) { goto L_801B4EA8; } // 801B4E90
  c->r[4]=c->r[27]|c->r[27]; // 801B4E94
  c->r[3]=c->r[30]+0x00000077u; // 801B4E98
  c->r[5]=0u+0x00000008u; // 801B4E9C
  c->lr=0x801B4EA4u; f_80004338(c); // 801B4EA0
  goto L_801B4EB8; // 801B4EA4
L_801B4EA8:;
  c->r[3]=c->r[30]+0x00000077u; // 801B4EA8
  c->r[4]=0u+0x00000000u; // 801B4EAC
  c->r[5]=0u+0x00000008u; // 801B4EB0
  c->lr=0x801B4EB8u; f_80004688(c); // 801B4EB4
L_801B4EB8:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 801B4EB8
  cmps(c,0,(int32_t)c->r[29],0); // 801B4EBC
  W32(c->r[30]+0x00000010u,c->r[0]); // 801B4EC0
  c->r[0]=R32(c->r[28]+0x00000004u); // 801B4EC4
  W32(c->r[30]+0x00000014u,c->r[0]); // 801B4EC8
  if (crb(c,2)) { goto L_801B4EEC; } // 801B4ECC
  c->r[0]=R8(c->r[30]+0x00000076u); // 801B4ED0
  c->r[4]=c->r[29]|c->r[29]; // 801B4ED4
  c->r[3]=c->r[30]+0x00000025u; // 801B4ED8
  c->r[5]=0u+0x00000010u; // 801B4EDC
  c->r[0]=c->r[0]|0x00000010u; // 801B4EE0
  W8(c->r[30]+0x00000076u,c->r[0]); // 801B4EE4
  c->lr=0x801B4EECu; f_80004338(c); // 801B4EE8
L_801B4EEC:;
  c->r[3]=0u+0x00000001u; // 801B4EEC
L_801B4EF0:;
  c->r[11]=c->r[1]+0x00000030u; // 801B4EF0
  c->lr=0x801B4EF8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B4EF4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B4EF8
  c->lr=c->r[0]; // 801B4EFC
  c->r[1]=c->r[1]+0x00000030u; // 801B4F00
  return; // 801B4F04
}

// BTM_SecDeleteDevice
void f_801B4F08(Ctx* __restrict c) {
  trace_call(0x801B4F08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4F08
  c->r[0]=c->lr; // 801B4F0C
  c->r[4]=0u+0x803D0000u; // 801B4F10
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4F14
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B4F18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B4F1C
  c->r[31]=0u+0x00000000u; // 801B4F20
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B4F24
  c->r[30]=c->r[4]+0x00001F30u; // 801B4F28
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B4F2C
  c->r[29]=c->r[3]|c->r[3]; // 801B4F30
L_801B4F34:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801B4F34
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B4F38
  if (crb(c,2)) { goto L_801B4F5C; } // 801B4F3C
  c->r[4]=c->r[29]|c->r[29]; // 801B4F40
  c->r[3]=c->r[30]+0x0000001Cu; // 801B4F44
  c->r[5]=0u+0x00000006u; // 801B4F48
  c->lr=0x801B4F50u; f_8018C170(c); // 801B4F4C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4F50
  if (!crb(c,2)) { goto L_801B4F5C; } // 801B4F54
  goto L_801B4F70; // 801B4F58
L_801B4F5C:;
  c->r[31]=c->r[31]+0x00000001u; // 801B4F5C
  c->r[30]=c->r[30]+0x00000088u; // 801B4F60
  cmps(c,0,(int32_t)c->r[31],16); // 801B4F64
  if (crb(c,0)) { IRQCHK(c); goto L_801B4F34; } // 801B4F68
  c->r[30]=0u+0x00000000u; // 801B4F6C
L_801B4F70:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B4F70
  if (!crb(c,2)) { goto L_801B4F80; } // 801B4F74
  c->r[3]=0u+0x00000000u; // 801B4F78
  goto L_801B4F98; // 801B4F7C
L_801B4F80:;
  c->r[0]=0u+0x00000000u; // 801B4F80
  c->r[3]=c->r[29]|c->r[29]; // 801B4F84
  W8(c->r[30]+0x00000076u,c->r[0]); // 801B4F88
  c->r[4]=0u+0x00000000u; // 801B4F8C
  c->lr=0x801B4F94u; f_801B6A18(c); // 801B4F90
  c->r[3]=0u+0x00000001u; // 801B4F94
L_801B4F98:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4F98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B4F9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B4FA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B4FA4
  c->lr=c->r[0]; // 801B4FA8
  c->r[1]=c->r[1]+0x00000020u; // 801B4FAC
  return; // 801B4FB0
}

// BTM_SecReadDevName
void f_801B4FB4(Ctx* __restrict c) {
  trace_call(0x801B4FB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4FB4
  c->r[0]=c->lr; // 801B4FB8
  c->r[4]=0u+0x803D0000u; // 801B4FBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4FC0
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B4FC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B4FC8
  c->r[31]=0u+0x00000000u; // 801B4FCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B4FD0
  c->r[30]=c->r[4]+0x00001F30u; // 801B4FD4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B4FD8
  c->r[29]=0u+0x00000000u; // 801B4FDC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B4FE0
  c->r[28]=c->r[3]|c->r[3]; // 801B4FE4
L_801B4FE8:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801B4FE8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B4FEC
  if (crb(c,2)) { goto L_801B5010; } // 801B4FF0
  c->r[4]=c->r[28]|c->r[28]; // 801B4FF4
  c->r[3]=c->r[30]+0x0000001Cu; // 801B4FF8
  c->r[5]=0u+0x00000006u; // 801B4FFC
  c->lr=0x801B5004u; f_8018C170(c); // 801B5000
  cmps(c,0,(int32_t)c->r[3],0); // 801B5004
  if (!crb(c,2)) { goto L_801B5010; } // 801B5008
  goto L_801B5024; // 801B500C
L_801B5010:;
  c->r[31]=c->r[31]+0x00000001u; // 801B5010
  c->r[30]=c->r[30]+0x00000088u; // 801B5014
  cmps(c,0,(int32_t)c->r[31],16); // 801B5018
  if (crb(c,0)) { IRQCHK(c); goto L_801B4FE8; } // 801B501C
  c->r[30]=0u+0x00000000u; // 801B5020
L_801B5024:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B5024
  if (crb(c,2)) { goto L_801B5030; } // 801B5028
  c->r[29]=c->r[30]+0x00000035u; // 801B502C
L_801B5030:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B5030
  c->r[3]=c->r[29]|c->r[29]; // 801B5034
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B5038
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B503C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B5040
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B5044
  c->lr=c->r[0]; // 801B5048
  c->r[1]=c->r[1]+0x00000020u; // 801B504C
  return; // 801B5050
}

// btm_sec_alloc_dev
void f_801B5054(Ctx* __restrict c) {
  trace_call(0x801B5054u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5054
  c->r[0]=c->lr; // 801B5058
  c->r[4]=0u+0x803D0000u; // 801B505C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5060
  c->r[0]=0u+0x00000010u; // 801B5064
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B5068
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B506C
  c->r[31]=0u+0x00000000u; // 801B5070
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B5074
  c->r[30]=c->r[3]|c->r[3]; // 801B5078
  c->r[3]=0u+0x00000000u; // 801B507C
  c->ctr=c->r[0]; // 801B5080
L_801B5084:;
  c->r[0]=R8(c->r[4]+0x00001FA6u); // 801B5084
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B5088
  if (!crb(c,2)) { goto L_801B50A8; } // 801B508C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)136); // 801B5090
  c->r[3]=0u+0x803D0000u; // 801B5094
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5098
  c->r[3]=c->r[3]+c->r[0]; // 801B509C
  c->r[31]=c->r[3]+0x00001F30u; // 801B50A0
  goto L_801B50B4; // 801B50A4
L_801B50A8:;
  c->r[4]=c->r[4]+0x00000088u; // 801B50A8
  c->r[3]=c->r[3]+0x00000001u; // 801B50AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B5084; } // 801B50B0
L_801B50B4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B50B4
  if (!crb(c,2)) { goto L_801B50C4; } // 801B50B8
  c->lr=0x801B50C0u; f_801B52B4(c); // 801B50BC
  c->r[31]=c->r[3]|c->r[3]; // 801B50C0
L_801B50C4:;
  c->r[3]=c->r[31]|c->r[31]; // 801B50C4
  c->r[4]=0u+0x00000000u; // 801B50C8
  c->r[5]=0u+0x00000088u; // 801B50CC
  c->lr=0x801B50D4u; f_80004688(c); // 801B50D0
  c->r[3]=0u+0x00000080u; // 801B50D4
  c->r[0]=0u+0x00000000u; // 801B50D8
  W8(c->r[31]+0x00000076u,c->r[3]); // 801B50DC
  c->r[3]=c->r[30]|c->r[30]; // 801B50E0
  W8(c->r[31]+0x00000085u,c->r[0]); // 801B50E4
  c->lr=0x801B50ECu; f_801B7938(c); // 801B50E8
  cmps(c,0,(int32_t)c->r[3],0); // 801B50EC
  c->r[4]=c->r[3]|c->r[3]; // 801B50F0
  if (crb(c,2)) { goto L_801B510C; } // 801B50F4
  c->r[3]=c->r[31]+0x00000022u; // 801B50F8
  c->r[4]=c->r[4]+0x00000008u; // 801B50FC
  c->r[5]=0u+0x00000003u; // 801B5100
  c->lr=0x801B5108u; f_80004338(c); // 801B5104
  goto L_801B5124; // 801B5108
L_801B510C:;
  c->r[4]=0u+0x803D0000u; // 801B510C
  c->r[3]=c->r[31]+0x00000022u; // 801B5110
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B5114
  c->r[5]=0u+0x00000003u; // 801B5118
  c->r[4]=c->r[4]+0x000027BAu; // 801B511C
  c->lr=0x801B5124u; f_80004338(c); // 801B5120
L_801B5124:;
  c->r[4]=c->r[30]|c->r[30]; // 801B5124
  c->r[3]=c->r[31]+0x0000001Cu; // 801B5128
  c->r[5]=0u+0x00000006u; // 801B512C
  c->lr=0x801B5134u; f_80004338(c); // 801B5130
  c->r[3]=c->r[30]|c->r[30]; // 801B5134
  c->lr=0x801B513Cu; f_801B3FB4(c); // 801B5138
  W16(c->r[31]+0x00000018u,c->r[3]); // 801B513C
  c->r[5]=0u+0x803D0000u; // 801B5140
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B5144
  c->r[3]=c->r[31]|c->r[31]; // 801B5148
  c->r[4]=R32(c->r[5]+0x00001974u); // 801B514C
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 801B5150
  c->r[0]=c->r[4]+0x00000001u; // 801B5154
  W32(c->r[5]+0x00001974u,c->r[0]); // 801B5158
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B515C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B5160
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5164
  c->lr=c->r[0]; // 801B5168
  c->r[1]=c->r[1]+0x00000010u; // 801B516C
  return; // 801B5170
}

// btm_find_dev_by_handle
void f_801B5174(Ctx* __restrict c) {
  trace_call(0x801B5174u);
  c->r[4]=0u+0x803D0000u; // 801B5174
  c->r[0]=0u+0x00000004u; // 801B5178
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B517C
  c->r[5]=0u+0x00000000u; // 801B5180
  c->r[4]=c->r[4]+0x00001F30u; // 801B5184
  c->ctr=c->r[0]; // 801B5188
L_801B518C:;
  c->r[0]=R8(c->r[4]+0x00000076u); // 801B518C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B5190
  if (crb(c,2)) { goto L_801B51AC; } // 801B5194
  c->r[0]=R16(c->r[4]+0x00000018u); // 801B5198
  cmpu(c,0,c->r[0],c->r[3]); // 801B519C
  if (!crb(c,2)) { goto L_801B51AC; } // 801B51A0
  c->r[3]=c->r[4]|c->r[4]; // 801B51A4
  return; // 801B51A8
L_801B51AC:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801B51AC
  c->r[4]=c->r[4]+0x00000088u; // 801B51B0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B51B4
  if (crb(c,2)) { goto L_801B51D0; } // 801B51B8
  c->r[0]=R16(c->r[4]+0x00000018u); // 801B51BC
  cmpu(c,0,c->r[0],c->r[3]); // 801B51C0
  if (!crb(c,2)) { goto L_801B51D0; } // 801B51C4
  c->r[3]=c->r[4]|c->r[4]; // 801B51C8
  return; // 801B51CC
L_801B51D0:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801B51D0
  c->r[4]=c->r[4]+0x00000088u; // 801B51D4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B51D8
  if (crb(c,2)) { goto L_801B51F4; } // 801B51DC
  c->r[0]=R16(c->r[4]+0x00000018u); // 801B51E0
  cmpu(c,0,c->r[0],c->r[3]); // 801B51E4
  if (!crb(c,2)) { goto L_801B51F4; } // 801B51E8
  c->r[3]=c->r[4]|c->r[4]; // 801B51EC
  return; // 801B51F0
L_801B51F4:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801B51F4
  c->r[4]=c->r[4]+0x00000088u; // 801B51F8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B51FC
  if (crb(c,2)) { goto L_801B5218; } // 801B5200
  c->r[0]=R16(c->r[4]+0x00000018u); // 801B5204
  cmpu(c,0,c->r[0],c->r[3]); // 801B5208
  if (!crb(c,2)) { goto L_801B5218; } // 801B520C
  c->r[3]=c->r[4]|c->r[4]; // 801B5210
  return; // 801B5214
L_801B5218:;
  c->r[5]=c->r[5]+0x00000003u; // 801B5218
  c->r[4]=c->r[4]+0x00000088u; // 801B521C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B518C; } // 801B5220
  c->r[3]=0u+0x00000000u; // 801B5224
  return; // 801B5228
}

// btm_find_dev
void f_801B522C(Ctx* __restrict c) {
  trace_call(0x801B522Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B522C
  c->r[0]=c->lr; // 801B5230
  c->r[4]=0u+0x803D0000u; // 801B5234
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B5238
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B523C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B5240
  c->r[31]=c->r[4]+0x00001F30u; // 801B5244
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B5248
  c->r[30]=0u+0x00000000u; // 801B524C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B5250
  c->r[29]=c->r[3]|c->r[3]; // 801B5254
L_801B5258:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801B5258
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B525C
  if (crb(c,2)) { goto L_801B5284; } // 801B5260
  c->r[4]=c->r[29]|c->r[29]; // 801B5264
  c->r[3]=c->r[31]+0x0000001Cu; // 801B5268
  c->r[5]=0u+0x00000006u; // 801B526C
  c->lr=0x801B5274u; f_8018C170(c); // 801B5270
  cmps(c,0,(int32_t)c->r[3],0); // 801B5274
  if (!crb(c,2)) { goto L_801B5284; } // 801B5278
  c->r[3]=c->r[31]|c->r[31]; // 801B527C
  goto L_801B5298; // 801B5280
L_801B5284:;
  c->r[30]=c->r[30]+0x00000001u; // 801B5284
  c->r[31]=c->r[31]+0x00000088u; // 801B5288
  cmps(c,0,(int32_t)c->r[30],16); // 801B528C
  if (crb(c,0)) { IRQCHK(c); goto L_801B5258; } // 801B5290
  c->r[3]=0u+0x00000000u; // 801B5294
L_801B5298:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B5298
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B529C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B52A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B52A4
  c->lr=c->r[0]; // 801B52A8
  c->r[1]=c->r[1]+0x00000020u; // 801B52AC
  return; // 801B52B0
}

// btm_find_oldest_dev
void f_801B52B4(Ctx* __restrict c) {
  trace_call(0x801B52B4u);
  c->r[3]=0u+0x803D0000u; // 801B52B4
  c->r[0]=0u+0x00000004u; // 801B52B8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B52BC
  c->r[6]=0u+0xFFFFFFFFu; // 801B52C0
  c->r[5]=c->r[3]+0x00001F30u; // 801B52C4
  c->r[7]=0u+0x00000000u; // 801B52C8
  c->r[3]=c->r[5]|c->r[5]; // 801B52CC
  c->ctr=c->r[0]; // 801B52D0
L_801B52D4:;
  c->r[4]=R8(c->r[5]+0x00000076u); // 801B52D4
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801B52D8
  if (crb(c,2)) { goto L_801B52FC; } // 801B52DC
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801B52E0
  if (!crb(c,2)) { goto L_801B52FC; } // 801B52E4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801B52E8
  cmpu(c,0,c->r[0],c->r[6]); // 801B52EC
  if (!crb(c,0)) { goto L_801B52FC; } // 801B52F0
  c->r[3]=c->r[5]|c->r[5]; // 801B52F4
  c->r[6]=c->r[0]|c->r[0]; // 801B52F8
L_801B52FC:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 801B52FC
  c->r[5]=c->r[5]+0x00000088u; // 801B5300
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801B5304
  if (crb(c,2)) { goto L_801B5328; } // 801B5308
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801B530C
  if (!crb(c,2)) { goto L_801B5328; } // 801B5310
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801B5314
  cmpu(c,0,c->r[0],c->r[6]); // 801B5318
  if (!crb(c,0)) { goto L_801B5328; } // 801B531C
  c->r[3]=c->r[5]|c->r[5]; // 801B5320
  c->r[6]=c->r[0]|c->r[0]; // 801B5324
L_801B5328:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 801B5328
  c->r[5]=c->r[5]+0x00000088u; // 801B532C
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801B5330
  if (crb(c,2)) { goto L_801B5354; } // 801B5334
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801B5338
  if (!crb(c,2)) { goto L_801B5354; } // 801B533C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801B5340
  cmpu(c,0,c->r[0],c->r[6]); // 801B5344
  if (!crb(c,0)) { goto L_801B5354; } // 801B5348
  c->r[3]=c->r[5]|c->r[5]; // 801B534C
  c->r[6]=c->r[0]|c->r[0]; // 801B5350
L_801B5354:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 801B5354
  c->r[5]=c->r[5]+0x00000088u; // 801B5358
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801B535C
  if (crb(c,2)) { goto L_801B5380; } // 801B5360
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801B5364
  if (!crb(c,2)) { goto L_801B5380; } // 801B5368
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801B536C
  cmpu(c,0,c->r[0],c->r[6]); // 801B5370
  if (!crb(c,0)) { goto L_801B5380; } // 801B5374
  c->r[3]=c->r[5]|c->r[5]; // 801B5378
  c->r[6]=c->r[0]|c->r[0]; // 801B537C
L_801B5380:;
  c->r[7]=c->r[7]+0x00000003u; // 801B5380
  c->r[5]=c->r[5]+0x00000088u; // 801B5384
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B52D4; } // 801B5388
  c->r[0]=c->r[6]+0x00010000u; // 801B538C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801B5390
  if (!crb(c,2)) return; // 801B5394
  c->r[4]=0u+0x803D0000u; // 801B5398
  c->r[0]=0u+0x00000004u; // 801B539C
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B53A0
  c->r[5]=0u+0x00000000u; // 801B53A4
  c->r[4]=c->r[4]+0x00001F30u; // 801B53A8
  c->ctr=c->r[0]; // 801B53AC
L_801B53B0:;
  c->r[0]=R8(c->r[4]+0x00000076u); // 801B53B0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B53B4
  if (crb(c,2)) { goto L_801B53D0; } // 801B53B8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801B53BC
  cmpu(c,0,c->r[0],c->r[6]); // 801B53C0
  if (!crb(c,0)) { goto L_801B53D0; } // 801B53C4
  c->r[3]=c->r[4]|c->r[4]; // 801B53C8
  c->r[6]=c->r[0]|c->r[0]; // 801B53CC
L_801B53D0:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801B53D0
  c->r[4]=c->r[4]+0x00000088u; // 801B53D4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B53D8
  if (crb(c,2)) { goto L_801B53F4; } // 801B53DC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801B53E0
  cmpu(c,0,c->r[0],c->r[6]); // 801B53E4
  if (!crb(c,0)) { goto L_801B53F4; } // 801B53E8
  c->r[3]=c->r[4]|c->r[4]; // 801B53EC
  c->r[6]=c->r[0]|c->r[0]; // 801B53F0
L_801B53F4:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801B53F4
  c->r[4]=c->r[4]+0x00000088u; // 801B53F8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B53FC
  if (crb(c,2)) { goto L_801B5418; } // 801B5400
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801B5404
  cmpu(c,0,c->r[0],c->r[6]); // 801B5408
  if (!crb(c,0)) { goto L_801B5418; } // 801B540C
  c->r[3]=c->r[4]|c->r[4]; // 801B5410
  c->r[6]=c->r[0]|c->r[0]; // 801B5414
L_801B5418:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801B5418
  c->r[4]=c->r[4]+0x00000088u; // 801B541C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B5420
  if (crb(c,2)) { goto L_801B543C; } // 801B5424
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801B5428
  cmpu(c,0,c->r[0],c->r[6]); // 801B542C
  if (!crb(c,0)) { goto L_801B543C; } // 801B5430
  c->r[3]=c->r[4]|c->r[4]; // 801B5434
  c->r[6]=c->r[0]|c->r[0]; // 801B5438
L_801B543C:;
  c->r[5]=c->r[5]+0x00000003u; // 801B543C
  c->r[4]=c->r[4]+0x00000088u; // 801B5440
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B53B0; } // 801B5444
  return; // 801B5448
}

// btm_dev_init
void f_801B544C(Ctx* __restrict c) {
  trace_call(0x801B544Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B544C
  c->r[0]=c->lr; // 801B5450
  c->r[4]=c->r[13]+0xFFFF9488u; // 801B5454
  c->r[5]=0u+0x00000003u; // 801B5458
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B545C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5460
  c->r[31]=0u+0x803D0000u; // 801B5464
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B5468
  c->r[3]=c->r[31]+0x00000648u; // 801B546C
  c->lr=0x801B5474u; f_80004338(c); // 801B5470
  c->r[3]=0u+0x00010000u; // 801B5474
  c->r[7]=0u+0x000000FFu; // 801B5478
  c->r[9]=c->r[3]+0xFFFFCC18u; // 801B547C
  c->r[12]=0u+0x00000001u; // 801B5480
  c->r[3]=0u+0x00001400u; // 801B5484
  c->r[11]=0u+0x00000002u; // 801B5488
  c->r[10]=0u+0x00000004u; // 801B548C
  c->r[8]=0u+0x0000003Fu; // 801B5490
  c->r[6]=0u+0x00000000u; // 801B5494
  c->r[0]=0u+0x00000005u; // 801B5498
  W16(c->r[31]+0x0000064Cu,c->r[3]); // 801B549C
  c->r[3]=c->r[31]+0x00000574u; // 801B54A0
  c->r[4]=0u+0x00000001u; // 801B54A4
  c->r[5]=0u+0x00000004u; // 801B54A8
  W32(c->r[31]+0x00000584u,c->r[12]); // 801B54AC
  W32(c->r[31]+0x000005A0u,c->r[11]); // 801B54B0
  W32(c->r[31]+0x000005BCu,c->r[10]); // 801B54B4
  W16(c->r[31]+0x00000654u,c->r[9]); // 801B54B8
  W16(c->r[31]+0x00000656u,c->r[8]); // 801B54BC
  W8(c->r[31]+0x000027BDu,c->r[7]); // 801B54C0
  W8(c->r[31]+0x000027BEu,c->r[7]); // 801B54C4
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 801B54C8
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801B54CC
  c->lr=0x801B54D4u; f_801AD0EC(c); // 801B54D0
  c->lr=0x801B54D8u; f_801C0E7C(c); // 801B54D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B54D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B54DC
  c->lr=c->r[0]; // 801B54E0
  c->r[1]=c->r[1]+0x00000010u; // 801B54E4
  return; // 801B54E8
}

// btm_db_reset
void f_801B54EC(Ctx* __restrict c) {
  trace_call(0x801B54ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B54EC
  c->r[0]=c->lr; // 801B54F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B54F4
  c->r[0]=0u+0x0000000Cu; // 801B54F8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B54FC
  c->lr=0x801B5504u; f_801B7CBC(c); // 801B5500
  c->lr=0x801B5508u; f_801B6E4C(c); // 801B5504
  c->r[3]=0u+0x803D0000u; // 801B5508
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B550C
  c->r[12]=R32(c->r[3]+0x000005A8u); // 801B5510
  cmps(c,0,(int32_t)c->r[12],0); // 801B5514
  if (crb(c,2)) { goto L_801B5534; } // 801B5518
  c->r[0]=0u+0x00000000u; // 801B551C
  W32(c->r[3]+0x000005A8u,c->r[0]); // 801B5520
  if (crb(c,2)) { goto L_801B5534; } // 801B5524
  c->r[3]=0u+0x00000000u; // 801B5528
  c->ctr=c->r[12]; // 801B552C
  if (true) { c->lr=0x801B5534u; dispatch(c,c->ctr); } // 801B5530
L_801B5534:;
  c->r[3]=0u+0x803D0000u; // 801B5534
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5538
  c->r[12]=R32(c->r[3]+0x000005C4u); // 801B553C
  cmps(c,0,(int32_t)c->r[12],0); // 801B5540
  if (crb(c,2)) { goto L_801B5560; } // 801B5544
  c->r[0]=0u+0x00000000u; // 801B5548
  W32(c->r[3]+0x000005C4u,c->r[0]); // 801B554C
  if (crb(c,2)) { goto L_801B5560; } // 801B5550
  c->r[3]=c->r[1]+0x00000008u; // 801B5554
  c->ctr=c->r[12]; // 801B5558
  if (true) { c->lr=0x801B5560u; dispatch(c,c->ctr); } // 801B555C
L_801B5560:;
  c->r[3]=0u+0x803D0000u; // 801B5560
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5564
  c->r[12]=R32(c->r[3]+0x000005E0u); // 801B5568
  cmps(c,0,(int32_t)c->r[12],0); // 801B556C
  if (crb(c,2)) { goto L_801B558C; } // 801B5570
  c->r[0]=0u+0x00000000u; // 801B5574
  W32(c->r[3]+0x000005E0u,c->r[0]); // 801B5578
  if (crb(c,2)) { goto L_801B558C; } // 801B557C
  c->r[3]=c->r[1]+0x00000008u; // 801B5580
  c->ctr=c->r[12]; // 801B5584
  if (true) { c->lr=0x801B558Cu; dispatch(c,c->ctr); } // 801B5588
L_801B558C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B558C
  c->lr=c->r[0]; // 801B5590
  c->r[1]=c->r[1]+0x00000010u; // 801B5594
  return; // 801B5598
}

// BTM_DeviceReset
void f_801B559C(Ctx* __restrict c) {
  trace_call(0x801B559Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B559C
  c->r[0]=c->lr; // 801B55A0
  c->r[4]=0u+0x803D0000u; // 801B55A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B55A8
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B55AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B55B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B55B4
  c->r[30]=c->r[3]|c->r[3]; // 801B55B8
  c->r[0]=R32(c->r[4]+0x0000058Cu); // 801B55BC
  cmps(c,0,(int32_t)c->r[0],0); // 801B55C0
  if (crb(c,2)) { goto L_801B55D0; } // 801B55C4
  cmpu(c,0,c->r[0],c->r[3]); // 801B55C8
  if (!crb(c,2)) { goto L_801B5620; } // 801B55CC
L_801B55D0:;
  c->lr=0x801B55D4u; f_801B34B4(c); // 801B55D0
  c->lr=0x801B55D8u; f_801B54EC(c); // 801B55D4
  c->r[31]=0u+0x803D0000u; // 801B55D8
  c->r[6]=0u+0x00000000u; // 801B55DC
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B55E0
  c->r[0]=0u+0x00000005u; // 801B55E4
  W32(c->r[31]+0x0000058Cu,c->r[30]); // 801B55E8
  c->r[3]=c->r[31]+0x00000574u; // 801B55EC
  c->r[4]=0u+0x00000001u; // 801B55F0
  c->r[5]=0u+0x00000004u; // 801B55F4
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 801B55F8
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801B55FC
  c->lr=0x801B5604u; f_801AD0EC(c); // 801B5600
  c->lr=0x801B5608u; f_801C0E7C(c); // 801B5604
  c->r[12]=R32(c->r[31]+0x00000568u); // 801B5608
  cmps(c,0,(int32_t)c->r[12],0); // 801B560C
  if (crb(c,2)) { goto L_801B5620; } // 801B5610
  c->r[3]=0u+0x00000001u; // 801B5614
  c->ctr=c->r[12]; // 801B5618
  if (true) { c->lr=0x801B5620u; dispatch(c,c->ctr); } // 801B561C
L_801B5620:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5620
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5624
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B5628
  c->lr=c->r[0]; // 801B562C
  c->r[1]=c->r[1]+0x00000010u; // 801B5630
  return; // 801B5634
}

// BTM_SendHciReset
void f_801B5638(Ctx* __restrict c) {
  trace_call(0x801B5638u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5638
  c->r[0]=c->lr; // 801B563C
  c->r[4]=0u+0x803D0000u; // 801B5640
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5644
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B5648
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B564C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B5650
  c->r[30]=c->r[3]|c->r[3]; // 801B5654
  c->r[0]=R32(c->r[4]+0x0000058Cu); // 801B5658
  cmps(c,0,(int32_t)c->r[0],0); // 801B565C
  if (crb(c,2)) { goto L_801B5678; } // 801B5660
  cmpu(c,0,c->r[0],c->r[3]); // 801B5664
  if (crb(c,2)) { goto L_801B5678; } // 801B5668
  c->r[0]=R32(c->r[4]+0x00000620u); // 801B566C
  cmpu(c,0,c->r[0],c->r[3]); // 801B5670
  if (!crb(c,2)) { goto L_801B56C8; } // 801B5674
L_801B5678:;
  c->lr=0x801B567Cu; f_801B34B4(c); // 801B5678
  c->lr=0x801B5680u; f_801B54EC(c); // 801B567C
  c->r[31]=0u+0x803D0000u; // 801B5680
  c->r[6]=0u+0x00000000u; // 801B5684
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B5688
  c->r[0]=0u+0x00000005u; // 801B568C
  W32(c->r[31]+0x00000620u,c->r[30]); // 801B5690
  c->r[3]=c->r[31]+0x00000574u; // 801B5694
  c->r[4]=0u+0x00000001u; // 801B5698
  c->r[5]=0u+0x00000004u; // 801B569C
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 801B56A0
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801B56A4
  c->lr=0x801B56ACu; f_801AD0EC(c); // 801B56A8
  c->lr=0x801B56B0u; f_801C0E7C(c); // 801B56AC
  c->r[12]=R32(c->r[31]+0x00000568u); // 801B56B0
  cmps(c,0,(int32_t)c->r[12],0); // 801B56B4
  if (crb(c,2)) { goto L_801B56C8; } // 801B56B8
  c->r[3]=0u+0x00000001u; // 801B56BC
  c->ctr=c->r[12]; // 801B56C0
  if (true) { c->lr=0x801B56C8u; dispatch(c,c->ctr); } // 801B56C4
L_801B56C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B56C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B56CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B56D0
  c->lr=c->r[0]; // 801B56D4
  c->r[1]=c->r[1]+0x00000010u; // 801B56D8
  return; // 801B56DC
}

// BTM_IsDeviceUp
void f_801B56E0(Ctx* __restrict c) {
  trace_call(0x801B56E0u);
  c->r[3]=0u+0x803D0000u; // 801B56E0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B56E4
  c->r[3]=R8(c->r[3]+0x0000064Eu); // 801B56E8
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 801B56EC
  c->r[0]=cntlz(c->r[0]); // 801B56F0
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801B56F4
  return; // 801B56F8
}

// BTM_SetAfhChannels
void f_801B56FC(Ctx* __restrict c) {
  trace_call(0x801B56FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B56FC
  c->r[0]=c->lr; // 801B5700
  c->r[7]=0u+0x803D0000u; // 801B5704
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5708
  c->r[7]=c->r[7]+0xFFFF8118u; // 801B570C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5710
  c->r[31]=c->r[4]|c->r[4]; // 801B5714
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B5718
  c->r[30]=c->r[3]|c->r[3]; // 801B571C
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801B5720
  cmpu(c,0,c->r[0],0x00000003u); // 801B5724
  if (crb(c,0)) { goto L_801B5750; } // 801B5728
  c->r[3]=0u+0x000D0000u; // 801B572C
  c->r[4]=0u+0x80330000u; // 801B5730
  c->r[6]=R8(c->r[7]+0x000027BDu); // 801B5734
  c->r[5]=c->r[30]|c->r[30]; // 801B5738
  c->r[8]=R8(c->r[7]+0x000027BEu); // 801B573C
  c->r[7]=c->r[31]|c->r[31]; // 801B5740
  c->r[3]=c->r[3]+0x00000002u; // 801B5744
  c->r[4]=c->r[4]+0x00002788u; // 801B5748
  c->lr=0x801B5750u; f_801ACB80(c); // 801B574C
L_801B5750:;
  c->r[3]=0u+0x803D0000u; // 801B5750
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5754
  c->r[4]=R8(c->r[3]+0x00000645u); // 801B5758
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 801B575C
  if (!crb(c,2)) { goto L_801B5780; } // 801B5760
  c->r[0]=R8(c->r[3]+0x00000644u); // 801B5764
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801B5768
  if (!crb(c,2)) { goto L_801B5780; } // 801B576C
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801B5770
  if (!crb(c,2)) { goto L_801B5780; } // 801B5774
  c->r[3]=0u+0x00000004u; // 801B5778
  goto L_801B57D4; // 801B577C
L_801B5780:;
  c->r[3]=0u+0x803D0000u; // 801B5780
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5784
  c->r[0]=R8(c->r[3]+0x000027BDu); // 801B5788
  cmpu(c,0,c->r[0],c->r[30]); // 801B578C
  if (!crb(c,2)) { goto L_801B57A0; } // 801B5790
  c->r[0]=R8(c->r[3]+0x000027BEu); // 801B5794
  cmpu(c,0,c->r[0],c->r[31]); // 801B5798
  if (crb(c,2)) { goto L_801B57D0; } // 801B579C
L_801B57A0:;
  c->r[3]=c->r[30]|c->r[30]; // 801B57A0
  c->r[4]=c->r[31]|c->r[31]; // 801B57A4
  c->lr=0x801B57ACu; f_801C1B70(c); // 801B57A8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B57AC
  if (crb(c,2)) { goto L_801B57C8; } // 801B57B0
  c->r[3]=0u+0x803D0000u; // 801B57B4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B57B8
  W8(c->r[3]+0x000027BDu,c->r[30]); // 801B57BC
  W8(c->r[3]+0x000027BEu,c->r[31]); // 801B57C0
  goto L_801B57D0; // 801B57C4
L_801B57C8:;
  c->r[3]=0u+0x00000003u; // 801B57C8
  goto L_801B57D4; // 801B57CC
L_801B57D0:;
  c->r[3]=0u+0x00000000u; // 801B57D0
L_801B57D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B57D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B57D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B57DC
  c->lr=c->r[0]; // 801B57E0
  c->r[1]=c->r[1]+0x00000010u; // 801B57E4
  return; // 801B57E8
}

// btm_dev_timeout
void f_801B57EC(Ctx* __restrict c) {
  trace_call(0x801B57ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B57EC
  c->r[0]=c->lr; // 801B57F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B57F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B57F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B57FC
  c->r[0]=R32(c->r[3]+0x00000010u); // 801B5800
  cmpu(c,0,c->r[0],0x00000001u); // 801B5804
  if (!crb(c,2)) { goto L_801B5A3C; } // 801B5808
  c->r[6]=0u+0x803D0000u; // 801B580C
  c->r[6]=c->r[6]+0xFFFF8118u; // 801B5810
  c->r[0]=R8(c->r[6]+0x0000064Eu); // 801B5814
  cmps(c,0,(int32_t)c->r[0],2); // 801B5818
  if (crb(c,2)) { goto L_801B597C; } // 801B581C
  if (!crb(c,0)) { goto L_801B5834; } // 801B5820
  cmps(c,0,(int32_t)c->r[0],0); // 801B5824
  if (crb(c,2)) { goto L_801B5840; } // 801B5828
  if (!crb(c,0)) { goto L_801B5868; } // 801B582C
  goto L_801B5A6C; // 801B5830
L_801B5834:;
  cmps(c,0,(int32_t)c->r[0],4); // 801B5834
  if (!crb(c,0)) { goto L_801B5A6C; } // 801B5838
  goto L_801B59E0; // 801B583C
L_801B5840:;
  c->r[3]=0u+0x00000000u; // 801B5840
  c->r[0]=0u+0x00000005u; // 801B5844
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801B5848
  c->r[3]=c->r[6]+0x00000574u; // 801B584C
  c->r[4]=0u+0x00000001u; // 801B5850
  c->r[5]=0u+0x00000004u; // 801B5854
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801B5858
  c->lr=0x801B5860u; f_801AD0EC(c); // 801B585C
  c->lr=0x801B5864u; f_801C0E7C(c); // 801B5860
  goto L_801B5A6C; // 801B5864
L_801B5868:;
  c->r[0]=0u+0x00000004u; // 801B5868
  c->r[3]=0u+0x00000002u; // 801B586C
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801B5870
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801B5874
  goto L_801B5890; // 801B5878
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801B587C
  W8(c->r[6]+0x0000064Eu,c->r[0]); // 801B5880
  c->lr=0x801B5888u; f_801AD0EC(c); // 801B5884
  c->lr=0x801B588Cu; f_801C0E7C(c); // 801B5888
  goto L_801B58B4; // 801B588C
L_801B5890:;
  c->r[3]=c->r[6]+0x00000574u; // 801B5890
  c->r[4]=0u+0x00000001u; // 801B5894
  c->r[5]=0u+0x00000001u; // 801B5898
  c->lr=0x801B58A0u; f_801AD0EC(c); // 801B589C
  c->r[3]=0u+0x00000002u; // 801B58A0
  c->lr=0x801B58A8u; f_801AA140(c); // 801B58A4
  cmps(c,0,(int32_t)c->r[3],0); // 801B58A8
  if (crb(c,2)) { goto L_801B58B4; } // 801B58AC
  c->lr=0x801B58B4u; f_801C19F4(c); // 801B58B0
L_801B58B4:;
  c->r[31]=0u+0x803D0000u; // 801B58B4
  c->r[5]=0u+0x00000003u; // 801B58B8
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B58BC
  c->r[3]=c->r[31]+0x00000648u; // 801B58C0
  c->r[4]=c->r[3]|c->r[3]; // 801B58C4
  c->lr=0x801B58CCu; f_80004338(c); // 801B58C8
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801B58CC
  cmps(c,0,(int32_t)c->r[0],0); // 801B58D0
  if (crb(c,2)) { goto L_801B58F8; } // 801B58D4
  cmpu(c,0,c->r[0],0x00000001u); // 801B58D8
  if (crb(c,2)) { goto L_801B58F8; } // 801B58DC
  c->r[3]=0u+0x00000002u; // 801B58E0
  c->lr=0x801B58E8u; f_801AA140(c); // 801B58E4
  cmps(c,0,(int32_t)c->r[3],0); // 801B58E8
  if (crb(c,2)) { goto L_801B58F8; } // 801B58EC
  c->r[4]=c->r[31]+0x00000648u; // 801B58F0
  c->lr=0x801B58F8u; f_801C16F0(c); // 801B58F4
L_801B58F8:;
  c->r[0]=0u+0x803D0000u; // 801B58F8
  c->r[31]=addc(c,c->r[0],0xFFFF8118u,0); cr0(c,c->r[31]); // 801B58FC
  if (crb(c,2)) { goto L_801B5960; } // 801B5900
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801B5904
  cmps(c,0,(int32_t)c->r[0],0); // 801B5908
  if (crb(c,2)) { goto L_801B5960; } // 801B590C
  cmpu(c,0,c->r[0],0x00000001u); // 801B5910
  if (crb(c,2)) { goto L_801B5960; } // 801B5914
  c->r[3]=0u+0x00000002u; // 801B5918
  c->lr=0x801B5920u; f_801AA140(c); // 801B591C
  cmps(c,0,(int32_t)c->r[3],0); // 801B5920
  c->r[30]=c->r[3]|c->r[3]; // 801B5924
  if (crb(c,2)) { goto L_801B5960; } // 801B5928
  cmpu(c,0,c->r[31],c->r[31]); // 801B592C
  if (crb(c,2)) { goto L_801B5954; } // 801B5930
  c->r[3]=c->r[31]|c->r[31]; // 801B5934
  c->r[4]=0u+0x00000000u; // 801B5938
  c->r[5]=0u+0x00000020u; // 801B593C
  c->lr=0x801B5944u; f_80004688(c); // 801B5940
  c->r[3]=c->r[31]|c->r[31]; // 801B5944
  c->r[4]=c->r[31]|c->r[31]; // 801B5948
  c->r[5]=0u+0x0000001Fu; // 801B594C
  c->lr=0x801B5954u; f_801900A4(c); // 801B5950
L_801B5954:;
  c->r[3]=c->r[30]|c->r[30]; // 801B5954
  c->r[4]=c->r[31]|c->r[31]; // 801B5958
  c->lr=0x801B5960u; f_801C13D8(c); // 801B595C
L_801B5960:;
  c->r[5]=0u+0x803D0000u; // 801B5960
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B5964
  c->r[3]=R8(c->r[5]+0x00000020u); // 801B5968
  c->r[4]=c->r[5]+0x00000022u; // 801B596C
  c->r[5]=R8(c->r[5]+0x00000021u); // 801B5970
  c->lr=0x801B5978u; f_801BA5E4(c); // 801B5974
  goto L_801B5A6C; // 801B5978
L_801B597C:;
  c->r[3]=R8(c->r[6]+0x0000064Fu); // 801B597C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B5980
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B5984
  W8(c->r[6]+0x0000064Fu,c->r[3]); // 801B5988
  if (!crb(c,2)) { goto L_801B59B8; } // 801B598C
  c->r[3]=0u+0x00000000u; // 801B5990
  c->r[0]=0u+0x00000005u; // 801B5994
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801B5998
  c->r[3]=c->r[6]+0x00000574u; // 801B599C
  c->r[4]=0u+0x00000001u; // 801B59A0
  c->r[5]=0u+0x00000004u; // 801B59A4
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801B59A8
  c->lr=0x801B59B0u; f_801AD0EC(c); // 801B59AC
  c->lr=0x801B59B4u; f_801C0E7C(c); // 801B59B0
  goto L_801B5A6C; // 801B59B4
L_801B59B8:;
  c->r[3]=c->r[6]+0x00000574u; // 801B59B8
  c->r[4]=0u+0x00000001u; // 801B59BC
  c->r[5]=0u+0x00000001u; // 801B59C0
  c->lr=0x801B59C8u; f_801AD0EC(c); // 801B59C4
  c->r[3]=0u+0x00000002u; // 801B59C8
  c->lr=0x801B59D0u; f_801AA140(c); // 801B59CC
  cmps(c,0,(int32_t)c->r[3],0); // 801B59D0
  if (crb(c,2)) { goto L_801B5A6C; } // 801B59D4
  c->lr=0x801B59DCu; f_801C19F4(c); // 801B59D8
  goto L_801B5A6C; // 801B59DC
L_801B59E0:;
  c->r[3]=R8(c->r[6]+0x0000064Fu); // 801B59E0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B59E4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B59E8
  W8(c->r[6]+0x0000064Fu,c->r[3]); // 801B59EC
  if (!crb(c,2)) { goto L_801B5A1C; } // 801B59F0
  c->r[3]=0u+0x00000000u; // 801B59F4
  c->r[0]=0u+0x00000005u; // 801B59F8
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801B59FC
  c->r[3]=c->r[6]+0x00000574u; // 801B5A00
  c->r[4]=0u+0x00000001u; // 801B5A04
  c->r[5]=0u+0x00000004u; // 801B5A08
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801B5A0C
  c->lr=0x801B5A14u; f_801AD0EC(c); // 801B5A10
  c->lr=0x801B5A18u; f_801C0E7C(c); // 801B5A14
  goto L_801B5A6C; // 801B5A18
L_801B5A1C:;
  c->r[3]=c->r[6]+0x00000574u; // 801B5A1C
  c->r[4]=0u+0x00000001u; // 801B5A20
  c->r[5]=0u+0x00000001u; // 801B5A24
  c->lr=0x801B5A2Cu; f_801AD0EC(c); // 801B5A28
  c->lr=0x801B5A30u; f_801C1938(c); // 801B5A2C
  c->lr=0x801B5A34u; f_801C1A1C(c); // 801B5A30
  c->lr=0x801B5A38u; f_801B8D40(c); // 801B5A34
  goto L_801B5A6C; // 801B5A38
L_801B5A3C:;
  cmpu(c,0,c->r[0],0x00000002u); // 801B5A3C
  if (!crb(c,2)) { goto L_801B5A6C; } // 801B5A40
  c->r[3]=0u+0x803D0000u; // 801B5A44
  c->r[0]=0u+0x00000000u; // 801B5A48
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5A4C
  c->r[12]=R32(c->r[3]+0x000005A8u); // 801B5A50
  cmps(c,0,(int32_t)c->r[12],0); // 801B5A54
  W32(c->r[3]+0x000005A8u,c->r[0]); // 801B5A58
  if (crb(c,2)) { goto L_801B5A6C; } // 801B5A5C
  c->r[3]=0u+0x00000000u; // 801B5A60
  c->ctr=c->r[12]; // 801B5A64
  if (true) { c->lr=0x801B5A6Cu; dispatch(c,c->ctr); } // 801B5A68
L_801B5A6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5A6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5A70
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B5A74
  c->lr=c->r[0]; // 801B5A78
  c->r[1]=c->r[1]+0x00000010u; // 801B5A7C
  return; // 801B5A80
}

// btm_reset_complete
void f_801B5A84(Ctx* __restrict c) {
  trace_call(0x801B5A84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5A84
  c->r[0]=c->lr; // 801B5A88
  c->r[3]=0u+0x803D0000u; // 801B5A8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5A90
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5A94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5A98
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B5A9C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B5AA0
  cmpu(c,0,c->r[0],0x00000004u); // 801B5AA4
  if (crb(c,0)) { goto L_801B5AC0; } // 801B5AA8
  c->r[3]=0u+0x000D0000u; // 801B5AAC
  c->r[4]=0u+0x80330000u; // 801B5AB0
  c->r[3]=c->r[3]+0x00000003u; // 801B5AB4
  c->r[4]=c->r[4]+0x000027B8u; // 801B5AB8
  c->lr=0x801B5AC0u; f_801ACB20(c); // 801B5ABC
L_801B5AC0:;
  c->r[31]=0u+0x803D0000u; // 801B5AC0
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B5AC4
  c->r[12]=R32(c->r[31]+0x00000620u); // 801B5AC8
  cmps(c,0,(int32_t)c->r[12],0); // 801B5ACC
  if (crb(c,2)) { goto L_801B5AEC; } // 801B5AD0
  c->r[0]=0u+0x00000000u; // 801B5AD4
  c->r[3]=0u+0x00000000u; // 801B5AD8
  W32(c->r[31]+0x00000620u,c->r[0]); // 801B5ADC
  c->ctr=c->r[12]; // 801B5AE0
  if (true) { c->lr=0x801B5AE8u; dispatch(c,c->ctr); } // 801B5AE4
  goto L_801B5C30; // 801B5AE8
L_801B5AEC:;
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801B5AEC
  cmps(c,0,(int32_t)c->r[0],0); // 801B5AF0
  if (!crb(c,2)) { goto L_801B5C30; } // 801B5AF4
  c->lr=0x801B5AFCu; f_801CB19C(c); // 801B5AF8
  c->r[6]=0u+0x00000012u; // 801B5AFC
  c->r[5]=0u+0x00000800u; // 801B5B00
  c->r[4]=0u+0x00000000u; // 801B5B04
  c->r[0]=0u+0x00000004u; // 801B5B08
  c->r[3]=0u+0x00000002u; // 801B5B0C
  W16(c->r[31]+0x000016A0u,c->r[6]); // 801B5B10
  W16(c->r[31]+0x000016A2u,c->r[5]); // 801B5B14
  W16(c->r[31]+0x000016A4u,c->r[4]); // 801B5B18
  W16(c->r[31]+0x0000169Cu,c->r[6]); // 801B5B1C
  W16(c->r[31]+0x0000169Eu,c->r[5]); // 801B5B20
  W16(c->r[31]+0x000016A6u,c->r[4]); // 801B5B24
  W8(c->r[31]+0x0000064Eu,c->r[3]); // 801B5B28
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801B5B2C
  goto L_801B5B48; // 801B5B30
  W8(c->r[31]+0x0000064Eu,c->r[4]); // 801B5B34
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801B5B38
  c->lr=0x801B5B40u; f_801AD0EC(c); // 801B5B3C
  c->lr=0x801B5B44u; f_801C0E7C(c); // 801B5B40
  goto L_801B5B6C; // 801B5B44
L_801B5B48:;
  c->r[3]=c->r[31]+0x00000574u; // 801B5B48
  c->r[4]=0u+0x00000001u; // 801B5B4C
  c->r[5]=0u+0x00000001u; // 801B5B50
  c->lr=0x801B5B58u; f_801AD0EC(c); // 801B5B54
  c->r[3]=0u+0x00000002u; // 801B5B58
  c->lr=0x801B5B60u; f_801AA140(c); // 801B5B5C
  cmps(c,0,(int32_t)c->r[3],0); // 801B5B60
  if (crb(c,2)) { goto L_801B5B6C; } // 801B5B64
  c->lr=0x801B5B6Cu; f_801C19F4(c); // 801B5B68
L_801B5B6C:;
  c->r[31]=0u+0x803D0000u; // 801B5B6C
  c->r[5]=0u+0x00000003u; // 801B5B70
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B5B74
  c->r[3]=c->r[31]+0x00000648u; // 801B5B78
  c->r[4]=c->r[3]|c->r[3]; // 801B5B7C
  c->lr=0x801B5B84u; f_80004338(c); // 801B5B80
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801B5B84
  cmps(c,0,(int32_t)c->r[0],0); // 801B5B88
  if (crb(c,2)) { goto L_801B5BB0; } // 801B5B8C
  cmpu(c,0,c->r[0],0x00000001u); // 801B5B90
  if (crb(c,2)) { goto L_801B5BB0; } // 801B5B94
  c->r[3]=0u+0x00000002u; // 801B5B98
  c->lr=0x801B5BA0u; f_801AA140(c); // 801B5B9C
  cmps(c,0,(int32_t)c->r[3],0); // 801B5BA0
  if (crb(c,2)) { goto L_801B5BB0; } // 801B5BA4
  c->r[4]=c->r[31]+0x00000648u; // 801B5BA8
  c->lr=0x801B5BB0u; f_801C16F0(c); // 801B5BAC
L_801B5BB0:;
  c->r[0]=0u+0x803D0000u; // 801B5BB0
  c->r[31]=addc(c,c->r[0],0xFFFF8118u,0); cr0(c,c->r[31]); // 801B5BB4
  if (crb(c,2)) { goto L_801B5C18; } // 801B5BB8
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801B5BBC
  cmps(c,0,(int32_t)c->r[0],0); // 801B5BC0
  if (crb(c,2)) { goto L_801B5C18; } // 801B5BC4
  cmpu(c,0,c->r[0],0x00000001u); // 801B5BC8
  if (crb(c,2)) { goto L_801B5C18; } // 801B5BCC
  c->r[3]=0u+0x00000002u; // 801B5BD0
  c->lr=0x801B5BD8u; f_801AA140(c); // 801B5BD4
  cmps(c,0,(int32_t)c->r[3],0); // 801B5BD8
  c->r[30]=c->r[3]|c->r[3]; // 801B5BDC
  if (crb(c,2)) { goto L_801B5C18; } // 801B5BE0
  cmpu(c,0,c->r[31],c->r[31]); // 801B5BE4
  if (crb(c,2)) { goto L_801B5C0C; } // 801B5BE8
  c->r[3]=c->r[31]|c->r[31]; // 801B5BEC
  c->r[4]=0u+0x00000000u; // 801B5BF0
  c->r[5]=0u+0x00000020u; // 801B5BF4
  c->lr=0x801B5BFCu; f_80004688(c); // 801B5BF8
  c->r[3]=c->r[31]|c->r[31]; // 801B5BFC
  c->r[4]=c->r[31]|c->r[31]; // 801B5C00
  c->r[5]=0u+0x0000001Fu; // 801B5C04
  c->lr=0x801B5C0Cu; f_801900A4(c); // 801B5C08
L_801B5C0C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B5C0C
  c->r[4]=c->r[31]|c->r[31]; // 801B5C10
  c->lr=0x801B5C18u; f_801C13D8(c); // 801B5C14
L_801B5C18:;
  c->r[5]=0u+0x803D0000u; // 801B5C18
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B5C1C
  c->r[3]=R8(c->r[5]+0x00000020u); // 801B5C20
  c->r[4]=c->r[5]+0x00000022u; // 801B5C24
  c->r[5]=R8(c->r[5]+0x00000021u); // 801B5C28
  c->lr=0x801B5C30u; f_801BA5E4(c); // 801B5C2C
L_801B5C30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5C30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5C34
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B5C38
  c->lr=c->r[0]; // 801B5C3C
  c->r[1]=c->r[1]+0x00000010u; // 801B5C40
  return; // 801B5C44
}

// btm_read_hci_buf_size_complete
void f_801B5C48(Ctx* __restrict c) {
  trace_call(0x801B5C48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5C48
  c->r[0]=c->lr; // 801B5C4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5C50
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B5C54
  cmps(c,0,(int32_t)c->r[0],0); // 801B5C58
  if (!crb(c,2)) { goto L_801B5CB4; } // 801B5C5C
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B5C60
  c->r[6]=0u+0x803C0000u; // 801B5C64
  c->r[4]=R8(c->r[3]+0x00000001u); // 801B5C68
  c->r[6]=c->r[6]+0x00007BF0u; // 801B5C6C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B5C70
  c->r[0]=c->r[4]+c->r[0]; // 801B5C74
  W16(c->r[6]+0x0000007Cu,c->r[0]); // 801B5C78
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801B5C7C
  c->r[0]=c->r[4]+0x00000004u; // 801B5C80
  c->r[4]=R8(c->r[3]+0x00000005u); // 801B5C84
  c->r[5]=R8(c->r[3]+0x00000004u); // 801B5C88
  c->r[3]=rotl(c->r[4],8)&0xFFFFFF00u; // 801B5C8C
  c->r[3]=c->r[5]+c->r[3]; // 801B5C90
  W16(c->r[6]+0x0000007Eu,c->r[0]); // 801B5C94
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801B5C98
  c->lr=0x801B5CA0u; f_801C8218(c); // 801B5C9C
  c->r[3]=0u+0x0000069Bu; // 801B5CA0
  c->r[4]=0u+0x0000001Eu; // 801B5CA4
  c->r[5]=0u+0x00000014u; // 801B5CA8
  c->r[6]=0u+0x0000000Au; // 801B5CAC
  c->lr=0x801B5CB4u; f_801C1778(c); // 801B5CB0
L_801B5CB4:;
  c->r[3]=0u+0x803D0000u; // 801B5CB4
  c->r[0]=0u+0x00000004u; // 801B5CB8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5CBC
  c->r[4]=0u+0x00000003u; // 801B5CC0
  W8(c->r[3]+0x0000064Eu,c->r[4]); // 801B5CC4
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801B5CC8
  goto L_801B5CE4; // 801B5CCC
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801B5CD0
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 801B5CD4
  c->lr=0x801B5CDCu; f_801AD0EC(c); // 801B5CD8
  c->lr=0x801B5CE0u; f_801C0E7C(c); // 801B5CDC
  goto L_801B5D00; // 801B5CE0
L_801B5CE4:;
  c->r[3]=c->r[3]+0x00000574u; // 801B5CE4
  c->r[4]=0u+0x00000001u; // 801B5CE8
  c->r[5]=0u+0x00000001u; // 801B5CEC
  c->lr=0x801B5CF4u; f_801AD0EC(c); // 801B5CF0
  c->lr=0x801B5CF8u; f_801C1938(c); // 801B5CF4
  c->lr=0x801B5CFCu; f_801C1A1C(c); // 801B5CF8
  c->lr=0x801B5D00u; f_801B8D40(c); // 801B5CFC
L_801B5D00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5D00
  c->lr=c->r[0]; // 801B5D04
  c->r[1]=c->r[1]+0x00000010u; // 801B5D08
  return; // 801B5D0C
}

// btm_read_local_version_complete
void f_801B5D10(Ctx* __restrict c) {
  trace_call(0x801B5D10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5D10
  c->r[0]=c->lr; // 801B5D14
  c->r[5]=0u+0x803D0000u; // 801B5D18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5D1C
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B5D20
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B5D24
  cmps(c,0,(int32_t)c->r[0],0); // 801B5D28
  if (!crb(c,2)) { goto L_801B5D7C; } // 801B5D2C
  c->r[0]=R8(c->r[3]+0x00000001u); // 801B5D30
  W8(c->r[5]+0x00000636u,c->r[0]); // 801B5D34
  c->r[0]=R8(c->r[3]+0x00000003u); // 801B5D38
  c->r[4]=R8(c->r[3]+0x00000002u); // 801B5D3C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B5D40
  c->r[0]=c->r[4]+c->r[0]; // 801B5D44
  W16(c->r[5]+0x00000638u,c->r[0]); // 801B5D48
  c->r[0]=R8(c->r[3]+0x00000004u); // 801B5D4C
  W8(c->r[5]+0x0000063Au,c->r[0]); // 801B5D50
  c->r[0]=R8(c->r[3]+0x00000006u); // 801B5D54
  c->r[4]=R8(c->r[3]+0x00000005u); // 801B5D58
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B5D5C
  c->r[0]=c->r[4]+c->r[0]; // 801B5D60
  W16(c->r[5]+0x0000063Cu,c->r[0]); // 801B5D64
  c->r[0]=R8(c->r[3]+0x00000008u); // 801B5D68
  c->r[3]=R8(c->r[3]+0x00000007u); // 801B5D6C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B5D70
  c->r[0]=c->r[3]+c->r[0]; // 801B5D74
  W16(c->r[5]+0x0000063Eu,c->r[0]); // 801B5D78
L_801B5D7C:;
  c->r[3]=0u+0x803D0000u; // 801B5D7C
  c->r[0]=0u+0x00000004u; // 801B5D80
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5D84
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 801B5D88
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801B5D8C
  goto L_801B5DA8; // 801B5D90
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801B5D94
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 801B5D98
  c->lr=0x801B5DA0u; f_801AD0EC(c); // 801B5D9C
  c->lr=0x801B5DA4u; f_801C0E7C(c); // 801B5DA0
  goto L_801B5DBC; // 801B5DA4
L_801B5DA8:;
  c->r[3]=c->r[3]+0x00000574u; // 801B5DA8
  c->r[4]=0u+0x00000001u; // 801B5DAC
  c->r[5]=0u+0x00000001u; // 801B5DB0
  c->lr=0x801B5DB8u; f_801AD0EC(c); // 801B5DB4
  c->lr=0x801B5DBCu; f_801C1998(c); // 801B5DB8
L_801B5DBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5DBC
  c->lr=c->r[0]; // 801B5DC0
  c->r[1]=c->r[1]+0x00000010u; // 801B5DC4
  return; // 801B5DC8
}

// btm_read_local_features_complete
void f_801B5DCC(Ctx* __restrict c) {
  trace_call(0x801B5DCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5DCC
  c->r[0]=c->lr; // 801B5DD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B5DD4
  c->r[11]=c->r[1]+0x00000020u; // 801B5DD8
  c->lr=0x801B5DE0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B5DDC
  c->r[31]=0u+0x803D0000u; // 801B5DE0
  c->r[30]=0u+0x80330000u; // 801B5DE4
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B5DE8
  c->r[0]=0u+0x00000000u; // 801B5DEC
  c->r[28]=R32(c->r[31]+0x0000058Cu); // 801B5DF0
  c->r[30]=c->r[30]+0x00002788u; // 801B5DF4
  W32(c->r[31]+0x0000058Cu,c->r[0]); // 801B5DF8
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B5DFC
  cmps(c,0,(int32_t)c->r[0],0); // 801B5E00
  if (!crb(c,2)) { goto L_801B62B0; } // 801B5E04
  c->r[0]=0u+0x00000005u; // 801B5E08
  c->r[4]=0u+0x00000018u; // 801B5E0C
  W8(c->r[31]+0x0000064Eu,c->r[0]); // 801B5E10
  c->r[0]=R8(c->r[3]+0x00000001u); // 801B5E14
  W8(c->r[31]+0x00000640u,c->r[0]); // 801B5E18
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B5E1C
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B5E20
  W8(c->r[31]+0x00000641u,c->r[0]); // 801B5E24
  c->r[0]=R8(c->r[3]+0x00000003u); // 801B5E28
  W8(c->r[31]+0x00000642u,c->r[0]); // 801B5E2C
  c->r[0]=R8(c->r[3]+0x00000004u); // 801B5E30
  W8(c->r[31]+0x00000643u,c->r[0]); // 801B5E34
  c->r[0]=R8(c->r[3]+0x00000005u); // 801B5E38
  W8(c->r[31]+0x00000644u,c->r[0]); // 801B5E3C
  c->r[0]=R8(c->r[3]+0x00000006u); // 801B5E40
  W8(c->r[31]+0x00000645u,c->r[0]); // 801B5E44
  c->r[0]=R8(c->r[3]+0x00000007u); // 801B5E48
  W8(c->r[31]+0x00000646u,c->r[0]); // 801B5E4C
  c->r[0]=R8(c->r[3]+0x00000008u); // 801B5E50
  W8(c->r[31]+0x00000647u,c->r[0]); // 801B5E54
  W16(c->r[31]+0x00000654u,c->r[4]); // 801B5E58
  if (crb(c,2)) { goto L_801B5E68; } // 801B5E5C
  c->r[0]=c->r[4]|0x00000C00u; // 801B5E60
  W16(c->r[31]+0x00000654u,c->r[0]); // 801B5E64
L_801B5E68:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801B5E68
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B5E6C
  if (crb(c,2)) { goto L_801B5E88; } // 801B5E70
  c->r[3]=0u+0x803D0000u; // 801B5E74
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5E78
  c->r[0]=R16(c->r[3]+0x00000654u); // 801B5E7C
  c->r[0]=c->r[0]|0x0000C000u; // 801B5E80
  W16(c->r[3]+0x00000654u,c->r[0]); // 801B5E84
L_801B5E88:;
  c->r[3]=0u+0x803D0000u; // 801B5E88
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5E8C
  c->r[0]=R8(c->r[3]+0x00000636u); // 801B5E90
  cmpu(c,0,c->r[0],0x00000003u); // 801B5E94
  if (crb(c,0)) { goto L_801B5F28; } // 801B5E98
  c->r[0]=R8(c->r[31]+0x00000643u); // 801B5E9C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B5EA0
  if (!crb(c,2)) { goto L_801B5EB4; } // 801B5EA4
  c->r[0]=R16(c->r[3]+0x00000654u); // 801B5EA8
  c->r[0]=c->r[0]|0x00001102u; // 801B5EAC
  W16(c->r[3]+0x00000654u,c->r[0]); // 801B5EB0
L_801B5EB4:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 801B5EB4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B5EB8
  if (!crb(c,2)) { goto L_801B5ED4; } // 801B5EBC
  c->r[3]=0u+0x803D0000u; // 801B5EC0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5EC4
  c->r[0]=R16(c->r[3]+0x00000654u); // 801B5EC8
  c->r[0]=c->r[0]|0x00002204u; // 801B5ECC
  W16(c->r[3]+0x00000654u,c->r[0]); // 801B5ED0
L_801B5ED4:;
  c->r[3]=R8(c->r[31]+0x00000643u); // 801B5ED4
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801B5ED8
  if (!crb(c,2)) { goto L_801B5EE8; } // 801B5EDC
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801B5EE0
  if (crb(c,2)) { goto L_801B5F28; } // 801B5EE4
L_801B5EE8:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 801B5EE8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B5EEC
  if (!crb(c,2)) { goto L_801B5F08; } // 801B5EF0
  c->r[3]=0u+0x803D0000u; // 801B5EF4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5EF8
  c->r[0]=R16(c->r[3]+0x00000654u); // 801B5EFC
  c->r[0]=c->r[0]|0x00000300u; // 801B5F00
  W16(c->r[3]+0x00000654u,c->r[0]); // 801B5F04
L_801B5F08:;
  c->r[0]=R8(c->r[31]+0x00000645u); // 801B5F08
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B5F0C
  if (!crb(c,2)) { goto L_801B5F28; } // 801B5F10
  c->r[3]=0u+0x803D0000u; // 801B5F14
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5F18
  c->r[0]=R16(c->r[3]+0x00000654u); // 801B5F1C
  c->r[0]=c->r[0]|0x00003000u; // 801B5F20
  W16(c->r[3]+0x00000654u,c->r[0]); // 801B5F24
L_801B5F28:;
  c->r[4]=0u+0x803D0000u; // 801B5F28
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B5F2C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B5F30
  cmpu(c,0,c->r[0],0x00000005u); // 801B5F34
  if (crb(c,0)) { goto L_801B5F50; } // 801B5F38
  c->r[3]=0u+0x000D0000u; // 801B5F3C
  c->r[5]=R16(c->r[4]+0x00000654u); // 801B5F40
  c->r[3]=c->r[3]+0x00000004u; // 801B5F44
  c->r[4]=c->r[30]+0x00000044u; // 801B5F48
  c->lr=0x801B5F50u; f_801ACB38(c); // 801B5F4C
L_801B5F50:;
  c->r[3]=R8(c->r[31]+0x00000641u); // 801B5F50
  c->r[4]=0u+0x803D0000u; // 801B5F54
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B5F58
  c->r[5]=0u+0x00000000u; // 801B5F5C
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801B5F60
  W16(c->r[4]+0x00000656u,c->r[5]); // 801B5F64
  W8(c->r[4]+0x00001908u,c->r[5]); // 801B5F68
  if (crb(c,2)) { goto L_801B5FA8; } // 801B5F6C
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801B5F70
  c->r[0]=0u+0x00000001u; // 801B5F74
  W16(c->r[4]+0x00000656u,c->r[0]); // 801B5F78
  if (crb(c,2)) { goto L_801B5F88; } // 801B5F7C
  c->r[0]=c->r[0]|0x00000002u; // 801B5F80
  W16(c->r[4]+0x00000656u,c->r[0]); // 801B5F84
L_801B5F88:;
  c->r[0]=R8(c->r[31]+0x00000641u); // 801B5F88
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801B5F8C
  if (crb(c,2)) { goto L_801B5FA8; } // 801B5F90
  c->r[3]=0u+0x803D0000u; // 801B5F94
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5F98
  c->r[0]=R16(c->r[3]+0x00000656u); // 801B5F9C
  c->r[0]=c->r[0]|0x00000004u; // 801B5FA0
  W16(c->r[3]+0x00000656u,c->r[0]); // 801B5FA4
L_801B5FA8:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 801B5FA8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B5FAC
  if (crb(c,2)) { goto L_801B5FC8; } // 801B5FB0
  c->r[3]=0u+0x803D0000u; // 801B5FB4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5FB8
  c->r[0]=R16(c->r[3]+0x00000656u); // 801B5FBC
  c->r[0]=c->r[0]|0x00000008u; // 801B5FC0
  W16(c->r[3]+0x00000656u,c->r[0]); // 801B5FC4
L_801B5FC8:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 801B5FC8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B5FCC
  if (crb(c,2)) { goto L_801B5FE8; } // 801B5FD0
  c->r[3]=0u+0x803D0000u; // 801B5FD4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5FD8
  c->r[0]=R16(c->r[3]+0x00000656u); // 801B5FDC
  c->r[0]=c->r[0]|0x00000010u; // 801B5FE0
  W16(c->r[3]+0x00000656u,c->r[0]); // 801B5FE4
L_801B5FE8:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 801B5FE8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B5FEC
  if (crb(c,2)) { goto L_801B6008; } // 801B5FF0
  c->r[3]=0u+0x803D0000u; // 801B5FF4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B5FF8
  c->r[0]=R16(c->r[3]+0x00000656u); // 801B5FFC
  c->r[0]=c->r[0]|0x00000020u; // 801B6000
  W16(c->r[3]+0x00000656u,c->r[0]); // 801B6004
L_801B6008:;
  c->r[4]=0u+0x803D0000u; // 801B6008
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B600C
  c->r[3]=R16(c->r[4]+0x00000656u); // 801B6010
  c->r[0]=rotl(c->r[3],0)&0x00000038u; cr0(c,c->r[0]); // 801B6014
  if (crb(c,2)) { goto L_801B608C; } // 801B6018
  c->r[5]=R8(c->r[31]+0x00000645u); // 801B601C
  c->r[0]=0u+0x00000001u; // 801B6020
  W8(c->r[4]+0x00001908u,c->r[0]); // 801B6024
  c->r[0]=rotl(c->r[5],0)&0x00000020u; cr0(c,c->r[0]); // 801B6028
  if (crb(c,2)) { goto L_801B6044; } // 801B602C
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801B6030
  if (!crb(c,2)) { goto L_801B604C; } // 801B6034
  c->r[0]=c->r[3]|0x00000100u; // 801B6038
  W16(c->r[4]+0x00000656u,c->r[0]); // 801B603C
  goto L_801B604C; // 801B6040
L_801B6044:;
  c->r[0]=c->r[3]|0x00000140u; // 801B6044
  W16(c->r[4]+0x00000656u,c->r[0]); // 801B6048
L_801B604C:;
  c->r[3]=R8(c->r[31]+0x00000645u); // 801B604C
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801B6050
  if (crb(c,2)) { goto L_801B6078; } // 801B6054
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 801B6058
  if (!crb(c,2)) { goto L_801B608C; } // 801B605C
  c->r[3]=0u+0x803D0000u; // 801B6060
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B6064
  c->r[0]=R16(c->r[3]+0x00000656u); // 801B6068
  c->r[0]=c->r[0]|0x00000200u; // 801B606C
  W16(c->r[3]+0x00000656u,c->r[0]); // 801B6070
  goto L_801B608C; // 801B6074
L_801B6078:;
  c->r[3]=0u+0x803D0000u; // 801B6078
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B607C
  c->r[0]=R16(c->r[3]+0x00000656u); // 801B6080
  c->r[0]=c->r[0]|0x00000280u; // 801B6084
  W16(c->r[3]+0x00000656u,c->r[0]); // 801B6088
L_801B608C:;
  c->r[4]=0u+0x803D0000u; // 801B608C
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B6090
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B6094
  cmpu(c,0,c->r[0],0x00000005u); // 801B6098
  if (crb(c,0)) { goto L_801B60B4; } // 801B609C
  c->r[3]=0u+0x000D0000u; // 801B60A0
  c->r[5]=R16(c->r[4]+0x00000656u); // 801B60A4
  c->r[3]=c->r[3]+0x00000004u; // 801B60A8
  c->r[4]=c->r[30]+0x00000070u; // 801B60AC
  c->lr=0x801B60B4u; f_801ACB38(c); // 801B60B0
L_801B60B4:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801B60B4
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801B60B8
  if (crb(c,2)) { goto L_801B60D8; } // 801B60BC
  c->r[3]=0u+0x803D0000u; // 801B60C0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B60C4
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B60C8
  c->r[0]=c->r[0]|0x00000001u; // 801B60CC
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B60D0
  goto L_801B60EC; // 801B60D4
L_801B60D8:;
  c->r[3]=0u+0x803D0000u; // 801B60D8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B60DC
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B60E0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 801B60E4
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B60E8
L_801B60EC:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801B60EC
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801B60F0
  if (crb(c,2)) { goto L_801B6110; } // 801B60F4
  c->r[3]=0u+0x803D0000u; // 801B60F8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B60FC
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B6100
  c->r[0]=c->r[0]|0x00000002u; // 801B6104
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B6108
  goto L_801B6124; // 801B610C
L_801B6110:;
  c->r[3]=0u+0x803D0000u; // 801B6110
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B6114
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B6118
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801B611C
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B6120
L_801B6124:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801B6124
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B6128
  if (crb(c,2)) { goto L_801B6148; } // 801B612C
  c->r[3]=0u+0x803D0000u; // 801B6130
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B6134
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B6138
  c->r[0]=c->r[0]|0x00000004u; // 801B613C
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B6140
  goto L_801B615C; // 801B6144
L_801B6148:;
  c->r[3]=0u+0x803D0000u; // 801B6148
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B614C
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B6150
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B6154
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B6158
L_801B615C:;
  c->r[0]=R8(c->r[31]+0x00000641u); // 801B615C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B6160
  if (crb(c,2)) { goto L_801B6180; } // 801B6164
  c->r[3]=0u+0x803D0000u; // 801B6168
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B616C
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B6170
  c->r[0]=c->r[0]|0x00000008u; // 801B6174
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B6178
  goto L_801B6194; // 801B617C
L_801B6180:;
  c->r[3]=0u+0x803D0000u; // 801B6180
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B6184
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B6188
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801B618C
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B6190
L_801B6194:;
  c->lr=0x801B6198u; f_801BB770(c); // 801B6194
  c->r[4]=0u+0x803D0000u; // 801B6198
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B619C
  c->r[29]=R8(c->r[4]+0x000027BEu); // 801B61A0
  cmpu(c,0,c->r[29],0x000000FFu); // 801B61A4
  if (crb(c,2)) { goto L_801B6254; } // 801B61A8
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B61AC
  c->r[3]=0u+0x000000FFu; // 801B61B0
  c->r[27]=R8(c->r[4]+0x000027BDu); // 801B61B4
  cmpu(c,0,c->r[0],0x00000003u); // 801B61B8
  W8(c->r[4]+0x000027BEu,c->r[3]); // 801B61BC
  W8(c->r[4]+0x000027BDu,c->r[3]); // 801B61C0
  if (crb(c,0)) { goto L_801B61E8; } // 801B61C4
  c->r[3]=0u+0x000D0000u; // 801B61C8
  c->r[5]=c->r[27]|c->r[27]; // 801B61CC
  c->r[7]=c->r[29]|c->r[29]; // 801B61D0
  c->r[4]=c->r[30]+0x00000000u; // 801B61D4
  c->r[3]=c->r[3]+0x00000002u; // 801B61D8
  c->r[6]=0u+0x000000FFu; // 801B61DC
  c->r[8]=0u+0x000000FFu; // 801B61E0
  c->lr=0x801B61E8u; f_801ACB80(c); // 801B61E4
L_801B61E8:;
  c->r[3]=0u+0x803D0000u; // 801B61E8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B61EC
  c->r[4]=R8(c->r[3]+0x00000645u); // 801B61F0
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 801B61F4
  if (!crb(c,2)) { goto L_801B6210; } // 801B61F8
  c->r[0]=R8(c->r[3]+0x00000644u); // 801B61FC
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801B6200
  if (!crb(c,2)) { goto L_801B6210; } // 801B6204
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801B6208
  if (crb(c,2)) { goto L_801B6254; } // 801B620C
L_801B6210:;
  c->r[3]=0u+0x803D0000u; // 801B6210
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B6214
  c->r[0]=R8(c->r[3]+0x000027BDu); // 801B6218
  cmpu(c,0,c->r[0],c->r[27]); // 801B621C
  if (!crb(c,2)) { goto L_801B6230; } // 801B6220
  c->r[0]=R8(c->r[3]+0x000027BEu); // 801B6224
  cmpu(c,0,c->r[0],c->r[29]); // 801B6228
  if (crb(c,2)) { goto L_801B6254; } // 801B622C
L_801B6230:;
  c->r[3]=c->r[27]|c->r[27]; // 801B6230
  c->r[4]=c->r[29]|c->r[29]; // 801B6234
  c->lr=0x801B623Cu; f_801C1B70(c); // 801B6238
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B623C
  if (crb(c,2)) { goto L_801B6254; } // 801B6240
  c->r[3]=0u+0x803D0000u; // 801B6244
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B6248
  W8(c->r[3]+0x000027BDu,c->r[27]); // 801B624C
  W8(c->r[3]+0x000027BEu,c->r[29]); // 801B6250
L_801B6254:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 801B6254
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801B6258
  if (crb(c,2)) { goto L_801B6268; } // 801B625C
  c->r[3]=0u+0x00000001u; // 801B6260
  c->lr=0x801B6268u; f_801B72EC(c); // 801B6264
L_801B6268:;
  c->r[3]=0u+0x00000001u; // 801B6268
  c->lr=0x801B6270u; f_801B723C(c); // 801B626C
  c->r[3]=0u+0x00000001u; // 801B6270
  c->lr=0x801B6278u; f_801B718C(c); // 801B6274
  c->r[3]=0u+0x803D0000u; // 801B6278
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B627C
  c->r[12]=R32(c->r[3]+0x00000568u); // 801B6280
  cmps(c,0,(int32_t)c->r[12],0); // 801B6284
  if (crb(c,2)) { goto L_801B6298; } // 801B6288
  c->r[3]=0u+0x00000000u; // 801B628C
  c->ctr=c->r[12]; // 801B6290
  if (true) { c->lr=0x801B6298u; dispatch(c,c->ctr); } // 801B6294
L_801B6298:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B6298
  if (crb(c,2)) { goto L_801B62B0; } // 801B629C
  c->r[12]=c->r[28]|c->r[28]; // 801B62A0
  c->r[3]=0u+0x00000000u; // 801B62A4
  c->ctr=c->r[12]; // 801B62A8
  if (true) { c->lr=0x801B62B0u; dispatch(c,c->ctr); } // 801B62AC
L_801B62B0:;
  c->r[11]=c->r[1]+0x00000020u; // 801B62B0
  c->lr=0x801B62B8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B62B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B62B8
  c->lr=c->r[0]; // 801B62BC
  c->r[1]=c->r[1]+0x00000020u; // 801B62C0
  return; // 801B62C4
}

// BTM_SetLocalDeviceName
void f_801B62C8(Ctx* __restrict c) {
  trace_call(0x801B62C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B62C8
  c->r[0]=c->lr; // 801B62CC
  cmps(c,0,(int32_t)c->r[3],0); // 801B62D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B62D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B62D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B62DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B62E0
  c->r[29]=c->r[3]|c->r[3]; // 801B62E4
  if (!crb(c,2)) { goto L_801B62F4; } // 801B62E8
  c->r[3]=0u+0x00000005u; // 801B62EC
  goto L_801B6364; // 801B62F0
L_801B62F4:;
  c->r[30]=0u+0x803D0000u; // 801B62F4
  c->r[30]=c->r[30]+0xFFFF8118u; // 801B62F8
  c->r[0]=R8(c->r[30]+0x0000064Eu); // 801B62FC
  cmpu(c,0,c->r[0],0x00000001u); // 801B6300
  if (crb(c,1)) { goto L_801B6310; } // 801B6304
  c->r[3]=0u+0x0000000Cu; // 801B6308
  goto L_801B6364; // 801B630C
L_801B6310:;
  c->r[3]=0u+0x00000002u; // 801B6310
  c->lr=0x801B6318u; f_801AA140(c); // 801B6314
  cmps(c,0,(int32_t)c->r[3],0); // 801B6318
  c->r[31]=c->r[3]|c->r[3]; // 801B631C
  if (crb(c,2)) { goto L_801B6360; } // 801B6320
  cmpu(c,0,c->r[30],c->r[29]); // 801B6324
  if (crb(c,2)) { goto L_801B634C; } // 801B6328
  c->r[3]=c->r[30]|c->r[30]; // 801B632C
  c->r[4]=0u+0x00000000u; // 801B6330
  c->r[5]=0u+0x00000020u; // 801B6334
  c->lr=0x801B633Cu; f_80004688(c); // 801B6338
  c->r[3]=c->r[30]|c->r[30]; // 801B633C
  c->r[4]=c->r[29]|c->r[29]; // 801B6340
  c->r[5]=0u+0x0000001Fu; // 801B6344
  c->lr=0x801B634Cu; f_801900A4(c); // 801B6348
L_801B634C:;
  c->r[3]=c->r[31]|c->r[31]; // 801B634C
  c->r[4]=c->r[30]|c->r[30]; // 801B6350
  c->lr=0x801B6358u; f_801C13D8(c); // 801B6354
  c->r[3]=0u+0x00000001u; // 801B6358
  goto L_801B6364; // 801B635C
L_801B6360:;
  c->r[3]=0u+0x00000003u; // 801B6360
L_801B6364:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B6364
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B6368
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B636C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B6370
  c->lr=c->r[0]; // 801B6374
  c->r[1]=c->r[1]+0x00000020u; // 801B6378
  return; // 801B637C
}

// btm_read_local_name_complete
void f_801B6380(Ctx* __restrict c) {
  trace_call(0x801B6380u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6380
  c->r[0]=c->lr; // 801B6384
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B6388
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B638C
  c->r[31]=0u+0x803D0000u; // 801B6390
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B6394
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B6398
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B639C
  c->r[29]=c->r[3]|c->r[3]; // 801B63A0
  c->r[3]=c->r[31]+0x00000590u; // 801B63A4
  c->r[30]=R32(c->r[31]+0x000005A8u); // 801B63A8
  c->lr=0x801B63B0u; f_801AD15C(c); // 801B63AC
  c->r[0]=0u+0x00000000u; // 801B63B0
  cmps(c,0,(int32_t)c->r[30],0); // 801B63B4
  W32(c->r[31]+0x000005A8u,c->r[0]); // 801B63B8
  if (crb(c,2)) { goto L_801B63F0; } // 801B63BC
  c->r[0]=R8(c->r[29]+0x00000000u); // 801B63C0
  cmps(c,0,(int32_t)c->r[0],0); // 801B63C4
  if (!crb(c,2)) { goto L_801B63E0; } // 801B63C8
  c->r[12]=c->r[30]|c->r[30]; // 801B63CC
  c->r[3]=c->r[29]+0x00000001u; // 801B63D0
  c->ctr=c->r[12]; // 801B63D4
  if (true) { c->lr=0x801B63DCu; dispatch(c,c->ctr); } // 801B63D8
  goto L_801B63F0; // 801B63DC
L_801B63E0:;
  c->r[12]=c->r[30]|c->r[30]; // 801B63E0
  c->r[3]=0u+0x00000000u; // 801B63E4
  c->ctr=c->r[12]; // 801B63E8
  if (true) { c->lr=0x801B63F0u; dispatch(c,c->ctr); } // 801B63EC
L_801B63F0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B63F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B63F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B63F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B63FC
  c->lr=c->r[0]; // 801B6400
  c->r[1]=c->r[1]+0x00000020u; // 801B6404
  return; // 801B6408
}

// BTM_ReadLocalDeviceAddr
void f_801B640C(Ctx* __restrict c) {
  trace_call(0x801B640Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B640C
  c->r[0]=c->lr; // 801B6410
  cmps(c,0,(int32_t)c->r[3],0); // 801B6414
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6418
  if (crb(c,2)) { goto L_801B6438; } // 801B641C
  c->r[4]=0u+0x803D0000u; // 801B6420
  c->r[12]=c->r[3]|c->r[3]; // 801B6424
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B6428
  c->r[3]=c->r[4]+0x00000630u; // 801B642C
  c->ctr=c->r[12]; // 801B6430
  if (true) { c->lr=0x801B6438u; dispatch(c,c->ctr); } // 801B6434
L_801B6438:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6438
  c->r[3]=0u+0x00000000u; // 801B643C
  c->lr=c->r[0]; // 801B6440
  c->r[1]=c->r[1]+0x00000010u; // 801B6444
  return; // 801B6448
}

// btm_read_local_addr_complete
void f_801B644C(Ctx* __restrict c) {
  trace_call(0x801B644Cu);
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B644C
  cmps(c,0,(int32_t)c->r[0],0); // 801B6450
  if (!crb(c,2)) return; // 801B6454
  c->r[4]=0u+0x803D0000u; // 801B6458
  c->r[0]=R8(c->r[3]+0x00000001u); // 801B645C
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B6460
  W8(c->r[4]+0x00000635u,c->r[0]); // 801B6464
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B6468
  W8(c->r[4]+0x00000634u,c->r[0]); // 801B646C
  c->r[0]=R8(c->r[3]+0x00000003u); // 801B6470
  W8(c->r[4]+0x00000633u,c->r[0]); // 801B6474
  c->r[0]=R8(c->r[3]+0x00000004u); // 801B6478
  W8(c->r[4]+0x00000632u,c->r[0]); // 801B647C
  c->r[0]=R8(c->r[3]+0x00000005u); // 801B6480
  W8(c->r[4]+0x00000631u,c->r[0]); // 801B6484
  c->r[0]=R8(c->r[3]+0x00000006u); // 801B6488
  W8(c->r[4]+0x00000630u,c->r[0]); // 801B648C
  return; // 801B6490
}

// BTM_ReadLocalVersion
void f_801B6494(Ctx* __restrict c) {
  trace_call(0x801B6494u);
  c->r[5]=0u+0x803D0000u; // 801B6494
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B6498
  c->r[0]=R8(c->r[5]+0x0000064Eu); // 801B649C
  cmpu(c,0,c->r[0],0x00000004u); // 801B64A0
  if (!crb(c,0)) { goto L_801B64B0; } // 801B64A4
  c->r[3]=0u+0x0000000Cu; // 801B64A8
  return; // 801B64AC
L_801B64B0:;
  c->r[4]=R16(c->r[5]+0x00000636u); // 801B64B0
  c->r[0]=R16(c->r[5]+0x00000638u); // 801B64B4
  W16(c->r[3]+0x00000000u,c->r[4]); // 801B64B8
  W16(c->r[3]+0x00000002u,c->r[0]); // 801B64BC
  c->r[4]=R16(c->r[5]+0x0000063Au); // 801B64C0
  c->r[0]=R16(c->r[5]+0x0000063Cu); // 801B64C4
  W16(c->r[3]+0x00000004u,c->r[4]); // 801B64C8
  W16(c->r[3]+0x00000006u,c->r[0]); // 801B64CC
  c->r[0]=R16(c->r[5]+0x0000063Eu); // 801B64D0
  W16(c->r[3]+0x00000008u,c->r[0]); // 801B64D4
  c->r[3]=0u+0x00000000u; // 801B64D8
  return; // 801B64DC
}

// BTM_SetDeviceClass
void f_801B64E0(Ctx* __restrict c) {
  trace_call(0x801B64E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B64E0
  c->r[0]=c->lr; // 801B64E4
  c->r[5]=0u+0x00000003u; // 801B64E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B64EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B64F0
  c->r[31]=0u+0x803D0000u; // 801B64F4
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B64F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B64FC
  c->r[30]=c->r[3]|c->r[3]; // 801B6500
  c->r[4]=c->r[30]|c->r[30]; // 801B6504
  c->r[3]=c->r[31]+0x00000648u; // 801B6508
  c->lr=0x801B6510u; f_80004338(c); // 801B650C
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801B6510
  cmpu(c,0,c->r[0],0x00000001u); // 801B6514
  if (crb(c,1)) { goto L_801B6524; } // 801B6518
  c->r[3]=0u+0x0000000Cu; // 801B651C
  goto L_801B6548; // 801B6520
L_801B6524:;
  c->r[3]=0u+0x00000002u; // 801B6524
  c->lr=0x801B652Cu; f_801AA140(c); // 801B6528
  cmps(c,0,(int32_t)c->r[3],0); // 801B652C
  if (crb(c,2)) { goto L_801B6544; } // 801B6530
  c->r[4]=c->r[30]|c->r[30]; // 801B6534
  c->lr=0x801B653Cu; f_801C16F0(c); // 801B6538
  c->r[3]=0u+0x00000000u; // 801B653C
  goto L_801B6548; // 801B6540
L_801B6544:;
  c->r[3]=0u+0x00000003u; // 801B6544
L_801B6548:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6548
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B654C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B6550
  c->lr=c->r[0]; // 801B6554
  c->r[1]=c->r[1]+0x00000010u; // 801B6558
  return; // 801B655C
}

// BTM_ReadDeviceClass
void f_801B6560(Ctx* __restrict c) {
  trace_call(0x801B6560u);
  c->r[3]=0u+0x803D0000u; // 801B6560
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B6564
  c->r[3]=c->r[3]+0x00000648u; // 801B6568
  return; // 801B656C
}

// BTM_ReadLocalFeatures
void f_801B6570(Ctx* __restrict c) {
  trace_call(0x801B6570u);
  c->r[3]=0u+0x803D0000u; // 801B6570
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B6574
  c->r[3]=c->r[3]+0x00000640u; // 801B6578
  return; // 801B657C
}

// BTM_RegisterForDeviceStatusNotif
void f_801B6580(Ctx* __restrict c) {
  trace_call(0x801B6580u);
  c->r[4]=0u+0x803D0000u; // 801B6580
  c->r[0]=c->r[3]|c->r[3]; // 801B6584
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B6588
  c->r[3]=R32(c->r[4]+0x00000568u); // 801B658C
  W32(c->r[4]+0x00000568u,c->r[0]); // 801B6590
  return; // 801B6594
}

// BTM_VendorSpecificCommand
void f_801B6598(Ctx* __restrict c) {
  trace_call(0x801B6598u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6598
  c->r[0]=c->lr; // 801B659C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B65A0
  c->r[11]=c->r[1]+0x00000020u; // 801B65A4
  c->lr=0x801B65ACu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B65A8
  c->r[7]=0u+0x803D0000u; // 801B65AC
  c->r[27]=c->r[3]|c->r[3]; // 801B65B0
  c->r[7]=c->r[7]+0xFFFF8118u; // 801B65B4
  c->r[28]=c->r[4]|c->r[4]; // 801B65B8
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801B65BC
  c->r[29]=c->r[5]|c->r[5]; // 801B65C0
  c->r[30]=c->r[6]|c->r[6]; // 801B65C4
  cmpu(c,0,c->r[0],0x00000004u); // 801B65C8
  if (crb(c,0)) { goto L_801B65EC; } // 801B65CC
  c->r[3]=0u+0x000D0000u; // 801B65D0
  c->r[4]=0u+0x80330000u; // 801B65D4
  c->r[5]=c->r[27]|c->r[27]; // 801B65D8
  c->r[6]=c->r[28]|c->r[28]; // 801B65DC
  c->r[3]=c->r[3]+0x00000003u; // 801B65E0
  c->r[4]=c->r[4]+0x00002824u; // 801B65E4
  c->lr=0x801B65ECu; f_801ACB50(c); // 801B65E8
L_801B65EC:;
  c->r[31]=0u+0x803D0000u; // 801B65EC
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B65F0
  c->r[0]=R8(c->r[31]+0x00000650u); // 801B65F4
  cmps(c,0,(int32_t)c->r[0],0); // 801B65F8
  if (crb(c,2)) { goto L_801B6628; } // 801B65FC
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B6600
  cmpu(c,0,c->r[0],0x00000004u); // 801B6604
  if (crb(c,0)) { goto L_801B6620; } // 801B6608
  c->r[3]=0u+0x000D0000u; // 801B660C
  c->r[4]=0u+0x80330000u; // 801B6610
  c->r[3]=c->r[3]+0x00000003u; // 801B6614
  c->r[4]=c->r[4]+0x00002864u; // 801B6618
  c->lr=0x801B6620u; f_801ACB20(c); // 801B661C
L_801B6620:;
  c->r[3]=0u+0x00000002u; // 801B6620
  goto L_801B667C; // 801B6624
L_801B6628:;
  c->r[0]=c->r[28]+0x0000000Bu; // 801B6628
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801B662C
  c->lr=0x801B6634u; f_801A9FA0(c); // 801B6630
  cmps(c,0,(int32_t)c->r[3],0); // 801B6634
  if (crb(c,2)) { goto L_801B6678; } // 801B6638
  cmps(c,0,(int32_t)c->r[30],0); // 801B663C
  W32(c->r[31]+0x0000061Cu,c->r[30]); // 801B6640
  if (crb(c,2)) { goto L_801B6650; } // 801B6644
  c->r[0]=0u+0x00000001u; // 801B6648
  W8(c->r[31]+0x00000650u,c->r[0]); // 801B664C
L_801B6650:;
  c->r[4]=c->r[27]|c->r[27]; // 801B6650
  c->r[5]=c->r[28]|c->r[28]; // 801B6654
  c->r[6]=c->r[29]|c->r[29]; // 801B6658
  c->lr=0x801B6660u; f_801C2020(c); // 801B665C
  cmps(c,0,(int32_t)c->r[30],0); // 801B6660
  if (crb(c,2)) { goto L_801B6670; } // 801B6664
  c->r[3]=0u+0x00000001u; // 801B6668
  goto L_801B667C; // 801B666C
L_801B6670:;
  c->r[3]=0u+0x00000000u; // 801B6670
  goto L_801B667C; // 801B6674
L_801B6678:;
  c->r[3]=0u+0x00000003u; // 801B6678
L_801B667C:;
  c->r[11]=c->r[1]+0x00000020u; // 801B667C
  c->lr=0x801B6684u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B6680
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B6684
  c->lr=c->r[0]; // 801B6688
  c->r[1]=c->r[1]+0x00000020u; // 801B668C
  return; // 801B6690
}

// btm_vsc_complete
void f_801B6694(Ctx* __restrict c) {
  trace_call(0x801B6694u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6694
  c->r[0]=c->lr; // 801B6698
  c->r[6]=0u+0x803D0000u; // 801B669C
  c->r[7]=c->r[3]|c->r[3]; // 801B66A0
  W32(c->r[1]+0x00000124u,c->r[0]); // 801B66A4
  c->r[6]=c->r[6]+0xFFFF8118u; // 801B66A8
  c->r[0]=0u+0x00000000u; // 801B66AC
  c->r[3]=c->r[1]+0x0000000Cu; // 801B66B0
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801B66B4
  c->r[31]=R32(c->r[6]+0x0000061Cu); // 801B66B8
  W8(c->r[6]+0x00000650u,c->r[0]); // 801B66BC
  cmps(c,0,(int32_t)c->r[31],0); // 801B66C0
  W32(c->r[6]+0x0000061Cu,c->r[0]); // 801B66C4
  if (crb(c,2)) { goto L_801B66EC; } // 801B66C8
  W16(c->r[1]+0x00000008u,c->r[4]); // 801B66CC
  c->r[4]=c->r[7]|c->r[7]; // 801B66D0
  W16(c->r[1]+0x0000000Au,c->r[5]); // 801B66D4
  c->lr=0x801B66DCu; f_80004338(c); // 801B66D8
  c->r[12]=c->r[31]|c->r[31]; // 801B66DC
  c->r[3]=c->r[1]+0x00000008u; // 801B66E0
  c->ctr=c->r[12]; // 801B66E4
  if (true) { c->lr=0x801B66ECu; dispatch(c,c->ctr); } // 801B66E8
L_801B66EC:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 801B66EC
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801B66F0
  c->lr=c->r[0]; // 801B66F4
  c->r[1]=c->r[1]+0x00000120u; // 801B66F8
  return; // 801B66FC
}

// BTM_RegisterForVSEvents
void f_801B6700(Ctx* __restrict c) {
  trace_call(0x801B6700u);
  c->r[4]=0u+0x803D0000u; // 801B6700
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B6704
  c->r[0]=R32(c->r[4]+0x0000056Cu); // 801B6708
  cmps(c,0,(int32_t)c->r[0],0); // 801B670C
  if (crb(c,2)) { goto L_801B6724; } // 801B6710
  cmps(c,0,(int32_t)c->r[3],0); // 801B6714
  if (crb(c,2)) { goto L_801B6724; } // 801B6718
  c->r[3]=0u+0x00000002u; // 801B671C
  return; // 801B6720
L_801B6724:;
  c->r[4]=0u+0x803D0000u; // 801B6724
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B6728
  W32(c->r[4]+0x0000056Cu,c->r[3]); // 801B672C
  c->r[3]=0u+0x00000000u; // 801B6730
  return; // 801B6734
}

// btm_vendor_specific_evt
void f_801B6738(Ctx* __restrict c) {
  trace_call(0x801B6738u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6738
  c->r[0]=c->lr; // 801B673C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B6740
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B6744
  c->r[31]=0u+0x803D0000u; // 801B6748
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B674C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B6750
  c->r[30]=c->r[4]|c->r[4]; // 801B6754
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B6758
  c->r[29]=c->r[3]|c->r[3]; // 801B675C
  c->r[0]=R16(c->r[31]+0x0000063Cu); // 801B6760
  cmpu(c,0,c->r[0],0x00000012u); // 801B6764
  if (crb(c,2)) { goto L_801B678C; } // 801B6768
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B676C
  cmpu(c,0,c->r[0],0x00000004u); // 801B6770
  if (crb(c,0)) { goto L_801B678C; } // 801B6774
  c->r[3]=0u+0x000D0000u; // 801B6778
  c->r[4]=0u+0x80330000u; // 801B677C
  c->r[3]=c->r[3]+0x00000003u; // 801B6780
  c->r[4]=c->r[4]+0x000028A8u; // 801B6784
  c->lr=0x801B678Cu; f_801ACB20(c); // 801B6788
L_801B678C:;
  c->r[12]=R32(c->r[31]+0x0000056Cu); // 801B678C
  c->r[0]=0u+0x00000000u; // 801B6790
  W32(c->r[31]+0x0000061Cu,c->r[0]); // 801B6794
  cmps(c,0,(int32_t)c->r[12],0); // 801B6798
  W8(c->r[31]+0x00000650u,c->r[0]); // 801B679C
  if (crb(c,2)) { goto L_801B67B4; } // 801B67A0
  c->r[3]=c->r[30]|c->r[30]; // 801B67A4
  c->r[4]=c->r[29]|c->r[29]; // 801B67A8
  c->ctr=c->r[12]; // 801B67AC
  if (true) { c->lr=0x801B67B4u; dispatch(c,c->ctr); } // 801B67B0
L_801B67B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B67B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B67B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B67BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B67C0
  c->lr=c->r[0]; // 801B67C4
  c->r[1]=c->r[1]+0x00000020u; // 801B67C8
  return; // 801B67CC
}

// BTM_WritePageTimeout
void f_801B67D0(Ctx* __restrict c) {
  trace_call(0x801B67D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B67D0
  c->r[0]=c->lr; // 801B67D4
  c->r[4]=0u+0x803D0000u; // 801B67D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B67DC
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B67E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B67E4
  c->r[31]=c->r[3]|c->r[3]; // 801B67E8
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B67EC
  cmpu(c,0,c->r[0],0x00000004u); // 801B67F0
  if (crb(c,0)) { goto L_801B6810; } // 801B67F4
  c->r[3]=0u+0x000D0000u; // 801B67F8
  c->r[4]=0u+0x80330000u; // 801B67FC
  c->r[5]=c->r[31]|c->r[31]; // 801B6800
  c->r[3]=c->r[3]+0x00000003u; // 801B6804
  c->r[4]=c->r[4]+0x000028E8u; // 801B6808
  c->lr=0x801B6810u; f_801ACB38(c); // 801B680C
L_801B6810:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)625); // 801B6810
  c->r[3]=0u+0x10620000u; // 801B6814
  c->r[4]=0u+0x803D0000u; // 801B6818
  c->r[3]=c->r[3]+0x00004DD3u; // 801B681C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801B6820
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B6824
  c->r[3]=0u+0x00000002u; // 801B6828
  c->r[0]=sraw(c,c->r[0],6); // 801B682C
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801B6830
  c->r[0]=c->r[0]+c->r[5]; // 801B6834
  W16(c->r[4]+0x0000064Cu,c->r[0]); // 801B6838
  c->lr=0x801B6840u; f_801AA140(c); // 801B683C
  cmps(c,0,(int32_t)c->r[3],0); // 801B6840
  if (crb(c,2)) { goto L_801B6858; } // 801B6844
  c->r[4]=c->r[31]|c->r[31]; // 801B6848
  c->lr=0x801B6850u; f_801C1518(c); // 801B684C
  c->r[3]=0u+0x00000000u; // 801B6850
  goto L_801B685C; // 801B6854
L_801B6858:;
  c->r[3]=0u+0x00000003u; // 801B6858
L_801B685C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B685C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6860
  c->lr=c->r[0]; // 801B6864
  c->r[1]=c->r[1]+0x00000010u; // 801B6868
  return; // 801B686C
}

// BTM_ReadStoredLinkKey
void f_801B6870(Ctx* __restrict c) {
  trace_call(0x801B6870u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6870
  c->r[0]=c->lr; // 801B6874
  c->r[5]=0u+0x803D0000u; // 801B6878
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B687C
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B6880
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B6884
  c->r[31]=0u+0x00000000u; // 801B6888
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B688C
  c->r[30]=c->r[4]|c->r[4]; // 801B6890
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B6894
  c->r[29]=c->r[3]|c->r[3]; // 801B6898
  c->r[0]=R32(c->r[5]+0x00000570u); // 801B689C
  cmps(c,0,(int32_t)c->r[0],0); // 801B68A0
  if (crb(c,2)) { goto L_801B68B0; } // 801B68A4
  c->r[3]=0u+0x00000002u; // 801B68A8
  goto L_801B692C; // 801B68AC
L_801B68B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B68B0
  if (!crb(c,2)) { goto L_801B68C0; } // 801B68B4
  c->r[31]=0u+0x00000001u; // 801B68B8
  c->r[29]=c->r[1]+0x00000008u; // 801B68BC
L_801B68C0:;
  c->r[3]=0u+0x803D0000u; // 801B68C0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B68C4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B68C8
  cmpu(c,0,c->r[0],0x00000004u); // 801B68CC
  if (crb(c,0)) { goto L_801B68F8; } // 801B68D0
  cmps(c,0,(int32_t)c->r[31],0); // 801B68D4
  c->r[3]=0u+0x000D0000u; // 801B68D8
  c->r[4]=0u+0x80330000u; // 801B68DC
  c->r[5]=c->r[13]+0xFFFF9494u; // 801B68E0
  c->r[3]=c->r[3]+0x00000003u; // 801B68E4
  c->r[4]=c->r[4]+0x00002958u; // 801B68E8
  if (crb(c,2)) { goto L_801B68F4; } // 801B68EC
  c->r[5]=c->r[13]+0xFFFF948Cu; // 801B68F0
L_801B68F4:;
  c->lr=0x801B68F8u; f_801ACB38(c); // 801B68F4
L_801B68F8:;
  c->r[3]=0u+0x00000002u; // 801B68F8
  c->lr=0x801B6900u; f_801AA140(c); // 801B68FC
  cmps(c,0,(int32_t)c->r[3],0); // 801B6900
  if (crb(c,2)) { goto L_801B6928; } // 801B6904
  c->r[6]=0u+0x803D0000u; // 801B6908
  c->r[4]=c->r[29]|c->r[29]; // 801B690C
  c->r[6]=c->r[6]+0xFFFF8118u; // 801B6910
  c->r[5]=c->r[31]|c->r[31]; // 801B6914
  W32(c->r[6]+0x00000570u,c->r[30]); // 801B6918
  c->lr=0x801B6920u; f_801C1108(c); // 801B691C
  c->r[3]=0u+0x00000000u; // 801B6920
  goto L_801B692C; // 801B6924
L_801B6928:;
  c->r[3]=0u+0x00000003u; // 801B6928
L_801B692C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B692C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B6930
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B6934
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B6938
  c->lr=c->r[0]; // 801B693C
  c->r[1]=c->r[1]+0x00000020u; // 801B6940
  return; // 801B6944
}

// BTM_WriteStoredLinkKey
void f_801B6948(Ctx* __restrict c) {
  trace_call(0x801B6948u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6948
  c->r[0]=c->lr; // 801B694C
  c->r[7]=0u+0x803D0000u; // 801B6950
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B6954
  c->r[7]=c->r[7]+0xFFFF8118u; // 801B6958
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B695C
  c->r[31]=c->r[6]|c->r[6]; // 801B6960
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B6964
  c->r[30]=c->r[5]|c->r[5]; // 801B6968
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B696C
  c->r[29]=c->r[4]|c->r[4]; // 801B6970
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B6974
  c->r[28]=c->r[3]|c->r[3]; // 801B6978
  c->r[0]=R32(c->r[7]+0x00000570u); // 801B697C
  cmps(c,0,(int32_t)c->r[0],0); // 801B6980
  if (crb(c,2)) { goto L_801B6990; } // 801B6984
  c->r[3]=0u+0x00000002u; // 801B6988
  goto L_801B69F8; // 801B698C
L_801B6990:;
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801B6990
  cmpu(c,0,c->r[0],0x00000004u); // 801B6994
  if (crb(c,0)) { goto L_801B69B4; } // 801B6998
  c->r[3]=0u+0x000D0000u; // 801B699C
  c->r[4]=0u+0x80330000u; // 801B69A0
  c->r[5]=c->r[28]|c->r[28]; // 801B69A4
  c->r[3]=c->r[3]+0x00000003u; // 801B69A8
  c->r[4]=c->r[4]+0x00002984u; // 801B69AC
  c->lr=0x801B69B4u; f_801ACB38(c); // 801B69B0
L_801B69B4:;
  cmpu(c,0,c->r[28],0x0000000Bu); // 801B69B4
  if (!crb(c,1)) { goto L_801B69C0; } // 801B69B8
  c->r[28]=0u+0x0000000Bu; // 801B69BC
L_801B69C0:;
  c->r[3]=0u+0x00000002u; // 801B69C0
  c->lr=0x801B69C8u; f_801AA140(c); // 801B69C4
  cmps(c,0,(int32_t)c->r[3],0); // 801B69C8
  if (crb(c,2)) { goto L_801B69F4; } // 801B69CC
  c->r[6]=0u+0x803D0000u; // 801B69D0
  c->r[4]=c->r[28]|c->r[28]; // 801B69D4
  c->r[6]=c->r[6]+0xFFFF8118u; // 801B69D8
  c->r[5]=c->r[29]|c->r[29]; // 801B69DC
  W32(c->r[6]+0x00000570u,c->r[31]); // 801B69E0
  c->r[6]=c->r[30]|c->r[30]; // 801B69E4
  c->lr=0x801B69ECu; f_801C1168(c); // 801B69E8
  c->r[3]=0u+0x00000000u; // 801B69EC
  goto L_801B69F8; // 801B69F0
L_801B69F4:;
  c->r[3]=0u+0x00000003u; // 801B69F4
L_801B69F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B69F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B69FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B6A00
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B6A04
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B6A08
  c->lr=c->r[0]; // 801B6A0C
  c->r[1]=c->r[1]+0x00000020u; // 801B6A10
  return; // 801B6A14
}

// BTM_DeleteStoredLinkKey
void f_801B6A18(Ctx* __restrict c) {
  trace_call(0x801B6A18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6A18
  c->r[0]=c->lr; // 801B6A1C
  c->r[5]=0u+0x803D0000u; // 801B6A20
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B6A24
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B6A28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B6A2C
  c->r[31]=0u+0x00000000u; // 801B6A30
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B6A34
  c->r[30]=c->r[4]|c->r[4]; // 801B6A38
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B6A3C
  c->r[29]=c->r[3]|c->r[3]; // 801B6A40
  c->r[0]=R32(c->r[5]+0x00000570u); // 801B6A44
  cmps(c,0,(int32_t)c->r[0],0); // 801B6A48
  if (crb(c,2)) { goto L_801B6A58; } // 801B6A4C
  c->r[3]=0u+0x00000002u; // 801B6A50
  goto L_801B6ACC; // 801B6A54
L_801B6A58:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B6A58
  if (!crb(c,2)) { goto L_801B6A68; } // 801B6A5C
  c->r[31]=0u+0x00000001u; // 801B6A60
  c->r[29]=c->r[1]+0x00000008u; // 801B6A64
L_801B6A68:;
  c->r[3]=0u+0x803D0000u; // 801B6A68
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B6A6C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B6A70
  cmpu(c,0,c->r[0],0x00000004u); // 801B6A74
  if (crb(c,0)) { goto L_801B6AA0; } // 801B6A78
  cmps(c,0,(int32_t)c->r[31],0); // 801B6A7C
  c->r[3]=0u+0x000D0000u; // 801B6A80
  c->r[4]=0u+0x80330000u; // 801B6A84
  c->r[5]=c->r[13]+0xFFFF9494u; // 801B6A88
  c->r[3]=c->r[3]+0x00000003u; // 801B6A8C
  c->r[4]=c->r[4]+0x000029B0u; // 801B6A90
  if (crb(c,2)) { goto L_801B6A9C; } // 801B6A94
  c->r[5]=c->r[13]+0xFFFF948Cu; // 801B6A98
L_801B6A9C:;
  c->lr=0x801B6AA0u; f_801ACB38(c); // 801B6A9C
L_801B6AA0:;
  c->r[5]=0u+0x803D0000u; // 801B6AA0
  c->r[3]=c->r[29]|c->r[29]; // 801B6AA4
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B6AA8
  c->r[4]=c->r[31]|c->r[31]; // 801B6AAC
  W32(c->r[5]+0x00000570u,c->r[30]); // 801B6AB0
  c->lr=0x801B6AB8u; f_801C1328(c); // 801B6AB4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B6AB8
  if (!crb(c,2)) { goto L_801B6AC8; } // 801B6ABC
  c->r[3]=0u+0x00000003u; // 801B6AC0
  goto L_801B6ACC; // 801B6AC4
L_801B6AC8:;
  c->r[3]=0u+0x00000000u; // 801B6AC8
L_801B6ACC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B6ACC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B6AD0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B6AD4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B6AD8
  c->lr=c->r[0]; // 801B6ADC
  c->r[1]=c->r[1]+0x00000020u; // 801B6AE0
  return; // 801B6AE4
}

// btm_read_stored_link_key_complete
void f_801B6AE8(Ctx* __restrict c) {
  trace_call(0x801B6AE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6AE8
  c->r[0]=c->lr; // 801B6AEC
  c->r[4]=0u+0x803D0000u; // 801B6AF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6AF4
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B6AF8
  c->r[0]=0u+0x00000000u; // 801B6AFC
  c->r[12]=R32(c->r[4]+0x00000570u); // 801B6B00
  cmps(c,0,(int32_t)c->r[12],0); // 801B6B04
  W32(c->r[4]+0x00000570u,c->r[0]); // 801B6B08
  if (crb(c,2)) { goto L_801B6B54; } // 801B6B0C
  c->r[0]=0u+0x00000002u; // 801B6B10
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B6B14
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B6B18
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B6B1C
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B6B20
  c->r[4]=R8(c->r[3]+0x00000001u); // 801B6B24
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B6B28
  c->r[0]=c->r[4]+c->r[0]; // 801B6B2C
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801B6B30
  c->r[0]=R8(c->r[3]+0x00000004u); // 801B6B34
  c->r[4]=R8(c->r[3]+0x00000003u); // 801B6B38
  c->r[3]=c->r[1]+0x00000008u; // 801B6B3C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B6B40
  c->r[0]=c->r[4]+c->r[0]; // 801B6B44
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801B6B48
  c->ctr=c->r[12]; // 801B6B4C
  if (true) { c->lr=0x801B6B54u; dispatch(c,c->ctr); } // 801B6B50
L_801B6B54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6B54
  c->lr=c->r[0]; // 801B6B58
  c->r[1]=c->r[1]+0x00000010u; // 801B6B5C
  return; // 801B6B60
}

// btm_write_stored_link_key_complete
void f_801B6B64(Ctx* __restrict c) {
  trace_call(0x801B6B64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6B64
  c->r[0]=c->lr; // 801B6B68
  c->r[4]=0u+0x803D0000u; // 801B6B6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6B70
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B6B74
  c->r[0]=0u+0x00000000u; // 801B6B78
  c->r[12]=R32(c->r[4]+0x00000570u); // 801B6B7C
  cmps(c,0,(int32_t)c->r[12],0); // 801B6B80
  W32(c->r[4]+0x00000570u,c->r[0]); // 801B6B84
  if (crb(c,2)) { goto L_801B6BB0; } // 801B6B88
  c->r[0]=0u+0x00000003u; // 801B6B8C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B6B90
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B6B94
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B6B98
  c->r[0]=R8(c->r[3]+0x00000001u); // 801B6B9C
  c->r[3]=c->r[1]+0x00000008u; // 801B6BA0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801B6BA4
  c->ctr=c->r[12]; // 801B6BA8
  if (true) { c->lr=0x801B6BB0u; dispatch(c,c->ctr); } // 801B6BAC
L_801B6BB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6BB0
  c->lr=c->r[0]; // 801B6BB4
  c->r[1]=c->r[1]+0x00000010u; // 801B6BB8
  return; // 801B6BBC
}

// btm_delete_stored_link_key_complete
void f_801B6BC0(Ctx* __restrict c) {
  trace_call(0x801B6BC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6BC0
  c->r[0]=c->lr; // 801B6BC4
  c->r[4]=0u+0x803D0000u; // 801B6BC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6BCC
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B6BD0
  c->r[0]=0u+0x00000000u; // 801B6BD4
  c->r[12]=R32(c->r[4]+0x00000570u); // 801B6BD8
  cmps(c,0,(int32_t)c->r[12],0); // 801B6BDC
  W32(c->r[4]+0x00000570u,c->r[0]); // 801B6BE0
  if (crb(c,2)) { goto L_801B6C18; } // 801B6BE4
  c->r[0]=0u+0x00000004u; // 801B6BE8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B6BEC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B6BF0
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B6BF4
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B6BF8
  c->r[4]=R8(c->r[3]+0x00000001u); // 801B6BFC
  c->r[3]=c->r[1]+0x00000008u; // 801B6C00
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B6C04
  c->r[0]=c->r[4]+c->r[0]; // 801B6C08
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801B6C0C
  c->ctr=c->r[12]; // 801B6C10
  if (true) { c->lr=0x801B6C18u; dispatch(c,c->ctr); } // 801B6C14
L_801B6C18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6C18
  c->lr=c->r[0]; // 801B6C1C
  c->r[1]=c->r[1]+0x00000010u; // 801B6C20
  return; // 801B6C24
}

// btm_return_link_keys_evt
void f_801B6C28(Ctx* __restrict c) {
  trace_call(0x801B6C28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6C28
  c->r[0]=c->lr; // 801B6C2C
  c->r[4]=0u+0x803D0000u; // 801B6C30
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B6C34
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B6C38
  c->r[12]=R32(c->r[4]+0x00000570u); // 801B6C3C
  cmps(c,0,(int32_t)c->r[12],0); // 801B6C40
  if (crb(c,2)) { goto L_801B6DA4; } // 801B6C44
  c->r[5]=c->r[3]+0x00000002u; // 801B6C48
  c->r[4]=0u+0x00000000u; // 801B6C4C
  goto L_801B6D8C; // 801B6C50
L_801B6C54:;
  c->r[11]=R8(c->r[5]+0x00000000u); // 801B6C54
  c->r[4]=c->r[4]+0x00000001u; // 801B6C58
  c->r[10]=R8(c->r[5]+0x00000001u); // 801B6C5C
  c->r[9]=R8(c->r[5]+0x00000002u); // 801B6C60
  c->r[8]=R8(c->r[5]+0x00000003u); // 801B6C64
  c->r[7]=R8(c->r[5]+0x00000004u); // 801B6C68
  c->r[6]=R8(c->r[5]+0x00000005u); // 801B6C6C
  c->r[0]=R8(c->r[5]+0x00000006u); // 801B6C70
  W8(c->r[1]+0x00000017u,c->r[0]); // 801B6C74
  c->r[0]=R8(c->r[5]+0x00000007u); // 801B6C78
  W8(c->r[1]+0x00000016u,c->r[0]); // 801B6C7C
  c->r[0]=R8(c->r[5]+0x00000008u); // 801B6C80
  W8(c->r[1]+0x00000015u,c->r[0]); // 801B6C84
  c->r[0]=R8(c->r[5]+0x00000009u); // 801B6C88
  W8(c->r[1]+0x00000014u,c->r[0]); // 801B6C8C
  c->r[0]=R8(c->r[5]+0x0000000Au); // 801B6C90
  W8(c->r[1]+0x00000013u,c->r[0]); // 801B6C94
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 801B6C98
  W8(c->r[1]+0x00000012u,c->r[0]); // 801B6C9C
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 801B6CA0
  W8(c->r[1]+0x00000011u,c->r[0]); // 801B6CA4
  c->r[0]=R8(c->r[5]+0x0000000Du); // 801B6CA8
  W8(c->r[1]+0x00000010u,c->r[0]); // 801B6CAC
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 801B6CB0
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801B6CB4
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 801B6CB8
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801B6CBC
  c->r[0]=R8(c->r[5]+0x00000010u); // 801B6CC0
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801B6CC4
  c->r[0]=R8(c->r[5]+0x00000011u); // 801B6CC8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801B6CCC
  c->r[0]=R8(c->r[5]+0x00000012u); // 801B6CD0
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801B6CD4
  c->r[0]=R8(c->r[5]+0x00000013u); // 801B6CD8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801B6CDC
  c->r[0]=R8(c->r[5]+0x00000014u); // 801B6CE0
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B6CE4
  c->r[0]=R8(c->r[5]+0x00000015u); // 801B6CE8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B6CEC
  W8(c->r[5]+0x00000000u,c->r[6]); // 801B6CF0
  W8(c->r[5]+0x00000001u,c->r[7]); // 801B6CF4
  W8(c->r[5]+0x00000002u,c->r[8]); // 801B6CF8
  W8(c->r[5]+0x00000003u,c->r[9]); // 801B6CFC
  W8(c->r[5]+0x00000004u,c->r[10]); // 801B6D00
  W8(c->r[5]+0x00000005u,c->r[11]); // 801B6D04
  c->r[0]=R8(c->r[1]+0x00000008u); // 801B6D08
  W8(c->r[5]+0x00000006u,c->r[0]); // 801B6D0C
  c->r[0]=R8(c->r[1]+0x00000009u); // 801B6D10
  W8(c->r[5]+0x00000007u,c->r[0]); // 801B6D14
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801B6D18
  W8(c->r[5]+0x00000008u,c->r[0]); // 801B6D1C
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 801B6D20
  W8(c->r[5]+0x00000009u,c->r[0]); // 801B6D24
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801B6D28
  W8(c->r[5]+0x0000000Au,c->r[0]); // 801B6D2C
  c->r[0]=R8(c->r[1]+0x0000000Du); // 801B6D30
  W8(c->r[5]+0x0000000Bu,c->r[0]); // 801B6D34
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 801B6D38
  W8(c->r[5]+0x0000000Cu,c->r[0]); // 801B6D3C
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 801B6D40
  W8(c->r[5]+0x0000000Du,c->r[0]); // 801B6D44
  c->r[0]=R8(c->r[1]+0x00000010u); // 801B6D48
  W8(c->r[5]+0x0000000Eu,c->r[0]); // 801B6D4C
  c->r[0]=R8(c->r[1]+0x00000011u); // 801B6D50
  W8(c->r[5]+0x0000000Fu,c->r[0]); // 801B6D54
  c->r[0]=R8(c->r[1]+0x00000012u); // 801B6D58
  W8(c->r[5]+0x00000010u,c->r[0]); // 801B6D5C
  c->r[0]=R8(c->r[1]+0x00000013u); // 801B6D60
  W8(c->r[5]+0x00000011u,c->r[0]); // 801B6D64
  c->r[0]=R8(c->r[1]+0x00000014u); // 801B6D68
  W8(c->r[5]+0x00000012u,c->r[0]); // 801B6D6C
  c->r[0]=R8(c->r[1]+0x00000015u); // 801B6D70
  W8(c->r[5]+0x00000013u,c->r[0]); // 801B6D74
  c->r[0]=R8(c->r[1]+0x00000016u); // 801B6D78
  W8(c->r[5]+0x00000014u,c->r[0]); // 801B6D7C
  c->r[0]=R8(c->r[1]+0x00000017u); // 801B6D80
  W8(c->r[5]+0x00000015u,c->r[0]); // 801B6D84
  c->r[5]=c->r[5]+0x00000016u; // 801B6D88
L_801B6D8C:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 801B6D8C
  c->r[6]=rotl(c->r[4],0)&0x000000FFu; // 801B6D90
  cmpu(c,0,c->r[6],c->r[0]); // 801B6D94
  if (crb(c,0)) { IRQCHK(c); goto L_801B6C54; } // 801B6D98
  c->ctr=c->r[12]; // 801B6D9C
  if (true) { c->lr=0x801B6DA4u; dispatch(c,c->ctr); } // 801B6DA0
L_801B6DA4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B6DA4
  c->lr=c->r[0]; // 801B6DA8
  c->r[1]=c->r[1]+0x00000020u; // 801B6DAC
  return; // 801B6DB0
}

// btm_report_device_status
void f_801B6DB4(Ctx* __restrict c) {
  trace_call(0x801B6DB4u);
  c->r[4]=0u+0x803D0000u; // 801B6DB4
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B6DB8
  c->r[12]=R32(c->r[4]+0x00000568u); // 801B6DBC
  cmps(c,0,(int32_t)c->r[12],0); // 801B6DC0
  if (crb(c,2)) return; // 801B6DC4
  c->ctr=c->r[12]; // 801B6DC8
  if (true) { dispatch(c,c->ctr); return; } // 801B6DCC
  return; // 801B6DD0
}

// btm_discovery_db_init
void f_801B6DD4(Ctx* __restrict c) {
  trace_call(0x801B6DD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6DD4
  c->r[0]=c->lr; // 801B6DD8
  c->r[4]=0u+0x00000000u; // 801B6DDC
  c->r[5]=0u+0x00001020u; // 801B6DE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6DE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6DE8
  c->r[31]=0u+0x803D0000u; // 801B6DEC
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B6DF0
  c->r[0]=c->r[31]+0x000006D4u; // 801B6DF4
  W32(c->r[31]+0x00001678u,c->r[0]); // 801B6DF8
  c->r[3]=c->r[31]+0x00000658u; // 801B6DFC
  c->lr=0x801B6E04u; f_80004688(c); // 801B6E00
  c->r[3]=0u+0x00000001u; // 801B6E04
  c->r[4]=0u+0x00000002u; // 801B6E08
  c->r[0]=0u+0x00001002u; // 801B6E0C
  W16(c->r[31]+0x00000670u,c->r[3]); // 801B6E10
  c->r[3]=R32(c->r[31]+0x00001678u); // 801B6E14
  c->r[6]=c->r[31]+0x00000674u; // 801B6E18
  W16(c->r[31]+0x00000674u,c->r[4]); // 801B6E1C
  c->r[4]=0u+0x00000FA0u; // 801B6E20
  c->r[5]=0u+0x00000001u; // 801B6E24
  c->r[7]=0u+0x00000000u; // 801B6E28
  W16(c->r[31]+0x00000678u,c->r[0]); // 801B6E2C
  c->r[8]=0u+0x00000000u; // 801B6E30
  c->lr=0x801B6E38u; f_801D19F8(c); // 801B6E34
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6E38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6E3C
  c->lr=c->r[0]; // 801B6E40
  c->r[1]=c->r[1]+0x00000010u; // 801B6E44
  return; // 801B6E48
}

// btm_discovery_db_reset
void f_801B6E4C(Ctx* __restrict c) {
  trace_call(0x801B6E4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6E4C
  c->r[0]=c->lr; // 801B6E50
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6E54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6E58
  c->r[31]=0u+0x803D0000u; // 801B6E5C
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B6E60
  c->r[3]=c->r[31]+0x00000658u; // 801B6E64
  c->lr=0x801B6E6Cu; f_801AD15C(c); // 801B6E68
  c->r[0]=R8(c->r[31]+0x00001674u); // 801B6E6C
  cmps(c,0,(int32_t)c->r[0],0); // 801B6E70
  if (crb(c,2)) { goto L_801B6E9C; } // 801B6E74
  c->r[12]=R32(c->r[31]+0x000006D0u); // 801B6E78
  c->r[0]=0u+0x00000000u; // 801B6E7C
  W8(c->r[31]+0x00001674u,c->r[0]); // 801B6E80
  cmps(c,0,(int32_t)c->r[12],0); // 801B6E84
  W32(c->r[31]+0x000006D0u,c->r[0]); // 801B6E88
  if (crb(c,2)) { goto L_801B6E9C; } // 801B6E8C
  c->r[3]=0u+0x00000000u; // 801B6E90
  c->ctr=c->r[12]; // 801B6E94
  if (true) { c->lr=0x801B6E9Cu; dispatch(c,c->ctr); } // 801B6E98
L_801B6E9C:;
  c->r[31]=0u+0x803D0000u; // 801B6E9C
  c->r[4]=0u+0x00000000u; // 801B6EA0
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B6EA4
  c->r[5]=0u+0x00001020u; // 801B6EA8
  c->r[0]=c->r[31]+0x000006D4u; // 801B6EAC
  W32(c->r[31]+0x00001678u,c->r[0]); // 801B6EB0
  c->r[3]=c->r[31]+0x00000658u; // 801B6EB4
  c->lr=0x801B6EBCu; f_80004688(c); // 801B6EB8
  c->r[3]=0u+0x00000001u; // 801B6EBC
  c->r[4]=0u+0x00000002u; // 801B6EC0
  c->r[0]=0u+0x00001002u; // 801B6EC4
  W16(c->r[31]+0x00000670u,c->r[3]); // 801B6EC8
  c->r[3]=R32(c->r[31]+0x00001678u); // 801B6ECC
  c->r[6]=c->r[31]+0x00000674u; // 801B6ED0
  W16(c->r[31]+0x00000674u,c->r[4]); // 801B6ED4
  c->r[4]=0u+0x00000FA0u; // 801B6ED8
  c->r[5]=0u+0x00000001u; // 801B6EDC
  c->r[7]=0u+0x00000000u; // 801B6EE0
  W16(c->r[31]+0x00000678u,c->r[0]); // 801B6EE4
  c->r[8]=0u+0x00000000u; // 801B6EE8
  c->lr=0x801B6EF0u; f_801D19F8(c); // 801B6EEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6EF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6EF4
  c->lr=c->r[0]; // 801B6EF8
  c->r[1]=c->r[1]+0x00000010u; // 801B6EFC
  return; // 801B6F00
}

// fn_801B6F04
void f_801B6F04(Ctx* __restrict c) {
  return; // 801B6F04
}

// BTM_SetDiscoverability
void f_801B6F08(Ctx* __restrict c) {
  trace_call(0x801B6F08u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6F08
  c->r[0]=c->lr; // 801B6F0C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B6F10
  c->r[11]=c->r[1]+0x00000030u; // 801B6F14
  c->lr=0x801B6F1Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B6F18
  cmps(c,0,(int32_t)c->r[3],0); // 801B6F1C
  c->r[31]=c->r[3]|c->r[3]; // 801B6F20
  c->r[27]=c->r[4]|c->r[4]; // 801B6F24
  c->r[28]=c->r[5]|c->r[5]; // 801B6F28
  c->r[30]=0u+0x00000000u; // 801B6F2C
  if (crb(c,2)) { goto L_801B6F4C; } // 801B6F30
  cmpu(c,0,c->r[3],0x00000001u); // 801B6F34
  if (crb(c,2)) { goto L_801B6F4C; } // 801B6F38
  cmpu(c,0,c->r[3],0x00000002u); // 801B6F3C
  if (crb(c,2)) { goto L_801B6F4C; } // 801B6F40
  c->r[3]=0u+0x00000005u; // 801B6F44
  goto L_801B7174; // 801B6F48
L_801B6F4C:;
  c->r[3]=0u+0x803D0000u; // 801B6F4C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B6F50
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801B6F54
  cmpu(c,0,c->r[0],0x00000003u); // 801B6F58
  if (!crb(c,0)) { goto L_801B6F68; } // 801B6F5C
  c->r[3]=0u+0x0000000Cu; // 801B6F60
  goto L_801B7174; // 801B6F64
L_801B6F68:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B6F68
  if (!crb(c,2)) { goto L_801B6F74; } // 801B6F6C
  c->r[27]=0u+0x00000012u; // 801B6F70
L_801B6F74:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B6F74
  if (!crb(c,2)) { goto L_801B6F80; } // 801B6F78
  c->r[28]=0u+0x00000800u; // 801B6F7C
L_801B6F80:;
  c->r[3]=0u+0x803D0000u; // 801B6F80
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B6F84
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B6F88
  cmpu(c,0,c->r[0],0x00000003u); // 801B6F8C
  if (crb(c,0)) { goto L_801B6FB4; } // 801B6F90
  c->r[3]=0u+0x000D0000u; // 801B6F94
  c->r[4]=0u+0x80330000u; // 801B6F98
  c->r[5]=c->r[31]|c->r[31]; // 801B6F9C
  c->r[6]=c->r[27]|c->r[27]; // 801B6FA0
  c->r[7]=c->r[28]|c->r[28]; // 801B6FA4
  c->r[3]=c->r[3]+0x00000002u; // 801B6FA8
  c->r[4]=c->r[4]+0x000029E8u; // 801B6FAC
  c->lr=0x801B6FB4u; f_801ACB68(c); // 801B6FB0
L_801B6FB4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B6FB4
  if (crb(c,2)) { goto L_801B6FEC; } // 801B6FB8
  cmpu(c,0,c->r[27],0x00000012u); // 801B6FBC
  if (crb(c,0)) { goto L_801B6FE4; } // 801B6FC0
  cmpu(c,0,c->r[27],0x00001000u); // 801B6FC4
  if (crb(c,1)) { goto L_801B6FE4; } // 801B6FC8
  cmpu(c,0,c->r[28],0x00000012u); // 801B6FCC
  if (crb(c,0)) { goto L_801B6FE4; } // 801B6FD0
  cmpu(c,0,c->r[28],0x00001000u); // 801B6FD4
  if (crb(c,1)) { goto L_801B6FE4; } // 801B6FD8
  cmpu(c,0,c->r[27],c->r[28]); // 801B6FDC
  if (!crb(c,1)) { goto L_801B6FEC; } // 801B6FE0
L_801B6FE4:;
  c->r[3]=0u+0x00000005u; // 801B6FE4
  goto L_801B7174; // 801B6FE8
L_801B6FEC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B6FEC
  if (crb(c,2)) { goto L_801B7060; } // 801B6FF0
  c->r[3]=0u+0x00000002u; // 801B6FF4
  c->lr=0x801B6FFCu; f_801AA140(c); // 801B6FF8
  cmps(c,0,(int32_t)c->r[3],0); // 801B6FFC
  c->r[29]=c->r[3]|c->r[3]; // 801B7000
  if (crb(c,2)) { goto L_801B7058; } // 801B7004
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801B7008
  if (crb(c,2)) { goto L_801B7044; } // 801B700C
  c->r[3]=c->r[1]+0x0000000Cu; // 801B7010
  c->r[4]=c->r[2]+0xFFFF950Cu; // 801B7014
  c->r[5]=0u+0x00000003u; // 801B7018
  c->lr=0x801B7020u; f_80004338(c); // 801B701C
  c->r[3]=c->r[1]+0x0000000Fu; // 801B7020
  c->r[4]=c->r[2]+0xFFFF9508u; // 801B7024
  c->r[5]=0u+0x00000003u; // 801B7028
  c->lr=0x801B7030u; f_80004338(c); // 801B702C
  c->r[3]=c->r[29]|c->r[29]; // 801B7030
  c->r[5]=c->r[1]+0x0000000Cu; // 801B7034
  c->r[4]=0u+0x00000002u; // 801B7038
  c->lr=0x801B7040u; f_801C18C8(c); // 801B703C
  goto L_801B7050; // 801B7040
L_801B7044:;
  c->r[4]=0u+0x00000001u; // 801B7044
  c->r[5]=c->r[2]+0xFFFF9508u; // 801B7048
  c->lr=0x801B7050u; f_801C18C8(c); // 801B704C
L_801B7050:;
  c->r[30]=c->r[30]|0x00000001u; // 801B7050
  goto L_801B7060; // 801B7054
L_801B7058:;
  c->r[3]=0u+0x00000003u; // 801B7058
  goto L_801B7174; // 801B705C
L_801B7060:;
  c->r[3]=0u+0x803D0000u; // 801B7060
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B7064
  c->r[0]=R16(c->r[3]+0x000016A0u); // 801B7068
  cmpu(c,0,c->r[27],c->r[0]); // 801B706C
  if (!crb(c,2)) { goto L_801B7080; } // 801B7070
  c->r[0]=R16(c->r[3]+0x000016A2u); // 801B7074
  cmpu(c,0,c->r[28],c->r[0]); // 801B7078
  if (crb(c,2)) { goto L_801B70B8; } // 801B707C
L_801B7080:;
  c->r[3]=0u+0x00000002u; // 801B7080
  c->lr=0x801B7088u; f_801AA140(c); // 801B7084
  cmps(c,0,(int32_t)c->r[3],0); // 801B7088
  if (crb(c,2)) { goto L_801B70B0; } // 801B708C
  c->r[6]=0u+0x803D0000u; // 801B7090
  c->r[4]=c->r[28]|c->r[28]; // 801B7094
  c->r[6]=c->r[6]+0xFFFF8118u; // 801B7098
  c->r[5]=c->r[27]|c->r[27]; // 801B709C
  W16(c->r[6]+0x000016A0u,c->r[27]); // 801B70A0
  W16(c->r[6]+0x000016A2u,c->r[28]); // 801B70A4
  c->lr=0x801B70ACu; f_801C15C4(c); // 801B70A8
  goto L_801B70B8; // 801B70AC
L_801B70B0:;
  c->r[3]=0u+0x00000003u; // 801B70B0
  goto L_801B7174; // 801B70B4
L_801B70B8:;
  c->r[3]=0u+0x00000002u; // 801B70B8
  c->lr=0x801B70C0u; f_801AA140(c); // 801B70BC
  cmps(c,0,(int32_t)c->r[3],0); // 801B70C0
  if (crb(c,2)) { goto L_801B70FC; } // 801B70C4
  c->r[4]=0u+0x803D0000u; // 801B70C8
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B70CC
  c->r[0]=R16(c->r[4]+0x0000169Au); // 801B70D0
  cmps(c,0,(int32_t)c->r[0],0); // 801B70D4
  if (crb(c,2)) { goto L_801B70E4; } // 801B70D8
  c->r[0]=c->r[30]|0x00000002u; // 801B70DC
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 801B70E0
L_801B70E4:;
  c->r[5]=0u+0x803D0000u; // 801B70E4
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801B70E8
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B70EC
  W16(c->r[5]+0x00001698u,c->r[31]); // 801B70F0
  c->lr=0x801B70F8u; f_801C1550(c); // 801B70F4
  goto L_801B7104; // 801B70F8
L_801B70FC:;
  c->r[3]=0u+0x00000003u; // 801B70FC
  goto L_801B7174; // 801B7100
L_801B7104:;
  c->lr=0x801B7108u; f_801B6560(c); // 801B7104
  c->r[4]=R8(c->r[3]+0x00000000u); // 801B7108
  c->r[6]=rotl(c->r[31],0)&0x00000001u; // 801B710C
  c->r[5]=R8(c->r[3]+0x00000001u); // 801B7110
  c->r[4]=rotl(c->r[4],8)&0x0000FF00u; // 801B7114
  c->r[0]=rotl(c->r[5],0)&0x000000E0u; // 801B7118
  c->r[4]=c->r[4]+c->r[0]; // 801B711C
  c->r[0]=rotl(c->r[4],27)&0x00000001u; // 801B7120
  c->r[0]=c->r[6]^c->r[0]; cr0(c,c->r[0]); // 801B7124
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801B7128
  if (crb(c,2)) { goto L_801B7170; } // 801B712C
  c->r[3]=R8(c->r[3]+0x00000002u); // 801B7130
  cmps(c,0,(int32_t)c->r[6],0); // 801B7134
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFDFu; // 801B7138
  c->r[5]=rotl(c->r[5],0)&0x0000001Fu; // 801B713C
  c->r[6]=rotl(c->r[3],0)&0x000000FCu; // 801B7140
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801B7144
  if (crb(c,2)) { goto L_801B7150; } // 801B7148
  c->r[0]=c->r[4]|0x00000020u; // 801B714C
L_801B7150:;
  c->r[3]=rotl(c->r[0],0)&0x000000E0u; // 801B7150
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801B7154
  c->r[4]=c->r[5]+c->r[3]; // 801B7158
  W8(c->r[1]+0x0000000Au,c->r[6]); // 801B715C
  c->r[3]=c->r[1]+0x00000008u; // 801B7160
  W8(c->r[1]+0x00000009u,c->r[4]); // 801B7164
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B7168
  c->lr=0x801B7170u; f_801B64E0(c); // 801B716C
L_801B7170:;
  c->r[3]=0u+0x00000000u; // 801B7170
L_801B7174:;
  c->r[11]=c->r[1]+0x00000030u; // 801B7174
  c->lr=0x801B717Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B7178
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B717C
  c->lr=c->r[0]; // 801B7180
  c->r[1]=c->r[1]+0x00000030u; // 801B7184
  return; // 801B7188
}

// BTM_SetInquiryScanType
void f_801B718C(Ctx* __restrict c) {
  trace_call(0x801B718Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B718C
  c->r[0]=c->lr; // 801B7190
  cmps(c,0,(int32_t)c->r[3],0); // 801B7194
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B7198
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B719C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B71A0
  c->r[30]=c->r[3]|c->r[3]; // 801B71A4
  if (crb(c,2)) { goto L_801B71BC; } // 801B71A8
  cmpu(c,0,c->r[3],0x00000001u); // 801B71AC
  if (crb(c,2)) { goto L_801B71BC; } // 801B71B0
  c->r[3]=0u+0x00000005u; // 801B71B4
  goto L_801B7224; // 801B71B8
L_801B71BC:;
  c->r[31]=0u+0x803D0000u; // 801B71BC
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B71C0
  c->r[0]=R8(c->r[31]+0x00000643u); // 801B71C4
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801B71C8
  if (!crb(c,2)) { goto L_801B71D8; } // 801B71CC
  c->r[3]=0u+0x00000004u; // 801B71D0
  goto L_801B7224; // 801B71D4
L_801B71D8:;
  c->r[0]=R16(c->r[31]+0x000016A4u); // 801B71D8
  cmpu(c,0,c->r[3],c->r[0]); // 801B71DC
  if (crb(c,2)) { goto L_801B7220; } // 801B71E0
  c->lr=0x801B71E8u; f_801B56E0(c); // 801B71E4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B71E8
  if (crb(c,2)) { goto L_801B7218; } // 801B71EC
  c->r[3]=0u+0x00000002u; // 801B71F0
  c->lr=0x801B71F8u; f_801AA140(c); // 801B71F4
  cmps(c,0,(int32_t)c->r[3],0); // 801B71F8
  if (crb(c,2)) { goto L_801B7210; } // 801B71FC
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801B7200
  c->lr=0x801B7208u; f_801C1F90(c); // 801B7204
  W16(c->r[31]+0x000016A4u,c->r[30]); // 801B7208
  goto L_801B7220; // 801B720C
L_801B7210:;
  c->r[3]=0u+0x00000003u; // 801B7210
  goto L_801B7224; // 801B7214
L_801B7218:;
  c->r[3]=0u+0x00000006u; // 801B7218
  goto L_801B7224; // 801B721C
L_801B7220:;
  c->r[3]=0u+0x00000000u; // 801B7220
L_801B7224:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7224
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B7228
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B722C
  c->lr=c->r[0]; // 801B7230
  c->r[1]=c->r[1]+0x00000010u; // 801B7234
  return; // 801B7238
}

// BTM_SetPageScanType
void f_801B723C(Ctx* __restrict c) {
  trace_call(0x801B723Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B723C
  c->r[0]=c->lr; // 801B7240
  cmps(c,0,(int32_t)c->r[3],0); // 801B7244
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B7248
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B724C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B7250
  c->r[30]=c->r[3]|c->r[3]; // 801B7254
  if (crb(c,2)) { goto L_801B726C; } // 801B7258
  cmpu(c,0,c->r[3],0x00000001u); // 801B725C
  if (crb(c,2)) { goto L_801B726C; } // 801B7260
  c->r[3]=0u+0x00000005u; // 801B7264
  goto L_801B72D4; // 801B7268
L_801B726C:;
  c->r[31]=0u+0x803D0000u; // 801B726C
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B7270
  c->r[0]=R8(c->r[31]+0x00000643u); // 801B7274
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801B7278
  if (!crb(c,2)) { goto L_801B7288; } // 801B727C
  c->r[3]=0u+0x00000004u; // 801B7280
  goto L_801B72D4; // 801B7284
L_801B7288:;
  c->r[0]=R16(c->r[31]+0x000016A6u); // 801B7288
  cmpu(c,0,c->r[3],c->r[0]); // 801B728C
  if (crb(c,2)) { goto L_801B72D0; } // 801B7290
  c->lr=0x801B7298u; f_801B56E0(c); // 801B7294
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B7298
  if (crb(c,2)) { goto L_801B72C8; } // 801B729C
  c->r[3]=0u+0x00000002u; // 801B72A0
  c->lr=0x801B72A8u; f_801AA140(c); // 801B72A4
  cmps(c,0,(int32_t)c->r[3],0); // 801B72A8
  if (crb(c,2)) { goto L_801B72C0; } // 801B72AC
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801B72B0
  c->lr=0x801B72B8u; f_801C1FF0(c); // 801B72B4
  W16(c->r[31]+0x000016A6u,c->r[30]); // 801B72B8
  goto L_801B72D0; // 801B72BC
L_801B72C0:;
  c->r[3]=0u+0x00000003u; // 801B72C0
  goto L_801B72D4; // 801B72C4
L_801B72C8:;
  c->r[3]=0u+0x00000006u; // 801B72C8
  goto L_801B72D4; // 801B72CC
L_801B72D0:;
  c->r[3]=0u+0x00000000u; // 801B72D0
L_801B72D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B72D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B72D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B72DC
  c->lr=c->r[0]; // 801B72E0
  c->r[1]=c->r[1]+0x00000010u; // 801B72E4
  return; // 801B72E8
}

// BTM_SetInquiryMode
void f_801B72EC(Ctx* __restrict c) {
  trace_call(0x801B72ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B72EC
  c->r[0]=c->lr; // 801B72F0
  cmps(c,0,(int32_t)c->r[3],0); // 801B72F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B72F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B72FC
  c->r[31]=c->r[3]|c->r[3]; // 801B7300
  if (crb(c,2)) { goto L_801B7318; } // 801B7304
  cmpu(c,0,c->r[3],0x00000001u); // 801B7308
  if (crb(c,2)) { goto L_801B7318; } // 801B730C
  c->r[3]=0u+0x00000005u; // 801B7310
  goto L_801B7370; // 801B7314
L_801B7318:;
  c->r[3]=0u+0x803D0000u; // 801B7318
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B731C
  c->r[0]=R8(c->r[3]+0x00000643u); // 801B7320
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801B7324
  if (!crb(c,2)) { goto L_801B7334; } // 801B7328
  c->r[3]=0u+0x00000004u; // 801B732C
  goto L_801B7370; // 801B7330
L_801B7334:;
  c->lr=0x801B7338u; f_801B56E0(c); // 801B7334
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B7338
  if (!crb(c,2)) { goto L_801B7348; } // 801B733C
  c->r[3]=0u+0x00000006u; // 801B7340
  goto L_801B7370; // 801B7344
L_801B7348:;
  c->r[3]=0u+0x00000002u; // 801B7348
  c->lr=0x801B7350u; f_801AA140(c); // 801B734C
  cmps(c,0,(int32_t)c->r[3],0); // 801B7350
  if (crb(c,2)) { goto L_801B7364; } // 801B7354
  c->r[4]=c->r[31]|c->r[31]; // 801B7358
  c->lr=0x801B7360u; f_801C1FC0(c); // 801B735C
  goto L_801B736C; // 801B7360
L_801B7364:;
  c->r[3]=0u+0x00000003u; // 801B7364
  goto L_801B7370; // 801B7368
L_801B736C:;
  c->r[3]=0u+0x00000000u; // 801B736C
L_801B7370:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7370
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B7374
  c->lr=c->r[0]; // 801B7378
  c->r[1]=c->r[1]+0x00000010u; // 801B737C
  return; // 801B7380
}

// BTM_SetConnectability
void f_801B7384(Ctx* __restrict c) {
  trace_call(0x801B7384u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7384
  c->r[0]=c->lr; // 801B7388
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B738C
  c->r[11]=c->r[1]+0x00000020u; // 801B7390
  c->lr=0x801B7398u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B7394
  cmps(c,0,(int32_t)c->r[3],0); // 801B7398
  c->r[31]=0u+0x803D0000u; // 801B739C
  c->r[27]=c->r[3]|c->r[3]; // 801B73A0
  c->r[28]=c->r[4]|c->r[4]; // 801B73A4
  c->r[29]=c->r[5]|c->r[5]; // 801B73A8
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B73AC
  c->r[30]=0u+0x00000000u; // 801B73B0
  if (crb(c,2)) { goto L_801B73C8; } // 801B73B4
  cmpu(c,0,c->r[3],0x00000001u); // 801B73B8
  if (crb(c,2)) { goto L_801B73C8; } // 801B73BC
  c->r[3]=0u+0x00000005u; // 801B73C0
  goto L_801B74F4; // 801B73C4
L_801B73C8:;
  c->r[3]=0u+0x803D0000u; // 801B73C8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B73CC
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801B73D0
  cmpu(c,0,c->r[0],0x00000003u); // 801B73D4
  if (!crb(c,0)) { goto L_801B73E4; } // 801B73D8
  c->r[3]=0u+0x0000000Cu; // 801B73DC
  goto L_801B74F4; // 801B73E0
L_801B73E4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B73E4
  if (!crb(c,2)) { goto L_801B73F0; } // 801B73E8
  c->r[28]=0u+0x00000012u; // 801B73EC
L_801B73F0:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B73F0
  if (!crb(c,2)) { goto L_801B73FC; } // 801B73F4
  c->r[29]=0u+0x00000800u; // 801B73F8
L_801B73FC:;
  c->r[3]=0u+0x803D0000u; // 801B73FC
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B7400
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B7404
  cmpu(c,0,c->r[0],0x00000003u); // 801B7408
  if (crb(c,0)) { goto L_801B7430; } // 801B740C
  c->r[3]=0u+0x000D0000u; // 801B7410
  c->r[4]=0u+0x80330000u; // 801B7414
  c->r[5]=c->r[27]|c->r[27]; // 801B7418
  c->r[6]=c->r[28]|c->r[28]; // 801B741C
  c->r[7]=c->r[29]|c->r[29]; // 801B7420
  c->r[3]=c->r[3]+0x00000002u; // 801B7424
  c->r[4]=c->r[4]+0x00002A44u; // 801B7428
  c->lr=0x801B7430u; f_801ACB68(c); // 801B742C
L_801B7430:;
  cmpu(c,0,c->r[27],0x00000001u); // 801B7430
  if (!crb(c,2)) { goto L_801B746C; } // 801B7434
  cmpu(c,0,c->r[28],0x00000012u); // 801B7438
  if (crb(c,0)) { goto L_801B7460; } // 801B743C
  cmpu(c,0,c->r[28],0x00001000u); // 801B7440
  if (crb(c,1)) { goto L_801B7460; } // 801B7444
  cmpu(c,0,c->r[29],0x00000012u); // 801B7448
  if (crb(c,0)) { goto L_801B7460; } // 801B744C
  cmpu(c,0,c->r[29],0x00001000u); // 801B7450
  if (crb(c,1)) { goto L_801B7460; } // 801B7454
  cmpu(c,0,c->r[28],c->r[29]); // 801B7458
  if (!crb(c,1)) { goto L_801B7468; } // 801B745C
L_801B7460:;
  c->r[3]=0u+0x00000005u; // 801B7460
  goto L_801B74F4; // 801B7464
L_801B7468:;
  c->r[30]=c->r[30]|0x00000002u; // 801B7468
L_801B746C:;
  c->r[0]=R16(c->r[31]+0x0000169Cu); // 801B746C
  cmpu(c,0,c->r[28],c->r[0]); // 801B7470
  if (!crb(c,2)) { goto L_801B7484; } // 801B7474
  c->r[0]=R16(c->r[31]+0x0000169Eu); // 801B7478
  cmpu(c,0,c->r[29],c->r[0]); // 801B747C
  if (crb(c,2)) { goto L_801B74B4; } // 801B7480
L_801B7484:;
  c->r[3]=0u+0x00000002u; // 801B7484
  c->lr=0x801B748Cu; f_801AA140(c); // 801B7488
  cmps(c,0,(int32_t)c->r[3],0); // 801B748C
  if (crb(c,2)) { goto L_801B74AC; } // 801B7490
  W16(c->r[31]+0x0000169Cu,c->r[28]); // 801B7494
  c->r[4]=c->r[29]|c->r[29]; // 801B7498
  c->r[5]=c->r[28]|c->r[28]; // 801B749C
  W16(c->r[31]+0x0000169Eu,c->r[29]); // 801B74A0
  c->lr=0x801B74A8u; f_801C1580(c); // 801B74A4
  goto L_801B74B4; // 801B74A8
L_801B74AC:;
  c->r[3]=0u+0x00000003u; // 801B74AC
  goto L_801B74F4; // 801B74B0
L_801B74B4:;
  c->r[3]=0u+0x00000002u; // 801B74B4
  c->lr=0x801B74BCu; f_801AA140(c); // 801B74B8
  cmps(c,0,(int32_t)c->r[3],0); // 801B74BC
  if (crb(c,2)) { goto L_801B74E8; } // 801B74C0
  c->r[0]=R16(c->r[31]+0x00001698u); // 801B74C4
  cmps(c,0,(int32_t)c->r[0],0); // 801B74C8
  if (crb(c,2)) { goto L_801B74D8; } // 801B74CC
  c->r[0]=c->r[30]|0x00000001u; // 801B74D0
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 801B74D4
L_801B74D8:;
  W16(c->r[31]+0x0000169Au,c->r[27]); // 801B74D8
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801B74DC
  c->lr=0x801B74E4u; f_801C1550(c); // 801B74E0
  goto L_801B74F0; // 801B74E4
L_801B74E8:;
  c->r[3]=0u+0x00000003u; // 801B74E8
  goto L_801B74F4; // 801B74EC
L_801B74F0:;
  c->r[3]=0u+0x00000000u; // 801B74F0
L_801B74F4:;
  c->r[11]=c->r[1]+0x00000020u; // 801B74F4
  c->lr=0x801B74FCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B74F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B74FC
  c->lr=c->r[0]; // 801B7500
  c->r[1]=c->r[1]+0x00000020u; // 801B7504
  return; // 801B7508
}

// BTM_IsInquiryActive
void f_801B750C(Ctx* __restrict c) {
  trace_call(0x801B750Cu);
  c->r[3]=0u+0x803D0000u; // 801B750C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B7510
  c->r[3]=R8(c->r[3]+0x00001848u); // 801B7514
  return; // 801B7518
}

// BTM_CancelInquiry
void f_801B751C(Ctx* __restrict c) {
  trace_call(0x801B751Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B751C
  c->r[0]=c->lr; // 801B7520
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7524
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B7528
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B752C
  c->r[30]=0u+0x803D0000u; // 801B7530
  c->r[30]=c->r[30]+0xFFFF8118u; // 801B7534
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B7538
  c->r[29]=0u+0x00000000u; // 801B753C
  c->r[0]=R8(c->r[30]+0x000027C0u); // 801B7540
  cmpu(c,0,c->r[0],0x00000003u); // 801B7544
  if (crb(c,0)) { goto L_801B7560; } // 801B7548
  c->r[3]=0u+0x000D0000u; // 801B754C
  c->r[4]=0u+0x80330000u; // 801B7550
  c->r[3]=c->r[3]+0x00000002u; // 801B7554
  c->r[4]=c->r[4]+0x00002A98u; // 801B7558
  c->lr=0x801B7560u; f_801ACB20(c); // 801B755C
L_801B7560:;
  c->lr=0x801B7564u; f_801B56E0(c); // 801B7560
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B7564
  if (!crb(c,2)) { goto L_801B7574; } // 801B7568
  c->r[3]=0u+0x00000006u; // 801B756C
  goto L_801B7608; // 801B7570
L_801B7574:;
  c->r[0]=R8(c->r[30]+0x00001848u); // 801B7574
  cmps(c,0,(int32_t)c->r[0],0); // 801B7578
  if (crb(c,2)) { goto L_801B7604; } // 801B757C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B7580
  if (!crb(c,2)) { goto L_801B7604; } // 801B7584
  c->r[0]=R8(c->r[30]+0x00001844u); // 801B7588
  c->r[4]=0u+0x00000000u; // 801B758C
  W8(c->r[30]+0x00001848u,c->r[4]); // 801B7590
  cmps(c,0,(int32_t)c->r[0],0); // 801B7594
  W8(c->r[30]+0x00001847u,c->r[4]); // 801B7598
  W32(c->r[30]+0x000016B4u,c->r[4]); // 801B759C
  W32(c->r[30]+0x000016B0u,c->r[4]); // 801B75A0
  if (crb(c,2)) { goto L_801B75BC; } // 801B75A4
  c->r[3]=R8(c->r[30]+0x00001845u); // 801B75A8
  W8(c->r[30]+0x00001844u,c->r[4]); // 801B75AC
  c->r[0]=c->r[3]+0x00000001u; // 801B75B0
  W8(c->r[30]+0x00001845u,c->r[0]); // 801B75B4
  goto L_801B75CC; // 801B75B8
L_801B75BC:;
  c->lr=0x801B75C0u; f_801BFAA0(c); // 801B75BC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B75C0
  if (!crb(c,2)) { goto L_801B75CC; } // 801B75C4
  c->r[29]=0u+0x00000003u; // 801B75C8
L_801B75CC:;
  c->r[31]=0u+0x803D0000u; // 801B75CC
  c->r[4]=R32(c->r[30]+0x000016C0u); // 801B75D0
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B75D4
  c->r[3]=R32(c->r[31]+0x000016DCu); // 801B75D8
  c->r[0]=c->r[4]+0x00000001u; // 801B75DC
  W32(c->r[30]+0x000016C0u,c->r[0]); // 801B75E0
  cmps(c,0,(int32_t)c->r[3],0); // 801B75E4
  if (crb(c,2)) { goto L_801B75F8; } // 801B75E8
  c->lr=0x801B75F0u; f_801AA228(c); // 801B75EC
  c->r[0]=0u+0x00000000u; // 801B75F0
  W32(c->r[31]+0x000016DCu,c->r[0]); // 801B75F4
L_801B75F8:;
  c->r[0]=0u+0x00000000u; // 801B75F8
  W16(c->r[31]+0x000016E0u,c->r[0]); // 801B75FC
  W16(c->r[31]+0x000016E2u,c->r[0]); // 801B7600
L_801B7604:;
  c->r[3]=c->r[29]|c->r[29]; // 801B7604
L_801B7608:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B7608
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B760C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B7610
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B7614
  c->lr=c->r[0]; // 801B7618
  c->r[1]=c->r[1]+0x00000020u; // 801B761C
  return; // 801B7620
}

// BTM_StartInquiry
void f_801B7624(Ctx* __restrict c) {
  trace_call(0x801B7624u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7624
  c->r[0]=c->lr; // 801B7628
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B762C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B7630
  c->r[31]=0u+0x803D0000u; // 801B7634
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B7638
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B763C
  c->r[30]=c->r[5]|c->r[5]; // 801B7640
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B7644
  c->r[29]=c->r[4]|c->r[4]; // 801B7648
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B764C
  c->r[28]=c->r[3]|c->r[3]; // 801B7650
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B7654
  cmpu(c,0,c->r[0],0x00000003u); // 801B7658
  if (crb(c,0)) { goto L_801B7684; } // 801B765C
  c->r[3]=0u+0x000D0000u; // 801B7660
  c->r[4]=0u+0x80330000u; // 801B7664
  c->r[5]=R8(c->r[28]+0x00000000u); // 801B7668
  c->r[3]=c->r[3]+0x00000002u; // 801B766C
  c->r[6]=R8(c->r[28]+0x00000001u); // 801B7670
  c->r[4]=c->r[4]+0x00002AB4u; // 801B7674
  c->r[7]=R8(c->r[28]+0x00000002u); // 801B7678
  c->r[8]=R8(c->r[28]+0x00000003u); // 801B767C
  c->lr=0x801B7684u; f_801ACB80(c); // 801B7680
L_801B7684:;
  c->r[0]=R8(c->r[31]+0x00001848u); // 801B7684
  cmps(c,0,(int32_t)c->r[0],0); // 801B7688
  if (!crb(c,2)) { goto L_801B769C; } // 801B768C
  c->r[0]=R8(c->r[31]+0x00001844u); // 801B7690
  cmps(c,0,(int32_t)c->r[0],0); // 801B7694
  if (crb(c,2)) { goto L_801B76A4; } // 801B7698
L_801B769C:;
  c->r[3]=0u+0x00000002u; // 801B769C
  goto L_801B77B8; // 801B76A0
L_801B76A4:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801B76A4
  cmps(c,0,(int32_t)c->r[0],0); // 801B76A8
  if (crb(c,2)) { goto L_801B76C0; } // 801B76AC
  cmpu(c,0,c->r[0],0x00000001u); // 801B76B0
  if (crb(c,2)) { goto L_801B76C0; } // 801B76B4
  c->r[3]=0u+0x00000005u; // 801B76B8
  goto L_801B77B8; // 801B76BC
L_801B76C0:;
  c->lr=0x801B76C4u; f_801B56E0(c); // 801B76C0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B76C4
  if (!crb(c,2)) { goto L_801B76D4; } // 801B76C8
  c->r[3]=0u+0x00000006u; // 801B76CC
  goto L_801B77B8; // 801B76D0
L_801B76D4:;
  c->r[5]=R8(c->r[28]+0x00000000u); // 801B76D4
  c->r[0]=0u+0x00000003u; // 801B76D8
  c->r[3]=R8(c->r[28]+0x00000001u); // 801B76DC
  c->r[6]=0u+0x00000000u; // 801B76E0
  c->r[4]=0u+0x00000001u; // 801B76E4
  W8(c->r[31]+0x00001834u,c->r[5]); // 801B76E8
  W8(c->r[31]+0x00001835u,c->r[3]); // 801B76EC
  c->r[5]=R8(c->r[28]+0x00000002u); // 801B76F0
  c->r[3]=R8(c->r[28]+0x00000003u); // 801B76F4
  W8(c->r[31]+0x00001836u,c->r[5]); // 801B76F8
  W8(c->r[31]+0x00001837u,c->r[3]); // 801B76FC
  c->r[5]=R8(c->r[28]+0x00000004u); // 801B7700
  c->r[3]=R8(c->r[28]+0x00000005u); // 801B7704
  W8(c->r[31]+0x00001838u,c->r[5]); // 801B7708
  W8(c->r[31]+0x00001839u,c->r[3]); // 801B770C
  c->r[5]=R8(c->r[28]+0x00000006u); // 801B7710
  c->r[3]=R8(c->r[28]+0x00000007u); // 801B7714
  W8(c->r[31]+0x0000183Au,c->r[5]); // 801B7718
  W8(c->r[31]+0x0000183Bu,c->r[3]); // 801B771C
  c->r[3]=R8(c->r[28]+0x00000008u); // 801B7720
  W8(c->r[31]+0x0000183Cu,c->r[3]); // 801B7724
  c->r[3]=R8(c->r[28]+0x00000009u); // 801B7728
  W8(c->r[31]+0x0000183Du,c->r[3]); // 801B772C
  W8(c->r[31]+0x00001847u,c->r[0]); // 801B7730
  W32(c->r[31]+0x000016B0u,c->r[30]); // 801B7734
  W32(c->r[31]+0x000016B4u,c->r[29]); // 801B7738
  W8(c->r[31]+0x0000183Fu,c->r[6]); // 801B773C
  c->r[5]=R8(c->r[28]+0x00000000u); // 801B7740
  c->r[3]=c->r[5]+0xFFFFFFFFu; // 801B7744
  c->r[0]=addc(c,~c->r[5],0x00000001u,1); // 801B7748
  c->r[0]=~(c->r[3]|c->r[0]); // 801B774C
  c->r[3]=sraw(c,c->r[0],31); // 801B7750
  c->r[0]=c->r[3]+0x00000002u; // 801B7754
  W8(c->r[31]+0x00001848u,c->r[0]); // 801B7758
  c->r[0]=R8(c->r[28]+0x00000003u); // 801B775C
  cmps(c,0,(int32_t)c->r[0],0); // 801B7760
  if (crb(c,2)) { goto L_801B7778; } // 801B7764
  if (crb(c,0)) { goto L_801B7790; } // 801B7768
  cmps(c,0,(int32_t)c->r[0],3); // 801B776C
  if (!crb(c,0)) { goto L_801B7790; } // 801B7770
  goto L_801B7784; // 801B7774
L_801B7778:;
  c->r[0]=0u+0x00000002u; // 801B7778
  W8(c->r[31]+0x00001847u,c->r[0]); // 801B777C
  goto L_801B7798; // 801B7780
L_801B7784:;
  W8(c->r[31]+0x00001847u,c->r[4]); // 801B7784
  W8(c->r[28]+0x00000003u,c->r[6]); // 801B7788
  goto L_801B7798; // 801B778C
L_801B7790:;
  c->r[3]=0u+0x00000005u; // 801B7790
  goto L_801B77B8; // 801B7794
L_801B7798:;
  c->r[3]=R8(c->r[28]+0x00000003u); // 801B7798
  c->r[4]=c->r[28]+0x00000004u; // 801B779C
  c->lr=0x801B77A4u; f_801B8038(c); // 801B77A0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B77A4
  cmpu(c,0,c->r[0],0x00000001u); // 801B77A8
  if (crb(c,2)) { goto L_801B77B8; } // 801B77AC
  c->r[0]=0u+0x00000000u; // 801B77B0
  W8(c->r[31]+0x00001847u,c->r[0]); // 801B77B4
L_801B77B8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B77B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B77BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B77C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B77C4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B77C8
  c->lr=c->r[0]; // 801B77CC
  c->r[1]=c->r[1]+0x00000020u; // 801B77D0
  return; // 801B77D4
}

// BTM_ReadRemoteDeviceName
void f_801B77D8(Ctx* __restrict c) {
  trace_call(0x801B77D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B77D8
  c->r[0]=c->lr; // 801B77DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B77E0
  c->r[11]=c->r[1]+0x00000020u; // 801B77E4
  c->lr=0x801B77ECu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B77E8
  c->r[5]=0u+0x803D0000u; // 801B77EC
  c->r[27]=c->r[3]|c->r[3]; // 801B77F0
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B77F4
  c->r[28]=c->r[4]|c->r[4]; // 801B77F8
  c->r[0]=R8(c->r[5]+0x000027C0u); // 801B77FC
  c->r[29]=0u+0x00000000u; // 801B7800
  cmpu(c,0,c->r[0],0x00000003u); // 801B7804
  if (crb(c,0)) { goto L_801B7838; } // 801B7808
  c->r[3]=0u+0x000D0000u; // 801B780C
  c->r[4]=0u+0x80330000u; // 801B7810
  c->r[5]=R8(c->r[27]+0x00000000u); // 801B7814
  c->r[3]=c->r[3]+0x00000002u; // 801B7818
  c->r[6]=R8(c->r[27]+0x00000001u); // 801B781C
  c->r[4]=c->r[4]+0x00002AECu; // 801B7820
  c->r[7]=R8(c->r[27]+0x00000002u); // 801B7824
  c->r[8]=R8(c->r[27]+0x00000003u); // 801B7828
  c->r[9]=R8(c->r[27]+0x00000004u); // 801B782C
  c->r[10]=R8(c->r[27]+0x00000005u); // 801B7830
  c->lr=0x801B7838u; f_801ACBB0(c); // 801B7834
L_801B7838:;
  c->r[3]=0u+0x803D0000u; // 801B7838
  c->r[30]=0u+0x00000000u; // 801B783C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B7840
  c->r[31]=c->r[3]+0x000016E4u; // 801B7844
L_801B7848:;
  c->r[0]=R8(c->r[31]+0x0000001Au); // 801B7848
  cmps(c,0,(int32_t)c->r[0],0); // 801B784C
  if (crb(c,2)) { goto L_801B7870; } // 801B7850
  c->r[4]=c->r[27]|c->r[27]; // 801B7854
  c->r[3]=c->r[31]+0x0000000Au; // 801B7858
  c->r[5]=0u+0x00000006u; // 801B785C
  c->lr=0x801B7864u; f_8018C170(c); // 801B7860
  cmps(c,0,(int32_t)c->r[3],0); // 801B7864
  if (!crb(c,2)) { goto L_801B7870; } // 801B7868
  goto L_801B7884; // 801B786C
L_801B7870:;
  c->r[30]=c->r[30]+0x00000001u; // 801B7870
  c->r[31]=c->r[31]+0x0000001Cu; // 801B7874
  cmpu(c,0,c->r[30],0x0000000Cu); // 801B7878
  if (crb(c,0)) { IRQCHK(c); goto L_801B7848; } // 801B787C
  c->r[31]=0u+0x00000000u; // 801B7880
L_801B7884:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B7884
  if (crb(c,2)) { goto L_801B7890; } // 801B7888
  c->r[29]=c->r[31]+0x00000008u; // 801B788C
L_801B7890:;
  c->r[3]=c->r[27]|c->r[27]; // 801B7890
  c->r[4]=c->r[29]|c->r[29]; // 801B7894
  c->r[7]=c->r[28]|c->r[28]; // 801B7898
  c->r[5]=0u+0x00000001u; // 801B789C
  c->r[6]=0u+0x00000028u; // 801B78A0
  c->lr=0x801B78A8u; f_801B86B8(c); // 801B78A4
  c->r[11]=c->r[1]+0x00000020u; // 801B78A8
  c->lr=0x801B78B0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B78AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B78B0
  c->lr=c->r[0]; // 801B78B4
  c->r[1]=c->r[1]+0x00000020u; // 801B78B8
  return; // 801B78BC
}

// BTM_CancelRemoteDeviceName
void f_801B78C0(Ctx* __restrict c) {
  trace_call(0x801B78C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B78C0
  c->r[0]=c->lr; // 801B78C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B78C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B78CC
  c->r[31]=0u+0x803D0000u; // 801B78D0
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B78D4
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B78D8
  cmpu(c,0,c->r[0],0x00000003u); // 801B78DC
  if (crb(c,0)) { goto L_801B78F8; } // 801B78E0
  c->r[3]=0u+0x000D0000u; // 801B78E4
  c->r[4]=0u+0x80330000u; // 801B78E8
  c->r[3]=c->r[3]+0x00000002u; // 801B78EC
  c->r[4]=c->r[4]+0x00002B2Cu; // 801B78F0
  c->lr=0x801B78F8u; f_801ACB20(c); // 801B78F4
L_801B78F8:;
  c->r[0]=R8(c->r[31]+0x000016AEu); // 801B78F8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B78FC
  if (crb(c,2)) { goto L_801B7920; } // 801B7900
  c->r[3]=c->r[31]+0x000016A8u; // 801B7904
  c->lr=0x801B790Cu; f_801C05A4(c); // 801B7908
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B790C
  c->r[3]=0u+0x00000003u; // 801B7910
  if (crb(c,2)) { goto L_801B7924; } // 801B7914
  c->r[3]=0u+0x00000001u; // 801B7918
  goto L_801B7924; // 801B791C
L_801B7920:;
  c->r[3]=0u+0x00000006u; // 801B7920
L_801B7924:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7924
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B7928
  c->lr=c->r[0]; // 801B792C
  c->r[1]=c->r[1]+0x00000010u; // 801B7930
  return; // 801B7934
}

// BTM_InqDbRead
void f_801B7938(Ctx* __restrict c) {
  trace_call(0x801B7938u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7938
  c->r[0]=c->lr; // 801B793C
  c->r[4]=0u+0x803D0000u; // 801B7940
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7944
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B7948
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B794C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B7950
  c->r[30]=c->r[4]+0x000016E4u; // 801B7954
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B7958
  c->r[29]=c->r[3]|c->r[3]; // 801B795C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B7960
  cmpu(c,0,c->r[0],0x00000003u); // 801B7964
  if (crb(c,0)) { goto L_801B7998; } // 801B7968
  c->r[3]=0u+0x000D0000u; // 801B796C
  c->r[4]=0u+0x80330000u; // 801B7970
  c->r[5]=R8(c->r[29]+0x00000000u); // 801B7974
  c->r[3]=c->r[3]+0x00000002u; // 801B7978
  c->r[6]=R8(c->r[29]+0x00000001u); // 801B797C
  c->r[4]=c->r[4]+0x00002B4Cu; // 801B7980
  c->r[7]=R8(c->r[29]+0x00000002u); // 801B7984
  c->r[8]=R8(c->r[29]+0x00000003u); // 801B7988
  c->r[9]=R8(c->r[29]+0x00000004u); // 801B798C
  c->r[10]=R8(c->r[29]+0x00000005u); // 801B7990
  c->lr=0x801B7998u; f_801ACBB0(c); // 801B7994
L_801B7998:;
  c->r[31]=0u+0x00000000u; // 801B7998
L_801B799C:;
  c->r[0]=R8(c->r[30]+0x0000001Au); // 801B799C
  cmps(c,0,(int32_t)c->r[0],0); // 801B79A0
  if (crb(c,2)) { goto L_801B79C8; } // 801B79A4
  c->r[4]=c->r[29]|c->r[29]; // 801B79A8
  c->r[3]=c->r[30]+0x0000000Au; // 801B79AC
  c->r[5]=0u+0x00000006u; // 801B79B0
  c->lr=0x801B79B8u; f_8018C170(c); // 801B79B4
  cmps(c,0,(int32_t)c->r[3],0); // 801B79B8
  if (!crb(c,2)) { goto L_801B79C8; } // 801B79BC
  c->r[3]=c->r[30]+0x00000008u; // 801B79C0
  goto L_801B79DC; // 801B79C4
L_801B79C8:;
  c->r[31]=c->r[31]+0x00000001u; // 801B79C8
  c->r[30]=c->r[30]+0x0000001Cu; // 801B79CC
  cmpu(c,0,c->r[31],0x0000000Cu); // 801B79D0
  if (crb(c,0)) { IRQCHK(c); goto L_801B799C; } // 801B79D4
  c->r[3]=0u+0x00000000u; // 801B79D8
L_801B79DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B79DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B79E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B79E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B79E8
  c->lr=c->r[0]; // 801B79EC
  c->r[1]=c->r[1]+0x00000020u; // 801B79F0
  return; // 801B79F4
}

// BTM_InqDbFirst
void f_801B79F8(Ctx* __restrict c) {
  trace_call(0x801B79F8u);
  c->r[3]=0u+0x803D0000u; // 801B79F8
  c->r[0]=0u+0x00000002u; // 801B79FC
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B7A00
  c->r[4]=0u+0x00000000u; // 801B7A04
  c->r[3]=c->r[3]+0x000016E4u; // 801B7A08
  c->ctr=c->r[0]; // 801B7A0C
L_801B7A10:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801B7A10
  cmps(c,0,(int32_t)c->r[0],0); // 801B7A14
  if (crb(c,2)) { goto L_801B7A24; } // 801B7A18
  c->r[3]=c->r[3]+0x00000008u; // 801B7A1C
  return; // 801B7A20
L_801B7A24:;
  c->r[0]=R8(c->r[3]+0x00000036u); // 801B7A24
  c->r[4]=c->r[4]+0x00000001u; // 801B7A28
  cmps(c,0,(int32_t)c->r[0],0); // 801B7A2C
  if (crb(c,2)) { goto L_801B7A3C; } // 801B7A30
  c->r[3]=c->r[3]+0x00000024u; // 801B7A34
  return; // 801B7A38
L_801B7A3C:;
  c->r[0]=R8(c->r[3]+0x00000052u); // 801B7A3C
  c->r[4]=c->r[4]+0x00000001u; // 801B7A40
  cmps(c,0,(int32_t)c->r[0],0); // 801B7A44
  if (crb(c,2)) { goto L_801B7A54; } // 801B7A48
  c->r[3]=c->r[3]+0x00000040u; // 801B7A4C
  return; // 801B7A50
L_801B7A54:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 801B7A54
  c->r[4]=c->r[4]+0x00000001u; // 801B7A58
  cmps(c,0,(int32_t)c->r[0],0); // 801B7A5C
  if (crb(c,2)) { goto L_801B7A6C; } // 801B7A60
  c->r[3]=c->r[3]+0x0000005Cu; // 801B7A64
  return; // 801B7A68
L_801B7A6C:;
  c->r[0]=R8(c->r[3]+0x0000008Au); // 801B7A6C
  c->r[4]=c->r[4]+0x00000001u; // 801B7A70
  cmps(c,0,(int32_t)c->r[0],0); // 801B7A74
  if (crb(c,2)) { goto L_801B7A84; } // 801B7A78
  c->r[3]=c->r[3]+0x00000078u; // 801B7A7C
  return; // 801B7A80
L_801B7A84:;
  c->r[0]=R8(c->r[3]+0x000000A6u); // 801B7A84
  c->r[4]=c->r[4]+0x00000001u; // 801B7A88
  cmps(c,0,(int32_t)c->r[0],0); // 801B7A8C
  if (crb(c,2)) { goto L_801B7A9C; } // 801B7A90
  c->r[3]=c->r[3]+0x00000094u; // 801B7A94
  return; // 801B7A98
L_801B7A9C:;
  c->r[4]=c->r[4]+0x00000001u; // 801B7A9C
  c->r[3]=c->r[3]+0x000000A8u; // 801B7AA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B7A10; } // 801B7AA4
  c->r[3]=0u+0x00000000u; // 801B7AA8
  return; // 801B7AAC
}

// BTM_InqDbNext
void f_801B7AB0(Ctx* __restrict c) {
  trace_call(0x801B7AB0u);
  cmps(c,0,(int32_t)c->r[3],0); // 801B7AB0
  if (crb(c,2)) { goto L_801B7B34; } // 801B7AB4
  c->r[5]=0u+0x803D0000u; // 801B7AB8
  c->r[4]=0u+0x92490000u; // 801B7ABC
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B7AC0
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 801B7AC4
  c->r[3]=c->r[5]+0x000016E4u; // 801B7AC8
  c->r[4]=c->r[4]+0x00002493u; // 801B7ACC
  c->r[0]=c->r[0]-c->r[3]; // 801B7AD0
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801B7AD4
  c->r[0]=c->r[3]+c->r[0]; // 801B7AD8
  c->r[0]=sraw(c,c->r[0],4); // 801B7ADC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B7AE0
  c->r[3]=c->r[0]+c->r[3]; // 801B7AE4
  c->r[0]=c->r[3]+0x00000001u; // 801B7AE8
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801B7AEC
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 801B7AF0
  c->r[0]=addc(c,~c->r[4],0x0000000Cu,1); // 801B7AF4
  c->r[3]=c->r[5]+c->r[3]; // 801B7AF8
  c->r[3]=c->r[3]+0x000016E4u; // 801B7AFC
  c->ctr=c->r[0]; // 801B7B00
  cmpu(c,0,c->r[4],0x0000000Cu); // 801B7B04
  if (!crb(c,0)) { goto L_801B7B2C; } // 801B7B08
L_801B7B0C:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801B7B0C
  cmps(c,0,(int32_t)c->r[0],0); // 801B7B10
  if (crb(c,2)) { goto L_801B7B20; } // 801B7B14
  c->r[3]=c->r[3]+0x00000008u; // 801B7B18
  return; // 801B7B1C
L_801B7B20:;
  c->r[4]=c->r[4]+0x00000001u; // 801B7B20
  c->r[3]=c->r[3]+0x0000001Cu; // 801B7B24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B7B0C; } // 801B7B28
L_801B7B2C:;
  c->r[3]=0u+0x00000000u; // 801B7B2C
  return; // 801B7B30
L_801B7B34:;
  c->r[3]=0u+0x803D0000u; // 801B7B34
  c->r[0]=0u+0x00000002u; // 801B7B38
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B7B3C
  c->r[4]=0u+0x00000000u; // 801B7B40
  c->r[3]=c->r[3]+0x000016E4u; // 801B7B44
  c->ctr=c->r[0]; // 801B7B48
L_801B7B4C:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801B7B4C
  cmps(c,0,(int32_t)c->r[0],0); // 801B7B50
  if (crb(c,2)) { goto L_801B7B60; } // 801B7B54
  c->r[3]=c->r[3]+0x00000008u; // 801B7B58
  return; // 801B7B5C
L_801B7B60:;
  c->r[0]=R8(c->r[3]+0x00000036u); // 801B7B60
  c->r[4]=c->r[4]+0x00000001u; // 801B7B64
  cmps(c,0,(int32_t)c->r[0],0); // 801B7B68
  if (crb(c,2)) { goto L_801B7B78; } // 801B7B6C
  c->r[3]=c->r[3]+0x00000024u; // 801B7B70
  return; // 801B7B74
L_801B7B78:;
  c->r[0]=R8(c->r[3]+0x00000052u); // 801B7B78
  c->r[4]=c->r[4]+0x00000001u; // 801B7B7C
  cmps(c,0,(int32_t)c->r[0],0); // 801B7B80
  if (crb(c,2)) { goto L_801B7B90; } // 801B7B84
  c->r[3]=c->r[3]+0x00000040u; // 801B7B88
  return; // 801B7B8C
L_801B7B90:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 801B7B90
  c->r[4]=c->r[4]+0x00000001u; // 801B7B94
  cmps(c,0,(int32_t)c->r[0],0); // 801B7B98
  if (crb(c,2)) { goto L_801B7BA8; } // 801B7B9C
  c->r[3]=c->r[3]+0x0000005Cu; // 801B7BA0
  return; // 801B7BA4
L_801B7BA8:;
  c->r[0]=R8(c->r[3]+0x0000008Au); // 801B7BA8
  c->r[4]=c->r[4]+0x00000001u; // 801B7BAC
  cmps(c,0,(int32_t)c->r[0],0); // 801B7BB0
  if (crb(c,2)) { goto L_801B7BC0; } // 801B7BB4
  c->r[3]=c->r[3]+0x00000078u; // 801B7BB8
  return; // 801B7BBC
L_801B7BC0:;
  c->r[0]=R8(c->r[3]+0x000000A6u); // 801B7BC0
  c->r[4]=c->r[4]+0x00000001u; // 801B7BC4
  cmps(c,0,(int32_t)c->r[0],0); // 801B7BC8
  if (crb(c,2)) { goto L_801B7BD8; } // 801B7BCC
  c->r[3]=c->r[3]+0x00000094u; // 801B7BD0
  return; // 801B7BD4
L_801B7BD8:;
  c->r[4]=c->r[4]+0x00000001u; // 801B7BD8
  c->r[3]=c->r[3]+0x000000A8u; // 801B7BDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B7B4C; } // 801B7BE0
  c->r[3]=0u+0x00000000u; // 801B7BE4
  return; // 801B7BE8
}

// BTM_ClearInqDb
void f_801B7BEC(Ctx* __restrict c) {
  trace_call(0x801B7BECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7BEC
  c->r[0]=c->lr; // 801B7BF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7BF4
  c->r[11]=c->r[1]+0x00000020u; // 801B7BF8
  c->lr=0x801B7C00u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B7BFC
  c->r[4]=0u+0x803D0000u; // 801B7C00
  c->r[27]=c->r[3]|c->r[3]; // 801B7C04
  c->r[30]=c->r[4]+0xFFFF8118u; // 801B7C08
  c->r[0]=R8(c->r[30]+0x00001848u); // 801B7C0C
  cmps(c,0,(int32_t)c->r[0],0); // 801B7C10
  if (!crb(c,2)) { goto L_801B7C30; } // 801B7C14
  c->r[0]=R8(c->r[30]+0x000016AEu); // 801B7C18
  cmps(c,0,(int32_t)c->r[0],0); // 801B7C1C
  if (!crb(c,2)) { goto L_801B7C30; } // 801B7C20
  c->r[0]=R8(c->r[30]+0x00001844u); // 801B7C24
  cmps(c,0,(int32_t)c->r[0],0); // 801B7C28
  if (crb(c,2)) { goto L_801B7C38; } // 801B7C2C
L_801B7C30:;
  c->r[3]=0u+0x00000002u; // 801B7C30
  goto L_801B7CA4; // 801B7C34
L_801B7C38:;
  c->r[28]=c->r[30]+0x000016E4u; // 801B7C38
  c->r[29]=0u+0x00000000u; // 801B7C3C
  c->r[31]=0u+0x00000000u; // 801B7C40
L_801B7C44:;
  c->r[0]=R8(c->r[28]+0x0000001Au); // 801B7C44
  cmps(c,0,(int32_t)c->r[0],0); // 801B7C48
  if (crb(c,2)) { goto L_801B7C90; } // 801B7C4C
  cmps(c,0,(int32_t)c->r[27],0); // 801B7C50
  if (crb(c,2)) { goto L_801B7C70; } // 801B7C54
  c->r[4]=c->r[27]|c->r[27]; // 801B7C58
  c->r[3]=c->r[28]+0x0000000Au; // 801B7C5C
  c->r[5]=0u+0x00000006u; // 801B7C60
  c->lr=0x801B7C68u; f_8018C170(c); // 801B7C64
  cmps(c,0,(int32_t)c->r[3],0); // 801B7C68
  if (!crb(c,2)) { goto L_801B7C90; } // 801B7C6C
L_801B7C70:;
  W8(c->r[28]+0x0000001Au,c->r[31]); // 801B7C70
  c->r[12]=R32(c->r[30]+0x000016BCu); // 801B7C74
  cmps(c,0,(int32_t)c->r[12],0); // 801B7C78
  if (crb(c,2)) { goto L_801B7C90; } // 801B7C7C
  c->r[3]=c->r[28]+0x00000008u; // 801B7C80
  c->r[4]=0u+0x00000000u; // 801B7C84
  c->ctr=c->r[12]; // 801B7C88
  if (true) { c->lr=0x801B7C90u; dispatch(c,c->ctr); } // 801B7C8C
L_801B7C90:;
  c->r[29]=c->r[29]+0x00000001u; // 801B7C90
  c->r[28]=c->r[28]+0x0000001Cu; // 801B7C94
  cmpu(c,0,c->r[29],0x0000000Cu); // 801B7C98
  if (crb(c,0)) { IRQCHK(c); goto L_801B7C44; } // 801B7C9C
  c->r[3]=0u+0x00000000u; // 801B7CA0
L_801B7CA4:;
  c->r[11]=c->r[1]+0x00000020u; // 801B7CA4
  c->lr=0x801B7CACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B7CA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B7CAC
  c->lr=c->r[0]; // 801B7CB0
  c->r[1]=c->r[1]+0x00000020u; // 801B7CB4
  return; // 801B7CB8
}

// btm_inq_db_reset
void f_801B7CBC(Ctx* __restrict c) {
  trace_call(0x801B7CBCu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7CBC
  c->r[0]=c->lr; // 801B7CC0
  W32(c->r[1]+0x00000124u,c->r[0]); // 801B7CC4
  c->r[11]=c->r[1]+0x00000120u; // 801B7CC8
  c->lr=0x801B7CD0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B7CCC
  c->r[29]=0u+0x803D0000u; // 801B7CD0
  c->r[29]=c->r[29]+0xFFFF8118u; // 801B7CD4
  c->r[3]=c->r[29]+0x000016C4u; // 801B7CD8
  c->lr=0x801B7CE0u; f_801AD15C(c); // 801B7CDC
  c->r[3]=R8(c->r[29]+0x00001848u); // 801B7CE0
  cmps(c,0,(int32_t)c->r[3],0); // 801B7CE4
  if (crb(c,2)) { goto L_801B7D20; } // 801B7CE8
  c->r[0]=c->r[3]+0x000000FFu; // 801B7CEC
  c->r[3]=0u+0x00000000u; // 801B7CF0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801B7CF4
  W8(c->r[29]+0x00001848u,c->r[3]); // 801B7CF8
  cmpu(c,0,c->r[0],0x00000001u); // 801B7CFC
  if (crb(c,1)) { goto L_801B7D20; } // 801B7D00
  c->r[12]=R32(c->r[29]+0x000016B0u); // 801B7D04
  cmps(c,0,(int32_t)c->r[12],0); // 801B7D08
  if (crb(c,2)) { goto L_801B7D20; } // 801B7D0C
  W8(c->r[1]+0x00000009u,c->r[3]); // 801B7D10
  c->r[3]=c->r[1]+0x00000009u; // 801B7D14
  c->ctr=c->r[12]; // 801B7D18
  if (true) { c->lr=0x801B7D20u; dispatch(c,c->ctr); } // 801B7D1C
L_801B7D20:;
  c->r[0]=R8(c->r[29]+0x000016AEu); // 801B7D20
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B7D24
  if (crb(c,2)) { goto L_801B7D70; } // 801B7D28
  c->r[3]=c->r[29]+0x00001680u; // 801B7D2C
  c->lr=0x801B7D34u; f_801AD15C(c); // 801B7D30
  c->r[30]=0u+0x00000000u; // 801B7D34
  c->r[3]=c->r[29]+0x000016A8u; // 801B7D38
  W8(c->r[29]+0x000016AEu,c->r[30]); // 801B7D3C
  c->r[4]=0u+0x00000000u; // 801B7D40
  c->r[5]=0u+0x00000006u; // 801B7D44
  c->lr=0x801B7D4Cu; f_80004688(c); // 801B7D48
  c->r[12]=R32(c->r[29]+0x0000167Cu); // 801B7D4C
  cmps(c,0,(int32_t)c->r[12],0); // 801B7D50
  if (crb(c,2)) { goto L_801B7D70; } // 801B7D54
  c->r[0]=0u+0x0000000Cu; // 801B7D58
  c->r[3]=c->r[1]+0x0000000Cu; // 801B7D5C
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801B7D60
  c->ctr=c->r[12]; // 801B7D64
  if (true) { c->lr=0x801B7D6Cu; dispatch(c,c->ctr); } // 801B7D68
  W32(c->r[29]+0x0000167Cu,c->r[30]); // 801B7D6C
L_801B7D70:;
  c->r[0]=R8(c->r[29]+0x00001844u); // 801B7D70
  cmps(c,0,(int32_t)c->r[0],0); // 801B7D74
  if (crb(c,2)) { goto L_801B7DA4; } // 801B7D78
  c->r[12]=R32(c->r[29]+0x000016B8u); // 801B7D7C
  c->r[0]=0u+0x00000000u; // 801B7D80
  W8(c->r[29]+0x00001844u,c->r[0]); // 801B7D84
  cmps(c,0,(int32_t)c->r[12],0); // 801B7D88
  if (crb(c,2)) { goto L_801B7DA4; } // 801B7D8C
  c->r[0]=0u+0x0000000Cu; // 801B7D90
  c->r[3]=c->r[1]+0x00000008u; // 801B7D94
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B7D98
  c->ctr=c->r[12]; // 801B7D9C
  if (true) { c->lr=0x801B7DA4u; dispatch(c,c->ctr); } // 801B7DA0
L_801B7DA4:;
  c->r[30]=0u+0x00000000u; // 801B7DA4
  c->r[31]=0u+0x803D0000u; // 801B7DA8
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B7DAC
  W8(c->r[29]+0x00001847u,c->r[30]); // 801B7DB0
  c->r[28]=0u+0x00000000u; // 801B7DB4
  W8(c->r[29]+0x00001845u,c->r[30]); // 801B7DB8
  c->r[27]=c->r[31]+0x000016E4u; // 801B7DBC
  W32(c->r[29]+0x000016B4u,c->r[30]); // 801B7DC0
L_801B7DC4:;
  c->r[0]=R8(c->r[27]+0x0000001Au); // 801B7DC4
  cmps(c,0,(int32_t)c->r[0],0); // 801B7DC8
  if (crb(c,2)) { goto L_801B7DF0; } // 801B7DCC
  W8(c->r[27]+0x0000001Au,c->r[30]); // 801B7DD0
  c->r[12]=R32(c->r[31]+0x000016BCu); // 801B7DD4
  cmps(c,0,(int32_t)c->r[12],0); // 801B7DD8
  if (crb(c,2)) { goto L_801B7DF0; } // 801B7DDC
  c->r[3]=c->r[27]+0x00000008u; // 801B7DE0
  c->r[4]=0u+0x00000000u; // 801B7DE4
  c->ctr=c->r[12]; // 801B7DE8
  if (true) { c->lr=0x801B7DF0u; dispatch(c,c->ctr); } // 801B7DEC
L_801B7DF0:;
  c->r[28]=c->r[28]+0x00000001u; // 801B7DF0
  c->r[27]=c->r[27]+0x0000001Cu; // 801B7DF4
  cmpu(c,0,c->r[28],0x0000000Cu); // 801B7DF8
  if (crb(c,0)) { IRQCHK(c); goto L_801B7DC4; } // 801B7DFC
  c->r[31]=0u+0x803D0000u; // 801B7E00
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B7E04
  c->r[3]=R32(c->r[31]+0x000016DCu); // 801B7E08
  cmps(c,0,(int32_t)c->r[3],0); // 801B7E0C
  if (crb(c,2)) { goto L_801B7E20; } // 801B7E10
  c->lr=0x801B7E18u; f_801AA228(c); // 801B7E14
  c->r[0]=0u+0x00000000u; // 801B7E18
  W32(c->r[31]+0x000016DCu,c->r[0]); // 801B7E1C
L_801B7E20:;
  c->r[0]=0u+0x00000000u; // 801B7E20
  c->r[11]=c->r[1]+0x00000120u; // 801B7E24
  W16(c->r[31]+0x000016E0u,c->r[0]); // 801B7E28
  W16(c->r[31]+0x000016E2u,c->r[0]); // 801B7E2C
  W16(c->r[29]+0x00001698u,c->r[0]); // 801B7E30
  W16(c->r[29]+0x0000169Au,c->r[0]); // 801B7E34
  W16(c->r[29]+0x000016A6u,c->r[0]); // 801B7E38
  W16(c->r[29]+0x000016A4u,c->r[0]); // 801B7E3C
  c->lr=0x801B7E44u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B7E40
  c->r[0]=R32(c->r[1]+0x00000124u); // 801B7E44
  c->lr=c->r[0]; // 801B7E48
  c->r[1]=c->r[1]+0x00000120u; // 801B7E4C
  return; // 801B7E50
}

// fn_801B7E54
void f_801B7E54(Ctx* __restrict c) {
  return; // 801B7E54
}

// btm_inq_find_bdaddr
void f_801B7E58(Ctx* __restrict c) {
  trace_call(0x801B7E58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7E58
  c->r[0]=c->lr; // 801B7E5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7E60
  c->r[11]=c->r[1]+0x00000020u; // 801B7E64
  c->lr=0x801B7E6Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B7E68
  c->r[31]=0u+0x803D0000u; // 801B7E6C
  c->r[27]=c->r[3]|c->r[3]; // 801B7E70
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B7E74
  c->r[0]=R8(c->r[31]+0x00001848u); // 801B7E78
  c->r[29]=R32(c->r[31]+0x000016DCu); // 801B7E7C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B7E80
  if (!crb(c,2)) { goto L_801B7E90; } // 801B7E84
  cmps(c,0,(int32_t)c->r[29],0); // 801B7E88
  if (!crb(c,2)) { goto L_801B7E98; } // 801B7E8C
L_801B7E90:;
  c->r[3]=0u+0x00000000u; // 801B7E90
  goto L_801B7F1C; // 801B7E94
L_801B7E98:;
  c->r[30]=R16(c->r[31]+0x000016E0u); // 801B7E98
  c->r[28]=0u+0x00000000u; // 801B7E9C
  goto L_801B7EDC; // 801B7EA0
L_801B7EA4:;
  c->r[4]=c->r[27]|c->r[27]; // 801B7EA4
  c->r[3]=c->r[29]+0x00000004u; // 801B7EA8
  c->r[5]=0u+0x00000006u; // 801B7EAC
  c->lr=0x801B7EB4u; f_8018C170(c); // 801B7EB0
  cmps(c,0,(int32_t)c->r[3],0); // 801B7EB4
  if (!crb(c,2)) { goto L_801B7ED4; } // 801B7EB8
  c->r[3]=R32(c->r[29]+0x00000000u); // 801B7EBC
  c->r[0]=R32(c->r[31]+0x000016C0u); // 801B7EC0
  cmpu(c,0,c->r[3],c->r[0]); // 801B7EC4
  if (!crb(c,2)) { goto L_801B7ED4; } // 801B7EC8
  c->r[3]=0u+0x00000001u; // 801B7ECC
  goto L_801B7F1C; // 801B7ED0
L_801B7ED4:;
  c->r[28]=c->r[28]+0x00000001u; // 801B7ED4
  c->r[29]=c->r[29]+0x0000000Cu; // 801B7ED8
L_801B7EDC:;
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 801B7EDC
  cmpu(c,0,c->r[3],c->r[30]); // 801B7EE0
  if (crb(c,0)) { IRQCHK(c); goto L_801B7EA4; } // 801B7EE4
  c->r[0]=R16(c->r[31]+0x000016E2u); // 801B7EE8
  cmpu(c,0,c->r[3],c->r[0]); // 801B7EEC
  if (!crb(c,0)) { goto L_801B7F18; } // 801B7EF0
  c->r[0]=R32(c->r[31]+0x000016C0u); // 801B7EF4
  c->r[4]=c->r[27]|c->r[27]; // 801B7EF8
  c->r[3]=c->r[29]+0x00000004u; // 801B7EFC
  c->r[5]=0u+0x00000006u; // 801B7F00
  W32(c->r[29]+0x00000000u,c->r[0]); // 801B7F04
  c->lr=0x801B7F0Cu; f_80004338(c); // 801B7F08
  c->r[3]=R16(c->r[31]+0x000016E0u); // 801B7F0C
  c->r[0]=c->r[3]+0x00000001u; // 801B7F10
  W16(c->r[31]+0x000016E0u,c->r[0]); // 801B7F14
L_801B7F18:;
  c->r[3]=0u+0x00000000u; // 801B7F18
L_801B7F1C:;
  c->r[11]=c->r[1]+0x00000020u; // 801B7F1C
  c->lr=0x801B7F24u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B7F20
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B7F24
  c->lr=c->r[0]; // 801B7F28
  c->r[1]=c->r[1]+0x00000020u; // 801B7F2C
  return; // 801B7F30
}

// btm_inq_db_new
void f_801B7F34(Ctx* __restrict c) {
  trace_call(0x801B7F34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7F34
  c->r[0]=c->lr; // 801B7F38
  c->r[4]=0u+0x803D0000u; // 801B7F3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7F40
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B7F44
  c->r[0]=0u+0x0000000Cu; // 801B7F48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B7F4C
  c->r[31]=c->r[4]+0x000016E4u; // 801B7F50
  c->r[4]=0u+0xFFFFFFFFu; // 801B7F54
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B7F58
  c->r[30]=c->r[31]|c->r[31]; // 801B7F5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B7F60
  c->r[29]=c->r[3]|c->r[3]; // 801B7F64
  c->r[3]=0u+0x00000000u; // 801B7F68
  c->ctr=c->r[0]; // 801B7F6C
L_801B7F70:;
  c->r[0]=R8(c->r[31]+0x0000001Au); // 801B7F70
  cmps(c,0,(int32_t)c->r[0],0); // 801B7F74
  if (!crb(c,2)) { goto L_801B7FAC; } // 801B7F78
  c->r[3]=c->r[31]|c->r[31]; // 801B7F7C
  c->r[4]=0u+0x00000000u; // 801B7F80
  c->r[5]=0u+0x0000001Cu; // 801B7F84
  c->lr=0x801B7F8Cu; f_80004688(c); // 801B7F88
  c->r[4]=c->r[29]|c->r[29]; // 801B7F8C
  c->r[3]=c->r[31]+0x0000000Au; // 801B7F90
  c->r[5]=0u+0x00000006u; // 801B7F94
  c->lr=0x801B7F9Cu; f_80004338(c); // 801B7F98
  c->r[0]=0u+0x00000001u; // 801B7F9C
  c->r[3]=c->r[31]|c->r[31]; // 801B7FA0
  W8(c->r[31]+0x0000001Au,c->r[0]); // 801B7FA4
  goto L_801B801C; // 801B7FA8
L_801B7FAC:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B7FAC
  cmpu(c,0,c->r[0],c->r[4]); // 801B7FB0
  if (!crb(c,0)) { goto L_801B7FC0; } // 801B7FB4
  c->r[30]=c->r[31]|c->r[31]; // 801B7FB8
  c->r[4]=c->r[0]|c->r[0]; // 801B7FBC
L_801B7FC0:;
  c->r[3]=c->r[3]+0x00000001u; // 801B7FC0
  c->r[31]=c->r[31]+0x0000001Cu; // 801B7FC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B7F70; } // 801B7FC8
  c->r[3]=0u+0x803D0000u; // 801B7FCC
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B7FD0
  c->r[12]=R32(c->r[3]+0x000016BCu); // 801B7FD4
  cmps(c,0,(int32_t)c->r[12],0); // 801B7FD8
  if (crb(c,2)) { goto L_801B7FF0; } // 801B7FDC
  c->r[3]=c->r[30]+0x00000008u; // 801B7FE0
  c->r[4]=0u+0x00000000u; // 801B7FE4
  c->ctr=c->r[12]; // 801B7FE8
  if (true) { c->lr=0x801B7FF0u; dispatch(c,c->ctr); } // 801B7FEC
L_801B7FF0:;
  c->r[3]=c->r[30]|c->r[30]; // 801B7FF0
  c->r[4]=0u+0x00000000u; // 801B7FF4
  c->r[5]=0u+0x0000001Cu; // 801B7FF8
  c->lr=0x801B8000u; f_80004688(c); // 801B7FFC
  c->r[4]=c->r[29]|c->r[29]; // 801B8000
  c->r[3]=c->r[30]+0x0000000Au; // 801B8004
  c->r[5]=0u+0x00000006u; // 801B8008
  c->lr=0x801B8010u; f_80004338(c); // 801B800C
  c->r[0]=0u+0x00000001u; // 801B8010
  c->r[3]=c->r[30]|c->r[30]; // 801B8014
  W8(c->r[30]+0x0000001Au,c->r[0]); // 801B8018
L_801B801C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B801C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B8020
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B8024
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B8028
  c->lr=c->r[0]; // 801B802C
  c->r[1]=c->r[1]+0x00000020u; // 801B8030
  return; // 801B8034
}

// btm_set_inq_event_filter
void f_801B8038(Ctx* __restrict c) {
  trace_call(0x801B8038u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8038
  c->r[0]=c->lr; // 801B803C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B8040
  c->r[11]=c->r[1]+0x00000030u; // 801B8044
  c->lr=0x801B804Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B8048
  c->r[27]=c->r[3]|c->r[3]; // 801B804C
  c->r[28]=c->r[4]|c->r[4]; // 801B8050
  c->r[29]=c->r[1]+0x00000008u; // 801B8054
  c->r[30]=0u+0x00000006u; // 801B8058
  c->r[3]=0u+0x00000002u; // 801B805C
  c->lr=0x801B8064u; f_801AA140(c); // 801B8060
  cmps(c,0,(int32_t)c->r[3],0); // 801B8064
  c->r[31]=c->r[3]|c->r[3]; // 801B8068
  if (crb(c,2)) { goto L_801B8100; } // 801B806C
  cmps(c,0,(int32_t)c->r[27],1); // 801B8070
  if (crb(c,2)) { goto L_801B8094; } // 801B8074
  if (!crb(c,0)) { goto L_801B8088; } // 801B8078
  cmps(c,0,(int32_t)c->r[27],0); // 801B807C
  if (!crb(c,0)) { goto L_801B80C0; } // 801B8080
  goto L_801B80C8; // 801B8084
L_801B8088:;
  cmps(c,0,(int32_t)c->r[27],3); // 801B8088
  if (!crb(c,0)) { goto L_801B80C8; } // 801B808C
  goto L_801B80B8; // 801B8090
L_801B8094:;
  c->r[3]=c->r[29]|c->r[29]; // 801B8094
  c->r[4]=c->r[28]|c->r[28]; // 801B8098
  c->r[5]=0u+0x00000003u; // 801B809C
  c->lr=0x801B80A4u; f_80004338(c); // 801B80A0
  c->r[3]=c->r[1]+0x0000000Bu; // 801B80A4
  c->r[4]=c->r[28]+0x00000003u; // 801B80A8
  c->r[5]=0u+0x00000003u; // 801B80AC
  c->lr=0x801B80B4u; f_80004338(c); // 801B80B0
  goto L_801B80D0; // 801B80B4
L_801B80B8:;
  c->r[29]=c->r[28]|c->r[28]; // 801B80B8
  goto L_801B80D0; // 801B80BC
L_801B80C0:;
  c->r[30]=0u+0x00000000u; // 801B80C0
  goto L_801B80D0; // 801B80C4
L_801B80C8:;
  c->r[3]=0u+0x00000005u; // 801B80C8
  goto L_801B8104; // 801B80CC
L_801B80D0:;
  c->r[4]=0u+0x803D0000u; // 801B80D0
  c->r[0]=0u+0x00000001u; // 801B80D4
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B80D8
  c->r[3]=c->r[31]|c->r[31]; // 801B80DC
  W8(c->r[4]+0x00001844u,c->r[0]); // 801B80E0
  c->r[5]=c->r[27]|c->r[27]; // 801B80E4
  c->r[6]=c->r[29]|c->r[29]; // 801B80E8
  c->r[7]=c->r[30]|c->r[30]; // 801B80EC
  c->r[4]=0u+0x00000001u; // 801B80F0
  c->lr=0x801B80F8u; f_801C0ED8(c); // 801B80F4
  c->r[3]=0u+0x00000001u; // 801B80F8
  goto L_801B8104; // 801B80FC
L_801B8100:;
  c->r[3]=0u+0x00000003u; // 801B8100
L_801B8104:;
  c->r[11]=c->r[1]+0x00000030u; // 801B8104
  c->lr=0x801B810Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B8108
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B810C
  c->lr=c->r[0]; // 801B8110
  c->r[1]=c->r[1]+0x00000030u; // 801B8114
  return; // 801B8118
}

// btm_event_filter_complete
void f_801B811C(Ctx* __restrict c) {
  trace_call(0x801B811Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B811C
  c->r[0]=c->lr; // 801B8120
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B8124
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B8128
  c->r[31]=0u+0x803D0000u; // 801B812C
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B8130
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B8134
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B8138
  c->r[4]=R8(c->r[31]+0x00001845u); // 801B813C
  c->r[29]=R32(c->r[31]+0x000016B8u); // 801B8140
  cmps(c,0,(int32_t)c->r[4],0); // 801B8144
  if (crb(c,2)) { goto L_801B8158; } // 801B8148
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801B814C
  W8(c->r[31]+0x00001845u,c->r[0]); // 801B8150
  goto L_801B8320; // 801B8154
L_801B8158:;
  c->r[0]=R8(c->r[31]+0x00001844u); // 801B8158
  cmpu(c,0,c->r[0],0x00000001u); // 801B815C
  if (!crb(c,2)) { goto L_801B8320; } // 801B8160
  c->r[5]=R8(c->r[3]+0x00000000u); // 801B8164
  cmps(c,0,(int32_t)c->r[5],0); // 801B8168
  if (crb(c,2)) { goto L_801B819C; } // 801B816C
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B8170
  cmpu(c,0,c->r[0],0x00000002u); // 801B8174
  if (crb(c,0)) { goto L_801B8190; } // 801B8178
  c->r[3]=0u+0x000D0000u; // 801B817C
  c->r[4]=0u+0x80330000u; // 801B8180
  c->r[3]=c->r[3]+0x00000001u; // 801B8184
  c->r[4]=c->r[4]+0x00002B80u; // 801B8188
  c->lr=0x801B8190u; f_801ACB38(c); // 801B818C
L_801B8190:;
  c->r[0]=0u+0x0000000Au; // 801B8190
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B8194
  goto L_801B81A4; // 801B8198
L_801B819C:;
  c->r[0]=0u+0x00000000u; // 801B819C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B81A0
L_801B81A4:;
  c->r[3]=R8(c->r[31]+0x00001847u); // 801B81A4
  cmps(c,0,(int32_t)c->r[3],0); // 801B81A8
  if (!crb(c,2)) { goto L_801B81D4; } // 801B81AC
  c->r[0]=0u+0x00000000u; // 801B81B0
  cmps(c,0,(int32_t)c->r[29],0); // 801B81B4
  W8(c->r[31]+0x00001844u,c->r[0]); // 801B81B8
  if (crb(c,2)) { goto L_801B8320; } // 801B81BC
  c->r[12]=c->r[29]|c->r[29]; // 801B81C0
  c->r[3]=c->r[1]+0x00000008u; // 801B81C4
  c->ctr=c->r[12]; // 801B81C8
  if (true) { c->lr=0x801B81D0u; dispatch(c,c->ctr); } // 801B81CC
  goto L_801B8320; // 801B81D0
L_801B81D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B81D4
  if (crb(c,2)) { goto L_801B81F8; } // 801B81D8
  c->r[3]=0u+0x0000000Au; // 801B81DC
  c->lr=0x801B81E4u; f_801B85B4(c); // 801B81E0
  c->r[0]=0u+0x00000000u; // 801B81E4
  W8(c->r[31]+0x00001844u,c->r[0]); // 801B81E8
  W8(c->r[31]+0x00001848u,c->r[0]); // 801B81EC
  W8(c->r[31]+0x00001847u,c->r[0]); // 801B81F0
  goto L_801B8320; // 801B81F4
L_801B81F8:;
  cmpu(c,0,c->r[3],0x00000001u); // 801B81F8
  if (!crb(c,2)) { goto L_801B823C; } // 801B81FC
  c->r[3]=R8(c->r[31]+0x00001837u); // 801B8200
  c->r[4]=c->r[31]+0x00001838u; // 801B8204
  c->lr=0x801B820Cu; f_801B8038(c); // 801B8208
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B820C
  W8(c->r[1]+0x00000008u,c->r[3]); // 801B8210
  cmpu(c,0,c->r[0],0x00000001u); // 801B8214
  if (!crb(c,2)) { goto L_801B8228; } // 801B8218
  c->r[0]=0u+0x00000002u; // 801B821C
  W8(c->r[31]+0x00001847u,c->r[0]); // 801B8220
  goto L_801B8320; // 801B8224
L_801B8228:;
  c->r[0]=0u+0x00000000u; // 801B8228
  c->r[3]=0u+0x0000000Au; // 801B822C
  W8(c->r[31]+0x00001844u,c->r[0]); // 801B8230
  c->lr=0x801B8238u; f_801B85B4(c); // 801B8234
  goto L_801B8320; // 801B8238
L_801B823C:;
  c->r[4]=R8(c->r[31]+0x00001836u); // 801B823C
  c->r[0]=0u+0x00000003u; // 801B8240
  c->r[3]=0u+0x00000000u; // 801B8244
  W8(c->r[31]+0x00001847u,c->r[0]); // 801B8248
  cmpu(c,0,c->r[4],0x0000000Cu); // 801B824C
  c->r[0]=0u+0x0000000Cu; // 801B8250
  W8(c->r[31]+0x00001844u,c->r[3]); // 801B8254
  if (crb(c,1)) { goto L_801B8260; } // 801B8258
  c->r[0]=c->r[4]|c->r[4]; // 801B825C
L_801B8260:;
  c->r[3]=R8(c->r[31]+0x00001848u); // 801B8260
  c->r[29]=c->r[2]+0xFFFF9508u; // 801B8264
  W8(c->r[31]+0x00001836u,c->r[0]); // 801B8268
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801B826C
  if (crb(c,2)) { goto L_801B8278; } // 801B8270
  c->r[29]=c->r[2]+0xFFFF950Cu; // 801B8274
L_801B8278:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801B8278
  if (crb(c,2)) { goto L_801B82AC; } // 801B827C
  c->r[3]=R16(c->r[31]+0x00001842u); // 801B8280
  c->r[5]=c->r[29]|c->r[29]; // 801B8284
  c->r[4]=R16(c->r[31]+0x00001840u); // 801B8288
  c->r[6]=R8(c->r[31]+0x00001835u); // 801B828C
  c->r[7]=R8(c->r[31]+0x00001836u); // 801B8290
  c->lr=0x801B8298u; f_801BFB00(c); // 801B8294
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B8298
  if (!crb(c,2)) { goto L_801B8320; } // 801B829C
  c->r[3]=0u+0x00000003u; // 801B82A0
  c->lr=0x801B82A8u; f_801B85B4(c); // 801B82A4
  goto L_801B8320; // 801B82A8
L_801B82AC:;
  c->r[30]=0u+0x803D0000u; // 801B82AC
  c->r[30]=c->r[30]+0xFFFF8118u; // 801B82B0
  c->r[3]=R32(c->r[30]+0x000016DCu); // 801B82B4
  cmps(c,0,(int32_t)c->r[3],0); // 801B82B8
  if (crb(c,2)) { goto L_801B82CC; } // 801B82BC
  c->lr=0x801B82C4u; f_801AA228(c); // 801B82C0
  c->r[0]=0u+0x00000000u; // 801B82C4
  W32(c->r[30]+0x000016DCu,c->r[0]); // 801B82C8
L_801B82CC:;
  c->r[0]=0u+0x00000000u; // 801B82CC
  c->r[3]=0u+0x00000708u; // 801B82D0
  W16(c->r[30]+0x000016E0u,c->r[0]); // 801B82D4
  W16(c->r[30]+0x000016E2u,c->r[0]); // 801B82D8
  c->lr=0x801B82E0u; f_801A9FA0(c); // 801B82DC
  cmps(c,0,(int32_t)c->r[3],0); // 801B82E0
  W32(c->r[31]+0x000016DCu,c->r[3]); // 801B82E4
  if (crb(c,2)) { goto L_801B8300; } // 801B82E8
  c->r[0]=0u+0x00000096u; // 801B82EC
  c->r[4]=0u+0x00000000u; // 801B82F0
  W16(c->r[31]+0x000016E2u,c->r[0]); // 801B82F4
  c->r[5]=0u+0x00000708u; // 801B82F8
  c->lr=0x801B8300u; f_80004688(c); // 801B82FC
L_801B8300:;
  c->r[4]=R8(c->r[31]+0x00001835u); // 801B8300
  c->r[3]=c->r[29]|c->r[29]; // 801B8304
  c->r[5]=0u+0x00000000u; // 801B8308
  c->lr=0x801B8310u; f_801BF9F8(c); // 801B830C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B8310
  if (!crb(c,2)) { goto L_801B8320; } // 801B8314
  c->r[3]=0u+0x00000003u; // 801B8318
  c->lr=0x801B8320u; f_801B85B4(c); // 801B831C
L_801B8320:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B8320
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B8324
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B8328
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B832C
  c->lr=c->r[0]; // 801B8330
  c->r[1]=c->r[1]+0x00000020u; // 801B8334
  return; // 801B8338
}

// btm_process_inq_results
void f_801B833C(Ctx* __restrict c) {
  trace_call(0x801B833Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B833C
  c->r[0]=c->lr; // 801B8340
  W32(c->r[1]+0x00000064u,c->r[0]); // 801B8344
  c->r[11]=c->r[1]+0x00000060u; // 801B8348
  c->lr=0x801B8350u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B834C
  c->r[5]=0u+0x803D0000u; // 801B8350
  c->r[18]=c->r[4]|c->r[4]; // 801B8354
  c->r[27]=c->r[5]+0xFFFF8118u; // 801B8358
  c->r[23]=0u+0x00000001u; // 801B835C
  c->r[0]=R8(c->r[27]+0x00001848u); // 801B8360
  c->r[21]=0u+0x00000000u; // 801B8364
  c->r[22]=R32(c->r[27]+0x000016B4u); // 801B8368
  c->r[20]=0u+0x00000000u; // 801B836C
  cmps(c,0,(int32_t)c->r[0],0); // 801B8370
  if (crb(c,2)) { goto L_801B859C; } // 801B8374
  c->r[28]=R8(c->r[3]+0x00000000u); // 801B8378
  c->r[17]=c->r[3]+0x00000001u; // 801B837C
  c->r[26]=0u+0x00000000u; // 801B8380
  c->r[31]=0u+0x0000007Fu; // 801B8384
  c->r[16]=0u+0x00000000u; // 801B8388
  goto L_801B8590; // 801B838C
L_801B8390:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 801B8390
  cmps(c,0,(int32_t)c->r[18],0); // 801B8394
  W8(c->r[1]+0x00000011u,c->r[0]); // 801B8398
  c->r[0]=R8(c->r[17]+0x00000001u); // 801B839C
  W8(c->r[1]+0x00000010u,c->r[0]); // 801B83A0
  c->r[0]=R8(c->r[17]+0x00000002u); // 801B83A4
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801B83A8
  c->r[0]=R8(c->r[17]+0x00000003u); // 801B83AC
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801B83B0
  c->r[0]=R8(c->r[17]+0x00000004u); // 801B83B4
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801B83B8
  c->r[0]=R8(c->r[17]+0x00000005u); // 801B83BC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801B83C0
  c->r[29]=R8(c->r[17]+0x00000006u); // 801B83C4
  c->r[30]=R8(c->r[17]+0x00000007u); // 801B83C8
  c->r[17]=c->r[17]+0x00000008u; // 801B83CC
  if (!crb(c,2)) { goto L_801B83DC; } // 801B83D0
  c->r[21]=R8(c->r[17]+0x00000000u); // 801B83D4
  c->r[17]=c->r[17]+0x00000001u; // 801B83D8
L_801B83DC:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 801B83DC
  cmps(c,0,(int32_t)c->r[18],0); // 801B83E0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801B83E4
  c->r[0]=R8(c->r[17]+0x00000001u); // 801B83E8
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B83EC
  c->r[0]=R8(c->r[17]+0x00000002u); // 801B83F0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B83F4
  c->r[0]=R8(c->r[17]+0x00000004u); // 801B83F8
  c->r[3]=R8(c->r[17]+0x00000003u); // 801B83FC
  c->r[17]=c->r[17]+0x00000005u; // 801B8400
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B8404
  c->r[0]=c->r[3]+c->r[0]; // 801B8408
  c->r[19]=rotl(c->r[0],0)&0x0000FFFFu; // 801B840C
  if (crb(c,2)) { goto L_801B841C; } // 801B8410
  c->r[20]=R8(c->r[17]+0x00000000u); // 801B8414
  c->r[17]=c->r[17]+0x00000001u; // 801B8418
L_801B841C:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801B841C
  c->lr=0x801B8424u; f_801B7E58(c); // 801B8420
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B8424
  if (!crb(c,2)) { goto L_801B858C; } // 801B8428
  c->r[12]=R32(c->r[27]+0x0000184Cu); // 801B842C
  cmps(c,0,(int32_t)c->r[12],0); // 801B8430
  if (crb(c,2)) { goto L_801B8450; } // 801B8434
  c->r[3]=c->r[1]+0x0000000Cu; // 801B8438
  c->r[4]=c->r[1]+0x00000008u; // 801B843C
  c->ctr=c->r[12]; // 801B8440
  if (true) { c->lr=0x801B8448u; dispatch(c,c->ctr); } // 801B8444
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B8448
  if (crb(c,2)) { goto L_801B858C; } // 801B844C
L_801B8450:;
  c->r[25]=c->r[27]+0x000016E4u; // 801B8450
  c->r[24]=0u+0x00000000u; // 801B8454
L_801B8458:;
  c->r[0]=R8(c->r[25]+0x0000001Au); // 801B8458
  cmps(c,0,(int32_t)c->r[0],0); // 801B845C
  if (crb(c,2)) { goto L_801B8480; } // 801B8460
  c->r[3]=c->r[25]+0x0000000Au; // 801B8464
  c->r[4]=c->r[1]+0x0000000Cu; // 801B8468
  c->r[5]=0u+0x00000006u; // 801B846C
  c->lr=0x801B8474u; f_8018C170(c); // 801B8470
  cmps(c,0,(int32_t)c->r[3],0); // 801B8474
  if (!crb(c,2)) { goto L_801B8480; } // 801B8478
  goto L_801B8494; // 801B847C
L_801B8480:;
  c->r[24]=c->r[24]+0x00000001u; // 801B8480
  c->r[25]=c->r[25]+0x0000001Cu; // 801B8484
  cmpu(c,0,c->r[24],0x0000000Cu); // 801B8488
  if (crb(c,0)) { IRQCHK(c); goto L_801B8458; } // 801B848C
  c->r[25]=0u+0x00000000u; // 801B8490
L_801B8494:;
  cmps(c,0,(int32_t)c->r[25],0); // 801B8494
  if (!crb(c,2)) { goto L_801B84B0; } // 801B8498
  c->r[3]=c->r[1]+0x0000000Cu; // 801B849C
  c->lr=0x801B84A4u; f_801B7F34(c); // 801B84A0
  c->r[25]=c->r[3]|c->r[3]; // 801B84A4
  c->r[23]=0u+0x00000001u; // 801B84A8
  goto L_801B84C4; // 801B84AC
L_801B84B0:;
  c->r[3]=R32(c->r[25]+0x00000004u); // 801B84B0
  c->r[0]=R32(c->r[27]+0x000016C0u); // 801B84B4
  cmpu(c,0,c->r[3],c->r[0]); // 801B84B8
  if (!crb(c,2)) { goto L_801B84C4; } // 801B84BC
  c->r[23]=0u+0x00000000u; // 801B84C0
L_801B84C4:;
  cmpu(c,0,c->r[23],0x00000001u); // 801B84C4
  if (!crb(c,2)) { goto L_801B858C; } // 801B84C8
  W8(c->r[25]+0x00000013u,c->r[29]); // 801B84CC
  cmps(c,0,(int32_t)c->r[18],0); // 801B84D0
  c->r[5]=R8(c->r[1]+0x00000008u); // 801B84D4
  c->r[0]=c->r[19]|0x00008000u; // 801B84D8
  W8(c->r[25]+0x00000014u,c->r[30]); // 801B84DC
  c->r[24]=c->r[25]+0x00000008u; // 801B84E0
  c->r[4]=R8(c->r[1]+0x00000009u); // 801B84E4
  W8(c->r[25]+0x00000015u,c->r[21]); // 801B84E8
  c->r[3]=R8(c->r[1]+0x0000000Au); // 801B84EC
  W8(c->r[25]+0x00000010u,c->r[5]); // 801B84F0
  W8(c->r[25]+0x00000011u,c->r[4]); // 801B84F4
  W8(c->r[25]+0x00000012u,c->r[3]); // 801B84F8
  W16(c->r[25]+0x00000008u,c->r[0]); // 801B84FC
  if (crb(c,2)) { goto L_801B850C; } // 801B8500
  W8(c->r[24]+0x0000000Eu,c->r[20]); // 801B8504
  goto L_801B8510; // 801B8508
L_801B850C:;
  W8(c->r[24]+0x0000000Eu,c->r[31]); // 801B850C
L_801B8510:;
  c->lr=0x801B8514u; f_801AAFC0(c); // 801B8510
  W32(c->r[25]+0x00000000u,c->r[3]); // 801B8514
  c->r[0]=R32(c->r[27]+0x000016C0u); // 801B8518
  W32(c->r[25]+0x00000004u,c->r[0]); // 801B851C
  c->r[0]=R8(c->r[27]+0x00001848u); // 801B8520
  c->r[3]=R8(c->r[27]+0x0000183Fu); // 801B8524
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B8528
  c->r[0]=c->r[3]+0x00000001u; // 801B852C
  W8(c->r[27]+0x0000183Fu,c->r[0]); // 801B8530
  if (!crb(c,2)) { goto L_801B8554; } // 801B8534
  c->r[3]=R8(c->r[27]+0x00001836u); // 801B8538
  cmps(c,0,(int32_t)c->r[3],0); // 801B853C
  if (crb(c,2)) { goto L_801B8554; } // 801B8540
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801B8544
  cmpu(c,0,c->r[0],c->r[3]); // 801B8548
  if (!crb(c,2)) { goto L_801B8554; } // 801B854C
  c->lr=0x801B8554u; f_801BFAA0(c); // 801B8550
L_801B8554:;
  cmps(c,0,(int32_t)c->r[22],0); // 801B8554
  W8(c->r[25]+0x00000018u,c->r[16]); // 801B8558
  if (crb(c,2)) { goto L_801B8570; } // 801B855C
  c->r[12]=c->r[22]|c->r[22]; // 801B8560
  c->r[3]=c->r[24]|c->r[24]; // 801B8564
  c->ctr=c->r[12]; // 801B8568
  if (true) { c->lr=0x801B8570u; dispatch(c,c->ctr); } // 801B856C
L_801B8570:;
  c->r[12]=R32(c->r[27]+0x000016BCu); // 801B8570
  cmps(c,0,(int32_t)c->r[12],0); // 801B8574
  if (crb(c,2)) { goto L_801B858C; } // 801B8578
  c->r[3]=c->r[25]+0x00000008u; // 801B857C
  c->r[4]=0u+0x00000001u; // 801B8580
  c->ctr=c->r[12]; // 801B8584
  if (true) { c->lr=0x801B858Cu; dispatch(c,c->ctr); } // 801B8588
L_801B858C:;
  c->r[26]=c->r[26]+0x00000001u; // 801B858C
L_801B8590:;
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 801B8590
  cmpu(c,0,c->r[0],c->r[28]); // 801B8594
  if (crb(c,0)) { IRQCHK(c); goto L_801B8390; } // 801B8598
L_801B859C:;
  c->r[11]=c->r[1]+0x00000060u; // 801B859C
  c->lr=0x801B85A4u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B85A0
  c->r[0]=R32(c->r[1]+0x00000064u); // 801B85A4
  c->lr=c->r[0]; // 801B85A8
  c->r[1]=c->r[1]+0x00000060u; // 801B85AC
  return; // 801B85B0
}

// btm_process_inq_complete
void f_801B85B4(Ctx* __restrict c) {
  trace_call(0x801B85B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B85B4
  c->r[0]=c->lr; // 801B85B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B85BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B85C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B85C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B85C8
  c->r[29]=0u+0x803D0000u; // 801B85CC
  c->r[29]=c->r[29]+0xFFFF8118u; // 801B85D0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B85D4
  c->r[0]=R8(c->r[29]+0x00001848u); // 801B85D8
  c->r[28]=R32(c->r[29]+0x000016B0u); // 801B85DC
  cmps(c,0,(int32_t)c->r[0],0); // 801B85E0
  if (crb(c,2)) { goto L_801B8698; } // 801B85E4
  c->r[4]=R32(c->r[29]+0x000016C0u); // 801B85E8
  cmps(c,0,(int32_t)c->r[3],0); // 801B85EC
  c->r[3]=0u+0x0000000Au; // 801B85F0
  c->r[0]=c->r[4]+0x00000001u; // 801B85F4
  W32(c->r[29]+0x000016C0u,c->r[0]); // 801B85F8
  if (!crb(c,2)) { goto L_801B8604; } // 801B85FC
  c->r[3]=0u+0x00000000u; // 801B8600
L_801B8604:;
  c->r[0]=R8(c->r[29]+0x00001848u); // 801B8604
  W8(c->r[29]+0x0000183Eu,c->r[3]); // 801B8608
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B860C
  if (!crb(c,2)) { goto L_801B8698; } // 801B8610
  c->r[31]=0u+0x803D0000u; // 801B8614
  c->r[30]=0u+0x00000000u; // 801B8618
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B861C
  W32(c->r[29]+0x000016B4u,c->r[30]); // 801B8620
  c->r[3]=R32(c->r[31]+0x000016DCu); // 801B8624
  W8(c->r[29]+0x00001848u,c->r[30]); // 801B8628
  cmps(c,0,(int32_t)c->r[3],0); // 801B862C
  W8(c->r[29]+0x00001847u,c->r[30]); // 801B8630
  W32(c->r[29]+0x000016B0u,c->r[30]); // 801B8634
  if (crb(c,2)) { goto L_801B8644; } // 801B8638
  c->lr=0x801B8640u; f_801AA228(c); // 801B863C
  W32(c->r[31]+0x000016DCu,c->r[30]); // 801B8640
L_801B8644:;
  c->r[3]=0u+0x803D0000u; // 801B8644
  c->r[4]=0u+0x00000000u; // 801B8648
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B864C
  W16(c->r[31]+0x000016E0u,c->r[4]); // 801B8650
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B8654
  W16(c->r[31]+0x000016E2u,c->r[4]); // 801B8658
  cmpu(c,0,c->r[0],0x00000005u); // 801B865C
  if (crb(c,0)) { goto L_801B8680; } // 801B8660
  c->r[3]=0u+0x000D0000u; // 801B8664
  c->r[4]=0u+0x80330000u; // 801B8668
  c->r[5]=R8(c->r[29]+0x0000183Eu); // 801B866C
  c->r[3]=c->r[3]+0x00000004u; // 801B8670
  c->r[6]=R8(c->r[29]+0x0000183Fu); // 801B8674
  c->r[4]=c->r[4]+0x00002BBCu; // 801B8678
  c->lr=0x801B8680u; f_801ACB50(c); // 801B867C
L_801B8680:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B8680
  if (crb(c,2)) { goto L_801B8698; } // 801B8684
  c->r[12]=c->r[28]|c->r[28]; // 801B8688
  c->r[3]=c->r[29]+0x0000183Eu; // 801B868C
  c->ctr=c->r[12]; // 801B8690
  if (true) { c->lr=0x801B8698u; dispatch(c,c->ctr); } // 801B8694
L_801B8698:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B8698
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B869C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B86A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B86A4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B86A8
  c->lr=c->r[0]; // 801B86AC
  c->r[1]=c->r[1]+0x00000020u; // 801B86B0
  return; // 801B86B4
}

// btm_initiate_rem_name
void f_801B86B8(Ctx* __restrict c) {
  trace_call(0x801B86B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B86B8
  c->r[0]=c->lr; // 801B86BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B86C0
  c->r[11]=c->r[1]+0x00000030u; // 801B86C4
  c->lr=0x801B86CCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B86C8
  c->r[31]=0u+0x803D0000u; // 801B86CC
  c->r[23]=c->r[3]|c->r[3]; // 801B86D0
  c->r[24]=c->r[4]|c->r[4]; // 801B86D4
  c->r[25]=c->r[5]|c->r[5]; // 801B86D8
  c->r[26]=c->r[6]|c->r[6]; // 801B86DC
  c->r[27]=c->r[7]|c->r[7]; // 801B86E0
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B86E4
  c->r[30]=0u+0x00000001u; // 801B86E8
  c->r[29]=0u+0x00000001u; // 801B86EC
  c->r[28]=0u+0x00000001u; // 801B86F0
  c->lr=0x801B86F8u; f_801B56E0(c); // 801B86F4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B86F8
  if (!crb(c,2)) { goto L_801B8708; } // 801B86FC
  c->r[3]=0u+0x00000006u; // 801B8700
  goto L_801B87F0; // 801B8704
L_801B8708:;
  c->r[3]=R8(c->r[31]+0x000016AEu); // 801B8708
  c->r[0]=c->r[3]&c->r[25]; cr0(c,c->r[0]); // 801B870C
  if (!crb(c,2)) { goto L_801B87E8; } // 801B8710
  cmpu(c,0,c->r[25],0x00000001u); // 801B8714
  if (!crb(c,2)) { goto L_801B8754; } // 801B8718
  cmps(c,0,(int32_t)c->r[3],0); // 801B871C
  if (crb(c,2)) { goto L_801B874C; } // 801B8720
  c->r[3]=c->r[23]|c->r[23]; // 801B8724
  c->r[4]=c->r[31]+0x000016A8u; // 801B8728
  c->r[5]=0u+0x00000006u; // 801B872C
  c->lr=0x801B8734u; f_8018C170(c); // 801B8730
  cmps(c,0,(int32_t)c->r[3],0); // 801B8734
  if (!crb(c,2)) { goto L_801B8744; } // 801B8738
  c->r[30]=0u+0x00000000u; // 801B873C
  goto L_801B874C; // 801B8740
L_801B8744:;
  c->r[3]=0u+0x00000002u; // 801B8744
  goto L_801B87F0; // 801B8748
L_801B874C:;
  W32(c->r[31]+0x0000167Cu,c->r[27]); // 801B874C
  goto L_801B8764; // 801B8750
L_801B8754:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B8754
  if (crb(c,2)) { goto L_801B8764; } // 801B8758
  c->r[3]=0u+0x00000002u; // 801B875C
  goto L_801B87F0; // 801B8760
L_801B8764:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B8764
  if (crb(c,2)) { goto L_801B87C8; } // 801B8768
  c->r[4]=c->r[23]|c->r[23]; // 801B876C
  c->r[3]=c->r[31]+0x000016A8u; // 801B8770
  c->r[5]=0u+0x00000006u; // 801B8774
  c->lr=0x801B877Cu; f_80004338(c); // 801B8778
  c->r[5]=c->r[26]|c->r[26]; // 801B877C
  c->r[3]=c->r[31]+0x00001680u; // 801B8780
  c->r[4]=0u+0x0000000Au; // 801B8784
  c->lr=0x801B878Cu; f_801AD0EC(c); // 801B8788
  cmps(c,0,(int32_t)c->r[24],0); // 801B878C
  if (crb(c,2)) { goto L_801B87B0; } // 801B8790
  c->r[0]=R16(c->r[24]+0x00000000u); // 801B8794
  c->r[3]=c->r[23]|c->r[23]; // 801B8798
  c->r[4]=R8(c->r[24]+0x0000000Bu); // 801B879C
  c->r[5]=R8(c->r[24]+0x0000000Du); // 801B87A0
  c->r[6]=c->r[0]|0x00008000u; // 801B87A4
  c->lr=0x801B87ACu; f_801C04CC(c); // 801B87A8
  goto L_801B87C4; // 801B87AC
L_801B87B0:;
  c->r[3]=c->r[23]|c->r[23]; // 801B87B0
  c->r[4]=0u+0x00000001u; // 801B87B4
  c->r[5]=0u+0x00000000u; // 801B87B8
  c->r[6]=0u+0x00000000u; // 801B87BC
  c->lr=0x801B87C4u; f_801C04CC(c); // 801B87C0
L_801B87C4:;
  c->r[29]=c->r[3]|c->r[3]; // 801B87C4
L_801B87C8:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[0]); // 801B87C8
  if (crb(c,2)) { goto L_801B87E0; } // 801B87CC
  c->r[0]=R8(c->r[31]+0x000016AEu); // 801B87D0
  c->r[0]=c->r[0]|c->r[25]; // 801B87D4
  W8(c->r[31]+0x000016AEu,c->r[0]); // 801B87D8
  goto L_801B87EC; // 801B87DC
L_801B87E0:;
  c->r[28]=0u+0x00000003u; // 801B87E0
  goto L_801B87EC; // 801B87E4
L_801B87E8:;
  c->r[28]=0u+0x00000002u; // 801B87E8
L_801B87EC:;
  c->r[3]=c->r[28]|c->r[28]; // 801B87EC
L_801B87F0:;
  c->r[11]=c->r[1]+0x00000030u; // 801B87F0
  c->lr=0x801B87F8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B87F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B87F8
  c->lr=c->r[0]; // 801B87FC
  c->r[1]=c->r[1]+0x00000030u; // 801B8800
  return; // 801B8804
}

// btm_process_remote_name
void f_801B8808(Ctx* __restrict c) {
  trace_call(0x801B8808u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8808
  c->r[0]=c->lr; // 801B880C
  W32(c->r[1]+0x00000124u,c->r[0]); // 801B8810
  c->r[11]=c->r[1]+0x00000120u; // 801B8814
  c->lr=0x801B881Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B8818
  c->r[31]=0u+0x803D0000u; // 801B881C
  c->r[26]=c->r[4]|c->r[4]; // 801B8820
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B8824
  c->r[27]=c->r[5]|c->r[5]; // 801B8828
  c->r[30]=R32(c->r[31]+0x0000167Cu); // 801B882C
  c->r[28]=c->r[6]|c->r[6]; // 801B8830
  c->r[29]=R8(c->r[31]+0x000016AEu); // 801B8834
  c->r[3]=c->r[31]+0x00001680u; // 801B8838
  c->lr=0x801B8840u; f_801AD15C(c); // 801B883C
  c->r[3]=0u+0x00000000u; // 801B8840
  cmps(c,0,(int32_t)c->r[28],0); // 801B8844
  W8(c->r[31]+0x000016AEu,c->r[3]); // 801B8848
  if (!crb(c,2)) { goto L_801B8900; } // 801B884C
  cmpu(c,0,c->r[27],0x000000F8u); // 801B8850
  c->r[4]=c->r[1]+0x0000000Cu; // 801B8854
  c->r[3]=0u+0x000000F8u; // 801B8858
  if (!crb(c,0)) { goto L_801B8864; } // 801B885C
  c->r[3]=c->r[27]|c->r[27]; // 801B8860
L_801B8864:;
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[5]); // 801B8864
  c->r[0]=0u+0x00000000u; // 801B8868
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801B886C
  W16(c->r[1]+0x00000008u,c->r[0]); // 801B8870
  c->r[3]=c->r[5]|c->r[5]; // 801B8874
  if (crb(c,2)) { goto L_801B8910; } // 801B8878
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801B887C
  c->ctr=c->r[0]; // 801B8880
  if (crb(c,2)) { goto L_801B88E0; } // 801B8884
L_801B8888:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 801B8888
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 801B888C
  W8(c->r[4]+0x00000000u,c->r[0]); // 801B8890
  c->r[0]=R8(c->r[26]+0x00000001u); // 801B8894
  W8(c->r[4]+0x00000001u,c->r[0]); // 801B8898
  c->r[0]=R8(c->r[26]+0x00000002u); // 801B889C
  W8(c->r[4]+0x00000002u,c->r[0]); // 801B88A0
  c->r[0]=R8(c->r[26]+0x00000003u); // 801B88A4
  W8(c->r[4]+0x00000003u,c->r[0]); // 801B88A8
  c->r[0]=R8(c->r[26]+0x00000004u); // 801B88AC
  W8(c->r[4]+0x00000004u,c->r[0]); // 801B88B0
  c->r[0]=R8(c->r[26]+0x00000005u); // 801B88B4
  W8(c->r[4]+0x00000005u,c->r[0]); // 801B88B8
  c->r[0]=R8(c->r[26]+0x00000006u); // 801B88BC
  W8(c->r[4]+0x00000006u,c->r[0]); // 801B88C0
  c->r[0]=R8(c->r[26]+0x00000007u); // 801B88C4
  c->r[26]=c->r[26]+0x00000008u; // 801B88C8
  W8(c->r[4]+0x00000007u,c->r[0]); // 801B88CC
  c->r[4]=c->r[4]+0x00000008u; // 801B88D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B8888; } // 801B88D4
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 801B88D8
  if (crb(c,2)) { goto L_801B8910; } // 801B88DC
L_801B88E0:;
  c->ctr=c->r[3]; // 801B88E0
L_801B88E4:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 801B88E4
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B88E8
  c->r[26]=c->r[26]+0x00000001u; // 801B88EC
  W8(c->r[4]+0x00000000u,c->r[0]); // 801B88F0
  c->r[4]=c->r[4]+0x00000001u; // 801B88F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B88E4; } // 801B88F8
  goto L_801B8910; // 801B88FC
L_801B8900:;
  c->r[0]=0u+0x00000009u; // 801B8900
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801B8904
  W16(c->r[1]+0x00000008u,c->r[0]); // 801B8908
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801B890C
L_801B8910:;
  c->r[3]=c->r[31]+0x000016A8u; // 801B8910
  c->r[4]=0u+0x00000000u; // 801B8914
  c->r[5]=0u+0x00000006u; // 801B8918
  c->lr=0x801B8920u; f_80004688(c); // 801B891C
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801B8920
  if (crb(c,2)) { goto L_801B8948; } // 801B8924
  c->r[0]=0u+0x00000000u; // 801B8928
  cmps(c,0,(int32_t)c->r[30],0); // 801B892C
  W32(c->r[31]+0x0000167Cu,c->r[0]); // 801B8930
  if (crb(c,2)) { goto L_801B8948; } // 801B8934
  c->r[12]=c->r[30]|c->r[30]; // 801B8938
  c->r[3]=c->r[1]+0x00000008u; // 801B893C
  c->ctr=c->r[12]; // 801B8940
  if (true) { c->lr=0x801B8948u; dispatch(c,c->ctr); } // 801B8944
L_801B8948:;
  c->r[11]=c->r[1]+0x00000120u; // 801B8948
  c->lr=0x801B8950u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B894C
  c->r[0]=R32(c->r[1]+0x00000124u); // 801B8950
  c->lr=c->r[0]; // 801B8954
  c->r[1]=c->r[1]+0x00000120u; // 801B8958
  return; // 801B895C
}

// btm_inq_rmt_name_failed
void f_801B8960(Ctx* __restrict c) {
  trace_call(0x801B8960u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8960
  c->r[0]=c->lr; // 801B8964
  c->r[3]=0u+0x00000000u; // 801B8968
  c->r[4]=0u+0x00000000u; // 801B896C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B8970
  c->r[5]=0u+0x00000000u; // 801B8974
  c->r[6]=0u+0x0000001Fu; // 801B8978
  c->lr=0x801B8980u; f_801B8808(c); // 801B897C
  c->r[3]=0u+0x00000000u; // 801B8980
  c->r[4]=0u+0x00000000u; // 801B8984
  c->r[5]=0u+0x0000001Fu; // 801B8988
  c->lr=0x801B8990u; f_801BB864(c); // 801B898C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B8990
  c->lr=c->r[0]; // 801B8994
  c->r[1]=c->r[1]+0x00000010u; // 801B8998
  return; // 801B899C
}

// btm_init
void f_801B89A0(Ctx* __restrict c) {
  trace_call(0x801B89A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B89A0
  c->r[0]=c->lr; // 801B89A4
  c->r[4]=0u+0x00000000u; // 801B89A8
  c->r[5]=0u+0x000027C4u; // 801B89AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B89B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B89B4
  c->r[31]=0u+0x803D0000u; // 801B89B8
  c->r[3]=c->r[31]+0xFFFF8118u; // 801B89BC
  c->lr=0x801B89C4u; f_80004688(c); // 801B89C0
  c->r[3]=c->r[31]+0xFFFF8118u; // 801B89C4
  c->r[0]=0u+0x00000000u; // 801B89C8
  W8(c->r[3]+0x000027C0u,c->r[0]); // 801B89CC
  c->lr=0x801B89D4u; f_801B7E54(c); // 801B89D0
  c->lr=0x801B89D8u; f_801B303C(c); // 801B89D4
  c->r[3]=0u+0x00000002u; // 801B89D8
  c->lr=0x801B89E0u; f_801BB754(c); // 801B89DC
  c->lr=0x801B89E4u; f_801B9690(c); // 801B89E0
  c->lr=0x801B89E8u; f_801B544C(c); // 801B89E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B89E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B89EC
  c->lr=c->r[0]; // 801B89F0
  c->r[1]=c->r[1]+0x00000010u; // 801B89F4
  return; // 801B89F8
}

// BTM_PmRegister
void f_801B89FC(Ctx* __restrict c) {
  trace_call(0x801B89FCu);
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801B89FC
  if (crb(c,2)) { goto L_801B8A38; } // 801B8A00
  c->r[0]=R8(c->r[4]+0x00000000u); // 801B8A04
  cmpu(c,0,c->r[0],0x00000002u); // 801B8A08
  if (crb(c,0)) { goto L_801B8A18; } // 801B8A0C
  c->r[3]=0u+0x00000005u; // 801B8A10
  return; // 801B8A14
L_801B8A18:;
  c->r[3]=0u+0x803D0000u; // 801B8A18
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801B8A1C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B8A20
  c->r[5]=0u+0x00000000u; // 801B8A24
  c->r[4]=c->r[3]+c->r[0]; // 801B8A28
  W8(c->r[4]+0x00000558u,c->r[5]); // 801B8A2C
  c->r[3]=0u+0x00000000u; // 801B8A30
  return; // 801B8A34
L_801B8A38:;
  c->r[6]=0u+0x803D0000u; // 801B8A38
  c->r[0]=0u+0x00000002u; // 801B8A3C
  c->r[6]=c->r[6]+0xFFFF8118u; // 801B8A40
  c->r[7]=0u+0x00000000u; // 801B8A44
  c->ctr=c->r[0]; // 801B8A48
L_801B8A4C:;
  c->r[0]=R8(c->r[6]+0x00000558u); // 801B8A4C
  cmps(c,0,(int32_t)c->r[0],0); // 801B8A50
  if (!crb(c,2)) { goto L_801B8AA4; } // 801B8A54
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801B8A58
  if (crb(c,2)) { goto L_801B8A84; } // 801B8A5C
  cmps(c,0,(int32_t)c->r[5],0); // 801B8A60
  if (!crb(c,2)) { goto L_801B8A70; } // 801B8A64
  c->r[3]=0u+0x00000005u; // 801B8A68
  return; // 801B8A6C
L_801B8A70:;
  c->r[6]=0u+0x803D0000u; // 801B8A70
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801B8A74
  c->r[6]=c->r[6]+0xFFFF8118u; // 801B8A78
  c->r[6]=c->r[6]+c->r[0]; // 801B8A7C
  W32(c->r[6]+0x00000554u,c->r[5]); // 801B8A80
L_801B8A84:;
  c->r[5]=0u+0x803D0000u; // 801B8A84
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801B8A88
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B8A8C
  c->r[5]=c->r[5]+c->r[0]; // 801B8A90
  W8(c->r[5]+0x00000558u,c->r[3]); // 801B8A94
  c->r[3]=0u+0x00000000u; // 801B8A98
  W8(c->r[4]+0x00000000u,c->r[7]); // 801B8A9C
  return; // 801B8AA0
L_801B8AA4:;
  c->r[6]=c->r[6]+0x00000008u; // 801B8AA4
  c->r[7]=c->r[7]+0x00000001u; // 801B8AA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B8A4C; } // 801B8AAC
  c->r[3]=0u+0x00000003u; // 801B8AB0
  return; // 801B8AB4
}

// BTM_SetPowerMode
void f_801B8AB8(Ctx* __restrict c) {
  trace_call(0x801B8AB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8AB8
  c->r[0]=c->lr; // 801B8ABC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B8AC0
  c->r[11]=c->r[1]+0x00000020u; // 801B8AC4
  c->lr=0x801B8ACCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B8AC8
  cmpu(c,0,c->r[3],0x00000002u); // 801B8ACC
  c->r[27]=c->r[3]|c->r[3]; // 801B8AD0
  c->r[26]=c->r[4]|c->r[4]; // 801B8AD4
  c->r[28]=c->r[5]|c->r[5]; // 801B8AD8
  if (crb(c,0)) { goto L_801B8AE4; } // 801B8ADC
  c->r[27]=0u+0x00000080u; // 801B8AE0
L_801B8AE4:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B8AE4
  if (!crb(c,2)) { goto L_801B8AF4; } // 801B8AE8
  c->r[3]=0u+0x00000005u; // 801B8AEC
  goto L_801B8C70; // 801B8AF0
L_801B8AF4:;
  c->r[0]=R8(c->r[5]+0x00000008u); // 801B8AF4
  c->r[3]=0u+0x803D0000u; // 801B8AF8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B8AFC
  c->r[29]=0u+0x00000000u; // 801B8B00
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801B8B04
  c->r[30]=c->r[3]+0x00000034u; // 801B8B08
L_801B8B0C:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B8B0C
  cmps(c,0,(int32_t)c->r[0],0); // 801B8B10
  if (crb(c,2)) { goto L_801B8B30; } // 801B8B14
  c->r[4]=c->r[26]|c->r[26]; // 801B8B18
  c->r[3]=c->r[30]+0x00000008u; // 801B8B1C
  c->r[5]=0u+0x00000006u; // 801B8B20
  c->lr=0x801B8B28u; f_8018C170(c); // 801B8B24
  cmps(c,0,(int32_t)c->r[3],0); // 801B8B28
  if (crb(c,2)) { goto L_801B8B40; } // 801B8B2C
L_801B8B30:;
  c->r[29]=c->r[29]+0x00000001u; // 801B8B30
  c->r[30]=c->r[30]+0x0000011Cu; // 801B8B34
  cmpu(c,0,c->r[29],0x00000004u); // 801B8B38
  if (crb(c,0)) { IRQCHK(c); goto L_801B8B0C; } // 801B8B3C
L_801B8B40:;
  c->r[30]=rotl(c->r[29],0)&0x000000FFu; // 801B8B40
  cmps(c,0,(int32_t)c->r[30],4); // 801B8B44
  if (!crb(c,2)) { goto L_801B8B54; } // 801B8B48
  c->r[3]=0u+0x00000007u; // 801B8B4C
  goto L_801B8C70; // 801B8B50
L_801B8B54:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)34); // 801B8B54
  c->r[4]=0u+0x803D0000u; // 801B8B58
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[3]); // 801B8B5C
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B8B60
  c->r[4]=c->r[4]+c->r[0]; // 801B8B64
  c->r[29]=c->r[4]+0x000004CCu; // 801B8B68
  if (crb(c,2)) { goto L_801B8B9C; } // 801B8B6C
  c->r[26]=c->r[3]+0xFFFFFFFFu; // 801B8B70
  c->lr=0x801B8B78u; f_801B6570(c); // 801B8B74
  c->r[4]=c->r[2]+0xFFFF9510u; // 801B8B78
  c->r[5]=c->r[2]+0xFFFF9514u; // 801B8B7C
  c->r[0]=R8(c->r[4]+c->r[26]); // 801B8B80
  c->r[4]=R8(c->r[5]+c->r[26]); // 801B8B84
  c->r[0]=R8(c->r[3]+c->r[0]); // 801B8B88
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 801B8B8C
  if (!crb(c,2)) { goto L_801B8B9C; } // 801B8B90
  c->r[3]=0u+0x00000004u; // 801B8B94
  goto L_801B8C70; // 801B8B98
L_801B8B9C:;
  c->r[0]=R8(c->r[29]+0x00000020u); // 801B8B9C
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801B8BA0
  cmpu(c,0,c->r[3],c->r[0]); // 801B8BA4
  if (!crb(c,2)) { goto L_801B8BD8; } // 801B8BA8
  cmps(c,0,(int32_t)c->r[3],0); // 801B8BAC
  if (crb(c,2)) { goto L_801B8BD0; } // 801B8BB0
  c->r[3]=R16(c->r[29]+0x0000001Eu); // 801B8BB4
  c->r[0]=R16(c->r[28]+0x00000000u); // 801B8BB8
  cmpu(c,0,c->r[0],c->r[3]); // 801B8BBC
  if (crb(c,0)) { goto L_801B8BD8; } // 801B8BC0
  c->r[0]=R16(c->r[28]+0x00000002u); // 801B8BC4
  cmpu(c,0,c->r[0],c->r[3]); // 801B8BC8
  if (crb(c,1)) { goto L_801B8BD8; } // 801B8BCC
L_801B8BD0:;
  c->r[3]=0u+0x00000000u; // 801B8BD0
  goto L_801B8C70; // 801B8BD4
L_801B8BD8:;
  cmpu(c,0,c->r[27],0x00000080u); // 801B8BD8
  if (crb(c,2)) { goto L_801B8C30; } // 801B8BDC
  c->r[3]=0u+0x803D0000u; // 801B8BE0
  c->r[0]=rotl(c->r[27],3)&0x000007F8u; // 801B8BE4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B8BE8
  c->r[3]=c->r[3]+c->r[0]; // 801B8BEC
  c->r[0]=R8(c->r[3]+0x00000558u); // 801B8BF0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B8BF4
  if (crb(c,2)) { goto L_801B8C30; } // 801B8BF8
  c->r[4]=R16(c->r[28]+0x00000000u); // 801B8BFC
  c->r[5]=(uint32_t)((int32_t)c->r[27]*(int32_t)10); // 801B8C00
  c->r[3]=R16(c->r[28]+0x00000002u); // 801B8C04
  c->r[0]=0u+0x00000001u; // 801B8C08
  {uint32_t ea=c->r[5]+c->r[29]; W16(ea,c->r[4]); c->r[5]=ea;} // 801B8C0C
  W16(c->r[5]+0x00000002u,c->r[3]); // 801B8C10
  c->r[4]=R16(c->r[28]+0x00000004u); // 801B8C14
  c->r[3]=R16(c->r[28]+0x00000006u); // 801B8C18
  W16(c->r[5]+0x00000004u,c->r[4]); // 801B8C1C
  W16(c->r[5]+0x00000006u,c->r[3]); // 801B8C20
  c->r[3]=R16(c->r[28]+0x00000008u); // 801B8C24
  W16(c->r[5]+0x00000008u,c->r[3]); // 801B8C28
  W8(c->r[29]+0x00000021u,c->r[0]); // 801B8C2C
L_801B8C30:;
  c->r[0]=R8(c->r[29]+0x00000020u); // 801B8C30
  cmpu(c,0,c->r[0],0x00000001u); // 801B8C34
  if (crb(c,2)) { goto L_801B8C58; } // 801B8C38
  cmpu(c,0,c->r[0],0x00000004u); // 801B8C3C
  if (crb(c,2)) { goto L_801B8C58; } // 801B8C40
  c->r[3]=0u+0x803D0000u; // 801B8C44
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B8C48
  c->r[0]=R8(c->r[3]+0x00000564u); // 801B8C4C
  cmpu(c,0,c->r[0],0x00000004u); // 801B8C50
  if (crb(c,2)) { goto L_801B8C60; } // 801B8C54
L_801B8C58:;
  c->r[3]=0u+0x0000000Du; // 801B8C58
  goto L_801B8C70; // 801B8C5C
L_801B8C60:;
  c->r[3]=c->r[27]|c->r[27]; // 801B8C60
  c->r[4]=c->r[30]|c->r[30]; // 801B8C64
  c->r[5]=c->r[28]|c->r[28]; // 801B8C68
  c->lr=0x801B8C70u; f_801B9184(c); // 801B8C6C
L_801B8C70:;
  c->r[11]=c->r[1]+0x00000020u; // 801B8C70
  c->lr=0x801B8C78u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B8C74
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B8C78
  c->lr=c->r[0]; // 801B8C7C
  c->r[1]=c->r[1]+0x00000020u; // 801B8C80
  return; // 801B8C84
}

// BTM_ReadPowerMode
void f_801B8C88(Ctx* __restrict c) {
  trace_call(0x801B8C88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8C88
  c->r[0]=c->lr; // 801B8C8C
  c->r[5]=0u+0x803D0000u; // 801B8C90
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B8C94
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B8C98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B8C9C
  c->r[31]=0u+0x00000000u; // 801B8CA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B8CA4
  c->r[30]=c->r[5]+0x00000034u; // 801B8CA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B8CAC
  c->r[29]=c->r[4]|c->r[4]; // 801B8CB0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B8CB4
  c->r[28]=c->r[3]|c->r[3]; // 801B8CB8
L_801B8CBC:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B8CBC
  cmps(c,0,(int32_t)c->r[0],0); // 801B8CC0
  if (crb(c,2)) { goto L_801B8CE0; } // 801B8CC4
  c->r[4]=c->r[28]|c->r[28]; // 801B8CC8
  c->r[3]=c->r[30]+0x00000008u; // 801B8CCC
  c->r[5]=0u+0x00000006u; // 801B8CD0
  c->lr=0x801B8CD8u; f_8018C170(c); // 801B8CD4
  cmps(c,0,(int32_t)c->r[3],0); // 801B8CD8
  if (crb(c,2)) { goto L_801B8CF0; } // 801B8CDC
L_801B8CE0:;
  c->r[31]=c->r[31]+0x00000001u; // 801B8CE0
  c->r[30]=c->r[30]+0x0000011Cu; // 801B8CE4
  cmpu(c,0,c->r[31],0x00000004u); // 801B8CE8
  if (crb(c,0)) { IRQCHK(c); goto L_801B8CBC; } // 801B8CEC
L_801B8CF0:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801B8CF0
  cmps(c,0,(int32_t)c->r[0],4); // 801B8CF4
  if (!crb(c,2)) { goto L_801B8D04; } // 801B8CF8
  c->r[3]=0u+0x00000007u; // 801B8CFC
  goto L_801B8D20; // 801B8D00
L_801B8D04:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 801B8D04
  c->r[4]=0u+0x803D0000u; // 801B8D08
  c->r[3]=0u+0x00000000u; // 801B8D0C
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B8D10
  c->r[4]=c->r[4]+c->r[0]; // 801B8D14
  c->r[0]=R8(c->r[4]+0x000004ECu); // 801B8D18
  W8(c->r[29]+0x00000000u,c->r[0]); // 801B8D1C
L_801B8D20:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B8D20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B8D24
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B8D28
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B8D2C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B8D30
  c->lr=c->r[0]; // 801B8D34
  c->r[1]=c->r[1]+0x00000020u; // 801B8D38
  return; // 801B8D3C
}

// btm_pm_reset
void f_801B8D40(Ctx* __restrict c) {
  trace_call(0x801B8D40u);
  c->r[3]=0u+0x803D0000u; // 801B8D40
  c->r[12]=0u+0x00000000u; // 801B8D44
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B8D48
  c->r[0]=R8(c->r[3]+0x00000565u); // 801B8D4C
  cmpu(c,0,c->r[0],0x00000080u); // 801B8D50
  if (crb(c,2)) { goto L_801B8D70; } // 801B8D54
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801B8D58
  c->r[3]=c->r[3]+c->r[0]; // 801B8D5C
  c->r[0]=R8(c->r[3]+0x00000558u); // 801B8D60
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B8D64
  if (crb(c,2)) { goto L_801B8D70; } // 801B8D68
  c->r[12]=R32(c->r[3]+0x00000554u); // 801B8D6C
L_801B8D70:;
  c->r[3]=0u+0x803D0000u; // 801B8D70
  cmps(c,0,(int32_t)c->r[12],0); // 801B8D74
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B8D78
  c->r[0]=0u+0x00000000u; // 801B8D7C
  c->r[4]=0u+0x00000004u; // 801B8D80
  W8(c->r[3]+0x00000558u,c->r[0]); // 801B8D84
  W8(c->r[3]+0x00000564u,c->r[4]); // 801B8D88
  W8(c->r[3]+0x00000560u,c->r[0]); // 801B8D8C
  if (crb(c,2)) return; // 801B8D90
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)284); // 801B8D94
  c->r[4]=0u+0x00000005u; // 801B8D98
  c->r[5]=0u+0x0000000Cu; // 801B8D9C
  c->r[6]=0u+0x00000000u; // 801B8DA0
  c->r[3]=c->r[3]+c->r[0]; // 801B8DA4
  c->r[3]=c->r[3]+0x0000003Cu; // 801B8DA8
  c->ctr=c->r[12]; // 801B8DAC
  if (true) { dispatch(c,c->ctr); return; } // 801B8DB0
  return; // 801B8DB4
}

// btm_pm_sm_alloc
void f_801B8DB8(Ctx* __restrict c) {
  trace_call(0x801B8DB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8DB8
  c->r[0]=c->lr; // 801B8DBC
  c->r[4]=0u+0x00000000u; // 801B8DC0
  c->r[5]=0u+0x00000022u; // 801B8DC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B8DC8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)34); // 801B8DCC
  c->r[3]=0u+0x803D0000u; // 801B8DD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B8DD4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B8DD8
  c->r[3]=c->r[3]+c->r[0]; // 801B8DDC
  c->r[31]=c->r[3]+0x000004CCu; // 801B8DE0
  c->r[3]=c->r[31]|c->r[31]; // 801B8DE4
  c->lr=0x801B8DECu; f_80004688(c); // 801B8DE8
  c->r[0]=0u+0x00000000u; // 801B8DEC
  W8(c->r[31]+0x00000020u,c->r[0]); // 801B8DF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B8DF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B8DF8
  c->lr=c->r[0]; // 801B8DFC
  c->r[1]=c->r[1]+0x00000010u; // 801B8E00
  return; // 801B8E04
}

// btm_pm_compare_modes
void f_801B8E08(Ctx* __restrict c) {
  trace_call(0x801B8E08u);
  cmps(c,0,(int32_t)c->r[3],0); // 801B8E08
  if (!crb(c,2)) { goto L_801B8E40; } // 801B8E0C
  c->r[6]=R16(c->r[4]+0x00000000u); // 801B8E10
  c->r[3]=c->r[4]|c->r[4]; // 801B8E14
  c->r[0]=R16(c->r[4]+0x00000002u); // 801B8E18
  W16(c->r[5]+0x00000000u,c->r[6]); // 801B8E1C
  W16(c->r[5]+0x00000002u,c->r[0]); // 801B8E20
  c->r[6]=R16(c->r[4]+0x00000004u); // 801B8E24
  c->r[0]=R16(c->r[4]+0x00000006u); // 801B8E28
  W16(c->r[5]+0x00000004u,c->r[6]); // 801B8E2C
  W16(c->r[5]+0x00000006u,c->r[0]); // 801B8E30
  c->r[0]=R16(c->r[4]+0x00000008u); // 801B8E34
  W16(c->r[5]+0x00000008u,c->r[0]); // 801B8E38
  return; // 801B8E3C
L_801B8E40:;
  c->r[9]=R8(c->r[4]+0x00000008u); // 801B8E40
  cmps(c,0,(int32_t)c->r[9],0); // 801B8E44
  if (crb(c,2)) { goto L_801B8E58; } // 801B8E48
  c->r[8]=R8(c->r[3]+0x00000008u); // 801B8E4C
  cmps(c,0,(int32_t)c->r[8],0); // 801B8E50
  if (!crb(c,2)) { goto L_801B8E60; } // 801B8E54
L_801B8E58:;
  c->r[3]=0u+0x00000000u; // 801B8E58
  return; // 801B8E5C
L_801B8E60:;
  c->r[0]=rotl(c->r[8],0)&0x00000010u; cr0(c,c->r[0]); // 801B8E60
  if (crb(c,2)) { goto L_801B8EA4; } // 801B8E64
  c->r[4]=R16(c->r[3]+0x00000000u); // 801B8E68
  c->r[0]=R16(c->r[3]+0x00000002u); // 801B8E6C
  W16(c->r[5]+0x00000000u,c->r[4]); // 801B8E70
  W16(c->r[5]+0x00000002u,c->r[0]); // 801B8E74
  c->r[4]=R16(c->r[3]+0x00000004u); // 801B8E78
  c->r[0]=R16(c->r[3]+0x00000006u); // 801B8E7C
  W16(c->r[5]+0x00000004u,c->r[4]); // 801B8E80
  W16(c->r[5]+0x00000006u,c->r[0]); // 801B8E84
  c->r[0]=R16(c->r[3]+0x00000008u); // 801B8E88
  c->r[3]=c->r[5]|c->r[5]; // 801B8E8C
  W16(c->r[5]+0x00000008u,c->r[0]); // 801B8E90
  c->r[0]=R8(c->r[5]+0x00000008u); // 801B8E94
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801B8E98
  W8(c->r[5]+0x00000008u,c->r[0]); // 801B8E9C
  return; // 801B8EA0
L_801B8EA4:;
  c->r[0]=rotl(c->r[9],0)&0x00000010u; cr0(c,c->r[0]); // 801B8EA4
  if (crb(c,2)) { goto L_801B8EE8; } // 801B8EA8
  c->r[6]=R16(c->r[4]+0x00000000u); // 801B8EAC
  c->r[3]=c->r[5]|c->r[5]; // 801B8EB0
  c->r[0]=R16(c->r[4]+0x00000002u); // 801B8EB4
  W16(c->r[5]+0x00000000u,c->r[6]); // 801B8EB8
  W16(c->r[5]+0x00000002u,c->r[0]); // 801B8EBC
  c->r[6]=R16(c->r[4]+0x00000004u); // 801B8EC0
  c->r[0]=R16(c->r[4]+0x00000006u); // 801B8EC4
  W16(c->r[5]+0x00000004u,c->r[6]); // 801B8EC8
  W16(c->r[5]+0x00000006u,c->r[0]); // 801B8ECC
  c->r[0]=R16(c->r[4]+0x00000008u); // 801B8ED0
  W16(c->r[5]+0x00000008u,c->r[0]); // 801B8ED4
  c->r[0]=R8(c->r[5]+0x00000008u); // 801B8ED8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801B8EDC
  W8(c->r[5]+0x00000008u,c->r[0]); // 801B8EE0
  return; // 801B8EE4
L_801B8EE8:;
  c->r[7]=c->r[8]+0xFFFFFFFFu; // 801B8EE8
  c->r[6]=0u+0x802E0000u; // 801B8EEC
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801B8EF0
  c->r[0]=c->r[0]-c->r[7]; // 801B8EF4
  c->r[6]=c->r[6]+0x00001308u; // 801B8EF8
  c->r[7]=c->r[9]+c->r[0]; // 801B8EFC
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801B8F00
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801B8F04
  c->r[0]=R8(c->r[6]+c->r[0]); // 801B8F08
  cmps(c,0,(int32_t)c->r[0],2); // 801B8F0C
  if (crb(c,2)) { goto L_801B8F5C; } // 801B8F10
  if (!crb(c,0)) { goto L_801B8F24; } // 801B8F14
  cmps(c,0,(int32_t)c->r[0],1); // 801B8F18
  if (!crb(c,0)) { goto L_801B8F30; } // 801B8F1C
  goto L_801B901C; // 801B8F20
L_801B8F24:;
  cmps(c,0,(int32_t)c->r[0],4); // 801B8F24
  if (!crb(c,0)) { goto L_801B901C; } // 801B8F28
  goto L_801B8F8C; // 801B8F2C
L_801B8F30:;
  c->r[4]=R16(c->r[3]+0x00000000u); // 801B8F30
  c->r[0]=R16(c->r[3]+0x00000002u); // 801B8F34
  W16(c->r[5]+0x00000000u,c->r[4]); // 801B8F38
  W16(c->r[5]+0x00000002u,c->r[0]); // 801B8F3C
  c->r[4]=R16(c->r[3]+0x00000004u); // 801B8F40
  c->r[0]=R16(c->r[3]+0x00000006u); // 801B8F44
  W16(c->r[5]+0x00000004u,c->r[4]); // 801B8F48
  W16(c->r[5]+0x00000006u,c->r[0]); // 801B8F4C
  c->r[0]=R16(c->r[3]+0x00000008u); // 801B8F50
  W16(c->r[5]+0x00000008u,c->r[0]); // 801B8F54
  return; // 801B8F58
L_801B8F5C:;
  c->r[6]=R16(c->r[4]+0x00000000u); // 801B8F5C
  c->r[3]=c->r[4]|c->r[4]; // 801B8F60
  c->r[0]=R16(c->r[4]+0x00000002u); // 801B8F64
  W16(c->r[5]+0x00000000u,c->r[6]); // 801B8F68
  W16(c->r[5]+0x00000002u,c->r[0]); // 801B8F6C
  c->r[6]=R16(c->r[4]+0x00000004u); // 801B8F70
  c->r[0]=R16(c->r[4]+0x00000006u); // 801B8F74
  W16(c->r[5]+0x00000004u,c->r[6]); // 801B8F78
  W16(c->r[5]+0x00000006u,c->r[0]); // 801B8F7C
  c->r[0]=R16(c->r[4]+0x00000008u); // 801B8F80
  W16(c->r[5]+0x00000008u,c->r[0]); // 801B8F84
  return; // 801B8F88
L_801B8F8C:;
  W8(c->r[5]+0x00000008u,c->r[8]); // 801B8F8C
  c->r[6]=R16(c->r[4]+0x00000000u); // 801B8F90
  c->r[0]=R16(c->r[3]+0x00000000u); // 801B8F94
  cmpu(c,0,c->r[0],c->r[6]); // 801B8F98
  if (!crb(c,0)) { goto L_801B8FA4; } // 801B8F9C
  c->r[6]=c->r[0]|c->r[0]; // 801B8FA0
L_801B8FA4:;
  W16(c->r[5]+0x00000000u,c->r[6]); // 801B8FA4
  c->r[7]=R16(c->r[4]+0x00000002u); // 801B8FA8
  c->r[0]=R16(c->r[3]+0x00000002u); // 801B8FAC
  cmpu(c,0,c->r[0],c->r[7]); // 801B8FB0
  if (!crb(c,1)) { goto L_801B8FBC; } // 801B8FB4
  c->r[7]=c->r[0]|c->r[0]; // 801B8FB8
L_801B8FBC:;
  c->r[6]=R16(c->r[5]+0x00000000u); // 801B8FBC
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; // 801B8FC0
  W16(c->r[5]+0x00000002u,c->r[7]); // 801B8FC4
  cmpu(c,0,c->r[6],c->r[0]); // 801B8FC8
  if (!crb(c,0)) { goto L_801B8FD8; } // 801B8FCC
  c->r[3]=0u+0x00000000u; // 801B8FD0
  return; // 801B8FD4
L_801B8FD8:;
  c->r[0]=R8(c->r[5]+0x00000008u); // 801B8FD8
  cmpu(c,0,c->r[0],0x00000002u); // 801B8FDC
  if (!crb(c,2)) { goto L_801B9014; } // 801B8FE0
  c->r[6]=R16(c->r[4]+0x00000004u); // 801B8FE4
  c->r[0]=R16(c->r[3]+0x00000004u); // 801B8FE8
  cmpu(c,0,c->r[0],c->r[6]); // 801B8FEC
  if (!crb(c,1)) { goto L_801B8FF8; } // 801B8FF0
  c->r[6]=c->r[0]|c->r[0]; // 801B8FF4
L_801B8FF8:;
  W16(c->r[5]+0x00000004u,c->r[6]); // 801B8FF8
  c->r[4]=R16(c->r[4]+0x00000006u); // 801B8FFC
  c->r[0]=R16(c->r[3]+0x00000006u); // 801B9000
  cmpu(c,0,c->r[0],c->r[4]); // 801B9004
  if (!crb(c,1)) { goto L_801B9010; } // 801B9008
  c->r[4]=c->r[0]|c->r[0]; // 801B900C
L_801B9010:;
  W16(c->r[5]+0x00000006u,c->r[4]); // 801B9010
L_801B9014:;
  c->r[3]=c->r[5]|c->r[5]; // 801B9014
  return; // 801B9018
L_801B901C:;
  c->r[3]=0u+0x00000000u; // 801B901C
  return; // 801B9020
}

// btm_pm_get_set_mode
void f_801B9024(Ctx* __restrict c) {
  trace_call(0x801B9024u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9024
  c->r[0]=c->lr; // 801B9028
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B902C
  c->r[11]=c->r[1]+0x00000020u; // 801B9030
  c->lr=0x801B9038u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9034
  cmps(c,0,(int32_t)c->r[5],0); // 801B9038
  c->r[26]=c->r[3]|c->r[3]; // 801B903C
  c->r[27]=c->r[5]|c->r[5]; // 801B9040
  c->r[28]=c->r[6]|c->r[6]; // 801B9044
  c->r[7]=0u+0x00000000u; // 801B9048
  if (crb(c,2)) { goto L_801B9094; } // 801B904C
  c->r[0]=R8(c->r[5]+0x00000008u); // 801B9050
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801B9054
  if (crb(c,2)) { goto L_801B9094; } // 801B9058
  c->r[3]=R16(c->r[5]+0x00000000u); // 801B905C
  c->r[0]=R16(c->r[5]+0x00000002u); // 801B9060
  W16(c->r[6]+0x00000000u,c->r[3]); // 801B9064
  W16(c->r[6]+0x00000002u,c->r[0]); // 801B9068
  c->r[3]=R16(c->r[5]+0x00000004u); // 801B906C
  c->r[0]=R16(c->r[5]+0x00000006u); // 801B9070
  W16(c->r[6]+0x00000004u,c->r[3]); // 801B9074
  W16(c->r[6]+0x00000006u,c->r[0]); // 801B9078
  c->r[0]=R16(c->r[5]+0x00000008u); // 801B907C
  W16(c->r[6]+0x00000008u,c->r[0]); // 801B9080
  c->r[0]=R8(c->r[6]+0x00000008u); // 801B9084
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801B9088
  W8(c->r[6]+0x00000008u,c->r[3]); // 801B908C
  goto L_801B916C; // 801B9090
L_801B9094:;
  c->r[31]=0u+0x803D0000u; // 801B9094
  c->r[30]=c->r[4]|c->r[4]; // 801B9098
  c->r[31]=c->r[31]+0xFFFF8118u; // 801B909C
  c->r[29]=0u+0x00000000u; // 801B90A0
L_801B90A4:;
  c->r[0]=R8(c->r[31]+0x00000558u); // 801B90A4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B90A8
  if (crb(c,2)) { goto L_801B90E8; } // 801B90AC
  c->r[0]=R8(c->r[30]+0x00000008u); // 801B90B0
  cmps(c,0,(int32_t)c->r[0],0); // 801B90B4
  if (!crb(c,2)) { goto L_801B90C4; } // 801B90B8
  c->r[3]=0u+0x00000000u; // 801B90BC
  goto L_801B916C; // 801B90C0
L_801B90C4:;
  c->r[3]=c->r[7]|c->r[7]; // 801B90C4
  c->r[4]=c->r[30]|c->r[30]; // 801B90C8
  c->r[5]=c->r[28]|c->r[28]; // 801B90CC
  c->lr=0x801B90D4u; f_801B8E08(c); // 801B90D0
  cmps(c,0,(int32_t)c->r[3],0); // 801B90D4
  if (!crb(c,2)) { goto L_801B90E4; } // 801B90D8
  c->r[3]=0u+0x00000000u; // 801B90DC
  goto L_801B916C; // 801B90E0
L_801B90E4:;
  c->r[7]=c->r[28]|c->r[28]; // 801B90E4
L_801B90E8:;
  c->r[29]=c->r[29]+0x00000001u; // 801B90E8
  c->r[30]=c->r[30]+0x0000000Au; // 801B90EC
  cmps(c,0,(int32_t)c->r[29],2); // 801B90F0
  c->r[31]=c->r[31]+0x00000008u; // 801B90F4
  if (crb(c,0)) { IRQCHK(c); goto L_801B90A4; } // 801B90F8
  cmps(c,0,(int32_t)c->r[7],0); // 801B90FC
  if (!crb(c,2)) { goto L_801B9140; } // 801B9100
  cmps(c,0,(int32_t)c->r[27],0); // 801B9104
  if (crb(c,2)) { goto L_801B9138; } // 801B9108
  c->r[3]=R16(c->r[27]+0x00000000u); // 801B910C
  c->r[0]=R16(c->r[27]+0x00000002u); // 801B9110
  W16(c->r[28]+0x00000000u,c->r[3]); // 801B9114
  W16(c->r[28]+0x00000002u,c->r[0]); // 801B9118
  c->r[3]=R16(c->r[27]+0x00000004u); // 801B911C
  c->r[0]=R16(c->r[27]+0x00000006u); // 801B9120
  W16(c->r[28]+0x00000004u,c->r[3]); // 801B9124
  W16(c->r[28]+0x00000006u,c->r[0]); // 801B9128
  c->r[0]=R16(c->r[27]+0x00000008u); // 801B912C
  W16(c->r[28]+0x00000008u,c->r[0]); // 801B9130
  goto L_801B9168; // 801B9134
L_801B9138:;
  c->r[3]=0u+0x00000000u; // 801B9138
  goto L_801B916C; // 801B913C
L_801B9140:;
  cmpu(c,0,c->r[26],0x00000080u); // 801B9140
  if (!crb(c,2)) { goto L_801B9168; } // 801B9144
  c->r[3]=c->r[27]|c->r[27]; // 801B9148
  c->r[4]=c->r[7]|c->r[7]; // 801B914C
  c->r[5]=c->r[28]|c->r[28]; // 801B9150
  c->lr=0x801B9158u; f_801B8E08(c); // 801B9154
  cmps(c,0,(int32_t)c->r[3],0); // 801B9158
  if (!crb(c,2)) { goto L_801B9168; } // 801B915C
  c->r[3]=0u+0x00000000u; // 801B9160
  goto L_801B916C; // 801B9164
L_801B9168:;
  c->r[3]=R8(c->r[28]+0x00000008u); // 801B9168
L_801B916C:;
  c->r[11]=c->r[1]+0x00000020u; // 801B916C
  c->lr=0x801B9174u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B9170
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B9174
  c->lr=c->r[0]; // 801B9178
  c->r[1]=c->r[1]+0x00000020u; // 801B917C
  return; // 801B9180
}

// btm_pm_snd_md_req
void f_801B9184(Ctx* __restrict c) {
  trace_call(0x801B9184u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9184
  c->r[0]=c->lr; // 801B9188
  c->r[6]=0u+0x803D0000u; // 801B918C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B9190
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)34); // 801B9194
  c->r[6]=c->r[6]+0xFFFF8118u; // 801B9198
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B919C
  c->r[31]=0u+0x00000000u; // 801B91A0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B91A4
  c->r[30]=c->r[4]|c->r[4]; // 801B91A8
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B91AC
  c->r[29]=c->r[3]|c->r[3]; // 801B91B0
  c->r[3]=c->r[6]+c->r[0]; // 801B91B4
  c->r[6]=c->r[1]+0x00000008u; // 801B91B8
  W32(c->r[1]+0x00000020u,c->r[28]); // 801B91BC
  c->r[28]=c->r[3]+0x000004CCu; // 801B91C0
  c->r[3]=c->r[29]|c->r[29]; // 801B91C4
  c->r[4]=c->r[28]|c->r[28]; // 801B91C8
  c->lr=0x801B91D0u; f_801B9024(c); // 801B91CC
  c->r[4]=R8(c->r[28]+0x00000020u); // 801B91D0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B91D4
  W8(c->r[1]+0x00000010u,c->r[3]); // 801B91D8
  cmpu(c,0,c->r[4],c->r[0]); // 801B91DC
  if (!crb(c,2)) { goto L_801B9214; } // 801B91E0
  cmps(c,0,(int32_t)c->r[0],0); // 801B91E4
  if (crb(c,2)) { goto L_801B9208; } // 801B91E8
  c->r[4]=R16(c->r[28]+0x0000001Eu); // 801B91EC
  c->r[0]=R16(c->r[1]+0x00000008u); // 801B91F0
  cmpu(c,0,c->r[0],c->r[4]); // 801B91F4
  if (crb(c,0)) { goto L_801B9210; } // 801B91F8
  c->r[0]=R16(c->r[1]+0x0000000Au); // 801B91FC
  cmpu(c,0,c->r[0],c->r[4]); // 801B9200
  if (crb(c,1)) { goto L_801B9210; } // 801B9204
L_801B9208:;
  c->r[3]=0u+0x0000000Du; // 801B9208
  goto L_801B9398; // 801B920C
L_801B9210:;
  c->r[31]=0u+0x00000001u; // 801B9210
L_801B9214:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B9214
  W8(c->r[28]+0x00000021u,c->r[31]); // 801B9218
  if (crb(c,2)) { goto L_801B9234; } // 801B921C
  c->r[0]=R8(c->r[28]+0x00000020u); // 801B9220
  cmps(c,0,(int32_t)c->r[0],0); // 801B9224
  if (crb(c,2)) { goto L_801B9234; } // 801B9228
  c->r[0]=0u+0x00000001u; // 801B922C
  W8(c->r[28]+0x00000021u,c->r[0]); // 801B9230
L_801B9234:;
  c->r[3]=0u+0x00000002u; // 801B9234
  c->lr=0x801B923Cu; f_801AA140(c); // 801B9238
  cmps(c,0,(int32_t)c->r[3],0); // 801B923C
  c->r[31]=c->r[3]|c->r[3]; // 801B9240
  if (!crb(c,2)) { goto L_801B9250; } // 801B9244
  c->r[3]=0u+0x00000003u; // 801B9248
  goto L_801B9398; // 801B924C
L_801B9250:;
  c->r[0]=R8(c->r[28]+0x00000021u); // 801B9250
  cmpu(c,0,c->r[0],0x00000001u); // 801B9254
  if (!crb(c,2)) { goto L_801B9264; } // 801B9258
  c->r[0]=0u+0x00000000u; // 801B925C
  W8(c->r[1]+0x00000010u,c->r[0]); // 801B9260
L_801B9264:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 801B9264
  c->r[4]=0u+0x803D0000u; // 801B9268
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B926C
  cmps(c,0,(int32_t)c->r[0],2); // 801B9270
  W8(c->r[4]+0x00000564u,c->r[30]); // 801B9274
  W8(c->r[4]+0x00000565u,c->r[29]); // 801B9278
  if (crb(c,2)) { goto L_801B9320; } // 801B927C
  if (!crb(c,0)) { goto L_801B9294; } // 801B9280
  cmps(c,0,(int32_t)c->r[0],0); // 801B9284
  if (crb(c,2)) { goto L_801B92A0; } // 801B9288
  if (!crb(c,0)) { goto L_801B9300; } // 801B928C
  goto L_801B9368; // 801B9290
L_801B9294:;
  cmps(c,0,(int32_t)c->r[0],4); // 801B9294
  if (!crb(c,0)) { goto L_801B9368; } // 801B9298
  goto L_801B9348; // 801B929C
L_801B92A0:;
  c->r[0]=R8(c->r[28]+0x00000020u); // 801B92A0
  cmps(c,0,(int32_t)c->r[0],3); // 801B92A4
  if (crb(c,2)) { goto L_801B92D4; } // 801B92A8
  if (!crb(c,0)) { goto L_801B92EC; } // 801B92AC
  cmps(c,0,(int32_t)c->r[0],2); // 801B92B0
  if (!crb(c,0)) { goto L_801B92BC; } // 801B92B4
  goto L_801B92EC; // 801B92B8
L_801B92BC:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801B92BC
  c->r[3]=c->r[31]|c->r[31]; // 801B92C0
  c->r[4]=c->r[4]+c->r[0]; // 801B92C4
  c->r[4]=R16(c->r[4]+0x00000034u); // 801B92C8
  c->lr=0x801B92D0u; f_801C0B7C(c); // 801B92CC
  goto L_801B9378; // 801B92D0
L_801B92D4:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801B92D4
  c->r[3]=c->r[31]|c->r[31]; // 801B92D8
  c->r[4]=c->r[4]+c->r[0]; // 801B92DC
  c->r[4]=R16(c->r[4]+0x00000034u); // 801B92E0
  c->lr=0x801B92E8u; f_801C0CB4(c); // 801B92E4
  goto L_801B9378; // 801B92E8
L_801B92EC:;
  c->r[3]=0u+0x803D0000u; // 801B92EC
  c->r[0]=0u+0x00000004u; // 801B92F0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B92F4
  W8(c->r[3]+0x00000564u,c->r[0]); // 801B92F8
  goto L_801B9378; // 801B92FC
L_801B9300:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801B9300
  c->r[5]=R16(c->r[1]+0x00000008u); // 801B9304
  c->r[6]=R16(c->r[1]+0x0000000Au); // 801B9308
  c->r[3]=c->r[31]|c->r[31]; // 801B930C
  c->r[4]=c->r[4]+c->r[0]; // 801B9310
  c->r[4]=R16(c->r[4]+0x00000034u); // 801B9314
  c->lr=0x801B931Cu; f_801C09FC(c); // 801B9318
  goto L_801B9378; // 801B931C
L_801B9320:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801B9320
  c->r[5]=R16(c->r[1]+0x00000008u); // 801B9324
  c->r[6]=R16(c->r[1]+0x0000000Au); // 801B9328
  c->r[3]=c->r[31]|c->r[31]; // 801B932C
  c->r[7]=R16(c->r[1]+0x0000000Cu); // 801B9330
  c->r[4]=c->r[4]+c->r[0]; // 801B9334
  c->r[4]=R16(c->r[4]+0x00000034u); // 801B9338
  c->r[8]=R16(c->r[1]+0x0000000Eu); // 801B933C
  c->lr=0x801B9344u; f_801C0AB0(c); // 801B9340
  goto L_801B9378; // 801B9344
L_801B9348:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801B9348
  c->r[5]=R16(c->r[1]+0x00000008u); // 801B934C
  c->r[6]=R16(c->r[1]+0x0000000Au); // 801B9350
  c->r[3]=c->r[31]|c->r[31]; // 801B9354
  c->r[4]=c->r[4]+c->r[0]; // 801B9358
  c->r[4]=R16(c->r[4]+0x00000034u); // 801B935C
  c->lr=0x801B9364u; f_801C0C00(c); // 801B9360
  goto L_801B9378; // 801B9364
L_801B9368:;
  c->r[3]=0u+0x803D0000u; // 801B9368
  c->r[0]=0u+0x00000004u; // 801B936C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B9370
  W8(c->r[3]+0x00000564u,c->r[0]); // 801B9374
L_801B9378:;
  c->r[3]=0u+0x803D0000u; // 801B9378
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B937C
  c->r[0]=R8(c->r[3]+0x00000564u); // 801B9380
  cmpu(c,0,c->r[0],0x00000004u); // 801B9384
  if (!crb(c,2)) { goto L_801B9394; } // 801B9388
  c->r[3]=c->r[31]|c->r[31]; // 801B938C
  c->lr=0x801B9394u; f_801AA228(c); // 801B9390
L_801B9394:;
  c->r[3]=0u+0x00000001u; // 801B9394
L_801B9398:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B9398
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B939C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B93A0
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B93A4
  c->r[28]=R32(c->r[1]+0x00000020u); // 801B93A8
  c->lr=c->r[0]; // 801B93AC
  c->r[1]=c->r[1]+0x00000030u; // 801B93B0
  return; // 801B93B4
}

// btm_pm_proc_cmd_status
void f_801B93B8(Ctx* __restrict c) {
  trace_call(0x801B93B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B93B8
  c->r[0]=c->lr; // 801B93BC
  c->r[4]=0u+0x803D0000u; // 801B93C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B93C4
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B93C8
  c->r[0]=R8(c->r[4]+0x00000564u); // 801B93CC
  cmpu(c,0,c->r[0],0x00000004u); // 801B93D0
  if (!crb(c,0)) { goto L_801B9458; } // 801B93D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 801B93D8
  cmps(c,0,(int32_t)c->r[3],0); // 801B93DC
  c->r[5]=c->r[4]+c->r[0]; // 801B93E0
  if (!crb(c,2)) { goto L_801B93F8; } // 801B93E4
  c->r[0]=0u+0x00000004u; // 801B93E8
  c->r[4]=0u+0x00000004u; // 801B93EC
  W8(c->r[5]+0x000004ECu,c->r[0]); // 801B93F0
  goto L_801B93FC; // 801B93F4
L_801B93F8:;
  c->r[4]=0u+0x00000005u; // 801B93F8
L_801B93FC:;
  c->r[7]=0u+0x803D0000u; // 801B93FC
  c->r[7]=c->r[7]+0xFFFF8118u; // 801B9400
  c->r[0]=R8(c->r[7]+0x00000565u); // 801B9404
  cmpu(c,0,c->r[0],0x00000080u); // 801B9408
  if (crb(c,2)) { goto L_801B9448; } // 801B940C
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801B9410
  c->r[5]=c->r[7]+c->r[0]; // 801B9414
  c->r[0]=R8(c->r[5]+0x00000558u); // 801B9418
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B941C
  if (crb(c,2)) { goto L_801B9448; } // 801B9420
  c->r[0]=R8(c->r[7]+0x00000564u); // 801B9424
  c->r[6]=c->r[3]|c->r[3]; // 801B9428
  c->r[12]=R32(c->r[5]+0x00000554u); // 801B942C
  c->r[5]=0u+0x00000000u; // 801B9430
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)284); // 801B9434
  c->r[3]=c->r[7]+c->r[0]; // 801B9438
  c->r[3]=c->r[3]+0x0000003Cu; // 801B943C
  c->ctr=c->r[12]; // 801B9440
  if (true) { c->lr=0x801B9448u; dispatch(c,c->ctr); } // 801B9444
L_801B9448:;
  c->r[3]=0u+0x803D0000u; // 801B9448
  c->r[0]=0u+0x00000004u; // 801B944C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B9450
  W8(c->r[3]+0x00000564u,c->r[0]); // 801B9454
L_801B9458:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9458
  c->lr=c->r[0]; // 801B945C
  c->r[1]=c->r[1]+0x00000010u; // 801B9460
  return; // 801B9464
}

// btm_pm_proc_mode_change
void f_801B9468(Ctx* __restrict c) {
  trace_call(0x801B9468u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9468
  c->r[0]=c->lr; // 801B946C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B9470
  c->r[11]=c->r[1]+0x00000030u; // 801B9474
  c->lr=0x801B947Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9478
  c->r[26]=c->r[4]|c->r[4]; // 801B947C
  c->r[25]=c->r[3]|c->r[3]; // 801B9480
  c->r[27]=c->r[5]|c->r[5]; // 801B9484
  c->r[28]=c->r[6]|c->r[6]; // 801B9488
  c->r[3]=c->r[26]|c->r[26]; // 801B948C
  c->lr=0x801B9494u; f_801B3058(c); // 801B9490
  c->r[29]=rotl(c->r[3],0)&0x000000FFu; // 801B9494
  cmps(c,0,(int32_t)c->r[29],4); // 801B9498
  if (!crb(c,0)) { goto L_801B9678; } // 801B949C
  c->r[30]=(uint32_t)((int32_t)c->r[29]*(int32_t)284); // 801B94A0
  c->r[24]=0u+0x803D0000u; // 801B94A4
  cmps(c,0,(int32_t)c->r[27],0); // 801B94A8
  c->r[24]=c->r[24]+0xFFFF8118u; // 801B94AC
  c->r[31]=c->r[24]+c->r[30]; // 801B94B0
  if (!crb(c,2)) { goto L_801B950C; } // 801B94B4
  c->r[0]=R16(c->r[31]+0x00000038u); // 801B94B8
  cmps(c,0,(int32_t)c->r[0],0); // 801B94BC
  if (crb(c,2)) { goto L_801B950C; } // 801B94C0
  c->lr=0x801B94C8u; f_801BA3E0(c); // 801B94C4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B94C8
  if (!crb(c,2)) { goto L_801B950C; } // 801B94CC
  c->r[0]=0u+0x00000000u; // 801B94D0
  W16(c->r[31]+0x00000038u,c->r[0]); // 801B94D4
  c->r[0]=R8(c->r[24]+0x000027C0u); // 801B94D8
  cmpu(c,0,c->r[0],0x00000005u); // 801B94DC
  if (crb(c,0)) { goto L_801B9500; } // 801B94E0
  c->r[3]=0u+0x000D0000u; // 801B94E4
  c->r[4]=0u+0x80330000u; // 801B94E8
  c->r[6]=R16(c->r[31]+0x00000036u); // 801B94EC
  c->r[5]=c->r[26]|c->r[26]; // 801B94F0
  c->r[3]=c->r[3]+0x00000004u; // 801B94F4
  c->r[4]=c->r[4]+0x00002BF8u; // 801B94F8
  c->lr=0x801B9500u; f_801ACB50(c); // 801B94FC
L_801B9500:;
  c->r[3]=R16(c->r[31]+0x00000034u); // 801B9500
  c->r[4]=R16(c->r[31]+0x00000036u); // 801B9504
  c->lr=0x801B950Cu; f_801C0334(c); // 801B9508
L_801B950C:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)34); // 801B950C
  c->r[3]=0u+0x803D0000u; // 801B9510
  cmps(c,0,(int32_t)c->r[27],0); // 801B9514
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B9518
  c->r[4]=c->r[3]+c->r[0]; // 801B951C
  W8(c->r[4]+0x000004ECu,c->r[27]); // 801B9520
  c->r[0]=0u+0x00000000u; // 801B9524
  W16(c->r[4]+0x000004EAu,c->r[28]); // 801B9528
  if (!crb(c,2)) { goto L_801B9540; } // 801B952C
  c->r[3]=R8(c->r[4]+0x000004D4u); // 801B9530
  cmpu(c,0,c->r[3],0x00000001u); // 801B9534
  if (!crb(c,2)) { goto L_801B9540; } // 801B9538
  W8(c->r[4]+0x000004D4u,c->r[0]); // 801B953C
L_801B9540:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B9540
  c->r[5]=c->r[4]+0x000004D6u; // 801B9544
  if (!crb(c,2)) { goto L_801B955C; } // 801B9548
  c->r[3]=R8(c->r[5]+0x00000008u); // 801B954C
  cmpu(c,0,c->r[3],0x00000001u); // 801B9550
  if (!crb(c,2)) { goto L_801B955C; } // 801B9554
  W8(c->r[5]+0x00000008u,c->r[0]); // 801B9558
L_801B955C:;
  c->r[0]=R8(c->r[4]+0x000004EDu); // 801B955C
  cmpu(c,0,c->r[0],0x00000001u); // 801B9560
  if (!crb(c,2)) { goto L_801B9578; } // 801B9564
  c->r[4]=c->r[29]|c->r[29]; // 801B9568
  c->r[3]=0u+0x00000080u; // 801B956C
  c->r[5]=0u+0x00000000u; // 801B9570
  c->lr=0x801B9578u; f_801B9184(c); // 801B9574
L_801B9578:;
  c->r[24]=0u+0x803D0000u; // 801B9578
  c->r[29]=0u+0x00000000u; // 801B957C
  c->r[24]=c->r[24]+0xFFFF8118u; // 801B9580
L_801B9584:;
  c->r[0]=R8(c->r[24]+0x00000558u); // 801B9584
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B9588
  if (crb(c,2)) { goto L_801B95AC; } // 801B958C
  c->r[12]=R32(c->r[24]+0x00000554u); // 801B9590
  c->r[4]=c->r[27]|c->r[27]; // 801B9594
  c->r[5]=c->r[28]|c->r[28]; // 801B9598
  c->r[6]=c->r[25]|c->r[25]; // 801B959C
  c->r[3]=c->r[31]+0x0000003Cu; // 801B95A0
  c->ctr=c->r[12]; // 801B95A4
  if (true) { c->lr=0x801B95ACu; dispatch(c,c->ctr); } // 801B95A8
L_801B95AC:;
  c->r[29]=c->r[29]+0x00000001u; // 801B95AC
  c->r[24]=c->r[24]+0x00000008u; // 801B95B0
  cmps(c,0,(int32_t)c->r[29],2); // 801B95B4
  if (crb(c,0)) { IRQCHK(c); goto L_801B9584; } // 801B95B8
  c->r[3]=0u+0x803D0000u; // 801B95BC
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B95C0
  c->r[28]=c->r[3]+c->r[30]; // 801B95C4
  c->r[0]=R8(c->r[28]+0x0000014Fu); // 801B95C8
  cmpu(c,0,c->r[0],0x00000001u); // 801B95CC
  if (!crb(c,2)) { goto L_801B9678; } // 801B95D0
  c->r[24]=c->r[28]+0x0000003Cu; // 801B95D4
  c->r[3]=c->r[24]|c->r[24]; // 801B95D8
  c->lr=0x801B95E0u; f_801B522C(c); // 801B95DC
  cmps(c,0,(int32_t)c->r[3],0); // 801B95E0
  if (crb(c,2)) { goto L_801B9614; } // 801B95E4
  c->r[0]=R8(c->r[3]+0x00000076u); // 801B95E8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B95EC
  if (crb(c,2)) { goto L_801B9614; } // 801B95F0
  c->r[3]=c->r[26]|c->r[26]; // 801B95F4
  c->r[4]=0u+0x00000000u; // 801B95F8
  c->lr=0x801B9600u; f_801C0440(c); // 801B95FC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B9600
  if (crb(c,2)) { goto L_801B9648; } // 801B9604
  c->r[0]=0u+0x00000002u; // 801B9608
  W8(c->r[28]+0x0000014Fu,c->r[0]); // 801B960C
  goto L_801B9678; // 801B9610
L_801B9614:;
  c->r[4]=0u+0x803D0000u; // 801B9614
  c->r[3]=c->r[24]|c->r[24]; // 801B9618
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B961C
  c->r[4]=c->r[4]+c->r[30]; // 801B9620
  c->r[0]=R8(c->r[4]+0x0000014Eu); // 801B9624
  c->r[0]=cntlz(c->r[0]); // 801B9628
  c->r[4]=rotl(c->r[0],27)&0x000000FFu; // 801B962C
  c->lr=0x801B9634u; f_801C0D38(c); // 801B9630
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B9634
  if (crb(c,2)) { goto L_801B9648; } // 801B9638
  c->r[0]=0u+0x00000000u; // 801B963C
  W8(c->r[28]+0x0000014Fu,c->r[0]); // 801B9640
  goto L_801B9678; // 801B9644
L_801B9648:;
  c->r[27]=0u+0x00000000u; // 801B9648
  c->r[26]=0u+0x803D0000u; // 801B964C
  W8(c->r[28]+0x0000014Fu,c->r[27]); // 801B9650
  c->r[26]=c->r[26]+0xFFFF8118u; // 801B9654
  c->r[12]=R32(c->r[26]+0x0000062Cu); // 801B9658
  cmps(c,0,(int32_t)c->r[12],0); // 801B965C
  if (crb(c,2)) { goto L_801B9678; } // 801B9660
  W8(c->r[26]+0x00000624u,c->r[25]); // 801B9664
  c->r[3]=c->r[26]+0x00000624u; // 801B9668
  c->ctr=c->r[12]; // 801B966C
  if (true) { c->lr=0x801B9674u; dispatch(c,c->ctr); } // 801B9670
  W32(c->r[26]+0x0000062Cu,c->r[27]); // 801B9674
L_801B9678:;
  c->r[11]=c->r[1]+0x00000030u; // 801B9678
  c->lr=0x801B9680u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B967C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B9680
  c->lr=c->r[0]; // 801B9684
  c->r[1]=c->r[1]+0x00000030u; // 801B9688
  return; // 801B968C
}

// btm_sco_init
void f_801B9690(Ctx* __restrict c) {
  trace_call(0x801B9690u);
  c->r[3]=0u+0x802E0000u; // 801B9690
  {uint32_t ea=c->r[3]+0x00001318u; c->r[6]=R32(ea); c->r[3]=ea;} // 801B9694
  c->r[4]=0u+0x00010000u; // 801B9698
  c->r[7]=0u+0x803D0000u; // 801B969C
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 801B96A0
  c->r[5]=R32(c->r[3]+0x00000004u); // 801B96A4
  c->r[7]=c->r[7]+0xFFFF8118u; // 801B96A8
  c->r[4]=R32(c->r[3]+0x00000008u); // 801B96AC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801B96B0
  c->r[0]=0u+0x00000002u; // 801B96B4
  W16(c->r[7]+0x000018F6u,c->r[8]); // 801B96B8
  W32(c->r[7]+0x000018F8u,c->r[6]); // 801B96BC
  W32(c->r[7]+0x000018FCu,c->r[5]); // 801B96C0
  W32(c->r[7]+0x00001900u,c->r[4]); // 801B96C4
  W32(c->r[7]+0x00001904u,c->r[3]); // 801B96C8
  W8(c->r[7]+0x00001909u,c->r[0]); // 801B96CC
  return; // 801B96D0
}

// btm_esco_conn_rsp
void f_801B96D4(Ctx* __restrict c) {
  trace_call(0x801B96D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B96D4
  c->r[0]=c->lr; // 801B96D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B96DC
  c->r[11]=c->r[1]+0x00000020u; // 801B96E0
  c->lr=0x801B96E8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B96E4
  c->r[26]=c->r[3]|c->r[3]; // 801B96E8
  c->r[27]=c->r[4]|c->r[4]; // 801B96EC
  c->r[29]=c->r[5]|c->r[5]; // 801B96F0
  c->r[28]=c->r[6]|c->r[6]; // 801B96F4
  c->r[31]=0u+0x00000000u; // 801B96F8
  c->r[3]=0u+0x00000002u; // 801B96FC
  c->lr=0x801B9704u; f_801AA140(c); // 801B9700
  cmps(c,0,(int32_t)c->r[3],0); // 801B9704
  c->r[30]=c->r[3]|c->r[3]; // 801B9708
  if (!crb(c,2)) { goto L_801B9738; } // 801B970C
  c->r[3]=0u+0x803D0000u; // 801B9710
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B9714
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B9718
  cmpu(c,0,c->r[0],0x00000001u); // 801B971C
  if (crb(c,0)) { goto L_801B9898; } // 801B9720
  c->r[4]=0u+0x80330000u; // 801B9724
  c->r[3]=0u+0x000D0000u; // 801B9728
  c->r[4]=c->r[4]+0x00002C38u; // 801B972C
  c->lr=0x801B9734u; f_801ACB20(c); // 801B9730
  goto L_801B9898; // 801B9734
L_801B9738:;
  cmpu(c,0,c->r[26],0x00000003u); // 801B9738
  if (!crb(c,0)) { goto L_801B9754; } // 801B973C
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)52); // 801B9740
  c->r[3]=0u+0x803D0000u; // 801B9744
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B9748
  c->r[3]=c->r[3]+c->r[0]; // 801B974C
  c->r[31]=c->r[3]+0x00001854u; // 801B9750
L_801B9754:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B9754
  if (crb(c,2)) { goto L_801B97B4; } // 801B9758
  cmps(c,0,(int32_t)c->r[31],0); // 801B975C
  if (crb(c,2)) { goto L_801B9778; } // 801B9760
  c->r[3]=R16(c->r[31]+0x00000008u); // 801B9764
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801B9768
  c->r[0]=cntlz(c->r[0]); // 801B976C
  c->r[0]=rotl(c->r[0],27)&0x0000FFFFu; // 801B9770
  W16(c->r[31]+0x00000008u,c->r[0]); // 801B9774
L_801B9778:;
  c->r[3]=0u+0x803D0000u; // 801B9778
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B977C
  c->r[0]=R8(c->r[3]+0x00001908u); // 801B9780
  cmps(c,0,(int32_t)c->r[0],0); // 801B9784
  if (!crb(c,2)) { goto L_801B97A0; } // 801B9788
  c->r[3]=c->r[30]|c->r[30]; // 801B978C
  c->r[4]=c->r[29]|c->r[29]; // 801B9790
  c->r[5]=c->r[27]|c->r[27]; // 801B9794
  c->lr=0x801B979Cu; f_801BFE14(c); // 801B9798
  goto L_801B9898; // 801B979C
L_801B97A0:;
  c->r[3]=c->r[30]|c->r[30]; // 801B97A0
  c->r[4]=c->r[29]|c->r[29]; // 801B97A4
  c->r[5]=c->r[27]|c->r[27]; // 801B97A8
  c->lr=0x801B97B0u; f_801C099C(c); // 801B97AC
  goto L_801B9898; // 801B97B0
L_801B97B4:;
  c->r[3]=0u+0x00000001u; // 801B97B4
  c->lr=0x801B97BCu; f_801B4B60(c); // 801B97B8
  c->r[0]=0u+0x00000003u; // 801B97BC
  c->r[3]=0u+0x803D0000u; // 801B97C0
  W16(c->r[31]+0x00000008u,c->r[0]); // 801B97C4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B97C8
  c->r[0]=R8(c->r[3]+0x00001908u); // 801B97CC
  cmps(c,0,(int32_t)c->r[0],0); // 801B97D0
  if (crb(c,2)) { goto L_801B9888; } // 801B97D4
  c->r[0]=R8(c->r[31]+0x0000002Eu); // 801B97D8
  cmpu(c,0,c->r[0],0x00000002u); // 801B97DC
  if (!crb(c,2)) { goto L_801B9888; } // 801B97E0
  cmps(c,0,(int32_t)c->r[28],0); // 801B97E4
  if (crb(c,2)) { goto L_801B980C; } // 801B97E8
  c->r[3]=R32(c->r[28]+0x00000000u); // 801B97EC
  c->r[0]=R32(c->r[28]+0x00000004u); // 801B97F0
  W32(c->r[31]+0x00000014u,c->r[3]); // 801B97F4
  W32(c->r[31]+0x00000018u,c->r[0]); // 801B97F8
  c->r[3]=R32(c->r[28]+0x00000008u); // 801B97FC
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801B9800
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 801B9804
  W32(c->r[31]+0x00000020u,c->r[0]); // 801B9808
L_801B980C:;
  c->r[3]=0u+0x803D0000u; // 801B980C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B9810
  c->r[4]=R16(c->r[3]+0x00001904u); // 801B9814
  W16(c->r[31]+0x00000020u,c->r[4]); // 801B9818
  c->r[5]=R16(c->r[3]+0x00000656u); // 801B981C
  c->r[3]=c->r[4]&c->r[5]; // 801B9820
  c->r[0]=rotl(c->r[3],0)&0x00000038u; cr0(c,c->r[0]); // 801B9824
  c->r[28]=rotl(c->r[3],0)&0x0000003Fu; // 801B9828
  if (!crb(c,2)) { goto L_801B9838; } // 801B982C
  c->r[0]=c->r[28]|0x00000008u; // 801B9830
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801B9834
L_801B9838:;
  c->r[3]=0u+0x803D0000u; // 801B9838
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B983C
  c->r[0]=R8(c->r[3]+0x00000636u); // 801B9840
  cmpu(c,0,c->r[0],0x00000003u); // 801B9844
  if (crb(c,0)) { goto L_801B985C; } // 801B9848
  c->r[0]=c->r[4]|c->r[5]; // 801B984C
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 801B9850
  c->r[0]=c->r[28]|c->r[0]; // 801B9854
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801B9858
L_801B985C:;
  c->r[5]=R32(c->r[31]+0x00000014u); // 801B985C
  c->r[3]=c->r[30]|c->r[30]; // 801B9860
  c->r[6]=R32(c->r[31]+0x00000018u); // 801B9864
  c->r[4]=c->r[29]|c->r[29]; // 801B9868
  c->r[7]=R16(c->r[31]+0x0000001Cu); // 801B986C
  c->r[10]=rotl(c->r[28],0)&0x0000FFFFu; // 801B9870
  c->r[8]=R16(c->r[31]+0x0000001Eu); // 801B9874
  c->r[9]=R8(c->r[31]+0x00000022u); // 801B9878
  c->lr=0x801B9880u; f_801C08B4(c); // 801B987C
  W16(c->r[31]+0x00000020u,c->r[28]); // 801B9880
  goto L_801B9898; // 801B9884
L_801B9888:;
  c->r[3]=c->r[30]|c->r[30]; // 801B9888
  c->r[4]=c->r[29]|c->r[29]; // 801B988C
  c->r[5]=0u+0x00000000u; // 801B9890
  c->lr=0x801B9898u; f_801BFDB4(c); // 801B9894
L_801B9898:;
  c->r[11]=c->r[1]+0x00000020u; // 801B9898
  c->lr=0x801B98A0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B989C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B98A0
  c->lr=c->r[0]; // 801B98A4
  c->r[1]=c->r[1]+0x00000020u; // 801B98A8
  return; // 801B98AC
}

// btm_sco_chk_pend_unpark
void f_801B98B0(Ctx* __restrict c) {
  trace_call(0x801B98B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B98B0
  c->r[0]=c->lr; // 801B98B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B98B8
  c->r[11]=c->r[1]+0x00000040u; // 801B98BC
  c->lr=0x801B98C4u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B98C0
  c->r[28]=0u+0x803D0000u; // 801B98C4
  c->r[23]=c->r[3]|c->r[3]; // 801B98C8
  c->r[28]=c->r[28]+0xFFFF8118u; // 801B98CC
  c->r[24]=c->r[4]|c->r[4]; // 801B98D0
  c->r[25]=c->r[5]|c->r[5]; // 801B98D4
  c->r[27]=0u+0x00000000u; // 801B98D8
  c->r[26]=c->r[28]+0x00001854u; // 801B98DC
  c->r[30]=0u+0x000D0000u; // 801B98E0
  c->r[31]=0u+0x80330000u; // 801B98E4
  c->r[21]=0u+0x80330000u; // 801B98E8
  c->r[22]=0u+0x00000003u; // 801B98EC
L_801B98F0:;
  c->r[0]=R16(c->r[26]+0x00000008u); // 801B98F0
  cmpu(c,0,c->r[0],0x00000006u); // 801B98F4
  if (!crb(c,2)) { goto L_801B9A14; } // 801B98F8
  cmps(c,0,(int32_t)c->r[25],0); // 801B98FC
  if (!crb(c,2)) { goto L_801B9A14; } // 801B9900
  cmps(c,0,(int32_t)c->r[23],0); // 801B9904
  if (!crb(c,2)) { goto L_801B9A14; } // 801B9908
  c->r[3]=c->r[26]+0x00000028u; // 801B990C
  c->lr=0x801B9914u; f_801B3FB4(c); // 801B9910
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; // 801B9914
  c->r[29]=c->r[3]|c->r[3]; // 801B9918
  cmpu(c,0,c->r[24],c->r[5]); // 801B991C
  if (!crb(c,2)) { goto L_801B9A14; } // 801B9920
  c->r[0]=R8(c->r[28]+0x000027C0u); // 801B9924
  cmpu(c,0,c->r[0],0x00000003u); // 801B9928
  if (crb(c,0)) { goto L_801B9940; } // 801B992C
  c->r[6]=R8(c->r[28]+0x00001909u); // 801B9930
  c->r[3]=c->r[30]+0x00000002u; // 801B9934
  c->r[4]=c->r[31]+0x00002D14u; // 801B9938
  c->lr=0x801B9940u; f_801ACB50(c); // 801B993C
L_801B9940:;
  c->r[3]=0u+0x00000001u; // 801B9940
  c->lr=0x801B9948u; f_801B4B60(c); // 801B9944
  c->r[0]=R8(c->r[28]+0x00001908u); // 801B9948
  cmps(c,0,(int32_t)c->r[0],0); // 801B994C
  if (!crb(c,2)) { goto L_801B9974; } // 801B9950
  c->r[0]=R16(c->r[26]+0x00000020u); // 801B9954
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801B9958
  c->r[4]=rotl(c->r[0],5)&0x000000E0u; // 801B995C
  c->lr=0x801B9964u; f_801BFD28(c); // 801B9960
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B9964
  if (!crb(c,2)) { goto L_801B9A04; } // 801B9968
  c->r[0]=0u+0x00000003u; // 801B996C
  goto L_801B9A08; // 801B9970
L_801B9974:;
  c->r[0]=R8(c->r[28]+0x00000636u); // 801B9974
  c->r[3]=R16(c->r[28]+0x00000656u); // 801B9978
  c->r[4]=R16(c->r[26]+0x00000020u); // 801B997C
  cmpu(c,0,c->r[0],0x00000003u); // 801B9980
  c->r[0]=c->r[4]&c->r[3]; // 801B9984
  c->r[20]=rotl(c->r[0],0)&0x0000003Fu; // 801B9988
  if (crb(c,0)) { goto L_801B99A0; } // 801B998C
  c->r[0]=c->r[4]|c->r[3]; // 801B9990
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 801B9994
  c->r[0]=c->r[20]|c->r[0]; // 801B9998
  c->r[20]=rotl(c->r[0],0)&0x0000FFFFu; // 801B999C
L_801B99A0:;
  c->r[0]=R8(c->r[28]+0x000027C0u); // 801B99A0
  cmpu(c,0,c->r[0],0x00000003u); // 801B99A4
  if (crb(c,0)) { goto L_801B99D0; } // 801B99A8
  c->r[5]=R32(c->r[26]+0x00000014u); // 801B99AC
  c->r[3]=c->r[30]+0x00000002u; // 801B99B0
  c->r[6]=R32(c->r[26]+0x00000018u); // 801B99B4
  c->r[4]=c->r[21]+0x00002CC4u; // 801B99B8
  c->r[7]=R16(c->r[26]+0x0000001Cu); // 801B99BC
  c->r[10]=rotl(c->r[20],0)&0x0000FFFFu; // 801B99C0
  c->r[8]=R16(c->r[26]+0x0000001Eu); // 801B99C4
  c->r[9]=R8(c->r[26]+0x00000022u); // 801B99C8
  c->lr=0x801B99D0u; f_801ACBB0(c); // 801B99CC
L_801B99D0:;
  c->r[4]=R32(c->r[26]+0x00000014u); // 801B99D0
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801B99D4
  c->r[5]=R32(c->r[26]+0x00000018u); // 801B99D8
  c->r[9]=rotl(c->r[20],0)&0x0000FFFFu; // 801B99DC
  c->r[6]=R16(c->r[26]+0x0000001Cu); // 801B99E0
  c->r[7]=R16(c->r[26]+0x0000001Eu); // 801B99E4
  c->r[8]=R8(c->r[26]+0x00000022u); // 801B99E8
  c->lr=0x801B99F0u; f_801C07B8(c); // 801B99EC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B99F0
  if (!crb(c,2)) { goto L_801B9A00; } // 801B99F4
  c->r[0]=0u+0x00000003u; // 801B99F8
  goto L_801B9A08; // 801B99FC
L_801B9A00:;
  W16(c->r[26]+0x00000020u,c->r[20]); // 801B9A00
L_801B9A04:;
  c->r[0]=0u+0x00000001u; // 801B9A04
L_801B9A08:;
  cmpu(c,0,c->r[0],0x00000001u); // 801B9A08
  if (!crb(c,2)) { goto L_801B9A14; } // 801B9A0C
  W16(c->r[26]+0x00000008u,c->r[22]); // 801B9A10
L_801B9A14:;
  c->r[27]=c->r[27]+0x00000001u; // 801B9A14
  c->r[26]=c->r[26]+0x00000034u; // 801B9A18
  cmpu(c,0,c->r[27],0x00000003u); // 801B9A1C
  if (crb(c,0)) { IRQCHK(c); goto L_801B98F0; } // 801B9A20
  c->r[11]=c->r[1]+0x00000040u; // 801B9A24
  c->lr=0x801B9A2Cu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B9A28
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B9A2C
  c->lr=c->r[0]; // 801B9A30
  c->r[1]=c->r[1]+0x00000040u; // 801B9A34
  return; // 801B9A38
}

// btm_sco_conn_req
void f_801B9A3C(Ctx* __restrict c) {
  trace_call(0x801B9A3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9A3C
  c->r[0]=c->lr; // 801B9A40
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B9A44
  c->r[11]=c->r[1]+0x00000030u; // 801B9A48
  c->lr=0x801B9A50u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9A4C
  c->r[6]=0u+0x803D0000u; // 801B9A50
  c->r[30]=c->r[3]|c->r[3]; // 801B9A54
  c->r[6]=c->r[6]+0xFFFF8118u; // 801B9A58
  c->r[29]=c->r[4]|c->r[4]; // 801B9A5C
  c->r[31]=c->r[5]|c->r[5]; // 801B9A60
  c->r[28]=0u+0x00000000u; // 801B9A64
  c->r[27]=c->r[6]+0x00001854u; // 801B9A68
L_801B9A6C:;
  c->r[3]=R16(c->r[27]+0x00000008u); // 801B9A6C
  cmpu(c,0,c->r[3],0x00000001u); // 801B9A70
  if (!crb(c,2)) { goto L_801B9A84; } // 801B9A74
  c->r[0]=R8(c->r[27]+0x0000000Du); // 801B9A78
  cmps(c,0,(int32_t)c->r[0],0); // 801B9A7C
  if (!crb(c,2)) { goto L_801B9A8C; } // 801B9A80
L_801B9A84:;
  cmpu(c,0,c->r[3],0x00000003u); // 801B9A84
  if (!crb(c,2)) { goto L_801B9B2C; } // 801B9A88
L_801B9A8C:;
  c->r[4]=c->r[30]|c->r[30]; // 801B9A8C
  c->r[3]=c->r[27]+0x00000028u; // 801B9A90
  c->r[5]=0u+0x00000006u; // 801B9A94
  c->lr=0x801B9A9Cu; f_8018C170(c); // 801B9A98
  cmps(c,0,(int32_t)c->r[3],0); // 801B9A9C
  if (!crb(c,2)) { goto L_801B9B2C; } // 801B9AA0
  c->r[0]=0u+0x00000001u; // 801B9AA4
  c->r[4]=c->r[30]|c->r[30]; // 801B9AA8
  W8(c->r[27]+0x0000000Du,c->r[0]); // 801B9AAC
  c->r[3]=c->r[27]+0x00000028u; // 801B9AB0
  c->r[5]=0u+0x00000006u; // 801B9AB4
  W8(c->r[27]+0x0000002Eu,c->r[31]); // 801B9AB8
  c->lr=0x801B9AC0u; f_80004338(c); // 801B9ABC
  c->r[0]=R32(c->r[27]+0x00000010u); // 801B9AC0
  cmps(c,0,(int32_t)c->r[0],0); // 801B9AC4
  if (!crb(c,2)) { goto L_801B9AE4; } // 801B9AC8
  c->r[5]=c->r[30]|c->r[30]; // 801B9ACC
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 801B9AD0
  c->r[4]=0u+0x00000000u; // 801B9AD4
  c->r[6]=0u+0x00000000u; // 801B9AD8
  c->lr=0x801B9AE0u; f_801B96D4(c); // 801B9ADC
  goto L_801B9C04; // 801B9AE0
L_801B9AE4:;
  c->r[4]=c->r[30]|c->r[30]; // 801B9AE4
  c->r[3]=c->r[1]+0x0000000Au; // 801B9AE8
  c->r[5]=0u+0x00000006u; // 801B9AEC
  c->lr=0x801B9AF4u; f_80004338(c); // 801B9AF0
  c->r[4]=c->r[29]|c->r[29]; // 801B9AF4
  c->r[3]=c->r[1]+0x00000010u; // 801B9AF8
  c->r[5]=0u+0x00000003u; // 801B9AFC
  c->lr=0x801B9B04u; f_80004338(c); // 801B9B00
  c->r[0]=0u+0x00000002u; // 801B9B04
  W8(c->r[1]+0x00000013u,c->r[31]); // 801B9B08
  c->r[4]=c->r[1]+0x00000008u; // 801B9B0C
  c->r[3]=0u+0x00000002u; // 801B9B10
  W16(c->r[27]+0x00000008u,c->r[0]); // 801B9B14
  c->r[12]=R32(c->r[27]+0x00000010u); // 801B9B18
  W16(c->r[1]+0x00000008u,c->r[28]); // 801B9B1C
  c->ctr=c->r[12]; // 801B9B20
  if (true) { c->lr=0x801B9B28u; dispatch(c,c->ctr); } // 801B9B24
  goto L_801B9C04; // 801B9B28
L_801B9B2C:;
  c->r[28]=c->r[28]+0x00000001u; // 801B9B2C
  c->r[27]=c->r[27]+0x00000034u; // 801B9B30
  cmpu(c,0,c->r[28],0x00000003u); // 801B9B34
  if (crb(c,0)) { IRQCHK(c); goto L_801B9A6C; } // 801B9B38
  c->r[3]=0u+0x803D0000u; // 801B9B3C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B9B40
  c->r[0]=R32(c->r[3]+0x00001850u); // 801B9B44
  cmps(c,0,(int32_t)c->r[0],0); // 801B9B48
  if (crb(c,2)) { goto L_801B9BC8; } // 801B9B4C
  c->r[0]=0u+0x00000003u; // 801B9B50
  c->r[28]=c->r[3]+0x00001854u; // 801B9B54
  c->r[27]=0u+0x00000000u; // 801B9B58
  c->ctr=c->r[0]; // 801B9B5C
L_801B9B60:;
  c->r[0]=R16(c->r[28]+0x00000008u); // 801B9B60
  cmps(c,0,(int32_t)c->r[0],0); // 801B9B64
  if (!crb(c,2)) { goto L_801B9B98; } // 801B9B68
  c->r[0]=0u+0x00000000u; // 801B9B6C
  c->r[29]=0u+0x00000001u; // 801B9B70
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801B9B74
  c->r[4]=c->r[30]|c->r[30]; // 801B9B78
  c->r[3]=c->r[28]+0x00000028u; // 801B9B7C
  c->r[5]=0u+0x00000006u; // 801B9B80
  W16(c->r[28]+0x00000008u,c->r[29]); // 801B9B84
  W8(c->r[28]+0x0000002Eu,c->r[31]); // 801B9B88
  c->lr=0x801B9B90u; f_80004338(c); // 801B9B8C
  W8(c->r[28]+0x0000000Du,c->r[29]); // 801B9B90
  goto L_801B9BA4; // 801B9B94
L_801B9B98:;
  c->r[27]=c->r[27]+0x00000001u; // 801B9B98
  c->r[28]=c->r[28]+0x00000034u; // 801B9B9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B9B60; } // 801B9BA0
L_801B9BA4:;
  c->r[3]=rotl(c->r[27],0)&0x0000FFFFu; // 801B9BA4
  cmpu(c,0,c->r[3],0x00000003u); // 801B9BA8
  if (!crb(c,0)) { goto L_801B9BC8; } // 801B9BAC
  c->r[4]=0u+0x803D0000u; // 801B9BB0
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B9BB4
  c->r[12]=R32(c->r[4]+0x00001850u); // 801B9BB8
  c->ctr=c->r[12]; // 801B9BBC
  if (true) { c->lr=0x801B9BC4u; dispatch(c,c->ctr); } // 801B9BC0
  goto L_801B9C04; // 801B9BC4
L_801B9BC8:;
  c->r[3]=0u+0x803D0000u; // 801B9BC8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B9BCC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B9BD0
  cmpu(c,0,c->r[0],0x00000002u); // 801B9BD4
  if (crb(c,0)) { goto L_801B9BF0; } // 801B9BD8
  c->r[3]=0u+0x000D0000u; // 801B9BDC
  c->r[4]=0u+0x80330000u; // 801B9BE0
  c->r[3]=c->r[3]+0x00000001u; // 801B9BE4
  c->r[4]=c->r[4]+0x00002D64u; // 801B9BE8
  c->lr=0x801B9BF0u; f_801ACB20(c); // 801B9BEC
L_801B9BF0:;
  c->r[5]=c->r[30]|c->r[30]; // 801B9BF0
  c->r[3]=0u+0x00000003u; // 801B9BF4
  c->r[4]=0u+0x0000000Du; // 801B9BF8
  c->r[6]=0u+0x00000000u; // 801B9BFC
  c->lr=0x801B9C04u; f_801B96D4(c); // 801B9C00
L_801B9C04:;
  c->r[11]=c->r[1]+0x00000030u; // 801B9C04
  c->lr=0x801B9C0Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B9C08
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B9C0C
  c->lr=c->r[0]; // 801B9C10
  c->r[1]=c->r[1]+0x00000030u; // 801B9C14
  return; // 801B9C18
}

// btm_sco_connected
void f_801B9C1C(Ctx* __restrict c) {
  trace_call(0x801B9C1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9C1C
  c->r[0]=c->lr; // 801B9C20
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B9C24
  c->r[11]=c->r[1]+0x00000030u; // 801B9C28
  c->lr=0x801B9C30u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9C2C
  c->r[7]=0u+0x803D0000u; // 801B9C30
  c->r[24]=c->r[3]|c->r[3]; // 801B9C34
  c->r[7]=c->r[7]+0xFFFF8118u; // 801B9C38
  c->r[25]=c->r[4]|c->r[4]; // 801B9C3C
  W16(c->r[7]+0x000018F6u,c->r[3]); // 801B9C40
  c->r[26]=c->r[5]|c->r[5]; // 801B9C44
  c->r[29]=c->r[6]|c->r[6]; // 801B9C48
  c->r[31]=c->r[7]+0x00001854u; // 801B9C4C
  c->r[27]=0u+0x00000000u; // 801B9C50
  c->r[30]=0u+0x00000000u; // 801B9C54
L_801B9C58:;
  c->r[28]=R16(c->r[31]+0x00000008u); // 801B9C58
  c->r[3]=c->r[28]+0x00010000u; // 801B9C5C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B9C60
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801B9C64
  cmpu(c,0,c->r[0],0x00000002u); // 801B9C68
  if (crb(c,1)) { goto L_801B9D94; } // 801B9C6C
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801B9C70
  cmps(c,0,(int32_t)c->r[0],0); // 801B9C74
  if (crb(c,2)) { goto L_801B9D94; } // 801B9C78
  cmps(c,0,(int32_t)c->r[25],0); // 801B9C7C
  if (crb(c,2)) { goto L_801B9C9C; } // 801B9C80
  c->r[4]=c->r[25]|c->r[25]; // 801B9C84
  c->r[3]=c->r[31]+0x00000028u; // 801B9C88
  c->r[5]=0u+0x00000006u; // 801B9C8C
  c->lr=0x801B9C94u; f_8018C170(c); // 801B9C90
  cmps(c,0,(int32_t)c->r[3],0); // 801B9C94
  if (!crb(c,2)) { goto L_801B9D94; } // 801B9C98
L_801B9C9C:;
  cmps(c,0,(int32_t)c->r[24],0); // 801B9C9C
  if (crb(c,2)) { goto L_801B9CDC; } // 801B9CA0
  cmpu(c,0,c->r[28],0x00000003u); // 801B9CA4
  if (!crb(c,2)) { goto L_801B9CD0; } // 801B9CA8
  cmpu(c,0,c->r[24],0x00000023u); // 801B9CAC
  if (crb(c,2)) { goto L_801B9DA4; } // 801B9CB0
  c->r[0]=0u+0x00000000u; // 801B9CB4
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801B9CB8
  W16(c->r[31]+0x00000008u,c->r[0]); // 801B9CBC
  c->r[12]=R32(c->r[31]+0x00000004u); // 801B9CC0
  c->ctr=c->r[12]; // 801B9CC4
  if (true) { c->lr=0x801B9CCCu; dispatch(c,c->ctr); } // 801B9CC8
  goto L_801B9DA4; // 801B9CCC
L_801B9CD0:;
  c->r[0]=0u+0x00000001u; // 801B9CD0
  W16(c->r[31]+0x00000008u,c->r[0]); // 801B9CD4
  goto L_801B9DA4; // 801B9CD8
L_801B9CDC:;
  cmpu(c,0,c->r[28],0x00000001u); // 801B9CDC
  if (!crb(c,2)) { goto L_801B9CE8; } // 801B9CE0
  c->r[27]=0u+0x00000001u; // 801B9CE4
L_801B9CE8:;
  c->r[0]=0u+0x00000004u; // 801B9CE8
  c->r[3]=0u+0x803D0000u; // 801B9CEC
  W16(c->r[31]+0x00000008u,c->r[0]); // 801B9CF0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B9CF4
  W16(c->r[31]+0x0000000Au,c->r[26]); // 801B9CF8
  c->r[0]=R8(c->r[3]+0x00001908u); // 801B9CFC
  cmps(c,0,(int32_t)c->r[0],0); // 801B9D00
  if (!crb(c,2)) { goto L_801B9D40; } // 801B9D04
  c->r[0]=0u+0x00000000u; // 801B9D08
  cmps(c,0,(int32_t)c->r[27],0); // 801B9D0C
  W8(c->r[31]+0x0000002Eu,c->r[0]); // 801B9D10
  if (crb(c,2)) { goto L_801B9D80; } // 801B9D14
  c->r[6]=R16(c->r[31]+0x00000020u); // 801B9D18
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801B9D1C
  c->r[5]=R16(c->r[31]+0x0000001Cu); // 801B9D20
  c->r[4]=c->r[1]+0x00000008u; // 801B9D24
  c->r[0]=R8(c->r[31]+0x00000022u); // 801B9D28
  W16(c->r[1]+0x0000000Au,c->r[6]); // 801B9D2C
  W16(c->r[1]+0x00000008u,c->r[5]); // 801B9D30
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801B9D34
  c->lr=0x801B9D3Cu; f_801BA0C4(c); // 801B9D38
  goto L_801B9D80; // 801B9D3C
L_801B9D40:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B9D40
  if (crb(c,2)) { goto L_801B9D80; } // 801B9D44
  c->r[3]=R16(c->r[29]+0x00000000u); // 801B9D48
  c->r[0]=R16(c->r[29]+0x00000002u); // 801B9D4C
  W16(c->r[31]+0x00000024u,c->r[3]); // 801B9D50
  W16(c->r[31]+0x00000026u,c->r[0]); // 801B9D54
  c->r[3]=R16(c->r[29]+0x00000004u); // 801B9D58
  c->r[0]=R16(c->r[29]+0x00000006u); // 801B9D5C
  W16(c->r[31]+0x00000028u,c->r[3]); // 801B9D60
  W16(c->r[31]+0x0000002Au,c->r[0]); // 801B9D64
  c->r[0]=R16(c->r[29]+0x00000008u); // 801B9D68
  W16(c->r[31]+0x0000002Cu,c->r[0]); // 801B9D6C
  c->r[0]=R16(c->r[29]+0x0000000Au); // 801B9D70
  W16(c->r[31]+0x0000002Eu,c->r[0]); // 801B9D74
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 801B9D78
  W16(c->r[31]+0x00000030u,c->r[0]); // 801B9D7C
L_801B9D80:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801B9D80
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801B9D84
  c->ctr=c->r[12]; // 801B9D88
  if (true) { c->lr=0x801B9D90u; dispatch(c,c->ctr); } // 801B9D8C
  goto L_801B9DA4; // 801B9D90
L_801B9D94:;
  c->r[30]=c->r[30]+0x00000001u; // 801B9D94
  c->r[31]=c->r[31]+0x00000034u; // 801B9D98
  cmpu(c,0,c->r[30],0x00000003u); // 801B9D9C
  if (crb(c,0)) { IRQCHK(c); goto L_801B9C58; } // 801B9DA0
L_801B9DA4:;
  c->r[11]=c->r[1]+0x00000030u; // 801B9DA4
  c->lr=0x801B9DACu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B9DA8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B9DAC
  c->lr=c->r[0]; // 801B9DB0
  c->r[1]=c->r[1]+0x00000030u; // 801B9DB4
  return; // 801B9DB8
}

// BTM_RemoveSco
void f_801B9DBC(Ctx* __restrict c) {
  trace_call(0x801B9DBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9DBC
  c->r[0]=c->lr; // 801B9DC0
  c->r[4]=0u+0x803D0000u; // 801B9DC4
  cmpu(c,0,c->r[3],0x00000003u); // 801B9DC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9DCC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801B9DD0
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B9DD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B9DD8
  c->r[31]=c->r[4]+c->r[0]; // 801B9DDC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B9DE0
  if (!crb(c,0)) { goto L_801B9DF4; } // 801B9DE4
  c->r[30]=R16(c->r[31]+0x0000185Cu); // 801B9DE8
  cmps(c,0,(int32_t)c->r[30],0); // 801B9DEC
  if (!crb(c,2)) { goto L_801B9DFC; } // 801B9DF0
L_801B9DF4:;
  c->r[3]=0u+0x00000007u; // 801B9DF4
  goto L_801B9E5C; // 801B9DF8
L_801B9DFC:;
  c->r[0]=R16(c->r[31]+0x0000185Eu); // 801B9DFC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801B9E00
  if (crb(c,2)) { goto L_801B9E10; } // 801B9E04
  cmpu(c,0,c->r[30],0x00000006u); // 801B9E08
  if (!crb(c,2)) { goto L_801B9E30; } // 801B9E0C
L_801B9E10:;
  c->r[3]=0u+0x00010000u; // 801B9E10
  c->r[0]=0u+0x00000000u; // 801B9E14
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801B9E18
  W16(c->r[31]+0x0000185Eu,c->r[4]); // 801B9E1C
  c->r[3]=0u+0x00000000u; // 801B9E20
  W16(c->r[31]+0x0000185Cu,c->r[0]); // 801B9E24
  W32(c->r[31]+0x00001864u,c->r[0]); // 801B9E28
  goto L_801B9E5C; // 801B9E2C
L_801B9E30:;
  c->r[0]=0u+0x00000005u; // 801B9E30
  c->r[4]=0u+0x00000013u; // 801B9E34
  W16(c->r[31]+0x0000185Cu,c->r[0]); // 801B9E38
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 801B9E3C
  c->lr=0x801B9E44u; f_801BFCA0(c); // 801B9E40
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B9E44
  if (!crb(c,2)) { goto L_801B9E58; } // 801B9E48
  W16(c->r[31]+0x0000185Cu,c->r[30]); // 801B9E4C
  c->r[3]=0u+0x00000003u; // 801B9E50
  goto L_801B9E5C; // 801B9E54
L_801B9E58:;
  c->r[3]=0u+0x00000001u; // 801B9E58
L_801B9E5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9E5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B9E60
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B9E64
  c->lr=c->r[0]; // 801B9E68
  c->r[1]=c->r[1]+0x00000010u; // 801B9E6C
  return; // 801B9E70
}

// btm_remove_sco_links
void f_801B9E74(Ctx* __restrict c) {
  trace_call(0x801B9E74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9E74
  c->r[0]=c->lr; // 801B9E78
  c->r[4]=0u+0x803D0000u; // 801B9E7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B9E80
  c->r[4]=c->r[4]+0xFFFF8118u; // 801B9E84
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B9E88
  c->r[31]=c->r[4]+0x00001854u; // 801B9E8C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B9E90
  c->r[30]=0u+0x00000000u; // 801B9E94
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B9E98
  c->r[29]=c->r[3]|c->r[3]; // 801B9E9C
L_801B9EA0:;
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801B9EA0
  cmps(c,0,(int32_t)c->r[0],0); // 801B9EA4
  if (crb(c,2)) { goto L_801B9ECC; } // 801B9EA8
  c->r[4]=c->r[29]|c->r[29]; // 801B9EAC
  c->r[3]=c->r[31]+0x00000028u; // 801B9EB0
  c->r[5]=0u+0x00000006u; // 801B9EB4
  c->lr=0x801B9EBCu; f_8018C170(c); // 801B9EB8
  cmps(c,0,(int32_t)c->r[3],0); // 801B9EBC
  if (!crb(c,2)) { goto L_801B9ECC; } // 801B9EC0
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801B9EC4
  c->lr=0x801B9ECCu; f_801B9DBC(c); // 801B9EC8
L_801B9ECC:;
  c->r[30]=c->r[30]+0x00000001u; // 801B9ECC
  c->r[31]=c->r[31]+0x00000034u; // 801B9ED0
  cmpu(c,0,c->r[30],0x00000003u); // 801B9ED4
  if (crb(c,0)) { IRQCHK(c); goto L_801B9EA0; } // 801B9ED8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B9EDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B9EE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B9EE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B9EE8
  c->lr=c->r[0]; // 801B9EEC
  c->r[1]=c->r[1]+0x00000020u; // 801B9EF0
  return; // 801B9EF4
}

// btm_sco_removed
void f_801B9EF8(Ctx* __restrict c) {
  trace_call(0x801B9EF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9EF8
  c->r[0]=c->lr; // 801B9EFC
  c->r[5]=0u+0x803D0000u; // 801B9F00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9F04
  c->r[5]=c->r[5]+0xFFFF8118u; // 801B9F08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B9F0C
  c->r[31]=c->r[3]|c->r[3]; // 801B9F10
  c->r[3]=0u+0x00000000u; // 801B9F14
  W16(c->r[5]+0x000018F6u,c->r[4]); // 801B9F18
  c->r[0]=R16(c->r[5]+0x0000185Cu); // 801B9F1C
  cmps(c,0,(int32_t)c->r[0],7); // 801B9F20
  if (!crb(c,0)) { goto L_801B9F38; } // 801B9F24
  cmps(c,0,(int32_t)c->r[0],2); // 801B9F28
  if (!crb(c,0)) { goto L_801B9F34; } // 801B9F2C
  goto L_801B9F38; // 801B9F30
L_801B9F34:;
  c->r[3]=0u+0x00000001u; // 801B9F34
L_801B9F38:;
  c->r[0]=R16(c->r[5]+0x00001890u); // 801B9F38
  cmps(c,0,(int32_t)c->r[0],7); // 801B9F3C
  if (!crb(c,0)) { goto L_801B9F54; } // 801B9F40
  cmps(c,0,(int32_t)c->r[0],2); // 801B9F44
  if (!crb(c,0)) { goto L_801B9F50; } // 801B9F48
  goto L_801B9F54; // 801B9F4C
L_801B9F50:;
  c->r[3]=c->r[3]+0x00000001u; // 801B9F50
L_801B9F54:;
  c->r[0]=R16(c->r[5]+0x000018C4u); // 801B9F54
  cmps(c,0,(int32_t)c->r[0],7); // 801B9F58
  if (!crb(c,0)) { goto L_801B9F70; } // 801B9F5C
  cmps(c,0,(int32_t)c->r[0],2); // 801B9F60
  if (!crb(c,0)) { goto L_801B9F6C; } // 801B9F64
  goto L_801B9F70; // 801B9F68
L_801B9F6C:;
  c->r[3]=c->r[3]+0x00000001u; // 801B9F6C
L_801B9F70:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B9F70
  cmpu(c,0,c->r[0],0x00000001u); // 801B9F74
  if (crb(c,1)) { goto L_801B9F84; } // 801B9F78
  c->r[3]=0u+0x00000000u; // 801B9F7C
  c->lr=0x801B9F84u; f_801B4B60(c); // 801B9F80
L_801B9F84:;
  c->r[3]=0u+0x803D0000u; // 801B9F84
  c->r[0]=0u+0x00000003u; // 801B9F88
  c->r[3]=c->r[3]+0xFFFF8118u; // 801B9F8C
  c->r[6]=0u+0x00000000u; // 801B9F90
  c->r[5]=c->r[3]+0x00001854u; // 801B9F94
  c->ctr=c->r[0]; // 801B9F98
L_801B9F9C:;
  c->r[0]=R16(c->r[5]+0x00000008u); // 801B9F9C
  cmps(c,0,(int32_t)c->r[0],0); // 801B9FA0
  if (crb(c,2)) { goto L_801B9FEC; } // 801B9FA4
  cmpu(c,0,c->r[0],0x00000001u); // 801B9FA8
  if (crb(c,2)) { goto L_801B9FEC; } // 801B9FAC
  c->r[0]=R16(c->r[5]+0x0000000Au); // 801B9FB0
  cmpu(c,0,c->r[0],c->r[31]); // 801B9FB4
  if (!crb(c,2)) { goto L_801B9FEC; } // 801B9FB8
  c->r[4]=0u+0x00000000u; // 801B9FBC
  c->r[3]=0u+0x00010000u; // 801B9FC0
  W16(c->r[5]+0x00000008u,c->r[4]); // 801B9FC4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B9FC8
  c->r[3]=rotl(c->r[6],0)&0x0000FFFFu; // 801B9FCC
  W16(c->r[5]+0x0000000Au,c->r[0]); // 801B9FD0
  W8(c->r[5]+0x0000000Du,c->r[4]); // 801B9FD4
  W32(c->r[5]+0x00000010u,c->r[4]); // 801B9FD8
  c->r[12]=R32(c->r[5]+0x00000004u); // 801B9FDC
  c->ctr=c->r[12]; // 801B9FE0
  if (true) { c->lr=0x801B9FE8u; dispatch(c,c->ctr); } // 801B9FE4
  goto L_801B9FF8; // 801B9FE8
L_801B9FEC:;
  c->r[6]=c->r[6]+0x00000001u; // 801B9FEC
  c->r[5]=c->r[5]+0x00000034u; // 801B9FF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B9F9C; } // 801B9FF4
L_801B9FF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9FF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B9FFC
  c->lr=c->r[0]; // 801BA000
  c->r[1]=c->r[1]+0x00000010u; // 801BA004
  return; // 801BA008
}

// btm_sco_acl_removed
void f_801BA00C(Ctx* __restrict c) {
  trace_call(0x801BA00Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA00C
  c->r[0]=c->lr; // 801BA010
  c->r[4]=0u+0x803D0000u; // 801BA014
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BA018
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BA01C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BA020
  c->r[31]=0u+0x00000000u; // 801BA024
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BA028
  c->r[30]=c->r[4]+0x00001854u; // 801BA02C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BA030
  c->r[29]=0u+0x00000000u; // 801BA034
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BA038
  c->r[28]=c->r[3]|c->r[3]; // 801BA03C
L_801BA040:;
  c->r[0]=R16(c->r[30]+0x00000008u); // 801BA040
  cmps(c,0,(int32_t)c->r[0],0); // 801BA044
  if (crb(c,2)) { goto L_801BA090; } // 801BA048
  cmps(c,0,(int32_t)c->r[28],0); // 801BA04C
  if (crb(c,2)) { goto L_801BA078; } // 801BA050
  c->r[4]=c->r[28]|c->r[28]; // 801BA054
  c->r[3]=c->r[30]+0x00000028u; // 801BA058
  c->r[5]=0u+0x00000006u; // 801BA05C
  c->lr=0x801BA064u; f_8018C170(c); // 801BA060
  cmps(c,0,(int32_t)c->r[3],0); // 801BA064
  if (!crb(c,2)) { goto L_801BA090; } // 801BA068
  c->r[0]=R8(c->r[30]+0x0000000Du); // 801BA06C
  cmps(c,0,(int32_t)c->r[0],0); // 801BA070
  if (crb(c,2)) { goto L_801BA090; } // 801BA074
L_801BA078:;
  W16(c->r[30]+0x00000008u,c->r[31]); // 801BA078
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801BA07C
  W32(c->r[30]+0x00000010u,c->r[31]); // 801BA080
  c->r[12]=R32(c->r[30]+0x00000004u); // 801BA084
  c->ctr=c->r[12]; // 801BA088
  if (true) { c->lr=0x801BA090u; dispatch(c,c->ctr); } // 801BA08C
L_801BA090:;
  c->r[29]=c->r[29]+0x00000001u; // 801BA090
  c->r[30]=c->r[30]+0x00000034u; // 801BA094
  cmpu(c,0,c->r[29],0x00000003u); // 801BA098
  if (crb(c,0)) { IRQCHK(c); goto L_801BA040; } // 801BA09C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BA0A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BA0A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BA0A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BA0AC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BA0B0
  c->lr=c->r[0]; // 801BA0B4
  c->r[1]=c->r[1]+0x00000020u; // 801BA0B8
  return; // 801BA0BC
}

// fn_801BA0C0
void f_801BA0C0(Ctx* __restrict c) {
  f_801AA228(c); return; // 801BA0C0
}

// BTM_ChangeEScoLinkParms
void f_801BA0C4(Ctx* __restrict c) {
  trace_call(0x801BA0C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA0C4
  c->r[0]=c->lr; // 801BA0C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BA0CC
  c->r[11]=c->r[1]+0x00000020u; // 801BA0D0
  c->lr=0x801BA0D8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BA0D4
  cmpu(c,0,c->r[3],0x00000003u); // 801BA0D8
  c->r[30]=0u+0x80330000u; // 801BA0DC
  c->r[28]=c->r[4]|c->r[4]; // 801BA0E0
  c->r[30]=c->r[30]+0x00002C38u; // 801BA0E4
  if (!crb(c,0)) { goto L_801BA108; } // 801BA0E8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801BA0EC
  c->r[3]=0u+0x803D0000u; // 801BA0F0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BA0F4
  c->r[31]=c->r[3]+c->r[0]; // 801BA0F8
  c->r[0]=R16(c->r[31]+0x0000185Cu); // 801BA0FC
  cmpu(c,0,c->r[0],0x00000004u); // 801BA100
  if (crb(c,2)) { goto L_801BA110; } // 801BA104
L_801BA108:;
  c->r[3]=0u+0x00000006u; // 801BA108
  goto L_801BA254; // 801BA10C
L_801BA110:;
  c->r[0]=R8(c->r[31]+0x00001882u); // 801BA110
  c->r[29]=c->r[31]+0x00001868u; // 801BA114
  cmps(c,0,(int32_t)c->r[0],0); // 801BA118
  if (crb(c,2)) { goto L_801BA12C; } // 801BA11C
  c->r[0]=R8(c->r[3]+0x00001908u); // 801BA120
  cmps(c,0,(int32_t)c->r[0],0); // 801BA124
  if (!crb(c,2)) { goto L_801BA18C; } // 801BA128
L_801BA12C:;
  c->r[3]=0u+0x803D0000u; // 801BA12C
  c->r[4]=R16(c->r[4]+0x00000002u); // 801BA130
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BA134
  c->r[0]=R16(c->r[3]+0x00000656u); // 801BA138
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 801BA13C
  c->r[0]=c->r[4]&c->r[0]; // 801BA140
  W16(c->r[29]+0x0000000Cu,c->r[0]); // 801BA144
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BA148
  cmpu(c,0,c->r[0],0x00000003u); // 801BA14C
  if (crb(c,0)) { goto L_801BA16C; } // 801BA150
  c->r[3]=0u+0x000D0000u; // 801BA154
  c->r[5]=R16(c->r[31]+0x0000185Eu); // 801BA158
  c->r[6]=R16(c->r[29]+0x0000000Cu); // 801BA15C
  c->r[3]=c->r[3]+0x00000002u; // 801BA160
  c->r[4]=c->r[30]+0x00000248u; // 801BA164
  c->lr=0x801BA16Cu; f_801ACB50(c); // 801BA168
L_801BA16C:;
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 801BA16C
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 801BA170
  c->r[4]=rotl(c->r[0],5)&0x000000E0u; // 801BA174
  c->lr=0x801BA17Cu; f_801C0334(c); // 801BA178
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BA17C
  if (!crb(c,2)) { goto L_801BA250; } // 801BA180
  c->r[3]=0u+0x00000003u; // 801BA184
  goto L_801BA254; // 801BA188
L_801BA18C:;
  c->r[0]=R8(c->r[3]+0x00000636u); // 801BA18C
  c->r[3]=R16(c->r[3]+0x00000656u); // 801BA190
  c->r[4]=R16(c->r[4]+0x00000002u); // 801BA194
  cmpu(c,0,c->r[0],0x00000003u); // 801BA198
  c->r[0]=c->r[4]&c->r[3]; // 801BA19C
  c->r[27]=rotl(c->r[0],0)&0x0000003Fu; // 801BA1A0
  if (crb(c,0)) { goto L_801BA1B8; } // 801BA1A4
  c->r[0]=c->r[4]|c->r[3]; // 801BA1A8
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 801BA1AC
  c->r[0]=c->r[27]|c->r[0]; // 801BA1B0
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 801BA1B4
L_801BA1B8:;
  c->r[3]=0u+0x803D0000u; // 801BA1B8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BA1BC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BA1C0
  cmpu(c,0,c->r[0],0x00000003u); // 801BA1C4
  if (crb(c,0)) { goto L_801BA1E0; } // 801BA1C8
  c->r[3]=0u+0x000D0000u; // 801BA1CC
  c->r[5]=R16(c->r[31]+0x0000185Eu); // 801BA1D0
  c->r[3]=c->r[3]+0x00000002u; // 801BA1D4
  c->r[4]=c->r[30]+0x0000028Cu; // 801BA1D8
  c->lr=0x801BA1E0u; f_801ACB38(c); // 801BA1DC
L_801BA1E0:;
  c->r[3]=0u+0x803D0000u; // 801BA1E0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BA1E4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BA1E8
  cmpu(c,0,c->r[0],0x00000003u); // 801BA1EC
  if (crb(c,0)) { goto L_801BA21C; } // 801BA1F0
  c->r[3]=0u+0x000D0000u; // 801BA1F4
  c->r[5]=R32(c->r[29]+0x00000000u); // 801BA1F8
  c->r[6]=R32(c->r[29]+0x00000004u); // 801BA1FC
  c->r[3]=c->r[3]+0x00000002u; // 801BA200
  c->r[7]=R16(c->r[28]+0x00000000u); // 801BA204
  c->r[4]=c->r[30]+0x0000008Cu; // 801BA208
  c->r[8]=R16(c->r[29]+0x0000000Au); // 801BA20C
  c->r[10]=rotl(c->r[27],0)&0x0000FFFFu; // 801BA210
  c->r[9]=R8(c->r[28]+0x00000004u); // 801BA214
  c->lr=0x801BA21Cu; f_801ACBB0(c); // 801BA218
L_801BA21C:;
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 801BA21C
  c->r[9]=rotl(c->r[27],0)&0x0000FFFFu; // 801BA220
  c->r[4]=R32(c->r[29]+0x00000000u); // 801BA224
  c->r[5]=R32(c->r[29]+0x00000004u); // 801BA228
  c->r[6]=R16(c->r[28]+0x00000000u); // 801BA22C
  c->r[7]=R16(c->r[29]+0x0000000Au); // 801BA230
  c->r[8]=R8(c->r[28]+0x00000004u); // 801BA234
  c->lr=0x801BA23Cu; f_801C07B8(c); // 801BA238
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BA23C
  if (!crb(c,2)) { goto L_801BA24C; } // 801BA240
  c->r[3]=0u+0x00000003u; // 801BA244
  goto L_801BA254; // 801BA248
L_801BA24C:;
  W16(c->r[28]+0x00000002u,c->r[27]); // 801BA24C
L_801BA250:;
  c->r[3]=0u+0x00000001u; // 801BA250
L_801BA254:;
  c->r[11]=c->r[1]+0x00000020u; // 801BA254
  c->lr=0x801BA25Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BA258
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BA25C
  c->lr=c->r[0]; // 801BA260
  c->r[1]=c->r[1]+0x00000020u; // 801BA264
  return; // 801BA268
}

// btm_esco_proc_conn_chg
void f_801BA26C(Ctx* __restrict c) {
  trace_call(0x801BA26Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA26C
  c->r[0]=c->lr; // 801BA270
  W32(c->r[1]+0x00000044u,c->r[0]); // 801BA274
  c->r[11]=c->r[1]+0x00000040u; // 801BA278
  c->lr=0x801BA280u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BA27C
  c->r[9]=0u+0x803D0000u; // 801BA280
  c->r[24]=c->r[3]|c->r[3]; // 801BA284
  c->r[9]=c->r[9]+0xFFFF8118u; // 801BA288
  c->r[25]=c->r[4]|c->r[4]; // 801BA28C
  c->r[0]=R8(c->r[9]+0x000027C0u); // 801BA290
  c->r[26]=c->r[5]|c->r[5]; // 801BA294
  c->r[27]=c->r[6]|c->r[6]; // 801BA298
  c->r[28]=c->r[7]|c->r[7]; // 801BA29C
  cmpu(c,0,c->r[0],0x00000004u); // 801BA2A0
  c->r[29]=c->r[8]|c->r[8]; // 801BA2A4
  c->r[31]=c->r[9]+0x00001854u; // 801BA2A8
  if (crb(c,0)) { goto L_801BA2CC; } // 801BA2AC
  c->r[3]=0u+0x000D0000u; // 801BA2B0
  c->r[4]=0u+0x80330000u; // 801BA2B4
  c->r[5]=c->r[25]|c->r[25]; // 801BA2B8
  c->r[6]=c->r[24]|c->r[24]; // 801BA2BC
  c->r[3]=c->r[3]+0x00000003u; // 801BA2C0
  c->r[4]=c->r[4]+0x00002EFCu; // 801BA2C4
  c->lr=0x801BA2CCu; f_801ACB50(c); // 801BA2C8
L_801BA2CC:;
  c->r[0]=0u+0x00000003u; // 801BA2CC
  c->r[30]=0u+0x00000000u; // 801BA2D0
  c->ctr=c->r[0]; // 801BA2D4
L_801BA2D8:;
  c->r[0]=R16(c->r[31]+0x00000008u); // 801BA2D8
  cmpu(c,0,c->r[0],0x00000004u); // 801BA2DC
  if (!crb(c,2)) { goto L_801BA34C; } // 801BA2E0
  c->r[0]=R16(c->r[31]+0x0000000Au); // 801BA2E4
  cmpu(c,0,c->r[25],c->r[0]); // 801BA2E8
  if (!crb(c,2)) { goto L_801BA34C; } // 801BA2EC
  c->r[0]=R32(c->r[31]+0x00000010u); // 801BA2F0
  cmps(c,0,(int32_t)c->r[0],0); // 801BA2F4
  if (crb(c,2)) { goto L_801BA358; } // 801BA2F8
  c->r[3]=c->r[1]+0x0000000Eu; // 801BA2FC
  c->r[4]=c->r[31]+0x00000028u; // 801BA300
  c->r[5]=0u+0x00000006u; // 801BA304
  c->lr=0x801BA30Cu; f_80004338(c); // 801BA308
  W16(c->r[31]+0x00000024u,c->r[28]); // 801BA30C
  c->r[4]=c->r[1]+0x00000008u; // 801BA310
  c->r[3]=0u+0x00000001u; // 801BA314
  W16(c->r[31]+0x00000026u,c->r[29]); // 801BA318
  W8(c->r[31]+0x0000002Fu,c->r[26]); // 801BA31C
  W8(c->r[31]+0x00000030u,c->r[27]); // 801BA320
  c->r[12]=R32(c->r[31]+0x00000010u); // 801BA324
  W8(c->r[1]+0x00000014u,c->r[24]); // 801BA328
  W16(c->r[1]+0x00000008u,c->r[30]); // 801BA32C
  W16(c->r[1]+0x0000000Au,c->r[28]); // 801BA330
  W16(c->r[1]+0x0000000Cu,c->r[29]); // 801BA334
  W8(c->r[1]+0x00000015u,c->r[26]); // 801BA338
  W8(c->r[1]+0x00000016u,c->r[27]); // 801BA33C
  c->ctr=c->r[12]; // 801BA340
  if (true) { c->lr=0x801BA348u; dispatch(c,c->ctr); } // 801BA344
  goto L_801BA358; // 801BA348
L_801BA34C:;
  c->r[30]=c->r[30]+0x00000001u; // 801BA34C
  c->r[31]=c->r[31]+0x00000034u; // 801BA350
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BA2D8; } // 801BA354
L_801BA358:;
  c->r[11]=c->r[1]+0x00000040u; // 801BA358
  c->lr=0x801BA360u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BA35C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801BA360
  c->lr=c->r[0]; // 801BA364
  c->r[1]=c->r[1]+0x00000040u; // 801BA368
  return; // 801BA36C
}

// btm_is_sco_active
void f_801BA370(Ctx* __restrict c) {
  trace_call(0x801BA370u);
  c->r[4]=0u+0x803D0000u; // 801BA370
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BA374
  c->r[0]=R16(c->r[4]+0x0000185Eu); // 801BA378
  cmpu(c,0,c->r[3],c->r[0]); // 801BA37C
  if (!crb(c,2)) { goto L_801BA398; } // 801BA380
  c->r[0]=R16(c->r[4]+0x0000185Cu); // 801BA384
  cmpu(c,0,c->r[0],0x00000004u); // 801BA388
  if (!crb(c,2)) { goto L_801BA398; } // 801BA38C
  c->r[3]=0u+0x00000001u; // 801BA390
  return; // 801BA394
L_801BA398:;
  c->r[0]=R16(c->r[4]+0x00001892u); // 801BA398
  cmpu(c,0,c->r[3],c->r[0]); // 801BA39C
  if (!crb(c,2)) { goto L_801BA3B8; } // 801BA3A0
  c->r[0]=R16(c->r[4]+0x00001890u); // 801BA3A4
  cmpu(c,0,c->r[0],0x00000004u); // 801BA3A8
  if (!crb(c,2)) { goto L_801BA3B8; } // 801BA3AC
  c->r[3]=0u+0x00000001u; // 801BA3B0
  return; // 801BA3B4
L_801BA3B8:;
  c->r[0]=R16(c->r[4]+0x000018C6u); // 801BA3B8
  cmpu(c,0,c->r[3],c->r[0]); // 801BA3BC
  if (!crb(c,2)) { goto L_801BA3D8; } // 801BA3C0
  c->r[0]=R16(c->r[4]+0x000018C4u); // 801BA3C4
  cmpu(c,0,c->r[0],0x00000004u); // 801BA3C8
  if (!crb(c,2)) { goto L_801BA3D8; } // 801BA3CC
  c->r[3]=0u+0x00000001u; // 801BA3D0
  return; // 801BA3D4
L_801BA3D8:;
  c->r[3]=0u+0x00000000u; // 801BA3D8
  return; // 801BA3DC
}

// btm_num_sco_links_active
void f_801BA3E0(Ctx* __restrict c) {
  trace_call(0x801BA3E0u);
  c->r[4]=0u+0x803D0000u; // 801BA3E0
  c->r[3]=0u+0x00000000u; // 801BA3E4
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BA3E8
  c->r[0]=R16(c->r[4]+0x0000185Cu); // 801BA3EC
  cmps(c,0,(int32_t)c->r[0],7); // 801BA3F0
  if (!crb(c,0)) { goto L_801BA408; } // 801BA3F4
  cmps(c,0,(int32_t)c->r[0],2); // 801BA3F8
  if (!crb(c,0)) { goto L_801BA404; } // 801BA3FC
  goto L_801BA408; // 801BA400
L_801BA404:;
  c->r[3]=0u+0x00000001u; // 801BA404
L_801BA408:;
  c->r[0]=R16(c->r[4]+0x00001890u); // 801BA408
  cmps(c,0,(int32_t)c->r[0],7); // 801BA40C
  if (!crb(c,0)) { goto L_801BA424; } // 801BA410
  cmps(c,0,(int32_t)c->r[0],2); // 801BA414
  if (!crb(c,0)) { goto L_801BA420; } // 801BA418
  goto L_801BA424; // 801BA41C
L_801BA420:;
  c->r[3]=c->r[3]+0x00000001u; // 801BA420
L_801BA424:;
  c->r[0]=R16(c->r[4]+0x000018C4u); // 801BA424
  cmps(c,0,(int32_t)c->r[0],7); // 801BA428
  if (!crb(c,0)) return; // 801BA42C
  cmps(c,0,(int32_t)c->r[0],2); // 801BA430
  if (crb(c,0)) return; // 801BA434
  c->r[3]=c->r[3]+0x00000001u; // 801BA438
  return; // 801BA43C
}

// btm_is_sco_active_by_bdaddr
void f_801BA440(Ctx* __restrict c) {
  trace_call(0x801BA440u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA440
  c->r[0]=c->lr; // 801BA444
  c->r[4]=0u+0x803D0000u; // 801BA448
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BA44C
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BA450
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BA454
  c->r[31]=0u+0x00000000u; // 801BA458
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BA45C
  c->r[30]=c->r[4]+0x00001854u; // 801BA460
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BA464
  c->r[29]=c->r[3]|c->r[3]; // 801BA468
L_801BA46C:;
  c->r[4]=c->r[29]|c->r[29]; // 801BA46C
  c->r[3]=c->r[30]+0x00000028u; // 801BA470
  c->r[5]=0u+0x00000006u; // 801BA474
  c->lr=0x801BA47Cu; f_8018C170(c); // 801BA478
  cmps(c,0,(int32_t)c->r[3],0); // 801BA47C
  if (!crb(c,2)) { goto L_801BA498; } // 801BA480
  c->r[0]=R16(c->r[30]+0x00000008u); // 801BA484
  cmpu(c,0,c->r[0],0x00000004u); // 801BA488
  if (!crb(c,2)) { goto L_801BA498; } // 801BA48C
  c->r[3]=0u+0x00000001u; // 801BA490
  goto L_801BA4AC; // 801BA494
L_801BA498:;
  c->r[31]=c->r[31]+0x00000001u; // 801BA498
  c->r[30]=c->r[30]+0x00000034u; // 801BA49C
  cmpu(c,0,c->r[31],0x00000003u); // 801BA4A0
  if (crb(c,0)) { IRQCHK(c); goto L_801BA46C; } // 801BA4A4
  c->r[3]=0u+0x00000000u; // 801BA4A8
L_801BA4AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BA4AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BA4B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BA4B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BA4B8
  c->lr=c->r[0]; // 801BA4BC
  c->r[1]=c->r[1]+0x00000020u; // 801BA4C0
  return; // 801BA4C4
}

// BTM_SecRegister
void f_801BA4C8(Ctx* __restrict c) {
  trace_call(0x801BA4C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA4C8
  c->r[0]=c->lr; // 801BA4CC
  c->r[6]=0u+0x803D0000u; // 801BA4D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BA4D4
  c->r[6]=c->r[6]+0xFFFF8118u; // 801BA4D8
  c->r[5]=R32(c->r[3]+0x00000000u); // 801BA4DC
  c->r[4]=R32(c->r[3]+0x00000004u); // 801BA4E0
  c->r[0]=R8(c->r[6]+0x000027C0u); // 801BA4E4
  W32(c->r[6]+0x0000190Cu,c->r[5]); // 801BA4E8
  cmpu(c,0,c->r[0],0x00000004u); // 801BA4EC
  W32(c->r[6]+0x00001910u,c->r[4]); // 801BA4F0
  c->r[4]=R32(c->r[3]+0x00000008u); // 801BA4F4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801BA4F8
  W32(c->r[6]+0x00001914u,c->r[4]); // 801BA4FC
  W32(c->r[6]+0x00001918u,c->r[0]); // 801BA500
  c->r[4]=R32(c->r[3]+0x00000010u); // 801BA504
  c->r[0]=R32(c->r[3]+0x00000014u); // 801BA508
  W32(c->r[6]+0x0000191Cu,c->r[4]); // 801BA50C
  W32(c->r[6]+0x00001920u,c->r[0]); // 801BA510
  if (crb(c,0)) { goto L_801BA52C; } // 801BA514
  c->r[3]=0u+0x000D0000u; // 801BA518
  c->r[4]=0u+0x80330000u; // 801BA51C
  c->r[3]=c->r[3]+0x00000003u; // 801BA520
  c->r[4]=c->r[4]+0x00002F38u; // 801BA524
  c->lr=0x801BA52Cu; f_801ACB20(c); // 801BA528
L_801BA52C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA52C
  c->r[3]=0u+0x00000001u; // 801BA530
  c->lr=c->r[0]; // 801BA534
  c->r[1]=c->r[1]+0x00000010u; // 801BA538
  return; // 801BA53C
}

// BTM_SecAddRmtNameNotifyCallback
void f_801BA540(Ctx* __restrict c) {
  trace_call(0x801BA540u);
  c->r[4]=0u+0x803D0000u; // 801BA540
  c->r[0]=0u+0x00000002u; // 801BA544
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BA548
  c->r[5]=0u+0x00000000u; // 801BA54C
  c->ctr=c->r[0]; // 801BA550
L_801BA554:;
  c->r[0]=R32(c->r[4]+0x0000192Cu); // 801BA554
  cmps(c,0,(int32_t)c->r[0],0); // 801BA558
  if (!crb(c,2)) { goto L_801BA57C; } // 801BA55C
  c->r[4]=0u+0x803D0000u; // 801BA560
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801BA564
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BA568
  c->r[4]=c->r[4]+c->r[0]; // 801BA56C
  W32(c->r[4]+0x0000192Cu,c->r[3]); // 801BA570
  c->r[3]=0u+0x00000001u; // 801BA574
  return; // 801BA578
L_801BA57C:;
  c->r[4]=c->r[4]+0x00000004u; // 801BA57C
  c->r[5]=c->r[5]+0x00000001u; // 801BA580
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BA554; } // 801BA584
  c->r[3]=0u+0x00000000u; // 801BA588
  return; // 801BA58C
}

// BTM_SecDeleteRmtNameNotifyCallback
void f_801BA590(Ctx* __restrict c) {
  trace_call(0x801BA590u);
  c->r[4]=0u+0x803D0000u; // 801BA590
  c->r[0]=0u+0x00000002u; // 801BA594
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BA598
  c->r[5]=0u+0x00000000u; // 801BA59C
  c->ctr=c->r[0]; // 801BA5A0
L_801BA5A4:;
  c->r[0]=R32(c->r[4]+0x0000192Cu); // 801BA5A4
  cmpu(c,0,c->r[0],c->r[3]); // 801BA5A8
  if (!crb(c,2)) { goto L_801BA5D0; } // 801BA5AC
  c->r[3]=0u+0x803D0000u; // 801BA5B0
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801BA5B4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BA5B8
  c->r[5]=0u+0x00000000u; // 801BA5BC
  c->r[4]=c->r[3]+c->r[0]; // 801BA5C0
  W32(c->r[4]+0x0000192Cu,c->r[5]); // 801BA5C4
  c->r[3]=0u+0x00000001u; // 801BA5C8
  return; // 801BA5CC
L_801BA5D0:;
  c->r[4]=c->r[4]+0x00000004u; // 801BA5D0
  c->r[5]=c->r[5]+0x00000001u; // 801BA5D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BA5A4; } // 801BA5D8
  c->r[3]=0u+0x00000000u; // 801BA5DC
  return; // 801BA5E0
}

// BTM_SetPinType
void f_801BA5E4(Ctx* __restrict c) {
  trace_call(0x801BA5E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA5E4
  c->r[0]=c->lr; // 801BA5E8
  c->r[6]=0u+0x803D0000u; // 801BA5EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BA5F0
  c->r[6]=c->r[6]+0xFFFF8118u; // 801BA5F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BA5F8
  c->r[31]=c->r[5]|c->r[5]; // 801BA5FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BA600
  c->r[30]=c->r[4]|c->r[4]; // 801BA604
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BA608
  c->r[29]=c->r[3]|c->r[3]; // 801BA60C
  c->r[0]=R8(c->r[6]+0x000027C0u); // 801BA610
  cmpu(c,0,c->r[0],0x00000003u); // 801BA614
  if (crb(c,0)) { goto L_801BA63C; } // 801BA618
  c->r[3]=0u+0x000D0000u; // 801BA61C
  c->r[4]=0u+0x80330000u; // 801BA620
  c->r[5]=c->r[29]|c->r[29]; // 801BA624
  c->r[6]=c->r[30]|c->r[30]; // 801BA628
  c->r[7]=c->r[31]|c->r[31]; // 801BA62C
  c->r[3]=c->r[3]+0x00000002u; // 801BA630
  c->r[4]=c->r[4]+0x00002FD0u; // 801BA634
  c->lr=0x801BA63Cu; f_801ACB68(c); // 801BA638
L_801BA63C:;
  c->r[3]=0u+0x803D0000u; // 801BA63C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BA640
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801BA644
  cmpu(c,0,c->r[0],0x00000001u); // 801BA648
  if (!crb(c,1)) { goto L_801BA658; } // 801BA64C
  c->r[3]=c->r[29]|c->r[29]; // 801BA650
  c->lr=0x801BA658u; f_801C1094(c); // 801BA654
L_801BA658:;
  c->r[6]=0u+0x803D0000u; // 801BA658
  c->r[4]=c->r[30]|c->r[30]; // 801BA65C
  c->r[6]=c->r[6]+0xFFFF8118u; // 801BA660
  c->r[5]=c->r[31]|c->r[31]; // 801BA664
  W8(c->r[6]+0x00000020u,c->r[29]); // 801BA668
  c->r[3]=c->r[6]+0x00000022u; // 801BA66C
  W8(c->r[6]+0x00000021u,c->r[31]); // 801BA670
  c->lr=0x801BA678u; f_80004338(c); // 801BA674
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BA678
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BA67C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BA680
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BA684
  c->lr=c->r[0]; // 801BA688
  c->r[1]=c->r[1]+0x00000020u; // 801BA68C
  return; // 801BA690
}

// BTM_SetSecurityLevel
void f_801BA694(Ctx* __restrict c) {
  trace_call(0x801BA694u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA694
  c->r[0]=c->lr; // 801BA698
  W32(c->r[1]+0x00000044u,c->r[0]); // 801BA69C
  c->r[11]=c->r[1]+0x00000040u; // 801BA6A0
  c->lr=0x801BA6A8u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BA6A4
  c->r[10]=0u+0x803D0000u; // 801BA6A8
  c->r[31]=0u+0x80330000u; // 801BA6AC
  c->r[10]=c->r[10]+0xFFFF8118u; // 801BA6B0
  c->r[11]=0u+0x00010000u; // 801BA6B4
  c->r[20]=c->r[3]|c->r[3]; // 801BA6B8
  c->r[21]=c->r[4]|c->r[4]; // 801BA6BC
  c->r[22]=c->r[5]|c->r[5]; // 801BA6C0
  c->r[23]=c->r[6]|c->r[6]; // 801BA6C4
  c->r[24]=c->r[7]|c->r[7]; // 801BA6C8
  c->r[25]=c->r[8]|c->r[8]; // 801BA6CC
  c->r[26]=c->r[9]|c->r[9]; // 801BA6D0
  c->r[31]=c->r[31]+0x00002F38u; // 801BA6D4
  c->r[28]=c->r[11]+0xFFFFFFFFu; // 801BA6D8
  c->r[30]=c->r[10]+0x00001990u; // 801BA6DC
  c->r[27]=0u+0x00000000u; // 801BA6E0
  c->r[29]=0u+0x00000000u; // 801BA6E4
L_801BA6E8:;
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 801BA6E8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BA6EC
  if (crb(c,2)) { goto L_801BA750; } // 801BA6F0
  c->r[0]=R16(c->r[30]+0x0000000Cu); // 801BA6F4
  cmpu(c,0,c->r[0],c->r[24]); // 801BA6F8
  if (!crb(c,2)) { goto L_801BA760; } // 801BA6FC
  c->r[0]=R32(c->r[30]+0x00000000u); // 801BA700
  cmpu(c,0,c->r[0],c->r[25]); // 801BA704
  if (!crb(c,2)) { goto L_801BA760; } // 801BA708
  c->r[0]=R8(c->r[30]+0x0000000Fu); // 801BA70C
  cmpu(c,0,c->r[22],c->r[0]); // 801BA710
  if (!crb(c,2)) { goto L_801BA760; } // 801BA714
  c->r[3]=c->r[21]|c->r[21]; // 801BA718
  c->r[4]=c->r[30]+0x00000010u; // 801BA71C
  c->r[5]=0u+0x00000015u; // 801BA720
  c->lr=0x801BA728u; f_8019027C(c); // 801BA724
  cmps(c,0,(int32_t)c->r[3],0); // 801BA728
  if (crb(c,2)) { goto L_801BA748; } // 801BA72C
  c->r[3]=c->r[21]|c->r[21]; // 801BA730
  c->r[4]=c->r[30]+0x00000026u; // 801BA734
  c->r[5]=0u+0x00000015u; // 801BA738
  c->lr=0x801BA740u; f_8019027C(c); // 801BA73C
  cmps(c,0,(int32_t)c->r[3],0); // 801BA740
  if (!crb(c,2)) { goto L_801BA760; } // 801BA744
L_801BA748:;
  c->r[27]=0u+0x00000001u; // 801BA748
  goto L_801BA770; // 801BA74C
L_801BA750:;
  cmps(c,0,(int32_t)c->r[27],0); // 801BA750
  if (!crb(c,2)) { goto L_801BA760; } // 801BA754
  c->r[27]=0u+0x00000001u; // 801BA758
  c->r[28]=c->r[29]|c->r[29]; // 801BA75C
L_801BA760:;
  c->r[29]=c->r[29]+0x00000001u; // 801BA760
  c->r[30]=c->r[30]+0x0000003Cu; // 801BA764
  cmpu(c,0,c->r[29],0x00000018u); // 801BA768
  if (crb(c,0)) { IRQCHK(c); goto L_801BA6E8; } // 801BA76C
L_801BA770:;
  cmps(c,0,(int32_t)c->r[27],0); // 801BA770
  if (crb(c,2)) { goto L_801BA878; } // 801BA774
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 801BA778
  cmpu(c,0,c->r[0],0x00000018u); // 801BA77C
  if (crb(c,0)) { goto L_801BA7A0; } // 801BA780
  c->r[0]=rotl(c->r[28],0)&0x0000FFFFu; // 801BA784
  c->r[3]=0u+0x803D0000u; // 801BA788
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 801BA78C
  c->r[29]=c->r[28]|c->r[28]; // 801BA790
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BA794
  c->r[3]=c->r[3]+c->r[0]; // 801BA798
  c->r[30]=c->r[3]+0x00001990u; // 801BA79C
L_801BA7A0:;
  W16(c->r[30]+0x0000000Cu,c->r[24]); // 801BA7A0
  cmps(c,0,(int32_t)c->r[20],0); // 801BA7A4
  W8(c->r[30]+0x0000000Fu,c->r[22]); // 801BA7A8
  W32(c->r[30]+0x00000000u,c->r[25]); // 801BA7AC
  if (crb(c,2)) { goto L_801BA7D8; } // 801BA7B0
  W32(c->r[30]+0x00000004u,c->r[26]); // 801BA7B4
  c->r[4]=c->r[21]|c->r[21]; // 801BA7B8
  c->r[3]=c->r[30]+0x00000010u; // 801BA7BC
  c->r[5]=0u+0x00000015u; // 801BA7C0
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 801BA7C4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFC7u; // 801BA7C8
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801BA7CC
  c->lr=0x801BA7D4u; f_801900A4(c); // 801BA7D0
  goto L_801BA7F8; // 801BA7D4
L_801BA7D8:;
  W32(c->r[30]+0x00000008u,c->r[26]); // 801BA7D8
  c->r[4]=c->r[21]|c->r[21]; // 801BA7DC
  c->r[3]=c->r[30]+0x00000026u; // 801BA7E0
  c->r[5]=0u+0x00000015u; // 801BA7E4
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 801BA7E8
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 801BA7EC
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801BA7F0
  c->lr=0x801BA7F8u; f_801900A4(c); // 801BA7F4
L_801BA7F8:;
  c->r[4]=R8(c->r[30]+0x0000000Eu); // 801BA7F8
  c->r[0]=c->r[23]|0x00000080u; // 801BA7FC
  c->r[3]=0u+0x803D0000u; // 801BA800
  c->r[0]=c->r[4]|c->r[0]; // 801BA804
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801BA808
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BA80C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BA810
  cmpu(c,0,c->r[0],0x00000003u); // 801BA814
  if (crb(c,0)) { goto L_801BA844; } // 801BA818
  c->r[3]=0u+0x000D0000u; // 801BA81C
  c->r[6]=c->r[22]|c->r[22]; // 801BA820
  c->r[7]=c->r[20]|c->r[20]; // 801BA824
  c->r[8]=c->r[24]|c->r[24]; // 801BA828
  c->r[9]=c->r[25]|c->r[25]; // 801BA82C
  c->r[10]=c->r[26]|c->r[26]; // 801BA830
  c->r[3]=c->r[3]+0x00000002u; // 801BA834
  c->r[4]=c->r[31]+0x000000E0u; // 801BA838
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 801BA83C
  c->lr=0x801BA844u; f_801ACBB0(c); // 801BA840
L_801BA844:;
  c->r[3]=0u+0x803D0000u; // 801BA844
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BA848
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BA84C
  cmpu(c,0,c->r[0],0x00000003u); // 801BA850
  if (crb(c,0)) { goto L_801BA8A0; } // 801BA854
  c->r[3]=0u+0x000D0000u; // 801BA858
  c->r[5]=R8(c->r[30]+0x0000000Eu); // 801BA85C
  c->r[6]=c->r[21]|c->r[21]; // 801BA860
  c->r[4]=c->r[31]+0x00000128u; // 801BA864
  c->r[3]=c->r[3]+0x00000002u; // 801BA868
  c->r[7]=0u+0x00000015u; // 801BA86C
  c->lr=0x801BA874u; f_801ACB68(c); // 801BA870
  goto L_801BA8A0; // 801BA874
L_801BA878:;
  c->r[3]=0u+0x803D0000u; // 801BA878
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BA87C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BA880
  cmpu(c,0,c->r[0],0x00000002u); // 801BA884
  if (crb(c,0)) { goto L_801BA8A0; } // 801BA888
  c->r[3]=0u+0x000D0000u; // 801BA88C
  c->r[4]=c->r[31]+0x00000170u; // 801BA890
  c->r[3]=c->r[3]+0x00000001u; // 801BA894
  c->r[5]=0u+0x00000018u; // 801BA898
  c->lr=0x801BA8A0u; f_801ACB38(c); // 801BA89C
L_801BA8A0:;
  c->r[11]=c->r[1]+0x00000040u; // 801BA8A0
  c->r[3]=c->r[27]|c->r[27]; // 801BA8A4
  c->lr=0x801BA8ACu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BA8A8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801BA8AC
  c->lr=c->r[0]; // 801BA8B0
  c->r[1]=c->r[1]+0x00000040u; // 801BA8B4
  return; // 801BA8B8
}

// BTM_PINCodeReply
void f_801BA8BC(Ctx* __restrict c) {
  trace_call(0x801BA8BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA8BC
  c->r[0]=c->lr; // 801BA8C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BA8C4
  c->r[11]=c->r[1]+0x00000030u; // 801BA8C8
  c->lr=0x801BA8D0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BA8CC
  c->r[30]=0u+0x803D0000u; // 801BA8D0
  c->r[25]=c->r[3]|c->r[3]; // 801BA8D4
  c->r[30]=c->r[30]+0xFFFF8118u; // 801BA8D8
  c->r[26]=c->r[4]|c->r[4]; // 801BA8DC
  c->r[0]=R32(c->r[30]+0x0000194Cu); // 801BA8E0
  c->r[27]=c->r[5]|c->r[5]; // 801BA8E4
  c->r[28]=c->r[6]|c->r[6]; // 801BA8E8
  c->r[29]=c->r[7]|c->r[7]; // 801BA8EC
  cmps(c,0,(int32_t)c->r[0],0); // 801BA8F0
  if (crb(c,2)) { goto L_801BA968; } // 801BA8F4
  c->r[3]=c->r[30]+0x0000193Cu; // 801BA8F8
  c->lr=0x801BA900u; f_801AD15C(c); // 801BA8FC
  c->r[31]=0u+0x00000000u; // 801BA900
  c->r[3]=c->r[30]+0x00001954u; // 801BA904
  W32(c->r[30]+0x0000194Cu,c->r[31]); // 801BA908
  c->r[4]=0u+0x000000FFu; // 801BA90C
  c->r[5]=0u+0x00000006u; // 801BA910
  c->lr=0x801BA918u; f_80004688(c); // 801BA914
  cmps(c,0,(int32_t)c->r[26],0); // 801BA918
  if (crb(c,2)) { goto L_801BA934; } // 801BA91C
  c->r[0]=0u+0x0000000Eu; // 801BA920
  c->r[3]=c->r[25]|c->r[25]; // 801BA924
  W8(c->r[30]+0x000027BFu,c->r[0]); // 801BA928
  c->lr=0x801BA930u; f_801C0294(c); // 801BA92C
  goto L_801BA968; // 801BA930
L_801BA934:;
  W8(c->r[30]+0x000027BFu,c->r[31]); // 801BA934
  c->r[3]=c->r[25]|c->r[25]; // 801BA938
  c->r[4]=c->r[27]|c->r[27]; // 801BA93C
  c->r[5]=c->r[28]|c->r[28]; // 801BA940
  c->lr=0x801BA948u; f_801C00B0(c); // 801BA944
  c->r[3]=c->r[25]|c->r[25]; // 801BA948
  c->lr=0x801BA950u; f_801B522C(c); // 801BA94C
  cmps(c,0,(int32_t)c->r[3],0); // 801BA950
  if (crb(c,2)) { goto L_801BA968; } // 801BA954
  c->r[0]=R32(c->r[29]+0x00000000u); // 801BA958
  W32(c->r[3]+0x00000010u,c->r[0]); // 801BA95C
  c->r[0]=R32(c->r[29]+0x00000004u); // 801BA960
  W32(c->r[3]+0x00000014u,c->r[0]); // 801BA964
L_801BA968:;
  c->r[11]=c->r[1]+0x00000030u; // 801BA968
  c->lr=0x801BA970u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BA96C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BA970
  c->lr=c->r[0]; // 801BA974
  c->r[1]=c->r[1]+0x00000030u; // 801BA978
  return; // 801BA97C
}

// BTM_DeviceAuthorized
void f_801BA980(Ctx* __restrict c) {
  trace_call(0x801BA980u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA980
  c->r[0]=c->lr; // 801BA984
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BA988
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BA98C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BA990
  c->r[30]=c->r[3]|c->r[3]; // 801BA994
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BA998
  c->r[29]=c->r[5]|c->r[5]; // 801BA99C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BA9A0
  c->r[28]=c->r[4]|c->r[4]; // 801BA9A4
  c->lr=0x801BA9ACu; f_801B522C(c); // 801BA9A8
  cmps(c,1,(int32_t)c->r[3],0); // 801BA9AC
  c->r[31]=c->r[3]|c->r[3]; // 801BA9B0
  if (!crb(c,6)) { goto L_801BA9FC; } // 801BA9B4
  c->r[3]=0u+0x803D0000u; // 801BA9B8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BA9BC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BA9C0
  cmpu(c,0,c->r[0],0x00000002u); // 801BA9C4
  if (crb(c,0)) { goto L_801BAB3C; } // 801BA9C8
  c->r[3]=0u+0x000D0000u; // 801BA9CC
  c->r[4]=0u+0x80330000u; // 801BA9D0
  c->r[5]=R8(c->r[30]+0x00000000u); // 801BA9D4
  c->r[3]=c->r[3]+0x00000001u; // 801BA9D8
  c->r[6]=R8(c->r[30]+0x00000001u); // 801BA9DC
  c->r[4]=c->r[4]+0x000030D8u; // 801BA9E0
  c->r[7]=R8(c->r[30]+0x00000002u); // 801BA9E4
  c->r[8]=R8(c->r[30]+0x00000003u); // 801BA9E8
  c->r[9]=R8(c->r[30]+0x00000004u); // 801BA9EC
  c->r[10]=R8(c->r[30]+0x00000005u); // 801BA9F0
  c->lr=0x801BA9F8u; f_801ACBB0(c); // 801BA9F4
  goto L_801BAB3C; // 801BA9F8
L_801BA9FC:;
  c->r[3]=0u+0x803D0000u; // 801BA9FC
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BAA00
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BAA04
  cmpu(c,0,c->r[0],0x00000004u); // 801BAA08
  if (crb(c,0)) { goto L_801BAA38; } // 801BAA0C
  c->r[3]=0u+0x000D0000u; // 801BAA10
  c->r[4]=0u+0x80330000u; // 801BAA14
  c->r[5]=c->r[28]|c->r[28]; // 801BAA18
  c->r[3]=c->r[3]+0x00000003u; // 801BAA1C
  c->r[4]=c->r[4]+0x00003138u; // 801BAA20
  if (crb(c,6)) { goto L_801BAA30; } // 801BAA24
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801BAA28
  goto L_801BAA34; // 801BAA2C
L_801BAA30:;
  c->r[6]=0u+0x00000000u; // 801BAA30
L_801BAA34:;
  c->lr=0x801BAA38u; f_801ACB50(c); // 801BAA34
L_801BAA38:;
  cmps(c,0,(int32_t)c->r[28],0); // 801BAA38
  if (!crb(c,2)) { goto L_801BAA5C; } // 801BAA3C
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BAA40
  c->r[0]=c->r[0]|0x00000001u; // 801BAA44
  W8(c->r[31]+0x00000076u,c->r[0]); // 801BAA48
  c->r[0]=R32(c->r[29]+0x00000000u); // 801BAA4C
  W32(c->r[31]+0x00000010u,c->r[0]); // 801BAA50
  c->r[0]=R32(c->r[29]+0x00000004u); // 801BAA54
  W32(c->r[31]+0x00000014u,c->r[0]); // 801BAA58
L_801BAA5C:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801BAA5C
  cmpu(c,0,c->r[0],0x00000004u); // 801BAA60
  if (!crb(c,2)) { goto L_801BAB3C; } // 801BAA64
  c->r[29]=0u+0x00000000u; // 801BAA68
  cmps(c,0,(int32_t)c->r[28],0); // 801BAA6C
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 801BAA70
  if (crb(c,2)) { goto L_801BAAD0; } // 801BAA74
  c->r[0]=R32(c->r[31]+0x00000004u); // 801BAA78
  cmps(c,0,(int32_t)c->r[0],0); // 801BAA7C
  if (crb(c,2)) { goto L_801BAB3C; } // 801BAA80
  c->r[0]=R8(c->r[31]+0x00000080u); // 801BAA84
  cmps(c,0,(int32_t)c->r[0],0); // 801BAA88
  if (crb(c,2)) { goto L_801BAAAC; } // 801BAA8C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801BAA90
  cmps(c,0,(int32_t)c->r[3],0); // 801BAA94
  if (crb(c,2)) { goto L_801BAAAC; } // 801BAA98
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BAA9C
  cmpu(c,0,c->r[0],0x00000003u); // 801BAAA0
  if (!crb(c,2)) { goto L_801BAAAC; } // 801BAAA4
  W32(c->r[3]+0x00000004u,c->r[29]); // 801BAAA8
L_801BAAAC:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801BAAAC
  c->r[3]=c->r[30]|c->r[30]; // 801BAAB0
  c->r[5]=c->r[28]|c->r[28]; // 801BAAB4
  c->r[4]=R32(c->r[31]+0x00000008u); // 801BAAB8
  c->ctr=c->r[12]; // 801BAABC
  if (true) { c->lr=0x801BAAC4u; dispatch(c,c->ctr); } // 801BAAC0
  c->r[0]=0u+0x00000000u; // 801BAAC4
  W32(c->r[31]+0x00000004u,c->r[0]); // 801BAAC8
  goto L_801BAB3C; // 801BAACC
L_801BAAD0:;
  c->r[3]=c->r[31]|c->r[31]; // 801BAAD0
  c->lr=0x801BAAD8u; f_801BCE7C(c); // 801BAAD4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801BAAD8
  c->r[4]=c->r[3]|c->r[3]; // 801BAADC
  cmpu(c,0,c->r[0],0x00000001u); // 801BAAE0
  if (crb(c,2)) { goto L_801BAB3C; } // 801BAAE4
  c->r[0]=R32(c->r[31]+0x00000004u); // 801BAAE8
  cmps(c,0,(int32_t)c->r[0],0); // 801BAAEC
  if (crb(c,2)) { goto L_801BAB3C; } // 801BAAF0
  c->r[0]=R8(c->r[31]+0x00000080u); // 801BAAF4
  cmps(c,0,(int32_t)c->r[0],0); // 801BAAF8
  if (crb(c,2)) { goto L_801BAB1C; } // 801BAAFC
  c->r[3]=R32(c->r[31]+0x00000000u); // 801BAB00
  cmps(c,0,(int32_t)c->r[3],0); // 801BAB04
  if (crb(c,2)) { goto L_801BAB1C; } // 801BAB08
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BAB0C
  cmpu(c,0,c->r[0],0x00000003u); // 801BAB10
  if (!crb(c,2)) { goto L_801BAB1C; } // 801BAB14
  W32(c->r[3]+0x00000004u,c->r[29]); // 801BAB18
L_801BAB1C:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801BAB1C
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 801BAB20
  c->r[3]=c->r[30]|c->r[30]; // 801BAB24
  c->r[4]=R32(c->r[31]+0x00000008u); // 801BAB28
  c->ctr=c->r[12]; // 801BAB2C
  if (true) { c->lr=0x801BAB34u; dispatch(c,c->ctr); } // 801BAB30
  c->r[0]=0u+0x00000000u; // 801BAB34
  W32(c->r[31]+0x00000004u,c->r[0]); // 801BAB38
L_801BAB3C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BAB3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BAB40
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BAB44
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BAB48
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BAB4C
  c->lr=c->r[0]; // 801BAB50
  c->r[1]=c->r[1]+0x00000020u; // 801BAB54
  return; // 801BAB58
}

// BTM_SecBond
void f_801BAB5C(Ctx* __restrict c) {
  trace_call(0x801BAB5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BAB5C
  c->r[0]=c->lr; // 801BAB60
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BAB64
  c->r[11]=c->r[1]+0x00000020u; // 801BAB68
  c->lr=0x801BAB70u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BAB6C
  c->r[7]=0u+0x803D0000u; // 801BAB70
  c->r[31]=0u+0x80330000u; // 801BAB74
  c->r[7]=c->r[7]+0xFFFF8118u; // 801BAB78
  c->r[28]=c->r[3]|c->r[3]; // 801BAB7C
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801BAB80
  c->r[29]=c->r[4]|c->r[4]; // 801BAB84
  c->r[26]=c->r[5]|c->r[5]; // 801BAB88
  c->r[27]=c->r[6]|c->r[6]; // 801BAB8C
  cmpu(c,0,c->r[0],0x00000003u); // 801BAB90
  c->r[31]=c->r[31]+0x00002F38u; // 801BAB94
  if (crb(c,0)) { goto L_801BABC4; } // 801BAB98
  c->r[3]=0u+0x000D0000u; // 801BAB9C
  c->r[5]=R8(c->r[28]+0x00000000u); // 801BABA0
  c->r[6]=R8(c->r[28]+0x00000001u); // 801BABA4
  c->r[3]=c->r[3]+0x00000002u; // 801BABA8
  c->r[7]=R8(c->r[28]+0x00000002u); // 801BABAC
  c->r[4]=c->r[31]+0x00000230u; // 801BABB0
  c->r[8]=R8(c->r[28]+0x00000003u); // 801BABB4
  c->r[9]=R8(c->r[28]+0x00000004u); // 801BABB8
  c->r[10]=R8(c->r[28]+0x00000005u); // 801BABBC
  c->lr=0x801BABC4u; f_801ACBB0(c); // 801BABC0
L_801BABC4:;
  cmpu(c,0,c->r[29],0x00000010u); // 801BABC4
  if (!crb(c,1)) { goto L_801BABF8; } // 801BABC8
  c->r[3]=0u+0x803D0000u; // 801BABCC
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BABD0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BABD4
  cmpu(c,0,c->r[0],0x00000001u); // 801BABD8
  if (crb(c,0)) { goto L_801BABF0; } // 801BABDC
  c->r[5]=c->r[29]|c->r[29]; // 801BABE0
  c->r[4]=c->r[31]+0x00000260u; // 801BABE4
  c->r[3]=0u+0x000D0000u; // 801BABE8
  c->lr=0x801BABF0u; f_801ACB38(c); // 801BABEC
L_801BABF0:;
  c->r[3]=0u+0x00000005u; // 801BABF0
  goto L_801BAF10; // 801BABF4
L_801BABF8:;
  c->r[3]=c->r[28]|c->r[28]; // 801BABF8
  c->lr=0x801BAC00u; f_801B522C(c); // 801BABFC
  cmps(c,0,(int32_t)c->r[3],0); // 801BAC00
  c->r[30]=c->r[3]|c->r[3]; // 801BAC04
  if (!crb(c,2)) { goto L_801BAC48; } // 801BAC08
  c->r[3]=c->r[28]|c->r[28]; // 801BAC0C
  c->lr=0x801BAC14u; f_801B5054(c); // 801BAC10
  cmps(c,0,(int32_t)c->r[3],0); // 801BAC14
  c->r[30]=c->r[3]|c->r[3]; // 801BAC18
  if (!crb(c,2)) { goto L_801BAC48; } // 801BAC1C
  c->r[3]=0u+0x803D0000u; // 801BAC20
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BAC24
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BAC28
  cmpu(c,0,c->r[0],0x00000001u); // 801BAC2C
  if (crb(c,0)) { goto L_801BAC40; } // 801BAC30
  c->r[4]=c->r[31]+0x00000280u; // 801BAC34
  c->r[3]=0u+0x000D0000u; // 801BAC38
  c->lr=0x801BAC40u; f_801ACB20(c); // 801BAC3C
L_801BAC40:;
  c->r[3]=0u+0x00000003u; // 801BAC40
  goto L_801BAF10; // 801BAC44
L_801BAC48:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801BAC48
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BAC4C
  if (crb(c,2)) { goto L_801BAC8C; } // 801BAC50
  c->r[0]=R8(c->r[30]+0x00000076u); // 801BAC54
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801BAC58
  if (crb(c,2)) { goto L_801BAC8C; } // 801BAC5C
  c->r[3]=0u+0x803D0000u; // 801BAC60
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BAC64
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BAC68
  cmpu(c,0,c->r[0],0x00000002u); // 801BAC6C
  if (crb(c,0)) { goto L_801BAC84; } // 801BAC70
  c->r[3]=0u+0x000D0000u; // 801BAC74
  c->r[4]=c->r[31]+0x000002A0u; // 801BAC78
  c->r[3]=c->r[3]+0x00000001u; // 801BAC7C
  c->lr=0x801BAC84u; f_801ACB20(c); // 801BAC80
L_801BAC84:;
  c->r[3]=0u+0x00000000u; // 801BAC84
  goto L_801BAF10; // 801BAC88
L_801BAC8C:;
  c->r[3]=c->r[28]|c->r[28]; // 801BAC8C
  c->r[4]=0u+0x00000000u; // 801BAC90
  c->lr=0x801BAC98u; f_801B6A18(c); // 801BAC94
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BAC98
  if (crb(c,2)) { goto L_801BACA8; } // 801BAC9C
  c->r[3]=0u+0x00000003u; // 801BACA0
  goto L_801BAF10; // 801BACA4
L_801BACA8:;
  c->r[0]=0u+0x00000050u; // 801BACA8
  c->r[3]=0u+0x803D0000u; // 801BACAC
  W8(c->r[30]+0x00000081u,c->r[0]); // 801BACB0
  c->r[0]=0u+0x00000001u; // 801BACB4
  cmps(c,0,(int32_t)c->r[29],0); // 801BACB8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BACBC
  W8(c->r[30]+0x00000080u,c->r[0]); // 801BACC0
  c->r[0]=R32(c->r[27]+0x00000000u); // 801BACC4
  W32(c->r[30]+0x00000010u,c->r[0]); // 801BACC8
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BACCC
  W32(c->r[30]+0x00000014u,c->r[0]); // 801BACD0
  W8(c->r[3]+0x0000197Fu,c->r[29]); // 801BACD4
  if (crb(c,2)) { goto L_801BACEC; } // 801BACD8
  c->r[4]=c->r[26]|c->r[26]; // 801BACDC
  c->r[5]=c->r[29]|c->r[29]; // 801BACE0
  c->r[3]=c->r[3]+0x00001980u; // 801BACE4
  c->lr=0x801BACECu; f_80004338(c); // 801BACE8
L_801BACEC:;
  c->r[3]=R8(c->r[30]+0x00000076u); // 801BACEC
  c->r[0]=0u+0xFFFFFFE9u; // 801BACF0
  c->r[0]=c->r[3]&c->r[0]; // 801BACF4
  W8(c->r[30]+0x00000076u,c->r[0]); // 801BACF8
  c->r[0]=R8(c->r[30]+0x00000023u); // 801BACFC
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 801BAD00
  cmps(c,0,(int32_t)c->r[0],5); // 801BAD04
  if (!crb(c,2)) { goto L_801BAD3C; } // 801BAD08
  c->r[0]=R8(c->r[30]+0x00000024u); // 801BAD0C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BAD10
  if (crb(c,2)) { goto L_801BAD3C; } // 801BAD14
  c->r[4]=0u+0x803D0000u; // 801BAD18
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BAD1C
  c->r[0]=R8(c->r[4]+0x00000020u); // 801BAD20
  cmpu(c,0,c->r[0],0x00000001u); // 801BAD24
  if (crb(c,2)) { goto L_801BAD3C; } // 801BAD28
  c->r[0]=0u+0x00000001u; // 801BAD2C
  c->r[3]=0u+0x00000001u; // 801BAD30
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 801BAD34
  c->lr=0x801BAD3Cu; f_801C1094(c); // 801BAD38
L_801BAD3C:;
  c->r[29]=0u+0x803D0000u; // 801BAD3C
  c->r[27]=0u+0x00000000u; // 801BAD40
  c->r[29]=c->r[29]+0xFFFF8118u; // 801BAD44
  W8(c->r[29]+0x0000197Eu,c->r[27]); // 801BAD48
  c->r[0]=R16(c->r[30]+0x00000018u); // 801BAD4C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BAD50
  if (crb(c,2)) { goto L_801BAD90; } // 801BAD54
  c->r[3]=R8(c->r[30]+0x00000076u); // 801BAD58
  c->r[0]=0u+0x00000001u; // 801BAD5C
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFEFu; // 801BAD60
  W8(c->r[30]+0x00000076u,c->r[3]); // 801BAD64
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801BAD68
  c->r[3]=R16(c->r[30]+0x00000018u); // 801BAD6C
  c->lr=0x801BAD74u; f_801C03C4(c); // 801BAD70
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BAD74
  if (!crb(c,2)) { goto L_801BAD84; } // 801BAD78
  c->r[3]=0u+0x00000003u; // 801BAD7C
  goto L_801BAF10; // 801BAD80
L_801BAD84:;
  W8(c->r[29]+0x0000197Du,c->r[27]); // 801BAD84
  c->r[3]=0u+0x00000001u; // 801BAD88
  goto L_801BAF10; // 801BAD8C
L_801BAD90:;
  c->r[0]=R8(c->r[29]+0x00001978u); // 801BAD90
  cmpu(c,0,c->r[0],0x00000003u); // 801BAD94
  if (crb(c,2)) { goto L_801BAE00; } // 801BAD98
  c->r[0]=R8(c->r[29]+0x000027C0u); // 801BAD9C
  cmpu(c,0,c->r[0],0x00000005u); // 801BADA0
  if (crb(c,0)) { goto L_801BADB8; } // 801BADA4
  c->r[3]=0u+0x000D0000u; // 801BADA8
  c->r[4]=c->r[31]+0x000002C0u; // 801BADAC
  c->r[3]=c->r[3]+0x00000004u; // 801BADB0
  c->lr=0x801BADB8u; f_801ACB20(c); // 801BADB4
L_801BADB8:;
  c->r[3]=0u+0x00000001u; // 801BADB8
  c->lr=0x801BADC0u; f_801C1608(c); // 801BADBC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BADC0
  if (!crb(c,2)) { goto L_801BADF0; } // 801BADC4
  c->r[3]=0u+0x803D0000u; // 801BADC8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BADCC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BADD0
  cmpu(c,0,c->r[0],0x00000001u); // 801BADD4
  if (crb(c,0)) { goto L_801BADE8; } // 801BADD8
  c->r[4]=c->r[31]+0x000002E4u; // 801BADDC
  c->r[3]=0u+0x000D0000u; // 801BADE0
  c->lr=0x801BADE8u; f_801ACB20(c); // 801BADE4
L_801BADE8:;
  c->r[3]=0u+0x00000003u; // 801BADE8
  goto L_801BAF10; // 801BADEC
L_801BADF0:;
  c->r[3]=0u+0x803D0000u; // 801BADF0
  c->r[0]=0u+0x00000001u; // 801BADF4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BADF8
  W8(c->r[3]+0x0000197Bu,c->r[0]); // 801BADFC
L_801BAE00:;
  c->r[3]=0u+0x803D0000u; // 801BAE00
  c->r[0]=0u+0x00000001u; // 801BAE04
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BAE08
  W8(c->r[3]+0x0000197Du,c->r[0]); // 801BAE0C
  c->lr=0x801BAE14u; f_801B6570(c); // 801BAE10
  c->r[4]=R8(c->r[3]+0x00000000u); // 801BAE14
  c->r[0]=0u+0x00000000u; // 801BAE18
  c->r[3]=c->r[28]|c->r[28]; // 801BAE1C
  W8(c->r[30]+0x00000085u,c->r[0]); // 801BAE20
  c->r[27]=rotl(c->r[4],27)&0x00000001u; // 801BAE24
  c->lr=0x801BAE2Cu; f_801B7938(c); // 801BAE28
  cmps(c,0,(int32_t)c->r[3],0); // 801BAE2C
  c->r[4]=c->r[3]|c->r[3]; // 801BAE30
  if (crb(c,2)) { goto L_801BAE5C; } // 801BAE34
  c->r[0]=R16(c->r[4]+0x00000000u); // 801BAE38
  c->r[3]=c->r[28]|c->r[28]; // 801BAE3C
  c->r[5]=R8(c->r[4]+0x0000000Bu); // 801BAE40
  c->r[8]=c->r[27]|c->r[27]; // 801BAE44
  c->r[6]=R8(c->r[4]+0x0000000Du); // 801BAE48
  c->r[7]=c->r[0]|0x00008000u; // 801BAE4C
  c->r[4]=0u+0x00000018u; // 801BAE50
  c->lr=0x801BAE58u; f_801BFBC0(c); // 801BAE54
  goto L_801BAE78; // 801BAE58
L_801BAE5C:;
  c->r[7]=R16(c->r[30]+0x0000001Au); // 801BAE5C
  c->r[3]=c->r[28]|c->r[28]; // 801BAE60
  c->r[8]=c->r[27]|c->r[27]; // 801BAE64
  c->r[4]=0u+0x00000018u; // 801BAE68
  c->r[5]=0u+0x00000001u; // 801BAE6C
  c->r[6]=0u+0x00000000u; // 801BAE70
  c->lr=0x801BAE78u; f_801BFBC0(c); // 801BAE74
L_801BAE78:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BAE78
  if (crb(c,2)) { goto L_801BAE88; } // 801BAE7C
  c->r[3]=0u+0x00000001u; // 801BAE80
  goto L_801BAF10; // 801BAE84
L_801BAE88:;
  c->r[3]=0u+0x803D0000u; // 801BAE88
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BAE8C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BAE90
  cmpu(c,0,c->r[0],0x00000001u); // 801BAE94
  if (crb(c,0)) { goto L_801BAEA8; } // 801BAE98
  c->r[4]=c->r[31]+0x000002E4u; // 801BAE9C
  c->r[3]=0u+0x000D0000u; // 801BAEA0
  c->lr=0x801BAEA8u; f_801ACB20(c); // 801BAEA4
L_801BAEA8:;
  c->r[4]=0u+0x803D0000u; // 801BAEA8
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BAEAC
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801BAEB0
  cmps(c,0,(int32_t)c->r[0],0); // 801BAEB4
  if (crb(c,2)) { goto L_801BAF0C; } // 801BAEB8
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801BAEBC
  c->r[3]=0u+0x00000000u; // 801BAEC0
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801BAEC4
  cmpu(c,0,c->r[0],0x00000005u); // 801BAEC8
  if (crb(c,0)) { goto L_801BAEF0; } // 801BAECC
  c->r[5]=R8(c->r[4]+0x00001978u); // 801BAED0
  c->r[3]=0u+0x000D0000u; // 801BAED4
  c->r[3]=c->r[3]+0x00000004u; // 801BAED8
  c->r[4]=c->r[31]+0x000002FCu; // 801BAEDC
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 801BAEE0
  c->r[0]=cntlz(c->r[0]); // 801BAEE4
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BAEE8
  c->lr=0x801BAEF0u; f_801ACB38(c); // 801BAEEC
L_801BAEF0:;
  c->r[3]=0u+0x803D0000u; // 801BAEF0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BAEF4
  c->r[3]=R8(c->r[3]+0x00001978u); // 801BAEF8
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801BAEFC
  c->r[0]=cntlz(c->r[0]); // 801BAF00
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801BAF04
  c->lr=0x801BAF0Cu; f_801C1608(c); // 801BAF08
L_801BAF0C:;
  c->r[3]=0u+0x00000003u; // 801BAF0C
L_801BAF10:;
  c->r[11]=c->r[1]+0x00000020u; // 801BAF10
  c->lr=0x801BAF18u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BAF14
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BAF18
  c->lr=c->r[0]; // 801BAF1C
  c->r[1]=c->r[1]+0x00000020u; // 801BAF20
  return; // 801BAF24
}

// btm_sec_l2cap_access_req
void f_801BAF28(Ctx* __restrict c) {
  trace_call(0x801BAF28u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BAF28
  c->r[0]=c->lr; // 801BAF2C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BAF30
  c->r[11]=c->r[1]+0x00000030u; // 801BAF34
  c->lr=0x801BAF3Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BAF38
  c->r[31]=0u+0x80330000u; // 801BAF3C
  c->r[24]=c->r[3]|c->r[3]; // 801BAF40
  c->r[25]=c->r[4]|c->r[4]; // 801BAF44
  c->r[26]=c->r[5]|c->r[5]; // 801BAF48
  c->r[27]=c->r[6]|c->r[6]; // 801BAF4C
  c->r[28]=c->r[7]|c->r[7]; // 801BAF50
  c->r[31]=c->r[31]+0x00002F38u; // 801BAF54
  c->lr=0x801BAF5Cu; f_801B522C(c); // 801BAF58
  cmps(c,0,(int32_t)c->r[3],0); // 801BAF5C
  c->r[30]=c->r[3]|c->r[3]; // 801BAF60
  if (!crb(c,2)) { goto L_801BAFCC; } // 801BAF64
  c->r[3]=c->r[24]|c->r[24]; // 801BAF68
  c->lr=0x801BAF70u; f_801B5054(c); // 801BAF6C
  cmps(c,0,(int32_t)c->r[3],0); // 801BAF70
  c->r[30]=c->r[3]|c->r[3]; // 801BAF74
  if (!crb(c,2)) { goto L_801BAFCC; } // 801BAF78
  c->r[3]=0u+0x803D0000u; // 801BAF7C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BAF80
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BAF84
  cmpu(c,0,c->r[0],0x00000002u); // 801BAF88
  if (crb(c,0)) { goto L_801BAFA4; } // 801BAF8C
  c->r[3]=0u+0x000D0000u; // 801BAF90
  c->r[5]=c->r[25]|c->r[25]; // 801BAF94
  c->r[3]=c->r[3]+0x00000001u; // 801BAF98
  c->r[4]=c->r[31]+0x00000410u; // 801BAF9C
  c->lr=0x801BAFA4u; f_801ACB38(c); // 801BAFA0
L_801BAFA4:;
  cmps(c,0,(int32_t)c->r[28],0); // 801BAFA4
  if (crb(c,2)) { goto L_801BAFC4; } // 801BAFA8
  c->r[12]=c->r[28]|c->r[28]; // 801BAFAC
  c->r[3]=c->r[24]|c->r[24]; // 801BAFB0
  c->r[4]=0u+0x00000000u; // 801BAFB4
  c->r[5]=0u+0x00000003u; // 801BAFB8
  c->ctr=c->r[12]; // 801BAFBC
  if (true) { c->lr=0x801BAFC4u; dispatch(c,c->ctr); } // 801BAFC0
L_801BAFC4:;
  c->r[3]=0u+0x00000003u; // 801BAFC4
  goto L_801BB374; // 801BAFC8
L_801BAFCC:;
  c->r[3]=0u+0x803D0000u; // 801BAFCC
  c->r[0]=0u+0x00000004u; // 801BAFD0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BAFD4
  W16(c->r[30]+0x00000018u,c->r[26]); // 801BAFD8
  c->r[4]=c->r[3]+0x00001990u; // 801BAFDC
  c->r[3]=0u+0x00000000u; // 801BAFE0
  c->ctr=c->r[0]; // 801BAFE4
L_801BAFE8:;
  c->r[0]=R8(c->r[4]+0x0000000Eu); // 801BAFE8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BAFEC
  if (crb(c,2)) { goto L_801BB004; } // 801BAFF0
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801BAFF4
  cmpu(c,0,c->r[0],c->r[25]); // 801BAFF8
  if (!crb(c,2)) { goto L_801BB004; } // 801BAFFC
  goto L_801BB0B4; // 801BB000
L_801BB004:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801BB004
  c->r[4]=c->r[4]+0x0000003Cu; // 801BB008
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB00C
  if (crb(c,2)) { goto L_801BB024; } // 801BB010
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801BB014
  cmpu(c,0,c->r[0],c->r[25]); // 801BB018
  if (!crb(c,2)) { goto L_801BB024; } // 801BB01C
  goto L_801BB0B4; // 801BB020
L_801BB024:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801BB024
  c->r[4]=c->r[4]+0x0000003Cu; // 801BB028
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB02C
  if (crb(c,2)) { goto L_801BB044; } // 801BB030
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801BB034
  cmpu(c,0,c->r[0],c->r[25]); // 801BB038
  if (!crb(c,2)) { goto L_801BB044; } // 801BB03C
  goto L_801BB0B4; // 801BB040
L_801BB044:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801BB044
  c->r[4]=c->r[4]+0x0000003Cu; // 801BB048
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB04C
  if (crb(c,2)) { goto L_801BB064; } // 801BB050
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801BB054
  cmpu(c,0,c->r[0],c->r[25]); // 801BB058
  if (!crb(c,2)) { goto L_801BB064; } // 801BB05C
  goto L_801BB0B4; // 801BB060
L_801BB064:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801BB064
  c->r[4]=c->r[4]+0x0000003Cu; // 801BB068
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB06C
  if (crb(c,2)) { goto L_801BB084; } // 801BB070
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801BB074
  cmpu(c,0,c->r[0],c->r[25]); // 801BB078
  if (!crb(c,2)) { goto L_801BB084; } // 801BB07C
  goto L_801BB0B4; // 801BB080
L_801BB084:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801BB084
  c->r[4]=c->r[4]+0x0000003Cu; // 801BB088
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB08C
  if (crb(c,2)) { goto L_801BB0A4; } // 801BB090
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801BB094
  cmpu(c,0,c->r[0],c->r[25]); // 801BB098
  if (!crb(c,2)) { goto L_801BB0A4; } // 801BB09C
  goto L_801BB0B4; // 801BB0A0
L_801BB0A4:;
  c->r[3]=c->r[3]+0x00000005u; // 801BB0A4
  c->r[4]=c->r[4]+0x0000003Cu; // 801BB0A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BAFE8; } // 801BB0AC
  c->r[4]=0u+0x00000000u; // 801BB0B0
L_801BB0B4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BB0B4
  if (!crb(c,2)) { goto L_801BB10C; } // 801BB0B8
  c->r[3]=0u+0x803D0000u; // 801BB0BC
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BB0C0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BB0C4
  cmpu(c,0,c->r[0],0x00000002u); // 801BB0C8
  if (crb(c,0)) { goto L_801BB0E4; } // 801BB0CC
  c->r[3]=0u+0x000D0000u; // 801BB0D0
  c->r[5]=c->r[25]|c->r[25]; // 801BB0D4
  c->r[3]=c->r[3]+0x00000001u; // 801BB0D8
  c->r[4]=c->r[31]+0x00000448u; // 801BB0DC
  c->lr=0x801BB0E4u; f_801ACB38(c); // 801BB0E0
L_801BB0E4:;
  cmps(c,0,(int32_t)c->r[28],0); // 801BB0E4
  if (crb(c,2)) { goto L_801BB104; } // 801BB0E8
  c->r[12]=c->r[28]|c->r[28]; // 801BB0EC
  c->r[3]=c->r[24]|c->r[24]; // 801BB0F0
  c->r[4]=0u+0x00000000u; // 801BB0F4
  c->r[5]=0u+0x00000004u; // 801BB0F8
  c->ctr=c->r[12]; // 801BB0FC
  if (true) { c->lr=0x801BB104u; dispatch(c,c->ctr); } // 801BB100
L_801BB104:;
  c->r[3]=0u+0x00000004u; // 801BB104
  goto L_801BB374; // 801BB108
L_801BB10C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801BB10C
  if (crb(c,2)) { goto L_801BB124; } // 801BB110
  if (crb(c,2)) { goto L_801BB128; } // 801BB114
  c->r[0]=R32(c->r[30]+0x00000000u); // 801BB118
  cmps(c,0,(int32_t)c->r[0],0); // 801BB11C
  if (!crb(c,2)) { goto L_801BB128; } // 801BB120
L_801BB124:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 801BB124
L_801BB128:;
  c->r[3]=0u+0x803D0000u; // 801BB128
  c->r[0]=0u+0x00000006u; // 801BB12C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BB130
  c->r[29]=R8(c->r[4]+0x0000000Eu); // 801BB134
  c->r[7]=c->r[3]+0x00001990u; // 801BB138
  c->r[6]=0u+0x00000000u; // 801BB13C
  c->r[5]=0u+0x00000000u; // 801BB140
  c->ctr=c->r[0]; // 801BB144
L_801BB148:;
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801BB148
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB14C
  if (crb(c,2)) { goto L_801BB180; } // 801BB150
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801BB154
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801BB158
  cmpu(c,0,c->r[3],c->r[0]); // 801BB15C
  if (!crb(c,2)) { goto L_801BB180; } // 801BB160
  cmps(c,0,(int32_t)c->r[6],0); // 801BB164
  if (!crb(c,2)) { goto L_801BB244; } // 801BB168
  cmpu(c,0,c->r[4],c->r[7]); // 801BB16C
  if (!crb(c,2)) { goto L_801BB180; } // 801BB170
  c->r[6]=0u+0x00000001u; // 801BB174
  goto L_801BB180; // 801BB178
  goto L_801BB244; // 801BB17C
L_801BB180:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 801BB180
  c->r[7]=c->r[7]+0x0000003Cu; // 801BB184
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB188
  if (crb(c,2)) { goto L_801BB1BC; } // 801BB18C
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801BB190
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801BB194
  cmpu(c,0,c->r[3],c->r[0]); // 801BB198
  if (!crb(c,2)) { goto L_801BB1BC; } // 801BB19C
  cmps(c,0,(int32_t)c->r[6],0); // 801BB1A0
  if (!crb(c,2)) { goto L_801BB244; } // 801BB1A4
  cmpu(c,0,c->r[4],c->r[7]); // 801BB1A8
  if (!crb(c,2)) { goto L_801BB1BC; } // 801BB1AC
  c->r[6]=0u+0x00000001u; // 801BB1B0
  goto L_801BB1BC; // 801BB1B4
  goto L_801BB244; // 801BB1B8
L_801BB1BC:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 801BB1BC
  c->r[7]=c->r[7]+0x0000003Cu; // 801BB1C0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB1C4
  if (crb(c,2)) { goto L_801BB1F8; } // 801BB1C8
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801BB1CC
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801BB1D0
  cmpu(c,0,c->r[3],c->r[0]); // 801BB1D4
  if (!crb(c,2)) { goto L_801BB1F8; } // 801BB1D8
  cmps(c,0,(int32_t)c->r[6],0); // 801BB1DC
  if (!crb(c,2)) { goto L_801BB244; } // 801BB1E0
  cmpu(c,0,c->r[4],c->r[7]); // 801BB1E4
  if (!crb(c,2)) { goto L_801BB1F8; } // 801BB1E8
  c->r[6]=0u+0x00000001u; // 801BB1EC
  goto L_801BB1F8; // 801BB1F0
  goto L_801BB244; // 801BB1F4
L_801BB1F8:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 801BB1F8
  c->r[7]=c->r[7]+0x0000003Cu; // 801BB1FC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB200
  if (crb(c,2)) { goto L_801BB234; } // 801BB204
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801BB208
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801BB20C
  cmpu(c,0,c->r[3],c->r[0]); // 801BB210
  if (!crb(c,2)) { goto L_801BB234; } // 801BB214
  cmps(c,0,(int32_t)c->r[6],0); // 801BB218
  if (!crb(c,2)) { goto L_801BB244; } // 801BB21C
  cmpu(c,0,c->r[4],c->r[7]); // 801BB220
  if (!crb(c,2)) { goto L_801BB234; } // 801BB224
  c->r[6]=0u+0x00000001u; // 801BB228
  goto L_801BB234; // 801BB22C
  goto L_801BB244; // 801BB230
L_801BB234:;
  c->r[5]=c->r[5]+0x00000003u; // 801BB234
  c->r[7]=c->r[7]+0x0000003Cu; // 801BB238
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BB148; } // 801BB23C
  c->r[7]=0u+0x00000000u; // 801BB240
L_801BB244:;
  cmps(c,0,(int32_t)c->r[7],0); // 801BB244
  if (crb(c,2)) { goto L_801BB29C; } // 801BB248
  c->r[3]=0u+0x803D0000u; // 801BB24C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BB250
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BB254
  cmpu(c,0,c->r[0],0x00000004u); // 801BB258
  if (crb(c,0)) { goto L_801BB274; } // 801BB25C
  c->r[3]=0u+0x000D0000u; // 801BB260
  c->r[5]=c->r[25]|c->r[25]; // 801BB264
  c->r[3]=c->r[3]+0x00000003u; // 801BB268
  c->r[4]=c->r[31]+0x0000048Cu; // 801BB26C
  c->lr=0x801BB274u; f_801ACB38(c); // 801BB270
L_801BB274:;
  cmps(c,0,(int32_t)c->r[28],0); // 801BB274
  if (crb(c,2)) { goto L_801BB294; } // 801BB278
  c->r[12]=c->r[28]|c->r[28]; // 801BB27C
  c->r[3]=c->r[24]|c->r[24]; // 801BB280
  c->r[4]=0u+0x00000000u; // 801BB284
  c->r[5]=0u+0x00000000u; // 801BB288
  c->ctr=c->r[12]; // 801BB28C
  if (true) { c->lr=0x801BB294u; dispatch(c,c->ctr); } // 801BB290
L_801BB294:;
  c->r[3]=0u+0x00000000u; // 801BB294
  goto L_801BB374; // 801BB298
L_801BB29C:;
  W32(c->r[30]+0x00000004u,c->r[28]); // 801BB29C
  c->r[0]=0u+0x00000000u; // 801BB2A0
  c->r[3]=0u+0x803D0000u; // 801BB2A4
  W32(c->r[30]+0x00000008u,c->r[0]); // 801BB2A8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BB2AC
  W8(c->r[30]+0x00000081u,c->r[29]); // 801BB2B0
  W8(c->r[30]+0x00000080u,c->r[27]); // 801BB2B4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BB2B8
  cmpu(c,0,c->r[0],0x00000004u); // 801BB2BC
  if (crb(c,0)) { goto L_801BB2E8; } // 801BB2C0
  c->r[3]=0u+0x000D0000u; // 801BB2C4
  c->r[7]=R8(c->r[30]+0x0000007Fu); // 801BB2C8
  c->r[8]=R8(c->r[30]+0x00000076u); // 801BB2CC
  c->r[5]=c->r[25]|c->r[25]; // 801BB2D0
  c->r[6]=c->r[26]|c->r[26]; // 801BB2D4
  c->r[9]=c->r[29]|c->r[29]; // 801BB2D8
  c->r[3]=c->r[3]+0x00000003u; // 801BB2DC
  c->r[4]=c->r[31]+0x000004D0u; // 801BB2E0
  c->lr=0x801BB2E8u; f_801ACB98(c); // 801BB2E4
L_801BB2E8:;
  cmps(c,0,(int32_t)c->r[27],0); // 801BB2E8
  if (!crb(c,2)) { goto L_801BB334; } // 801BB2EC
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801BB2F0
  if (crb(c,2)) { goto L_801BB334; } // 801BB2F4
  c->r[0]=R8(c->r[30]+0x00000076u); // 801BB2F8
  c->r[3]=0u+0x803D0000u; // 801BB2FC
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BB300
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 801BB304
  W8(c->r[30]+0x00000076u,c->r[0]); // 801BB308
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BB30C
  cmpu(c,0,c->r[0],0x00000004u); // 801BB310
  if (crb(c,0)) { goto L_801BB334; } // 801BB314
  c->r[3]=0u+0x000D0000u; // 801BB318
  c->r[5]=R32(c->r[30]+0x00000014u); // 801BB31C
  c->r[6]=R32(c->r[30]+0x00000010u); // 801BB320
  c->r[3]=c->r[3]+0x00000003u; // 801BB324
  c->r[7]=R8(c->r[30]+0x00000076u); // 801BB328
  c->r[4]=c->r[31]+0x00000528u; // 801BB32C
  c->lr=0x801BB334u; f_801ACB68(c); // 801BB330
L_801BB334:;
  c->r[3]=c->r[30]|c->r[30]; // 801BB334
  c->lr=0x801BB33Cu; f_801BCE7C(c); // 801BB338
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801BB33C
  c->r[25]=c->r[3]|c->r[3]; // 801BB340
  cmpu(c,0,c->r[5],0x00000001u); // 801BB344
  if (crb(c,2)) { goto L_801BB370; } // 801BB348
  cmps(c,0,(int32_t)c->r[28],0); // 801BB34C
  if (crb(c,2)) { goto L_801BB370; } // 801BB350
  c->r[12]=c->r[28]|c->r[28]; // 801BB354
  c->r[3]=c->r[24]|c->r[24]; // 801BB358
  c->r[4]=R32(c->r[30]+0x00000008u); // 801BB35C
  c->ctr=c->r[12]; // 801BB360
  if (true) { c->lr=0x801BB368u; dispatch(c,c->ctr); } // 801BB364
  c->r[0]=0u+0x00000000u; // 801BB368
  W32(c->r[30]+0x00000004u,c->r[0]); // 801BB36C
L_801BB370:;
  c->r[3]=c->r[25]|c->r[25]; // 801BB370
L_801BB374:;
  c->r[11]=c->r[1]+0x00000030u; // 801BB374
  c->lr=0x801BB37Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BB378
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BB37C
  c->lr=c->r[0]; // 801BB380
  c->r[1]=c->r[1]+0x00000030u; // 801BB384
  return; // 801BB388
}

// btm_sec_mx_access_request
void f_801BB38C(Ctx* __restrict c) {
  trace_call(0x801BB38Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB38C
  c->r[0]=c->lr; // 801BB390
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BB394
  c->r[11]=c->r[1]+0x00000030u; // 801BB398
  c->lr=0x801BB3A0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BB39C
  c->r[24]=c->r[3]|c->r[3]; // 801BB3A0
  c->r[25]=c->r[4]|c->r[4]; // 801BB3A4
  c->r[26]=c->r[5]|c->r[5]; // 801BB3A8
  c->r[27]=c->r[6]|c->r[6]; // 801BB3AC
  c->r[28]=c->r[7]|c->r[7]; // 801BB3B0
  c->r[29]=c->r[8]|c->r[8]; // 801BB3B4
  c->r[30]=c->r[9]|c->r[9]; // 801BB3B8
  c->lr=0x801BB3C0u; f_801B522C(c); // 801BB3BC
  cmps(c,0,(int32_t)c->r[3],0); // 801BB3C0
  c->r[31]=c->r[3]|c->r[3]; // 801BB3C4
  if (!crb(c,2)) { goto L_801BB404; } // 801BB3C8
  c->r[3]=c->r[24]|c->r[24]; // 801BB3CC
  c->lr=0x801BB3D4u; f_801B5054(c); // 801BB3D0
  cmps(c,0,(int32_t)c->r[3],0); // 801BB3D4
  c->r[31]=c->r[3]|c->r[3]; // 801BB3D8
  if (!crb(c,2)) { goto L_801BB404; } // 801BB3DC
  cmps(c,0,(int32_t)c->r[29],0); // 801BB3E0
  if (crb(c,2)) { goto L_801BB610; } // 801BB3E4
  c->r[12]=c->r[29]|c->r[29]; // 801BB3E8
  c->r[3]=c->r[24]|c->r[24]; // 801BB3EC
  c->r[4]=c->r[30]|c->r[30]; // 801BB3F0
  c->r[5]=0u+0x00000003u; // 801BB3F4
  c->ctr=c->r[12]; // 801BB3F8
  if (true) { c->lr=0x801BB400u; dispatch(c,c->ctr); } // 801BB3FC
  goto L_801BB610; // 801BB400
L_801BB404:;
  c->r[3]=0u+0x803D0000u; // 801BB404
  c->r[0]=0u+0x00000008u; // 801BB408
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BB40C
  c->r[4]=0u+0x00000000u; // 801BB410
  c->r[5]=c->r[3]+0x00001990u; // 801BB414
  c->ctr=c->r[0]; // 801BB418
L_801BB41C:;
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 801BB41C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB420
  if (crb(c,2)) { goto L_801BB46C; } // 801BB424
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801BB428
  cmpu(c,0,c->r[0],c->r[25]); // 801BB42C
  if (!crb(c,2)) { goto L_801BB46C; } // 801BB430
  c->r[0]=R32(c->r[5]+0x00000000u); // 801BB434
  cmpu(c,0,c->r[0],c->r[27]); // 801BB438
  if (!crb(c,2)) { goto L_801BB46C; } // 801BB43C
  cmps(c,0,(int32_t)c->r[26],0); // 801BB440
  if (crb(c,2)) { goto L_801BB454; } // 801BB444
  c->r[0]=R32(c->r[5]+0x00000004u); // 801BB448
  cmpu(c,0,c->r[0],c->r[28]); // 801BB44C
  if (crb(c,2)) { goto L_801BB524; } // 801BB450
L_801BB454:;
  cmps(c,0,(int32_t)c->r[26],0); // 801BB454
  if (!crb(c,2)) { goto L_801BB46C; } // 801BB458
  c->r[0]=R32(c->r[5]+0x00000008u); // 801BB45C
  cmpu(c,0,c->r[0],c->r[28]); // 801BB460
  if (!crb(c,2)) { goto L_801BB46C; } // 801BB464
  goto L_801BB524; // 801BB468
L_801BB46C:;
  c->r[0]=R8(c->r[5]+0x0000004Au); // 801BB46C
  c->r[5]=c->r[5]+0x0000003Cu; // 801BB470
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB474
  if (crb(c,2)) { goto L_801BB4C0; } // 801BB478
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801BB47C
  cmpu(c,0,c->r[0],c->r[25]); // 801BB480
  if (!crb(c,2)) { goto L_801BB4C0; } // 801BB484
  c->r[0]=R32(c->r[5]+0x00000000u); // 801BB488
  cmpu(c,0,c->r[0],c->r[27]); // 801BB48C
  if (!crb(c,2)) { goto L_801BB4C0; } // 801BB490
  cmps(c,0,(int32_t)c->r[26],0); // 801BB494
  if (crb(c,2)) { goto L_801BB4A8; } // 801BB498
  c->r[0]=R32(c->r[5]+0x00000004u); // 801BB49C
  cmpu(c,0,c->r[0],c->r[28]); // 801BB4A0
  if (crb(c,2)) { goto L_801BB524; } // 801BB4A4
L_801BB4A8:;
  cmps(c,0,(int32_t)c->r[26],0); // 801BB4A8
  if (!crb(c,2)) { goto L_801BB4C0; } // 801BB4AC
  c->r[0]=R32(c->r[5]+0x00000008u); // 801BB4B0
  cmpu(c,0,c->r[0],c->r[28]); // 801BB4B4
  if (!crb(c,2)) { goto L_801BB4C0; } // 801BB4B8
  goto L_801BB524; // 801BB4BC
L_801BB4C0:;
  c->r[0]=R8(c->r[5]+0x0000004Au); // 801BB4C0
  c->r[5]=c->r[5]+0x0000003Cu; // 801BB4C4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB4C8
  if (crb(c,2)) { goto L_801BB514; } // 801BB4CC
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801BB4D0
  cmpu(c,0,c->r[0],c->r[25]); // 801BB4D4
  if (!crb(c,2)) { goto L_801BB514; } // 801BB4D8
  c->r[0]=R32(c->r[5]+0x00000000u); // 801BB4DC
  cmpu(c,0,c->r[0],c->r[27]); // 801BB4E0
  if (!crb(c,2)) { goto L_801BB514; } // 801BB4E4
  cmps(c,0,(int32_t)c->r[26],0); // 801BB4E8
  if (crb(c,2)) { goto L_801BB4FC; } // 801BB4EC
  c->r[0]=R32(c->r[5]+0x00000004u); // 801BB4F0
  cmpu(c,0,c->r[0],c->r[28]); // 801BB4F4
  if (crb(c,2)) { goto L_801BB524; } // 801BB4F8
L_801BB4FC:;
  cmps(c,0,(int32_t)c->r[26],0); // 801BB4FC
  if (!crb(c,2)) { goto L_801BB514; } // 801BB500
  c->r[0]=R32(c->r[5]+0x00000008u); // 801BB504
  cmpu(c,0,c->r[0],c->r[28]); // 801BB508
  if (!crb(c,2)) { goto L_801BB514; } // 801BB50C
  goto L_801BB524; // 801BB510
L_801BB514:;
  c->r[4]=c->r[4]+0x00000002u; // 801BB514
  c->r[5]=c->r[5]+0x0000003Cu; // 801BB518
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BB41C; } // 801BB51C
  c->r[5]=0u+0x00000000u; // 801BB520
L_801BB524:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BB524
  if (!crb(c,2)) { goto L_801BB580; } // 801BB528
  cmps(c,0,(int32_t)c->r[29],0); // 801BB52C
  if (crb(c,2)) { goto L_801BB54C; } // 801BB530
  c->r[12]=c->r[29]|c->r[29]; // 801BB534
  c->r[3]=c->r[24]|c->r[24]; // 801BB538
  c->r[4]=c->r[30]|c->r[30]; // 801BB53C
  c->r[5]=0u+0x00000004u; // 801BB540
  c->ctr=c->r[12]; // 801BB544
  if (true) { c->lr=0x801BB54Cu; dispatch(c,c->ctr); } // 801BB548
L_801BB54C:;
  c->r[3]=0u+0x803D0000u; // 801BB54C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BB550
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BB554
  cmpu(c,0,c->r[0],0x00000001u); // 801BB558
  if (crb(c,0)) { goto L_801BB610; } // 801BB55C
  c->r[4]=0u+0x80330000u; // 801BB560
  c->r[5]=c->r[25]|c->r[25]; // 801BB564
  c->r[6]=c->r[27]|c->r[27]; // 801BB568
  c->r[7]=c->r[28]|c->r[28]; // 801BB56C
  c->r[4]=c->r[4]+0x00003490u; // 801BB570
  c->r[3]=0u+0x000D0000u; // 801BB574
  c->lr=0x801BB57Cu; f_801ACB68(c); // 801BB578
  goto L_801BB610; // 801BB57C
L_801BB580:;
  W32(c->r[31]+0x00000000u,c->r[5]); // 801BB580
  c->r[3]=c->r[31]|c->r[31]; // 801BB584
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 801BB588
  W8(c->r[31]+0x00000081u,c->r[0]); // 801BB58C
  W8(c->r[31]+0x00000080u,c->r[26]); // 801BB590
  W32(c->r[31]+0x00000004u,c->r[29]); // 801BB594
  W32(c->r[31]+0x00000008u,c->r[30]); // 801BB598
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BB59C
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 801BB5A0
  W8(c->r[31]+0x00000076u,c->r[0]); // 801BB5A4
  c->lr=0x801BB5ACu; f_801BCE7C(c); // 801BB5A8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801BB5AC
  c->r[5]=c->r[3]|c->r[3]; // 801BB5B0
  cmpu(c,0,c->r[0],0x00000001u); // 801BB5B4
  if (crb(c,2)) { goto L_801BB610; } // 801BB5B8
  cmps(c,0,(int32_t)c->r[29],0); // 801BB5BC
  if (crb(c,2)) { goto L_801BB610; } // 801BB5C0
  c->r[0]=R8(c->r[31]+0x00000080u); // 801BB5C4
  cmps(c,0,(int32_t)c->r[0],0); // 801BB5C8
  if (crb(c,2)) { goto L_801BB5F0; } // 801BB5CC
  c->r[3]=R32(c->r[31]+0x00000000u); // 801BB5D0
  cmps(c,0,(int32_t)c->r[3],0); // 801BB5D4
  if (crb(c,2)) { goto L_801BB5F0; } // 801BB5D8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BB5DC
  cmpu(c,0,c->r[0],0x00000003u); // 801BB5E0
  if (!crb(c,2)) { goto L_801BB5F0; } // 801BB5E4
  c->r[0]=0u+0x00000000u; // 801BB5E8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BB5EC
L_801BB5F0:;
  c->r[12]=c->r[29]|c->r[29]; // 801BB5F0
  c->r[3]=c->r[24]|c->r[24]; // 801BB5F4
  c->r[4]=c->r[30]|c->r[30]; // 801BB5F8
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 801BB5FC
  c->ctr=c->r[12]; // 801BB600
  if (true) { c->lr=0x801BB608u; dispatch(c,c->ctr); } // 801BB604
  c->r[0]=0u+0x00000000u; // 801BB608
  W32(c->r[31]+0x00000004u,c->r[0]); // 801BB60C
L_801BB610:;
  c->r[11]=c->r[1]+0x00000030u; // 801BB610
  c->lr=0x801BB618u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BB614
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BB618
  c->lr=c->r[0]; // 801BB61C
  c->r[1]=c->r[1]+0x00000030u; // 801BB620
  return; // 801BB624
}

// btm_sec_conn_req
void f_801BB628(Ctx* __restrict c) {
  trace_call(0x801BB628u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB628
  c->r[0]=c->lr; // 801BB62C
  c->r[5]=0u+0x803D0000u; // 801BB630
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BB634
  c->r[5]=c->r[5]+0xFFFF8118u; // 801BB638
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BB63C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BB640
  c->r[30]=c->r[4]|c->r[4]; // 801BB644
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BB648
  c->r[29]=c->r[3]|c->r[3]; // 801BB64C
  c->r[0]=R8(c->r[5]+0x0000197Au); // 801BB650
  cmps(c,0,(int32_t)c->r[0],0); // 801BB654
  if (crb(c,2)) { goto L_801BB6BC; } // 801BB658
  c->lr=0x801BB660u; f_801B522C(c); // 801BB65C
  cmps(c,0,(int32_t)c->r[3],0); // 801BB660
  if (crb(c,2)) { goto L_801BB674; } // 801BB664
  c->r[0]=R8(c->r[3]+0x00000076u); // 801BB668
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801BB66C
  if (!crb(c,2)) { goto L_801BB6BC; } // 801BB670
L_801BB674:;
  c->r[3]=0u+0x803D0000u; // 801BB674
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BB678
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BB67C
  cmpu(c,0,c->r[0],0x00000004u); // 801BB680
  if (crb(c,0)) { goto L_801BB69C; } // 801BB684
  c->r[3]=0u+0x000D0000u; // 801BB688
  c->r[4]=0u+0x80330000u; // 801BB68C
  c->r[3]=c->r[3]+0x00000003u; // 801BB690
  c->r[4]=c->r[4]+0x000034D0u; // 801BB694
  c->lr=0x801BB69Cu; f_801ACB20(c); // 801BB698
L_801BB69C:;
  c->r[3]=0u+0x00000002u; // 801BB69C
  c->lr=0x801BB6A4u; f_801AA140(c); // 801BB6A0
  cmps(c,0,(int32_t)c->r[3],0); // 801BB6A4
  if (crb(c,2)) { goto L_801BB738; } // 801BB6A8
  c->r[4]=c->r[29]|c->r[29]; // 801BB6AC
  c->r[5]=0u+0x0000000Fu; // 801BB6B0
  c->lr=0x801BB6B8u; f_801BFE14(c); // 801BB6B4
  goto L_801BB738; // 801BB6B8
L_801BB6BC:;
  c->r[3]=0u+0x803D0000u; // 801BB6BC
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BB6C0
  c->r[12]=R32(c->r[3]+0x00001934u); // 801BB6C4
  cmps(c,0,(int32_t)c->r[12],0); // 801BB6C8
  if (crb(c,2)) { goto L_801BB708; } // 801BB6CC
  c->r[3]=c->r[29]|c->r[29]; // 801BB6D0
  c->r[4]=c->r[30]|c->r[30]; // 801BB6D4
  c->ctr=c->r[12]; // 801BB6D8
  if (true) { c->lr=0x801BB6E0u; dispatch(c,c->ctr); } // 801BB6DC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BB6E0
  if (!crb(c,2)) { goto L_801BB708; } // 801BB6E4
  c->r[3]=0u+0x00000002u; // 801BB6E8
  c->lr=0x801BB6F0u; f_801AA140(c); // 801BB6EC
  cmps(c,0,(int32_t)c->r[3],0); // 801BB6F0
  if (crb(c,2)) { goto L_801BB738; } // 801BB6F4
  c->r[4]=c->r[29]|c->r[29]; // 801BB6F8
  c->r[5]=0u+0x0000000Fu; // 801BB6FC
  c->lr=0x801BB704u; f_801BFE14(c); // 801BB700
  goto L_801BB738; // 801BB704
L_801BB708:;
  c->r[31]=0u+0x803D0000u; // 801BB708
  c->r[4]=c->r[29]|c->r[29]; // 801BB70C
  c->r[31]=c->r[31]+0xFFFF8118u; // 801BB710
  c->r[5]=0u+0x00000006u; // 801BB714
  c->r[3]=c->r[31]+0x000027B4u; // 801BB718
  c->lr=0x801BB720u; f_80004338(c); // 801BB71C
  c->r[4]=c->r[30]|c->r[30]; // 801BB720
  c->r[3]=c->r[31]+0x000027BAu; // 801BB724
  c->r[5]=0u+0x00000003u; // 801BB728
  c->lr=0x801BB730u; f_80004338(c); // 801BB72C
  c->r[3]=c->r[29]|c->r[29]; // 801BB730
  c->lr=0x801BB738u; f_801C74E8(c); // 801BB734
L_801BB738:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BB738
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BB73C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BB740
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BB744
  c->lr=c->r[0]; // 801BB748
  c->r[1]=c->r[1]+0x00000020u; // 801BB74C
  return; // 801BB750
}

// btm_sec_init
void f_801BB754(Ctx* __restrict c) {
  trace_call(0x801BB754u);
  c->r[6]=0u+0x803D0000u; // 801BB754
  c->r[4]=0u+0x000000FFu; // 801BB758
  c->r[6]=c->r[6]+0xFFFF8118u; // 801BB75C
  c->r[5]=0u+0x00000006u; // 801BB760
  W8(c->r[6]+0x00001978u,c->r[3]); // 801BB764
  c->r[3]=c->r[6]+0x00001954u; // 801BB768
  f_80004688(c); return; // 801BB76C
}

// btm_sec_dev_reset
void f_801BB770(Ctx* __restrict c) {
  trace_call(0x801BB770u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB770
  c->r[0]=c->lr; // 801BB774
  c->r[3]=0u+0x803D0000u; // 801BB778
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB77C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BB780
  c->r[0]=R8(c->r[3]+0x00001978u); // 801BB784
  cmpu(c,0,c->r[0],0x00000003u); // 801BB788
  if (!crb(c,2)) { goto L_801BB7A0; } // 801BB78C
  c->r[3]=0u+0x00000001u; // 801BB790
  c->lr=0x801BB798u; f_801C1608(c); // 801BB794
  c->r[3]=0u+0x00000001u; // 801BB798
  c->lr=0x801BB7A0u; f_801C167C(c); // 801BB79C
L_801BB7A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB7A0
  c->lr=c->r[0]; // 801BB7A4
  c->r[1]=c->r[1]+0x00000010u; // 801BB7A8
  return; // 801BB7AC
}

// btm_sec_abort_access_req
void f_801BB7B0(Ctx* __restrict c) {
  trace_call(0x801BB7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB7B0
  c->r[0]=c->lr; // 801BB7B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB7B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB7BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BB7C0
  c->r[30]=c->r[3]|c->r[3]; // 801BB7C4
  c->lr=0x801BB7CCu; f_801B522C(c); // 801BB7C8
  cmps(c,0,(int32_t)c->r[3],0); // 801BB7CC
  c->r[31]=c->r[3]|c->r[3]; // 801BB7D0
  if (crb(c,2)) { goto L_801BB84C; } // 801BB7D4
  c->r[3]=0u+0x803D0000u; // 801BB7D8
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BB7DC
  c->r[12]=R32(c->r[3]+0x00001920u); // 801BB7E0
  cmps(c,0,(int32_t)c->r[12],0); // 801BB7E4
  if (crb(c,2)) { goto L_801BB800; } // 801BB7E8
  c->r[3]=c->r[30]|c->r[30]; // 801BB7EC
  c->r[4]=c->r[31]+0x00000022u; // 801BB7F0
  c->r[5]=c->r[31]+0x00000035u; // 801BB7F4
  c->ctr=c->r[12]; // 801BB7F8
  if (true) { c->lr=0x801BB800u; dispatch(c,c->ctr); } // 801BB7FC
L_801BB800:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801BB800
  cmpu(c,0,c->r[0],0x00000004u); // 801BB804
  if (crb(c,2)) { goto L_801BB814; } // 801BB808
  cmpu(c,0,c->r[0],0x00000001u); // 801BB80C
  if (!crb(c,2)) { goto L_801BB84C; } // 801BB810
L_801BB814:;
  c->r[3]=0u+0x00000000u; // 801BB814
  W8(c->r[31]+0x0000007Fu,c->r[3]); // 801BB818
  c->r[0]=R8(c->r[31]+0x00000080u); // 801BB81C
  cmps(c,0,(int32_t)c->r[0],0); // 801BB820
  if (crb(c,2)) { goto L_801BB844; } // 801BB824
  c->r[4]=R32(c->r[31]+0x00000000u); // 801BB828
  cmps(c,0,(int32_t)c->r[4],0); // 801BB82C
  if (crb(c,2)) { goto L_801BB844; } // 801BB830
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BB834
  cmpu(c,0,c->r[0],0x00000003u); // 801BB838
  if (!crb(c,2)) { goto L_801BB844; } // 801BB83C
  W32(c->r[4]+0x00000004u,c->r[3]); // 801BB840
L_801BB844:;
  c->r[0]=0u+0x00000000u; // 801BB844
  W32(c->r[31]+0x00000004u,c->r[0]); // 801BB848
L_801BB84C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB84C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB850
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BB854
  c->lr=c->r[0]; // 801BB858
  c->r[1]=c->r[1]+0x00000010u; // 801BB85C
  return; // 801BB860
}

// btm_sec_rmt_name_request_complete
void f_801BB864(Ctx* __restrict c) {
  trace_call(0x801BB864u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB864
  c->r[0]=c->lr; // 801BB868
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BB86C
  c->r[11]=c->r[1]+0x00000020u; // 801BB870
  c->lr=0x801BB878u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BB874
  cmps(c,0,(int32_t)c->r[3],0); // 801BB878
  c->r[27]=c->r[3]|c->r[3]; // 801BB87C
  c->r[28]=c->r[4]|c->r[4]; // 801BB880
  c->r[30]=c->r[5]|c->r[5]; // 801BB884
  if (crb(c,2)) { goto L_801BB898; } // 801BB888
  c->lr=0x801BB890u; f_801B522C(c); // 801BB88C
  c->r[31]=c->r[3]|c->r[3]; // 801BB890
  goto L_801BB940; // 801BB894
L_801BB898:;
  c->r[3]=0u+0x803D0000u; // 801BB898
  c->r[0]=0u+0x00000004u; // 801BB89C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BB8A0
  c->r[4]=0u+0x00000000u; // 801BB8A4
  c->r[31]=c->r[3]+0x00001F30u; // 801BB8A8
  c->ctr=c->r[0]; // 801BB8AC
L_801BB8B0:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BB8B0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB8B4
  if (crb(c,2)) { goto L_801BB8C8; } // 801BB8B8
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801BB8BC
  cmpu(c,0,c->r[0],0x00000003u); // 801BB8C0
  if (crb(c,2)) { goto L_801BB934; } // 801BB8C4
L_801BB8C8:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 801BB8C8
  c->r[4]=c->r[4]+0x00000001u; // 801BB8CC
  c->r[31]=c->r[31]+0x00000088u; // 801BB8D0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB8D4
  if (crb(c,2)) { goto L_801BB8E8; } // 801BB8D8
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801BB8DC
  cmpu(c,0,c->r[0],0x00000003u); // 801BB8E0
  if (crb(c,2)) { goto L_801BB934; } // 801BB8E4
L_801BB8E8:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 801BB8E8
  c->r[4]=c->r[4]+0x00000001u; // 801BB8EC
  c->r[31]=c->r[31]+0x00000088u; // 801BB8F0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB8F4
  if (crb(c,2)) { goto L_801BB908; } // 801BB8F8
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801BB8FC
  cmpu(c,0,c->r[0],0x00000003u); // 801BB900
  if (crb(c,2)) { goto L_801BB934; } // 801BB904
L_801BB908:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 801BB908
  c->r[4]=c->r[4]+0x00000001u; // 801BB90C
  c->r[31]=c->r[31]+0x00000088u; // 801BB910
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BB914
  if (crb(c,2)) { goto L_801BB928; } // 801BB918
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801BB91C
  cmpu(c,0,c->r[0],0x00000003u); // 801BB920
  if (crb(c,2)) { goto L_801BB934; } // 801BB924
L_801BB928:;
  c->r[4]=c->r[4]+0x00000001u; // 801BB928
  c->r[31]=c->r[31]+0x00000088u; // 801BB92C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BB8B0; } // 801BB930
L_801BB934:;
  cmps(c,0,(int32_t)c->r[4],16); // 801BB934
  if (!crb(c,2)) { goto L_801BB940; } // 801BB938
  c->r[31]=0u+0x00000000u; // 801BB93C
L_801BB940:;
  c->r[3]=0u+0x803D0000u; // 801BB940
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BB944
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BB948
  cmpu(c,0,c->r[0],0x00000004u); // 801BB94C
  if (crb(c,0)) { goto L_801BB980; } // 801BB950
  cmps(c,0,(int32_t)c->r[31],0); // 801BB954
  c->r[3]=0u+0x000D0000u; // 801BB958
  c->r[4]=0u+0x80330000u; // 801BB95C
  c->r[5]=c->r[30]|c->r[30]; // 801BB960
  c->r[3]=c->r[3]+0x00000003u; // 801BB964
  c->r[4]=c->r[4]+0x0000350Cu; // 801BB968
  if (crb(c,2)) { goto L_801BB978; } // 801BB96C
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801BB970
  goto L_801BB97C; // 801BB974
L_801BB978:;
  c->r[6]=0u+0x00000000u; // 801BB978
L_801BB97C:;
  c->lr=0x801BB980u; f_801ACB50(c); // 801BB97C
L_801BB980:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BB980
  if (crb(c,2)) { goto L_801BBB34; } // 801BB984
  cmps(c,0,(int32_t)c->r[30],0); // 801BB988
  if (!crb(c,2)) { goto L_801BB9E8; } // 801BB98C
  c->r[4]=c->r[28]|c->r[28]; // 801BB990
  c->r[3]=c->r[31]+0x00000035u; // 801BB994
  c->r[5]=0u+0x00000040u; // 801BB998
  c->lr=0x801BB9A0u; f_80004338(c); // 801BB99C
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BB9A0
  c->r[29]=0u+0x803D0000u; // 801BB9A4
  c->r[29]=c->r[29]+0xFFFF8118u; // 801BB9A8
  c->r[28]=0u+0x00000000u; // 801BB9AC
  c->r[0]=c->r[0]|0x00000008u; // 801BB9B0
  W8(c->r[31]+0x00000076u,c->r[0]); // 801BB9B4
L_801BB9B8:;
  c->r[12]=R32(c->r[29]+0x0000192Cu); // 801BB9B8
  cmps(c,0,(int32_t)c->r[12],0); // 801BB9BC
  if (crb(c,2)) { goto L_801BB9D8; } // 801BB9C0
  c->r[3]=c->r[27]|c->r[27]; // 801BB9C4
  c->r[4]=c->r[31]+0x00000022u; // 801BB9C8
  c->r[5]=c->r[31]+0x00000035u; // 801BB9CC
  c->ctr=c->r[12]; // 801BB9D0
  if (true) { c->lr=0x801BB9D8u; dispatch(c,c->ctr); } // 801BB9D4
L_801BB9D8:;
  c->r[28]=c->r[28]+0x00000001u; // 801BB9D8
  c->r[29]=c->r[29]+0x00000004u; // 801BB9DC
  cmps(c,0,(int32_t)c->r[28],2); // 801BB9E0
  if (crb(c,0)) { IRQCHK(c); goto L_801BB9B8; } // 801BB9E4
L_801BB9E8:;
  c->r[0]=R8(c->r[31]+0x00000082u); // 801BB9E8
  cmps(c,0,(int32_t)c->r[0],0); // 801BB9EC
  if (crb(c,2)) { goto L_801BBA88; } // 801BB9F0
  c->r[0]=R8(c->r[31]+0x00000081u); // 801BB9F4
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BB9F8
  if (crb(c,2)) { goto L_801BBA0C; } // 801BB9FC
  c->r[0]=R8(c->r[31]+0x00000085u); // 801BBA00
  cmps(c,0,(int32_t)c->r[0],0); // 801BBA04
  if (crb(c,2)) { goto L_801BBB34; } // 801BBA08
L_801BBA0C:;
  c->r[0]=0u+0x00000000u; // 801BBA0C
  c->r[3]=0u+0x803D0000u; // 801BBA10
  W8(c->r[31]+0x00000082u,c->r[0]); // 801BBA14
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BBA18
  c->r[12]=R32(c->r[3]+0x00001914u); // 801BBA1C
  cmps(c,0,(int32_t)c->r[12],0); // 801BBA20
  if (crb(c,2)) { goto L_801BBA44; } // 801BBA24
  c->r[3]=c->r[31]+0x0000001Cu; // 801BBA28
  c->r[4]=c->r[31]+0x00000022u; // 801BBA2C
  c->r[5]=c->r[31]+0x00000035u; // 801BBA30
  c->r[6]=c->r[31]+0x00000025u; // 801BBA34
  c->r[7]=R8(c->r[31]+0x00000083u); // 801BBA38
  c->ctr=c->r[12]; // 801BBA3C
  if (true) { c->lr=0x801BBA44u; dispatch(c,c->ctr); } // 801BBA40
L_801BBA44:;
  c->r[29]=0u+0x803D0000u; // 801BBA44
  c->r[28]=0u+0x00000000u; // 801BBA48
  c->r[29]=c->r[29]+0xFFFF8118u; // 801BBA4C
L_801BBA50:;
  c->r[12]=R32(c->r[29]+0x00001924u); // 801BBA50
  cmps(c,0,(int32_t)c->r[12],0); // 801BBA54
  if (crb(c,2)) { goto L_801BBA78; } // 801BBA58
  c->r[3]=c->r[31]+0x0000001Cu; // 801BBA5C
  c->r[4]=c->r[31]+0x00000022u; // 801BBA60
  c->r[5]=c->r[31]+0x00000035u; // 801BBA64
  c->r[6]=c->r[31]+0x00000025u; // 801BBA68
  c->r[7]=R8(c->r[31]+0x00000083u); // 801BBA6C
  c->ctr=c->r[12]; // 801BBA70
  if (true) { c->lr=0x801BBA78u; dispatch(c,c->ctr); } // 801BBA74
L_801BBA78:;
  c->r[28]=c->r[28]+0x00000001u; // 801BBA78
  c->r[29]=c->r[29]+0x00000004u; // 801BBA7C
  cmps(c,0,(int32_t)c->r[28],2); // 801BBA80
  if (crb(c,0)) { IRQCHK(c); goto L_801BBA50; } // 801BBA84
L_801BBA88:;
  c->r[3]=R8(c->r[31]+0x00000081u); // 801BBA88
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801BBA8C
  if (crb(c,2)) { goto L_801BBABC; } // 801BBA90
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BBA94
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801BBA98
  if (crb(c,2)) { goto L_801BBABC; } // 801BBA9C
  c->r[0]=0u+0xFFFFFFAFu; // 801BBAA0
  c->r[4]=0u+0x00000013u; // 801BBAA4
  c->r[0]=c->r[3]&c->r[0]; // 801BBAA8
  W8(c->r[31]+0x00000081u,c->r[0]); // 801BBAAC
  c->r[3]=R16(c->r[31]+0x00000018u); // 801BBAB0
  c->lr=0x801BBAB8u; f_801BFCA0(c); // 801BBAB4
  goto L_801BBB34; // 801BBAB8
L_801BBABC:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801BBABC
  cmpu(c,0,c->r[0],0x00000003u); // 801BBAC0
  if (!crb(c,2)) { goto L_801BBB34; } // 801BBAC4
  c->r[29]=0u+0x00000000u; // 801BBAC8
  cmps(c,0,(int32_t)c->r[30],0); // 801BBACC
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 801BBAD0
  if (crb(c,2)) { goto L_801BBB00; } // 801BBAD4
  c->r[12]=R32(c->r[31]+0x00000004u); // 801BBAD8
  cmps(c,0,(int32_t)c->r[12],0); // 801BBADC
  if (crb(c,2)) { goto L_801BBB34; } // 801BBAE0
  c->r[3]=c->r[31]+0x0000001Cu; // 801BBAE4
  c->r[4]=R32(c->r[31]+0x00000008u); // 801BBAE8
  c->r[5]=0u+0x0000000Au; // 801BBAEC
  c->ctr=c->r[12]; // 801BBAF0
  if (true) { c->lr=0x801BBAF8u; dispatch(c,c->ctr); } // 801BBAF4
  W32(c->r[31]+0x00000004u,c->r[29]); // 801BBAF8
  goto L_801BBB34; // 801BBAFC
L_801BBB00:;
  c->r[3]=c->r[31]|c->r[31]; // 801BBB00
  c->lr=0x801BBB08u; f_801BCE7C(c); // 801BBB04
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801BBB08
  cmpu(c,0,c->r[5],0x00000001u); // 801BBB0C
  if (crb(c,2)) { goto L_801BBB34; } // 801BBB10
  c->r[12]=R32(c->r[31]+0x00000004u); // 801BBB14
  cmps(c,0,(int32_t)c->r[12],0); // 801BBB18
  if (crb(c,2)) { goto L_801BBB34; } // 801BBB1C
  c->r[3]=c->r[31]+0x0000001Cu; // 801BBB20
  c->r[4]=R32(c->r[31]+0x00000008u); // 801BBB24
  c->ctr=c->r[12]; // 801BBB28
  if (true) { c->lr=0x801BBB30u; dispatch(c,c->ctr); } // 801BBB2C
  W32(c->r[31]+0x00000004u,c->r[29]); // 801BBB30
L_801BBB34:;
  c->r[11]=c->r[1]+0x00000020u; // 801BBB34
  c->lr=0x801BBB3Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BBB38
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BBB3C
  c->lr=c->r[0]; // 801BBB40
  c->r[1]=c->r[1]+0x00000020u; // 801BBB44
  return; // 801BBB48
}

// btm_sec_auth_complete
void f_801BBB4C(Ctx* __restrict c) {
  trace_call(0x801BBB4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBB4C
  c->r[0]=c->lr; // 801BBB50
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BBB54
  c->r[11]=c->r[1]+0x00000020u; // 801BBB58
  c->lr=0x801BBB60u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BBB5C
  c->r[29]=c->r[3]|c->r[3]; // 801BBB60
  c->r[30]=c->r[4]|c->r[4]; // 801BBB64
  c->lr=0x801BBB6Cu; f_801B5174(c); // 801BBB68
  c->r[4]=0u+0x803D0000u; // 801BBB6C
  c->r[31]=c->r[3]|c->r[3]; // 801BBB70
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BBB74
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801BBB78
  cmpu(c,0,c->r[0],0x00000004u); // 801BBB7C
  if (crb(c,0)) { goto L_801BBBB0; } // 801BBB80
  cmps(c,0,(int32_t)c->r[31],0); // 801BBB84
  c->r[3]=0u+0x000D0000u; // 801BBB88
  c->r[4]=0u+0x80330000u; // 801BBB8C
  c->r[5]=c->r[30]|c->r[30]; // 801BBB90
  c->r[3]=c->r[3]+0x00000003u; // 801BBB94
  c->r[4]=c->r[4]+0x00003544u; // 801BBB98
  if (crb(c,2)) { goto L_801BBBA8; } // 801BBB9C
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801BBBA0
  goto L_801BBBAC; // 801BBBA4
L_801BBBA8:;
  c->r[6]=0u+0x00000000u; // 801BBBA8
L_801BBBAC:;
  c->lr=0x801BBBB0u; f_801ACB50(c); // 801BBBAC
L_801BBBB0:;
  c->r[4]=0u+0x803D0000u; // 801BBBB0
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BBBB4
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801BBBB8
  cmps(c,0,(int32_t)c->r[0],0); // 801BBBBC
  if (crb(c,2)) { goto L_801BBC18; } // 801BBBC0
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801BBBC4
  c->r[3]=0u+0x00000000u; // 801BBBC8
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801BBBCC
  cmpu(c,0,c->r[0],0x00000005u); // 801BBBD0
  if (crb(c,0)) { goto L_801BBBFC; } // 801BBBD4
  c->r[3]=R8(c->r[4]+0x00001978u); // 801BBBD8
  c->r[4]=0u+0x80330000u; // 801BBBDC
  c->r[5]=0u+0x000D0000u; // 801BBBE0
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801BBBE4
  c->r[4]=c->r[4]+0x00003234u; // 801BBBE8
  c->r[0]=cntlz(c->r[0]); // 801BBBEC
  c->r[3]=c->r[5]+0x00000004u; // 801BBBF0
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BBBF4
  c->lr=0x801BBBFCu; f_801ACB38(c); // 801BBBF8
L_801BBBFC:;
  c->r[3]=0u+0x803D0000u; // 801BBBFC
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BBC00
  c->r[3]=R8(c->r[3]+0x00001978u); // 801BBC04
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801BBC08
  c->r[0]=cntlz(c->r[0]); // 801BBC0C
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801BBC10
  c->lr=0x801BBC18u; f_801C1608(c); // 801BBC14
L_801BBC18:;
  c->r[4]=0u+0x803D0000u; // 801BBC18
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BBC1C
  c->r[0]=R8(c->r[4]+0x0000197Cu); // 801BBC20
  cmps(c,0,(int32_t)c->r[0],0); // 801BBC24
  if (crb(c,2)) { goto L_801BBC3C; } // 801BBC28
  c->r[0]=0u+0x00000000u; // 801BBC2C
  c->r[3]=R8(c->r[4]+0x00000020u); // 801BBC30
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 801BBC34
  c->lr=0x801BBC3Cu; f_801C1094(c); // 801BBC38
L_801BBC3C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BBC3C
  if (crb(c,2)) { goto L_801BBCD0; } // 801BBC40
  c->r[3]=R8(c->r[31]+0x00000081u); // 801BBC44
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801BBC48
  if (crb(c,2)) { goto L_801BBCD0; } // 801BBC4C
  c->r[27]=0u+0x803D0000u; // 801BBC50
  c->r[27]=c->r[27]+0xFFFF8118u; // 801BBC54
  c->r[0]=R8(c->r[27]+0x0000197Du); // 801BBC58
  cmps(c,0,(int32_t)c->r[0],0); // 801BBC5C
  if (!crb(c,2)) { goto L_801BBCD0; } // 801BBC60
  c->r[0]=0u+0xFFFFFFAFu; // 801BBC64
  c->r[0]=c->r[3]&c->r[0]; // 801BBC68
  W8(c->r[31]+0x00000081u,c->r[0]); // 801BBC6C
  c->r[26]=R8(c->r[27]+0x0000197Eu); // 801BBC70
  cmps(c,0,(int32_t)c->r[26],0); // 801BBC74
  if (crb(c,2)) { goto L_801BBCD0; } // 801BBC78
  c->r[3]=c->r[29]|c->r[29]; // 801BBC7C
  c->lr=0x801BBC84u; f_801B5174(c); // 801BBC80
  cmps(c,0,(int32_t)c->r[3],0); // 801BBC84
  c->r[28]=c->r[3]|c->r[3]; // 801BBC88
  if (crb(c,2)) { goto L_801BBCD0; } // 801BBC8C
  c->r[0]=R8(c->r[3]+0x00000081u); // 801BBC90
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BBC94
  if (crb(c,2)) { goto L_801BBCA4; } // 801BBC98
  W8(c->r[27]+0x0000197Eu,c->r[26]); // 801BBC9C
  goto L_801BBCD0; // 801BBCA0
L_801BBCA4:;
  c->r[27]=R8(c->r[3]+0x0000007Fu); // 801BBCA4
  cmpu(c,0,c->r[27],0x00000005u); // 801BBCA8
  if (crb(c,2)) { goto L_801BBCD0; } // 801BBCAC
  c->r[0]=0u+0x00000005u; // 801BBCB0
  c->r[4]=c->r[26]|c->r[26]; // 801BBCB4
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801BBCB8
  c->r[3]=c->r[29]|c->r[29]; // 801BBCBC
  c->lr=0x801BBCC4u; f_801BFCA0(c); // 801BBCC0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BBCC4
  if (!crb(c,2)) { goto L_801BBCD0; } // 801BBCC8
  W8(c->r[28]+0x0000007Fu,c->r[27]); // 801BBCCC
L_801BBCD0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BBCD0
  if (crb(c,2)) { goto L_801BBE78; } // 801BBCD4
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801BBCD8
  cmpu(c,0,c->r[0],0x00000001u); // 801BBCDC
  if (crb(c,2)) { goto L_801BBD1C; } // 801BBCE0
  c->r[3]=0u+0x803D0000u; // 801BBCE4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BBCE8
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801BBCEC
  cmps(c,0,(int32_t)c->r[12],0); // 801BBCF0
  if (crb(c,2)) { goto L_801BBE78; } // 801BBCF4
  cmps(c,0,(int32_t)c->r[30],0); // 801BBCF8
  if (crb(c,2)) { goto L_801BBE78; } // 801BBCFC
  c->r[6]=c->r[30]|c->r[30]; // 801BBD00
  c->r[3]=c->r[31]+0x0000001Cu; // 801BBD04
  c->r[4]=c->r[31]+0x00000022u; // 801BBD08
  c->r[5]=c->r[31]+0x00000035u; // 801BBD0C
  c->ctr=c->r[12]; // 801BBD10
  if (true) { c->lr=0x801BBD18u; dispatch(c,c->ctr); } // 801BBD14
  goto L_801BBE78; // 801BBD18
L_801BBD1C:;
  cmpu(c,0,c->r[30],0x0000000Cu); // 801BBD1C
  if (!crb(c,2)) { goto L_801BBD38; } // 801BBD20
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BBD24
  c->r[0]=rotl(c->r[0],0)&0x00000006u; // 801BBD28
  cmps(c,0,(int32_t)c->r[0],6); // 801BBD2C
  if (!crb(c,2)) { goto L_801BBD38; } // 801BBD30
  c->r[30]=0u+0x00000000u; // 801BBD34
L_801BBD38:;
  c->r[3]=0u+0x803D0000u; // 801BBD38
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BBD3C
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801BBD40
  cmps(c,0,(int32_t)c->r[12],0); // 801BBD44
  if (crb(c,2)) { goto L_801BBD64; } // 801BBD48
  c->r[6]=c->r[30]|c->r[30]; // 801BBD4C
  c->r[3]=c->r[31]+0x0000001Cu; // 801BBD50
  c->r[4]=c->r[31]+0x00000022u; // 801BBD54
  c->r[5]=c->r[31]+0x00000035u; // 801BBD58
  c->ctr=c->r[12]; // 801BBD5C
  if (true) { c->lr=0x801BBD64u; dispatch(c,c->ctr); } // 801BBD60
L_801BBD64:;
  c->r[29]=0u+0x00000000u; // 801BBD64
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 801BBD68
  c->r[3]=R8(c->r[31]+0x00000081u); // 801BBD6C
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801BBD70
  if (crb(c,2)) { goto L_801BBD94; } // 801BBD74
  c->r[0]=0u+0xFFFFFFAFu; // 801BBD78
  c->r[4]=0u+0x00000013u; // 801BBD7C
  c->r[0]=c->r[3]&c->r[0]; // 801BBD80
  W8(c->r[31]+0x00000081u,c->r[0]); // 801BBD84
  c->r[3]=R16(c->r[31]+0x00000018u); // 801BBD88
  c->lr=0x801BBD90u; f_801BFCA0(c); // 801BBD8C
  goto L_801BBE78; // 801BBD90
L_801BBD94:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BBD94
  if (crb(c,2)) { goto L_801BBE00; } // 801BBD98
  c->r[0]=R32(c->r[31]+0x00000004u); // 801BBD9C
  cmps(c,0,(int32_t)c->r[0],0); // 801BBDA0
  if (crb(c,2)) { goto L_801BBDF0; } // 801BBDA4
  c->r[0]=R8(c->r[31]+0x00000080u); // 801BBDA8
  cmps(c,0,(int32_t)c->r[0],0); // 801BBDAC
  if (crb(c,2)) { goto L_801BBDD0; } // 801BBDB0
  c->r[3]=R32(c->r[31]+0x00000000u); // 801BBDB4
  cmps(c,0,(int32_t)c->r[3],0); // 801BBDB8
  if (crb(c,2)) { goto L_801BBDD0; } // 801BBDBC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BBDC0
  cmpu(c,0,c->r[0],0x00000003u); // 801BBDC4
  if (!crb(c,2)) { goto L_801BBDD0; } // 801BBDC8
  W32(c->r[3]+0x00000004u,c->r[29]); // 801BBDCC
L_801BBDD0:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801BBDD0
  c->r[3]=c->r[31]+0x0000001Cu; // 801BBDD4
  c->r[4]=R32(c->r[31]+0x00000008u); // 801BBDD8
  c->r[5]=0u+0x0000000Au; // 801BBDDC
  c->ctr=c->r[12]; // 801BBDE0
  if (true) { c->lr=0x801BBDE8u; dispatch(c,c->ctr); } // 801BBDE4
  c->r[0]=0u+0x00000000u; // 801BBDE8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801BBDEC
L_801BBDF0:;
  c->r[3]=R16(c->r[31]+0x00000018u); // 801BBDF0
  c->r[4]=0u+0x00000005u; // 801BBDF4
  c->lr=0x801BBDFCu; f_801BFCA0(c); // 801BBDF8
  goto L_801BBE78; // 801BBDFC
L_801BBE00:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BBE00
  c->r[3]=c->r[31]|c->r[31]; // 801BBE04
  c->r[0]=c->r[0]|0x00000002u; // 801BBE08
  W8(c->r[31]+0x00000076u,c->r[0]); // 801BBE0C
  c->lr=0x801BBE14u; f_801BCE7C(c); // 801BBE10
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801BBE14
  c->r[4]=c->r[3]|c->r[3]; // 801BBE18
  cmpu(c,0,c->r[0],0x00000001u); // 801BBE1C
  if (crb(c,2)) { goto L_801BBE78; } // 801BBE20
  c->r[0]=R32(c->r[31]+0x00000004u); // 801BBE24
  cmps(c,0,(int32_t)c->r[0],0); // 801BBE28
  if (crb(c,2)) { goto L_801BBE78; } // 801BBE2C
  c->r[0]=R8(c->r[31]+0x00000080u); // 801BBE30
  cmps(c,0,(int32_t)c->r[0],0); // 801BBE34
  if (crb(c,2)) { goto L_801BBE58; } // 801BBE38
  c->r[3]=R32(c->r[31]+0x00000000u); // 801BBE3C
  cmps(c,0,(int32_t)c->r[3],0); // 801BBE40
  if (crb(c,2)) { goto L_801BBE58; } // 801BBE44
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BBE48
  cmpu(c,0,c->r[0],0x00000003u); // 801BBE4C
  if (!crb(c,2)) { goto L_801BBE58; } // 801BBE50
  W32(c->r[3]+0x00000004u,c->r[29]); // 801BBE54
L_801BBE58:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801BBE58
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 801BBE5C
  c->r[3]=c->r[31]+0x0000001Cu; // 801BBE60
  c->r[4]=R32(c->r[31]+0x00000008u); // 801BBE64
  c->ctr=c->r[12]; // 801BBE68
  if (true) { c->lr=0x801BBE70u; dispatch(c,c->ctr); } // 801BBE6C
  c->r[0]=0u+0x00000000u; // 801BBE70
  W32(c->r[31]+0x00000004u,c->r[0]); // 801BBE74
L_801BBE78:;
  c->r[11]=c->r[1]+0x00000020u; // 801BBE78
  c->lr=0x801BBE80u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BBE7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BBE80
  c->lr=c->r[0]; // 801BBE84
  c->r[1]=c->r[1]+0x00000020u; // 801BBE88
  return; // 801BBE8C
}

// btm_sec_mkey_comp_event
void f_801BBE90(Ctx* __restrict c) {
  trace_call(0x801BBE90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBE90
  c->r[0]=c->lr; // 801BBE94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BBE98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BBE9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BBEA0
  c->r[30]=c->r[5]|c->r[5]; // 801BBEA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BBEA8
  c->r[29]=c->r[4]|c->r[4]; // 801BBEAC
  c->lr=0x801BBEB4u; f_801B5174(c); // 801BBEB0
  c->r[4]=0u+0x803D0000u; // 801BBEB4
  c->r[7]=R8(c->r[2]+0xFFFF9518u); // 801BBEB8
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BBEBC
  c->r[6]=R8(c->r[2]+0xFFFF9519u); // 801BBEC0
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801BBEC4
  c->r[31]=c->r[3]|c->r[3]; // 801BBEC8
  c->r[5]=R8(c->r[2]+0xFFFF951Au); // 801BBECC
  c->r[4]=R8(c->r[2]+0xFFFF951Bu); // 801BBED0
  cmpu(c,0,c->r[0],0x00000004u); // 801BBED4
  c->r[3]=R8(c->r[2]+0xFFFF951Cu); // 801BBED8
  c->r[0]=R8(c->r[2]+0xFFFF951Du); // 801BBEDC
  W8(c->r[1]+0x00000008u,c->r[7]); // 801BBEE0
  W8(c->r[1]+0x00000009u,c->r[6]); // 801BBEE4
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801BBEE8
  W8(c->r[1]+0x0000000Bu,c->r[4]); // 801BBEEC
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801BBEF0
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801BBEF4
  if (crb(c,0)) { goto L_801BBF28; } // 801BBEF8
  cmps(c,0,(int32_t)c->r[31],0); // 801BBEFC
  c->r[3]=0u+0x000D0000u; // 801BBF00
  c->r[4]=0u+0x80330000u; // 801BBF04
  c->r[5]=c->r[29]|c->r[29]; // 801BBF08
  c->r[3]=c->r[3]+0x00000003u; // 801BBF0C
  c->r[4]=c->r[4]+0x00003578u; // 801BBF10
  if (crb(c,2)) { goto L_801BBF20; } // 801BBF14
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801BBF18
  goto L_801BBF24; // 801BBF1C
L_801BBF20:;
  c->r[6]=0u+0x00000000u; // 801BBF20
L_801BBF24:;
  c->lr=0x801BBF28u; f_801ACB50(c); // 801BBF24
L_801BBF28:;
  c->r[3]=0u+0x803D0000u; // 801BBF28
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BBF2C
  c->r[12]=R32(c->r[3]+0x000027B0u); // 801BBF30
  cmps(c,0,(int32_t)c->r[12],0); // 801BBF34
  if (crb(c,2)) { goto L_801BBF70; } // 801BBF38
  cmps(c,0,(int32_t)c->r[31],0); // 801BBF3C
  if (!crb(c,2)) { goto L_801BBF5C; } // 801BBF40
  c->r[4]=c->r[29]|c->r[29]; // 801BBF44
  c->r[5]=c->r[30]|c->r[30]; // 801BBF48
  c->r[3]=c->r[1]+0x00000008u; // 801BBF4C
  c->ctr=c->r[12]; // 801BBF50
  if (true) { c->lr=0x801BBF58u; dispatch(c,c->ctr); } // 801BBF54
  goto L_801BBF70; // 801BBF58
L_801BBF5C:;
  c->r[4]=c->r[29]|c->r[29]; // 801BBF5C
  c->r[5]=c->r[30]|c->r[30]; // 801BBF60
  c->r[3]=c->r[31]+0x0000001Cu; // 801BBF64
  c->ctr=c->r[12]; // 801BBF68
  if (true) { c->lr=0x801BBF70u; dispatch(c,c->ctr); } // 801BBF6C
L_801BBF70:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BBF70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BBF74
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BBF78
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BBF7C
  c->lr=c->r[0]; // 801BBF80
  c->r[1]=c->r[1]+0x00000020u; // 801BBF84
  return; // 801BBF88
}

// btm_sec_encrypt_change
void f_801BBF8C(Ctx* __restrict c) {
  trace_call(0x801BBF8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBF8C
  c->r[0]=c->lr; // 801BBF90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BBF94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BBF98
  c->r[31]=c->r[4]|c->r[4]; // 801BBF9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BBFA0
  c->lr=0x801BBFA8u; f_801B5174(c); // 801BBFA4
  c->r[4]=0u+0x803D0000u; // 801BBFA8
  c->r[30]=c->r[3]|c->r[3]; // 801BBFAC
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BBFB0
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801BBFB4
  cmpu(c,0,c->r[0],0x00000004u); // 801BBFB8
  if (crb(c,0)) { goto L_801BBFEC; } // 801BBFBC
  cmps(c,0,(int32_t)c->r[30],0); // 801BBFC0
  c->r[3]=0u+0x000D0000u; // 801BBFC4
  c->r[4]=0u+0x80330000u; // 801BBFC8
  c->r[5]=c->r[31]|c->r[31]; // 801BBFCC
  c->r[3]=c->r[3]+0x00000003u; // 801BBFD0
  c->r[4]=c->r[4]+0x000035A8u; // 801BBFD4
  if (crb(c,2)) { goto L_801BBFE4; } // 801BBFD8
  c->r[6]=R8(c->r[30]+0x0000007Fu); // 801BBFDC
  goto L_801BBFE8; // 801BBFE0
L_801BBFE4:;
  c->r[6]=0u+0x00000000u; // 801BBFE4
L_801BBFE8:;
  c->lr=0x801BBFECu; f_801ACB50(c); // 801BBFE8
L_801BBFEC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BBFEC
  if (crb(c,2)) { goto L_801BC0B0; } // 801BBFF0
  cmpu(c,0,c->r[31],0x00000023u); // 801BBFF4
  if (!crb(c,2)) { goto L_801BC028; } // 801BBFF8
  c->r[7]=0u+0x803D0000u; // 801BBFFC
  c->r[6]=0u+0x801C0000u; // 801BC000
  c->r[7]=c->r[7]+0xFFFF8118u; // 801BC004
  c->r[4]=0u+0x00000016u; // 801BC008
  c->r[6]=c->r[6]+0xFFFFD378u; // 801BC00C
  W32(c->r[7]+0x00001938u,c->r[30]); // 801BC010
  c->r[3]=c->r[7]+0x0000195Cu; // 801BC014
  c->r[5]=0u+0x00000001u; // 801BC018
  W32(c->r[7]+0x0000196Cu,c->r[6]); // 801BC01C
  c->lr=0x801BC024u; f_801AD0EC(c); // 801BC020
  goto L_801BC0B0; // 801BC024
L_801BC028:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BC028
  if (crb(c,2)) { goto L_801BC05C; } // 801BC02C
  c->r[12]=R32(c->r[30]+0x00000004u); // 801BC030
  cmps(c,0,(int32_t)c->r[12],0); // 801BC034
  if (crb(c,2)) { goto L_801BC0B0; } // 801BC038
  c->r[3]=c->r[30]+0x0000001Cu; // 801BC03C
  c->r[4]=R32(c->r[30]+0x00000008u); // 801BC040
  c->r[5]=0u+0x0000000Au; // 801BC044
  c->ctr=c->r[12]; // 801BC048
  if (true) { c->lr=0x801BC050u; dispatch(c,c->ctr); } // 801BC04C
  c->r[0]=0u+0x00000000u; // 801BC050
  W32(c->r[30]+0x00000004u,c->r[0]); // 801BC054
  goto L_801BC0B0; // 801BC058
L_801BC05C:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801BC05C
  c->r[0]=c->r[0]|0x00000006u; // 801BC060
  W8(c->r[30]+0x00000076u,c->r[0]); // 801BC064
  c->r[0]=R8(c->r[30]+0x0000007Fu); // 801BC068
  cmpu(c,0,c->r[0],0x00000002u); // 801BC06C
  if (!crb(c,2)) { goto L_801BC0B0; } // 801BC070
  c->r[31]=0u+0x00000000u; // 801BC074
  c->r[3]=c->r[30]|c->r[30]; // 801BC078
  W8(c->r[30]+0x0000007Fu,c->r[31]); // 801BC07C
  c->lr=0x801BC084u; f_801BCE7C(c); // 801BC080
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801BC084
  cmpu(c,0,c->r[5],0x00000001u); // 801BC088
  if (crb(c,2)) { goto L_801BC0B0; } // 801BC08C
  c->r[12]=R32(c->r[30]+0x00000004u); // 801BC090
  cmps(c,0,(int32_t)c->r[12],0); // 801BC094
  if (crb(c,2)) { goto L_801BC0B0; } // 801BC098
  c->r[3]=c->r[30]+0x0000001Cu; // 801BC09C
  c->r[4]=R32(c->r[30]+0x00000008u); // 801BC0A0
  c->ctr=c->r[12]; // 801BC0A4
  if (true) { c->lr=0x801BC0ACu; dispatch(c,c->ctr); } // 801BC0A8
  W32(c->r[30]+0x00000004u,c->r[31]); // 801BC0AC
L_801BC0B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BC0B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BC0B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BC0B8
  c->lr=c->r[0]; // 801BC0BC
  c->r[1]=c->r[1]+0x00000010u; // 801BC0C0
  return; // 801BC0C4
}

// btm_sec_is_bonding
void f_801BC0C8(Ctx* __restrict c) {
  trace_call(0x801BC0C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC0C8
  c->r[0]=c->lr; // 801BC0CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BC0D0
  c->lr=0x801BC0D8u; f_801B5174(c); // 801BC0D4
  cmps(c,0,(int32_t)c->r[3],0); // 801BC0D8
  if (crb(c,2)) { goto L_801BC0F4; } // 801BC0DC
  c->r[0]=R8(c->r[3]+0x00000081u); // 801BC0E0
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BC0E4
  if (crb(c,2)) { goto L_801BC0F4; } // 801BC0E8
  c->r[3]=0u+0x00000001u; // 801BC0EC
  goto L_801BC0F8; // 801BC0F0
L_801BC0F4:;
  c->r[3]=0u+0x00000000u; // 801BC0F4
L_801BC0F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BC0F8
  c->lr=c->r[0]; // 801BC0FC
  c->r[1]=c->r[1]+0x00000010u; // 801BC100
  return; // 801BC104
}

// btm_sec_connected
void f_801BC108(Ctx* __restrict c) {
  trace_call(0x801BC108u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC108
  c->r[0]=c->lr; // 801BC10C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BC110
  c->r[11]=c->r[1]+0x00000020u; // 801BC114
  c->lr=0x801BC11Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BC118
  c->r[27]=c->r[3]|c->r[3]; // 801BC11C
  c->r[28]=c->r[4]|c->r[4]; // 801BC120
  c->r[29]=c->r[5]|c->r[5]; // 801BC124
  c->r[30]=c->r[6]|c->r[6]; // 801BC128
  c->lr=0x801BC130u; f_801B522C(c); // 801BC12C
  c->r[4]=0u+0x803D0000u; // 801BC130
  c->r[31]=c->r[3]|c->r[3]; // 801BC134
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BC138
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801BC13C
  cmpu(c,0,c->r[0],0x00000004u); // 801BC140
  if (crb(c,0)) { goto L_801BC168; } // 801BC144
  c->r[3]=0u+0x000D0000u; // 801BC148
  c->r[4]=0u+0x80330000u; // 801BC14C
  c->r[5]=c->r[28]|c->r[28]; // 801BC150
  c->r[6]=c->r[29]|c->r[29]; // 801BC154
  c->r[7]=c->r[30]|c->r[30]; // 801BC158
  c->r[3]=c->r[3]+0x00000003u; // 801BC15C
  c->r[4]=c->r[4]+0x000035DCu; // 801BC160
  c->lr=0x801BC168u; f_801ACB68(c); // 801BC164
L_801BC168:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BC168
  if (!crb(c,2)) { goto L_801BC194; } // 801BC16C
  cmps(c,0,(int32_t)c->r[29],0); // 801BC170
  if (!crb(c,2)) { goto L_801BC570; } // 801BC174
  c->r[3]=c->r[27]|c->r[27]; // 801BC178
  c->lr=0x801BC180u; f_801B5054(c); // 801BC17C
  cmps(c,0,(int32_t)c->r[3],0); // 801BC180
  c->r[31]=c->r[3]|c->r[3]; // 801BC184
  if (!crb(c,2)) { goto L_801BC1B4; } // 801BC188
  goto L_801BC570; // 801BC18C
  goto L_801BC570; // 801BC190
L_801BC194:;
  c->r[4]=0u+0x803D0000u; // 801BC194
  c->r[0]=0u+0x00000001u; // 801BC198
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BC19C
  c->r[3]=R32(c->r[4]+0x00001974u); // 801BC1A0
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801BC1A4
  c->r[3]=c->r[3]+0x00000001u; // 801BC1A8
  W32(c->r[4]+0x00001974u,c->r[3]); // 801BC1AC
  W8(c->r[31]+0x00000085u,c->r[0]); // 801BC1B0
L_801BC1B4:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 801BC1B4
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BC1B8
  if (crb(c,2)) { goto L_801BC24C; } // 801BC1BC
  c->r[4]=0u+0x803D0000u; // 801BC1C0
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BC1C4
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801BC1C8
  cmps(c,0,(int32_t)c->r[0],0); // 801BC1CC
  if (crb(c,2)) { goto L_801BC228; } // 801BC1D0
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801BC1D4
  c->r[3]=0u+0x00000000u; // 801BC1D8
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801BC1DC
  cmpu(c,0,c->r[0],0x00000005u); // 801BC1E0
  if (crb(c,0)) { goto L_801BC20C; } // 801BC1E4
  c->r[3]=R8(c->r[4]+0x00001978u); // 801BC1E8
  c->r[4]=0u+0x80330000u; // 801BC1EC
  c->r[5]=0u+0x000D0000u; // 801BC1F0
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801BC1F4
  c->r[4]=c->r[4]+0x00003234u; // 801BC1F8
  c->r[0]=cntlz(c->r[0]); // 801BC1FC
  c->r[3]=c->r[5]+0x00000004u; // 801BC200
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BC204
  c->lr=0x801BC20Cu; f_801ACB38(c); // 801BC208
L_801BC20C:;
  c->r[3]=0u+0x803D0000u; // 801BC20C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BC210
  c->r[3]=R8(c->r[3]+0x00001978u); // 801BC214
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801BC218
  c->r[0]=cntlz(c->r[0]); // 801BC21C
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801BC220
  c->lr=0x801BC228u; f_801C1608(c); // 801BC224
L_801BC228:;
  c->r[4]=0u+0x803D0000u; // 801BC228
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BC22C
  c->r[0]=R8(c->r[4]+0x0000197Cu); // 801BC230
  cmps(c,0,(int32_t)c->r[0],0); // 801BC234
  if (crb(c,2)) { goto L_801BC24C; } // 801BC238
  c->r[0]=0u+0x00000000u; // 801BC23C
  c->r[3]=R8(c->r[4]+0x00000020u); // 801BC240
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 801BC244
  c->lr=0x801BC24Cu; f_801C1094(c); // 801BC248
L_801BC24C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801BC24C
  if (crb(c,2)) { goto L_801BC3BC; } // 801BC250
  cmpu(c,0,c->r[29],0x00000005u); // 801BC254
  if (crb(c,2)) { goto L_801BC2A8; } // 801BC258
  cmpu(c,0,c->r[29],0x00000006u); // 801BC25C
  if (crb(c,2)) { goto L_801BC2A8; } // 801BC260
  cmpu(c,0,c->r[29],0x0000000Eu); // 801BC264
  if (crb(c,2)) { goto L_801BC2A8; } // 801BC268
  cmpu(c,0,c->r[29],0x00000018u); // 801BC26C
  if (crb(c,2)) { goto L_801BC2A8; } // 801BC270
  cmpu(c,0,c->r[29],0x00000026u); // 801BC274
  if (crb(c,2)) { goto L_801BC2A8; } // 801BC278
  cmpu(c,0,c->r[29],0x00000029u); // 801BC27C
  if (crb(c,2)) { goto L_801BC2A8; } // 801BC280
  cmpu(c,0,c->r[29],0x00000025u); // 801BC284
  if (crb(c,2)) { goto L_801BC2A8; } // 801BC288
  cmpu(c,0,c->r[29],0x00000017u); // 801BC28C
  if (crb(c,2)) { goto L_801BC2A8; } // 801BC290
  cmpu(c,0,c->r[29],0x00000022u); // 801BC294
  if (crb(c,2)) { goto L_801BC2A8; } // 801BC298
  c->r[0]=R8(c->r[31]+0x00000081u); // 801BC29C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BC2A0
  if (crb(c,2)) { goto L_801BC334; } // 801BC2A4
L_801BC2A8:;
  c->r[3]=R8(c->r[31]+0x00000081u); // 801BC2A8
  c->r[0]=0u+0xFFFFFFAFu; // 801BC2AC
  c->r[28]=0u+0x803D0000u; // 801BC2B0
  c->r[0]=c->r[3]&c->r[0]; // 801BC2B4
  W8(c->r[31]+0x00000081u,c->r[0]); // 801BC2B8
  c->r[28]=c->r[28]+0xFFFF8118u; // 801BC2BC
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BC2C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801BC2C4
  W8(c->r[31]+0x00000076u,c->r[0]); // 801BC2C8
  c->r[0]=R32(c->r[28]+0x0000194Cu); // 801BC2CC
  cmps(c,0,(int32_t)c->r[0],0); // 801BC2D0
  if (crb(c,2)) { goto L_801BC2EC; } // 801BC2D4
  c->r[3]=c->r[28]+0x0000193Cu; // 801BC2D8
  c->lr=0x801BC2E0u; f_801AD15C(c); // 801BC2DC
  c->r[0]=0u+0x00000000u; // 801BC2E0
  c->r[29]=0u+0x0000000Eu; // 801BC2E4
  W32(c->r[28]+0x0000194Cu,c->r[0]); // 801BC2E8
L_801BC2EC:;
  c->r[3]=0u+0x803D0000u; // 801BC2EC
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BC2F0
  c->r[0]=R8(c->r[3]+0x000027BFu); // 801BC2F4
  cmpu(c,0,c->r[0],0x0000000Eu); // 801BC2F8
  if (!crb(c,2)) { goto L_801BC304; } // 801BC2FC
  c->r[29]=0u+0x0000000Eu; // 801BC300
L_801BC304:;
  c->r[3]=0u+0x803D0000u; // 801BC304
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BC308
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801BC30C
  cmps(c,0,(int32_t)c->r[12],0); // 801BC310
  if (crb(c,2)) { goto L_801BC570; } // 801BC314
  c->r[6]=c->r[29]|c->r[29]; // 801BC318
  c->r[3]=c->r[31]+0x0000001Cu; // 801BC31C
  c->r[4]=c->r[31]+0x00000022u; // 801BC320
  c->r[5]=c->r[31]+0x00000035u; // 801BC324
  c->ctr=c->r[12]; // 801BC328
  if (true) { c->lr=0x801BC330u; dispatch(c,c->ctr); } // 801BC32C
  goto L_801BC570; // 801BC330
L_801BC334:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801BC334
  cmps(c,0,(int32_t)c->r[0],0); // 801BC338
  if (crb(c,2)) { goto L_801BC570; } // 801BC33C
  c->r[0]=R8(c->r[31]+0x00000080u); // 801BC340
  cmps(c,0,(int32_t)c->r[0],0); // 801BC344
  if (crb(c,2)) { goto L_801BC36C; } // 801BC348
  c->r[3]=R32(c->r[31]+0x00000000u); // 801BC34C
  cmps(c,0,(int32_t)c->r[3],0); // 801BC350
  if (crb(c,2)) { goto L_801BC36C; } // 801BC354
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BC358
  cmpu(c,0,c->r[0],0x00000003u); // 801BC35C
  if (!crb(c,2)) { goto L_801BC36C; } // 801BC360
  c->r[0]=0u+0x00000000u; // 801BC364
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BC368
L_801BC36C:;
  cmpu(c,0,c->r[29],0x00000008u); // 801BC36C
  if (crb(c,2)) { goto L_801BC384; } // 801BC370
  cmpu(c,0,c->r[29],0x0000001Fu); // 801BC374
  if (crb(c,2)) { goto L_801BC384; } // 801BC378
  cmpu(c,0,c->r[29],0x00000004u); // 801BC37C
  if (!crb(c,2)) { goto L_801BC3A0; } // 801BC380
L_801BC384:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801BC384
  c->r[3]=c->r[31]+0x0000001Cu; // 801BC388
  c->r[4]=R32(c->r[31]+0x00000008u); // 801BC38C
  c->r[5]=0u+0x00000008u; // 801BC390
  c->ctr=c->r[12]; // 801BC394
  if (true) { c->lr=0x801BC39Cu; dispatch(c,c->ctr); } // 801BC398
  goto L_801BC570; // 801BC39C
L_801BC3A0:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801BC3A0
  c->r[3]=c->r[31]+0x0000001Cu; // 801BC3A4
  c->r[4]=R32(c->r[31]+0x00000008u); // 801BC3A8
  c->r[5]=0u+0x0000000Au; // 801BC3AC
  c->ctr=c->r[12]; // 801BC3B0
  if (true) { c->lr=0x801BC3B8u; dispatch(c,c->ctr); } // 801BC3B4
  goto L_801BC570; // 801BC3B8
L_801BC3BC:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 801BC3BC
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BC3C0
  if (crb(c,2)) { goto L_801BC49C; } // 801BC3C4
  c->r[0]=R8(c->r[31]+0x00000082u); // 801BC3C8
  cmps(c,0,(int32_t)c->r[0],0); // 801BC3CC
  if (crb(c,2)) { goto L_801BC49C; } // 801BC3D0
  c->r[0]=0u+0x00000000u; // 801BC3D4
  c->r[3]=0u+0x803D0000u; // 801BC3D8
  W8(c->r[31]+0x00000082u,c->r[0]); // 801BC3DC
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BC3E0
  c->r[12]=R32(c->r[3]+0x00001914u); // 801BC3E4
  cmps(c,0,(int32_t)c->r[12],0); // 801BC3E8
  if (crb(c,2)) { goto L_801BC40C; } // 801BC3EC
  c->r[3]=c->r[31]+0x0000001Cu; // 801BC3F0
  c->r[4]=c->r[31]+0x00000022u; // 801BC3F4
  c->r[5]=c->r[31]+0x00000035u; // 801BC3F8
  c->r[6]=c->r[31]+0x00000025u; // 801BC3FC
  c->r[7]=R8(c->r[31]+0x00000083u); // 801BC400
  c->ctr=c->r[12]; // 801BC404
  if (true) { c->lr=0x801BC40Cu; dispatch(c,c->ctr); } // 801BC408
L_801BC40C:;
  c->r[29]=0u+0x803D0000u; // 801BC40C
  c->r[30]=0u+0x00000000u; // 801BC410
  c->r[29]=c->r[29]+0xFFFF8118u; // 801BC414
L_801BC418:;
  c->r[12]=R32(c->r[29]+0x00001924u); // 801BC418
  cmps(c,0,(int32_t)c->r[12],0); // 801BC41C
  if (crb(c,2)) { goto L_801BC440; } // 801BC420
  c->r[3]=c->r[31]+0x0000001Cu; // 801BC424
  c->r[4]=c->r[31]+0x00000022u; // 801BC428
  c->r[5]=c->r[31]+0x00000035u; // 801BC42C
  c->r[6]=c->r[31]+0x00000025u; // 801BC430
  c->r[7]=R8(c->r[31]+0x00000083u); // 801BC434
  c->ctr=c->r[12]; // 801BC438
  if (true) { c->lr=0x801BC440u; dispatch(c,c->ctr); } // 801BC43C
L_801BC440:;
  c->r[30]=c->r[30]+0x00000001u; // 801BC440
  c->r[29]=c->r[29]+0x00000004u; // 801BC444
  cmps(c,0,(int32_t)c->r[30],2); // 801BC448
  if (crb(c,0)) { IRQCHK(c); goto L_801BC418; } // 801BC44C
  c->r[3]=0u+0x803D0000u; // 801BC450
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BC454
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801BC458
  cmps(c,0,(int32_t)c->r[12],0); // 801BC45C
  if (crb(c,2)) { goto L_801BC47C; } // 801BC460
  c->r[3]=c->r[31]+0x0000001Cu; // 801BC464
  c->r[4]=c->r[31]+0x00000022u; // 801BC468
  c->r[5]=c->r[31]+0x00000035u; // 801BC46C
  c->r[6]=0u+0x00000000u; // 801BC470
  c->ctr=c->r[12]; // 801BC474
  if (true) { c->lr=0x801BC47Cu; dispatch(c,c->ctr); } // 801BC478
L_801BC47C:;
  c->r[5]=R8(c->r[31]+0x00000081u); // 801BC47C
  c->r[0]=0u+0xFFFFFFAFu; // 801BC480
  c->r[3]=c->r[28]|c->r[28]; // 801BC484
  c->r[4]=0u+0x00000013u; // 801BC488
  c->r[0]=c->r[5]&c->r[0]; // 801BC48C
  W8(c->r[31]+0x00000081u,c->r[0]); // 801BC490
  c->lr=0x801BC498u; f_801BFCA0(c); // 801BC494
  goto L_801BC570; // 801BC498
L_801BC49C:;
  W16(c->r[31]+0x00000018u,c->r[28]); // 801BC49C
  cmps(c,0,(int32_t)c->r[30],0); // 801BC4A0
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BC4A4
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 801BC4A8
  W8(c->r[31]+0x00000076u,c->r[0]); // 801BC4AC
  if (crb(c,2)) { goto L_801BC4C0; } // 801BC4B0
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BC4B4
  c->r[0]=c->r[0]|0x00000006u; // 801BC4B8
  W8(c->r[31]+0x00000076u,c->r[0]); // 801BC4BC
L_801BC4C0:;
  c->r[3]=0u+0x803D0000u; // 801BC4C0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BC4C4
  c->r[0]=R8(c->r[3]+0x00001978u); // 801BC4C8
  cmpu(c,0,c->r[0],0x00000003u); // 801BC4CC
  if (!crb(c,2)) { goto L_801BC4E0; } // 801BC4D0
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BC4D4
  c->r[0]=c->r[0]|0x00000002u; // 801BC4D8
  W8(c->r[31]+0x00000076u,c->r[0]); // 801BC4DC
L_801BC4E0:;
  c->r[0]=0u+0x00000000u; // 801BC4E0
  W8(c->r[31]+0x00000084u,c->r[0]); // 801BC4E4
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BC4E8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801BC4EC
  if (crb(c,2)) { goto L_801BC500; } // 801BC4F0
  c->r[0]=R8(c->r[31]+0x00000080u); // 801BC4F4
  cmps(c,0,(int32_t)c->r[0],0); // 801BC4F8
  if (crb(c,2)) { goto L_801BC570; } // 801BC4FC
L_801BC500:;
  c->r[3]=c->r[31]|c->r[31]; // 801BC500
  c->lr=0x801BC508u; f_801BCE7C(c); // 801BC504
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801BC508
  c->r[4]=c->r[3]|c->r[3]; // 801BC50C
  cmpu(c,0,c->r[0],0x00000001u); // 801BC510
  if (crb(c,2)) { goto L_801BC570; } // 801BC514
  c->r[0]=R32(c->r[31]+0x00000004u); // 801BC518
  cmps(c,0,(int32_t)c->r[0],0); // 801BC51C
  if (crb(c,2)) { goto L_801BC570; } // 801BC520
  c->r[0]=R8(c->r[31]+0x00000080u); // 801BC524
  cmps(c,0,(int32_t)c->r[0],0); // 801BC528
  if (crb(c,2)) { goto L_801BC550; } // 801BC52C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801BC530
  cmps(c,0,(int32_t)c->r[3],0); // 801BC534
  if (crb(c,2)) { goto L_801BC550; } // 801BC538
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BC53C
  cmpu(c,0,c->r[0],0x00000003u); // 801BC540
  if (!crb(c,2)) { goto L_801BC550; } // 801BC544
  c->r[0]=0u+0x00000000u; // 801BC548
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BC54C
L_801BC550:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801BC550
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 801BC554
  c->r[3]=c->r[31]+0x0000001Cu; // 801BC558
  c->r[4]=R32(c->r[31]+0x00000008u); // 801BC55C
  c->ctr=c->r[12]; // 801BC560
  if (true) { c->lr=0x801BC568u; dispatch(c,c->ctr); } // 801BC564
  c->r[0]=0u+0x00000000u; // 801BC568
  W32(c->r[31]+0x00000004u,c->r[0]); // 801BC56C
L_801BC570:;
  c->r[11]=c->r[1]+0x00000020u; // 801BC570
  c->lr=0x801BC578u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BC574
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BC578
  c->lr=c->r[0]; // 801BC57C
  c->r[1]=c->r[1]+0x00000020u; // 801BC580
  return; // 801BC584
}

// btm_sec_disconnect
void f_801BC588(Ctx* __restrict c) {
  trace_call(0x801BC588u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC588
  c->r[0]=c->lr; // 801BC58C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BC590
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BC594
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BC598
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BC59C
  c->r[29]=c->r[4]|c->r[4]; // 801BC5A0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BC5A4
  c->r[28]=c->r[3]|c->r[3]; // 801BC5A8
  c->lr=0x801BC5B0u; f_801B5174(c); // 801BC5AC
  cmps(c,0,(int32_t)c->r[3],0); // 801BC5B0
  c->r[31]=c->r[3]|c->r[3]; // 801BC5B4
  if (!crb(c,2)) { goto L_801BC5C4; } // 801BC5B8
  c->r[3]=0u+0x00000005u; // 801BC5BC
  goto L_801BC624; // 801BC5C0
L_801BC5C4:;
  c->r[0]=R8(c->r[3]+0x00000081u); // 801BC5C4
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BC5C8
  if (crb(c,2)) { goto L_801BC5E4; } // 801BC5CC
  c->r[4]=0u+0x803D0000u; // 801BC5D0
  c->r[3]=0u+0x00000000u; // 801BC5D4
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BC5D8
  W8(c->r[4]+0x0000197Eu,c->r[29]); // 801BC5DC
  goto L_801BC624; // 801BC5E0
L_801BC5E4:;
  c->r[30]=R8(c->r[3]+0x0000007Fu); // 801BC5E4
  cmpu(c,0,c->r[30],0x00000005u); // 801BC5E8
  if (!crb(c,2)) { goto L_801BC5F8; } // 801BC5EC
  c->r[3]=0u+0x00000001u; // 801BC5F0
  goto L_801BC624; // 801BC5F4
L_801BC5F8:;
  c->r[0]=0u+0x00000005u; // 801BC5F8
  c->r[4]=c->r[29]|c->r[29]; // 801BC5FC
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801BC600
  c->r[3]=c->r[28]|c->r[28]; // 801BC604
  c->lr=0x801BC60Cu; f_801BFCA0(c); // 801BC608
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BC60C
  if (crb(c,2)) { goto L_801BC61C; } // 801BC610
  c->r[3]=0u+0x00000001u; // 801BC614
  goto L_801BC624; // 801BC618
L_801BC61C:;
  W8(c->r[31]+0x0000007Fu,c->r[30]); // 801BC61C
  c->r[3]=0u+0x00000003u; // 801BC620
L_801BC624:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BC624
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BC628
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BC62C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BC630
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BC634
  c->lr=c->r[0]; // 801BC638
  c->r[1]=c->r[1]+0x00000020u; // 801BC63C
  return; // 801BC640
}

// btm_sec_disconnected
void f_801BC644(Ctx* __restrict c) {
  trace_call(0x801BC644u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC644
  c->r[0]=c->lr; // 801BC648
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BC64C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BC650
  c->r[31]=c->r[4]|c->r[4]; // 801BC654
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BC658
  c->lr=0x801BC660u; f_801B5174(c); // 801BC65C
  cmps(c,0,(int32_t)c->r[3],0); // 801BC660
  c->r[30]=c->r[3]|c->r[3]; // 801BC664
  if (crb(c,2)) { goto L_801BC768; } // 801BC668
  c->r[0]=R8(c->r[3]+0x00000081u); // 801BC66C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BC670
  if (crb(c,2)) { goto L_801BC6C8; } // 801BC674
  c->r[4]=0u+0x803D0000u; // 801BC678
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BC67C
  c->r[12]=R32(c->r[4]+0x0000191Cu); // 801BC680
  cmps(c,0,(int32_t)c->r[12],0); // 801BC684
  if (crb(c,2)) { goto L_801BC6C8; } // 801BC688
  cmpu(c,0,c->r[31],0x00000017u); // 801BC68C
  if (!crb(c,2)) { goto L_801BC6B0; } // 801BC690
  c->r[4]=c->r[3]+0x00000022u; // 801BC694
  c->r[5]=c->r[3]+0x00000035u; // 801BC698
  c->r[6]=0u+0x00000017u; // 801BC69C
  c->ctr=c->r[12]; // 801BC6A0
  c->r[3]=c->r[3]+0x0000001Cu; // 801BC6A4
  if (true) { c->lr=0x801BC6ACu; dispatch(c,c->ctr); } // 801BC6A8
  goto L_801BC6C8; // 801BC6AC
L_801BC6B0:;
  c->r[4]=c->r[3]+0x00000022u; // 801BC6B0
  c->r[5]=c->r[3]+0x00000035u; // 801BC6B4
  c->r[6]=0u+0x00000005u; // 801BC6B8
  c->ctr=c->r[12]; // 801BC6BC
  c->r[3]=c->r[3]+0x0000001Cu; // 801BC6C0
  if (true) { c->lr=0x801BC6C8u; dispatch(c,c->ctr); } // 801BC6C4
L_801BC6C8:;
  c->r[31]=0u+0x803D0000u; // 801BC6C8
  c->r[31]=c->r[31]+0xFFFF8118u; // 801BC6CC
  c->r[0]=R32(c->r[31]+0x0000194Cu); // 801BC6D0
  cmps(c,0,(int32_t)c->r[0],0); // 801BC6D4
  if (crb(c,2)) { goto L_801BC738; } // 801BC6D8
  c->r[3]=c->r[31]+0x00001954u; // 801BC6DC
  c->r[4]=c->r[30]+0x0000001Cu; // 801BC6E0
  c->r[5]=0u+0x00000006u; // 801BC6E4
  c->lr=0x801BC6ECu; f_8018C170(c); // 801BC6E8
  cmps(c,0,(int32_t)c->r[3],0); // 801BC6EC
  if (!crb(c,2)) { goto L_801BC738; } // 801BC6F0
  c->r[3]=c->r[31]+0x0000193Cu; // 801BC6F4
  c->lr=0x801BC6FCu; f_801AD15C(c); // 801BC6F8
  c->r[0]=0u+0x00000000u; // 801BC6FC
  c->r[3]=c->r[31]+0x00001954u; // 801BC700
  W32(c->r[31]+0x0000194Cu,c->r[0]); // 801BC704
  c->r[4]=0u+0x000000FFu; // 801BC708
  c->r[5]=0u+0x00000006u; // 801BC70C
  c->lr=0x801BC714u; f_80004688(c); // 801BC710
  c->r[12]=R32(c->r[31]+0x0000191Cu); // 801BC714
  cmps(c,0,(int32_t)c->r[12],0); // 801BC718
  if (crb(c,2)) { goto L_801BC738; } // 801BC71C
  c->r[3]=c->r[30]+0x0000001Cu; // 801BC720
  c->r[4]=c->r[30]+0x00000022u; // 801BC724
  c->r[5]=c->r[30]+0x00000035u; // 801BC728
  c->r[6]=0u+0x0000000Eu; // 801BC72C
  c->ctr=c->r[12]; // 801BC730
  if (true) { c->lr=0x801BC738u; dispatch(c,c->ctr); } // 801BC734
L_801BC738:;
  c->r[4]=0u+0x00010000u; // 801BC738
  c->r[3]=0u+0x00000000u; // 801BC73C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801BC740
  W16(c->r[30]+0x00000018u,c->r[0]); // 801BC744
  W8(c->r[30]+0x0000007Fu,c->r[3]); // 801BC748
  c->r[0]=R8(c->r[30]+0x00000076u); // 801BC74C
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 801BC750
  W8(c->r[30]+0x00000076u,c->r[0]); // 801BC754
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BC758
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 801BC75C
  W8(c->r[30]+0x00000081u,c->r[0]); // 801BC760
  W32(c->r[30]+0x00000004u,c->r[3]); // 801BC764
L_801BC768:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BC768
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BC76C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BC770
  c->lr=c->r[0]; // 801BC774
  c->r[1]=c->r[1]+0x00000010u; // 801BC778
  return; // 801BC77C
}

// btm_sec_link_key_notification
void f_801BC780(Ctx* __restrict c) {
  trace_call(0x801BC780u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC780
  c->r[0]=c->lr; // 801BC784
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BC788
  c->r[11]=c->r[1]+0x00000020u; // 801BC78C
  c->lr=0x801BC794u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BC790
  c->r[29]=c->r[3]|c->r[3]; // 801BC794
  c->r[30]=c->r[4]|c->r[4]; // 801BC798
  c->r[27]=c->r[5]|c->r[5]; // 801BC79C
  c->lr=0x801BC7A4u; f_801B522C(c); // 801BC7A0
  cmps(c,0,(int32_t)c->r[3],0); // 801BC7A4
  c->r[31]=c->r[3]|c->r[3]; // 801BC7A8
  if (!crb(c,2)) { goto L_801BC7C4; } // 801BC7AC
  c->r[3]=c->r[29]|c->r[29]; // 801BC7B0
  c->lr=0x801BC7B8u; f_801B5054(c); // 801BC7B4
  cmps(c,0,(int32_t)c->r[3],0); // 801BC7B8
  c->r[31]=c->r[3]|c->r[3]; // 801BC7BC
  if (crb(c,2)) { goto L_801BC914; } // 801BC7C0
L_801BC7C4:;
  c->r[3]=0u+0x803D0000u; // 801BC7C4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BC7C8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BC7CC
  cmpu(c,0,c->r[0],0x00000004u); // 801BC7D0
  if (crb(c,0)) { goto L_801BC804; } // 801BC7D4
  c->r[3]=0u+0x000D0000u; // 801BC7D8
  c->r[4]=0u+0x80330000u; // 801BC7DC
  c->r[5]=R8(c->r[29]+0x00000000u); // 801BC7E0
  c->r[3]=c->r[3]+0x00000003u; // 801BC7E4
  c->r[6]=R8(c->r[29]+0x00000001u); // 801BC7E8
  c->r[4]=c->r[4]+0x00003620u; // 801BC7EC
  c->r[7]=R8(c->r[29]+0x00000002u); // 801BC7F0
  c->r[8]=R8(c->r[29]+0x00000003u); // 801BC7F4
  c->r[9]=R8(c->r[29]+0x00000004u); // 801BC7F8
  c->r[10]=R8(c->r[29]+0x00000005u); // 801BC7FC
  c->lr=0x801BC804u; f_801ACBB0(c); // 801BC800
L_801BC804:;
  c->r[3]=0u+0x803D0000u; // 801BC804
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BC808
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BC80C
  cmpu(c,0,c->r[0],0x00000004u); // 801BC810
  if (crb(c,0)) { goto L_801BC830; } // 801BC814
  c->r[3]=0u+0x000D0000u; // 801BC818
  c->r[4]=0u+0x80330000u; // 801BC81C
  c->r[5]=c->r[27]|c->r[27]; // 801BC820
  c->r[3]=c->r[3]+0x00000003u; // 801BC824
  c->r[4]=c->r[4]+0x00003664u; // 801BC828
  c->lr=0x801BC830u; f_801ACB38(c); // 801BC82C
L_801BC830:;
  c->r[3]=0u+0x803D0000u; // 801BC830
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BC834
  c->r[0]=R8(c->r[3]+0x00000636u); // 801BC838
  cmpu(c,0,c->r[0],0x00000001u); // 801BC83C
  if (!crb(c,0)) { goto L_801BC850; } // 801BC840
  c->r[0]=0u+0x000000FFu; // 801BC844
  W8(c->r[31]+0x00000083u,c->r[0]); // 801BC848
  goto L_801BC854; // 801BC84C
L_801BC850:;
  W8(c->r[31]+0x00000083u,c->r[27]); // 801BC850
L_801BC854:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BC854
  c->r[4]=c->r[30]|c->r[30]; // 801BC858
  c->r[3]=c->r[31]+0x00000025u; // 801BC85C
  c->r[5]=0u+0x00000010u; // 801BC860
  c->r[0]=c->r[0]|0x00000010u; // 801BC864
  W8(c->r[31]+0x00000076u,c->r[0]); // 801BC868
  c->lr=0x801BC870u; f_80004338(c); // 801BC86C
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BC870
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801BC874
  if (crb(c,2)) { goto L_801BC894; } // 801BC878
  c->r[0]=R8(c->r[31]+0x00000081u); // 801BC87C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BC880
  if (crb(c,2)) { goto L_801BC8A0; } // 801BC884
  c->r[0]=R8(c->r[31]+0x00000085u); // 801BC888
  cmps(c,0,(int32_t)c->r[0],0); // 801BC88C
  if (!crb(c,2)) { goto L_801BC8A0; } // 801BC890
L_801BC894:;
  c->r[0]=0u+0x00000001u; // 801BC894
  W8(c->r[31]+0x00000082u,c->r[0]); // 801BC898
  goto L_801BC914; // 801BC89C
L_801BC8A0:;
  c->r[3]=0u+0x803D0000u; // 801BC8A0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BC8A4
  c->r[12]=R32(c->r[3]+0x00001914u); // 801BC8A8
  cmps(c,0,(int32_t)c->r[12],0); // 801BC8AC
  if (crb(c,2)) { goto L_801BC8D0; } // 801BC8B0
  c->r[3]=c->r[29]|c->r[29]; // 801BC8B4
  c->r[6]=c->r[30]|c->r[30]; // 801BC8B8
  c->r[4]=c->r[31]+0x00000022u; // 801BC8BC
  c->r[5]=c->r[31]+0x00000035u; // 801BC8C0
  c->r[7]=R8(c->r[31]+0x00000083u); // 801BC8C4
  c->ctr=c->r[12]; // 801BC8C8
  if (true) { c->lr=0x801BC8D0u; dispatch(c,c->ctr); } // 801BC8CC
L_801BC8D0:;
  c->r[28]=0u+0x803D0000u; // 801BC8D0
  c->r[27]=0u+0x00000000u; // 801BC8D4
  c->r[28]=c->r[28]+0xFFFF8118u; // 801BC8D8
L_801BC8DC:;
  c->r[12]=R32(c->r[28]+0x00001924u); // 801BC8DC
  cmps(c,0,(int32_t)c->r[12],0); // 801BC8E0
  if (crb(c,2)) { goto L_801BC904; } // 801BC8E4
  c->r[3]=c->r[29]|c->r[29]; // 801BC8E8
  c->r[6]=c->r[30]|c->r[30]; // 801BC8EC
  c->r[4]=c->r[31]+0x00000022u; // 801BC8F0
  c->r[5]=c->r[31]+0x00000035u; // 801BC8F4
  c->r[7]=R8(c->r[31]+0x00000083u); // 801BC8F8
  c->ctr=c->r[12]; // 801BC8FC
  if (true) { c->lr=0x801BC904u; dispatch(c,c->ctr); } // 801BC900
L_801BC904:;
  c->r[27]=c->r[27]+0x00000001u; // 801BC904
  c->r[28]=c->r[28]+0x00000004u; // 801BC908
  cmps(c,0,(int32_t)c->r[27],2); // 801BC90C
  if (crb(c,0)) { IRQCHK(c); goto L_801BC8DC; } // 801BC910
L_801BC914:;
  c->r[11]=c->r[1]+0x00000020u; // 801BC914
  c->lr=0x801BC91Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BC918
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BC91C
  c->lr=c->r[0]; // 801BC920
  c->r[1]=c->r[1]+0x00000020u; // 801BC924
  return; // 801BC928
}

// btm_sec_link_key_request
void f_801BC92C(Ctx* __restrict c) {
  trace_call(0x801BC92Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC92C
  c->r[0]=c->lr; // 801BC930
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BC934
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BC938
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BC93C
  c->r[30]=c->r[3]|c->r[3]; // 801BC940
  c->lr=0x801BC948u; f_801B522C(c); // 801BC944
  c->r[4]=0u+0x803D0000u; // 801BC948
  c->r[31]=c->r[3]|c->r[3]; // 801BC94C
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BC950
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801BC954
  cmpu(c,0,c->r[0],0x00000004u); // 801BC958
  if (crb(c,0)) { goto L_801BC98C; } // 801BC95C
  c->r[3]=0u+0x000D0000u; // 801BC960
  c->r[4]=0u+0x80330000u; // 801BC964
  c->r[5]=R8(c->r[30]+0x00000000u); // 801BC968
  c->r[3]=c->r[3]+0x00000003u; // 801BC96C
  c->r[6]=R8(c->r[30]+0x00000001u); // 801BC970
  c->r[4]=c->r[4]+0x00003690u; // 801BC974
  c->r[7]=R8(c->r[30]+0x00000002u); // 801BC978
  c->r[8]=R8(c->r[30]+0x00000003u); // 801BC97C
  c->r[9]=R8(c->r[30]+0x00000004u); // 801BC980
  c->r[10]=R8(c->r[30]+0x00000005u); // 801BC984
  c->lr=0x801BC98Cu; f_801ACBB0(c); // 801BC988
L_801BC98C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BC98C
  if (crb(c,2)) { goto L_801BC9B0; } // 801BC990
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BC994
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801BC998
  if (crb(c,2)) { goto L_801BC9B0; } // 801BC99C
  c->r[3]=c->r[30]|c->r[30]; // 801BC9A0
  c->r[4]=c->r[31]+0x00000025u; // 801BC9A4
  c->lr=0x801BC9ACu; f_801BFE70(c); // 801BC9A8
  goto L_801BCA44; // 801BC9AC
L_801BC9B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BC9B0
  if (!crb(c,2)) { goto L_801BC9C4; } // 801BC9B4
  c->r[3]=c->r[30]|c->r[30]; // 801BC9B8
  c->lr=0x801BC9C0u; f_801B5054(c); // 801BC9BC
  c->r[31]=c->r[3]|c->r[3]; // 801BC9C0
L_801BC9C4:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 801BC9C4
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BC9C8
  if (!crb(c,2)) { goto L_801BCA3C; } // 801BC9CC
  c->r[3]=0u+0x803D0000u; // 801BC9D0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BC9D4
  c->r[12]=R32(c->r[3]+0x00001918u); // 801BC9D8
  cmps(c,0,(int32_t)c->r[12],0); // 801BC9DC
  if (crb(c,2)) { goto L_801BCA3C; } // 801BC9E0
  cmps(c,0,(int32_t)c->r[31],0); // 801BC9E4
  if (crb(c,2)) { goto L_801BCA14; } // 801BC9E8
  c->r[3]=c->r[30]|c->r[30]; // 801BC9EC
  c->r[4]=c->r[31]+0x00000025u; // 801BC9F0
  c->ctr=c->r[12]; // 801BC9F4
  if (true) { c->lr=0x801BC9FCu; dispatch(c,c->ctr); } // 801BC9F8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BC9FC
  if (!crb(c,2)) { goto L_801BCA3C; } // 801BCA00
  c->r[3]=c->r[30]|c->r[30]; // 801BCA04
  c->r[4]=c->r[31]+0x00000025u; // 801BCA08
  c->lr=0x801BCA10u; f_801BFE70(c); // 801BCA0C
  goto L_801BCA44; // 801BCA10
L_801BCA14:;
  c->r[3]=c->r[30]|c->r[30]; // 801BCA14
  c->r[4]=c->r[1]+0x00000008u; // 801BCA18
  c->ctr=c->r[12]; // 801BCA1C
  if (true) { c->lr=0x801BCA24u; dispatch(c,c->ctr); } // 801BCA20
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BCA24
  if (!crb(c,2)) { goto L_801BCA3C; } // 801BCA28
  c->r[3]=c->r[30]|c->r[30]; // 801BCA2C
  c->r[4]=c->r[1]+0x00000008u; // 801BCA30
  c->lr=0x801BCA38u; f_801BFE70(c); // 801BCA34
  goto L_801BCA44; // 801BCA38
L_801BCA3C:;
  c->r[3]=c->r[30]|c->r[30]; // 801BCA3C
  c->lr=0x801BCA44u; f_801C0010(c); // 801BCA40
L_801BCA44:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BCA44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BCA48
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BCA4C
  c->lr=c->r[0]; // 801BCA50
  c->r[1]=c->r[1]+0x00000020u; // 801BCA54
  return; // 801BCA58
}

// btm_sec_pin_code_request_timeout
void f_801BCA5C(Ctx* __restrict c) {
  trace_call(0x801BCA5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCA5C
  c->r[0]=c->lr; // 801BCA60
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BCA64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BCA68
  c->r[31]=0u+0x803D0000u; // 801BCA6C
  c->r[31]=c->r[31]+0xFFFF8118u; // 801BCA70
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801BCA74
  cmpu(c,0,c->r[0],0x00000004u); // 801BCA78
  if (crb(c,0)) { goto L_801BCA94; } // 801BCA7C
  c->r[3]=0u+0x000D0000u; // 801BCA80
  c->r[4]=0u+0x80330000u; // 801BCA84
  c->r[3]=c->r[3]+0x00000003u; // 801BCA88
  c->r[4]=c->r[4]+0x000036D0u; // 801BCA8C
  c->lr=0x801BCA94u; f_801ACB20(c); // 801BCA90
L_801BCA94:;
  c->r[0]=0u+0x00000000u; // 801BCA94
  c->r[3]=0u+0x803D0000u; // 801BCA98
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BCA9C
  W32(c->r[31]+0x0000194Cu,c->r[0]); // 801BCAA0
  c->r[3]=c->r[3]+0x00001954u; // 801BCAA4
  c->r[4]=0u+0x000000FFu; // 801BCAA8
  c->r[5]=0u+0x00000006u; // 801BCAAC
  c->lr=0x801BCAB4u; f_80004688(c); // 801BCAB0
  c->r[3]=c->r[31]+0x000027B4u; // 801BCAB4
  c->lr=0x801BCABCu; f_801C0294(c); // 801BCAB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BCABC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BCAC0
  c->lr=c->r[0]; // 801BCAC4
  c->r[1]=c->r[1]+0x00000010u; // 801BCAC8
  return; // 801BCACC
}

// btm_sec_pin_code_request
void f_801BCAD0(Ctx* __restrict c) {
  trace_call(0x801BCAD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCAD0
  c->r[0]=c->lr; // 801BCAD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BCAD8
  c->r[11]=c->r[1]+0x00000020u; // 801BCADC
  c->lr=0x801BCAE4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BCAE0
  c->r[29]=0u+0x803D0000u; // 801BCAE4
  c->r[31]=0u+0x80330000u; // 801BCAE8
  c->r[29]=c->r[29]+0xFFFF8118u; // 801BCAEC
  c->r[27]=c->r[3]|c->r[3]; // 801BCAF0
  c->r[0]=R8(c->r[29]+0x000027C0u); // 801BCAF4
  c->r[31]=c->r[31]+0x00002F38u; // 801BCAF8
  c->r[28]=0u+0x00000000u; // 801BCAFC
  c->r[30]=0u+0x00000000u; // 801BCB00
  cmpu(c,0,c->r[0],0x00000004u); // 801BCB04
  if (crb(c,0)) { goto L_801BCB34; } // 801BCB08
  c->r[3]=0u+0x000D0000u; // 801BCB0C
  c->r[5]=R8(c->r[27]+0x00000000u); // 801BCB10
  c->r[6]=R8(c->r[27]+0x00000001u); // 801BCB14
  c->r[3]=c->r[3]+0x00000003u; // 801BCB18
  c->r[7]=R8(c->r[27]+0x00000002u); // 801BCB1C
  c->r[4]=c->r[31]+0x000007BCu; // 801BCB20
  c->r[8]=R8(c->r[27]+0x00000003u); // 801BCB24
  c->r[9]=R8(c->r[27]+0x00000004u); // 801BCB28
  c->r[10]=R8(c->r[27]+0x00000005u); // 801BCB2C
  c->lr=0x801BCB34u; f_801ACBB0(c); // 801BCB30
L_801BCB34:;
  c->r[0]=R8(c->r[29]+0x00001979u); // 801BCB34
  cmps(c,0,(int32_t)c->r[0],0); // 801BCB38
  if (!crb(c,2)) { goto L_801BCC20; } // 801BCB3C
  c->r[0]=R8(c->r[29]+0x00000020u); // 801BCB40
  cmpu(c,0,c->r[0],0x00000001u); // 801BCB44
  if (!crb(c,2)) { goto L_801BCC20; } // 801BCB48
  c->r[3]=c->r[27]|c->r[27]; // 801BCB4C
  c->lr=0x801BCB54u; f_801B522C(c); // 801BCB50
  cmps(c,0,(int32_t)c->r[3],0); // 801BCB54
  if (!crb(c,2)) { goto L_801BCBF8; } // 801BCB58
  c->r[3]=0u+0x803D0000u; // 801BCB5C
  c->r[0]=0u+0x00000002u; // 801BCB60
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BCB64
  c->r[3]=c->r[3]+0x00001F30u; // 801BCB68
  c->ctr=c->r[0]; // 801BCB6C
L_801BCB70:;
  c->r[0]=R8(c->r[3]+0x00000076u); // 801BCB70
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BCB74
  if (crb(c,2)) { goto L_801BCBF8; } // 801BCB78
  c->r[0]=R8(c->r[3]+0x000000FEu); // 801BCB7C
  c->r[30]=c->r[30]+0x00000001u; // 801BCB80
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BCB84
  if (crb(c,2)) { goto L_801BCBF8; } // 801BCB88
  c->r[0]=R8(c->r[3]+0x00000186u); // 801BCB8C
  c->r[30]=c->r[30]+0x00000001u; // 801BCB90
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BCB94
  if (crb(c,2)) { goto L_801BCBF8; } // 801BCB98
  c->r[0]=R8(c->r[3]+0x0000020Eu); // 801BCB9C
  c->r[30]=c->r[30]+0x00000001u; // 801BCBA0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BCBA4
  if (crb(c,2)) { goto L_801BCBF8; } // 801BCBA8
  c->r[0]=R8(c->r[3]+0x00000296u); // 801BCBAC
  c->r[30]=c->r[30]+0x00000001u; // 801BCBB0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BCBB4
  if (crb(c,2)) { goto L_801BCBF8; } // 801BCBB8
  c->r[0]=R8(c->r[3]+0x0000031Eu); // 801BCBBC
  c->r[30]=c->r[30]+0x00000001u; // 801BCBC0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BCBC4
  if (crb(c,2)) { goto L_801BCBF8; } // 801BCBC8
  c->r[0]=R8(c->r[3]+0x000003A6u); // 801BCBCC
  c->r[30]=c->r[30]+0x00000001u; // 801BCBD0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BCBD4
  if (crb(c,2)) { goto L_801BCBF8; } // 801BCBD8
  c->r[0]=R8(c->r[3]+0x0000042Eu); // 801BCBDC
  c->r[30]=c->r[30]+0x00000001u; // 801BCBE0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BCBE4
  if (crb(c,2)) { goto L_801BCBF8; } // 801BCBE8
  c->r[30]=c->r[30]+0x00000001u; // 801BCBEC
  c->r[3]=c->r[3]+0x00000440u; // 801BCBF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BCB70; } // 801BCBF4
L_801BCBF8:;
  cmps(c,0,(int32_t)c->r[30],16); // 801BCBF8
  if (crb(c,0)) { goto L_801BCC0C; } // 801BCBFC
  c->r[3]=c->r[27]|c->r[27]; // 801BCC00
  c->lr=0x801BCC08u; f_801C0294(c); // 801BCC04
  goto L_801BCE14; // 801BCC08
L_801BCC0C:;
  c->r[4]=R8(c->r[29]+0x00000021u); // 801BCC0C
  c->r[3]=c->r[27]|c->r[27]; // 801BCC10
  c->r[5]=c->r[29]+0x00000022u; // 801BCC14
  c->lr=0x801BCC1Cu; f_801C00B0(c); // 801BCC18
  goto L_801BCE14; // 801BCC1C
L_801BCC20:;
  c->r[3]=c->r[27]|c->r[27]; // 801BCC20
  c->lr=0x801BCC28u; f_801B522C(c); // 801BCC24
  cmps(c,0,(int32_t)c->r[3],0); // 801BCC28
  c->r[30]=c->r[3]|c->r[3]; // 801BCC2C
  if (!crb(c,2)) { goto L_801BCC40; } // 801BCC30
  c->r[3]=c->r[27]|c->r[27]; // 801BCC34
  c->lr=0x801BCC3Cu; f_801B5054(c); // 801BCC38
  c->r[30]=c->r[3]|c->r[3]; // 801BCC3C
L_801BCC40:;
  c->r[3]=0u+0x803D0000u; // 801BCC40
  c->r[4]=c->r[27]|c->r[27]; // 801BCC44
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BCC48
  c->r[5]=0u+0x00000006u; // 801BCC4C
  c->r[3]=c->r[3]+0x00001954u; // 801BCC50
  c->lr=0x801BCC58u; f_80004338(c); // 801BCC54
  cmps(c,0,(int32_t)c->r[30],0); // 801BCC58
  if (crb(c,2)) { goto L_801BCDD0; } // 801BCC5C
  c->r[3]=c->r[27]|c->r[27]; // 801BCC60
  c->r[4]=c->r[29]+0x000027B4u; // 801BCC64
  c->r[5]=0u+0x00000006u; // 801BCC68
  c->lr=0x801BCC70u; f_8018C170(c); // 801BCC6C
  cmps(c,0,(int32_t)c->r[3],0); // 801BCC70
  if (!crb(c,2)) { goto L_801BCC88; } // 801BCC74
  c->r[3]=c->r[30]+0x00000022u; // 801BCC78
  c->r[4]=c->r[29]+0x000027BAu; // 801BCC7C
  c->r[5]=0u+0x00000003u; // 801BCC80
  c->lr=0x801BCC88u; f_80004338(c); // 801BCC84
L_801BCC88:;
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BCC88
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BCC8C
  if (crb(c,2)) { goto L_801BCD30; } // 801BCC90
  c->r[3]=0u+0x803D0000u; // 801BCC94
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BCC98
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BCC9C
  cmpu(c,0,c->r[0],0x00000004u); // 801BCCA0
  if (crb(c,0)) { goto L_801BCCB8; } // 801BCCA4
  c->r[3]=0u+0x000D0000u; // 801BCCA8
  c->r[4]=c->r[31]+0x000007FCu; // 801BCCAC
  c->r[3]=c->r[3]+0x00000003u; // 801BCCB0
  c->lr=0x801BCCB8u; f_801ACB20(c); // 801BCCB4
L_801BCCB8:;
  c->r[4]=R8(c->r[29]+0x0000197Fu); // 801BCCB8
  c->r[3]=c->r[27]|c->r[27]; // 801BCCBC
  c->r[5]=c->r[29]+0x00001980u; // 801BCCC0
  c->lr=0x801BCCC8u; f_801C00B0(c); // 801BCCC4
  c->r[4]=0u+0x803D0000u; // 801BCCC8
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BCCCC
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801BCCD0
  cmps(c,0,(int32_t)c->r[0],0); // 801BCCD4
  if (crb(c,2)) { goto L_801BCDD4; } // 801BCCD8
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801BCCDC
  c->r[3]=0u+0x00000000u; // 801BCCE0
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801BCCE4
  cmpu(c,0,c->r[0],0x00000005u); // 801BCCE8
  if (crb(c,0)) { goto L_801BCD10; } // 801BCCEC
  c->r[5]=R8(c->r[4]+0x00001978u); // 801BCCF0
  c->r[3]=0u+0x000D0000u; // 801BCCF4
  c->r[3]=c->r[3]+0x00000004u; // 801BCCF8
  c->r[4]=c->r[31]+0x0000082Cu; // 801BCCFC
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 801BCD00
  c->r[0]=cntlz(c->r[0]); // 801BCD04
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BCD08
  c->lr=0x801BCD10u; f_801ACB38(c); // 801BCD0C
L_801BCD10:;
  c->r[3]=0u+0x803D0000u; // 801BCD10
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BCD14
  c->r[3]=R8(c->r[3]+0x00001978u); // 801BCD18
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801BCD1C
  c->r[0]=cntlz(c->r[0]); // 801BCD20
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801BCD24
  c->lr=0x801BCD2Cu; f_801C1608(c); // 801BCD28
  goto L_801BCDD4; // 801BCD2C
L_801BCD30:;
  c->r[0]=R8(c->r[29]+0x00001979u); // 801BCD30
  cmps(c,0,(int32_t)c->r[0],0); // 801BCD34
  if (!crb(c,2)) { goto L_801BCD70; } // 801BCD38
  c->r[0]=R32(c->r[29]+0x00001910u); // 801BCD3C
  cmps(c,0,(int32_t)c->r[0],0); // 801BCD40
  if (crb(c,2)) { goto L_801BCD70; } // 801BCD44
  c->r[0]=R8(c->r[30]+0x00000080u); // 801BCD48
  cmps(c,0,(int32_t)c->r[0],0); // 801BCD4C
  if (!crb(c,2)) { goto L_801BCD78; } // 801BCD50
  c->r[0]=R8(c->r[30]+0x00000023u); // 801BCD54
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 801BCD58
  cmps(c,0,(int32_t)c->r[0],5); // 801BCD5C
  if (!crb(c,2)) { goto L_801BCD78; } // 801BCD60
  c->r[0]=R8(c->r[30]+0x00000024u); // 801BCD64
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BCD68
  if (crb(c,2)) { goto L_801BCD78; } // 801BCD6C
L_801BCD70:;
  c->r[28]=0u+0x00000001u; // 801BCD70
  goto L_801BCDD4; // 801BCD74
L_801BCD78:;
  c->r[4]=c->r[27]|c->r[27]; // 801BCD78
  c->r[3]=c->r[29]+0x000027B4u; // 801BCD7C
  c->r[5]=0u+0x00000006u; // 801BCD80
  c->lr=0x801BCD88u; f_80004338(c); // 801BCD84
  c->r[3]=c->r[29]+0x000027BAu; // 801BCD88
  c->r[4]=c->r[30]+0x00000022u; // 801BCD8C
  c->r[5]=0u+0x00000003u; // 801BCD90
  c->lr=0x801BCD98u; f_80004338(c); // 801BCD94
  c->r[5]=0u+0x801C0000u; // 801BCD98
  c->r[3]=c->r[29]+0x0000193Cu; // 801BCD9C
  c->r[5]=c->r[5]+0xFFFFCA5Cu; // 801BCDA0
  c->r[4]=0u+0x00000016u; // 801BCDA4
  W32(c->r[29]+0x0000194Cu,c->r[5]); // 801BCDA8
  c->r[5]=0u+0x0000003Cu; // 801BCDAC
  c->lr=0x801BCDB4u; f_801AD0EC(c); // 801BCDB0
  c->r[12]=R32(c->r[29]+0x00001910u); // 801BCDB4
  c->r[3]=c->r[27]|c->r[27]; // 801BCDB8
  c->r[4]=c->r[30]+0x00000022u; // 801BCDBC
  c->r[5]=c->r[30]+0x00000035u; // 801BCDC0
  c->ctr=c->r[12]; // 801BCDC4
  if (true) { c->lr=0x801BCDCCu; dispatch(c,c->ctr); } // 801BCDC8
  goto L_801BCDD4; // 801BCDCC
L_801BCDD0:;
  c->r[28]=0u+0x00000001u; // 801BCDD0
L_801BCDD4:;
  cmps(c,0,(int32_t)c->r[28],0); // 801BCDD4
  if (crb(c,2)) { goto L_801BCE14; } // 801BCDD8
  c->r[3]=0u+0x803D0000u; // 801BCDDC
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BCDE0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BCDE4
  cmpu(c,0,c->r[0],0x00000002u); // 801BCDE8
  if (crb(c,0)) { goto L_801BCE0C; } // 801BCDEC
  c->r[3]=0u+0x000D0000u; // 801BCDF0
  c->r[5]=R8(c->r[29]+0x00001979u); // 801BCDF4
  c->r[6]=R32(c->r[29]+0x00001910u); // 801BCDF8
  c->r[7]=c->r[30]|c->r[30]; // 801BCDFC
  c->r[3]=c->r[3]+0x00000001u; // 801BCE00
  c->r[4]=c->r[31]+0x0000085Cu; // 801BCE04
  c->lr=0x801BCE0Cu; f_801ACB68(c); // 801BCE08
L_801BCE0C:;
  c->r[3]=c->r[27]|c->r[27]; // 801BCE0C
  c->lr=0x801BCE14u; f_801C0294(c); // 801BCE10
L_801BCE14:;
  c->r[11]=c->r[1]+0x00000020u; // 801BCE14
  c->lr=0x801BCE1Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BCE18
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BCE1C
  c->lr=c->r[0]; // 801BCE20
  c->r[1]=c->r[1]+0x00000020u; // 801BCE24
  return; // 801BCE28
}

// btm_sec_update_clock_offset
void f_801BCE2C(Ctx* __restrict c) {
  trace_call(0x801BCE2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCE2C
  c->r[0]=c->lr; // 801BCE30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BCE34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BCE38
  c->r[31]=c->r[4]|c->r[4]; // 801BCE3C
  c->lr=0x801BCE44u; f_801B5174(c); // 801BCE40
  cmps(c,0,(int32_t)c->r[3],0); // 801BCE44
  if (crb(c,2)) { goto L_801BCE68; } // 801BCE48
  c->r[31]=c->r[31]|0x00008000u; // 801BCE4C
  W16(c->r[3]+0x0000001Au,c->r[31]); // 801BCE50
  c->r[3]=c->r[3]+0x0000001Cu; // 801BCE54
  c->lr=0x801BCE5Cu; f_801B7938(c); // 801BCE58
  cmps(c,0,(int32_t)c->r[3],0); // 801BCE5C
  if (crb(c,2)) { goto L_801BCE68; } // 801BCE60
  W16(c->r[3]+0x00000000u,c->r[31]); // 801BCE64
L_801BCE68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BCE68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BCE6C
  c->lr=c->r[0]; // 801BCE70
  c->r[1]=c->r[1]+0x00000010u; // 801BCE74
  return; // 801BCE78
}

// btm_sec_execute_procedure
void f_801BCE7C(Ctx* __restrict c) {
  trace_call(0x801BCE7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCE7C
  c->r[0]=c->lr; // 801BCE80
  c->r[4]=0u+0x803D0000u; // 801BCE84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BCE88
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BCE8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BCE90
  c->r[31]=0u+0x80330000u; // 801BCE94
  c->r[31]=c->r[31]+0x00002F38u; // 801BCE98
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BCE9C
  c->r[30]=c->r[3]|c->r[3]; // 801BCEA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BCEA4
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801BCEA8
  cmpu(c,0,c->r[0],0x00000004u); // 801BCEAC
  if (crb(c,0)) { goto L_801BCED0; } // 801BCEB0
  c->r[3]=0u+0x000D0000u; // 801BCEB4
  c->r[5]=R8(c->r[30]+0x00000081u); // 801BCEB8
  c->r[6]=R8(c->r[30]+0x00000076u); // 801BCEBC
  c->r[3]=c->r[3]+0x00000003u; // 801BCEC0
  c->r[7]=R8(c->r[30]+0x0000007Fu); // 801BCEC4
  c->r[4]=c->r[31]+0x000008ACu; // 801BCEC8
  c->lr=0x801BCED0u; f_801ACB68(c); // 801BCECC
L_801BCED0:;
  c->r[0]=R8(c->r[30]+0x0000007Fu); // 801BCED0
  cmps(c,0,(int32_t)c->r[0],0); // 801BCED4
  if (crb(c,2)) { goto L_801BCEE4; } // 801BCED8
  c->r[3]=0u+0x00000001u; // 801BCEDC
  goto L_801BD240; // 801BCEE0
L_801BCEE4:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801BCEE4
  cmpu(c,1,c->r[0],0x0000FFFFu); // 801BCEE8
  if (!crb(c,6)) { goto L_801BCF4C; } // 801BCEEC
  c->r[3]=c->r[30]+0x0000001Cu; // 801BCEF0
  c->lr=0x801BCEF8u; f_801C96A4(c); // 801BCEF4
  cmps(c,0,(int32_t)c->r[3],0); // 801BCEF8
  if (!crb(c,2)) { goto L_801BCF28; } // 801BCEFC
  c->r[3]=0u+0x803D0000u; // 801BCF00
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801BCF04
  cmpu(c,0,c->r[0],0x00000002u); // 801BCF08
  if (crb(c,0)) { goto L_801BCF20; } // 801BCF0C
  c->r[3]=0u+0x00080000u; // 801BCF10
  c->r[4]=c->r[31]+0x000008ECu; // 801BCF14
  c->r[3]=c->r[3]+0x00000001u; // 801BCF18
  c->lr=0x801BCF20u; f_801ACB20(c); // 801BCF1C
L_801BCF20:;
  c->r[3]=0u+0x00000003u; // 801BCF20
  goto L_801BD240; // 801BCF24
L_801BCF28:;
  c->lr=0x801BCF2Cu; f_801CB208(c); // 801BCF28
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BCF2C
  if (!crb(c,2)) { goto L_801BCF3C; } // 801BCF30
  c->r[3]=0u+0x00000003u; // 801BCF34
  goto L_801BD240; // 801BCF38
L_801BCF3C:;
  c->r[0]=0u+0x00000001u; // 801BCF3C
  c->r[3]=0u+0x00000001u; // 801BCF40
  W8(c->r[30]+0x00000080u,c->r[0]); // 801BCF44
  goto L_801BD240; // 801BCF48
L_801BCF4C:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801BCF4C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801BCF50
  if (!crb(c,2)) { goto L_801BCFDC; } // 801BCF54
  if (crb(c,6)) { goto L_801BCFDC; } // 801BCF58
  c->r[3]=0u+0x803D0000u; // 801BCF5C
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BCF60
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BCF64
  cmpu(c,0,c->r[0],0x00000004u); // 801BCF68
  if (crb(c,0)) { goto L_801BCF80; } // 801BCF6C
  c->r[3]=0u+0x000D0000u; // 801BCF70
  c->r[4]=c->r[31]+0x00000910u; // 801BCF74
  c->r[3]=c->r[3]+0x00000003u; // 801BCF78
  c->lr=0x801BCF80u; f_801ACB20(c); // 801BCF7C
L_801BCF80:;
  c->r[29]=R8(c->r[30]+0x0000007Fu); // 801BCF80
  c->r[0]=0u+0x00000003u; // 801BCF84
  c->r[3]=c->r[30]+0x0000001Cu; // 801BCF88
  c->r[4]=0u+0x00000000u; // 801BCF8C
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801BCF90
  c->r[5]=0u+0x00000002u; // 801BCF94
  c->r[6]=0u+0x0000001Eu; // 801BCF98
  c->r[7]=0u+0x00000000u; // 801BCF9C
  c->lr=0x801BCFA4u; f_801B86B8(c); // 801BCFA0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801BCFA4
  cmpu(c,0,c->r[0],0x00000001u); // 801BCFA8
  if (crb(c,2)) { goto L_801BCFBC; } // 801BCFAC
  W8(c->r[30]+0x0000007Fu,c->r[29]); // 801BCFB0
  c->r[0]=0u+0x00000000u; // 801BCFB4
  goto L_801BCFC0; // 801BCFB8
L_801BCFBC:;
  c->r[0]=0u+0x00000001u; // 801BCFBC
L_801BCFC0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BCFC0
  if (crb(c,2)) { goto L_801BCFD0; } // 801BCFC4
  c->r[3]=0u+0x00000001u; // 801BCFC8
  goto L_801BD240; // 801BCFCC
L_801BCFD0:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801BCFD0
  c->r[0]=c->r[0]|0x00000008u; // 801BCFD4
  W8(c->r[30]+0x00000076u,c->r[0]); // 801BCFD8
L_801BCFDC:;
  c->r[4]=R8(c->r[30]+0x00000076u); // 801BCFDC
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801BCFE0
  if (!crb(c,2)) { goto L_801BD06C; } // 801BCFE4
  c->r[3]=R8(c->r[30]+0x00000080u); // 801BCFE8
  cmps(c,0,(int32_t)c->r[3],0); // 801BCFEC
  if (crb(c,2)) { goto L_801BD000; } // 801BCFF0
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BCFF4
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801BCFF8
  if (!crb(c,2)) { goto L_801BD014; } // 801BCFFC
L_801BD000:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BD000
  if (!crb(c,2)) { goto L_801BD06C; } // 801BD004
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BD008
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801BD00C
  if (crb(c,2)) { goto L_801BD06C; } // 801BD010
L_801BD014:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801BD014
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BD018
  if (crb(c,2)) { goto L_801BD06C; } // 801BD01C
  c->r[3]=0u+0x803D0000u; // 801BD020
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BD024
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BD028
  cmpu(c,0,c->r[0],0x00000004u); // 801BD02C
  if (crb(c,0)) { goto L_801BD044; } // 801BD030
  c->r[3]=0u+0x000D0000u; // 801BD034
  c->r[4]=c->r[31]+0x00000934u; // 801BD038
  c->r[3]=c->r[3]+0x00000003u; // 801BD03C
  c->lr=0x801BD044u; f_801ACB20(c); // 801BD040
L_801BD044:;
  c->r[0]=0u+0x00000001u; // 801BD044
  c->r[3]=R16(c->r[30]+0x00000018u); // 801BD048
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801BD04C
  c->lr=0x801BD054u; f_801C03C4(c); // 801BD050
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BD054
  if (!crb(c,2)) { goto L_801BD064; } // 801BD058
  c->r[3]=0u+0x00000003u; // 801BD05C
  goto L_801BD240; // 801BD060
L_801BD064:;
  c->r[3]=0u+0x00000001u; // 801BD064
  goto L_801BD240; // 801BD068
L_801BD06C:;
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 801BD06C
  if (!crb(c,2)) { goto L_801BD110; } // 801BD070
  c->r[3]=R8(c->r[30]+0x00000080u); // 801BD074
  cmps(c,0,(int32_t)c->r[3],0); // 801BD078
  if (crb(c,2)) { goto L_801BD08C; } // 801BD07C
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BD080
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801BD084
  if (!crb(c,2)) { goto L_801BD0A0; } // 801BD088
L_801BD08C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BD08C
  if (!crb(c,2)) { goto L_801BD110; } // 801BD090
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BD094
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801BD098
  if (crb(c,2)) { goto L_801BD110; } // 801BD09C
L_801BD0A0:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801BD0A0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BD0A4
  if (crb(c,2)) { goto L_801BD110; } // 801BD0A8
  c->r[3]=0u+0x803D0000u; // 801BD0AC
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BD0B0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BD0B4
  cmpu(c,0,c->r[0],0x00000004u); // 801BD0B8
  if (crb(c,0)) { goto L_801BD0D0; } // 801BD0BC
  c->r[3]=0u+0x000D0000u; // 801BD0C0
  c->r[4]=c->r[31]+0x0000095Cu; // 801BD0C4
  c->r[3]=c->r[3]+0x00000003u; // 801BD0C8
  c->lr=0x801BD0D0u; f_801ACB20(c); // 801BD0CC
L_801BD0D0:;
  c->r[3]=R16(c->r[30]+0x00000018u); // 801BD0D0
  c->r[4]=0u+0x00000001u; // 801BD0D4
  c->lr=0x801BD0DCu; f_801C0440(c); // 801BD0D8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BD0DC
  if (!crb(c,2)) { goto L_801BD0EC; } // 801BD0E0
  c->r[3]=0u+0x00000000u; // 801BD0E4
  goto L_801BD0F8; // 801BD0E8
L_801BD0EC:;
  c->r[0]=0u+0x00000002u; // 801BD0EC
  c->r[3]=0u+0x00000001u; // 801BD0F0
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801BD0F4
L_801BD0F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BD0F8
  if (!crb(c,2)) { goto L_801BD108; } // 801BD0FC
  c->r[3]=0u+0x00000003u; // 801BD100
  goto L_801BD240; // 801BD104
L_801BD108:;
  c->r[3]=0u+0x00000001u; // 801BD108
  goto L_801BD240; // 801BD10C
L_801BD110:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801BD110
  if (!crb(c,2)) { goto L_801BD1E0; } // 801BD114
  c->r[3]=R8(c->r[30]+0x00000080u); // 801BD118
  cmps(c,0,(int32_t)c->r[3],0); // 801BD11C
  if (crb(c,2)) { goto L_801BD130; } // 801BD120
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BD124
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801BD128
  if (!crb(c,2)) { goto L_801BD144; } // 801BD12C
L_801BD130:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BD130
  if (!crb(c,2)) { goto L_801BD1E0; } // 801BD134
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BD138
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801BD13C
  if (crb(c,2)) { goto L_801BD1E0; } // 801BD140
L_801BD144:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801BD144
  c->r[0]=c->r[3]+0x00010000u; // 801BD148
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BD14C
  if (crb(c,2)) { goto L_801BD15C; } // 801BD150
  c->r[0]=0u+0x00000000u; // 801BD154
  goto L_801BD178; // 801BD158
L_801BD15C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801BD15C
  c->r[0]=c->r[3]+0x00010000u; // 801BD160
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BD164
  if (crb(c,2)) { goto L_801BD174; } // 801BD168
  c->r[0]=0u+0x00000000u; // 801BD16C
  goto L_801BD178; // 801BD170
L_801BD174:;
  c->r[0]=0u+0x00000001u; // 801BD174
L_801BD178:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BD178
  if (!crb(c,2)) { goto L_801BD1E0; } // 801BD17C
  c->r[3]=R32(c->r[30]+0x00000000u); // 801BD180
  c->r[3]=R8(c->r[3]+0x0000000Fu); // 801BD184
  cmpu(c,0,c->r[3],0x0000002Eu); // 801BD188
  if (!crb(c,0)) { goto L_801BD1E0; } // 801BD18C
  c->r[0]=rotl(c->r[3],29)&0x0000001Cu; // 801BD190
  c->r[4]=rotl(c->r[3],0)&0x0000001Fu; // 801BD194
  c->r[3]=c->r[30]+c->r[0]; // 801BD198
  c->r[5]=0u+0x00000001u; // 801BD19C
  c->r[0]=R32(c->r[3]+0x00000010u); // 801BD1A0
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 801BD1A4
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801BD1A8
  if (!crb(c,2)) { goto L_801BD1E0; } // 801BD1AC
  c->r[3]=0u+0x803D0000u; // 801BD1B0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BD1B4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BD1B8
  cmpu(c,0,c->r[0],0x00000004u); // 801BD1BC
  if (crb(c,0)) { goto L_801BD1D4; } // 801BD1C0
  c->r[3]=0u+0x000D0000u; // 801BD1C4
  c->r[4]=c->r[31]+0x00000980u; // 801BD1C8
  c->r[3]=c->r[3]+0x00000003u; // 801BD1CC
  c->lr=0x801BD1D4u; f_801ACB20(c); // 801BD1D0
L_801BD1D4:;
  c->r[3]=c->r[30]|c->r[30]; // 801BD1D4
  c->lr=0x801BD1DCu; f_801BD25C(c); // 801BD1D8
  goto L_801BD240; // 801BD1DC
L_801BD1E0:;
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BD1E0
  c->r[3]=0u+0x803D0000u; // 801BD1E4
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BD1E8
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 801BD1EC
  W8(c->r[30]+0x00000081u,c->r[0]); // 801BD1F0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BD1F4
  cmpu(c,0,c->r[0],0x00000004u); // 801BD1F8
  if (crb(c,0)) { goto L_801BD218; } // 801BD1FC
  c->r[3]=0u+0x000D0000u; // 801BD200
  c->r[5]=R32(c->r[30]+0x00000014u); // 801BD204
  c->r[6]=R32(c->r[30]+0x00000010u); // 801BD208
  c->r[3]=c->r[3]+0x00000003u; // 801BD20C
  c->r[4]=c->r[31]+0x000009A8u; // 801BD210
  c->lr=0x801BD218u; f_801ACB50(c); // 801BD214
L_801BD218:;
  c->r[3]=0u+0x803D0000u; // 801BD218
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BD21C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BD220
  cmpu(c,0,c->r[0],0x00000004u); // 801BD224
  if (crb(c,0)) { goto L_801BD23C; } // 801BD228
  c->r[3]=0u+0x000D0000u; // 801BD22C
  c->r[4]=c->r[31]+0x000009D0u; // 801BD230
  c->r[3]=c->r[3]+0x00000003u; // 801BD234
  c->lr=0x801BD23Cu; f_801ACB20(c); // 801BD238
L_801BD23C:;
  c->r[3]=0u+0x00000000u; // 801BD23C
L_801BD240:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD240
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BD244
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BD248
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BD24C
  c->lr=c->r[0]; // 801BD250
  c->r[1]=c->r[1]+0x00000020u; // 801BD254
  return; // 801BD258
}

// btm_sec_start_authorization
void f_801BD25C(Ctx* __restrict c) {
  trace_call(0x801BD25Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD25C
  c->r[0]=c->lr; // 801BD260
  c->r[6]=0u+0x00000000u; // 801BD264
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BD268
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BD26C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BD270
  c->r[30]=c->r[3]|c->r[3]; // 801BD274
  c->r[0]=R8(c->r[3]+0x00000076u); // 801BD278
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801BD27C
  if (!crb(c,2)) { goto L_801BD290; } // 801BD280
  c->r[0]=R16(c->r[3]+0x00000018u); // 801BD284
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BD288
  if (!crb(c,2)) { goto L_801BD328; } // 801BD28C
L_801BD290:;
  c->r[4]=0u+0x803D0000u; // 801BD290
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BD294
  c->r[0]=R32(c->r[4]+0x0000190Cu); // 801BD298
  cmps(c,0,(int32_t)c->r[0],0); // 801BD29C
  if (!crb(c,2)) { goto L_801BD2AC; } // 801BD2A0
  c->r[3]=0u+0x00000004u; // 801BD2A4
  goto L_801BD360; // 801BD2A8
L_801BD2AC:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801BD2AC
  cmps(c,0,(int32_t)c->r[4],0); // 801BD2B0
  if (crb(c,2)) { goto L_801BD2D8; } // 801BD2B4
  c->r[0]=R8(c->r[3]+0x00000080u); // 801BD2B8
  cmps(c,0,(int32_t)c->r[0],0); // 801BD2BC
  if (crb(c,2)) { goto L_801BD2CC; } // 801BD2C0
  c->r[6]=c->r[4]+0x00000010u; // 801BD2C4
  goto L_801BD2D0; // 801BD2C8
L_801BD2CC:;
  c->r[6]=c->r[4]+0x00000026u; // 801BD2CC
L_801BD2D0:;
  c->r[7]=R8(c->r[4]+0x0000000Fu); // 801BD2D0
  goto L_801BD2DC; // 801BD2D4
L_801BD2D8:;
  c->r[7]=0u+0x00000000u; // 801BD2D8
L_801BD2DC:;
  c->r[0]=0u+0x00000004u; // 801BD2DC
  c->r[4]=0u+0x803D0000u; // 801BD2E0
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801BD2E4
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BD2E8
  c->r[5]=c->r[3]+0x00000035u; // 801BD2EC
  c->r[8]=R8(c->r[3]+0x00000080u); // 801BD2F0
  c->r[12]=R32(c->r[4]+0x0000190Cu); // 801BD2F4
  c->r[4]=c->r[3]+0x00000022u; // 801BD2F8
  c->ctr=c->r[12]; // 801BD2FC
  c->r[3]=c->r[3]+0x0000001Cu; // 801BD300
  if (true) { c->lr=0x801BD308u; dispatch(c,c->ctr); } // 801BD304
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BD308
  if (!crb(c,2)) { goto L_801BD360; } // 801BD30C
  c->r[4]=R8(c->r[30]+0x00000076u); // 801BD310
  c->r[0]=0u+0x00000000u; // 801BD314
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801BD318
  c->r[0]=c->r[4]|0x00000001u; // 801BD31C
  W8(c->r[30]+0x00000076u,c->r[0]); // 801BD320
  goto L_801BD360; // 801BD324
L_801BD328:;
  c->r[31]=R8(c->r[3]+0x0000007Fu); // 801BD328
  c->r[0]=0u+0x00000003u; // 801BD32C
  c->r[4]=0u+0x00000000u; // 801BD330
  c->r[5]=0u+0x00000002u; // 801BD334
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801BD338
  c->r[6]=0u+0x0000001Eu; // 801BD33C
  c->r[7]=0u+0x00000000u; // 801BD340
  c->r[3]=c->r[3]+0x0000001Cu; // 801BD344
  c->lr=0x801BD34Cu; f_801B86B8(c); // 801BD348
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801BD34C
  cmpu(c,0,c->r[0],0x00000001u); // 801BD350
  if (crb(c,2)) { goto L_801BD35C; } // 801BD354
  W8(c->r[30]+0x0000007Fu,c->r[31]); // 801BD358
L_801BD35C:;
  c->r[3]=0u+0x00000001u; // 801BD35C
L_801BD360:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BD360
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BD364
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BD368
  c->lr=c->r[0]; // 801BD36C
  c->r[1]=c->r[1]+0x00000010u; // 801BD370
  return; // 801BD374
}

// btm_sec_collision_timeout
void f_801BD378(Ctx* __restrict c) {
  trace_call(0x801BD378u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD378
  c->r[0]=c->lr; // 801BD37C
  c->r[3]=0u+0x803D0000u; // 801BD380
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BD384
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BD388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BD38C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BD390
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BD394
  cmpu(c,0,c->r[0],0x00000004u); // 801BD398
  if (crb(c,0)) { goto L_801BD3B4; } // 801BD39C
  c->r[3]=0u+0x000D0000u; // 801BD3A0
  c->r[4]=0u+0x80330000u; // 801BD3A4
  c->r[3]=c->r[3]+0x00000003u; // 801BD3A8
  c->r[4]=c->r[4]+0x0000392Cu; // 801BD3AC
  c->lr=0x801BD3B4u; f_801ACB20(c); // 801BD3B0
L_801BD3B4:;
  c->r[31]=0u+0x803D0000u; // 801BD3B4
  c->r[30]=0u+0x00000000u; // 801BD3B8
  c->r[31]=c->r[31]+0xFFFF8118u; // 801BD3BC
  W32(c->r[31]+0x0000196Cu,c->r[30]); // 801BD3C0
  c->r[3]=R32(c->r[31]+0x00001938u); // 801BD3C4
  c->lr=0x801BD3CCu; f_801BCE7C(c); // 801BD3C8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801BD3CC
  cmpu(c,0,c->r[0],0x00000001u); // 801BD3D0
  if (crb(c,2)) { goto L_801BD440; } // 801BD3D4
  c->r[4]=R32(c->r[31]+0x00001938u); // 801BD3D8
  c->r[0]=R32(c->r[4]+0x00000004u); // 801BD3DC
  cmps(c,0,(int32_t)c->r[0],0); // 801BD3E0
  if (crb(c,2)) { goto L_801BD440; } // 801BD3E4
  c->r[0]=R8(c->r[4]+0x00000080u); // 801BD3E8
  cmps(c,0,(int32_t)c->r[0],0); // 801BD3EC
  if (crb(c,2)) { goto L_801BD410; } // 801BD3F0
  c->r[4]=R32(c->r[4]+0x00000000u); // 801BD3F4
  cmps(c,0,(int32_t)c->r[4],0); // 801BD3F8
  if (crb(c,2)) { goto L_801BD410; } // 801BD3FC
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BD400
  cmpu(c,0,c->r[0],0x00000003u); // 801BD404
  if (!crb(c,2)) { goto L_801BD410; } // 801BD408
  W32(c->r[4]+0x00000004u,c->r[30]); // 801BD40C
L_801BD410:;
  c->r[31]=0u+0x803D0000u; // 801BD410
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801BD414
  c->r[31]=c->r[31]+0xFFFF8118u; // 801BD418
  c->r[4]=R32(c->r[31]+0x00001938u); // 801BD41C
  c->r[12]=R32(c->r[4]+0x00000004u); // 801BD420
  c->r[3]=c->r[4]+0x0000001Cu; // 801BD424
  c->r[4]=R32(c->r[4]+0x00000008u); // 801BD428
  c->ctr=c->r[12]; // 801BD42C
  if (true) { c->lr=0x801BD434u; dispatch(c,c->ctr); } // 801BD430
  c->r[3]=R32(c->r[31]+0x00001938u); // 801BD434
  c->r[0]=0u+0x00000000u; // 801BD438
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BD43C
L_801BD440:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BD440
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BD444
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BD448
  c->lr=c->r[0]; // 801BD44C
  c->r[1]=c->r[1]+0x00000010u; // 801BD450
  return; // 801BD454
}

// btm_read_trusted_mask
void f_801BD458(Ctx* __restrict c) {
  trace_call(0x801BD458u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD458
  c->r[0]=c->lr; // 801BD45C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BD460
  c->lr=0x801BD468u; f_801B522C(c); // 801BD464
  cmps(c,0,(int32_t)c->r[3],0); // 801BD468
  if (crb(c,2)) { goto L_801BD478; } // 801BD46C
  c->r[3]=c->r[3]+0x00000010u; // 801BD470
  goto L_801BD47C; // 801BD474
L_801BD478:;
  c->r[3]=0u+0x00000000u; // 801BD478
L_801BD47C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BD47C
  c->lr=c->r[0]; // 801BD480
  c->r[1]=c->r[1]+0x00000010u; // 801BD484
  return; // 801BD488
}

// btu_hcif_process_event
void f_801BD48C(Ctx* __restrict c) {
  trace_call(0x801BD48Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD48C
  c->r[0]=c->lr; // 801BD490
  c->r[4]=0u+0x803D0000u; // 801BD494
  W32(c->r[1]+0x00000044u,c->r[0]); // 801BD498
  c->r[4]=c->r[4]+0xFFFF8118u; // 801BD49C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801BD4A0
  W32(c->r[1]+0x00000038u,c->r[30]); // 801BD4A4
  W32(c->r[1]+0x00000034u,c->r[29]); // 801BD4A8
  W32(c->r[1]+0x00000030u,c->r[28]); // 801BD4AC
  c->r[5]=R16(c->r[3]+0x00000004u); // 801BD4B0
  c->r[0]=R8(c->r[4]+0x0000064Eu); // 801BD4B4
  c->r[7]=c->r[3]+c->r[5]; // 801BD4B8
  cmps(c,0,(int32_t)c->r[0],0); // 801BD4BC
  c->r[3]=R8(c->r[7]+0x00000008u); // 801BD4C0
  c->r[4]=R8(c->r[7]+0x00000009u); // 801BD4C4
  if (!crb(c,2)) { goto L_801BD4DC; } // 801BD4C8
  cmpu(c,0,c->r[3],0x0000000Eu); // 801BD4CC
  if (crb(c,2)) { goto L_801BD4DC; } // 801BD4D0
  cmpu(c,0,c->r[3],0x0000000Fu); // 801BD4D4
  if (!crb(c,2)) { goto L_801BDA24; } // 801BD4D8
L_801BD4DC:;
  cmps(c,0,(int32_t)c->r[3],20); // 801BD4DC
  if (crb(c,2)) { goto L_801BD840; } // 801BD4E0
  if (!crb(c,0)) { goto L_801BD578; } // 801BD4E4
  cmps(c,0,(int32_t)c->r[3],10); // 801BD4E8
  if (crb(c,2)) { goto L_801BD74C; } // 801BD4EC
  if (!crb(c,0)) { goto L_801BD53C; } // 801BD4F0
  cmps(c,0,(int32_t)c->r[3],5); // 801BD4F4
  if (crb(c,2)) { goto L_801BD640; } // 801BD4F8
  if (!crb(c,0)) { goto L_801BD524; } // 801BD4FC
  cmps(c,0,(int32_t)c->r[3],2); // 801BD500
  if (crb(c,2)) { goto L_801BD608; } // 801BD504
  if (!crb(c,0)) { goto L_801BD518; } // 801BD508
  cmps(c,0,(int32_t)c->r[3],1); // 801BD50C
  if (!crb(c,0)) { goto L_801BD5FC; } // 801BD510
  goto L_801BDA24; // 801BD514
L_801BD518:;
  cmps(c,0,(int32_t)c->r[3],4); // 801BD518
  if (!crb(c,0)) { goto L_801BD634; } // 801BD51C
  goto L_801BD628; // 801BD520
L_801BD524:;
  cmps(c,0,(int32_t)c->r[3],8); // 801BD524
  if (crb(c,2)) { goto L_801BD70C; } // 801BD528
  if (!crb(c,0)) { goto L_801BDA24; } // 801BD52C
  cmps(c,0,(int32_t)c->r[3],7); // 801BD530
  if (!crb(c,0)) { goto L_801BD6A8; } // 801BD534
  goto L_801BD688; // 801BD538
L_801BD53C:;
  cmps(c,0,(int32_t)c->r[3],15); // 801BD53C
  if (crb(c,2)) { goto L_801BD7A0; } // 801BD540
  if (!crb(c,0)) { goto L_801BD560; } // 801BD544
  cmps(c,0,(int32_t)c->r[3],13); // 801BD548
  if (crb(c,2)) { goto L_801BD788; } // 801BD54C
  if (!crb(c,0)) { goto L_801BD794; } // 801BD550
  cmps(c,0,(int32_t)c->r[3],12); // 801BD554
  if (!crb(c,0)) { goto L_801BD77C; } // 801BD558
  goto L_801BD770; // 801BD55C
L_801BD560:;
  cmps(c,0,(int32_t)c->r[3],18); // 801BD560
  if (crb(c,2)) { goto L_801BD7D4; } // 801BD564
  if (!crb(c,0)) { goto L_801BD834; } // 801BD568
  cmps(c,0,(int32_t)c->r[3],17); // 801BD56C
  if (!crb(c,0)) { goto L_801BDA24; } // 801BD570
  goto L_801BD7AC; // 801BD574
L_801BD578:;
  cmps(c,0,(int32_t)c->r[3],33); // 801BD578
  if (crb(c,2)) { goto L_801BDA24; } // 801BD57C
  if (!crb(c,0)) { goto L_801BD5C0; } // 801BD580
  cmps(c,0,(int32_t)c->r[3],28); // 801BD584
  if (crb(c,2)) { goto L_801BD954; } // 801BD588
  if (!crb(c,0)) { goto L_801BD5B4; } // 801BD58C
  cmps(c,0,(int32_t)c->r[3],23); // 801BD590
  if (crb(c,2)) { goto L_801BD90C; } // 801BD594
  if (!crb(c,0)) { goto L_801BD5A8; } // 801BD598
  cmps(c,0,(int32_t)c->r[3],22); // 801BD59C
  if (!crb(c,0)) { goto L_801BD8C8; } // 801BD5A0
  goto L_801BD8A8; // 801BD5A4
L_801BD5A8:;
  cmps(c,0,(int32_t)c->r[3],25); // 801BD5A8
  if (!crb(c,0)) { goto L_801BDA24; } // 801BD5AC
  goto L_801BD948; // 801BD5B0
L_801BD5B4:;
  cmps(c,0,(int32_t)c->r[3],30); // 801BD5B4
  if (crb(c,2)) { goto L_801BD9A4; } // 801BD5B8
  goto L_801BDA24; // 801BD5BC
L_801BD5C0:;
  cmps(c,0,(int32_t)c->r[3],239); // 801BD5C0
  if (crb(c,2)) { goto L_801BDA1C; } // 801BD5C4
  if (!crb(c,0)) { goto L_801BD5F0; } // 801BD5C8
  cmps(c,0,(int32_t)c->r[3],44); // 801BD5CC
  if (crb(c,2)) { goto L_801BD9C0; } // 801BD5D0
  if (!crb(c,0)) { goto L_801BD5E4; } // 801BD5D4
  cmps(c,0,(int32_t)c->r[3],35); // 801BD5D8
  if (!crb(c,0)) { goto L_801BDA24; } // 801BD5DC
  goto L_801BD618; // 801BD5E0
L_801BD5E4:;
  cmps(c,0,(int32_t)c->r[3],46); // 801BD5E4
  if (!crb(c,0)) { goto L_801BDA24; } // 801BD5E8
  goto L_801BD9CC; // 801BD5EC
L_801BD5F0:;
  cmps(c,0,(int32_t)c->r[3],255); // 801BD5F0
  if (crb(c,2)) { goto L_801BDA1C; } // 801BD5F4
  goto L_801BDA24; // 801BD5F8
L_801BD5FC:;
  c->r[3]=R8(c->r[7]+0x0000000Au); // 801BD5FC
  c->lr=0x801BD604u; f_801B85B4(c); // 801BD600
  goto L_801BDA24; // 801BD604
L_801BD608:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BD608
  c->r[4]=0u+0x00000000u; // 801BD60C
  c->lr=0x801BD614u; f_801B833C(c); // 801BD610
  goto L_801BDA24; // 801BD614
L_801BD618:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BD618
  c->r[4]=0u+0x00000001u; // 801BD61C
  c->lr=0x801BD624u; f_801B833C(c); // 801BD620
  goto L_801BDA24; // 801BD624
L_801BD628:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BD628
  c->lr=0x801BD630u; f_801BDBD0(c); // 801BD62C
  goto L_801BDA24; // 801BD630
L_801BD634:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BD634
  c->lr=0x801BD63Cu; f_801BDCAC(c); // 801BD638
  goto L_801BDA24; // 801BD63C
L_801BD640:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BD640
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801BD644
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BD648
  c->r[31]=R8(c->r[7]+0x0000000Du); // 801BD64C
  c->r[0]=c->r[3]+c->r[0]; // 801BD650
  c->r[28]=rotl(c->r[0],0)&0x00000FFFu; // 801BD654
  c->r[4]=c->r[31]|c->r[31]; // 801BD658
  c->r[3]=c->r[28]|c->r[28]; // 801BD65C
  c->lr=0x801BD664u; f_801C7928(c); // 801BD660
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BD664
  if (!crb(c,2)) { goto L_801BD678; } // 801BD668
  c->r[3]=c->r[28]|c->r[28]; // 801BD66C
  c->r[4]=c->r[31]|c->r[31]; // 801BD670
  c->lr=0x801BD678u; f_801B9EF8(c); // 801BD674
L_801BD678:;
  c->r[3]=c->r[28]|c->r[28]; // 801BD678
  c->r[4]=c->r[31]|c->r[31]; // 801BD67C
  c->lr=0x801BD684u; f_801BC644(c); // 801BD680
  goto L_801BDA24; // 801BD684
L_801BD688:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BD688
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801BD68C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BD690
  c->r[4]=R8(c->r[7]+0x0000000Au); // 801BD694
  c->r[0]=c->r[3]+c->r[0]; // 801BD698
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801BD69C
  c->lr=0x801BD6A4u; f_801BBB4C(c); // 801BD6A0
  goto L_801BDA24; // 801BD6A4
L_801BD6A8:;
  c->r[30]=R8(c->r[7]+0x0000000Au); // 801BD6A8
  c->r[0]=c->r[4]+0xFFFFFFF9u; // 801BD6AC
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801BD6B0
  c->r[31]=c->r[7]+0x00000011u; // 801BD6B4
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801BD6B8
  c->r[6]=c->r[30]|c->r[30]; // 801BD6BC
  W8(c->r[1]+0x00000025u,c->r[3]); // 801BD6C0
  c->r[4]=c->r[31]|c->r[31]; // 801BD6C4
  c->r[3]=c->r[1]+0x00000020u; // 801BD6C8
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BD6CC
  W8(c->r[1]+0x00000024u,c->r[0]); // 801BD6D0
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801BD6D4
  W8(c->r[1]+0x00000023u,c->r[0]); // 801BD6D8
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801BD6DC
  W8(c->r[1]+0x00000022u,c->r[0]); // 801BD6E0
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801BD6E4
  W8(c->r[1]+0x00000021u,c->r[0]); // 801BD6E8
  c->r[0]=R8(c->r[7]+0x00000010u); // 801BD6EC
  W8(c->r[1]+0x00000020u,c->r[0]); // 801BD6F0
  c->lr=0x801BD6F8u; f_801B8808(c); // 801BD6F4
  c->r[4]=c->r[31]|c->r[31]; // 801BD6F8
  c->r[5]=c->r[30]|c->r[30]; // 801BD6FC
  c->r[3]=c->r[1]+0x00000020u; // 801BD700
  c->lr=0x801BD708u; f_801BB864(c); // 801BD704
  goto L_801BDA24; // 801BD708
L_801BD70C:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BD70C
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801BD710
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BD714
  c->r[29]=R8(c->r[7]+0x0000000Au); // 801BD718
  c->r[0]=c->r[3]+c->r[0]; // 801BD71C
  c->r[30]=R8(c->r[7]+0x0000000Du); // 801BD720
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801BD724
  c->r[4]=c->r[29]|c->r[29]; // 801BD728
  c->r[3]=c->r[31]|c->r[31]; // 801BD72C
  c->r[5]=c->r[30]|c->r[30]; // 801BD730
  c->lr=0x801BD738u; f_801B3734(c); // 801BD734
  c->r[3]=c->r[31]|c->r[31]; // 801BD738
  c->r[4]=c->r[29]|c->r[29]; // 801BD73C
  c->r[5]=c->r[30]|c->r[30]; // 801BD740
  c->lr=0x801BD748u; f_801BBF8C(c); // 801BD744
  goto L_801BDA24; // 801BD748
L_801BD74C:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BD74C
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801BD750
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BD754
  c->r[4]=R8(c->r[7]+0x0000000Au); // 801BD758
  c->r[0]=c->r[3]+c->r[0]; // 801BD75C
  c->r[5]=R8(c->r[7]+0x0000000Du); // 801BD760
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801BD764
  c->lr=0x801BD76Cu; f_801BBE90(c); // 801BD768
  goto L_801BDA24; // 801BD76C
L_801BD770:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BD770
  c->lr=0x801BD778u; f_801B3C34(c); // 801BD774
  goto L_801BDA24; // 801BD778
L_801BD77C:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BD77C
  c->lr=0x801BD784u; f_801B3BA8(c); // 801BD780
  goto L_801BDA24; // 801BD784
L_801BD788:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BD788
  c->lr=0x801BD790u; f_801BDD38(c); // 801BD78C
  goto L_801BDA24; // 801BD790
L_801BD794:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BD794
  c->lr=0x801BD79Cu; f_801BE070(c); // 801BD798
  goto L_801BDA24; // 801BD79C
L_801BD7A0:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BD7A0
  c->lr=0x801BD7A8u; f_801BE388(c); // 801BD7A4
  goto L_801BDA24; // 801BD7A8
L_801BD7AC:;
  c->r[4]=0u+0x80330000u; // 801BD7AC
  c->r[3]=0u+0x00070000u; // 801BD7B0
  c->r[4]=c->r[4]+0x00003948u; // 801BD7B4
  c->lr=0x801BD7BCu; f_801ACB20(c); // 801BD7B8
  c->lr=0x801BD7C0u; f_801B56E0(c); // 801BD7BC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BD7C0
  if (crb(c,2)) { goto L_801BDA24; } // 801BD7C4
  c->r[3]=0u+0x00000000u; // 801BD7C8
  c->lr=0x801BD7D0u; f_801B559C(c); // 801BD7CC
  goto L_801BDA24; // 801BD7D0
L_801BD7D4:;
  c->r[29]=R8(c->r[7]+0x0000000Au); // 801BD7D4
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801BD7D8
  cmps(c,0,(int32_t)c->r[29],0); // 801BD7DC
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801BD7E0
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BD7E4
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801BD7E8
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801BD7EC
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801BD7F0
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801BD7F4
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801BD7F8
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801BD7FC
  W8(c->r[1]+0x00000019u,c->r[0]); // 801BD800
  c->r[0]=R8(c->r[7]+0x00000010u); // 801BD804
  W8(c->r[1]+0x00000018u,c->r[0]); // 801BD808
  c->r[31]=R8(c->r[7]+0x00000011u); // 801BD80C
  if (!crb(c,2)) { goto L_801BD820; } // 801BD810
  c->r[4]=c->r[31]|c->r[31]; // 801BD814
  c->r[3]=c->r[1]+0x00000018u; // 801BD818
  c->lr=0x801BD820u; f_801C8468(c); // 801BD81C
L_801BD820:;
  c->r[3]=c->r[29]|c->r[29]; // 801BD820
  c->r[5]=c->r[31]|c->r[31]; // 801BD824
  c->r[4]=c->r[1]+0x00000018u; // 801BD828
  c->lr=0x801BD830u; f_801B40EC(c); // 801BD82C
  goto L_801BDA24; // 801BD830
L_801BD834:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BD834
  c->lr=0x801BD83Cu; f_801C8134(c); // 801BD838
  goto L_801BDA24; // 801BD83C
L_801BD840:;
  c->r[3]=R8(c->r[7]+0x0000000Cu); // 801BD840
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801BD844
  c->r[4]=rotl(c->r[3],8)&0xFFFFFF00u; // 801BD848
  c->r[5]=R8(c->r[7]+0x0000000Bu); // 801BD84C
  c->r[3]=R8(c->r[7]+0x0000000Eu); // 801BD850
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BD854
  c->r[4]=c->r[5]+c->r[4]; // 801BD858
  c->r[30]=R8(c->r[7]+0x0000000Du); // 801BD85C
  c->r[31]=rotl(c->r[4],0)&0x0000FFFFu; // 801BD860
  c->r[0]=c->r[3]+c->r[0]; // 801BD864
  c->r[28]=R8(c->r[7]+0x0000000Au); // 801BD868
  c->r[4]=c->r[31]|c->r[31]; // 801BD86C
  c->r[5]=c->r[30]|c->r[30]; // 801BD870
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 801BD874
  c->r[3]=c->r[28]|c->r[28]; // 801BD878
  c->lr=0x801BD880u; f_801B98B0(c); // 801BD87C
  c->r[3]=c->r[28]|c->r[28]; // 801BD880
  c->r[4]=c->r[31]|c->r[31]; // 801BD884
  c->r[5]=c->r[30]|c->r[30]; // 801BD888
  c->r[6]=c->r[29]|c->r[29]; // 801BD88C
  c->lr=0x801BD894u; f_801B9468(c); // 801BD890
  c->r[3]=c->r[28]|c->r[28]; // 801BD894
  c->r[4]=c->r[30]|c->r[30]; // 801BD898
  c->r[5]=c->r[29]|c->r[29]; // 801BD89C
  c->lr=0x801BD8A4u; f_801C24DC(c); // 801BD8A0
  goto L_801BDA24; // 801BD8A4
L_801BD8A8:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801BD8A8
  cmps(c,0,(int32_t)c->r[0],0); // 801BD8AC
  if (crb(c,2)) { goto L_801BDA24; } // 801BD8B0
  c->r[0]=0u+0x00000001u; // 801BD8B4
  c->r[3]=c->r[7]+0x00000009u; // 801BD8B8
  W8(c->r[7]+0x00000009u,c->r[0]); // 801BD8BC
  c->lr=0x801BD8C4u; f_801B6C28(c); // 801BD8C0
  goto L_801BDA24; // 801BD8C4
L_801BD8C8:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801BD8C8
  c->r[3]=c->r[1]+0x00000010u; // 801BD8CC
  W8(c->r[1]+0x00000015u,c->r[0]); // 801BD8D0
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801BD8D4
  W8(c->r[1]+0x00000014u,c->r[0]); // 801BD8D8
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BD8DC
  W8(c->r[1]+0x00000013u,c->r[0]); // 801BD8E0
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801BD8E4
  W8(c->r[1]+0x00000012u,c->r[0]); // 801BD8E8
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801BD8EC
  W8(c->r[1]+0x00000011u,c->r[0]); // 801BD8F0
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801BD8F4
  W8(c->r[1]+0x00000010u,c->r[0]); // 801BD8F8
  c->lr=0x801BD900u; f_801C8630(c); // 801BD8FC
  c->r[3]=c->r[1]+0x00000010u; // 801BD900
  c->lr=0x801BD908u; f_801BCAD0(c); // 801BD904
  goto L_801BDA24; // 801BD908
L_801BD90C:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801BD90C
  c->r[3]=c->r[1]+0x00000008u; // 801BD910
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801BD914
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801BD918
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801BD91C
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BD920
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801BD924
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801BD928
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801BD92C
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801BD930
  W8(c->r[1]+0x00000009u,c->r[0]); // 801BD934
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801BD938
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BD93C
  c->lr=0x801BD944u; f_801BC92C(c); // 801BD940
  goto L_801BDA24; // 801BD944
L_801BD948:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BD948
  c->lr=0x801BD950u; f_801BE608(c); // 801BD94C
  goto L_801BDA24; // 801BD950
L_801BD954:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801BD954
  cmps(c,0,(int32_t)c->r[0],0); // 801BD958
  if (!crb(c,2)) { goto L_801BDA24; } // 801BD95C
  c->r[3]=R8(c->r[7]+0x0000000Cu); // 801BD960
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801BD964
  c->r[4]=rotl(c->r[3],8)&0xFFFFFF00u; // 801BD968
  c->r[5]=R8(c->r[7]+0x0000000Bu); // 801BD96C
  c->r[3]=R8(c->r[7]+0x0000000Du); // 801BD970
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BD974
  c->r[4]=c->r[5]+c->r[4]; // 801BD978
  c->r[0]=c->r[3]+c->r[0]; // 801BD97C
  c->r[29]=rotl(c->r[4],0)&0x00000FFFu; // 801BD980
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801BD984
  c->r[3]=c->r[29]|c->r[29]; // 801BD988
  c->r[4]=c->r[28]|c->r[28]; // 801BD98C
  c->lr=0x801BD994u; f_801B4050(c); // 801BD990
  c->r[3]=c->r[29]|c->r[29]; // 801BD994
  c->r[4]=c->r[28]|c->r[28]; // 801BD998
  c->lr=0x801BD9A0u; f_801BCE2C(c); // 801BD99C
  goto L_801BDA24; // 801BD9A0
L_801BD9A4:;
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801BD9A4
  c->r[3]=R8(c->r[7]+0x0000000Au); // 801BD9A8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BD9AC
  c->r[0]=c->r[3]+c->r[0]; // 801BD9B0
  c->r[3]=rotl(c->r[0],0)&0x00000FFFu; // 801BD9B4
  c->lr=0x801BD9BCu; f_801C79E4(c); // 801BD9B8
  goto L_801BDA24; // 801BD9BC
L_801BD9C0:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BD9C0
  c->lr=0x801BD9C8u; f_801BDE38(c); // 801BD9C4
  goto L_801BDA24; // 801BD9C8
L_801BD9CC:;
  c->r[4]=R8(c->r[7]+0x0000000Cu); // 801BD9CC
  c->r[3]=R8(c->r[7]+0x00000010u); // 801BD9D0
  c->r[0]=R8(c->r[7]+0x00000012u); // 801BD9D4
  c->r[6]=rotl(c->r[4],8)&0xFFFFFF00u; // 801BD9D8
  c->r[8]=R8(c->r[7]+0x0000000Bu); // 801BD9DC
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801BD9E0
  c->r[5]=R8(c->r[7]+0x0000000Fu); // 801BD9E4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BD9E8
  c->r[9]=c->r[8]+c->r[6]; // 801BD9EC
  c->r[4]=R8(c->r[7]+0x00000011u); // 801BD9F0
  c->r[8]=c->r[5]+c->r[3]; // 801BD9F4
  c->r[3]=R8(c->r[7]+0x0000000Au); // 801BD9F8
  c->r[0]=c->r[4]+c->r[0]; // 801BD9FC
  c->r[5]=R8(c->r[7]+0x0000000Du); // 801BDA00
  c->r[6]=R8(c->r[7]+0x0000000Eu); // 801BDA04
  c->r[7]=rotl(c->r[8],0)&0x0000FFFFu; // 801BDA08
  c->r[4]=rotl(c->r[9],0)&0x0000FFFFu; // 801BDA0C
  c->r[8]=rotl(c->r[0],0)&0x0000FFFFu; // 801BDA10
  c->lr=0x801BDA18u; f_801BA26C(c); // 801BDA14
  goto L_801BDA24; // 801BDA18
L_801BDA1C:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BDA1C
  c->lr=0x801BDA24u; f_801B6738(c); // 801BDA20
L_801BDA24:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801BDA24
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801BDA28
  c->r[30]=R32(c->r[1]+0x00000038u); // 801BDA2C
  c->r[29]=R32(c->r[1]+0x00000034u); // 801BDA30
  c->r[28]=R32(c->r[1]+0x00000030u); // 801BDA34
  c->lr=c->r[0]; // 801BDA38
  c->r[1]=c->r[1]+0x00000040u; // 801BDA3C
  return; // 801BDA40
}

// btu_hcif_send_cmd
void f_801BDA44(Ctx* __restrict c) {
  trace_call(0x801BDA44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDA44
  c->r[0]=c->lr; // 801BDA48
  cmps(c,0,(int32_t)c->r[3],0); // 801BDA4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BDA50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BDA54
  c->r[31]=c->r[3]|c->r[3]; // 801BDA58
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BDA5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BDA60
  if (crb(c,2)) { goto L_801BDA8C; } // 801BDA64
  c->r[3]=0u+0x803C0000u; // 801BDA68
  c->r[3]=c->r[3]+0x00007BF0u; // 801BDA6C
  c->r[0]=R16(c->r[3]+0x0000006Cu); // 801BDA70
  cmps(c,0,(int32_t)c->r[0],0); // 801BDA74
  if (crb(c,2)) { goto L_801BDA8C; } // 801BDA78
  c->r[4]=c->r[31]|c->r[31]; // 801BDA7C
  c->r[3]=c->r[3]+0x00000064u; // 801BDA80
  c->lr=0x801BDA88u; f_801AA648(c); // 801BDA84
  c->r[31]=0u+0x00000000u; // 801BDA88
L_801BDA8C:;
  c->r[4]=0u+0x803C0000u; // 801BDA8C
  c->r[4]=c->r[4]+0x00007BF0u; // 801BDA90
  c->r[0]=R16(c->r[4]+0x00000080u); // 801BDA94
  cmps(c,0,(int32_t)c->r[0],0); // 801BDA98
  if (!crb(c,2)) { goto L_801BDAC0; } // 801BDA9C
  c->r[3]=0u+0x803D0000u; // 801BDAA0
  c->r[3]=c->r[3]+0xFFFF8118u; // 801BDAA4
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801BDAA8
  cmps(c,0,(int32_t)c->r[0],0); // 801BDAAC
  if (!crb(c,2)) { goto L_801BDAC0; } // 801BDAB0
  c->r[3]=R16(c->r[4]+0x0000006Cu); // 801BDAB4
  c->r[0]=c->r[3]+0x00000001u; // 801BDAB8
  W16(c->r[4]+0x00000080u,c->r[0]); // 801BDABC
L_801BDAC0:;
  c->r[3]=0u+0x803C0000u; // 801BDAC0
  c->r[30]=c->r[3]+0x00007BF0u; // 801BDAC4
  goto L_801BDB8C; // 801BDAC8
L_801BDACC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BDACC
  if (!crb(c,2)) { goto L_801BDAE0; } // 801BDAD0
  c->r[3]=c->r[30]+0x00000064u; // 801BDAD4
  c->lr=0x801BDADCu; f_801AA8C4(c); // 801BDAD8
  c->r[31]=c->r[3]|c->r[3]; // 801BDADC
L_801BDAE0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BDAE0
  if (crb(c,2)) { goto L_801BDB98; } // 801BDAE4
  c->r[0]=R16(c->r[31]+0x00000004u); // 801BDAE8
  c->r[3]=c->r[31]+c->r[0]; // 801BDAEC
  c->r[0]=R8(c->r[3]+0x00000009u); // 801BDAF0
  c->r[3]=R8(c->r[3]+0x00000008u); // 801BDAF4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BDAF8
  c->r[0]=c->r[3]+c->r[0]; // 801BDAFC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801BDB00
  cmpu(c,0,c->r[0],0x00000C03u); // 801BDB04
  if (crb(c,2)) { goto L_801BDB70; } // 801BDB08
  cmpu(c,0,c->r[0],0x00000C35u); // 801BDB0C
  if (crb(c,2)) { goto L_801BDB70; } // 801BDB10
  c->r[3]=0u+0x00000002u; // 801BDB14
  c->lr=0x801BDB1Cu; f_801AA140(c); // 801BDB18
  cmps(c,0,(int32_t)c->r[3],0); // 801BDB1C
  c->r[29]=c->r[3]|c->r[3]; // 801BDB20
  if (crb(c,2)) { goto L_801BDB70; } // 801BDB24
  c->r[4]=c->r[31]|c->r[31]; // 801BDB28
  c->r[5]=0u+0x00000008u; // 801BDB2C
  c->lr=0x801BDB34u; f_80004338(c); // 801BDB30
  c->r[3]=R16(c->r[29]+0x00000004u); // 801BDB34
  c->r[0]=R16(c->r[31]+0x00000004u); // 801BDB38
  c->r[3]=c->r[29]+c->r[3]; // 801BDB3C
  c->r[5]=R16(c->r[31]+0x00000002u); // 801BDB40
  c->r[4]=c->r[31]+c->r[0]; // 801BDB44
  c->r[3]=c->r[3]+0x00000008u; // 801BDB48
  c->r[4]=c->r[4]+0x00000008u; // 801BDB4C
  c->lr=0x801BDB54u; f_80004338(c); // 801BDB50
  c->r[4]=c->r[29]|c->r[29]; // 801BDB54
  c->r[3]=c->r[30]+0x00000070u; // 801BDB58
  c->lr=0x801BDB60u; f_801AA648(c); // 801BDB5C
  c->r[3]=c->r[30]+0x0000004Cu; // 801BDB60
  c->r[4]=0u+0x0000003Cu; // 801BDB64
  c->r[5]=0u+0x00000008u; // 801BDB68
  c->lr=0x801BDB70u; f_801AD0EC(c); // 801BDB6C
L_801BDB70:;
  c->r[5]=R16(c->r[30]+0x00000080u); // 801BDB70
  c->r[3]=c->r[31]|c->r[31]; // 801BDB74
  c->r[4]=0u+0x00002000u; // 801BDB78
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801BDB7C
  W16(c->r[30]+0x00000080u,c->r[0]); // 801BDB80
  c->lr=0x801BDB88u; f_801AC980(c); // 801BDB84
  c->r[31]=0u+0x00000000u; // 801BDB88
L_801BDB8C:;
  c->r[0]=R16(c->r[30]+0x00000080u); // 801BDB8C
  cmps(c,0,(int32_t)c->r[0],0); // 801BDB90
  if (!crb(c,2)) { IRQCHK(c); goto L_801BDACC; } // 801BDB94
L_801BDB98:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BDB98
  if (crb(c,2)) { goto L_801BDBB4; } // 801BDB9C
  c->r[3]=0u+0x803C0000u; // 801BDBA0
  c->r[4]=c->r[31]|c->r[31]; // 801BDBA4
  c->r[3]=c->r[3]+0x00007BF0u; // 801BDBA8
  c->r[3]=c->r[3]+0x00000064u; // 801BDBAC
  c->lr=0x801BDBB4u; f_801AA648(c); // 801BDBB0
L_801BDBB4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BDBB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BDBB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BDBBC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BDBC0
  c->lr=c->r[0]; // 801BDBC4
  c->r[1]=c->r[1]+0x00000020u; // 801BDBC8
  return; // 801BDBCC
}

// btu_hcif_connection_comp_evt
void f_801BDBD0(Ctx* __restrict c) {
  trace_call(0x801BDBD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDBD0
  c->r[0]=c->lr; // 801BDBD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BDBD8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801BDBDC
  W32(c->r[1]+0x00000028u,c->r[30]); // 801BDBE0
  c->r[0]=R8(c->r[3]+0x00000002u); // 801BDBE4
  c->r[31]=R8(c->r[3]+0x00000000u); // 801BDBE8
  c->r[4]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BDBEC
  c->r[5]=R8(c->r[3]+0x00000001u); // 801BDBF0
  c->r[0]=R8(c->r[3]+0x00000003u); // 801BDBF4
  c->r[4]=c->r[5]+c->r[4]; // 801BDBF8
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801BDBFC
  c->r[30]=rotl(c->r[4],0)&0x00000FFFu; // 801BDC00
  c->r[0]=R8(c->r[3]+0x00000004u); // 801BDC04
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801BDC08
  c->r[0]=R8(c->r[3]+0x00000005u); // 801BDC0C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801BDC10
  c->r[0]=R8(c->r[3]+0x00000006u); // 801BDC14
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801BDC18
  c->r[0]=R8(c->r[3]+0x00000007u); // 801BDC1C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801BDC20
  c->r[0]=R8(c->r[3]+0x00000008u); // 801BDC24
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BDC28
  c->r[0]=R8(c->r[3]+0x00000009u); // 801BDC2C
  c->r[6]=R8(c->r[3]+0x0000000Au); // 801BDC30
  cmpu(c,0,c->r[0],0x00000001u); // 801BDC34
  if (!crb(c,2)) { goto L_801BDC60; } // 801BDC38
  c->r[4]=c->r[30]|c->r[30]; // 801BDC3C
  c->r[5]=c->r[31]|c->r[31]; // 801BDC40
  c->r[3]=c->r[1]+0x00000008u; // 801BDC44
  c->lr=0x801BDC4Cu; f_801BC108(c); // 801BDC48
  c->r[3]=c->r[31]|c->r[31]; // 801BDC4C
  c->r[4]=c->r[30]|c->r[30]; // 801BDC50
  c->r[5]=c->r[1]+0x00000008u; // 801BDC54
  c->lr=0x801BDC5Cu; f_801C763C(c); // 801BDC58
  goto L_801BDC94; // 801BDC5C
L_801BDC60:;
  c->r[3]=c->r[1]+0x00000010u; // 801BDC60
  c->r[4]=0u+0x00000000u; // 801BDC64
  c->r[5]=0u+0x0000000Eu; // 801BDC68
  c->lr=0x801BDC70u; f_80004688(c); // 801BDC6C
  c->r[3]=c->r[1]+0x00000014u; // 801BDC70
  c->r[4]=c->r[1]+0x00000008u; // 801BDC74
  c->r[5]=0u+0x00000006u; // 801BDC78
  c->lr=0x801BDC80u; f_80004338(c); // 801BDC7C
  c->r[3]=c->r[31]|c->r[31]; // 801BDC80
  c->r[5]=c->r[30]|c->r[30]; // 801BDC84
  c->r[4]=c->r[1]+0x00000008u; // 801BDC88
  c->r[6]=c->r[1]+0x00000010u; // 801BDC8C
  c->lr=0x801BDC94u; f_801B9C1C(c); // 801BDC90
L_801BDC94:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BDC94
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801BDC98
  c->r[30]=R32(c->r[1]+0x00000028u); // 801BDC9C
  c->lr=c->r[0]; // 801BDCA0
  c->r[1]=c->r[1]+0x00000030u; // 801BDCA4
  return; // 801BDCA8
}

// btu_hcif_connection_request_evt
void f_801BDCAC(Ctx* __restrict c) {
  trace_call(0x801BDCACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDCAC
  c->r[0]=c->lr; // 801BDCB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BDCB4
  c->r[0]=R8(c->r[3]+0x00000000u); // 801BDCB8
  W8(c->r[1]+0x00000011u,c->r[0]); // 801BDCBC
  c->r[0]=R8(c->r[3]+0x00000001u); // 801BDCC0
  W8(c->r[1]+0x00000010u,c->r[0]); // 801BDCC4
  c->r[0]=R8(c->r[3]+0x00000002u); // 801BDCC8
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801BDCCC
  c->r[0]=R8(c->r[3]+0x00000003u); // 801BDCD0
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801BDCD4
  c->r[0]=R8(c->r[3]+0x00000004u); // 801BDCD8
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801BDCDC
  c->r[0]=R8(c->r[3]+0x00000005u); // 801BDCE0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801BDCE4
  c->r[0]=R8(c->r[3]+0x00000006u); // 801BDCE8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801BDCEC
  c->r[0]=R8(c->r[3]+0x00000007u); // 801BDCF0
  W8(c->r[1]+0x00000009u,c->r[0]); // 801BDCF4
  c->r[0]=R8(c->r[3]+0x00000008u); // 801BDCF8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BDCFC
  c->r[5]=R8(c->r[3]+0x00000009u); // 801BDD00
  cmpu(c,0,c->r[5],0x00000001u); // 801BDD04
  if (!crb(c,2)) { goto L_801BDD1C; } // 801BDD08
  c->r[3]=c->r[1]+0x0000000Cu; // 801BDD0C
  c->r[4]=c->r[1]+0x00000008u; // 801BDD10
  c->lr=0x801BDD18u; f_801BB628(c); // 801BDD14
  goto L_801BDD28; // 801BDD18
L_801BDD1C:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801BDD1C
  c->r[4]=c->r[1]+0x00000008u; // 801BDD20
  c->lr=0x801BDD28u; f_801B9A3C(c); // 801BDD24
L_801BDD28:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BDD28
  c->lr=c->r[0]; // 801BDD2C
  c->r[1]=c->r[1]+0x00000020u; // 801BDD30
  return; // 801BDD34
}

// btu_hcif_qos_setup_comp_evt
void f_801BDD38(Ctx* __restrict c) {
  trace_call(0x801BDD38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDD38
  c->r[0]=c->lr; // 801BDD3C
  c->r[6]=c->r[3]|c->r[3]; // 801BDD40
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BDD44
  c->r[5]=c->r[1]+0x00000008u; // 801BDD48
  c->r[4]=R8(c->r[6]+0x00000002u); // 801BDD4C
  c->r[3]=R8(c->r[3]+0x00000000u); // 801BDD50
  c->r[7]=R8(c->r[6]+0x00000001u); // 801BDD54
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801BDD58
  c->r[0]=R8(c->r[6]+0x00000003u); // 801BDD5C
  c->r[4]=c->r[7]+c->r[4]; // 801BDD60
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BDD64
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801BDD68
  c->r[0]=R8(c->r[6]+0x00000004u); // 801BDD6C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801BDD70
  c->r[7]=R8(c->r[6]+0x00000008u); // 801BDD74
  c->r[8]=R8(c->r[6]+0x00000007u); // 801BDD78
  c->r[0]=R8(c->r[6]+0x00000006u); // 801BDD7C
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 801BDD80
  c->r[7]=R8(c->r[6]+0x00000005u); // 801BDD84
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 801BDD88
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BDD8C
  c->r[7]=c->r[8]+c->r[7]; // 801BDD90
  c->r[0]=c->r[9]+c->r[0]; // 801BDD94
  c->r[0]=c->r[7]+c->r[0]; // 801BDD98
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BDD9C
  c->r[7]=R8(c->r[6]+0x0000000Cu); // 801BDDA0
  c->r[8]=R8(c->r[6]+0x0000000Bu); // 801BDDA4
  c->r[0]=R8(c->r[6]+0x0000000Au); // 801BDDA8
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 801BDDAC
  c->r[7]=R8(c->r[6]+0x00000009u); // 801BDDB0
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 801BDDB4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BDDB8
  c->r[7]=c->r[8]+c->r[7]; // 801BDDBC
  c->r[0]=c->r[9]+c->r[0]; // 801BDDC0
  c->r[0]=c->r[7]+c->r[0]; // 801BDDC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BDDC8
  c->r[7]=R8(c->r[6]+0x00000010u); // 801BDDCC
  c->r[8]=R8(c->r[6]+0x0000000Fu); // 801BDDD0
  c->r[0]=R8(c->r[6]+0x0000000Eu); // 801BDDD4
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 801BDDD8
  c->r[7]=R8(c->r[6]+0x0000000Du); // 801BDDDC
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 801BDDE0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BDDE4
  c->r[7]=c->r[8]+c->r[7]; // 801BDDE8
  c->r[0]=c->r[9]+c->r[0]; // 801BDDEC
  c->r[0]=c->r[7]+c->r[0]; // 801BDDF0
  W32(c->r[1]+0x00000018u,c->r[0]); // 801BDDF4
  c->r[8]=R8(c->r[6]+0x00000014u); // 801BDDF8
  c->r[7]=R8(c->r[6]+0x00000013u); // 801BDDFC
  c->r[0]=R8(c->r[6]+0x00000012u); // 801BDE00
  c->r[8]=rotl(c->r[8],24)&0xFF000000u; // 801BDE04
  c->r[6]=R8(c->r[6]+0x00000011u); // 801BDE08
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 801BDE0C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BDE10
  c->r[6]=c->r[7]+c->r[6]; // 801BDE14
  c->r[0]=c->r[8]+c->r[0]; // 801BDE18
  c->r[0]=c->r[6]+c->r[0]; // 801BDE1C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801BDE20
  c->lr=0x801BDE28u; f_801B4520(c); // 801BDE24
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BDE28
  c->lr=c->r[0]; // 801BDE2C
  c->r[1]=c->r[1]+0x00000020u; // 801BDE30
  return; // 801BDE34
}

// btu_hcif_esco_connection_comp_evt
void f_801BDE38(Ctx* __restrict c) {
  trace_call(0x801BDE38u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDE38
  c->r[0]=c->lr; // 801BDE3C
  c->r[5]=0u+0x00000006u; // 801BDE40
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BDE44
  c->r[4]=c->r[1]+0x00000008u; // 801BDE48
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801BDE4C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801BDE50
  c->r[0]=R8(c->r[3]+0x00000002u); // 801BDE54
  c->r[31]=R8(c->r[3]+0x00000000u); // 801BDE58
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BDE5C
  c->r[7]=R8(c->r[3]+0x00000001u); // 801BDE60
  c->r[0]=R8(c->r[3]+0x00000003u); // 801BDE64
  c->r[6]=c->r[7]+c->r[6]; // 801BDE68
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801BDE6C
  c->r[30]=rotl(c->r[6],0)&0x0000FFFFu; // 801BDE70
  c->r[0]=R8(c->r[3]+0x00000004u); // 801BDE74
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801BDE78
  c->r[0]=R8(c->r[3]+0x00000005u); // 801BDE7C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801BDE80
  c->r[0]=R8(c->r[3]+0x00000006u); // 801BDE84
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801BDE88
  c->r[0]=R8(c->r[3]+0x00000007u); // 801BDE8C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801BDE90
  c->r[0]=R8(c->r[3]+0x00000008u); // 801BDE94
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BDE98
  c->r[0]=R8(c->r[3]+0x00000009u); // 801BDE9C
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801BDEA0
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801BDEA4
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801BDEA8
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 801BDEAC
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801BDEB0
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801BDEB4
  c->r[6]=R8(c->r[3]+0x0000000Cu); // 801BDEB8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BDEBC
  c->r[0]=c->r[6]+c->r[0]; // 801BDEC0
  W16(c->r[1]+0x00000010u,c->r[0]); // 801BDEC4
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 801BDEC8
  c->r[6]=R8(c->r[3]+0x0000000Eu); // 801BDECC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BDED0
  c->r[0]=c->r[6]+c->r[0]; // 801BDED4
  W16(c->r[1]+0x00000012u,c->r[0]); // 801BDED8
  c->r[0]=R8(c->r[3]+0x00000010u); // 801BDEDC
  c->r[3]=c->r[1]+0x00000014u; // 801BDEE0
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801BDEE4
  c->lr=0x801BDEECu; f_80004338(c); // 801BDEE8
  c->r[3]=c->r[31]|c->r[31]; // 801BDEEC
  c->r[5]=c->r[30]|c->r[30]; // 801BDEF0
  c->r[4]=c->r[1]+0x00000008u; // 801BDEF4
  c->r[6]=c->r[1]+0x00000010u; // 801BDEF8
  c->lr=0x801BDF00u; f_801B9C1C(c); // 801BDEFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BDF00
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801BDF04
  c->r[30]=R32(c->r[1]+0x00000028u); // 801BDF08
  c->lr=c->r[0]; // 801BDF0C
  c->r[1]=c->r[1]+0x00000030u; // 801BDF10
  return; // 801BDF14
}

// btu_hcif_hdl_command_complete
void f_801BDF18(Ctx* __restrict c) {
  trace_call(0x801BDF18u);
  cmps(c,0,(int32_t)c->r[3],3092); // 801BDF18
  c->r[6]=c->r[3]|c->r[3]; // 801BDF1C
  if (crb(c,2)) { goto L_801BE028; } // 801BDF20
  if (!crb(c,0)) { goto L_801BDF7C; } // 801BDF24
  cmps(c,0,(int32_t)c->r[3],3077); // 801BDF28
  if (crb(c,2)) { goto L_801BDFDC; } // 801BDF2C
  if (!crb(c,0)) { goto L_801BDF58; } // 801BDF30
  cmps(c,0,(int32_t)c->r[3],2060); // 801BDF34
  if (crb(c,2)) { goto L_801BE008; } // 801BDF38
  if (!crb(c,0)) { goto L_801BDF4C; } // 801BDF3C
  cmps(c,0,(int32_t)c->r[3],1026); // 801BDF40
  if (crb(c,2)) { goto L_801BDFD4; } // 801BDF44
  goto L_801BE050; // 801BDF48
L_801BDF4C:;
  cmps(c,0,(int32_t)c->r[3],3075); // 801BDF4C
  if (crb(c,2)) { goto L_801BDFD0; } // 801BDF50
  goto L_801BE050; // 801BDF54
L_801BDF58:;
  cmps(c,0,(int32_t)c->r[3],3089); // 801BDF58
  if (crb(c,2)) { goto L_801BDFEC; } // 801BDF5C
  if (!crb(c,0)) { goto L_801BDF70; } // 801BDF60
  cmps(c,0,(int32_t)c->r[3],3085); // 801BDF64
  if (crb(c,2)) { goto L_801BDFE4; } // 801BDF68
  goto L_801BE050; // 801BDF6C
L_801BDF70:;
  cmps(c,0,(int32_t)c->r[3],3091); // 801BDF70
  if (!crb(c,0)) { goto L_801BE050; } // 801BDF74
  goto L_801BDFF4; // 801BDF78
L_801BDF7C:;
  cmps(c,0,(int32_t)c->r[3],4105); // 801BDF7C
  if (crb(c,2)) { goto L_801BE034; } // 801BDF80
  if (!crb(c,0)) { goto L_801BDFAC; } // 801BDF84
  cmps(c,0,(int32_t)c->r[3],4099); // 801BDF88
  if (crb(c,2)) { goto L_801BE01C; } // 801BDF8C
  if (!crb(c,0)) { goto L_801BDFA0; } // 801BDF90
  cmps(c,0,(int32_t)c->r[3],4097); // 801BDF94
  if (crb(c,2)) { goto L_801BDFFC; } // 801BDF98
  goto L_801BE050; // 801BDF9C
L_801BDFA0:;
  cmps(c,0,(int32_t)c->r[3],4101); // 801BDFA0
  if (crb(c,2)) { goto L_801BE010; } // 801BDFA4
  goto L_801BE050; // 801BDFA8
L_801BDFAC:;
  cmps(c,0,(int32_t)c->r[3],5124); // 801BDFAC
  if (crb(c,2)) { goto L_801BE050; } // 801BDFB0
  if (!crb(c,0)) { goto L_801BDFC4; } // 801BDFB4
  cmps(c,0,(int32_t)c->r[3],5123); // 801BDFB8
  if (!crb(c,0)) { goto L_801BE040; } // 801BDFBC
  goto L_801BE050; // 801BDFC0
L_801BDFC4:;
  cmps(c,0,(int32_t)c->r[3],5126); // 801BDFC4
  if (!crb(c,0)) { goto L_801BE050; } // 801BDFC8
  goto L_801BE048; // 801BDFCC
L_801BDFD0:;
  f_801B5A84(c); return; // 801BDFD0
L_801BDFD4:;
  c->r[3]=0u+0x00000000u; // 801BDFD4
  f_801B85B4(c); return; // 801BDFD8
L_801BDFDC:;
  c->r[3]=c->r[4]|c->r[4]; // 801BDFDC
  f_801B811C(c); return; // 801BDFE0
L_801BDFE4:;
  c->r[3]=c->r[4]|c->r[4]; // 801BDFE4
  f_801B6AE8(c); return; // 801BDFE8
L_801BDFEC:;
  c->r[3]=c->r[4]|c->r[4]; // 801BDFEC
  f_801B6B64(c); return; // 801BDFF0
L_801BDFF4:;
  c->r[3]=c->r[4]|c->r[4]; // 801BDFF4
  f_801B6BC0(c); return; // 801BDFF8
L_801BDFFC:;
  c->r[3]=c->r[4]|c->r[4]; // 801BDFFC
  c->r[4]=c->r[5]|c->r[5]; // 801BE000
  f_801B5D10(c); return; // 801BE004
L_801BE008:;
  c->r[3]=c->r[4]|c->r[4]; // 801BE008
  f_801B3AA4(c); return; // 801BE00C
L_801BE010:;
  c->r[3]=c->r[4]|c->r[4]; // 801BE010
  c->r[4]=c->r[5]|c->r[5]; // 801BE014
  f_801B5C48(c); return; // 801BE018
L_801BE01C:;
  c->r[3]=c->r[4]|c->r[4]; // 801BE01C
  c->r[4]=c->r[5]|c->r[5]; // 801BE020
  f_801B5DCC(c); return; // 801BE024
L_801BE028:;
  c->r[3]=c->r[4]|c->r[4]; // 801BE028
  c->r[4]=c->r[5]|c->r[5]; // 801BE02C
  f_801B6380(c); return; // 801BE030
L_801BE034:;
  c->r[3]=c->r[4]|c->r[4]; // 801BE034
  c->r[4]=c->r[5]|c->r[5]; // 801BE038
  f_801B644C(c); return; // 801BE03C
L_801BE040:;
  c->r[3]=c->r[4]|c->r[4]; // 801BE040
  f_801B498C(c); return; // 801BE044
L_801BE048:;
  c->r[3]=c->r[4]|c->r[4]; // 801BE048
  f_801B4870(c); return; // 801BE04C
L_801BE050:;
  c->r[3]=rotl(c->r[3],0)&0x0000FC00u; // 801BE050
  c->r[0]=c->r[3]+0x00000000u; // 801BE054
  cmpu(c,0,c->r[0],0x0000FC00u); // 801BE058
  if (!crb(c,2)) return; // 801BE05C
  c->r[3]=c->r[4]|c->r[4]; // 801BE060
  c->r[4]=c->r[6]|c->r[6]; // 801BE064
  f_801B6694(c); return; // 801BE068
  return; // 801BE06C
}

// btu_hcif_command_complete_evt
void f_801BE070(Ctx* __restrict c) {
  trace_call(0x801BE070u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE070
  c->r[0]=c->lr; // 801BE074
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BE078
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BE07C
  c->r[31]=0u+0x803C0000u; // 801BE080
  c->r[31]=c->r[31]+0x00007BF0u; // 801BE084
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BE088
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BE08C
  c->r[29]=c->r[4]|c->r[4]; // 801BE090
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BE094
  c->r[28]=c->r[3]|c->r[3]; // 801BE098
  c->r[0]=R8(c->r[3]+0x00000000u); // 801BE09C
  W16(c->r[31]+0x00000080u,c->r[0]); // 801BE0A0
  c->r[0]=R8(c->r[3]+0x00000002u); // 801BE0A4
  c->r[3]=R8(c->r[3]+0x00000001u); // 801BE0A8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BE0AC
  c->r[0]=c->r[3]+c->r[0]; // 801BE0B0
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE0B4
  cmpu(c,0,c->r[30],0x00000C03u); // 801BE0B8
  if (crb(c,2)) { goto L_801BE14C; } // 801BE0BC
  cmpu(c,0,c->r[30],0x00000C35u); // 801BE0C0
  if (crb(c,2)) { goto L_801BE14C; } // 801BE0C4
  cmps(c,0,(int32_t)c->r[30],0); // 801BE0C8
  if (crb(c,2)) { goto L_801BE14C; } // 801BE0CC
  c->r[3]=c->r[31]+0x00000070u; // 801BE0D0
  c->lr=0x801BE0D8u; f_801AA8C4(c); // 801BE0D4
  cmps(c,0,(int32_t)c->r[3],0); // 801BE0D8
  if (crb(c,2)) { goto L_801BE118; } // 801BE0DC
  c->r[0]=R8(c->r[3]+0x00000009u); // 801BE0E0
  cmpu(c,0,c->r[30],0x0000FC4Cu); // 801BE0E4
  c->r[4]=R8(c->r[3]+0x00000008u); // 801BE0E8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BE0EC
  c->r[0]=c->r[4]+c->r[0]; // 801BE0F0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE0F4
  if (!crb(c,2)) { goto L_801BE114; } // 801BE0F8
  cmpu(c,0,c->r[0],c->r[30]); // 801BE0FC
  if (crb(c,2)) { goto L_801BE114; } // 801BE100
  c->r[4]=c->r[3]|c->r[3]; // 801BE104
  c->r[3]=c->r[31]+0x00000070u; // 801BE108
  c->lr=0x801BE110u; f_801AA784(c); // 801BE10C
  goto L_801BE168; // 801BE110
L_801BE114:;
  c->lr=0x801BE118u; f_801AA228(c); // 801BE114
L_801BE118:;
  c->r[31]=0u+0x803C0000u; // 801BE118
  c->r[31]=c->r[31]+0x00007BF0u; // 801BE11C
  c->r[3]=c->r[31]+0x00000070u; // 801BE120
  c->lr=0x801BE128u; f_801AAA4C(c); // 801BE124
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BE128
  if (!crb(c,2)) { goto L_801BE144; } // 801BE12C
  c->r[3]=c->r[31]+0x0000004Cu; // 801BE130
  c->r[4]=0u+0x0000003Cu; // 801BE134
  c->r[5]=0u+0x00000008u; // 801BE138
  c->lr=0x801BE140u; f_801AD0EC(c); // 801BE13C
  goto L_801BE14C; // 801BE140
L_801BE144:;
  c->r[3]=c->r[31]+0x0000004Cu; // 801BE144
  c->lr=0x801BE14Cu; f_801AD15C(c); // 801BE148
L_801BE14C:;
  c->r[0]=c->r[29]+0xFFFFFFFDu; // 801BE14C
  c->r[3]=c->r[30]|c->r[30]; // 801BE150
  c->r[4]=c->r[28]+0x00000003u; // 801BE154
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE158
  c->lr=0x801BE160u; f_801BDF18(c); // 801BE15C
  c->r[3]=0u+0x00000000u; // 801BE160
  c->lr=0x801BE168u; f_801BDA44(c); // 801BE164
L_801BE168:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BE168
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BE16C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BE170
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BE174
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BE178
  c->lr=c->r[0]; // 801BE17C
  c->r[1]=c->r[1]+0x00000020u; // 801BE180
  return; // 801BE184
}

// btu_hcif_hdl_command_status
void f_801BE188(Ctx* __restrict c) {
  trace_call(0x801BE188u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE188
  c->r[0]=c->lr; // 801BE18C
  cmps(c,0,(int32_t)c->r[3],2050); // 801BE190
  c->r[6]=c->r[3]|c->r[3]; // 801BE194
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BE198
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801BE19C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801BE1A0
  c->r[30]=c->r[4]|c->r[4]; // 801BE1A4
  if (crb(c,2)) { goto L_801BE1D0; } // 801BE1A8
  if (!crb(c,0)) { goto L_801BE1BC; } // 801BE1AC
  cmps(c,0,(int32_t)c->r[3],2049); // 801BE1B0
  if (!crb(c,0)) { goto L_801BE1C4; } // 801BE1B4
  goto L_801BE1D0; // 801BE1B8
L_801BE1BC:;
  cmps(c,0,(int32_t)c->r[3],2055); // 801BE1BC
  if (!crb(c,0)) { goto L_801BE1D0; } // 801BE1C0
L_801BE1C4:;
  c->r[3]=c->r[30]|c->r[30]; // 801BE1C4
  c->lr=0x801BE1CCu; f_801B93B8(c); // 801BE1C8
  goto L_801BE370; // 801BE1CC
L_801BE1D0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BE1D0
  if (crb(c,2)) { goto L_801BE370; } // 801BE1D4
  cmps(c,0,(int32_t)c->r[3],1049); // 801BE1D8
  if (crb(c,2)) { goto L_801BE22C; } // 801BE1DC
  if (!crb(c,0)) { goto L_801BE208; } // 801BE1E0
  cmps(c,0,(int32_t)c->r[3],1025); // 801BE1E4
  if (crb(c,2)) { goto L_801BE220; } // 801BE1E8
  if (!crb(c,0)) { goto L_801BE1FC; } // 801BE1EC
  cmps(c,0,(int32_t)c->r[3],13); // 801BE1F0
  if (crb(c,2)) { goto L_801BE254; } // 801BE1F4
  goto L_801BE350; // 801BE1F8
L_801BE1FC:;
  cmps(c,0,(int32_t)c->r[3],1029); // 801BE1FC
  if (crb(c,2)) { goto L_801BE280; } // 801BE200
  goto L_801BE350; // 801BE204
L_801BE208:;
  cmps(c,0,(int32_t)c->r[3],2059); // 801BE208
  if (crb(c,2)) { goto L_801BE268; } // 801BE20C
  if (!crb(c,0)) { goto L_801BE350; } // 801BE210
  cmps(c,0,(int32_t)c->r[3],1064); // 801BE214
  if (crb(c,2)) { goto L_801BE2EC; } // 801BE218
  goto L_801BE350; // 801BE21C
L_801BE220:;
  c->r[3]=c->r[30]|c->r[30]; // 801BE220
  c->lr=0x801BE228u; f_801B85B4(c); // 801BE224
  goto L_801BE370; // 801BE228
L_801BE22C:;
  c->r[6]=c->r[30]|c->r[30]; // 801BE22C
  c->r[3]=0u+0x00000000u; // 801BE230
  c->r[4]=0u+0x00000000u; // 801BE234
  c->r[5]=0u+0x00000000u; // 801BE238
  c->lr=0x801BE240u; f_801B8808(c); // 801BE23C
  c->r[5]=c->r[30]|c->r[30]; // 801BE240
  c->r[3]=0u+0x00000000u; // 801BE244
  c->r[4]=0u+0x00000000u; // 801BE248
  c->lr=0x801BE250u; f_801BB864(c); // 801BE24C
  goto L_801BE370; // 801BE250
L_801BE254:;
  c->r[3]=c->r[30]|c->r[30]; // 801BE254
  c->r[4]=0u+0x00000000u; // 801BE258
  c->r[5]=0u+0x00000000u; // 801BE25C
  c->lr=0x801BE264u; f_801B4520(c); // 801BE260
  goto L_801BE370; // 801BE264
L_801BE268:;
  c->r[3]=c->r[30]|c->r[30]; // 801BE268
  c->r[4]=0u+0x00000000u; // 801BE26C
  c->r[5]=0u+0x000000FFu; // 801BE270
  c->lr=0x801BE278u; f_801B40EC(c); // 801BE274
  c->lr=0x801BE27Cu; f_801C84E8(c); // 801BE278
  goto L_801BE370; // 801BE27C
L_801BE280:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BE280
  if (crb(c,2)) { goto L_801BE370; } // 801BE284
  c->r[4]=R8(c->r[5]+0x00000001u); // 801BE288
  c->r[31]=0u+0x00010000u; // 801BE28C
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801BE290
  c->r[3]=c->r[1]+0x00000008u; // 801BE294
  W8(c->r[1]+0x0000000Du,c->r[4]); // 801BE298
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE29C
  c->r[6]=0u+0x00000000u; // 801BE2A0
  c->r[0]=R8(c->r[5]+0x00000002u); // 801BE2A4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801BE2A8
  c->r[0]=R8(c->r[5]+0x00000003u); // 801BE2AC
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801BE2B0
  c->r[0]=R8(c->r[5]+0x00000004u); // 801BE2B4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801BE2B8
  c->r[0]=R8(c->r[5]+0x00000005u); // 801BE2BC
  W8(c->r[1]+0x00000009u,c->r[0]); // 801BE2C0
  c->r[0]=R8(c->r[5]+0x00000006u); // 801BE2C4
  c->r[5]=c->r[30]|c->r[30]; // 801BE2C8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BE2CC
  c->lr=0x801BE2D4u; f_801BC108(c); // 801BE2D0
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801BE2D4
  c->r[3]=c->r[30]|c->r[30]; // 801BE2D8
  c->r[5]=c->r[1]+0x00000008u; // 801BE2DC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE2E0
  c->lr=0x801BE2E8u; f_801C763C(c); // 801BE2E4
  goto L_801BE370; // 801BE2E8
L_801BE2EC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BE2EC
  if (crb(c,2)) { goto L_801BE370; } // 801BE2F0
  c->r[0]=R8(c->r[5]+0x00000002u); // 801BE2F4
  c->r[3]=R8(c->r[5]+0x00000001u); // 801BE2F8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BE2FC
  c->r[0]=c->r[3]+c->r[0]; // 801BE300
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE304
  c->r[3]=c->r[31]|c->r[31]; // 801BE308
  c->lr=0x801BE310u; f_801BA370(c); // 801BE30C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BE310
  if (crb(c,2)) { goto L_801BE338; } // 801BE314
  c->r[3]=c->r[30]|c->r[30]; // 801BE318
  c->r[4]=c->r[31]|c->r[31]; // 801BE31C
  c->r[5]=0u+0x00000000u; // 801BE320
  c->r[6]=0u+0x00000000u; // 801BE324
  c->r[7]=0u+0x00000000u; // 801BE328
  c->r[8]=0u+0x00000000u; // 801BE32C
  c->lr=0x801BE334u; f_801BA26C(c); // 801BE330
  goto L_801BE370; // 801BE334
L_801BE338:;
  c->r[3]=c->r[30]|c->r[30]; // 801BE338
  c->r[5]=c->r[31]|c->r[31]; // 801BE33C
  c->r[6]=c->r[1]+0x00000010u; // 801BE340
  c->r[4]=0u+0x00000000u; // 801BE344
  c->lr=0x801BE34Cu; f_801B9C1C(c); // 801BE348
  goto L_801BE370; // 801BE34C
L_801BE350:;
  c->r[3]=rotl(c->r[3],0)&0x0000FC00u; // 801BE350
  c->r[0]=c->r[3]+0x00000000u; // 801BE354
  cmpu(c,0,c->r[0],0x0000FC00u); // 801BE358
  if (!crb(c,2)) { goto L_801BE370; } // 801BE35C
  c->r[3]=c->r[5]|c->r[5]; // 801BE360
  c->r[4]=c->r[6]|c->r[6]; // 801BE364
  c->r[5]=0u+0x00000001u; // 801BE368
  c->lr=0x801BE370u; f_801B6694(c); // 801BE36C
L_801BE370:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BE370
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801BE374
  c->r[30]=R32(c->r[1]+0x00000028u); // 801BE378
  c->lr=c->r[0]; // 801BE37C
  c->r[1]=c->r[1]+0x00000030u; // 801BE380
  return; // 801BE384
}

// btu_hcif_command_status_evt
void f_801BE388(Ctx* __restrict c) {
  trace_call(0x801BE388u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE388
  c->r[0]=c->lr; // 801BE38C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BE390
  c->r[11]=c->r[1]+0x00000020u; // 801BE394
  c->lr=0x801BE39Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BE398
  c->r[4]=0u+0x803C0000u; // 801BE39C
  c->r[29]=R8(c->r[3]+0x00000000u); // 801BE3A0
  c->r[0]=R8(c->r[3]+0x00000001u); // 801BE3A4
  c->r[4]=c->r[4]+0x00007BF0u; // 801BE3A8
  c->r[31]=0u+0x00000000u; // 801BE3AC
  c->r[27]=0u+0x00000000u; // 801BE3B0
  W16(c->r[4]+0x00000080u,c->r[0]); // 801BE3B4
  c->r[0]=R8(c->r[3]+0x00000003u); // 801BE3B8
  c->r[3]=R8(c->r[3]+0x00000002u); // 801BE3BC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BE3C0
  c->r[0]=c->r[3]+c->r[0]; // 801BE3C4
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE3C8
  cmpu(c,0,c->r[28],0x00000C03u); // 801BE3CC
  if (crb(c,2)) { goto L_801BE470; } // 801BE3D0
  cmpu(c,0,c->r[28],0x00000C35u); // 801BE3D4
  if (crb(c,2)) { goto L_801BE470; } // 801BE3D8
  cmps(c,0,(int32_t)c->r[28],0); // 801BE3DC
  if (crb(c,2)) { goto L_801BE470; } // 801BE3E0
  c->r[3]=c->r[4]+0x00000070u; // 801BE3E4
  c->lr=0x801BE3ECu; f_801AA8C4(c); // 801BE3E8
  cmps(c,0,(int32_t)c->r[3],0); // 801BE3EC
  c->r[31]=c->r[3]|c->r[3]; // 801BE3F0
  if (crb(c,2)) { goto L_801BE43C; } // 801BE3F4
  c->r[0]=R16(c->r[3]+0x00000004u); // 801BE3F8
  c->r[3]=c->r[3]+c->r[0]; // 801BE3FC
  c->r[0]=R8(c->r[3]+0x00000009u); // 801BE400
  c->r[27]=c->r[3]+0x0000000Au; // 801BE404
  c->r[3]=R8(c->r[3]+0x00000008u); // 801BE408
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BE40C
  c->r[0]=c->r[3]+c->r[0]; // 801BE410
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE414
  cmpu(c,0,c->r[6],c->r[28]); // 801BE418
  if (crb(c,2)) { goto L_801BE43C; } // 801BE41C
  c->r[3]=0u+0x00070000u; // 801BE420
  c->r[4]=0u+0x80330000u; // 801BE424
  c->r[5]=c->r[28]|c->r[28]; // 801BE428
  c->r[27]=0u+0x00000000u; // 801BE42C
  c->r[3]=c->r[3]+0x00000001u; // 801BE430
  c->r[4]=c->r[4]+0x00003960u; // 801BE434
  c->lr=0x801BE43Cu; f_801ACB50(c); // 801BE438
L_801BE43C:;
  c->r[30]=0u+0x803C0000u; // 801BE43C
  c->r[30]=c->r[30]+0x00007BF0u; // 801BE440
  c->r[3]=c->r[30]+0x00000070u; // 801BE444
  c->lr=0x801BE44Cu; f_801AAA4C(c); // 801BE448
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BE44C
  if (!crb(c,2)) { goto L_801BE468; } // 801BE450
  c->r[3]=c->r[30]+0x0000004Cu; // 801BE454
  c->r[4]=0u+0x0000003Cu; // 801BE458
  c->r[5]=0u+0x00000008u; // 801BE45C
  c->lr=0x801BE464u; f_801AD0EC(c); // 801BE460
  goto L_801BE470; // 801BE464
L_801BE468:;
  c->r[3]=c->r[30]+0x0000004Cu; // 801BE468
  c->lr=0x801BE470u; f_801AD15C(c); // 801BE46C
L_801BE470:;
  c->r[3]=c->r[28]|c->r[28]; // 801BE470
  c->r[4]=c->r[29]|c->r[29]; // 801BE474
  c->r[5]=c->r[27]|c->r[27]; // 801BE478
  c->lr=0x801BE480u; f_801BE188(c); // 801BE47C
  cmps(c,0,(int32_t)c->r[31],0); // 801BE480
  if (crb(c,2)) { goto L_801BE490; } // 801BE484
  c->r[3]=c->r[31]|c->r[31]; // 801BE488
  c->lr=0x801BE490u; f_801AA228(c); // 801BE48C
L_801BE490:;
  c->r[3]=0u+0x00000000u; // 801BE490
  c->lr=0x801BE498u; f_801BDA44(c); // 801BE494
  c->r[11]=c->r[1]+0x00000020u; // 801BE498
  c->lr=0x801BE4A0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BE49C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BE4A0
  c->lr=c->r[0]; // 801BE4A4
  c->r[1]=c->r[1]+0x00000020u; // 801BE4A8
  return; // 801BE4AC
}

// btu_hcif_cmd_timeout
void f_801BE4B0(Ctx* __restrict c) {
  trace_call(0x801BE4B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE4B0
  c->r[0]=c->lr; // 801BE4B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BE4B8
  c->r[0]=0u+0x00000001u; // 801BE4BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BE4C0
  c->r[31]=0u+0x803C0000u; // 801BE4C4
  c->r[31]=c->r[31]+0x00007BF0u; // 801BE4C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BE4CC
  c->r[3]=c->r[31]+0x00000070u; // 801BE4D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BE4D4
  W16(c->r[31]+0x00000080u,c->r[0]); // 801BE4D8
  c->lr=0x801BE4E0u; f_801AA8C4(c); // 801BE4DC
  cmps(c,0,(int32_t)c->r[3],0); // 801BE4E0
  c->r[30]=c->r[3]|c->r[3]; // 801BE4E4
  if (!crb(c,2)) { goto L_801BE504; } // 801BE4E8
  c->r[3]=0u+0x00070000u; // 801BE4EC
  c->r[4]=0u+0x80330000u; // 801BE4F0
  c->r[3]=c->r[3]+0x00000001u; // 801BE4F4
  c->r[4]=c->r[4]+0x00003988u; // 801BE4F8
  c->lr=0x801BE500u; f_801ACB20(c); // 801BE4FC
  goto L_801BE5EC; // 801BE500
L_801BE504:;
  c->r[3]=c->r[31]+0x00000070u; // 801BE504
  c->lr=0x801BE50Cu; f_801AAA4C(c); // 801BE508
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BE50C
  if (!crb(c,2)) { goto L_801BE524; } // 801BE510
  c->r[3]=c->r[31]+0x0000004Cu; // 801BE514
  c->r[4]=0u+0x0000003Cu; // 801BE518
  c->r[5]=0u+0x00000008u; // 801BE51C
  c->lr=0x801BE524u; f_801AD0EC(c); // 801BE520
L_801BE524:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 801BE524
  c->r[3]=0u+0x00070000u; // 801BE528
  c->r[4]=0u+0x80330000u; // 801BE52C
  c->r[31]=c->r[30]+c->r[0]; // 801BE530
  c->r[3]=c->r[3]+0x00000001u; // 801BE534
  c->r[0]=R8(c->r[31]+0x00000009u); // 801BE538
  c->r[4]=c->r[4]+0x000039A8u; // 801BE53C
  c->r[5]=R8(c->r[31]+0x00000008u); // 801BE540
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BE544
  c->r[0]=c->r[5]+c->r[0]; // 801BE548
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE54C
  c->r[5]=c->r[29]|c->r[29]; // 801BE550
  c->lr=0x801BE558u; f_801ACB38(c); // 801BE554
  cmps(c,0,(int32_t)c->r[29],1049); // 801BE558
  if (crb(c,2)) { goto L_801BE5A8; } // 801BE55C
  if (!crb(c,0)) { goto L_801BE588; } // 801BE560
  cmps(c,0,(int32_t)c->r[29],1025); // 801BE564
  if (crb(c,2)) { goto L_801BE5A8; } // 801BE568
  if (!crb(c,0)) { goto L_801BE57C; } // 801BE56C
  cmps(c,0,(int32_t)c->r[29],13); // 801BE570
  if (crb(c,2)) { goto L_801BE5A8; } // 801BE574
  goto L_801BE5BC; // 801BE578
L_801BE57C:;
  cmps(c,0,(int32_t)c->r[29],1029); // 801BE57C
  if (crb(c,2)) { goto L_801BE5A8; } // 801BE580
  goto L_801BE5BC; // 801BE584
L_801BE588:;
  cmps(c,0,(int32_t)c->r[29],2050); // 801BE588
  if (crb(c,2)) { goto L_801BE5BC; } // 801BE58C
  if (!crb(c,0)) { goto L_801BE5A0; } // 801BE590
  cmps(c,0,(int32_t)c->r[29],2049); // 801BE594
  if (!crb(c,0)) { goto L_801BE5A8; } // 801BE598
  goto L_801BE5BC; // 801BE59C
L_801BE5A0:;
  cmps(c,0,(int32_t)c->r[29],2055); // 801BE5A0
  if (!crb(c,0)) { goto L_801BE5BC; } // 801BE5A4
L_801BE5A8:;
  c->r[3]=c->r[29]|c->r[29]; // 801BE5A8
  c->r[5]=c->r[31]+0x0000000Au; // 801BE5AC
  c->r[4]=0u+0x0000001Fu; // 801BE5B0
  c->lr=0x801BE5B8u; f_801BE188(c); // 801BE5B4
  goto L_801BE5D4; // 801BE5B8
L_801BE5BC:;
  c->r[0]=0u+0x0000001Fu; // 801BE5BC
  c->r[3]=c->r[29]|c->r[29]; // 801BE5C0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BE5C4
  c->r[4]=c->r[1]+0x00000008u; // 801BE5C8
  c->r[5]=0u+0x00000001u; // 801BE5CC
  c->lr=0x801BE5D4u; f_801BDF18(c); // 801BE5D0
L_801BE5D4:;
  c->r[3]=c->r[30]|c->r[30]; // 801BE5D4
  c->lr=0x801BE5DCu; f_801AA228(c); // 801BE5D8
  c->r[3]=0u+0x00000002u; // 801BE5DC
  c->lr=0x801BE5E4u; f_801B6DB4(c); // 801BE5E0
  c->r[3]=0u+0x00000000u; // 801BE5E4
  c->lr=0x801BE5ECu; f_801BDA44(c); // 801BE5E8
L_801BE5EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BE5EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BE5F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BE5F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BE5F8
  c->lr=c->r[0]; // 801BE5FC
  c->r[1]=c->r[1]+0x00000020u; // 801BE600
  return; // 801BE604
}

// btu_hcif_link_key_notification_evt
void f_801BE608(Ctx* __restrict c) {
  trace_call(0x801BE608u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE608
  c->r[0]=c->lr; // 801BE60C
  c->r[5]=c->r[3]+0x00000016u; // 801BE610
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BE614
  c->r[4]=c->r[1]+0x00000010u; // 801BE618
  c->r[0]=R8(c->r[3]+0x00000000u); // 801BE61C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801BE620
  c->r[0]=R8(c->r[3]+0x00000001u); // 801BE624
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801BE628
  c->r[0]=R8(c->r[3]+0x00000002u); // 801BE62C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801BE630
  c->r[0]=R8(c->r[3]+0x00000003u); // 801BE634
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801BE638
  c->r[0]=R8(c->r[3]+0x00000004u); // 801BE63C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801BE640
  c->r[0]=R8(c->r[3]+0x00000005u); // 801BE644
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BE648
  c->r[0]=R8(c->r[3]+0x00000006u); // 801BE64C
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 801BE650
  c->r[0]=R8(c->r[3]+0x00000007u); // 801BE654
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 801BE658
  c->r[0]=R8(c->r[3]+0x00000008u); // 801BE65C
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801BE660
  c->r[0]=R8(c->r[3]+0x00000009u); // 801BE664
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801BE668
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801BE66C
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801BE670
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 801BE674
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801BE678
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801BE67C
  W8(c->r[1]+0x00000019u,c->r[0]); // 801BE680
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801BE684
  W8(c->r[1]+0x00000018u,c->r[0]); // 801BE688
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 801BE68C
  W8(c->r[1]+0x00000017u,c->r[0]); // 801BE690
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 801BE694
  W8(c->r[1]+0x00000016u,c->r[0]); // 801BE698
  c->r[0]=R8(c->r[3]+0x00000010u); // 801BE69C
  W8(c->r[1]+0x00000015u,c->r[0]); // 801BE6A0
  c->r[0]=R8(c->r[3]+0x00000011u); // 801BE6A4
  W8(c->r[1]+0x00000014u,c->r[0]); // 801BE6A8
  c->r[0]=R8(c->r[3]+0x00000012u); // 801BE6AC
  W8(c->r[1]+0x00000013u,c->r[0]); // 801BE6B0
  c->r[0]=R8(c->r[3]+0x00000013u); // 801BE6B4
  W8(c->r[1]+0x00000012u,c->r[0]); // 801BE6B8
  c->r[0]=R8(c->r[3]+0x00000014u); // 801BE6BC
  W8(c->r[1]+0x00000011u,c->r[0]); // 801BE6C0
  c->r[0]=R8(c->r[3]+0x00000015u); // 801BE6C4
  c->r[3]=c->r[1]+0x00000008u; // 801BE6C8
  W8(c->r[1]+0x00000010u,c->r[0]); // 801BE6CC
  c->r[5]=R8(c->r[5]+0x00000000u); // 801BE6D0
  c->lr=0x801BE6D8u; f_801BC780(c); // 801BE6D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BE6D8
  c->lr=c->r[0]; // 801BE6DC
  c->r[1]=c->r[1]+0x00000020u; // 801BE6E0
  return; // 801BE6E4
}

// btu_init_core
void f_801BE6E8(Ctx* __restrict c) {
  trace_call(0x801BE6E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE6E8
  c->r[0]=c->lr; // 801BE6EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE6F0
  c->lr=0x801BE6F8u; f_801B89A0(c); // 801BE6F4
  c->lr=0x801BE6FCu; f_801C8674(c); // 801BE6F8
  c->lr=0x801BE700u; f_801D47A4(c); // 801BE6FC
  c->lr=0x801BE704u; f_801B6DD4(c); // 801BE700
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE704
  c->lr=c->r[0]; // 801BE708
  c->r[1]=c->r[1]+0x00000010u; // 801BE70C
  return; // 801BE710
}

// BTE_Init
void f_801BE714(Ctx* __restrict c) {
  trace_call(0x801BE714u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE714
  c->r[0]=c->lr; // 801BE718
  c->r[4]=0u+0x00000000u; // 801BE71C
  c->r[5]=0u+0x00000084u; // 801BE720
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE724
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE728
  c->r[31]=0u+0x803C0000u; // 801BE72C
  c->r[3]=c->r[31]+0x00007BF0u; // 801BE730
  c->lr=0x801BE738u; f_80004688(c); // 801BE734
  c->r[3]=c->r[31]+0x00007BF0u; // 801BE738
  c->r[4]=0u+0x000002A4u; // 801BE73C
  c->r[0]=0u+0x00000001u; // 801BE740
  W16(c->r[3]+0x0000007Eu,c->r[4]); // 801BE744
  W16(c->r[3]+0x00000080u,c->r[0]); // 801BE748
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE74C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE750
  c->lr=c->r[0]; // 801BE754
  c->r[1]=c->r[1]+0x00000010u; // 801BE758
  return; // 801BE75C
}

// WBT_ExtCreateRecord
void f_801BE760(Ctx* __restrict c) {
  trace_call(0x801BE760u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE760
  c->r[0]=c->lr; // 801BE764
  W32(c->r[1]+0x00000124u,c->r[0]); // 801BE768
  c->r[0]=0u+0x00001002u; // 801BE76C
  c->r[3]=c->r[1]+0x00000014u; // 801BE770
  c->r[4]=c->r[1]+0x00000010u; // 801BE774
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801BE778
  c->r[31]=0u+0x00000000u; // 801BE77C
  W32(c->r[1]+0x00000118u,c->r[30]); // 801BE780
  W32(c->r[1]+0x00000010u,c->r[31]); // 801BE784
  W16(c->r[1]+0x00000008u,c->r[0]); // 801BE788
  c->lr=0x801BE790u; f_801D238C(c); // 801BE78C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801BE790
  if (crb(c,2)) { goto L_801BE7E0; } // 801BE794
  c->r[30]=c->r[1]+0x00000016u; // 801BE798
  c->r[4]=0u+0x00000000u; // 801BE79C
  c->r[3]=c->r[30]|c->r[30]; // 801BE7A0
  c->r[5]=0u+0x000000FAu; // 801BE7A4
  c->lr=0x801BE7ACu; f_80004688(c); // 801BE7A8
  c->r[0]=0u+0x00000001u; // 801BE7AC
  c->r[3]=0u+0x0000000Fu; // 801BE7B0
  W16(c->r[1]+0x00000016u,c->r[3]); // 801BE7B4
  c->r[3]=c->r[30]|c->r[30]; // 801BE7B8
  c->r[4]=c->r[1]+0x00000010u; // 801BE7BC
  W16(c->r[1]+0x00000018u,c->r[0]); // 801BE7C0
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 801BE7C4
  c->lr=0x801BE7CCu; f_801D202C(c); // 801BE7C8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801BE7CC
  if (crb(c,2)) { goto L_801BE7E0; } // 801BE7D0
  W32(c->r[1]+0x00000010u,c->r[31]); // 801BE7D4
  c->r[3]=0u+0x00000000u; // 801BE7D8
  goto L_801BE828; // 801BE7DC
L_801BE7E0:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801BE7E0
  c->r[6]=c->r[1]+0x00000008u; // 801BE7E4
  c->r[4]=0u+0x00000005u; // 801BE7E8
  c->r[5]=0u+0x00000001u; // 801BE7EC
  c->lr=0x801BE7F4u; f_801D309C(c); // 801BE7F0
  c->r[0]=0u+0x00000000u; // 801BE7F4
  c->r[4]=0u+0x00000001u; // 801BE7F8
  c->r[3]=0u+0x00010000u; // 801BE7FC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801BE800
  c->r[0]=c->r[3]+0xFFFF8001u; // 801BE804
  c->r[3]=R32(c->r[1]+0x00000010u); // 801BE808
  W8(c->r[1]+0x0000000Du,c->r[4]); // 801BE80C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE810
  c->r[7]=c->r[1]+0x0000000Cu; // 801BE814
  c->r[5]=0u+0x00000001u; // 801BE818
  c->r[6]=0u+0x00000002u; // 801BE81C
  c->lr=0x801BE824u; f_801D2D04(c); // 801BE820
  c->r[3]=0u+0x00000001u; // 801BE824
L_801BE828:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 801BE828
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801BE82C
  c->r[30]=R32(c->r[1]+0x00000118u); // 801BE830
  c->lr=c->r[0]; // 801BE834
  c->r[1]=c->r[1]+0x00000120u; // 801BE838
  return; // 801BE83C
}

// GAP_Init
void f_801BE840(Ctx* __restrict c) {
  trace_call(0x801BE840u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE840
  c->r[0]=c->lr; // 801BE844
  c->r[4]=0u+0x00000000u; // 801BE848
  c->r[5]=0u+0x000003ACu; // 801BE84C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE850
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE854
  c->r[31]=0u+0x803D0000u; // 801BE858
  c->r[3]=c->r[31]+0xFFFFA8E0u; // 801BE85C
  c->lr=0x801BE864u; f_80004688(c); // 801BE860
  c->r[5]=0u+0x801C0000u; // 801BE864
  c->r[3]=0u+0x801C0000u; // 801BE868
  c->r[5]=c->r[5]+0xFFFFF5B4u; // 801BE86C
  c->r[4]=c->r[31]+0xFFFFA8E0u; // 801BE870
  c->r[3]=c->r[3]+0xFFFFF5C0u; // 801BE874
  c->r[0]=0u+0x00000005u; // 801BE878
  W32(c->r[4]+0x00000020u,c->r[5]); // 801BE87C
  W32(c->r[4]+0x00000024u,c->r[3]); // 801BE880
  W8(c->r[4]+0x00000028u,c->r[0]); // 801BE884
  c->lr=0x801BE88Cu; f_801BE8A0(c); // 801BE888
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE88C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE890
  c->lr=c->r[0]; // 801BE894
  c->r[1]=c->r[1]+0x00000010u; // 801BE898
  return; // 801BE89C
}

// gap_conn_init
void f_801BE8A0(Ctx* __restrict c) {
  trace_call(0x801BE8A0u);
  c->r[10]=0u+0x801C0000u; // 801BE8A0
  c->r[9]=0u+0x803D0000u; // 801BE8A4
  c->r[8]=0u+0x801C0000u; // 801BE8A8
  c->r[7]=0u+0x801C0000u; // 801BE8AC
  c->r[6]=0u+0x801C0000u; // 801BE8B0
  c->r[5]=0u+0x801C0000u; // 801BE8B4
  c->r[4]=0u+0x801C0000u; // 801BE8B8
  c->r[3]=0u+0x801C0000u; // 801BE8BC
  c->r[10]=c->r[10]+0xFFFFE910u; // 801BE8C0
  c->r[9]=c->r[9]+0xFFFFA8E0u; // 801BE8C4
  c->r[0]=0u+0x00000000u; // 801BE8C8
  c->r[8]=c->r[8]+0xFFFFEA9Cu; // 801BE8CC
  c->r[7]=c->r[7]+0xFFFFEC78u; // 801BE8D0
  c->r[6]=c->r[6]+0xFFFFEDB4u; // 801BE8D4
  c->r[5]=c->r[5]+0xFFFFEFA0u; // 801BE8D8
  c->r[4]=c->r[4]+0xFFFFF198u; // 801BE8DC
  c->r[3]=c->r[3]+0xFFFFF2A8u; // 801BE8E0
  W32(c->r[9]+0x00000084u,c->r[10]); // 801BE8E4
  W32(c->r[9]+0x00000088u,c->r[8]); // 801BE8E8
  W32(c->r[9]+0x0000008Cu,c->r[0]); // 801BE8EC
  W32(c->r[9]+0x00000090u,c->r[7]); // 801BE8F0
  W32(c->r[9]+0x00000094u,c->r[6]); // 801BE8F4
  W32(c->r[9]+0x00000098u,c->r[5]); // 801BE8F8
  W32(c->r[9]+0x0000009Cu,c->r[0]); // 801BE8FC
  W32(c->r[9]+0x000000A0u,c->r[0]); // 801BE900
  W32(c->r[9]+0x000000A4u,c->r[4]); // 801BE904
  W32(c->r[9]+0x000000A8u,c->r[3]); // 801BE908
  return; // 801BE90C
}

// gap_connect_ind
void f_801BE910(Ctx* __restrict c) {
  trace_call(0x801BE910u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE910
  c->r[0]=c->lr; // 801BE914
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BE918
  c->r[11]=c->r[1]+0x00000020u; // 801BE91C
  c->lr=0x801BE924u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BE920
  c->r[7]=0u+0x803D0000u; // 801BE924
  c->r[26]=c->r[3]|c->r[3]; // 801BE928
  c->r[7]=c->r[7]+0xFFFFA8E0u; // 801BE92C
  c->r[31]=c->r[4]|c->r[4]; // 801BE930
  c->r[27]=c->r[5]|c->r[5]; // 801BE934
  c->r[28]=c->r[6]|c->r[6]; // 801BE938
  c->r[29]=c->r[7]+0x000000ACu; // 801BE93C
  c->r[30]=0u+0x00000000u; // 801BE940
L_801BE944:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801BE944
  cmpu(c,0,c->r[0],0x00000001u); // 801BE948
  if (!crb(c,2)) { goto L_801BE980; } // 801BE94C
  c->r[0]=R16(c->r[29]+0x00000010u); // 801BE950
  cmpu(c,0,c->r[0],c->r[27]); // 801BE954
  if (!crb(c,2)) { goto L_801BE980; } // 801BE958
  c->r[0]=R8(c->r[29]+0x00000008u); // 801BE95C
  cmps(c,0,(int32_t)c->r[0],0); // 801BE960
  if (crb(c,2)) { goto L_801BE990; } // 801BE964
  c->r[3]=c->r[26]|c->r[26]; // 801BE968
  c->r[4]=c->r[29]+0x00000009u; // 801BE96C
  c->r[5]=0u+0x00000006u; // 801BE970
  c->lr=0x801BE978u; f_8018C170(c); // 801BE974
  cmps(c,0,(int32_t)c->r[3],0); // 801BE978
  if (crb(c,2)) { goto L_801BE990; } // 801BE97C
L_801BE980:;
  c->r[30]=c->r[30]+0x00000001u; // 801BE980
  c->r[29]=c->r[29]+0x00000060u; // 801BE984
  cmpu(c,0,c->r[30],0x00000008u); // 801BE988
  if (crb(c,0)) { IRQCHK(c); goto L_801BE944; } // 801BE98C
L_801BE990:;
  c->r[0]=rotl(c->r[30],0)&0x0000FFFFu; // 801BE990
  cmpu(c,0,c->r[0],0x00000008u); // 801BE994
  if (!crb(c,2)) { goto L_801BEA18; } // 801BE998
  c->r[3]=0u+0x803D0000u; // 801BE99C
  c->r[3]=c->r[3]+0xFFFFA8E0u; // 801BE9A0
  c->r[0]=R8(c->r[3]+0x00000028u); // 801BE9A4
  cmpu(c,0,c->r[0],0x00000002u); // 801BE9A8
  if (crb(c,0)) { goto L_801BE9C0; } // 801BE9AC
  c->r[3]=0u+0x000E0000u; // 801BE9B0
  c->r[4]=c->r[13]+0xFFFF94A0u; // 801BE9B4
  c->r[3]=c->r[3]+0x00000001u; // 801BE9B8
  c->lr=0x801BE9C0u; f_801ACB20(c); // 801BE9BC
L_801BE9C0:;
  c->r[3]=0u+0x803D0000u; // 801BE9C0
  c->r[3]=c->r[3]+0xFFFFA8E0u; // 801BE9C4
  c->r[0]=R8(c->r[3]+0x00000028u); // 801BE9C8
  cmpu(c,0,c->r[0],0x00000002u); // 801BE9CC
  if (crb(c,0)) { goto L_801BE9E8; } // 801BE9D0
  c->r[3]=0u+0x000E0000u; // 801BE9D4
  c->r[4]=0u+0x80330000u; // 801BE9D8
  c->r[3]=c->r[3]+0x00000001u; // 801BE9DC
  c->r[4]=c->r[4]+0x000039D8u; // 801BE9E0
  c->lr=0x801BE9E8u; f_801ACB20(c); // 801BE9E4
L_801BE9E8:;
  c->r[3]=0u+0x803D0000u; // 801BE9E8
  c->r[3]=c->r[3]+0xFFFFA8E0u; // 801BE9EC
  c->r[0]=R8(c->r[3]+0x00000028u); // 801BE9F0
  cmpu(c,0,c->r[0],0x00000002u); // 801BE9F4
  if (crb(c,0)) { goto L_801BEA0C; } // 801BE9F8
  c->r[3]=0u+0x000E0000u; // 801BE9FC
  c->r[4]=c->r[13]+0xFFFF94A0u; // 801BEA00
  c->r[3]=c->r[3]+0x00000001u; // 801BEA04
  c->lr=0x801BEA0Cu; f_801ACB20(c); // 801BEA08
L_801BEA0C:;
  c->r[3]=c->r[31]|c->r[31]; // 801BEA0C
  c->lr=0x801BEA14u; f_801C5BB8(c); // 801BEA10
  goto L_801BEA84; // 801BEA14
L_801BEA18:;
  c->r[0]=0u+0x00000003u; // 801BEA18
  c->r[4]=c->r[26]|c->r[26]; // 801BEA1C
  W8(c->r[29]+0x00000000u,c->r[0]); // 801BEA20
  c->r[3]=c->r[29]+0x00000009u; // 801BEA24
  c->r[5]=0u+0x00000006u; // 801BEA28
  c->lr=0x801BEA30u; f_80004338(c); // 801BEA2C
  W16(c->r[29]+0x00000006u,c->r[31]); // 801BEA30
  c->r[3]=c->r[26]|c->r[26]; // 801BEA34
  c->r[4]=c->r[28]|c->r[28]; // 801BEA38
  c->r[5]=c->r[31]|c->r[31]; // 801BEA3C
  c->r[6]=0u+0x00000000u; // 801BEA40
  c->r[7]=0u+0x00000000u; // 801BEA44
  c->lr=0x801BEA4Cu; f_801C58A0(c); // 801BEA48
  c->r[3]=0u+0x803D0000u; // 801BEA4C
  c->r[3]=c->r[3]+0xFFFFA8E0u; // 801BEA50
  c->r[0]=R8(c->r[3]+0x00000028u); // 801BEA54
  cmpu(c,0,c->r[0],0x00000004u); // 801BEA58
  if (crb(c,0)) { goto L_801BEA78; } // 801BEA5C
  c->r[3]=0u+0x000E0000u; // 801BEA60
  c->r[4]=0u+0x80330000u; // 801BEA64
  c->r[5]=R16(c->r[29]+0x00000006u); // 801BEA68
  c->r[3]=c->r[3]+0x00000003u; // 801BEA6C
  c->r[4]=c->r[4]+0x00003A1Cu; // 801BEA70
  c->lr=0x801BEA78u; f_801ACB38(c); // 801BEA74
L_801BEA78:;
  c->r[3]=c->r[31]|c->r[31]; // 801BEA78
  c->r[4]=c->r[29]+0x00000024u; // 801BEA7C
  c->lr=0x801BEA84u; f_801C5A30(c); // 801BEA80
L_801BEA84:;
  c->r[11]=c->r[1]+0x00000020u; // 801BEA84
  c->lr=0x801BEA8Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BEA88
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BEA8C
  c->lr=c->r[0]; // 801BEA90
  c->r[1]=c->r[1]+0x00000020u; // 801BEA94
  return; // 801BEA98
}

// gap_connect_cfm
void f_801BEA9C(Ctx* __restrict c) {
  trace_call(0x801BEA9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEA9C
  c->r[0]=c->lr; // 801BEAA0
  c->r[5]=0u+0x803D0000u; // 801BEAA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BEAA8
  c->r[0]=0u+0x00000002u; // 801BEAAC
  c->r[5]=c->r[5]+0xFFFFA8E0u; // 801BEAB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BEAB4
  c->r[31]=c->r[5]+0x000000ACu; // 801BEAB8
  c->r[5]=0u+0x00000000u; // 801BEABC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BEAC0
  c->ctr=c->r[0]; // 801BEAC4
L_801BEAC8:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BEAC8
  cmps(c,0,(int32_t)c->r[0],0); // 801BEACC
  if (crb(c,2)) { goto L_801BEAE4; } // 801BEAD0
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BEAD4
  cmpu(c,0,c->r[0],c->r[3]); // 801BEAD8
  if (!crb(c,2)) { goto L_801BEAE4; } // 801BEADC
  goto L_801BEB54; // 801BEAE0
L_801BEAE4:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BEAE4
  c->r[5]=c->r[5]+0x00000001u; // 801BEAE8
  cmps(c,0,(int32_t)c->r[0],0); // 801BEAEC
  if (crb(c,2)) { goto L_801BEB04; } // 801BEAF0
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BEAF4
  cmpu(c,0,c->r[0],c->r[3]); // 801BEAF8
  if (!crb(c,2)) { goto L_801BEB04; } // 801BEAFC
  goto L_801BEB54; // 801BEB00
L_801BEB04:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BEB04
  c->r[5]=c->r[5]+0x00000001u; // 801BEB08
  cmps(c,0,(int32_t)c->r[0],0); // 801BEB0C
  if (crb(c,2)) { goto L_801BEB24; } // 801BEB10
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BEB14
  cmpu(c,0,c->r[0],c->r[3]); // 801BEB18
  if (!crb(c,2)) { goto L_801BEB24; } // 801BEB1C
  goto L_801BEB54; // 801BEB20
L_801BEB24:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BEB24
  c->r[5]=c->r[5]+0x00000001u; // 801BEB28
  cmps(c,0,(int32_t)c->r[0],0); // 801BEB2C
  if (crb(c,2)) { goto L_801BEB44; } // 801BEB30
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BEB34
  cmpu(c,0,c->r[0],c->r[3]); // 801BEB38
  if (!crb(c,2)) { goto L_801BEB44; } // 801BEB3C
  goto L_801BEB54; // 801BEB40
L_801BEB44:;
  c->r[5]=c->r[5]+0x00000001u; // 801BEB44
  c->r[31]=c->r[31]+0x00000060u; // 801BEB48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BEAC8; } // 801BEB4C
  c->r[31]=0u+0x00000000u; // 801BEB50
L_801BEB54:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BEB54
  if (crb(c,2)) { goto L_801BEC60; } // 801BEB58
  cmps(c,0,(int32_t)c->r[4],0); // 801BEB5C
  if (!crb(c,2)) { goto L_801BEB84; } // 801BEB60
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BEB64
  cmpu(c,0,c->r[0],0x00000002u); // 801BEB68
  if (!crb(c,2)) { goto L_801BEB84; } // 801BEB6C
  c->r[0]=0u+0x00000003u; // 801BEB70
  c->r[4]=c->r[31]+0x00000024u; // 801BEB74
  W8(c->r[31]+0x00000000u,c->r[0]); // 801BEB78
  c->lr=0x801BEB80u; f_801C5A30(c); // 801BEB7C
  goto L_801BEC60; // 801BEB80
L_801BEB84:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 801BEB84
  cmps(c,0,(int32_t)c->r[12],0); // 801BEB88
  if (crb(c,2)) { goto L_801BEBA0; } // 801BEB8C
  c->r[3]=R16(c->r[31]+0x00000004u); // 801BEB90
  c->r[4]=0u+0x00000101u; // 801BEB94
  c->ctr=c->r[12]; // 801BEB98
  if (true) { c->lr=0x801BEBA0u; dispatch(c,c->ctr); } // 801BEB9C
L_801BEBA0:;
  c->r[30]=R16(c->r[31]+0x00000010u); // 801BEBA0
  goto L_801BEBB4; // 801BEBA4
L_801BEBA8:;
  c->r[3]=c->r[31]+0x00000014u; // 801BEBA8
  c->lr=0x801BEBB0u; f_801AA8C4(c); // 801BEBAC
  c->lr=0x801BEBB4u; f_801AA228(c); // 801BEBB0
L_801BEBB4:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801BEBB4
  cmps(c,0,(int32_t)c->r[0],0); // 801BEBB8
  if (!crb(c,2)) { IRQCHK(c); goto L_801BEBA8; } // 801BEBBC
  c->r[3]=0u+0x803D0000u; // 801BEBC0
  c->r[4]=0u+0x00000000u; // 801BEBC4
  c->r[3]=c->r[3]+0xFFFFA8E0u; // 801BEBC8
  c->r[0]=0u+0x00000002u; // 801BEBCC
  W8(c->r[31]+0x00000000u,c->r[4]); // 801BEBD0
  c->r[4]=c->r[3]+0x000000ACu; // 801BEBD4
  c->r[3]=0u+0x00000000u; // 801BEBD8
  c->ctr=c->r[0]; // 801BEBDC
L_801BEBE0:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801BEBE0
  cmps(c,0,(int32_t)c->r[0],0); // 801BEBE4
  if (crb(c,2)) { goto L_801BEBF8; } // 801BEBE8
  c->r[0]=R16(c->r[4]+0x00000010u); // 801BEBEC
  cmpu(c,0,c->r[0],c->r[30]); // 801BEBF0
  if (crb(c,2)) { goto L_801BEC60; } // 801BEBF4
L_801BEBF8:;
  c->r[0]=R8(c->r[4]+0x00000060u); // 801BEBF8
  c->r[3]=c->r[3]+0x00000001u; // 801BEBFC
  cmps(c,0,(int32_t)c->r[0],0); // 801BEC00
  if (crb(c,2)) { goto L_801BEC14; } // 801BEC04
  c->r[0]=R16(c->r[4]+0x00000070u); // 801BEC08
  cmpu(c,0,c->r[0],c->r[30]); // 801BEC0C
  if (crb(c,2)) { goto L_801BEC60; } // 801BEC10
L_801BEC14:;
  c->r[0]=R8(c->r[4]+0x000000C0u); // 801BEC14
  c->r[3]=c->r[3]+0x00000001u; // 801BEC18
  cmps(c,0,(int32_t)c->r[0],0); // 801BEC1C
  if (crb(c,2)) { goto L_801BEC30; } // 801BEC20
  c->r[0]=R16(c->r[4]+0x000000D0u); // 801BEC24
  cmpu(c,0,c->r[0],c->r[30]); // 801BEC28
  if (crb(c,2)) { goto L_801BEC60; } // 801BEC2C
L_801BEC30:;
  c->r[0]=R8(c->r[4]+0x00000120u); // 801BEC30
  c->r[3]=c->r[3]+0x00000001u; // 801BEC34
  cmps(c,0,(int32_t)c->r[0],0); // 801BEC38
  if (crb(c,2)) { goto L_801BEC4C; } // 801BEC3C
  c->r[0]=R16(c->r[4]+0x00000130u); // 801BEC40
  cmpu(c,0,c->r[0],c->r[30]); // 801BEC44
  if (crb(c,2)) { goto L_801BEC60; } // 801BEC48
L_801BEC4C:;
  c->r[3]=c->r[3]+0x00000001u; // 801BEC4C
  c->r[4]=c->r[4]+0x00000180u; // 801BEC50
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BEBE0; } // 801BEC54
  c->r[3]=c->r[30]|c->r[30]; // 801BEC58
  c->lr=0x801BEC60u; f_801C55DC(c); // 801BEC5C
L_801BEC60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BEC60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BEC64
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BEC68
  c->lr=c->r[0]; // 801BEC6C
  c->r[1]=c->r[1]+0x00000010u; // 801BEC70
  return; // 801BEC74
}

// gap_config_ind
void f_801BEC78(Ctx* __restrict c) {
  trace_call(0x801BEC78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEC78
  c->r[0]=c->lr; // 801BEC7C
  c->r[5]=0u+0x803D0000u; // 801BEC80
  c->r[6]=0u+0x00000000u; // 801BEC84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BEC88
  c->r[0]=0u+0x00000002u; // 801BEC8C
  c->r[5]=c->r[5]+0xFFFFA8E0u; // 801BEC90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BEC94
  c->r[31]=c->r[5]+0x000000ACu; // 801BEC98
  c->ctr=c->r[0]; // 801BEC9C
L_801BECA0:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BECA0
  cmps(c,0,(int32_t)c->r[0],0); // 801BECA4
  if (crb(c,2)) { goto L_801BECBC; } // 801BECA8
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BECAC
  cmpu(c,0,c->r[0],c->r[3]); // 801BECB0
  if (!crb(c,2)) { goto L_801BECBC; } // 801BECB4
  goto L_801BED2C; // 801BECB8
L_801BECBC:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BECBC
  c->r[6]=c->r[6]+0x00000001u; // 801BECC0
  cmps(c,0,(int32_t)c->r[0],0); // 801BECC4
  if (crb(c,2)) { goto L_801BECDC; } // 801BECC8
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BECCC
  cmpu(c,0,c->r[0],c->r[3]); // 801BECD0
  if (!crb(c,2)) { goto L_801BECDC; } // 801BECD4
  goto L_801BED2C; // 801BECD8
L_801BECDC:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BECDC
  c->r[6]=c->r[6]+0x00000001u; // 801BECE0
  cmps(c,0,(int32_t)c->r[0],0); // 801BECE4
  if (crb(c,2)) { goto L_801BECFC; } // 801BECE8
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BECEC
  cmpu(c,0,c->r[0],c->r[3]); // 801BECF0
  if (!crb(c,2)) { goto L_801BECFC; } // 801BECF4
  goto L_801BED2C; // 801BECF8
L_801BECFC:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BECFC
  c->r[6]=c->r[6]+0x00000001u; // 801BED00
  cmps(c,0,(int32_t)c->r[0],0); // 801BED04
  if (crb(c,2)) { goto L_801BED1C; } // 801BED08
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BED0C
  cmpu(c,0,c->r[0],c->r[3]); // 801BED10
  if (!crb(c,2)) { goto L_801BED1C; } // 801BED14
  goto L_801BED2C; // 801BED18
L_801BED1C:;
  c->r[6]=c->r[6]+0x00000001u; // 801BED1C
  c->r[31]=c->r[31]+0x00000060u; // 801BED20
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BECA0; } // 801BED24
  c->r[31]=0u+0x00000000u; // 801BED28
L_801BED2C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BED2C
  if (crb(c,2)) { goto L_801BEDA0; } // 801BED30
  c->r[0]=R8(c->r[4]+0x00000002u); // 801BED34
  cmps(c,0,(int32_t)c->r[0],0); // 801BED38
  if (crb(c,2)) { goto L_801BED4C; } // 801BED3C
  c->r[0]=R16(c->r[4]+0x00000004u); // 801BED40
  cmpu(c,0,c->r[0],0x0000069Bu); // 801BED44
  if (!crb(c,1)) { goto L_801BED58; } // 801BED48
L_801BED4C:;
  c->r[0]=0u+0x0000069Bu; // 801BED4C
  W16(c->r[31]+0x00000012u,c->r[0]); // 801BED50
  goto L_801BED5C; // 801BED54
L_801BED58:;
  W16(c->r[31]+0x00000012u,c->r[0]); // 801BED58
L_801BED5C:;
  c->r[0]=0u+0x00000000u; // 801BED5C
  W8(c->r[4]+0x00000020u,c->r[0]); // 801BED60
  W8(c->r[4]+0x00000002u,c->r[0]); // 801BED64
  W16(c->r[4]+0x00000000u,c->r[0]); // 801BED68
  c->lr=0x801BED70u; f_801C5AE8(c); // 801BED6C
  c->r[0]=R8(c->r[31]+0x00000001u); // 801BED70
  c->r[3]=c->r[0]|0x00000002u; // 801BED74
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801BED78
  W8(c->r[31]+0x00000001u,c->r[3]); // 801BED7C
  if (crb(c,2)) { goto L_801BEDA0; } // 801BED80
  c->r[0]=0u+0x00000004u; // 801BED84
  c->r[4]=0u+0x00000100u; // 801BED88
  W8(c->r[31]+0x00000000u,c->r[0]); // 801BED8C
  c->r[12]=R32(c->r[31]+0x00000020u); // 801BED90
  c->r[3]=R16(c->r[31]+0x00000004u); // 801BED94
  c->ctr=c->r[12]; // 801BED98
  if (true) { c->lr=0x801BEDA0u; dispatch(c,c->ctr); } // 801BED9C
L_801BEDA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BEDA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BEDA4
  c->lr=c->r[0]; // 801BEDA8
  c->r[1]=c->r[1]+0x00000010u; // 801BEDAC
  return; // 801BEDB0
}

// gap_config_cfm
void f_801BEDB4(Ctx* __restrict c) {
  trace_call(0x801BEDB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEDB4
  c->r[0]=c->lr; // 801BEDB8
  c->r[5]=0u+0x803D0000u; // 801BEDBC
  c->r[6]=0u+0x00000000u; // 801BEDC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BEDC4
  c->r[0]=0u+0x00000002u; // 801BEDC8
  c->r[5]=c->r[5]+0xFFFFA8E0u; // 801BEDCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BEDD0
  c->r[31]=c->r[5]+0x000000ACu; // 801BEDD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BEDD8
  c->ctr=c->r[0]; // 801BEDDC
L_801BEDE0:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BEDE0
  cmps(c,0,(int32_t)c->r[0],0); // 801BEDE4
  if (crb(c,2)) { goto L_801BEDFC; } // 801BEDE8
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BEDEC
  cmpu(c,0,c->r[0],c->r[3]); // 801BEDF0
  if (!crb(c,2)) { goto L_801BEDFC; } // 801BEDF4
  goto L_801BEE6C; // 801BEDF8
L_801BEDFC:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BEDFC
  c->r[6]=c->r[6]+0x00000001u; // 801BEE00
  cmps(c,0,(int32_t)c->r[0],0); // 801BEE04
  if (crb(c,2)) { goto L_801BEE1C; } // 801BEE08
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BEE0C
  cmpu(c,0,c->r[0],c->r[3]); // 801BEE10
  if (!crb(c,2)) { goto L_801BEE1C; } // 801BEE14
  goto L_801BEE6C; // 801BEE18
L_801BEE1C:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BEE1C
  c->r[6]=c->r[6]+0x00000001u; // 801BEE20
  cmps(c,0,(int32_t)c->r[0],0); // 801BEE24
  if (crb(c,2)) { goto L_801BEE3C; } // 801BEE28
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BEE2C
  cmpu(c,0,c->r[0],c->r[3]); // 801BEE30
  if (!crb(c,2)) { goto L_801BEE3C; } // 801BEE34
  goto L_801BEE6C; // 801BEE38
L_801BEE3C:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BEE3C
  c->r[6]=c->r[6]+0x00000001u; // 801BEE40
  cmps(c,0,(int32_t)c->r[0],0); // 801BEE44
  if (crb(c,2)) { goto L_801BEE5C; } // 801BEE48
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BEE4C
  cmpu(c,0,c->r[0],c->r[3]); // 801BEE50
  if (!crb(c,2)) { goto L_801BEE5C; } // 801BEE54
  goto L_801BEE6C; // 801BEE58
L_801BEE5C:;
  c->r[6]=c->r[6]+0x00000001u; // 801BEE5C
  c->r[31]=c->r[31]+0x00000060u; // 801BEE60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BEDE0; } // 801BEE64
  c->r[31]=0u+0x00000000u; // 801BEE68
L_801BEE6C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BEE6C
  if (crb(c,2)) { goto L_801BEF88; } // 801BEE70
  c->r[0]=R16(c->r[4]+0x00000000u); // 801BEE74
  cmps(c,0,(int32_t)c->r[0],0); // 801BEE78
  if (!crb(c,2)) { goto L_801BEEB4; } // 801BEE7C
  c->r[0]=R8(c->r[31]+0x00000001u); // 801BEE80
  c->r[3]=c->r[0]|0x00000004u; // 801BEE84
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801BEE88
  W8(c->r[31]+0x00000001u,c->r[3]); // 801BEE8C
  if (crb(c,2)) { goto L_801BEF88; } // 801BEE90
  c->r[0]=0u+0x00000004u; // 801BEE94
  c->r[4]=0u+0x00000100u; // 801BEE98
  W8(c->r[31]+0x00000000u,c->r[0]); // 801BEE9C
  c->r[12]=R32(c->r[31]+0x00000020u); // 801BEEA0
  c->r[3]=R16(c->r[31]+0x00000004u); // 801BEEA4
  c->ctr=c->r[12]; // 801BEEA8
  if (true) { c->lr=0x801BEEB0u; dispatch(c,c->ctr); } // 801BEEAC
  goto L_801BEF88; // 801BEEB0
L_801BEEB4:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 801BEEB4
  c->r[4]=0u+0x00000101u; // 801BEEB8
  c->r[3]=R16(c->r[31]+0x00000004u); // 801BEEBC
  c->ctr=c->r[12]; // 801BEEC0
  if (true) { c->lr=0x801BEEC8u; dispatch(c,c->ctr); } // 801BEEC4
  c->r[30]=R16(c->r[31]+0x00000010u); // 801BEEC8
  goto L_801BEEDC; // 801BEECC
L_801BEED0:;
  c->r[3]=c->r[31]+0x00000014u; // 801BEED0
  c->lr=0x801BEED8u; f_801AA8C4(c); // 801BEED4
  c->lr=0x801BEEDCu; f_801AA228(c); // 801BEED8
L_801BEEDC:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801BEEDC
  cmps(c,0,(int32_t)c->r[0],0); // 801BEEE0
  if (!crb(c,2)) { IRQCHK(c); goto L_801BEED0; } // 801BEEE4
  c->r[3]=0u+0x803D0000u; // 801BEEE8
  c->r[4]=0u+0x00000000u; // 801BEEEC
  c->r[3]=c->r[3]+0xFFFFA8E0u; // 801BEEF0
  c->r[0]=0u+0x00000002u; // 801BEEF4
  W8(c->r[31]+0x00000000u,c->r[4]); // 801BEEF8
  c->r[4]=c->r[3]+0x000000ACu; // 801BEEFC
  c->r[3]=0u+0x00000000u; // 801BEF00
  c->ctr=c->r[0]; // 801BEF04
L_801BEF08:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801BEF08
  cmps(c,0,(int32_t)c->r[0],0); // 801BEF0C
  if (crb(c,2)) { goto L_801BEF20; } // 801BEF10
  c->r[0]=R16(c->r[4]+0x00000010u); // 801BEF14
  cmpu(c,0,c->r[0],c->r[30]); // 801BEF18
  if (crb(c,2)) { goto L_801BEF88; } // 801BEF1C
L_801BEF20:;
  c->r[0]=R8(c->r[4]+0x00000060u); // 801BEF20
  c->r[3]=c->r[3]+0x00000001u; // 801BEF24
  cmps(c,0,(int32_t)c->r[0],0); // 801BEF28
  if (crb(c,2)) { goto L_801BEF3C; } // 801BEF2C
  c->r[0]=R16(c->r[4]+0x00000070u); // 801BEF30
  cmpu(c,0,c->r[0],c->r[30]); // 801BEF34
  if (crb(c,2)) { goto L_801BEF88; } // 801BEF38
L_801BEF3C:;
  c->r[0]=R8(c->r[4]+0x000000C0u); // 801BEF3C
  c->r[3]=c->r[3]+0x00000001u; // 801BEF40
  cmps(c,0,(int32_t)c->r[0],0); // 801BEF44
  if (crb(c,2)) { goto L_801BEF58; } // 801BEF48
  c->r[0]=R16(c->r[4]+0x000000D0u); // 801BEF4C
  cmpu(c,0,c->r[0],c->r[30]); // 801BEF50
  if (crb(c,2)) { goto L_801BEF88; } // 801BEF54
L_801BEF58:;
  c->r[0]=R8(c->r[4]+0x00000120u); // 801BEF58
  c->r[3]=c->r[3]+0x00000001u; // 801BEF5C
  cmps(c,0,(int32_t)c->r[0],0); // 801BEF60
  if (crb(c,2)) { goto L_801BEF74; } // 801BEF64
  c->r[0]=R16(c->r[4]+0x00000130u); // 801BEF68
  cmpu(c,0,c->r[0],c->r[30]); // 801BEF6C
  if (crb(c,2)) { goto L_801BEF88; } // 801BEF70
L_801BEF74:;
  c->r[3]=c->r[3]+0x00000001u; // 801BEF74
  c->r[4]=c->r[4]+0x00000180u; // 801BEF78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BEF08; } // 801BEF7C
  c->r[3]=c->r[30]|c->r[30]; // 801BEF80
  c->lr=0x801BEF88u; f_801C55DC(c); // 801BEF84
L_801BEF88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BEF88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BEF8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BEF90
  c->lr=c->r[0]; // 801BEF94
  c->r[1]=c->r[1]+0x00000010u; // 801BEF98
  return; // 801BEF9C
}

// gap_disconnect_ind
void f_801BEFA0(Ctx* __restrict c) {
  trace_call(0x801BEFA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEFA0
  c->r[0]=c->lr; // 801BEFA4
  c->r[5]=0u+0x803D0000u; // 801BEFA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BEFAC
  c->r[5]=c->r[5]+0xFFFFA8E0u; // 801BEFB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BEFB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BEFB8
  c->r[30]=c->r[4]|c->r[4]; // 801BEFBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BEFC0
  c->r[29]=c->r[3]|c->r[3]; // 801BEFC4
  c->r[0]=R8(c->r[5]+0x00000028u); // 801BEFC8
  cmpu(c,0,c->r[0],0x00000004u); // 801BEFCC
  if (crb(c,0)) { goto L_801BEFEC; } // 801BEFD0
  c->r[3]=0u+0x000E0000u; // 801BEFD4
  c->r[4]=0u+0x80330000u; // 801BEFD8
  c->r[5]=c->r[29]|c->r[29]; // 801BEFDC
  c->r[3]=c->r[3]+0x00000003u; // 801BEFE0
  c->r[4]=c->r[4]+0x00003A48u; // 801BEFE4
  c->lr=0x801BEFECu; f_801ACB38(c); // 801BEFE8
L_801BEFEC:;
  c->r[3]=0u+0x803D0000u; // 801BEFEC
  c->r[0]=0u+0x00000002u; // 801BEFF0
  c->r[3]=c->r[3]+0xFFFFA8E0u; // 801BEFF4
  c->r[4]=0u+0x00000000u; // 801BEFF8
  c->r[31]=c->r[3]+0x000000ACu; // 801BEFFC
  c->ctr=c->r[0]; // 801BF000
L_801BF004:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BF004
  cmps(c,0,(int32_t)c->r[0],0); // 801BF008
  if (crb(c,2)) { goto L_801BF020; } // 801BF00C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BF010
  cmpu(c,0,c->r[0],c->r[29]); // 801BF014
  if (!crb(c,2)) { goto L_801BF020; } // 801BF018
  goto L_801BF090; // 801BF01C
L_801BF020:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BF020
  c->r[4]=c->r[4]+0x00000001u; // 801BF024
  cmps(c,0,(int32_t)c->r[0],0); // 801BF028
  if (crb(c,2)) { goto L_801BF040; } // 801BF02C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BF030
  cmpu(c,0,c->r[0],c->r[29]); // 801BF034
  if (!crb(c,2)) { goto L_801BF040; } // 801BF038
  goto L_801BF090; // 801BF03C
L_801BF040:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BF040
  c->r[4]=c->r[4]+0x00000001u; // 801BF044
  cmps(c,0,(int32_t)c->r[0],0); // 801BF048
  if (crb(c,2)) { goto L_801BF060; } // 801BF04C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BF050
  cmpu(c,0,c->r[0],c->r[29]); // 801BF054
  if (!crb(c,2)) { goto L_801BF060; } // 801BF058
  goto L_801BF090; // 801BF05C
L_801BF060:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BF060
  c->r[4]=c->r[4]+0x00000001u; // 801BF064
  cmps(c,0,(int32_t)c->r[0],0); // 801BF068
  if (crb(c,2)) { goto L_801BF080; } // 801BF06C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BF070
  cmpu(c,0,c->r[0],c->r[29]); // 801BF074
  if (!crb(c,2)) { goto L_801BF080; } // 801BF078
  goto L_801BF090; // 801BF07C
L_801BF080:;
  c->r[4]=c->r[4]+0x00000001u; // 801BF080
  c->r[31]=c->r[31]+0x00000060u; // 801BF084
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BF004; } // 801BF088
  c->r[31]=0u+0x00000000u; // 801BF08C
L_801BF090:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BF090
  if (crb(c,2)) { goto L_801BF17C; } // 801BF094
  cmps(c,0,(int32_t)c->r[30],0); // 801BF098
  if (crb(c,2)) { goto L_801BF0A8; } // 801BF09C
  c->r[3]=c->r[29]|c->r[29]; // 801BF0A0
  c->lr=0x801BF0A8u; f_801C5C5C(c); // 801BF0A4
L_801BF0A8:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 801BF0A8
  c->r[4]=0u+0x00000101u; // 801BF0AC
  c->r[3]=R16(c->r[31]+0x00000004u); // 801BF0B0
  c->ctr=c->r[12]; // 801BF0B4
  if (true) { c->lr=0x801BF0BCu; dispatch(c,c->ctr); } // 801BF0B8
  c->r[30]=R16(c->r[31]+0x00000010u); // 801BF0BC
  goto L_801BF0D0; // 801BF0C0
L_801BF0C4:;
  c->r[3]=c->r[31]+0x00000014u; // 801BF0C4
  c->lr=0x801BF0CCu; f_801AA8C4(c); // 801BF0C8
  c->lr=0x801BF0D0u; f_801AA228(c); // 801BF0CC
L_801BF0D0:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801BF0D0
  cmps(c,0,(int32_t)c->r[0],0); // 801BF0D4
  if (!crb(c,2)) { IRQCHK(c); goto L_801BF0C4; } // 801BF0D8
  c->r[3]=0u+0x803D0000u; // 801BF0DC
  c->r[4]=0u+0x00000000u; // 801BF0E0
  c->r[3]=c->r[3]+0xFFFFA8E0u; // 801BF0E4
  c->r[0]=0u+0x00000002u; // 801BF0E8
  W8(c->r[31]+0x00000000u,c->r[4]); // 801BF0EC
  c->r[4]=c->r[3]+0x000000ACu; // 801BF0F0
  c->r[3]=0u+0x00000000u; // 801BF0F4
  c->ctr=c->r[0]; // 801BF0F8
L_801BF0FC:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801BF0FC
  cmps(c,0,(int32_t)c->r[0],0); // 801BF100
  if (crb(c,2)) { goto L_801BF114; } // 801BF104
  c->r[0]=R16(c->r[4]+0x00000010u); // 801BF108
  cmpu(c,0,c->r[0],c->r[30]); // 801BF10C
  if (crb(c,2)) { goto L_801BF17C; } // 801BF110
L_801BF114:;
  c->r[0]=R8(c->r[4]+0x00000060u); // 801BF114
  c->r[3]=c->r[3]+0x00000001u; // 801BF118
  cmps(c,0,(int32_t)c->r[0],0); // 801BF11C
  if (crb(c,2)) { goto L_801BF130; } // 801BF120
  c->r[0]=R16(c->r[4]+0x00000070u); // 801BF124
  cmpu(c,0,c->r[0],c->r[30]); // 801BF128
  if (crb(c,2)) { goto L_801BF17C; } // 801BF12C
L_801BF130:;
  c->r[0]=R8(c->r[4]+0x000000C0u); // 801BF130
  c->r[3]=c->r[3]+0x00000001u; // 801BF134
  cmps(c,0,(int32_t)c->r[0],0); // 801BF138
  if (crb(c,2)) { goto L_801BF14C; } // 801BF13C
  c->r[0]=R16(c->r[4]+0x000000D0u); // 801BF140
  cmpu(c,0,c->r[0],c->r[30]); // 801BF144
  if (crb(c,2)) { goto L_801BF17C; } // 801BF148
L_801BF14C:;
  c->r[0]=R8(c->r[4]+0x00000120u); // 801BF14C
  c->r[3]=c->r[3]+0x00000001u; // 801BF150
  cmps(c,0,(int32_t)c->r[0],0); // 801BF154
  if (crb(c,2)) { goto L_801BF168; } // 801BF158
  c->r[0]=R16(c->r[4]+0x00000130u); // 801BF15C
  cmpu(c,0,c->r[0],c->r[30]); // 801BF160
  if (crb(c,2)) { goto L_801BF17C; } // 801BF164
L_801BF168:;
  c->r[3]=c->r[3]+0x00000001u; // 801BF168
  c->r[4]=c->r[4]+0x00000180u; // 801BF16C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BF0FC; } // 801BF170
  c->r[3]=c->r[30]|c->r[30]; // 801BF174
  c->lr=0x801BF17Cu; f_801C55DC(c); // 801BF178
L_801BF17C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BF17C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BF180
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BF184
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BF188
  c->lr=c->r[0]; // 801BF18C
  c->r[1]=c->r[1]+0x00000020u; // 801BF190
  return; // 801BF194
}

