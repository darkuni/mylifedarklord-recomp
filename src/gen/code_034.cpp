#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_802CF818
void f_802CF818(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CF818
  c->r[6]=0u+0x80430000u; // 802CF81C
  c->r[6]=c->r[6]+0x00006C88u; // 802CF820
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802CF824
  W32(c->r[1]+0x00000018u,c->r[30]); // 802CF828
  W32(c->r[1]+0x00000014u,c->r[29]); // 802CF82C
  c->r[0]=R32(c->r[6]+0x000006B8u); // 802CF830
  cmps(c,0,(int32_t)c->r[0],0); // 802CF834
  if (crb(c,2)) { goto L_802D0300; } // 802CF838
  c->r[3]=0u+0x80350000u; // 802CF83C
  c->r[8]=0u+0x00000010u; // 802CF840
  c->r[4]=c->r[3]+0xFFFF9A10u; // 802CF844
  c->r[7]=0u+0x00000000u; // 802CF848
  c->r[5]=0u+0x00010000u; // 802CF84C
  c->r[0]=0u+0x00000000u; // 802CF850
  c->r[3]=0u+0x2AAB0000u; // 802CF854
  c->ctr=c->r[8]; // 802CF858
L_802CF85C:;
  c->r[10]=R32(c->r[6]+0x00000074u); // 802CF85C
  c->r[9]=0u+0x00000000u; // 802CF860
  {uint32_t ea=c->r[10]+c->r[7]; c->r[11]=R32(ea); c->r[10]=ea;} // 802CF864
  c->r[8]=0u+0x00000000u; // 802CF868
  cmps(c,0,(int32_t)c->r[11],0); // 802CF86C
  if (crb(c,2)) { goto L_802D02F8; } // 802CF870
  c->r[29]=R32(c->r[10]+0x00000004u); // 802CF874
  c->r[12]=0u+0x00000000u; // 802CF878
  c->r[29]=rotl(c->r[29],0)&0x20000000u; cr0(c,c->r[29]); // 802CF87C
  if (crb(c,2)) { goto L_802CF89C; } // 802CF880
  c->r[29]=R16(c->r[10]+0x00000032u); // 802CF884
  c->r[9]=0u+0x00000001u; // 802CF888
  W16(c->r[10]+0x00000030u,c->r[29]); // 802CF88C
  c->r[29]=R32(c->r[10]+0x00000004u); // 802CF890
  c->r[29]=rotl(c->r[29],0)&0xDFFFFFFFu; // 802CF894
  W32(c->r[10]+0x00000004u,c->r[29]); // 802CF898
L_802CF89C:;
  c->r[29]=R32(c->r[10]+0x00000004u); // 802CF89C
  c->r[29]=rotl(c->r[29],0)&0x10000000u; cr0(c,c->r[29]); // 802CF8A0
  if (crb(c,2)) { goto L_802CF8F0; } // 802CF8A4
  c->r[9]=R32(c->r[10]+0x00000008u); // 802CF8A8
  cmps(c,0,(int32_t)c->r[9],-904); // 802CF8AC
  if (crb(c,1)) { goto L_802CF8BC; } // 802CF8B0
  c->r[9]=0u+0x00000000u; // 802CF8B4
  goto L_802CF8D8; // 802CF8B8
L_802CF8BC:;
  cmps(c,0,(int32_t)c->r[9],60); // 802CF8BC
  if (crb(c,0)) { goto L_802CF8CC; } // 802CF8C0
  c->r[9]=c->r[5]+0xFFFFFF64u; // 802CF8C4
  goto L_802CF8D8; // 802CF8C8
L_802CF8CC:;
  c->r[9]=rotl(c->r[9],1)&0xFFFFFFFEu; // 802CF8CC
  c->r[9]=c->r[4]+c->r[9]; // 802CF8D0
  c->r[9]=R16(c->r[9]+0x00000710u); // 802CF8D4
L_802CF8D8:;
  W16(c->r[10]+0x00000032u,c->r[9]); // 802CF8D8
  c->r[9]=0u+0x00000001u; // 802CF8DC
  c->r[29]=R32(c->r[10]+0x00000004u); // 802CF8E0
  c->r[29]=rotl(c->r[29],0)&0xEFFFFFFFu; // 802CF8E4
  c->r[29]=c->r[29]|0x20000000u; // 802CF8E8
  W32(c->r[10]+0x00000004u,c->r[29]); // 802CF8EC
L_802CF8F0:;
  c->r[29]=R32(c->r[10]+0x00000004u); // 802CF8F0
  c->r[29]=rotl(c->r[29],0)&0x80000000u; cr0(c,c->r[29]); // 802CF8F4
  if (crb(c,2)) { goto L_802CF96C; } // 802CF8F8
  c->r[29]=R16(c->r[10]+0x00000036u); // 802CF8FC
  c->r[8]=0u+0x00000001u; // 802CF900
  W16(c->r[10]+0x00000034u,c->r[29]); // 802CF904
  c->r[29]=R16(c->r[10]+0x0000003Au); // 802CF908
  W16(c->r[10]+0x00000038u,c->r[29]); // 802CF90C
  c->r[29]=R16(c->r[10]+0x0000003Eu); // 802CF910
  W16(c->r[10]+0x0000003Cu,c->r[29]); // 802CF914
  c->r[29]=R16(c->r[10]+0x00000042u); // 802CF918
  W16(c->r[10]+0x00000040u,c->r[29]); // 802CF91C
  c->r[29]=R16(c->r[10]+0x00000046u); // 802CF920
  W16(c->r[10]+0x00000044u,c->r[29]); // 802CF924
  c->r[29]=R16(c->r[10]+0x0000004Au); // 802CF928
  W16(c->r[10]+0x00000048u,c->r[29]); // 802CF92C
  c->r[29]=R16(c->r[10]+0x0000004Eu); // 802CF930
  W16(c->r[10]+0x0000004Cu,c->r[29]); // 802CF934
  c->r[29]=R16(c->r[10]+0x00000052u); // 802CF938
  W16(c->r[10]+0x00000050u,c->r[29]); // 802CF93C
  c->r[29]=R16(c->r[10]+0x00000056u); // 802CF940
  W16(c->r[10]+0x00000054u,c->r[29]); // 802CF944
  c->r[29]=R16(c->r[10]+0x0000005Au); // 802CF948
  W16(c->r[10]+0x00000058u,c->r[29]); // 802CF94C
  c->r[29]=R16(c->r[10]+0x0000005Eu); // 802CF950
  W16(c->r[10]+0x0000005Cu,c->r[29]); // 802CF954
  c->r[29]=R16(c->r[10]+0x00000062u); // 802CF958
  W16(c->r[10]+0x00000060u,c->r[29]); // 802CF95C
  c->r[29]=R32(c->r[10]+0x00000004u); // 802CF960
  c->r[29]=rotl(c->r[29],0)&0x7FFFFFFFu; // 802CF964
  W32(c->r[10]+0x00000004u,c->r[29]); // 802CF968
L_802CF96C:;
  c->r[29]=R32(c->r[10]+0x00000004u); // 802CF96C
  c->r[29]=rotl(c->r[29],0)&0x40000000u; cr0(c,c->r[29]); // 802CF970
  if (crb(c,2)) { goto L_802CFF70; } // 802CF974
  c->r[8]=R32(c->r[6]+0x00000070u); // 802CF978
  cmps(c,0,(int32_t)c->r[8],1); // 802CF97C
  if (crb(c,2)) { goto L_802CFB44; } // 802CF980
  if (!crb(c,0)) { goto L_802CF994; } // 802CF984
  cmps(c,0,(int32_t)c->r[8],0); // 802CF988
  if (!crb(c,0)) { goto L_802CF9A0; } // 802CF98C
  goto L_802CFF5C; // 802CF990
L_802CF994:;
  cmps(c,0,(int32_t)c->r[8],3); // 802CF994
  if (!crb(c,0)) { goto L_802CFF5C; } // 802CF998
  goto L_802CFD08; // 802CF99C
L_802CF9A0:;
  c->r[29]=R32(c->r[10]+0x00000014u); // 802CF9A0
  c->r[8]=R32(c->r[10]+0x00000020u); // 802CF9A4
  c->r[8]=c->r[29]+c->r[8]; // 802CF9A8
  cmps(c,0,(int32_t)c->r[8],-904); // 802CF9AC
  if (crb(c,1)) { goto L_802CF9BC; } // 802CF9B0
  c->r[8]=0u+0x00000000u; // 802CF9B4
  goto L_802CF9D8; // 802CF9B8
L_802CF9BC:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CF9BC
  if (crb(c,0)) { goto L_802CF9CC; } // 802CF9C0
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CF9C4
  goto L_802CF9D8; // 802CF9C8
L_802CF9CC:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CF9CC
  c->r[8]=c->r[4]+c->r[8]; // 802CF9D0
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CF9D4
L_802CF9D8:;
  W16(c->r[10]+0x00000036u,c->r[8]); // 802CF9D8
  c->r[29]=R32(c->r[10]+0x00000014u); // 802CF9DC
  c->r[8]=R32(c->r[10]+0x00000020u); // 802CF9E0
  c->r[8]=c->r[29]+c->r[8]; // 802CF9E4
  cmps(c,0,(int32_t)c->r[8],-904); // 802CF9E8
  if (crb(c,1)) { goto L_802CF9F8; } // 802CF9EC
  c->r[8]=0u+0x00000000u; // 802CF9F0
  goto L_802CFA14; // 802CF9F4
L_802CF9F8:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CF9F8
  if (crb(c,0)) { goto L_802CFA08; } // 802CF9FC
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFA00
  goto L_802CFA14; // 802CFA04
L_802CFA08:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFA08
  c->r[8]=c->r[4]+c->r[8]; // 802CFA0C
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFA10
L_802CFA14:;
  W16(c->r[10]+0x0000003Au,c->r[8]); // 802CFA14
  c->r[29]=R32(c->r[10]+0x00000014u); // 802CFA18
  c->r[8]=R32(c->r[10]+0x00000024u); // 802CFA1C
  c->r[8]=c->r[29]+c->r[8]; // 802CFA20
  c->r[8]=c->r[8]+0xFFFFFFE2u; // 802CFA24
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFA28
  if (crb(c,1)) { goto L_802CFA38; } // 802CFA2C
  c->r[8]=0u+0x00000000u; // 802CFA30
  goto L_802CFA54; // 802CFA34
L_802CFA38:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFA38
  if (crb(c,0)) { goto L_802CFA48; } // 802CFA3C
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFA40
  goto L_802CFA54; // 802CFA44
L_802CFA48:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFA48
  c->r[8]=c->r[4]+c->r[8]; // 802CFA4C
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFA50
L_802CFA54:;
  W16(c->r[10]+0x0000003Eu,c->r[8]); // 802CFA54
  c->r[30]=R32(c->r[10]+0x00000020u); // 802CFA58
  c->r[8]=R32(c->r[10]+0x00000014u); // 802CFA5C
  c->r[29]=R32(c->r[10]+0x0000000Cu); // 802CFA60
  c->r[8]=c->r[30]+c->r[8]; // 802CFA64
  c->r[8]=c->r[29]+c->r[8]; // 802CFA68
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFA6C
  if (crb(c,1)) { goto L_802CFA7C; } // 802CFA70
  c->r[8]=0u+0x00000000u; // 802CFA74
  goto L_802CFA98; // 802CFA78
L_802CFA7C:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFA7C
  if (crb(c,0)) { goto L_802CFA8C; } // 802CFA80
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFA84
  goto L_802CFA98; // 802CFA88
L_802CFA8C:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFA8C
  c->r[8]=c->r[4]+c->r[8]; // 802CFA90
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFA94
L_802CFA98:;
  W16(c->r[10]+0x00000042u,c->r[8]); // 802CFA98
  c->r[30]=R32(c->r[10]+0x00000020u); // 802CFA9C
  c->r[8]=R32(c->r[10]+0x00000014u); // 802CFAA0
  c->r[29]=R32(c->r[10]+0x0000000Cu); // 802CFAA4
  c->r[8]=c->r[30]+c->r[8]; // 802CFAA8
  c->r[8]=c->r[29]+c->r[8]; // 802CFAAC
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFAB0
  if (crb(c,1)) { goto L_802CFAC0; } // 802CFAB4
  c->r[8]=0u+0x00000000u; // 802CFAB8
  goto L_802CFADC; // 802CFABC
L_802CFAC0:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFAC0
  if (crb(c,0)) { goto L_802CFAD0; } // 802CFAC4
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFAC8
  goto L_802CFADC; // 802CFACC
L_802CFAD0:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFAD0
  c->r[8]=c->r[4]+c->r[8]; // 802CFAD4
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFAD8
L_802CFADC:;
  W16(c->r[10]+0x00000046u,c->r[8]); // 802CFADC
  c->r[30]=R32(c->r[10]+0x00000014u); // 802CFAE0
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 802CFAE4
  c->r[29]=R32(c->r[10]+0x00000024u); // 802CFAE8
  c->r[8]=c->r[30]+c->r[8]; // 802CFAEC
  c->r[8]=c->r[8]+c->r[29]; // 802CFAF0
  c->r[8]=c->r[8]+0xFFFFFFE2u; // 802CFAF4
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFAF8
  if (crb(c,1)) { goto L_802CFB08; } // 802CFAFC
  c->r[8]=0u+0x00000000u; // 802CFB00
  goto L_802CFB24; // 802CFB04
L_802CFB08:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFB08
  if (crb(c,0)) { goto L_802CFB18; } // 802CFB0C
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFB10
  goto L_802CFB24; // 802CFB14
L_802CFB18:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFB18
  c->r[8]=c->r[4]+c->r[8]; // 802CFB1C
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFB20
L_802CFB24:;
  W16(c->r[10]+0x0000004Au,c->r[8]); // 802CFB24
  W16(c->r[10]+0x0000004Eu,c->r[0]); // 802CFB28
  W16(c->r[10]+0x00000052u,c->r[0]); // 802CFB2C
  W16(c->r[10]+0x00000056u,c->r[0]); // 802CFB30
  W16(c->r[10]+0x0000005Au,c->r[0]); // 802CFB34
  W16(c->r[10]+0x0000005Eu,c->r[0]); // 802CFB38
  W16(c->r[10]+0x00000062u,c->r[0]); // 802CFB3C
  goto L_802CFF5C; // 802CFB40
L_802CFB44:;
  c->r[30]=R32(c->r[10]+0x00000020u); // 802CFB44
  c->r[8]=R32(c->r[10]+0x00000014u); // 802CFB48
  c->r[29]=R32(c->r[10]+0x00000018u); // 802CFB4C
  c->r[8]=c->r[30]+c->r[8]; // 802CFB50
  c->r[8]=c->r[29]+c->r[8]; // 802CFB54
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFB58
  if (crb(c,1)) { goto L_802CFB68; } // 802CFB5C
  c->r[8]=0u+0x00000000u; // 802CFB60
  goto L_802CFB84; // 802CFB64
L_802CFB68:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFB68
  if (crb(c,0)) { goto L_802CFB78; } // 802CFB6C
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFB70
  goto L_802CFB84; // 802CFB74
L_802CFB78:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFB78
  c->r[8]=c->r[4]+c->r[8]; // 802CFB7C
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFB80
L_802CFB84:;
  W16(c->r[10]+0x00000036u,c->r[8]); // 802CFB84
  c->r[30]=R32(c->r[10]+0x00000020u); // 802CFB88
  c->r[8]=R32(c->r[10]+0x00000014u); // 802CFB8C
  c->r[29]=R32(c->r[10]+0x0000001Cu); // 802CFB90
  c->r[8]=c->r[30]+c->r[8]; // 802CFB94
  c->r[8]=c->r[29]+c->r[8]; // 802CFB98
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFB9C
  if (crb(c,1)) { goto L_802CFBAC; } // 802CFBA0
  c->r[8]=0u+0x00000000u; // 802CFBA4
  goto L_802CFBC8; // 802CFBA8
L_802CFBAC:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFBAC
  if (crb(c,0)) { goto L_802CFBBC; } // 802CFBB0
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFBB4
  goto L_802CFBC8; // 802CFBB8
L_802CFBBC:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFBBC
  c->r[8]=c->r[4]+c->r[8]; // 802CFBC0
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFBC4
L_802CFBC8:;
  W16(c->r[10]+0x0000003Au,c->r[8]); // 802CFBC8
  c->r[29]=R32(c->r[10]+0x00000014u); // 802CFBCC
  c->r[8]=R32(c->r[10]+0x00000024u); // 802CFBD0
  c->r[8]=c->r[29]+c->r[8]; // 802CFBD4
  c->r[8]=c->r[8]+0xFFFFFFE2u; // 802CFBD8
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFBDC
  if (crb(c,1)) { goto L_802CFBEC; } // 802CFBE0
  c->r[8]=0u+0x00000000u; // 802CFBE4
  goto L_802CFC08; // 802CFBE8
L_802CFBEC:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFBEC
  if (crb(c,0)) { goto L_802CFBFC; } // 802CFBF0
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFBF4
  goto L_802CFC08; // 802CFBF8
L_802CFBFC:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFBFC
  c->r[8]=c->r[4]+c->r[8]; // 802CFC00
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFC04
L_802CFC08:;
  W16(c->r[10]+0x0000003Eu,c->r[8]); // 802CFC08
  c->r[31]=R32(c->r[10]+0x00000020u); // 802CFC0C
  c->r[29]=R32(c->r[10]+0x00000018u); // 802CFC10
  c->r[30]=R32(c->r[10]+0x00000014u); // 802CFC14
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 802CFC18
  c->r[29]=c->r[31]+c->r[29]; // 802CFC1C
  c->r[8]=c->r[30]+c->r[8]; // 802CFC20
  c->r[8]=c->r[29]+c->r[8]; // 802CFC24
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFC28
  if (crb(c,1)) { goto L_802CFC38; } // 802CFC2C
  c->r[8]=0u+0x00000000u; // 802CFC30
  goto L_802CFC54; // 802CFC34
L_802CFC38:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFC38
  if (crb(c,0)) { goto L_802CFC48; } // 802CFC3C
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFC40
  goto L_802CFC54; // 802CFC44
L_802CFC48:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFC48
  c->r[8]=c->r[4]+c->r[8]; // 802CFC4C
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFC50
L_802CFC54:;
  W16(c->r[10]+0x00000042u,c->r[8]); // 802CFC54
  c->r[31]=R32(c->r[10]+0x00000020u); // 802CFC58
  c->r[29]=R32(c->r[10]+0x0000001Cu); // 802CFC5C
  c->r[30]=R32(c->r[10]+0x00000014u); // 802CFC60
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 802CFC64
  c->r[29]=c->r[31]+c->r[29]; // 802CFC68
  c->r[8]=c->r[30]+c->r[8]; // 802CFC6C
  c->r[8]=c->r[29]+c->r[8]; // 802CFC70
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFC74
  if (crb(c,1)) { goto L_802CFC84; } // 802CFC78
  c->r[8]=0u+0x00000000u; // 802CFC7C
  goto L_802CFCA0; // 802CFC80
L_802CFC84:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFC84
  if (crb(c,0)) { goto L_802CFC94; } // 802CFC88
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFC8C
  goto L_802CFCA0; // 802CFC90
L_802CFC94:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFC94
  c->r[8]=c->r[4]+c->r[8]; // 802CFC98
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFC9C
L_802CFCA0:;
  W16(c->r[10]+0x00000046u,c->r[8]); // 802CFCA0
  c->r[30]=R32(c->r[10]+0x00000014u); // 802CFCA4
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 802CFCA8
  c->r[29]=R32(c->r[10]+0x00000024u); // 802CFCAC
  c->r[8]=c->r[30]+c->r[8]; // 802CFCB0
  c->r[8]=c->r[8]+c->r[29]; // 802CFCB4
  c->r[8]=c->r[8]+0xFFFFFFE2u; // 802CFCB8
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFCBC
  if (crb(c,1)) { goto L_802CFCCC; } // 802CFCC0
  c->r[8]=0u+0x00000000u; // 802CFCC4
  goto L_802CFCE8; // 802CFCC8
L_802CFCCC:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFCCC
  if (crb(c,0)) { goto L_802CFCDC; } // 802CFCD0
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFCD4
  goto L_802CFCE8; // 802CFCD8
L_802CFCDC:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFCDC
  c->r[8]=c->r[4]+c->r[8]; // 802CFCE0
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFCE4
L_802CFCE8:;
  W16(c->r[10]+0x0000004Au,c->r[8]); // 802CFCE8
  W16(c->r[10]+0x0000004Eu,c->r[0]); // 802CFCEC
  W16(c->r[10]+0x00000052u,c->r[0]); // 802CFCF0
  W16(c->r[10]+0x00000056u,c->r[0]); // 802CFCF4
  W16(c->r[10]+0x0000005Au,c->r[0]); // 802CFCF8
  W16(c->r[10]+0x0000005Eu,c->r[0]); // 802CFCFC
  W16(c->r[10]+0x00000062u,c->r[0]); // 802CFD00
  goto L_802CFF5C; // 802CFD04
L_802CFD08:;
  c->r[30]=R32(c->r[10]+0x00000020u); // 802CFD08
  c->r[8]=R32(c->r[10]+0x00000014u); // 802CFD0C
  c->r[29]=R32(c->r[10]+0x00000018u); // 802CFD10
  c->r[8]=c->r[30]+c->r[8]; // 802CFD14
  c->r[8]=c->r[29]+c->r[8]; // 802CFD18
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFD1C
  if (crb(c,1)) { goto L_802CFD2C; } // 802CFD20
  c->r[8]=0u+0x00000000u; // 802CFD24
  goto L_802CFD48; // 802CFD28
L_802CFD2C:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFD2C
  if (crb(c,0)) { goto L_802CFD3C; } // 802CFD30
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFD34
  goto L_802CFD48; // 802CFD38
L_802CFD3C:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFD3C
  c->r[8]=c->r[4]+c->r[8]; // 802CFD40
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFD44
L_802CFD48:;
  W16(c->r[10]+0x00000036u,c->r[8]); // 802CFD48
  c->r[30]=R32(c->r[10]+0x00000020u); // 802CFD4C
  c->r[8]=R32(c->r[10]+0x00000014u); // 802CFD50
  c->r[29]=R32(c->r[10]+0x0000001Cu); // 802CFD54
  c->r[8]=c->r[30]+c->r[8]; // 802CFD58
  c->r[8]=c->r[29]+c->r[8]; // 802CFD5C
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFD60
  if (crb(c,1)) { goto L_802CFD70; } // 802CFD64
  c->r[8]=0u+0x00000000u; // 802CFD68
  goto L_802CFD8C; // 802CFD6C
L_802CFD70:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFD70
  if (crb(c,0)) { goto L_802CFD80; } // 802CFD74
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFD78
  goto L_802CFD8C; // 802CFD7C
L_802CFD80:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFD80
  c->r[8]=c->r[4]+c->r[8]; // 802CFD84
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFD88
L_802CFD8C:;
  W16(c->r[10]+0x0000003Au,c->r[8]); // 802CFD8C
  c->r[30]=R32(c->r[10]+0x00000024u); // 802CFD90
  c->r[8]=R32(c->r[10]+0x00000014u); // 802CFD94
  c->r[29]=R32(c->r[10]+0x00000028u); // 802CFD98
  c->r[8]=c->r[30]+c->r[8]; // 802CFD9C
  c->r[8]=c->r[29]+c->r[8]; // 802CFDA0
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFDA4
  if (crb(c,1)) { goto L_802CFDB4; } // 802CFDA8
  c->r[8]=0u+0x00000000u; // 802CFDAC
  goto L_802CFDD0; // 802CFDB0
L_802CFDB4:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFDB4
  if (crb(c,0)) { goto L_802CFDC4; } // 802CFDB8
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFDBC
  goto L_802CFDD0; // 802CFDC0
L_802CFDC4:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFDC4
  c->r[8]=c->r[4]+c->r[8]; // 802CFDC8
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFDCC
L_802CFDD0:;
  W16(c->r[10]+0x0000003Eu,c->r[8]); // 802CFDD0
  c->r[30]=R32(c->r[10]+0x00000024u); // 802CFDD4
  c->r[8]=R32(c->r[10]+0x00000014u); // 802CFDD8
  c->r[29]=R32(c->r[10]+0x0000002Cu); // 802CFDDC
  c->r[8]=c->r[30]+c->r[8]; // 802CFDE0
  c->r[8]=c->r[29]+c->r[8]; // 802CFDE4
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFDE8
  if (crb(c,1)) { goto L_802CFDF8; } // 802CFDEC
  c->r[8]=0u+0x00000000u; // 802CFDF0
  goto L_802CFE14; // 802CFDF4
L_802CFDF8:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFDF8
  if (crb(c,0)) { goto L_802CFE08; } // 802CFDFC
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFE00
  goto L_802CFE14; // 802CFE04
L_802CFE08:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFE08
  c->r[8]=c->r[4]+c->r[8]; // 802CFE0C
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFE10
L_802CFE14:;
  W16(c->r[10]+0x0000005Au,c->r[8]); // 802CFE14
  c->r[31]=R32(c->r[10]+0x00000020u); // 802CFE18
  c->r[29]=R32(c->r[10]+0x00000018u); // 802CFE1C
  c->r[30]=R32(c->r[10]+0x00000014u); // 802CFE20
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 802CFE24
  c->r[29]=c->r[31]+c->r[29]; // 802CFE28
  c->r[8]=c->r[30]+c->r[8]; // 802CFE2C
  c->r[8]=c->r[29]+c->r[8]; // 802CFE30
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFE34
  if (crb(c,1)) { goto L_802CFE44; } // 802CFE38
  c->r[8]=0u+0x00000000u; // 802CFE3C
  goto L_802CFE60; // 802CFE40
L_802CFE44:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFE44
  if (crb(c,0)) { goto L_802CFE54; } // 802CFE48
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFE4C
  goto L_802CFE60; // 802CFE50
L_802CFE54:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFE54
  c->r[8]=c->r[4]+c->r[8]; // 802CFE58
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFE5C
L_802CFE60:;
  W16(c->r[10]+0x00000042u,c->r[8]); // 802CFE60
  c->r[31]=R32(c->r[10]+0x00000020u); // 802CFE64
  c->r[29]=R32(c->r[10]+0x0000001Cu); // 802CFE68
  c->r[30]=R32(c->r[10]+0x00000014u); // 802CFE6C
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 802CFE70
  c->r[29]=c->r[31]+c->r[29]; // 802CFE74
  c->r[8]=c->r[30]+c->r[8]; // 802CFE78
  c->r[8]=c->r[29]+c->r[8]; // 802CFE7C
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFE80
  if (crb(c,1)) { goto L_802CFE90; } // 802CFE84
  c->r[8]=0u+0x00000000u; // 802CFE88
  goto L_802CFEAC; // 802CFE8C
L_802CFE90:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFE90
  if (crb(c,0)) { goto L_802CFEA0; } // 802CFE94
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFE98
  goto L_802CFEAC; // 802CFE9C
L_802CFEA0:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFEA0
  c->r[8]=c->r[4]+c->r[8]; // 802CFEA4
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFEA8
L_802CFEAC:;
  W16(c->r[10]+0x00000046u,c->r[8]); // 802CFEAC
  c->r[31]=R32(c->r[10]+0x00000024u); // 802CFEB0
  c->r[29]=R32(c->r[10]+0x00000028u); // 802CFEB4
  c->r[30]=R32(c->r[10]+0x00000014u); // 802CFEB8
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 802CFEBC
  c->r[29]=c->r[31]+c->r[29]; // 802CFEC0
  c->r[8]=c->r[30]+c->r[8]; // 802CFEC4
  c->r[8]=c->r[29]+c->r[8]; // 802CFEC8
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFECC
  if (crb(c,1)) { goto L_802CFEDC; } // 802CFED0
  c->r[8]=0u+0x00000000u; // 802CFED4
  goto L_802CFEF8; // 802CFED8
L_802CFEDC:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFEDC
  if (crb(c,0)) { goto L_802CFEEC; } // 802CFEE0
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFEE4
  goto L_802CFEF8; // 802CFEE8
L_802CFEEC:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFEEC
  c->r[8]=c->r[4]+c->r[8]; // 802CFEF0
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFEF4
L_802CFEF8:;
  W16(c->r[10]+0x0000004Au,c->r[8]); // 802CFEF8
  c->r[29]=R32(c->r[10]+0x00000024u); // 802CFEFC
  c->r[30]=R32(c->r[10]+0x0000002Cu); // 802CFF00
  c->r[31]=R32(c->r[10]+0x00000014u); // 802CFF04
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 802CFF08
  c->r[30]=c->r[29]+c->r[30]; // 802CFF0C
  c->r[8]=c->r[31]+c->r[8]; // 802CFF10
  c->r[8]=c->r[30]+c->r[8]; // 802CFF14
  cmps(c,0,(int32_t)c->r[8],-904); // 802CFF18
  if (crb(c,1)) { goto L_802CFF28; } // 802CFF1C
  c->r[8]=0u+0x00000000u; // 802CFF20
  goto L_802CFF44; // 802CFF24
L_802CFF28:;
  cmps(c,0,(int32_t)c->r[8],60); // 802CFF28
  if (crb(c,0)) { goto L_802CFF38; } // 802CFF2C
  c->r[8]=c->r[5]+0xFFFFFF64u; // 802CFF30
  goto L_802CFF44; // 802CFF34
L_802CFF38:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802CFF38
  c->r[8]=c->r[4]+c->r[8]; // 802CFF3C
  c->r[8]=R16(c->r[8]+0x00000710u); // 802CFF40
L_802CFF44:;
  W16(c->r[10]+0x0000005Eu,c->r[8]); // 802CFF44
  c->r[12]=c->r[12]|0x80000000u; // 802CFF48
  W16(c->r[10]+0x0000004Eu,c->r[0]); // 802CFF4C
  W16(c->r[10]+0x00000052u,c->r[0]); // 802CFF50
  W16(c->r[10]+0x00000056u,c->r[0]); // 802CFF54
  W16(c->r[10]+0x00000062u,c->r[0]); // 802CFF58
L_802CFF5C:;
  c->r[30]=R32(c->r[10]+0x00000004u); // 802CFF5C
  c->r[8]=0u+0x00000001u; // 802CFF60
  c->r[30]=rotl(c->r[30],0)&0xBFFFFFFFu; // 802CFF64
  c->r[30]=c->r[30]|0x80000000u; // 802CFF68
  W32(c->r[10]+0x00000004u,c->r[30]); // 802CFF6C
L_802CFF70:;
  cmps(c,0,(int32_t)c->r[9],0); // 802CFF70
  if (crb(c,2)) { goto L_802CFFB0; } // 802CFF74
  c->r[9]=R16(c->r[10]+0x00000030u); // 802CFF78
  c->r[30]=c->r[3]+0xFFFFAAABu; // 802CFF7C
  W16(c->r[11]+0x00000092u,c->r[9]); // 802CFF80
  c->r[31]=R16(c->r[10]+0x00000030u); // 802CFF84
  c->r[9]=R16(c->r[10]+0x00000032u); // 802CFF88
  c->r[9]=c->r[9]-c->r[31]; // 802CFF8C
  c->r[9]=(uint32_t)(((int64_t)(int32_t)c->r[30]*(int64_t)(int32_t)c->r[9])>>32); // 802CFF90
  c->r[9]=sraw(c,c->r[9],4); // 802CFF94
  c->r[31]=rotl(c->r[9],1)&0x00000001u; // 802CFF98
  c->r[9]=c->r[9]+c->r[31]; // 802CFF9C
  W16(c->r[11]+0x00000094u,c->r[9]); // 802CFFA0
  c->r[9]=R32(c->r[11]+0x0000001Cu); // 802CFFA4
  c->r[9]=c->r[9]|0x00000100u; // 802CFFA8
  W32(c->r[11]+0x0000001Cu,c->r[9]); // 802CFFAC
L_802CFFB0:;
  cmps(c,0,(int32_t)c->r[8],0); // 802CFFB0
  if (crb(c,2)) { goto L_802D02F8; } // 802CFFB4
  c->r[8]=R16(c->r[10]+0x00000034u); // 802CFFB8
  cmps(c,0,(int32_t)c->r[8],0); // 802CFFBC
  W16(c->r[11]+0x0000003Cu,c->r[8]); // 802CFFC0
  if (crb(c,2)) { goto L_802CFFCC; } // 802CFFC4
  c->r[12]=c->r[12]|0x00000001u; // 802CFFC8
L_802CFFCC:;
  c->r[9]=R16(c->r[10]+0x00000034u); // 802CFFCC
  c->r[31]=c->r[3]+0xFFFFAAABu; // 802CFFD0
  c->r[8]=R16(c->r[10]+0x00000036u); // 802CFFD4
  c->r[8]=c->r[8]-c->r[9]; // 802CFFD8
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 802CFFDC
  c->r[8]=sraw(c,c->r[8],4); // 802CFFE0
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 802CFFE4
  c->r[9]=c->r[8]+c->r[9]; // 802CFFE8
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 802CFFEC
  W16(c->r[11]+0x0000003Eu,c->r[9]); // 802CFFF0
  if (crb(c,2)) { goto L_802CFFFC; } // 802CFFF4
  c->r[12]=c->r[12]|0x00000004u; // 802CFFF8
L_802CFFFC:;
  c->r[8]=R16(c->r[10]+0x00000038u); // 802CFFFC
  cmps(c,0,(int32_t)c->r[8],0); // 802D0000
  W16(c->r[11]+0x00000040u,c->r[8]); // 802D0004
  if (crb(c,2)) { goto L_802D0010; } // 802D0008
  c->r[12]=c->r[12]|0x00000002u; // 802D000C
L_802D0010:;
  c->r[9]=R16(c->r[10]+0x00000038u); // 802D0010
  c->r[31]=c->r[3]+0xFFFFAAABu; // 802D0014
  c->r[8]=R16(c->r[10]+0x0000003Au); // 802D0018
  c->r[8]=c->r[8]-c->r[9]; // 802D001C
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 802D0020
  c->r[8]=sraw(c,c->r[8],4); // 802D0024
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 802D0028
  c->r[9]=c->r[8]+c->r[9]; // 802D002C
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 802D0030
  W16(c->r[11]+0x00000042u,c->r[9]); // 802D0034
  if (crb(c,2)) { goto L_802D0040; } // 802D0038
  c->r[12]=c->r[12]|0x00000004u; // 802D003C
L_802D0040:;
  c->r[8]=R16(c->r[10]+0x00000040u); // 802D0040
  cmps(c,0,(int32_t)c->r[8],0); // 802D0044
  W16(c->r[11]+0x00000044u,c->r[8]); // 802D0048
  if (crb(c,2)) { goto L_802D0054; } // 802D004C
  c->r[12]=c->r[12]|0x00010000u; // 802D0050
L_802D0054:;
  c->r[9]=R16(c->r[10]+0x00000040u); // 802D0054
  c->r[31]=c->r[3]+0xFFFFAAABu; // 802D0058
  c->r[8]=R16(c->r[10]+0x00000042u); // 802D005C
  c->r[8]=c->r[8]-c->r[9]; // 802D0060
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 802D0064
  c->r[8]=sraw(c,c->r[8],4); // 802D0068
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 802D006C
  c->r[9]=c->r[8]+c->r[9]; // 802D0070
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 802D0074
  W16(c->r[11]+0x00000046u,c->r[9]); // 802D0078
  if (crb(c,2)) { goto L_802D0084; } // 802D007C
  c->r[12]=c->r[12]|0x00040000u; // 802D0080
L_802D0084:;
  c->r[8]=R16(c->r[10]+0x00000044u); // 802D0084
  cmps(c,0,(int32_t)c->r[8],0); // 802D0088
  W16(c->r[11]+0x00000048u,c->r[8]); // 802D008C
  if (crb(c,2)) { goto L_802D0098; } // 802D0090
  c->r[12]=c->r[12]|0x00020000u; // 802D0094
L_802D0098:;
  c->r[9]=R16(c->r[10]+0x00000044u); // 802D0098
  c->r[31]=c->r[3]+0xFFFFAAABu; // 802D009C
  c->r[8]=R16(c->r[10]+0x00000046u); // 802D00A0
  c->r[8]=c->r[8]-c->r[9]; // 802D00A4
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 802D00A8
  c->r[8]=sraw(c,c->r[8],4); // 802D00AC
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 802D00B0
  c->r[9]=c->r[8]+c->r[9]; // 802D00B4
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 802D00B8
  W16(c->r[11]+0x0000004Au,c->r[9]); // 802D00BC
  if (crb(c,2)) { goto L_802D00C8; } // 802D00C0
  c->r[12]=c->r[12]|0x00040000u; // 802D00C4
L_802D00C8:;
  c->r[8]=R16(c->r[10]+0x0000004Cu); // 802D00C8
  cmps(c,0,(int32_t)c->r[8],0); // 802D00CC
  W16(c->r[11]+0x0000004Cu,c->r[8]); // 802D00D0
  if (crb(c,2)) { goto L_802D00DC; } // 802D00D4
  c->r[12]=c->r[12]|0x00200000u; // 802D00D8
L_802D00DC:;
  c->r[9]=R16(c->r[10]+0x0000004Cu); // 802D00DC
  c->r[31]=c->r[3]+0xFFFFAAABu; // 802D00E0
  c->r[8]=R16(c->r[10]+0x0000004Eu); // 802D00E4
  c->r[8]=c->r[8]-c->r[9]; // 802D00E8
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 802D00EC
  c->r[8]=sraw(c,c->r[8],4); // 802D00F0
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 802D00F4
  c->r[9]=c->r[8]+c->r[9]; // 802D00F8
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 802D00FC
  W16(c->r[11]+0x0000004Eu,c->r[9]); // 802D0100
  if (crb(c,2)) { goto L_802D010C; } // 802D0104
  c->r[12]=c->r[12]|0x00800000u; // 802D0108
L_802D010C:;
  c->r[8]=R16(c->r[10]+0x00000050u); // 802D010C
  cmps(c,0,(int32_t)c->r[8],0); // 802D0110
  W16(c->r[11]+0x00000050u,c->r[8]); // 802D0114
  if (crb(c,2)) { goto L_802D0120; } // 802D0118
  c->r[12]=c->r[12]|0x00400000u; // 802D011C
L_802D0120:;
  c->r[9]=R16(c->r[10]+0x00000050u); // 802D0120
  c->r[31]=c->r[3]+0xFFFFAAABu; // 802D0124
  c->r[8]=R16(c->r[10]+0x00000052u); // 802D0128
  c->r[8]=c->r[8]-c->r[9]; // 802D012C
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 802D0130
  c->r[8]=sraw(c,c->r[8],4); // 802D0134
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 802D0138
  c->r[9]=c->r[8]+c->r[9]; // 802D013C
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 802D0140
  W16(c->r[11]+0x00000052u,c->r[9]); // 802D0144
  if (crb(c,2)) { goto L_802D0150; } // 802D0148
  c->r[12]=c->r[12]|0x00800000u; // 802D014C
L_802D0150:;
  c->r[8]=R16(c->r[10]+0x00000058u); // 802D0150
  cmps(c,0,(int32_t)c->r[8],0); // 802D0154
  W16(c->r[11]+0x00000054u,c->r[8]); // 802D0158
  if (crb(c,2)) { goto L_802D0164; } // 802D015C
  c->r[12]=c->r[12]|0x04000000u; // 802D0160
L_802D0164:;
  c->r[9]=R16(c->r[10]+0x00000058u); // 802D0164
  c->r[31]=c->r[3]+0xFFFFAAABu; // 802D0168
  c->r[8]=R16(c->r[10]+0x0000005Au); // 802D016C
  c->r[8]=c->r[8]-c->r[9]; // 802D0170
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 802D0174
  c->r[8]=sraw(c,c->r[8],4); // 802D0178
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 802D017C
  c->r[9]=c->r[8]+c->r[9]; // 802D0180
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 802D0184
  W16(c->r[11]+0x00000056u,c->r[9]); // 802D0188
  if (crb(c,2)) { goto L_802D0194; } // 802D018C
  c->r[12]=c->r[12]|0x10000000u; // 802D0190
L_802D0194:;
  c->r[8]=R16(c->r[10]+0x0000005Cu); // 802D0194
  cmps(c,0,(int32_t)c->r[8],0); // 802D0198
  W16(c->r[11]+0x00000058u,c->r[8]); // 802D019C
  if (crb(c,2)) { goto L_802D01A8; } // 802D01A0
  c->r[12]=c->r[12]|0x08000000u; // 802D01A4
L_802D01A8:;
  c->r[9]=R16(c->r[10]+0x0000005Cu); // 802D01A8
  c->r[31]=c->r[3]+0xFFFFAAABu; // 802D01AC
  c->r[8]=R16(c->r[10]+0x0000005Eu); // 802D01B0
  c->r[8]=c->r[8]-c->r[9]; // 802D01B4
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 802D01B8
  c->r[8]=sraw(c,c->r[8],4); // 802D01BC
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 802D01C0
  c->r[9]=c->r[8]+c->r[9]; // 802D01C4
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 802D01C8
  W16(c->r[11]+0x0000005Au,c->r[9]); // 802D01CC
  if (crb(c,2)) { goto L_802D01D8; } // 802D01D0
  c->r[12]=c->r[12]|0x10000000u; // 802D01D4
L_802D01D8:;
  c->r[8]=R16(c->r[10]+0x0000003Cu); // 802D01D8
  cmps(c,0,(int32_t)c->r[8],0); // 802D01DC
  W16(c->r[11]+0x0000005Cu,c->r[8]); // 802D01E0
  if (crb(c,2)) { goto L_802D01EC; } // 802D01E4
  c->r[12]=c->r[12]|0x00000008u; // 802D01E8
L_802D01EC:;
  c->r[9]=R16(c->r[10]+0x0000003Cu); // 802D01EC
  c->r[31]=c->r[3]+0xFFFFAAABu; // 802D01F0
  c->r[8]=R16(c->r[10]+0x0000003Eu); // 802D01F4
  c->r[8]=c->r[8]-c->r[9]; // 802D01F8
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 802D01FC
  c->r[8]=sraw(c,c->r[8],4); // 802D0200
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 802D0204
  c->r[9]=c->r[8]+c->r[9]; // 802D0208
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 802D020C
  W16(c->r[11]+0x0000005Eu,c->r[9]); // 802D0210
  if (crb(c,2)) { goto L_802D021C; } // 802D0214
  c->r[12]=c->r[12]|0x00000010u; // 802D0218
L_802D021C:;
  c->r[8]=R16(c->r[10]+0x00000048u); // 802D021C
  cmps(c,0,(int32_t)c->r[8],0); // 802D0220
  W16(c->r[11]+0x00000060u,c->r[8]); // 802D0224
  if (crb(c,2)) { goto L_802D0230; } // 802D0228
  c->r[12]=c->r[12]|0x00080000u; // 802D022C
L_802D0230:;
  c->r[9]=R16(c->r[10]+0x00000048u); // 802D0230
  c->r[31]=c->r[3]+0xFFFFAAABu; // 802D0234
  c->r[8]=R16(c->r[10]+0x0000004Au); // 802D0238
  c->r[8]=c->r[8]-c->r[9]; // 802D023C
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 802D0240
  c->r[8]=sraw(c,c->r[8],4); // 802D0244
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 802D0248
  c->r[9]=c->r[8]+c->r[9]; // 802D024C
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 802D0250
  W16(c->r[11]+0x00000062u,c->r[9]); // 802D0254
  if (crb(c,2)) { goto L_802D0260; } // 802D0258
  c->r[12]=c->r[12]|0x00100000u; // 802D025C
L_802D0260:;
  c->r[8]=R16(c->r[10]+0x00000054u); // 802D0260
  cmps(c,0,(int32_t)c->r[8],0); // 802D0264
  W16(c->r[11]+0x00000064u,c->r[8]); // 802D0268
  if (crb(c,2)) { goto L_802D0274; } // 802D026C
  c->r[12]=c->r[12]|0x01000000u; // 802D0270
L_802D0274:;
  c->r[9]=R16(c->r[10]+0x00000054u); // 802D0274
  c->r[31]=c->r[3]+0xFFFFAAABu; // 802D0278
  c->r[8]=R16(c->r[10]+0x00000056u); // 802D027C
  c->r[8]=c->r[8]-c->r[9]; // 802D0280
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 802D0284
  c->r[8]=sraw(c,c->r[8],4); // 802D0288
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 802D028C
  c->r[9]=c->r[8]+c->r[9]; // 802D0290
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 802D0294
  W16(c->r[11]+0x00000066u,c->r[9]); // 802D0298
  if (crb(c,2)) { goto L_802D02A4; } // 802D029C
  c->r[12]=c->r[12]|0x02000000u; // 802D02A0
L_802D02A4:;
  c->r[8]=R16(c->r[10]+0x00000060u); // 802D02A4
  cmps(c,0,(int32_t)c->r[8],0); // 802D02A8
  W16(c->r[11]+0x00000068u,c->r[8]); // 802D02AC
  if (crb(c,2)) { goto L_802D02B8; } // 802D02B0
  c->r[12]=c->r[12]|0x20000000u; // 802D02B4
L_802D02B8:;
  c->r[9]=R16(c->r[10]+0x00000060u); // 802D02B8
  c->r[31]=c->r[3]+0xFFFFAAABu; // 802D02BC
  c->r[8]=R16(c->r[10]+0x00000062u); // 802D02C0
  c->r[8]=c->r[8]-c->r[9]; // 802D02C4
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 802D02C8
  c->r[8]=sraw(c,c->r[8],4); // 802D02CC
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 802D02D0
  c->r[9]=c->r[8]+c->r[9]; // 802D02D4
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; cr0(c,c->r[8]); // 802D02D8
  W16(c->r[11]+0x0000006Au,c->r[9]); // 802D02DC
  if (crb(c,2)) { goto L_802D02E8; } // 802D02E0
  c->r[12]=c->r[12]|0x40000000u; // 802D02E4
L_802D02E8:;
  W32(c->r[11]+0x00000034u,c->r[12]); // 802D02E8
  c->r[8]=R32(c->r[11]+0x0000001Cu); // 802D02EC
  c->r[8]=c->r[8]|0x00000012u; // 802D02F0
  W32(c->r[11]+0x0000001Cu,c->r[8]); // 802D02F4
L_802D02F8:;
  c->r[7]=c->r[7]+0x00000064u; // 802D02F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802CF85C; } // 802D02FC
L_802D0300:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D0300
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D0304
  c->r[29]=R32(c->r[1]+0x00000014u); // 802D0308
  c->r[1]=c->r[1]+0x00000020u; // 802D030C
  return; // 802D0310
}

// fn_802D0314
void f_802D0314(Ctx* __restrict c) {
  c->r[4]=0u+0x80430000u; // 802D0314
  c->r[0]=0u+0x00000010u; // 802D0318
  c->r[4]=c->r[4]+0x00006C88u; // 802D031C
  c->r[6]=0u+0x00000000u; // 802D0320
  c->ctr=c->r[0]; // 802D0324
L_802D0328:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 802D0328
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802D032C
  if (!crb(c,0)) { goto L_802D0354; } // 802D0330
  c->r[5]=0u+0x80430000u; // 802D0334
  c->r[4]=0u+0x80430000u; // 802D0338
  c->r[5]=c->r[5]+0x00006C88u; // 802D033C
  c->r[4]=c->r[4]+0x00006C98u; // 802D0340
  W8(c->r[5]+c->r[6],c->r[3]); // 802D0344
  W8(c->r[4]+c->r[3],c->r[6]); // 802D0348
  c->r[3]=c->r[6]|c->r[6]; // 802D034C
  return; // 802D0350
L_802D0354:;
  c->r[4]=c->r[4]+0x00000001u; // 802D0354
  c->r[6]=c->r[6]+0x00000001u; // 802D0358
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802D0328; } // 802D035C
  c->r[3]=0u+0xFFFFFFFFu; // 802D0360
  return; // 802D0364
}

// HBMGetIndex
void f_802D0368(Ctx* __restrict c) {
  trace_call(0x802D0368u);
  c->r[4]=0u+0x80430000u; // 802D0368
  c->r[4]=c->r[4]+0x00006C98u; // 802D036C
  c->r[3]=R8(c->r[4]+c->r[3]); // 802D0370
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802D0374
  return; // 802D0378
}

// HBMFreeIndex
void f_802D037C(Ctx* __restrict c) {
  trace_call(0x802D037Cu);
  c->r[5]=0u+0x80430000u; // 802D037C
  c->r[4]=0u+0x80430000u; // 802D0380
  c->r[5]=c->r[5]+0x00006C88u; // 802D0384
  c->r[0]=0u+0xFFFFFFFFu; // 802D0388
  c->r[6]=R8(c->r[5]+c->r[3]); // 802D038C
  c->r[4]=c->r[4]+0x00006C98u; // 802D0390
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 802D0394
  W8(c->r[5]+c->r[3],c->r[0]); // 802D0398
  W8(c->r[4]+c->r[6],c->r[0]); // 802D039C
  return; // 802D03A0
}

// HBMFreeIndexByKey
void f_802D03A4(Ctx* __restrict c) {
  trace_call(0x802D03A4u);
  c->r[5]=0u+0x80430000u; // 802D03A4
  c->r[5]=c->r[5]+0x00006C98u; // 802D03A8
  c->r[6]=R8(c->r[5]+c->r[3]); // 802D03AC
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[6]); // 802D03B0
  if (crb(c,0)) return; // 802D03B4
  c->r[4]=0u+0x80430000u; // 802D03B8
  c->r[0]=0u+0xFFFFFFFFu; // 802D03BC
  c->r[4]=c->r[4]+0x00006C88u; // 802D03C0
  W8(c->r[5]+c->r[3],c->r[0]); // 802D03C4
  W8(c->r[4]+c->r[6],c->r[0]); // 802D03C8
  return; // 802D03CC
}

// fn_802D03D0
void f_802D03D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D03D0
  c->r[0]=c->lr; // 802D03D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D03D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D03DC
  c->r[31]=c->r[3]|c->r[3]; // 802D03E0
  c->lr=0x802D03E8u; f_80160C68(c); // 802D03E4
  c->r[4]=0u+0x80430000u; // 802D03E8
  c->r[5]=0u+0x00000000u; // 802D03EC
  c->r[6]=R32(c->r[4]+0x00007348u); // 802D03F0
  c->r[4]=0u+0x00000000u; // 802D03F4
  goto L_802D0424; // 802D03F8
L_802D03FC:;
  cmpu(c,0,c->r[6],c->r[31]); // 802D03FC
  if (crb(c,2)) { goto L_802D0420; } // 802D0400
  cmps(c,0,(int32_t)c->r[5],0); // 802D0404
  if (crb(c,2)) { goto L_802D0418; } // 802D0408
  W32(c->r[4]+0x00000000u,c->r[6]); // 802D040C
  c->r[4]=c->r[6]|c->r[6]; // 802D0410
  goto L_802D0420; // 802D0414
L_802D0418:;
  c->r[4]=c->r[6]|c->r[6]; // 802D0418
  c->r[5]=c->r[6]|c->r[6]; // 802D041C
L_802D0420:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 802D0420
L_802D0424:;
  cmps(c,0,(int32_t)c->r[6],0); // 802D0424
  if (!crb(c,2)) { IRQCHK(c); goto L_802D03FC; } // 802D0428
  cmps(c,0,(int32_t)c->r[4],0); // 802D042C
  if (crb(c,2)) { goto L_802D043C; } // 802D0430
  c->r[0]=0u+0x00000000u; // 802D0434
  W32(c->r[4]+0x00000000u,c->r[0]); // 802D0438
L_802D043C:;
  c->r[4]=0u+0x80430000u; // 802D043C
  W32(c->r[4]+0x00007348u,c->r[5]); // 802D0440
  c->lr=0x802D0448u; f_80160C90(c); // 802D0444
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D0448
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D044C
  c->lr=c->r[0]; // 802D0450
  c->r[1]=c->r[1]+0x00000010u; // 802D0454
  return; // 802D0458
}

// HBMSYNInit
void f_802D045C(Ctx* __restrict c) {
  trace_call(0x802D045Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D045C
  c->r[0]=c->lr; // 802D0460
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D0464
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D0468
  c->r[31]=0u+0x80430000u; // 802D046C
  c->r[31]=c->r[31]+0x00007348u; // 802D0470
  c->lr=0x802D0478u; f_801788CC(c); // 802D0474
  cmps(c,0,(int32_t)c->r[3],0); // 802D0478
  if (crb(c,2)) { goto L_802D0520; } // 802D047C
  c->r[0]=R32(c->r[31]+0x000004C8u); // 802D0480
  cmps(c,0,(int32_t)c->r[0],0); // 802D0484
  if (!crb(c,2)) { goto L_802D0520; } // 802D0488
  c->r[3]=c->r[31]+0x00000008u; // 802D048C
  c->r[4]=0u+0x00000000u; // 802D0490
  W32(c->r[31]+0x00000004u,c->r[3]); // 802D0494
  c->r[0]=0u+0x00000001u; // 802D0498
  W32(c->r[3]+0x00000008u,c->r[4]); // 802D049C
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D04A0
  W32(c->r[3]+0x00000054u,c->r[4]); // 802D04A4
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D04A8
  W32(c->r[3]+0x000000A0u,c->r[4]); // 802D04AC
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D04B0
  W32(c->r[3]+0x000000ECu,c->r[4]); // 802D04B4
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D04B8
  W32(c->r[3]+0x00000138u,c->r[4]); // 802D04BC
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D04C0
  W32(c->r[3]+0x00000184u,c->r[4]); // 802D04C4
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D04C8
  W32(c->r[3]+0x000001D0u,c->r[4]); // 802D04CC
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D04D0
  W32(c->r[3]+0x0000021Cu,c->r[4]); // 802D04D4
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D04D8
  W32(c->r[3]+0x00000268u,c->r[4]); // 802D04DC
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D04E0
  W32(c->r[3]+0x000002B4u,c->r[4]); // 802D04E4
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D04E8
  W32(c->r[3]+0x00000300u,c->r[4]); // 802D04EC
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D04F0
  W32(c->r[3]+0x0000034Cu,c->r[4]); // 802D04F4
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D04F8
  W32(c->r[3]+0x00000398u,c->r[4]); // 802D04FC
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D0500
  W32(c->r[3]+0x000003E4u,c->r[4]); // 802D0504
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D0508
  W32(c->r[3]+0x00000430u,c->r[4]); // 802D050C
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D0510
  W32(c->r[3]+0x0000047Cu,c->r[4]); // 802D0514
  W32(c->r[31]+0x00000000u,c->r[4]); // 802D0518
  W32(c->r[31]+0x000004C8u,c->r[0]); // 802D051C
L_802D0520:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D0520
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D0524
  c->lr=c->r[0]; // 802D0528
  c->r[1]=c->r[1]+0x00000010u; // 802D052C
  return; // 802D0530
}

// HBMSYNQuit
void f_802D0534(Ctx* __restrict c) {
  trace_call(0x802D0534u);
  c->r[0]=0u+0x00000000u; // 802D0534
  c->r[4]=0u+0x80430000u; // 802D0538
  c->r[3]=0u+0x80430000u; // 802D053C
  W32(c->r[4]+0x0000734Cu,c->r[0]); // 802D0540
  W32(c->r[3]+0x00007810u,c->r[0]); // 802D0544
  return; // 802D0548
}

// HBMSYNRunAudioFrame
void f_802D054C(Ctx* __restrict c) {
  trace_call(0x802D054Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D054C
  c->r[0]=c->lr; // 802D0550
  c->r[3]=0u+0x80430000u; // 802D0554
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D0558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D055C
  c->r[0]=R32(c->r[3]+0x00007810u); // 802D0560
  cmps(c,0,(int32_t)c->r[0],0); // 802D0564
  if (crb(c,2)) { goto L_802D05A4; } // 802D0568
  c->r[31]=0u+0x00000000u; // 802D056C
L_802D0570:;
  c->r[3]=c->r[31]|c->r[31]; // 802D0570
  c->lr=0x802D0578u; f_802D1968(c); // 802D0574
  c->r[31]=c->r[31]+0x00000001u; // 802D0578
  cmps(c,0,(int32_t)c->r[31],16); // 802D057C
  if (crb(c,0)) { IRQCHK(c); goto L_802D0570; } // 802D0580
  c->r[3]=0u+0x80430000u; // 802D0584
  c->r[31]=R32(c->r[3]+0x00007348u); // 802D0588
  goto L_802D059C; // 802D058C
L_802D0590:;
  c->r[3]=c->r[31]|c->r[31]; // 802D0590
  c->lr=0x802D0598u; f_802D0C74(c); // 802D0594
  c->r[31]=R32(c->r[31]+0x00000000u); // 802D0598
L_802D059C:;
  cmps(c,0,(int32_t)c->r[31],0); // 802D059C
  if (!crb(c,2)) { IRQCHK(c); goto L_802D0590; } // 802D05A0
L_802D05A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D05A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D05A8
  c->lr=c->r[0]; // 802D05AC
  c->r[1]=c->r[1]+0x00000010u; // 802D05B0
  return; // 802D05B4
}

// fn_802D05B8
void f_802D05B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D05B8
  c->r[0]=c->lr; // 802D05BC
  c->r[7]=c->r[5]+0x80000000u; // 802D05C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D05C4
  c->r[5]=rotl(c->r[7],31)&0x7FFFFFFFu; // 802D05C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D05CC
  c->r[31]=c->r[3]|c->r[3]; // 802D05D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802D05D4
  c->r[30]=0u+0x00000000u; // 802D05D8
  c->r[0]=R32(c->r[4]+0x00000000u); // 802D05DC
  c->r[6]=c->r[4]+c->r[0]; // 802D05E0
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 802D05E4
  W32(c->r[3]+0x00000004u,c->r[6]); // 802D05E8
  c->r[6]=R32(c->r[4]+0x00000004u); // 802D05EC
  c->r[6]=c->r[4]+c->r[6]; // 802D05F0
  W32(c->r[3]+0x00000008u,c->r[6]); // 802D05F4
  c->r[6]=R32(c->r[4]+0x00000008u); // 802D05F8
  c->r[6]=c->r[4]+c->r[6]; // 802D05FC
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 802D0600
  c->r[6]=R32(c->r[4]+0x0000000Cu); // 802D0604
  c->r[6]=c->r[4]+c->r[6]; // 802D0608
  W32(c->r[3]+0x00000010u,c->r[6]); // 802D060C
  c->r[6]=R32(c->r[4]+0x00000010u); // 802D0610
  c->r[6]=c->r[4]+c->r[6]; // 802D0614
  W32(c->r[3]+0x00000014u,c->r[6]); // 802D0618
  c->r[6]=R32(c->r[4]+0x00000014u); // 802D061C
  c->r[4]=c->r[4]+c->r[6]; // 802D0620
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 802D0624
  W32(c->r[3]+0x00000018u,c->r[4]); // 802D0628
  W32(c->r[3]+0x00000020u,c->r[7]); // 802D062C
  W32(c->r[3]+0x00000024u,c->r[0]); // 802D0630
  W32(c->r[3]+0x00000068u,c->r[30]); // 802D0634
  c->lr=0x802D063Cu; f_802D0844(c); // 802D0638
  c->r[0]=c->r[31]+0x000000FCu; // 802D063C
  W32(c->r[31]+0x00000400u,c->r[30]); // 802D0640
  c->r[3]=c->r[31]|c->r[31]; // 802D0644
  c->r[5]=0u+0x00000000u; // 802D0648
  W32(c->r[31]+0x000003FCu,c->r[0]); // 802D064C
  c->r[0]=0u+0x00000004u; // 802D0650
  W32(c->r[31]+0x00000404u,c->r[30]); // 802D0654
L_802D0658:;
  c->r[4]=c->r[3]|c->r[3]; // 802D0658
  c->ctr=c->r[0]; // 802D065C
L_802D0660:;
  W32(c->r[4]+0x00000408u,c->r[30]); // 802D0660
  W32(c->r[4]+0x0000040Cu,c->r[30]); // 802D0664
  W32(c->r[4]+0x00000410u,c->r[30]); // 802D0668
  W32(c->r[4]+0x00000414u,c->r[30]); // 802D066C
  W32(c->r[4]+0x00000418u,c->r[30]); // 802D0670
  W32(c->r[4]+0x0000041Cu,c->r[30]); // 802D0674
  W32(c->r[4]+0x00000420u,c->r[30]); // 802D0678
  W32(c->r[4]+0x00000424u,c->r[30]); // 802D067C
  W32(c->r[4]+0x00000428u,c->r[30]); // 802D0680
  W32(c->r[4]+0x0000042Cu,c->r[30]); // 802D0684
  W32(c->r[4]+0x00000430u,c->r[30]); // 802D0688
  W32(c->r[4]+0x00000434u,c->r[30]); // 802D068C
  W32(c->r[4]+0x00000438u,c->r[30]); // 802D0690
  W32(c->r[4]+0x0000043Cu,c->r[30]); // 802D0694
  W32(c->r[4]+0x00000440u,c->r[30]); // 802D0698
  W32(c->r[4]+0x00000444u,c->r[30]); // 802D069C
  W32(c->r[4]+0x00000448u,c->r[30]); // 802D06A0
  W32(c->r[4]+0x0000044Cu,c->r[30]); // 802D06A4
  W32(c->r[4]+0x00000450u,c->r[30]); // 802D06A8
  W32(c->r[4]+0x00000454u,c->r[30]); // 802D06AC
  W32(c->r[4]+0x00000458u,c->r[30]); // 802D06B0
  W32(c->r[4]+0x0000045Cu,c->r[30]); // 802D06B4
  W32(c->r[4]+0x00000460u,c->r[30]); // 802D06B8
  W32(c->r[4]+0x00000464u,c->r[30]); // 802D06BC
  W32(c->r[4]+0x00000468u,c->r[30]); // 802D06C0
  W32(c->r[4]+0x0000046Cu,c->r[30]); // 802D06C4
  W32(c->r[4]+0x00000470u,c->r[30]); // 802D06C8
  W32(c->r[4]+0x00000474u,c->r[30]); // 802D06CC
  W32(c->r[4]+0x00000478u,c->r[30]); // 802D06D0
  W32(c->r[4]+0x0000047Cu,c->r[30]); // 802D06D4
  W32(c->r[4]+0x00000480u,c->r[30]); // 802D06D8
  W32(c->r[4]+0x00000484u,c->r[30]); // 802D06DC
  c->r[4]=c->r[4]+0x00000080u; // 802D06E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802D0660; } // 802D06E4
  c->r[5]=c->r[5]+0x00000001u; // 802D06E8
  c->r[3]=c->r[3]+0x00000200u; // 802D06EC
  cmpu(c,0,c->r[5],0x00000010u); // 802D06F0
  if (crb(c,0)) { IRQCHK(c); goto L_802D0658; } // 802D06F4
  c->lr=0x802D06FCu; f_80160C68(c); // 802D06F8
  c->r[4]=0u+0x80430000u; // 802D06FC
  c->r[0]=R32(c->r[4]+0x00007348u); // 802D0700
  cmps(c,0,(int32_t)c->r[0],0); // 802D0704
  if (crb(c,2)) { goto L_802D0714; } // 802D0708
  W32(c->r[31]+0x00000000u,c->r[0]); // 802D070C
  goto L_802D071C; // 802D0710
L_802D0714:;
  c->r[0]=0u+0x00000000u; // 802D0714
  W32(c->r[31]+0x00000000u,c->r[0]); // 802D0718
L_802D071C:;
  c->r[4]=0u+0x80430000u; // 802D071C
  W32(c->r[4]+0x00007348u,c->r[31]); // 802D0720
  c->lr=0x802D0728u; f_80160C90(c); // 802D0724
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D0728
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D072C
  c->r[30]=R32(c->r[1]+0x00000008u); // 802D0730
  c->lr=c->r[0]; // 802D0734
  c->r[1]=c->r[1]+0x00000010u; // 802D0738
  return; // 802D073C
}

// HBMSYNQuitSynth
void f_802D0740(Ctx* __restrict c) {
  trace_call(0x802D0740u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D0740
  c->r[0]=c->lr; // 802D0744
  W32(c->r[1]+0x00000034u,c->r[0]); // 802D0748
  c->r[11]=c->r[1]+0x00000030u; // 802D074C
  c->lr=0x802D0754u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802D0750
  c->r[25]=c->r[3]|c->r[3]; // 802D0754
  c->lr=0x802D075Cu; f_80160C68(c); // 802D0758
  c->r[0]=R32(c->r[25]+0x00000404u); // 802D075C
  c->r[27]=c->r[3]|c->r[3]; // 802D0760
  cmps(c,0,(int32_t)c->r[0],0); // 802D0764
  if (crb(c,2)) { goto L_802D07C0; } // 802D0768
  c->r[28]=0u+0x00000000u; // 802D076C
  c->r[29]=0u+0x00000000u; // 802D0770
  c->r[31]=0u+0x00000000u; // 802D0774
  c->r[30]=0u+0x80430000u; // 802D0778
L_802D077C:;
  c->r[0]=R32(c->r[30]+0x0000734Cu); // 802D077C
  c->r[26]=c->r[0]+c->r[29]; // 802D0780
  c->r[0]=R32(c->r[26]+0x00000008u); // 802D0784
  cmpu(c,0,c->r[0],c->r[25]); // 802D0788
  if (!crb(c,2)) { goto L_802D07B0; } // 802D078C
  c->r[3]=R32(c->r[26]+0x00000004u); // 802D0790
  c->lr=0x802D0798u; f_802CF6C4(c); // 802D0794
  c->r[3]=R32(c->r[26]+0x00000004u); // 802D0798
  c->r[3]=R32(c->r[3]+0x00000018u); // 802D079C
  c->lr=0x802D07A4u; f_802D03A4(c); // 802D07A0
  c->r[3]=R32(c->r[26]+0x00000004u); // 802D07A4
  c->lr=0x802D07ACu; f_80178BA4(c); // 802D07A8
  W32(c->r[26]+0x00000008u,c->r[31]); // 802D07AC
L_802D07B0:;
  c->r[28]=c->r[28]+0x00000001u; // 802D07B0
  c->r[29]=c->r[29]+0x0000004Cu; // 802D07B4
  cmps(c,0,(int32_t)c->r[28],16); // 802D07B8
  if (crb(c,0)) { IRQCHK(c); goto L_802D077C; } // 802D07BC
L_802D07C0:;
  c->r[3]=c->r[25]|c->r[25]; // 802D07C0
  c->lr=0x802D07C8u; f_802D03D0(c); // 802D07C4
  c->r[3]=c->r[27]|c->r[27]; // 802D07C8
  c->lr=0x802D07D0u; f_80160C90(c); // 802D07CC
  c->r[11]=c->r[1]+0x00000030u; // 802D07D0
  c->lr=0x802D07D8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802D07D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 802D07D8
  c->lr=c->r[0]; // 802D07DC
  c->r[1]=c->r[1]+0x00000030u; // 802D07E0
  return; // 802D07E4
}

// fn_802D07E8
void f_802D07E8(Ctx* __restrict c) {
  c->r[0]=R8(c->r[4]+0x00000000u); // 802D07E8
  c->r[5]=R32(c->r[3]+0x000003FCu); // 802D07EC
  W8(c->r[5]+0x00000000u,c->r[0]); // 802D07F0
  c->r[5]=R32(c->r[3]+0x000003FCu); // 802D07F4
  c->r[5]=c->r[5]+0x00000001u; // 802D07F8
  W32(c->r[3]+0x000003FCu,c->r[5]); // 802D07FC
  c->r[0]=R8(c->r[4]+0x00000001u); // 802D0800
  W8(c->r[5]+0x00000000u,c->r[0]); // 802D0804
  c->r[5]=R32(c->r[3]+0x000003FCu); // 802D0808
  c->r[5]=c->r[5]+0x00000001u; // 802D080C
  W32(c->r[3]+0x000003FCu,c->r[5]); // 802D0810
  c->r[0]=R8(c->r[4]+0x00000002u); // 802D0814
  W8(c->r[5]+0x00000000u,c->r[0]); // 802D0818
  c->r[5]=R32(c->r[3]+0x000003FCu); // 802D081C
  c->r[4]=R32(c->r[3]+0x00000400u); // 802D0820
  c->r[5]=c->r[5]+0x00000001u; // 802D0824
  c->r[0]=c->r[4]+0x00000001u; // 802D0828
  W32(c->r[3]+0x000003FCu,c->r[5]); // 802D082C
  W32(c->r[3]+0x00000400u,c->r[0]); // 802D0830
  return; // 802D0834
}

// fn_802D0838
void f_802D0838(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],16)&0xFFFF0000u; // 802D0838
  W32(c->r[3]+0x00000068u,c->r[0]); // 802D083C
  return; // 802D0840
}

// fn_802D0844
void f_802D0844(Ctx* __restrict c) {
  c->r[5]=0u+0x80350000u; // 802D0844
  c->r[0]=0u+0x00000002u; // 802D0848
  c->r[4]=c->r[5]+0xFFFFA7A0u; // 802D084C
  c->r[7]=R32(c->r[5]+0xFFFFA7A0u); // 802D0850
  c->r[6]=R32(c->r[4]+0x00000190u); // 802D0854
  c->r[9]=0u+0x00000000u; // 802D0858
  c->r[4]=0u+0x00000040u; // 802D085C
  c->ctr=c->r[0]; // 802D0860
L_802D0864:;
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 802D0864
  c->r[5]=R32(c->r[3]+0x00000008u); // 802D0868
  c->r[8]=c->r[3]+c->r[0]; // 802D086C
  W32(c->r[8]+0x00000028u,c->r[5]); // 802D0870
  c->r[0]=rotl(c->r[9],0)&0x000000FFu; // 802D0874
  c->r[5]=c->r[3]+c->r[0]; // 802D0878
  c->r[9]=c->r[9]+0x00000008u; // 802D087C
  W32(c->r[8]+0x0000006Cu,c->r[6]); // 802D0880
  W8(c->r[5]+0x000000ECu,c->r[4]); // 802D0884
  W32(c->r[8]+0x000000ACu,c->r[7]); // 802D0888
  c->r[0]=R32(c->r[3]+0x00000008u); // 802D088C
  W32(c->r[8]+0x0000002Cu,c->r[0]); // 802D0890
  W32(c->r[8]+0x00000070u,c->r[6]); // 802D0894
  W8(c->r[5]+0x000000EDu,c->r[4]); // 802D0898
  W32(c->r[8]+0x000000B0u,c->r[7]); // 802D089C
  c->r[0]=R32(c->r[3]+0x00000008u); // 802D08A0
  W32(c->r[8]+0x00000030u,c->r[0]); // 802D08A4
  W32(c->r[8]+0x00000074u,c->r[6]); // 802D08A8
  W8(c->r[5]+0x000000EEu,c->r[4]); // 802D08AC
  W32(c->r[8]+0x000000B4u,c->r[7]); // 802D08B0
  c->r[0]=R32(c->r[3]+0x00000008u); // 802D08B4
  W32(c->r[8]+0x00000034u,c->r[0]); // 802D08B8
  W32(c->r[8]+0x00000078u,c->r[6]); // 802D08BC
  W8(c->r[5]+0x000000EFu,c->r[4]); // 802D08C0
  W32(c->r[8]+0x000000B8u,c->r[7]); // 802D08C4
  c->r[0]=R32(c->r[3]+0x00000008u); // 802D08C8
  W32(c->r[8]+0x00000038u,c->r[0]); // 802D08CC
  W32(c->r[8]+0x0000007Cu,c->r[6]); // 802D08D0
  W8(c->r[5]+0x000000F0u,c->r[4]); // 802D08D4
  W32(c->r[8]+0x000000BCu,c->r[7]); // 802D08D8
  c->r[0]=R32(c->r[3]+0x00000008u); // 802D08DC
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 802D08E0
  W32(c->r[8]+0x00000080u,c->r[6]); // 802D08E4
  W8(c->r[5]+0x000000F1u,c->r[4]); // 802D08E8
  W32(c->r[8]+0x000000C0u,c->r[7]); // 802D08EC
  c->r[0]=R32(c->r[3]+0x00000008u); // 802D08F0
  W32(c->r[8]+0x00000040u,c->r[0]); // 802D08F4
  W32(c->r[8]+0x00000084u,c->r[6]); // 802D08F8
  W8(c->r[5]+0x000000F2u,c->r[4]); // 802D08FC
  W32(c->r[8]+0x000000C4u,c->r[7]); // 802D0900
  c->r[0]=R32(c->r[3]+0x00000008u); // 802D0904
  W32(c->r[8]+0x00000044u,c->r[0]); // 802D0908
  W32(c->r[8]+0x00000088u,c->r[6]); // 802D090C
  W8(c->r[5]+0x000000F3u,c->r[4]); // 802D0910
  W32(c->r[8]+0x000000C8u,c->r[7]); // 802D0914
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802D0864; } // 802D0918
  return; // 802D091C
}

// fn_802D0920
void f_802D0920(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D0920
  c->r[0]=c->lr; // 802D0924
  W32(c->r[1]+0x00000034u,c->r[0]); // 802D0928
  c->r[11]=c->r[1]+0x00000030u; // 802D092C
  c->lr=0x802D0934u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802D0930
  cmps(c,0,(int32_t)c->r[6],0); // 802D0934
  c->r[23]=c->r[3]|c->r[3]; // 802D0938
  c->r[24]=c->r[4]|c->r[4]; // 802D093C
  c->r[25]=c->r[5]|c->r[5]; // 802D0940
  c->r[26]=c->r[6]|c->r[6]; // 802D0944
  if (crb(c,2)) { goto L_802D0B0C; } // 802D0948
  c->r[0]=rotl(c->r[4],9)&0x0001FE00u; // 802D094C
  c->r[31]=rotl(c->r[5],2)&0x000003FCu; // 802D0950
  c->r[3]=c->r[3]+c->r[0]; // 802D0954
  c->r[30]=c->r[3]+0x00000408u; // 802D0958
  c->r[3]=R32(c->r[30]+c->r[31]); // 802D095C
  cmps(c,0,(int32_t)c->r[3],0); // 802D0960
  if (crb(c,2)) { goto L_802D0974; } // 802D0964
  c->lr=0x802D096Cu; f_802D195C(c); // 802D0968
  c->r[0]=0u+0x00000000u; // 802D096C
  W32(c->r[30]+c->r[31],c->r[0]); // 802D0970
L_802D0974:;
  c->r[4]=0u+0x802D0000u; // 802D0974
  c->r[5]=c->r[23]|c->r[23]; // 802D0978
  c->r[4]=c->r[4]+0x000018B8u; // 802D097C
  c->r[3]=0u+0x0000001Fu; // 802D0980
  c->lr=0x802D0988u; f_80178C20(c); // 802D0984
  cmps(c,0,(int32_t)c->r[3],0); // 802D0988
  c->r[29]=c->r[3]|c->r[3]; // 802D098C
  if (crb(c,2)) { goto L_802D0B34; } // 802D0990
  c->r[3]=R32(c->r[3]+0x00000018u); // 802D0994
  c->lr=0x802D099Cu; f_802D0314(c); // 802D0998
  cmps(c,0,(int32_t)c->r[3],0); // 802D099C
  c->r[28]=c->r[3]|c->r[3]; // 802D09A0
  if (crb(c,0)) { goto L_802D0B00; } // 802D09A4
  c->r[5]=0u+0x80430000u; // 802D09A8
  c->r[0]=rotl(c->r[24],2)&0x000003FCu; // 802D09AC
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)76); // 802D09B0
  c->r[5]=R32(c->r[5]+0x0000734Cu); // 802D09B4
  c->r[3]=c->r[23]+c->r[0]; // 802D09B8
  c->r[0]=rotl(c->r[25],1)&0x000001FEu; // 802D09BC
  c->r[27]=c->r[5]+c->r[4]; // 802D09C0
  W32(c->r[27]+0x00000004u,c->r[29]); // 802D09C4
  W32(c->r[27]+0x00000008u,c->r[23]); // 802D09C8
  W8(c->r[27]+0x0000000Cu,c->r[24]); // 802D09CC
  W8(c->r[27]+0x0000000Du,c->r[25]); // 802D09D0
  W8(c->r[27]+0x0000000Eu,c->r[26]); // 802D09D4
  c->r[3]=R32(c->r[3]+0x00000028u); // 802D09D8
  c->r[0]=R16(c->r[3]+c->r[0]); // 802D09DC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 802D09E0
  if (!crb(c,2)) { goto L_802D09F0; } // 802D09E4
  c->r[5]=0u+0x00000000u; // 802D09E8
  goto L_802D0A40; // 802D09EC
L_802D09F0:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 802D09F0
  c->r[3]=R32(c->r[23]+0x0000000Cu); // 802D09F4
  c->r[5]=0u+0x00000001u; // 802D09F8
  c->r[4]=c->r[3]+c->r[0]; // 802D09FC
  W32(c->r[27]+0x00000010u,c->r[4]); // 802D0A00
  c->r[0]=R32(c->r[4]+0x00000010u); // 802D0A04
  c->r[3]=R32(c->r[23]+0x00000010u); // 802D0A08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)80); // 802D0A0C
  c->r[0]=c->r[3]+c->r[0]; // 802D0A10
  W32(c->r[27]+0x00000014u,c->r[0]); // 802D0A14
  c->r[0]=R32(c->r[4]+0x00000014u); // 802D0A18
  c->r[3]=R32(c->r[23]+0x00000014u); // 802D0A1C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802D0A20
  c->r[3]=c->r[3]+c->r[0]; // 802D0A24
  W32(c->r[27]+0x00000018u,c->r[3]); // 802D0A28
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 802D0A2C
  c->r[3]=R32(c->r[23]+0x00000018u); // 802D0A30
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)46); // 802D0A34
  c->r[0]=c->r[3]+c->r[0]; // 802D0A38
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 802D0A3C
L_802D0A40:;
  cmps(c,0,(int32_t)c->r[5],0); // 802D0A40
  if (crb(c,2)) { goto L_802D0ADC; } // 802D0A44
  W32(c->r[30]+c->r[31],c->r[27]); // 802D0A48
  c->r[3]=c->r[27]|c->r[27]; // 802D0A4C
  c->r[4]=R32(c->r[23]+0x00000404u); // 802D0A50
  c->r[0]=c->r[4]+0x00000001u; // 802D0A54
  W32(c->r[23]+0x00000404u,c->r[0]); // 802D0A58
  c->lr=0x802D0A60u; f_802D12E8(c); // 802D0A5C
  c->r[3]=c->r[27]|c->r[27]; // 802D0A60
  c->lr=0x802D0A68u; f_802D10C0(c); // 802D0A64
  c->r[3]=c->r[27]|c->r[27]; // 802D0A68
  c->lr=0x802D0A70u; f_802D10E8(c); // 802D0A6C
  c->r[3]=c->r[27]|c->r[27]; // 802D0A70
  c->lr=0x802D0A78u; f_802D0CDC(c); // 802D0A74
  c->r[3]=c->r[27]|c->r[27]; // 802D0A78
  c->lr=0x802D0A80u; f_802D1114(c); // 802D0A7C
  c->r[25]=c->r[3]|c->r[3]; // 802D0A80
  c->r[3]=c->r[27]|c->r[27]; // 802D0A84
  c->lr=0x802D0A8Cu; f_802D1100(c); // 802D0A88
  c->r[0]=rotl(c->r[24],2)&0x000003FCu; // 802D0A8C
  c->r[4]=c->r[3]|c->r[3]; // 802D0A90
  c->r[6]=c->r[23]+c->r[0]; // 802D0A94
  c->r[5]=c->r[23]+c->r[24]; // 802D0A98
  c->r[0]=R32(c->r[6]+0x000000ACu); // 802D0A9C
  c->r[3]=c->r[29]|c->r[29]; // 802D0AA0
  c->r[6]=R8(c->r[5]+0x000000ECu); // 802D0AA4
  c->r[7]=c->r[25]|c->r[25]; // 802D0AA8
  c->r[5]=sraw(c,c->r[0],16); // 802D0AAC
  c->lr=0x802D0AB4u; f_802CED74(c); // 802D0AB0
  c->r[3]=c->r[27]|c->r[27]; // 802D0AB4
  c->lr=0x802D0ABCu; f_802D187C(c); // 802D0AB8
  c->r[3]=c->r[27]|c->r[27]; // 802D0ABC
  c->lr=0x802D0AC4u; f_802D1350(c); // 802D0AC0
  c->r[0]=0u+0x00000001u; // 802D0AC4
  W16(c->r[29]+0x00000038u,c->r[0]); // 802D0AC8
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 802D0ACC
  c->r[0]=c->r[0]|0x00000004u; // 802D0AD0
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 802D0AD4
  goto L_802D0B34; // 802D0AD8
L_802D0ADC:;
  c->r[0]=0u+0x00000000u; // 802D0ADC
  c->r[3]=c->r[29]|c->r[29]; // 802D0AE0
  W32(c->r[27]+0x00000008u,c->r[0]); // 802D0AE4
  c->lr=0x802D0AECu; f_802CF6C4(c); // 802D0AE8
  c->r[3]=c->r[28]|c->r[28]; // 802D0AEC
  c->lr=0x802D0AF4u; f_802D037C(c); // 802D0AF0
  c->r[3]=c->r[29]|c->r[29]; // 802D0AF4
  c->lr=0x802D0AFCu; f_80178BA4(c); // 802D0AF8
  goto L_802D0B34; // 802D0AFC
L_802D0B00:;
  c->r[3]=c->r[29]|c->r[29]; // 802D0B00
  c->lr=0x802D0B08u; f_80178BA4(c); // 802D0B04
  goto L_802D0B34; // 802D0B08
L_802D0B0C:;
  c->r[4]=rotl(c->r[4],9)&0x0001FE00u; // 802D0B0C
  c->r[0]=rotl(c->r[5],2)&0x000003FCu; // 802D0B10
  c->r[3]=c->r[3]+c->r[4]; // 802D0B14
  c->r[23]=c->r[3]+c->r[0]; // 802D0B18
  c->r[3]=R32(c->r[23]+0x00000408u); // 802D0B1C
  cmps(c,0,(int32_t)c->r[3],0); // 802D0B20
  if (crb(c,2)) { goto L_802D0B34; } // 802D0B24
  c->lr=0x802D0B2Cu; f_802D195C(c); // 802D0B28
  c->r[0]=0u+0x00000000u; // 802D0B2C
  W32(c->r[23]+0x00000408u,c->r[0]); // 802D0B30
L_802D0B34:;
  c->r[11]=c->r[1]+0x00000030u; // 802D0B34
  c->lr=0x802D0B3Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802D0B38
  c->r[0]=R32(c->r[1]+0x00000034u); // 802D0B3C
  c->lr=c->r[0]; // 802D0B40
  c->r[1]=c->r[1]+0x00000030u; // 802D0B44
  return; // 802D0B48
}

// fn_802D0B4C
void f_802D0B4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D0B4C
  c->r[0]=c->lr; // 802D0B50
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D0B54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D0B58
  c->r[6]=R8(c->r[4]+0x00000000u); // 802D0B5C
  c->r[5]=R8(c->r[4]+0x00000001u); // 802D0B60
  c->r[0]=sraw(c,c->r[6],4); // 802D0B64
  c->r[7]=rotl(c->r[6],0)&0x0000000Fu; // 802D0B68
  cmps(c,0,(int32_t)c->r[0],10); // 802D0B6C
  if (crb(c,2)) { goto L_802D0C60; } // 802D0B70
  if (!crb(c,0)) { goto L_802D0B88; } // 802D0B74
  cmps(c,0,(int32_t)c->r[0],8); // 802D0B78
  if (crb(c,2)) { goto L_802D0B98; } // 802D0B7C
  if (!crb(c,0)) { goto L_802D0BC4; } // 802D0B80
  goto L_802D0C60; // 802D0B84
L_802D0B88:;
  cmps(c,0,(int32_t)c->r[0],12); // 802D0B88
  if (crb(c,2)) { goto L_802D0C48; } // 802D0B8C
  if (!crb(c,0)) { goto L_802D0C60; } // 802D0B90
  goto L_802D0BD4; // 802D0B94
L_802D0B98:;
  c->r[4]=rotl(c->r[7],9)&0x0001FE00u; // 802D0B98
  c->r[0]=rotl(c->r[5],2)&0x000003FCu; // 802D0B9C
  c->r[3]=c->r[3]+c->r[4]; // 802D0BA0
  c->r[31]=c->r[3]+c->r[0]; // 802D0BA4
  c->r[3]=R32(c->r[31]+0x00000408u); // 802D0BA8
  cmps(c,0,(int32_t)c->r[3],0); // 802D0BAC
  if (crb(c,2)) { goto L_802D0C60; } // 802D0BB0
  c->lr=0x802D0BB8u; f_802D195C(c); // 802D0BB4
  c->r[0]=0u+0x00000000u; // 802D0BB8
  W32(c->r[31]+0x00000408u,c->r[0]); // 802D0BBC
  goto L_802D0C60; // 802D0BC0
L_802D0BC4:;
  c->r[6]=R8(c->r[4]+0x00000002u); // 802D0BC4
  c->r[4]=c->r[7]|c->r[7]; // 802D0BC8
  c->lr=0x802D0BD0u; f_802D0920(c); // 802D0BCC
  goto L_802D0C60; // 802D0BD0
L_802D0BD4:;
  cmps(c,0,(int32_t)c->r[5],10); // 802D0BD4
  c->r[6]=R8(c->r[4]+0x00000002u); // 802D0BD8
  if (crb(c,2)) { goto L_802D0C1C; } // 802D0BDC
  if (!crb(c,0)) { goto L_802D0BF0; } // 802D0BE0
  cmps(c,0,(int32_t)c->r[5],7); // 802D0BE4
  if (crb(c,2)) { goto L_802D0BFC; } // 802D0BE8
  goto L_802D0C60; // 802D0BEC
L_802D0BF0:;
  cmps(c,0,(int32_t)c->r[5],91); // 802D0BF0
  if (crb(c,2)) { goto L_802D0C28; } // 802D0BF4
  goto L_802D0C60; // 802D0BF8
L_802D0BFC:;
  c->r[4]=0u+0x80350000u; // 802D0BFC
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 802D0C00
  c->r[5]=rotl(c->r[6],2)&0x000003FCu; // 802D0C04
  c->r[4]=c->r[4]+0xFFFFA7A0u; // 802D0C08
  c->r[3]=c->r[3]+c->r[0]; // 802D0C0C
  c->r[0]=R32(c->r[4]+c->r[5]); // 802D0C10
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 802D0C14
  goto L_802D0C60; // 802D0C18
L_802D0C1C:;
  c->r[3]=c->r[3]+c->r[7]; // 802D0C1C
  W8(c->r[3]+0x000000ECu,c->r[6]); // 802D0C20
  goto L_802D0C60; // 802D0C24
L_802D0C28:;
  c->r[4]=0u+0x80350000u; // 802D0C28
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 802D0C2C
  c->r[5]=rotl(c->r[6],2)&0x000003FCu; // 802D0C30
  c->r[4]=c->r[4]+0xFFFFA7A0u; // 802D0C34
  c->r[3]=c->r[3]+c->r[0]; // 802D0C38
  c->r[0]=R32(c->r[4]+c->r[5]); // 802D0C3C
  W32(c->r[3]+0x000000ACu,c->r[0]); // 802D0C40
  goto L_802D0C60; // 802D0C44
L_802D0C48:;
  c->r[6]=R32(c->r[3]+0x00000008u); // 802D0C48
  c->r[4]=rotl(c->r[5],8)&0x0000FF00u; // 802D0C4C
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 802D0C50
  c->r[4]=c->r[6]+c->r[4]; // 802D0C54
  c->r[3]=c->r[3]+c->r[0]; // 802D0C58
  W32(c->r[3]+0x00000028u,c->r[4]); // 802D0C5C
L_802D0C60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D0C60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D0C64
  c->lr=c->r[0]; // 802D0C68
  c->r[1]=c->r[1]+0x00000010u; // 802D0C6C
  return; // 802D0C70
}

// fn_802D0C74
void f_802D0C74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D0C74
  c->r[0]=c->lr; // 802D0C78
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D0C7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D0C80
  c->r[31]=c->r[3]+0x000000FCu; // 802D0C84
  W32(c->r[1]+0x00000008u,c->r[30]); // 802D0C88
  c->r[30]=c->r[3]|c->r[3]; // 802D0C8C
  goto L_802D0CB0; // 802D0C90
L_802D0C94:;
  c->r[3]=c->r[30]|c->r[30]; // 802D0C94
  c->r[4]=c->r[31]|c->r[31]; // 802D0C98
  c->lr=0x802D0CA0u; f_802D0B4C(c); // 802D0C9C
  c->r[3]=R32(c->r[30]+0x00000400u); // 802D0CA0
  c->r[31]=c->r[31]+0x00000003u; // 802D0CA4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 802D0CA8
  W32(c->r[30]+0x00000400u,c->r[0]); // 802D0CAC
L_802D0CB0:;
  c->r[0]=R32(c->r[30]+0x00000400u); // 802D0CB0
  cmps(c,0,(int32_t)c->r[0],0); // 802D0CB4
  if (!crb(c,2)) { IRQCHK(c); goto L_802D0C94; } // 802D0CB8
  c->r[0]=c->r[30]+0x000000FCu; // 802D0CBC
  W32(c->r[30]+0x000003FCu,c->r[0]); // 802D0CC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D0CC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 802D0CC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D0CCC
  c->lr=c->r[0]; // 802D0CD0
  c->r[1]=c->r[1]+0x00000010u; // 802D0CD4
  return; // 802D0CD8
}

// fn_802D0CDC
void f_802D0CDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D0CDC
  c->r[0]=c->lr; // 802D0CE0
  W32(c->r[1]+0x00000034u,c->r[0]); // 802D0CE4
  c->r[0]=0u+0x43300000u; // 802D0CE8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802D0CEC
  c->r[31]=0u+0x80310000u; // 802D0CF0
  c->r[31]=c->r[31]+0xFFFFD8A8u; // 802D0CF4
  W32(c->r[1]+0x00000028u,c->r[30]); // 802D0CF8
  c->r[30]=c->r[3]|c->r[3]; // 802D0CFC
  c->r[6]=R32(c->r[3]+0x00000014u); // 802D0D00
  W32(c->r[1]+0x00000008u,c->r[0]); // 802D0D04
  c->r[4]=R32(c->r[6]+0x00000018u); // 802D0D08
  W32(c->r[1]+0x00000010u,c->r[0]); // 802D0D0C
  c->r[0]=c->r[4]+0x80000000u; // 802D0D10
  cmpu(c,0,c->r[0],0x00000000u); // 802D0D14
  if (!crb(c,2)) { goto L_802D0D50; } // 802D0D18
  c->r[4]=0u+0x00000001u; // 802D0D1C
  c->r[0]=0u+0x00000000u; // 802D0D20
  W32(c->r[3]+0x00000030u,c->r[4]); // 802D0D24
  W32(c->r[3]+0x00000034u,c->r[0]); // 802D0D28
  c->r[4]=R32(c->r[6]+0x0000001Cu); // 802D0D2C
  c->r[0]=c->r[4]+0x80000000u; // 802D0D30
  cmpu(c,0,c->r[0],0x00000000u); // 802D0D34
  if (!crb(c,2)) { goto L_802D0E6C; } // 802D0D38
  c->r[0]=0u+0x00000002u; // 802D0D3C
  W32(c->r[3]+0x00000030u,c->r[0]); // 802D0D40
  c->r[0]=R32(c->r[6]+0x00000020u); // 802D0D44
  W32(c->r[3]+0x00000034u,c->r[0]); // 802D0D48
  goto L_802D0E6C; // 802D0D4C
L_802D0D50:;
  c->r[5]=R8(c->r[3]+0x0000000Eu); // 802D0D50
  c->r[3]=R32(c->r[6]+0x00000028u); // 802D0D54
  if (!crb(c,2)) { goto L_802D0D64; } // 802D0D58
  c->r[4]=0u+0x00000000u; // 802D0D5C
  goto L_802D0E14; // 802D0D60
L_802D0D64:;
  c->r[0]=c->r[3]+0x80000000u; // 802D0D64
  cmpu(c,0,c->r[0],0x00000000u); // 802D0D68
  if (!crb(c,2)) { goto L_802D0DB0; } // 802D0D6C
  c->r[0]=c->r[4]^0x80000000u; // 802D0D70
  {uint32_t ea=c->r[31]+0x00000018u; c->f[3]=RF64(ea);} // 802D0D74
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802D0D78
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0D7C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 802D0D80
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=RF64(ea);} // 802D0D84
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802D0D88
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 802D0D8C
  c->lr=0x802D0D94u; f_801968E4(c); // 802D0D90
  c->f[1]=c->ps1[1]=S(c->f[1]); // 802D0D94
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0D98
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 802D0D9C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802D0DA0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 802D0DA4
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 802D0DA8
  goto L_802D0E14; // 802D0DAC
L_802D0DB0:;
  c->r[0]=c->r[3]^0x80000000u; // 802D0DB0
  c->r[4]=c->r[4]^0x80000000u; // 802D0DB4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802D0DB8
  c->r[3]=0u+0x80350000u; // 802D0DBC
  {uint32_t ea=c->r[31]+0x00000018u; c->f[4]=RF64(ea);} // 802D0DC0
  c->r[0]=rotl(c->r[5],2)&0x000003FCu; // 802D0DC4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 802D0DC8
  c->r[3]=c->r[3]+0xFFFFA5A0u; // 802D0DCC
  W32(c->r[1]+0x00000014u,c->r[4]); // 802D0DD0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 802D0DD4
  {uint32_t ea=c->r[3]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 802D0DD8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 802D0DDC
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0DE0
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[4]); // 802D0DE4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=RF64(ea);} // 802D0DE8
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802D0DEC
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 802D0DF0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 802D0DF4
  c->lr=0x802D0DFCu; f_801968E4(c); // 802D0DF8
  c->f[1]=c->ps1[1]=S(c->f[1]); // 802D0DFC
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0E00
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 802D0E04
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802D0E08
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 802D0E0C
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 802D0E10
L_802D0E14:;
  c->r[3]=0u+0x55550000u; // 802D0E14
  c->r[0]=c->r[3]+0x00005556u; // 802D0E18
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 802D0E1C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 802D0E20
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 802D0E24
  if (crb(c,2)) { goto L_802D0E50; } // 802D0E28
  c->r[0]=0u+0x00640000u; // 802D0E2C
  c->r[4]=0u+0x00000000u; // 802D0E30
  c->r[3]=divw((int32_t)c->r[0],(int32_t)c->r[3]); // 802D0E34
  W32(c->r[30]+0x00000038u,c->r[4]); // 802D0E38
  c->r[0]=0u+0xFC400000u; // 802D0E3C
  W32(c->r[30]+0x00000034u,c->r[0]); // 802D0E40
  W32(c->r[30]+0x00000030u,c->r[4]); // 802D0E44
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 802D0E48
  goto L_802D0E6C; // 802D0E4C
L_802D0E50:;
  c->r[4]=0u+0x00000000u; // 802D0E50
  c->r[3]=0u+0x00640000u; // 802D0E54
  c->r[0]=0u+0xFC400000u; // 802D0E58
  W32(c->r[30]+0x00000038u,c->r[4]); // 802D0E5C
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 802D0E60
  W32(c->r[30]+0x00000034u,c->r[0]); // 802D0E64
  W32(c->r[30]+0x00000030u,c->r[4]); // 802D0E68
L_802D0E6C:;
  c->r[0]=R32(c->r[30]+0x00000030u); // 802D0E6C
  cmpu(c,0,c->r[0],0x00000002u); // 802D0E70
  if (!crb(c,0)) { goto L_802D0F7C; } // 802D0E74
  c->r[4]=R32(c->r[30]+0x00000014u); // 802D0E78
  c->r[5]=R8(c->r[30]+0x0000000Du); // 802D0E7C
  c->r[3]=R32(c->r[4]+0x0000001Cu); // 802D0E80
  c->r[4]=R32(c->r[4]+0x0000002Cu); // 802D0E84
  c->r[0]=c->r[3]+0x80000000u; // 802D0E88
  cmpu(c,0,c->r[0],0x00000000u); // 802D0E8C
  if (!crb(c,2)) { goto L_802D0E9C; } // 802D0E90
  c->r[4]=0u+0x00000000u; // 802D0E94
  goto L_802D0F4C; // 802D0E98
L_802D0E9C:;
  c->r[0]=c->r[4]+0x80000000u; // 802D0E9C
  cmpu(c,0,c->r[0],0x00000000u); // 802D0EA0
  if (!crb(c,2)) { goto L_802D0EE8; } // 802D0EA4
  c->r[0]=c->r[3]^0x80000000u; // 802D0EA8
  {uint32_t ea=c->r[31]+0x00000018u; c->f[3]=RF64(ea);} // 802D0EAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D0EB0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0EB4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 802D0EB8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=RF64(ea);} // 802D0EBC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802D0EC0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 802D0EC4
  c->lr=0x802D0ECCu; f_801968E4(c); // 802D0EC8
  c->f[1]=c->ps1[1]=S(c->f[1]); // 802D0ECC
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0ED0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 802D0ED4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802D0ED8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 802D0EDC
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 802D0EE0
  goto L_802D0F4C; // 802D0EE4
L_802D0EE8:;
  c->r[0]=c->r[4]^0x80000000u; // 802D0EE8
  c->r[4]=c->r[3]^0x80000000u; // 802D0EEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D0EF0
  c->r[3]=0u+0x80350000u; // 802D0EF4
  {uint32_t ea=c->r[31]+0x00000018u; c->f[4]=RF64(ea);} // 802D0EF8
  c->r[0]=rotl(c->r[5],2)&0x000003FCu; // 802D0EFC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 802D0F00
  c->r[3]=c->r[3]+0xFFFFA5A0u; // 802D0F04
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802D0F08
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 802D0F0C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 802D0F10
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 802D0F14
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0F18
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[4]); // 802D0F1C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=RF64(ea);} // 802D0F20
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802D0F24
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 802D0F28
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 802D0F2C
  c->lr=0x802D0F34u; f_801968E4(c); // 802D0F30
  c->f[1]=c->ps1[1]=S(c->f[1]); // 802D0F34
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0F38
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 802D0F3C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802D0F40
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 802D0F44
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 802D0F48
L_802D0F4C:;
  c->r[3]=0u+0x55550000u; // 802D0F4C
  c->r[0]=c->r[3]+0x00005556u; // 802D0F50
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 802D0F54
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 802D0F58
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 802D0F5C
  if (crb(c,2)) { goto L_802D0F74; } // 802D0F60
  c->r[0]=0u+0xFC400000u; // 802D0F64
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[3]); // 802D0F68
  W32(c->r[30]+0x00000040u,c->r[0]); // 802D0F6C
  goto L_802D0F7C; // 802D0F70
L_802D0F74:;
  c->r[0]=0u+0xFC400000u; // 802D0F74
  W32(c->r[30]+0x00000040u,c->r[0]); // 802D0F78
L_802D0F7C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 802D0F7C
  c->r[0]=R32(c->r[3]+0x00000020u); // 802D0F80
  W32(c->r[30]+0x00000044u,c->r[0]); // 802D0F84
  c->r[0]=R32(c->r[3]+0x00000024u); // 802D0F88
  W32(c->r[30]+0x00000048u,c->r[0]); // 802D0F8C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802D0F90
  c->r[30]=R32(c->r[1]+0x00000028u); // 802D0F94
  c->r[0]=R32(c->r[1]+0x00000034u); // 802D0F98
  c->lr=c->r[0]; // 802D0F9C
  c->r[1]=c->r[1]+0x00000030u; // 802D0FA0
  return; // 802D0FA4
}

// fn_802D0FA8
void f_802D0FA8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000030u); // 802D0FA8
  cmps(c,0,(int32_t)c->r[0],2); // 802D0FAC
  if (crb(c,2)) return; // 802D0FB0
  if (!crb(c,0)) { goto L_802D0FC8; } // 802D0FB4
  cmps(c,0,(int32_t)c->r[0],0); // 802D0FB8
  if (crb(c,2)) { goto L_802D0FD4; } // 802D0FBC
  if (!crb(c,0)) { goto L_802D102C; } // 802D0FC0
  return; // 802D0FC4
L_802D0FC8:;
  cmps(c,0,(int32_t)c->r[0],4); // 802D0FC8
  if (!crb(c,0)) return; // 802D0FCC
  goto L_802D1094; // 802D0FD0
L_802D0FD4:;
  c->r[5]=R32(c->r[3]+0x00000038u); // 802D0FD4
  c->r[0]=0u+0x00630000u; // 802D0FD8
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 802D0FDC
  c->r[4]=c->r[5]+c->r[4]; // 802D0FE0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802D0FE4
  W32(c->r[3]+0x00000038u,c->r[4]); // 802D0FE8
  if (crb(c,0)) { goto L_802D0FFC; } // 802D0FEC
  c->r[0]=0u+0x00000000u; // 802D0FF0
  W32(c->r[3]+0x00000034u,c->r[0]); // 802D0FF4
  goto L_802D1014; // 802D0FF8
L_802D0FFC:;
  c->r[0]=sraw(c,c->r[4],16); // 802D0FFC
  c->r[4]=0u+0x80350000u; // 802D1000
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802D1004
  c->r[4]=c->r[4]+0xFFFFA9A0u; // 802D1008
  c->r[0]=R32(c->r[4]+c->r[0]); // 802D100C
  W32(c->r[3]+0x00000034u,c->r[0]); // 802D1010
L_802D1014:;
  c->r[0]=R32(c->r[3]+0x00000034u); // 802D1014
  cmps(c,0,(int32_t)c->r[0],0); // 802D1018
  if (!crb(c,2)) return; // 802D101C
  c->r[0]=0u+0x00000001u; // 802D1020
  W32(c->r[3]+0x00000030u,c->r[0]); // 802D1024
  return; // 802D1028
L_802D102C:;
  c->r[4]=R32(c->r[3]+0x00000034u); // 802D102C
  c->r[0]=R32(c->r[3]+0x00000040u); // 802D1030
  c->r[5]=R32(c->r[3]+0x00000044u); // 802D1034
  c->r[0]=c->r[4]+c->r[0]; // 802D1038
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 802D103C
  W32(c->r[3]+0x00000034u,c->r[0]); // 802D1040
  if (crb(c,1)) { goto L_802D1054; } // 802D1044
  c->r[0]=0u+0x00000002u; // 802D1048
  W32(c->r[3]+0x00000034u,c->r[5]); // 802D104C
  W32(c->r[3]+0x00000030u,c->r[0]); // 802D1050
L_802D1054:;
  c->r[4]=R32(c->r[3]+0x00000034u); // 802D1054
  c->r[0]=0u+0xFD300000u; // 802D1058
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802D105C
  if (crb(c,1)) return; // 802D1060
  c->r[4]=R8(c->r[3]+0x0000000Cu); // 802D1064
  c->r[7]=0u+0x00000004u; // 802D1068
  c->r[0]=R8(c->r[3]+0x0000000Du); // 802D106C
  c->r[6]=0u+0x00000000u; // 802D1070
  c->r[5]=R32(c->r[3]+0x00000008u); // 802D1074
  c->r[4]=rotl(c->r[4],9)&0xFFFFFE00u; // 802D1078
  W32(c->r[3]+0x00000030u,c->r[7]); // 802D107C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802D1080
  c->r[3]=c->r[5]+c->r[4]; // 802D1084
  c->r[3]=c->r[3]+c->r[0]; // 802D1088
  W32(c->r[3]+0x00000408u,c->r[6]); // 802D108C
  return; // 802D1090
L_802D1094:;
  c->r[4]=R32(c->r[3]+0x00000034u); // 802D1094
  c->r[0]=0u+0xFD300000u; // 802D1098
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802D109C
  if (crb(c,1)) { goto L_802D10B0; } // 802D10A0
  c->r[0]=0u+0x00000004u; // 802D10A4
  W32(c->r[3]+0x00000030u,c->r[0]); // 802D10A8
  return; // 802D10AC
L_802D10B0:;
  c->r[0]=R32(c->r[3]+0x00000048u); // 802D10B0
  c->r[0]=c->r[4]+c->r[0]; // 802D10B4
  W32(c->r[3]+0x00000034u,c->r[0]); // 802D10B8
  return; // 802D10BC
}

// fn_802D10C0
void f_802D10C0(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 802D10C0
  c->r[4]=0u+0x80350000u; // 802D10C4
  c->r[5]=R32(c->r[3]+0x00000010u); // 802D10C8
  c->r[4]=c->r[4]+0xFFFFA7A0u; // 802D10CC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802D10D0
  c->r[5]=R32(c->r[5]+0x00000004u); // 802D10D4
  c->r[0]=R32(c->r[4]+c->r[0]); // 802D10D8
  c->r[0]=c->r[5]+c->r[0]; // 802D10DC
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 802D10E0
  return; // 802D10E4
}

// __HBMSYNSetupPan
void f_802D10E8(Ctx* __restrict c) {
  trace_call(0x802D10E8u);
  c->r[4]=R32(c->r[3]+0x00000008u); // 802D10E8
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 802D10EC
  c->r[4]=c->r[4]+c->r[0]; // 802D10F0
  c->r[0]=R8(c->r[4]+0x000000ECu); // 802D10F4
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 802D10F8
  return; // 802D10FC
}

// __HBMSYNGetVoiceInput
void f_802D1100(Ctx* __restrict c) {
  trace_call(0x802D1100u);
  c->r[4]=R32(c->r[3]+0x0000002Cu); // 802D1100
  c->r[0]=R32(c->r[3]+0x00000034u); // 802D1104
  c->r[0]=c->r[4]+c->r[0]; // 802D1108
  c->r[3]=sraw(c,c->r[0],16); // 802D110C
  return; // 802D1110
}

// __HBMSYNGetVoiceFader
void f_802D1114(Ctx* __restrict c) {
  trace_call(0x802D1114u);
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 802D1114
  c->r[4]=R32(c->r[3]+0x00000008u); // 802D1118
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802D111C
  c->r[3]=c->r[4]+c->r[0]; // 802D1120
  c->r[4]=R32(c->r[4]+0x00000068u); // 802D1124
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 802D1128
  c->r[0]=c->r[4]+c->r[0]; // 802D112C
  c->r[3]=sraw(c,c->r[0],16); // 802D1130
  return; // 802D1134
}

// __HBMSYNUpdateMix
void f_802D1138(Ctx* __restrict c) {
  trace_call(0x802D1138u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D1138
  c->r[0]=c->lr; // 802D113C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D1140
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D1144
  c->r[31]=c->r[3]|c->r[3]; // 802D1148
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 802D114C
  c->r[0]=R32(c->r[31]+0x00000034u); // 802D1150
  c->r[3]=R32(c->r[3]+0x00000004u); // 802D1154
  c->r[0]=c->r[4]+c->r[0]; // 802D1158
  c->r[4]=sraw(c,c->r[0],16); // 802D115C
  c->lr=0x802D1164u; f_802CF6F0(c); // 802D1160
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 802D1164
  c->r[4]=R32(c->r[31]+0x00000008u); // 802D1168
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802D116C
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D1170
  c->r[4]=c->r[4]+c->r[0]; // 802D1174
  c->r[0]=R32(c->r[4]+0x000000ACu); // 802D1178
  c->r[4]=sraw(c,c->r[0],16); // 802D117C
  c->lr=0x802D1184u; f_802CF728(c); // 802D1180
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 802D1184
  c->r[5]=R32(c->r[31]+0x00000008u); // 802D1188
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802D118C
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D1190
  c->r[4]=c->r[5]+c->r[0]; // 802D1194
  c->r[5]=R32(c->r[5]+0x00000068u); // 802D1198
  c->r[0]=R32(c->r[4]+0x0000006Cu); // 802D119C
  c->r[0]=c->r[5]+c->r[0]; // 802D11A0
  c->r[4]=sraw(c,c->r[0],16); // 802D11A4
  c->lr=0x802D11ACu; f_802CF7E0(c); // 802D11A8
  c->r[4]=R32(c->r[31]+0x00000008u); // 802D11AC
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 802D11B0
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D11B4
  c->r[4]=c->r[4]+c->r[0]; // 802D11B8
  c->r[4]=R8(c->r[4]+0x000000ECu); // 802D11BC
  c->lr=0x802D11C4u; f_802CF760(c); // 802D11C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D11C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D11C8
  c->lr=c->r[0]; // 802D11CC
  c->r[1]=c->r[1]+0x00000010u; // 802D11D0
  return; // 802D11D4
}

// __HBMSYNGetRelativePitch
void f_802D11D8(Ctx* __restrict c) {
  trace_call(0x802D11D8u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 802D11D8
  c->r[7]=0u+0x80350000u; // 802D11DC
  c->r[7]=c->r[7]+0xFFFFAB30u; // 802D11E0
  c->r[0]=sraw(c,c->r[3],16); // 802D11E4
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); cr0(c,c->r[3]); // 802D11E8
  if (!crb(c,1)) { goto L_802D127C; } // 802D11EC
  c->r[5]=0u+0x1B4F0000u; // 802D11F0
  c->r[4]=0u+0x51EC0000u; // 802D11F4
  c->r[0]=c->r[5]+0xFFFF81B5u; // 802D11F8
  c->r[6]=c->r[7]+0x00000000u; // 802D11FC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 802D1200
  c->r[8]=c->r[4]+0xFFFF851Fu; // 802D1204
  c->r[5]=c->r[7]+0x00000190u; // 802D1208
  c->r[4]=c->r[7]+0x000001C0u; // 802D120C
  c->r[9]=sraw(c,c->r[0],7); // 802D1210
  c->r[0]=sraw(c,c->r[0],7); // 802D1214
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 802D1218
  c->r[10]=rotl(c->r[9],1)&0x00000001u; // 802D121C
  c->r[0]=c->r[0]+c->r[7]; // 802D1220
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)1200); // 802D1224
  c->r[0]=c->r[9]+c->r[10]; // 802D1228
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802D122C
  c->r[7]=c->r[3]-c->r[7]; // 802D1230
  {uint32_t ea=c->r[5]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1234
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[7])>>32); // 802D1238
  c->r[5]=sraw(c,c->r[0],5); // 802D123C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[3])>>32); // 802D1240
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 802D1244
  c->r[7]=c->r[5]+c->r[7]; // 802D1248
  c->r[5]=sraw(c,c->r[0],5); // 802D124C
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 802D1250
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1254
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 802D1258
  c->r[0]=c->r[5]+c->r[7]; // 802D125C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 802D1260
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 802D1264
  c->r[3]=c->r[3]-c->r[0]; // 802D1268
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802D126C
  {uint32_t ea=c->r[6]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1270
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D1274
  return; // 802D1278
L_802D127C:;
  if (!crb(c,0)) { goto L_802D12DC; } // 802D127C
  c->r[4]=0u+0x51EC0000u; // 802D1280
  c->r[0]=c->r[4]+0xFFFF851Fu; // 802D1284
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 802D1288
  c->r[5]=sraw(c,c->r[0],5); // 802D128C
  c->r[0]=sraw(c,c->r[0],5); // 802D1290
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 802D1294
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 802D1298
  c->r[0]=c->r[0]+c->r[4]; // 802D129C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 802D12A0
  c->r[4]=c->r[5]+c->r[6]; // 802D12A4
  c->r[3]=c->r[3]-c->r[0]; cr0(c,c->r[3]); // 802D12A8
  if (crb(c,2)) { goto L_802D12B8; } // 802D12AC
  c->r[3]=c->r[3]+0x00000064u; // 802D12B0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 802D12B4
L_802D12B8:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802D12B8
  c->r[4]=c->r[7]+0x000001F0u; // 802D12BC
  c->r[5]=0u-c->r[0]; // 802D12C0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802D12C4
  c->r[3]=c->r[7]+0x00000000u; // 802D12C8
  {uint32_t ea=c->r[4]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 802D12CC
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 802D12D0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 802D12D4
  return; // 802D12D8
L_802D12DC:;
  c->r[3]=0u+0x80310000u; // 802D12DC
  {uint32_t ea=c->r[3]+0xFFFFD8C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D12E0
  return; // 802D12E4
}

// fn_802D12E8
void f_802D12E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D12E8
  c->r[0]=0u+0x43300000u; // 802D12EC
  c->r[5]=0u+0x80310000u; // 802D12F0
  c->r[4]=0u+0x80310000u; // 802D12F4
  c->r[6]=R32(c->r[3]+0x00000018u); // 802D12F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 802D12FC
  c->r[6]=R16(c->r[6]+0x00000002u); // 802D1300
  {uint32_t ea=c->r[5]+0xFFFFD8D0u; c->f[2]=RF64(ea);} // 802D1304
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 802D1308
  {uint32_t ea=c->r[4]+0xFFFFD8CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D130C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 802D1310
  c->r[5]=R32(c->r[3]+0x00000010u); // 802D1314
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802D1318
  c->r[0]=R8(c->r[3]+0x0000000Du); // 802D131C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 802D1320
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 802D1324
  c->r[4]=R8(c->r[5]+0x00000000u); // 802D1328
  c->r[0]=c->r[0]-c->r[4]; // 802D132C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 802D1330
  W32(c->r[3]+0x00000028u,c->r[4]); // 802D1334
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 802D1338
  c->r[0]=c->r[4]+c->r[0]; // 802D133C
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 802D1340
  W32(c->r[3]+0x00000028u,c->r[0]); // 802D1344
  c->r[1]=c->r[1]+0x00000010u; // 802D1348
  return; // 802D134C
}

// __HBMSYNSetupSrc
void f_802D1350(Ctx* __restrict c) {
  trace_call(0x802D1350u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D1350
  c->r[0]=c->lr; // 802D1354
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D1358
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D135C
  c->r[31]=c->r[3]|c->r[3]; // 802D1360
  c->lr=0x802D1368u; f_802D11D8(c); // 802D1364
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1368
  c->r[3]=0u+0x80310000u; // 802D136C
  {uint32_t ea=c->r[3]+0xFFFFD8D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1370
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802D1374
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D1378
  c->lr=0x802D1380u; f_80185DAC(c); // 802D137C
  c->r[5]=R32(c->r[31]+0x00000004u); // 802D1380
  c->r[6]=0u+0x00000001u; // 802D1384
  c->r[4]=rotl(c->r[3],16)&0x0000FFFFu; // 802D1388
  c->r[0]=0u+0x00000000u; // 802D138C
  W16(c->r[5]+0x00000030u,c->r[6]); // 802D1390
  c->r[5]=R32(c->r[31]+0x00000004u); // 802D1394
  W16(c->r[5]+0x000000CEu,c->r[4]); // 802D1398
  W16(c->r[5]+0x000000D0u,c->r[3]); // 802D139C
  W16(c->r[5]+0x000000D2u,c->r[0]); // 802D13A0
  W16(c->r[5]+0x000000D4u,c->r[0]); // 802D13A4
  W16(c->r[5]+0x000000D6u,c->r[0]); // 802D13A8
  W16(c->r[5]+0x000000D8u,c->r[0]); // 802D13AC
  W16(c->r[5]+0x000000DAu,c->r[0]); // 802D13B0
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D13B4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802D13B8
  c->r[0]=rotl(c->r[0],0)&0xFFFDFFFFu; // 802D13BC
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 802D13C0
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D13C4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802D13C8
  c->r[0]=c->r[0]|0x00010000u; // 802D13CC
  c->r[0]=c->r[0]|0x00000001u; // 802D13D0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 802D13D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D13D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D13DC
  c->lr=c->r[0]; // 802D13E0
  c->r[1]=c->r[1]+0x00000010u; // 802D13E4
  return; // 802D13E8
}

// __HBMSYNUpdateSrc
void f_802D13EC(Ctx* __restrict c) {
  trace_call(0x802D13ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D13EC
  c->r[0]=c->lr; // 802D13F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D13F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D13F8
  c->r[31]=c->r[3]|c->r[3]; // 802D13FC
  c->lr=0x802D1404u; f_802D11D8(c); // 802D1400
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1404
  c->r[3]=0u+0x80310000u; // 802D1408
  {uint32_t ea=c->r[3]+0xFFFFD8D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D140C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802D1410
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D1414
  c->lr=0x802D141Cu; f_80185DAC(c); // 802D1418
  c->r[4]=R32(c->r[31]+0x00000004u); // 802D141C
  W32(c->r[4]+0x000000CEu,c->r[3]); // 802D1420
  c->r[3]=R32(c->r[31]+0x00000004u); // 802D1424
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802D1428
  c->r[0]=c->r[0]|0x00020000u; // 802D142C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 802D1430
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D1434
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D1438
  c->lr=c->r[0]; // 802D143C
  c->r[1]=c->r[1]+0x00000010u; // 802D1440
  return; // 802D1444
}

// fn_802D1448
void f_802D1448(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x00000010u); // 802D1448
  c->r[4]=R32(c->r[3]+0x00000004u); // 802D144C
  c->r[5]=R32(c->r[6]+0x00000008u); // 802D1450
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 802D1454
  c->r[0]=c->r[5]+c->r[0]; cr0(c,c->r[0]); // 802D1458
  if (crb(c,2)) { goto L_802D1588; } // 802D145C
  c->r[0]=0u+0x00000001u; // 802D1460
  c->r[5]=0u+0x24920000u; // 802D1464
  W32(c->r[3]+0x00000020u,c->r[0]); // 802D1468
  c->r[5]=c->r[5]+0x00004925u; // 802D146C
  c->r[10]=R32(c->r[3]+0x00000008u); // 802D1470
  c->r[8]=0u+0x00010000u; // 802D1474
  c->r[0]=R32(c->r[6]+0x00000008u); // 802D1478
  c->r[7]=R32(c->r[6]+0x0000000Cu); // 802D147C
  c->r[6]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 802D1480
  c->r[9]=R32(c->r[3]+0x00000018u); // 802D1484
  c->r[7]=c->r[0]+c->r[7]; // 802D1488
  c->r[10]=R32(c->r[10]+0x00000024u); // 802D148C
  c->r[9]=R32(c->r[9]+0x00000004u); // 802D1490
  c->r[11]=c->r[7]+0xFFFFFFFFu; // 802D1494
  c->r[7]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[11])>>32); // 802D1498
  c->r[5]=c->r[0]-c->r[6]; // 802D149C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 802D14A0
  c->r[10]=c->r[10]+c->r[9]; // 802D14A4
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 802D14A8
  W32(c->r[4]+0x00000096u,c->r[8]); // 802D14AC
  c->r[8]=c->r[5]+c->r[6]; // 802D14B0
  c->r[6]=c->r[11]-c->r[7]; // 802D14B4
  c->r[9]=rotl(c->r[8],29)&0x1FFFFFFFu; // 802D14B8
  c->r[5]=c->r[10]+0x00000002u; // 802D14BC
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 802D14C0
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFF0u; // 802D14C4
  c->r[6]=c->r[6]+c->r[7]; // 802D14C8
  c->r[7]=rotl(c->r[6],29)&0x1FFFFFFFu; // 802D14CC
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)14); // 802D14D0
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFF0u; // 802D14D4
  c->r[0]=c->r[0]-c->r[9]; // 802D14D8
  c->r[0]=c->r[0]+c->r[10]; // 802D14DC
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)14); // 802D14E0
  c->r[8]=c->r[0]+c->r[8]; // 802D14E4
  c->r[0]=c->r[11]-c->r[7]; // 802D14E8
  c->r[7]=c->r[8]+0x00000002u; // 802D14EC
  c->r[0]=c->r[0]+c->r[10]; // 802D14F0
  W32(c->r[4]+0x0000009Au,c->r[7]); // 802D14F4
  c->r[6]=c->r[0]+c->r[6]; // 802D14F8
  c->r[0]=c->r[6]+0x00000002u; // 802D14FC
  W32(c->r[4]+0x0000009Eu,c->r[0]); // 802D1500
  W32(c->r[4]+0x000000A2u,c->r[5]); // 802D1504
  c->r[0]=R32(c->r[3]+0x00000000u); // 802D1508
  W32(c->r[4]+0x000000A6u,c->r[0]); // 802D150C
  c->r[0]=R32(c->r[3]+0x00000004u); // 802D1510
  W32(c->r[4]+0x000000AAu,c->r[0]); // 802D1514
  c->r[0]=R32(c->r[3]+0x00000008u); // 802D1518
  W32(c->r[4]+0x000000AEu,c->r[0]); // 802D151C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802D1520
  W32(c->r[4]+0x000000B2u,c->r[0]); // 802D1524
  c->r[0]=R32(c->r[3]+0x00000010u); // 802D1528
  W32(c->r[4]+0x000000B6u,c->r[0]); // 802D152C
  c->r[0]=R32(c->r[3]+0x00000014u); // 802D1530
  W32(c->r[4]+0x000000BAu,c->r[0]); // 802D1534
  c->r[0]=R32(c->r[3]+0x00000018u); // 802D1538
  W32(c->r[4]+0x000000BEu,c->r[0]); // 802D153C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802D1540
  W32(c->r[4]+0x000000C2u,c->r[0]); // 802D1544
  c->r[0]=R32(c->r[3]+0x00000020u); // 802D1548
  W32(c->r[4]+0x000000C6u,c->r[0]); // 802D154C
  c->r[0]=R32(c->r[3]+0x00000024u); // 802D1550
  W32(c->r[4]+0x000000CAu,c->r[0]); // 802D1554
  c->r[0]=R16(c->r[3]+0x00000028u); // 802D1558
  W16(c->r[4]+0x000000DCu,c->r[0]); // 802D155C
  c->r[0]=R16(c->r[3]+0x0000002Au); // 802D1560
  W16(c->r[4]+0x000000DEu,c->r[0]); // 802D1564
  c->r[0]=R16(c->r[3]+0x0000002Cu); // 802D1568
  W16(c->r[4]+0x000000E0u,c->r[0]); // 802D156C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 802D1570
  c->r[0]=rotl(c->r[0],0)&0xFFFF87FFu; // 802D1574
  c->r[0]=c->r[0]|0x00040000u; // 802D1578
  c->r[0]=c->r[0]|0x00008400u; // 802D157C
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 802D1580
  return; // 802D1584
L_802D1588:;
  c->r[7]=0u+0x00000000u; // 802D1588
  c->r[5]=0u+0x24920000u; // 802D158C
  W32(c->r[3]+0x00000020u,c->r[7]); // 802D1590
  c->r[0]=c->r[5]+0x00004925u; // 802D1594
  c->r[9]=R32(c->r[3]+0x00000018u); // 802D1598
  c->r[6]=R32(c->r[3]+0x00000008u); // 802D159C
  c->r[5]=R32(c->r[9]+0x00000008u); // 802D15A0
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 802D15A4
  c->r[8]=c->r[5]+0xFFFFFFFFu; // 802D15A8
  c->r[5]=R32(c->r[6]+0x00000024u); // 802D15AC
  c->r[6]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[8])>>32); // 802D15B0
  c->r[0]=R32(c->r[9]+0x00000004u); // 802D15B4
  c->r[9]=c->r[5]+c->r[0]; // 802D15B8
  W32(c->r[4]+0x00000096u,c->r[7]); // 802D15BC
  W32(c->r[4]+0x0000009Au,c->r[9]); // 802D15C0
  c->r[0]=c->r[9]+0x00000002u; // 802D15C4
  c->r[5]=c->r[8]-c->r[6]; // 802D15C8
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 802D15CC
  c->r[6]=c->r[5]+c->r[6]; // 802D15D0
  c->r[5]=rotl(c->r[6],29)&0x1FFFFFFFu; // 802D15D4
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)14); // 802D15D8
  c->r[5]=rotl(c->r[6],1)&0xFFFFFFF0u; // 802D15DC
  c->r[6]=c->r[8]-c->r[7]; // 802D15E0
  c->r[6]=c->r[6]+c->r[9]; // 802D15E4
  c->r[5]=c->r[6]+c->r[5]; // 802D15E8
  c->r[5]=c->r[5]+0x00000002u; // 802D15EC
  W32(c->r[4]+0x0000009Eu,c->r[5]); // 802D15F0
  W32(c->r[4]+0x000000A2u,c->r[0]); // 802D15F4
  c->r[0]=R32(c->r[3]+0x00000000u); // 802D15F8
  W32(c->r[4]+0x000000A6u,c->r[0]); // 802D15FC
  c->r[0]=R32(c->r[3]+0x00000004u); // 802D1600
  W32(c->r[4]+0x000000AAu,c->r[0]); // 802D1604
  c->r[0]=R32(c->r[3]+0x00000008u); // 802D1608
  W32(c->r[4]+0x000000AEu,c->r[0]); // 802D160C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802D1610
  W32(c->r[4]+0x000000B2u,c->r[0]); // 802D1614
  c->r[0]=R32(c->r[3]+0x00000010u); // 802D1618
  W32(c->r[4]+0x000000B6u,c->r[0]); // 802D161C
  c->r[0]=R32(c->r[3]+0x00000014u); // 802D1620
  W32(c->r[4]+0x000000BAu,c->r[0]); // 802D1624
  c->r[0]=R32(c->r[3]+0x00000018u); // 802D1628
  W32(c->r[4]+0x000000BEu,c->r[0]); // 802D162C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802D1630
  W32(c->r[4]+0x000000C2u,c->r[0]); // 802D1634
  c->r[0]=R32(c->r[3]+0x00000020u); // 802D1638
  W32(c->r[4]+0x000000C6u,c->r[0]); // 802D163C
  c->r[0]=R32(c->r[3]+0x00000024u); // 802D1640
  W32(c->r[4]+0x000000CAu,c->r[0]); // 802D1644
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 802D1648
  c->r[0]=rotl(c->r[0],0)&0xFFFF87FFu; // 802D164C
  c->r[0]=c->r[0]|0x00008400u; // 802D1650
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 802D1654
  return; // 802D1658
}

// fn_802D165C
void f_802D165C(Ctx* __restrict c) {
  c->r[10]=R32(c->r[3]+0x00000010u); // 802D165C
  c->r[4]=R32(c->r[3]+0x00000004u); // 802D1660
  c->r[5]=R32(c->r[10]+0x00000008u); // 802D1664
  c->r[0]=R32(c->r[10]+0x0000000Cu); // 802D1668
  c->r[0]=c->r[5]+c->r[0]; cr0(c,c->r[0]); // 802D166C
  if (crb(c,2)) { goto L_802D16F0; } // 802D1670
  c->r[0]=0u+0x00000001u; // 802D1674
  c->r[5]=0u+0x00010000u; // 802D1678
  W32(c->r[3]+0x00000020u,c->r[0]); // 802D167C
  c->r[6]=c->r[5]+0x0000000Au; // 802D1680
  c->r[7]=R32(c->r[3]+0x00000008u); // 802D1684
  c->r[5]=0u+0x00000000u; // 802D1688
  c->r[3]=R32(c->r[3]+0x00000018u); // 802D168C
  c->r[0]=0u+0x08000000u; // 802D1690
  c->r[9]=R32(c->r[7]+0x0000001Cu); // 802D1694
  c->r[8]=R32(c->r[3]+0x00000004u); // 802D1698
  c->r[7]=R32(c->r[10]+0x00000008u); // 802D169C
  c->r[3]=R32(c->r[10]+0x0000000Cu); // 802D16A0
  c->r[8]=c->r[9]+c->r[8]; // 802D16A4
  c->r[7]=c->r[8]+c->r[7]; // 802D16A8
  W32(c->r[4]+0x00000096u,c->r[6]); // 802D16AC
  c->r[3]=c->r[7]+c->r[3]; // 802D16B0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 802D16B4
  W32(c->r[4]+0x0000009Au,c->r[7]); // 802D16B8
  W32(c->r[4]+0x0000009Eu,c->r[3]); // 802D16BC
  W32(c->r[4]+0x000000A2u,c->r[8]); // 802D16C0
  W32(c->r[4]+0x000000A6u,c->r[5]); // 802D16C4
  W32(c->r[4]+0x000000AAu,c->r[5]); // 802D16C8
  W32(c->r[4]+0x000000AEu,c->r[5]); // 802D16CC
  W32(c->r[4]+0x000000B2u,c->r[5]); // 802D16D0
  W32(c->r[4]+0x000000B6u,c->r[5]); // 802D16D4
  W32(c->r[4]+0x000000BAu,c->r[5]); // 802D16D8
  W32(c->r[4]+0x000000BEu,c->r[5]); // 802D16DC
  W32(c->r[4]+0x000000C2u,c->r[5]); // 802D16E0
  W32(c->r[4]+0x000000C6u,c->r[0]); // 802D16E4
  W32(c->r[4]+0x000000CAu,c->r[5]); // 802D16E8
  goto L_802D1758; // 802D16EC
L_802D16F0:;
  c->r[8]=0u+0x00000000u; // 802D16F0
  c->r[9]=R32(c->r[3]+0x00000018u); // 802D16F4
  W32(c->r[3]+0x00000020u,c->r[8]); // 802D16F8
  c->r[5]=0u+0x0000000Au; // 802D16FC
  c->r[3]=R32(c->r[3]+0x00000008u); // 802D1700
  c->r[0]=0u+0x08000000u; // 802D1704
  c->r[6]=R32(c->r[9]+0x00000004u); // 802D1708
  c->r[7]=R32(c->r[3]+0x0000001Cu); // 802D170C
  c->r[3]=R32(c->r[9]+0x00000008u); // 802D1710
  c->r[6]=c->r[7]+c->r[6]; // 802D1714
  W32(c->r[4]+0x00000096u,c->r[5]); // 802D1718
  c->r[3]=c->r[6]+c->r[3]; // 802D171C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 802D1720
  W32(c->r[4]+0x0000009Au,c->r[6]); // 802D1724
  W32(c->r[4]+0x0000009Eu,c->r[3]); // 802D1728
  W32(c->r[4]+0x000000A2u,c->r[6]); // 802D172C
  W32(c->r[4]+0x000000A6u,c->r[8]); // 802D1730
  W32(c->r[4]+0x000000AAu,c->r[8]); // 802D1734
  W32(c->r[4]+0x000000AEu,c->r[8]); // 802D1738
  W32(c->r[4]+0x000000B2u,c->r[8]); // 802D173C
  W32(c->r[4]+0x000000B6u,c->r[8]); // 802D1740
  W32(c->r[4]+0x000000BAu,c->r[8]); // 802D1744
  W32(c->r[4]+0x000000BEu,c->r[8]); // 802D1748
  W32(c->r[4]+0x000000C2u,c->r[8]); // 802D174C
  W32(c->r[4]+0x000000C6u,c->r[0]); // 802D1750
  W32(c->r[4]+0x000000CAu,c->r[8]); // 802D1754
L_802D1758:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 802D1758
  c->r[0]=rotl(c->r[0],0)&0xFFFF87FFu; // 802D175C
  c->r[0]=c->r[0]|0x00008400u; // 802D1760
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 802D1764
  return; // 802D1768
}

// fn_802D176C
void f_802D176C(Ctx* __restrict c) {
  c->r[10]=R32(c->r[3]+0x00000010u); // 802D176C
  c->r[4]=R32(c->r[3]+0x00000004u); // 802D1770
  c->r[5]=R32(c->r[10]+0x00000008u); // 802D1774
  c->r[0]=R32(c->r[10]+0x0000000Cu); // 802D1778
  c->r[0]=c->r[5]+c->r[0]; cr0(c,c->r[0]); // 802D177C
  if (crb(c,2)) { goto L_802D1800; } // 802D1780
  c->r[0]=0u+0x00000001u; // 802D1784
  c->r[5]=0u+0x00010000u; // 802D1788
  W32(c->r[3]+0x00000020u,c->r[0]); // 802D178C
  c->r[6]=c->r[5]+0x00000019u; // 802D1790
  c->r[7]=R32(c->r[3]+0x00000008u); // 802D1794
  c->r[5]=0u+0x00000000u; // 802D1798
  c->r[3]=R32(c->r[3]+0x00000018u); // 802D179C
  c->r[0]=0u+0x01000000u; // 802D17A0
  c->r[9]=R32(c->r[7]+0x00000020u); // 802D17A4
  c->r[8]=R32(c->r[3]+0x00000004u); // 802D17A8
  c->r[7]=R32(c->r[10]+0x00000008u); // 802D17AC
  c->r[3]=R32(c->r[10]+0x0000000Cu); // 802D17B0
  c->r[8]=c->r[9]+c->r[8]; // 802D17B4
  c->r[7]=c->r[8]+c->r[7]; // 802D17B8
  W32(c->r[4]+0x00000096u,c->r[6]); // 802D17BC
  c->r[3]=c->r[7]+c->r[3]; // 802D17C0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 802D17C4
  W32(c->r[4]+0x0000009Au,c->r[7]); // 802D17C8
  W32(c->r[4]+0x0000009Eu,c->r[3]); // 802D17CC
  W32(c->r[4]+0x000000A2u,c->r[8]); // 802D17D0
  W32(c->r[4]+0x000000A6u,c->r[5]); // 802D17D4
  W32(c->r[4]+0x000000AAu,c->r[5]); // 802D17D8
  W32(c->r[4]+0x000000AEu,c->r[5]); // 802D17DC
  W32(c->r[4]+0x000000B2u,c->r[5]); // 802D17E0
  W32(c->r[4]+0x000000B6u,c->r[5]); // 802D17E4
  W32(c->r[4]+0x000000BAu,c->r[5]); // 802D17E8
  W32(c->r[4]+0x000000BEu,c->r[5]); // 802D17EC
  W32(c->r[4]+0x000000C2u,c->r[5]); // 802D17F0
  W32(c->r[4]+0x000000C6u,c->r[0]); // 802D17F4
  W32(c->r[4]+0x000000CAu,c->r[5]); // 802D17F8
  goto L_802D1868; // 802D17FC
L_802D1800:;
  c->r[8]=0u+0x00000000u; // 802D1800
  c->r[9]=R32(c->r[3]+0x00000018u); // 802D1804
  W32(c->r[3]+0x00000020u,c->r[8]); // 802D1808
  c->r[5]=0u+0x00000019u; // 802D180C
  c->r[3]=R32(c->r[3]+0x00000008u); // 802D1810
  c->r[0]=0u+0x01000000u; // 802D1814
  c->r[6]=R32(c->r[9]+0x00000004u); // 802D1818
  c->r[7]=R32(c->r[3]+0x00000020u); // 802D181C
  c->r[3]=R32(c->r[9]+0x00000008u); // 802D1820
  c->r[6]=c->r[7]+c->r[6]; // 802D1824
  W32(c->r[4]+0x00000096u,c->r[5]); // 802D1828
  c->r[3]=c->r[6]+c->r[3]; // 802D182C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 802D1830
  W32(c->r[4]+0x0000009Au,c->r[6]); // 802D1834
  W32(c->r[4]+0x0000009Eu,c->r[3]); // 802D1838
  W32(c->r[4]+0x000000A2u,c->r[6]); // 802D183C
  W32(c->r[4]+0x000000A6u,c->r[8]); // 802D1840
  W32(c->r[4]+0x000000AAu,c->r[8]); // 802D1844
  W32(c->r[4]+0x000000AEu,c->r[8]); // 802D1848
  W32(c->r[4]+0x000000B2u,c->r[8]); // 802D184C
  W32(c->r[4]+0x000000B6u,c->r[8]); // 802D1850
  W32(c->r[4]+0x000000BAu,c->r[8]); // 802D1854
  W32(c->r[4]+0x000000BEu,c->r[8]); // 802D1858
  W32(c->r[4]+0x000000C2u,c->r[8]); // 802D185C
  W32(c->r[4]+0x000000C6u,c->r[0]); // 802D1860
  W32(c->r[4]+0x000000CAu,c->r[8]); // 802D1864
L_802D1868:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 802D1868
  c->r[0]=rotl(c->r[0],0)&0xFFFF87FFu; // 802D186C
  c->r[0]=c->r[0]|0x00008400u; // 802D1870
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 802D1874
  return; // 802D1878
}

// fn_802D187C
void f_802D187C(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000018u); // 802D187C
  c->r[0]=R16(c->r[4]+0x00000000u); // 802D1880
  cmps(c,0,(int32_t)c->r[0],1); // 802D1884
  if (crb(c,2)) { goto L_802D18AC; } // 802D1888
  if (!crb(c,0)) { goto L_802D189C; } // 802D188C
  cmps(c,0,(int32_t)c->r[0],0); // 802D1890
  if (!crb(c,0)) { goto L_802D18A8; } // 802D1894
  return; // 802D1898
L_802D189C:;
  cmps(c,0,(int32_t)c->r[0],3); // 802D189C
  if (!crb(c,0)) return; // 802D18A0
  goto L_802D18B0; // 802D18A4
L_802D18A8:;
  f_802D1448(c); return; // 802D18A8
L_802D18AC:;
  f_802D165C(c); return; // 802D18AC
L_802D18B0:;
  f_802D176C(c); return; // 802D18B0
  return; // 802D18B4
}

// __HBMSYNClearVoiceReferences
void f_802D18B8(Ctx* __restrict c) {
  trace_call(0x802D18B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D18B8
  c->r[0]=c->lr; // 802D18BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D18C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D18C4
  c->r[31]=c->r[3]|c->r[3]; // 802D18C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D18CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 802D18D0
  c->r[30]=R32(c->r[3]+0x00000014u); // 802D18D4
  c->r[3]=R32(c->r[3]+0x00000018u); // 802D18D8
  c->lr=0x802D18E0u; f_802D0368(c); // 802D18DC
  c->r[29]=c->r[3]|c->r[3]; // 802D18E0
  c->lr=0x802D18E8u; f_802D037C(c); // 802D18E4
  c->r[4]=0u+0x80430000u; // 802D18E8
  c->r[3]=c->r[31]|c->r[31]; // 802D18EC
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)76); // 802D18F0
  c->r[4]=R32(c->r[4]+0x0000734Cu); // 802D18F4
  c->r[31]=c->r[4]+c->r[0]; // 802D18F8
  c->lr=0x802D1900u; f_802CF6C4(c); // 802D18FC
  c->r[3]=R8(c->r[31]+0x0000000Cu); // 802D1900
  c->r[0]=R8(c->r[31]+0x0000000Du); // 802D1904
  c->r[3]=rotl(c->r[3],9)&0xFFFFFE00u; // 802D1908
  c->r[3]=c->r[30]+c->r[3]; // 802D190C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802D1910
  c->r[3]=c->r[3]+c->r[0]; // 802D1914
  c->r[0]=R32(c->r[3]+0x00000408u); // 802D1918
  cmpu(c,0,c->r[0],c->r[31]); // 802D191C
  if (!crb(c,2)) { goto L_802D192C; } // 802D1920
  c->r[0]=0u+0x00000000u; // 802D1924
  W32(c->r[3]+0x00000408u,c->r[0]); // 802D1928
L_802D192C:;
  c->r[0]=0u+0x00000000u; // 802D192C
  W32(c->r[31]+0x00000008u,c->r[0]); // 802D1930
  c->r[3]=R32(c->r[30]+0x00000404u); // 802D1934
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 802D1938
  W32(c->r[30]+0x00000404u,c->r[0]); // 802D193C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D1940
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D1944
  c->r[29]=R32(c->r[1]+0x00000014u); // 802D1948
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D194C
  c->lr=c->r[0]; // 802D1950
  c->r[1]=c->r[1]+0x00000020u; // 802D1954
  return; // 802D1958
}

// fn_802D195C
void f_802D195C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000003u; // 802D195C
  W32(c->r[3]+0x00000030u,c->r[0]); // 802D1960
  return; // 802D1964
}

// __HBMSYNServiceVoice
void f_802D1968(Ctx* __restrict c) {
  trace_call(0x802D1968u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D1968
  c->r[0]=c->lr; // 802D196C
  c->r[4]=0u+0x80430000u; // 802D1970
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D1974
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)76); // 802D1978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D197C
  W32(c->r[1]+0x00000008u,c->r[30]); // 802D1980
  c->r[3]=R32(c->r[4]+0x0000734Cu); // 802D1984
  c->r[30]=c->r[3]+c->r[0]; // 802D1988
  c->r[31]=R32(c->r[30]+0x00000008u); // 802D198C
  cmps(c,0,(int32_t)c->r[31],0); // 802D1990
  if (crb(c,2)) { goto L_802D1A40; } // 802D1994
  c->r[0]=R32(c->r[30]+0x00000020u); // 802D1998
  cmps(c,0,(int32_t)c->r[0],0); // 802D199C
  if (!crb(c,2)) { goto L_802D19E8; } // 802D19A0
  c->r[3]=R32(c->r[30]+0x00000004u); // 802D19A4
  c->r[0]=R16(c->r[3]+0x00000038u); // 802D19A8
  cmps(c,0,(int32_t)c->r[0],0); // 802D19AC
  if (!crb(c,2)) { goto L_802D19E8; } // 802D19B0
  c->r[3]=R8(c->r[30]+0x0000000Cu); // 802D19B4
  c->r[0]=R8(c->r[30]+0x0000000Du); // 802D19B8
  c->r[3]=rotl(c->r[3],9)&0xFFFFFE00u; // 802D19BC
  c->r[3]=c->r[31]+c->r[3]; // 802D19C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802D19C4
  c->r[3]=c->r[3]+c->r[0]; // 802D19C8
  c->r[0]=R32(c->r[3]+0x00000408u); // 802D19CC
  cmpu(c,0,c->r[0],c->r[30]); // 802D19D0
  if (!crb(c,2)) { goto L_802D19E0; } // 802D19D4
  c->r[0]=0u+0x00000000u; // 802D19D8
  W32(c->r[3]+0x00000408u,c->r[0]); // 802D19DC
L_802D19E0:;
  c->r[0]=0u+0x00000004u; // 802D19E0
  W32(c->r[30]+0x00000030u,c->r[0]); // 802D19E4
L_802D19E8:;
  c->r[3]=c->r[30]|c->r[30]; // 802D19E8
  c->lr=0x802D19F0u; f_802D0FA8(c); // 802D19EC
  c->r[0]=R32(c->r[30]+0x00000030u); // 802D19F0
  cmpu(c,0,c->r[0],0x00000004u); // 802D19F4
  if (!crb(c,2)) { goto L_802D1A30; } // 802D19F8
  c->r[0]=0u+0x00000000u; // 802D19FC
  W32(c->r[30]+0x00000008u,c->r[0]); // 802D1A00
  c->r[3]=R32(c->r[30]+0x00000004u); // 802D1A04
  c->lr=0x802D1A0Cu; f_802CF6C4(c); // 802D1A08
  c->r[3]=R32(c->r[30]+0x00000004u); // 802D1A0C
  c->r[3]=R32(c->r[3]+0x00000018u); // 802D1A10
  c->lr=0x802D1A18u; f_802D03A4(c); // 802D1A14
  c->r[3]=R32(c->r[30]+0x00000004u); // 802D1A18
  c->lr=0x802D1A20u; f_80178BA4(c); // 802D1A1C
  c->r[3]=R32(c->r[31]+0x00000404u); // 802D1A20
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 802D1A24
  W32(c->r[31]+0x00000404u,c->r[0]); // 802D1A28
  goto L_802D1A40; // 802D1A2C
L_802D1A30:;
  c->r[3]=c->r[30]|c->r[30]; // 802D1A30
  c->lr=0x802D1A38u; f_802D1138(c); // 802D1A34
  c->r[3]=c->r[30]|c->r[30]; // 802D1A38
  c->lr=0x802D1A40u; f_802D13EC(c); // 802D1A3C
L_802D1A40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D1A40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D1A44
  c->r[30]=R32(c->r[1]+0x00000008u); // 802D1A48
  c->lr=c->r[0]; // 802D1A4C
  c->r[1]=c->r[1]+0x00000010u; // 802D1A50
  return; // 802D1A54
}

// fn_802D1A58
void f_802D1A58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D1A58
  c->r[0]=c->lr; // 802D1A5C
  c->r[8]=0u+0x80310000u; // 802D1A60
  W32(c->r[1]+0x00000034u,c->r[0]); // 802D1A64
  c->r[8]=c->r[8]+0xFFFFD8E0u; // 802D1A68
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802D1A6C
  c->r[31]=c->r[4]|c->r[4]; // 802D1A70
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 802D1A74
  c->r[6]=R8(c->r[5]+0x00000000u); // 802D1A78
  cmpu(c,0,c->r[6],0x00000080u); // 802D1A7C
  if (crb(c,0)) { goto L_802D1A90; } // 802D1A80
  c->r[0]=c->r[5]+0x00000001u; // 802D1A84
  W8(c->r[4]+0x00000010u,c->r[6]); // 802D1A88
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802D1A8C
L_802D1A90:;
  c->r[0]=R8(c->r[4]+0x00000010u); // 802D1A90
  cmps(c,0,(int32_t)c->r[0],247); // 802D1A94
  if (crb(c,2)) { goto L_802D1AB8; } // 802D1A98
  if (!crb(c,0)) { goto L_802D1AAC; } // 802D1A9C
  cmps(c,0,(int32_t)c->r[0],240); // 802D1AA0
  if (crb(c,2)) { goto L_802D1AB8; } // 802D1AA4
  goto L_802D1C6C; // 802D1AA8
L_802D1AAC:;
  cmps(c,0,(int32_t)c->r[0],255); // 802D1AAC
  if (crb(c,2)) { goto L_802D1B00; } // 802D1AB0
  goto L_802D1C6C; // 802D1AB4
L_802D1AB8:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 802D1AB8
  c->r[5]=R8(c->r[3]+0x00000000u); // 802D1ABC
  c->r[6]=rotl(c->r[5],0)&0x0000007Fu; // 802D1AC0
  goto L_802D1AE4; // 802D1AC4
L_802D1AC8:;
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 802D1AC8
  c->r[3]=rotl(c->r[6],7)&0xFFFFFF80u; // 802D1ACC
  c->r[5]=c->r[5]+0x00000001u; // 802D1AD0
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 802D1AD4
  c->r[5]=R8(c->r[5]+0x00000000u); // 802D1AD8
  c->r[0]=rotl(c->r[5],0)&0x0000007Fu; // 802D1ADC
  c->r[6]=c->r[3]+c->r[0]; // 802D1AE0
L_802D1AE4:;
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 802D1AE4
  if (!crb(c,2)) { IRQCHK(c); goto L_802D1AC8; } // 802D1AE8
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 802D1AEC
  c->r[0]=c->r[3]+0x00000001u; // 802D1AF0
  c->r[0]=c->r[0]+c->r[6]; // 802D1AF4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802D1AF8
  goto L_802D1CEC; // 802D1AFC
L_802D1B00:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 802D1B00
  c->r[0]=R8(c->r[3]+0x00000000u); // 802D1B04
  c->r[3]=c->r[3]+0x00000001u; // 802D1B08
  cmps(c,0,(int32_t)c->r[0],81); // 802D1B0C
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 802D1B10
  if (crb(c,2)) { goto L_802D1B58; } // 802D1B14
  if (!crb(c,0)) { goto L_802D1C24; } // 802D1B18
  cmps(c,0,(int32_t)c->r[0],47); // 802D1B1C
  if (crb(c,2)) { goto L_802D1B28; } // 802D1B20
  goto L_802D1C24; // 802D1B24
L_802D1B28:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 802D1B28
  c->r[0]=0u+0x00000000u; // 802D1B2C
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 802D1B30
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 802D1B34
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 802D1B38
  W32(c->r[4]+0x00000024u,c->r[0]); // 802D1B3C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 802D1B40
  cmps(c,0,(int32_t)c->r[0],0); // 802D1B44
  if (!crb(c,2)) { goto L_802D1CEC; } // 802D1B48
  c->r[0]=0u+0x00000001u; // 802D1B4C
  W32(c->r[5]+0x00000010u,c->r[0]); // 802D1B50
  goto L_802D1CEC; // 802D1B54
L_802D1B58:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 802D1B58
  goto L_802D1B70; // 802D1B5C
L_802D1B60:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 802D1B60
  c->r[3]=c->r[3]+0x00000001u; // 802D1B64
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 802D1B68
  c->r[0]=R8(c->r[3]+0x00000000u); // 802D1B6C
L_802D1B70:;
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 802D1B70
  if (!crb(c,2)) { IRQCHK(c); goto L_802D1B60; } // 802D1B74
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 802D1B78
  c->r[0]=0u+0x43300000u; // 802D1B7C
  W32(c->r[1]+0x00000010u,c->r[0]); // 802D1B80
  c->r[3]=c->r[3]+0x00000001u; // 802D1B84
  {uint32_t ea=c->r[8]+0x00000010u; c->f[6]=RF64(ea);} // 802D1B88
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 802D1B8C
  c->r[5]=c->r[3]+0x00000001u; // 802D1B90
  c->r[6]=c->r[5]+0x00000001u; // 802D1B94
  {uint32_t ea=c->r[8]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D1B98
  c->r[7]=R8(c->r[3]+0x00000000u); // 802D1B9C
  c->r[3]=c->r[6]+0x00000001u; // 802D1BA0
  W32(c->r[1]+0x00000018u,c->r[0]); // 802D1BA4
  c->r[7]=rotl(c->r[7],8)&0xFFFFFF00u; // 802D1BA8
  {uint32_t ea=c->r[8]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1BAC
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 802D1BB0
  c->r[9]=R32(c->r[4]+0x00000000u); // 802D1BB4
  c->r[5]=R8(c->r[5]+0x00000000u); // 802D1BB8
  {uint32_t ea=c->r[8]+0x00000018u; c->f[3]=RF64(ea);} // 802D1BBC
  c->r[0]=c->r[7]+c->r[5]; // 802D1BC0
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 802D1BC4
  c->r[5]=rotl(c->r[0],8)&0xFFFFFF00u; // 802D1BC8
  {uint32_t ea=c->r[8]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1BCC
  c->r[0]=R8(c->r[6]+0x00000000u); // 802D1BD0
  {uint32_t ea=c->r[8]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1BD4
  c->r[0]=c->r[5]+c->r[0]; // 802D1BD8
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 802D1BDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D1BE0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[5]=RF64(ea);} // 802D1BE4
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[6]); // 802D1BE8
  c->f[5]=c->ps1[5]=S(c->f[4]/c->f[5]); // 802D1BEC
  c->f[4]=c->ps1[4]=S(c->f[2]/c->f[5]); // 802D1BF0
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[5]);} // 802D1BF4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[9]+0x0000000Au); // 802D1BF8
  c->r[0]=c->r[0]^0x80000000u; // 802D1BFC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802D1C00
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 802D1C04
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802D1C08
  c->f[2]=c->ps1[2]=S(c->f[4]/c->f[2]); // 802D1C0C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 802D1C10
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D1C14
  c->lr=0x802D1C1Cu; f_80185DAC(c); // 802D1C18
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 802D1C1C
  goto L_802D1CEC; // 802D1C20
L_802D1C24:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 802D1C24
  c->r[5]=R8(c->r[3]+0x00000000u); // 802D1C28
  c->r[6]=rotl(c->r[5],0)&0x0000007Fu; // 802D1C2C
  goto L_802D1C50; // 802D1C30
L_802D1C34:;
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 802D1C34
  c->r[3]=rotl(c->r[6],7)&0xFFFFFF80u; // 802D1C38
  c->r[5]=c->r[5]+0x00000001u; // 802D1C3C
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 802D1C40
  c->r[5]=R8(c->r[5]+0x00000000u); // 802D1C44
  c->r[0]=rotl(c->r[5],0)&0x0000007Fu; // 802D1C48
  c->r[6]=c->r[3]+c->r[0]; // 802D1C4C
L_802D1C50:;
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 802D1C50
  if (!crb(c,2)) { IRQCHK(c); goto L_802D1C34; } // 802D1C54
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 802D1C58
  c->r[0]=c->r[3]+0x00000001u; // 802D1C5C
  c->r[0]=c->r[0]+c->r[6]; // 802D1C60
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802D1C64
  goto L_802D1CEC; // 802D1C68
L_802D1C6C:;
  c->r[5]=0u+0x80350000u; // 802D1C6C
  W8(c->r[1]+0x00000008u,c->r[0]); // 802D1C70
  c->r[5]=c->r[5]+0xFFFFAF20u; // 802D1C74
  c->r[5]=c->r[0]+c->r[5]; // 802D1C78
  c->r[0]=R8(c->r[5]+0xFFFFFF80u); // 802D1C7C
  cmps(c,0,(int32_t)c->r[0],1); // 802D1C80
  if (crb(c,2)) { goto L_802D1C9C; } // 802D1C84
  if (!crb(c,0)) { goto L_802D1C90; } // 802D1C88
  goto L_802D1CE4; // 802D1C8C
L_802D1C90:;
  cmps(c,0,(int32_t)c->r[0],3); // 802D1C90
  if (!crb(c,0)) { goto L_802D1CE4; } // 802D1C94
  goto L_802D1CB8; // 802D1C98
L_802D1C9C:;
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 802D1C9C
  c->r[0]=R8(c->r[5]+0x00000000u); // 802D1CA0
  W8(c->r[1]+0x00000009u,c->r[0]); // 802D1CA4
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 802D1CA8
  c->r[0]=c->r[5]+0x00000001u; // 802D1CAC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802D1CB0
  goto L_802D1CE4; // 802D1CB4
L_802D1CB8:;
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 802D1CB8
  c->r[0]=R8(c->r[5]+0x00000000u); // 802D1CBC
  W8(c->r[1]+0x00000009u,c->r[0]); // 802D1CC0
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 802D1CC4
  c->r[5]=c->r[5]+0x00000001u; // 802D1CC8
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 802D1CCC
  c->r[0]=R8(c->r[5]+0x00000000u); // 802D1CD0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 802D1CD4
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 802D1CD8
  c->r[0]=c->r[5]+0x00000001u; // 802D1CDC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802D1CE0
L_802D1CE4:;
  c->r[4]=c->r[1]+0x00000008u; // 802D1CE4
  c->lr=0x802D1CECu; f_802D07E8(c); // 802D1CE8
L_802D1CEC:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 802D1CEC
  c->r[0]=R32(c->r[31]+0x00000008u); // 802D1CF0
  cmpu(c,0,c->r[3],c->r[0]); // 802D1CF4
  if (crb(c,0)) { goto L_802D1D28; } // 802D1CF8
  c->r[4]=R32(c->r[31]+0x00000000u); // 802D1CFC
  c->r[0]=0u+0x00000000u; // 802D1D00
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 802D1D04
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 802D1D08
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 802D1D0C
  W32(c->r[31]+0x00000024u,c->r[0]); // 802D1D10
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802D1D14
  cmps(c,0,(int32_t)c->r[0],0); // 802D1D18
  if (!crb(c,2)) { goto L_802D1D28; } // 802D1D1C
  c->r[0]=0u+0x00000001u; // 802D1D20
  W32(c->r[4]+0x00000010u,c->r[0]); // 802D1D24
L_802D1D28:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 802D1D28
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802D1D2C
  c->lr=c->r[0]; // 802D1D30
  c->r[1]=c->r[1]+0x00000030u; // 802D1D34
  return; // 802D1D38
}

// fn_802D1D3C
void f_802D1D3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D1D3C
  c->r[0]=c->lr; // 802D1D40
  W32(c->r[1]+0x00000074u,c->r[0]); // 802D1D44
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 802D1D48
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 802D1D4C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 802D1D50
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 802D1D54
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 802D1D58
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 802D1D5C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 802D1D60
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 802D1D64
  c->r[11]=c->r[1]+0x00000030u; // 802D1D68
  c->lr=0x802D1D70u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802D1D6C
  c->r[6]=0u+0x80310000u; // 802D1D70
  c->r[25]=c->r[3]|c->r[3]; // 802D1D74
  c->r[6]=c->r[6]+0xFFFFD8E0u; // 802D1D78
  c->r[28]=c->r[4]|c->r[4]; // 802D1D7C
  {uint32_t ea=c->r[6]+0x00000018u; c->f[28]=RF64(ea);} // 802D1D80
  c->r[26]=c->r[5]|c->r[5]; // 802D1D84
  {uint32_t ea=c->r[6]+0x00000020u; c->f[29]=c->ps1[29]=RF32(ea);} // 802D1D88
  c->r[29]=c->r[3]+0x0000241Cu; // 802D1D8C
  {uint32_t ea=c->r[6]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 802D1D90
  c->r[30]=0u+0x43300000u; // 802D1D94
  {uint32_t ea=c->r[6]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 802D1D98
  c->r[31]=0u+0x00000000u; // 802D1D9C
  goto L_802D1E18; // 802D1DA0
L_802D1DA4:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 802D1DA4
  c->r[27]=R32(c->r[28]+0x00000004u); // 802D1DA8
  c->r[28]=c->r[28]+0x00000008u; // 802D1DAC
  c->r[0]=c->r[3]+0xB2AC0000u; // 802D1DB0
  cmpu(c,0,c->r[0],0x0000726Bu); // 802D1DB4
  if (!crb(c,2)) { goto L_802D1E08; } // 802D1DB8
  W32(c->r[29]+0x00000000u,c->r[25]); // 802D1DBC
  c->r[0]=c->r[28]+c->r[27]; // 802D1DC0
  W32(c->r[29]+0x00000004u,c->r[28]); // 802D1DC4
  W32(c->r[29]+0x00000008u,c->r[0]); // 802D1DC8
  W32(c->r[29]+0x0000000Cu,c->r[28]); // 802D1DCC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[25]+0x0000000Au); // 802D1DD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802D1DD4
  c->r[0]=c->r[0]^0x80000000u; // 802D1DD8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802D1DDC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 802D1DE0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 802D1DE4
  c->f[0]=c->ps1[0]=S(c->f[29]/c->f[0]); // 802D1DE8
  c->f[0]=c->ps1[0]=S(c->f[30]/c->f[0]); // 802D1DEC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 802D1DF0
  c->lr=0x802D1DF8u; f_80185DAC(c); // 802D1DF4
  W32(c->r[29]+0x00000018u,c->r[3]); // 802D1DF8
  c->r[28]=c->r[28]+c->r[27]; // 802D1DFC
  W32(c->r[29]+0x00000024u,c->r[31]); // 802D1E00
  goto L_802D1E10; // 802D1E04
L_802D1E08:;
  c->r[28]=c->r[28]+c->r[27]; // 802D1E08
  IRQCHK(c); goto L_802D1DA4; // 802D1E0C
L_802D1E10:;
  c->r[26]=c->r[26]+0xFFFFFFFFu; // 802D1E10
  c->r[29]=c->r[29]+0x00000028u; // 802D1E14
L_802D1E18:;
  cmps(c,0,(int32_t)c->r[26],0); // 802D1E18
  if (!crb(c,2)) { IRQCHK(c); goto L_802D1DA4; } // 802D1E1C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 802D1E20
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 802D1E24
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 802D1E28
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 802D1E2C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 802D1E30
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 802D1E34
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 802D1E38
  c->r[11]=c->r[1]+0x00000030u; // 802D1E3C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 802D1E40
  c->lr=0x802D1E48u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802D1E44
  c->r[0]=R32(c->r[1]+0x00000074u); // 802D1E48
  c->lr=c->r[0]; // 802D1E4C
  c->r[1]=c->r[1]+0x00000070u; // 802D1E50
  return; // 802D1E54
}

// fn_802D1E58
void f_802D1E58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D1E58
  c->r[0]=c->lr; // 802D1E5C
  c->r[6]=c->r[4]+0x0000000Eu; // 802D1E60
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D1E64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D1E68
  c->r[31]=c->r[3]|c->r[3]; // 802D1E6C
  c->r[7]=R16(c->r[4]+0x00000008u); // 802D1E70
  c->r[0]=R32(c->r[4]+0x00000004u); // 802D1E74
  c->r[5]=R16(c->r[4]+0x0000000Au); // 802D1E78
  cmps(c,0,(int32_t)c->r[7],1); // 802D1E7C
  c->r[6]=c->r[0]+c->r[6]; // 802D1E80
  W16(c->r[3]+0x00000008u,c->r[5]); // 802D1E84
  c->r[6]=c->r[6]+0xFFFFFFFAu; // 802D1E88
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000000Cu); // 802D1E8C
  W16(c->r[3]+0x0000000Au,c->r[0]); // 802D1E90
  if (crb(c,2)) { goto L_802D1EC0; } // 802D1E94
  if (!crb(c,0)) { goto L_802D1EC8; } // 802D1E98
  cmps(c,0,(int32_t)c->r[7],0); // 802D1E9C
  if (!crb(c,0)) { goto L_802D1EA8; } // 802D1EA0
  goto L_802D1EC8; // 802D1EA4
L_802D1EA8:;
  c->r[0]=0u+0x00000001u; // 802D1EA8
  c->r[4]=c->r[6]|c->r[6]; // 802D1EAC
  W16(c->r[3]+0x00000008u,c->r[0]); // 802D1EB0
  c->r[5]=0u+0x00000001u; // 802D1EB4
  c->lr=0x802D1EBCu; f_802D1D3C(c); // 802D1EB8
  goto L_802D1EC8; // 802D1EBC
L_802D1EC0:;
  c->r[4]=c->r[6]|c->r[6]; // 802D1EC0
  c->lr=0x802D1EC8u; f_802D1D3C(c); // 802D1EC4
L_802D1EC8:;
  c->r[0]=R16(c->r[31]+0x00000008u); // 802D1EC8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 802D1ECC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D1ED0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D1ED4
  c->lr=c->r[0]; // 802D1ED8
  c->r[1]=c->r[1]+0x00000010u; // 802D1EDC
  return; // 802D1EE0
}

// fn_802D1EE4
void f_802D1EE4(Ctx* __restrict c) {
  c->r[5]=0u+0x80430000u; // 802D1EE4
  c->r[0]=R32(c->r[5]+0x0000781Cu); // 802D1EE8
  cmps(c,0,(int32_t)c->r[0],0); // 802D1EEC
  if (!crb(c,2)) return; // 802D1EF0
  c->r[0]=0u+0x00000001u; // 802D1EF4
  c->r[4]=0u+0x00000000u; // 802D1EF8
  c->r[3]=0u+0x80430000u; // 802D1EFC
  W32(c->r[5]+0x0000781Cu,c->r[0]); // 802D1F00
  W32(c->r[3]+0x00007818u,c->r[4]); // 802D1F04
  return; // 802D1F08
}

// fn_802D1F0C
void f_802D1F0C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 802D1F0C
  c->r[4]=0u+0x80430000u; // 802D1F10
  c->r[3]=0u+0x80430000u; // 802D1F14
  W32(c->r[4]+0x00007818u,c->r[0]); // 802D1F18
  W32(c->r[3]+0x0000781Cu,c->r[0]); // 802D1F1C
  return; // 802D1F20
}

// fn_802D1F24
void f_802D1F24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D1F24
  c->r[0]=c->lr; // 802D1F28
  c->r[3]=0u+0x80430000u; // 802D1F2C
  c->r[4]=0u+0x80430000u; // 802D1F30
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D1F34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D1F38
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D1F3C
  W32(c->r[1]+0x00000014u,c->r[29]); // 802D1F40
  W32(c->r[1]+0x00000010u,c->r[28]); // 802D1F44
  c->r[0]=R32(c->r[3]+0x0000781Cu); // 802D1F48
  c->r[30]=R32(c->r[4]+0x00007818u); // 802D1F4C
  cmps(c,0,(int32_t)c->r[0],0); // 802D1F50
  if (!crb(c,2)) { goto L_802D2080; } // 802D1F54
  goto L_802D2088; // 802D1F58
  goto L_802D2080; // 802D1F5C
L_802D1F60:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 802D1F60
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 802D1F64
  cmpu(c,0,c->r[0],0x00000001u); // 802D1F68
  if (crb(c,1)) { goto L_802D203C; } // 802D1F6C
  c->r[31]=c->r[30]+0x0000241Cu; // 802D1F70
  c->r[29]=0u+0x00000000u; // 802D1F74
  goto L_802D2030; // 802D1F78
L_802D1F7C:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 802D1F7C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 802D1F80
  cmpu(c,0,c->r[0],0x00000001u); // 802D1F84
  if (crb(c,1)) { goto L_802D2028; } // 802D1F88
  c->r[28]=R32(c->r[31]+0x0000001Cu); // 802D1F8C
  c->r[0]=R32(c->r[31]+0x00000020u); // 802D1F90
  cmpu(c,0,c->r[0],c->r[28]); // 802D1F94
  if (!crb(c,1)) { goto L_802D2010; } // 802D1F98
  c->r[0]=c->r[0]-c->r[28]; // 802D1F9C
  W32(c->r[31]+0x00000020u,c->r[0]); // 802D1FA0
  goto L_802D2028; // 802D1FA4
  goto L_802D2010; // 802D1FA8
L_802D1FAC:;
  c->r[4]=c->r[31]|c->r[31]; // 802D1FAC
  c->r[28]=c->r[28]-c->r[0]; // 802D1FB0
  c->r[3]=c->r[30]+0x00000014u; // 802D1FB4
  c->lr=0x802D1FBCu; f_802D1A58(c); // 802D1FB8
  c->r[0]=R32(c->r[31]+0x00000024u); // 802D1FBC
  cmps(c,0,(int32_t)c->r[0],0); // 802D1FC0
  if (crb(c,2)) { goto L_802D201C; } // 802D1FC4
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 802D1FC8
  c->r[4]=R8(c->r[3]+0x00000000u); // 802D1FCC
  c->r[5]=rotl(c->r[4],0)&0x0000007Fu; // 802D1FD0
  goto L_802D1FF4; // 802D1FD4
L_802D1FD8:;
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 802D1FD8
  c->r[3]=rotl(c->r[5],7)&0xFFFFFF80u; // 802D1FDC
  c->r[4]=c->r[4]+0x00000001u; // 802D1FE0
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 802D1FE4
  c->r[4]=R8(c->r[4]+0x00000000u); // 802D1FE8
  c->r[0]=rotl(c->r[4],0)&0x0000007Fu; // 802D1FEC
  c->r[5]=c->r[3]+c->r[0]; // 802D1FF0
L_802D1FF4:;
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 802D1FF4
  if (!crb(c,2)) { IRQCHK(c); goto L_802D1FD8; } // 802D1FF8
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 802D1FFC
  c->r[0]=rotl(c->r[5],16)&0xFFFF0000u; // 802D2000
  c->r[3]=c->r[3]+0x00000001u; // 802D2004
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 802D2008
  W32(c->r[31]+0x00000020u,c->r[0]); // 802D200C
L_802D2010:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 802D2010
  cmpu(c,0,c->r[28],c->r[0]); // 802D2014
  if (!crb(c,0)) { IRQCHK(c); goto L_802D1FAC; } // 802D2018
L_802D201C:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 802D201C
  c->r[0]=c->r[0]-c->r[28]; // 802D2020
  W32(c->r[31]+0x00000020u,c->r[0]); // 802D2024
L_802D2028:;
  c->r[31]=c->r[31]+0x00000028u; // 802D2028
  c->r[29]=c->r[29]+0x00000001u; // 802D202C
L_802D2030:;
  c->r[0]=R16(c->r[30]+0x00000008u); // 802D2030
  cmpu(c,0,c->r[29],c->r[0]); // 802D2034
  if (crb(c,0)) { IRQCHK(c); goto L_802D1F7C; } // 802D2038
L_802D203C:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 802D203C
  cmps(c,0,(int32_t)c->r[0],0); // 802D2040
  if (crb(c,2)) { goto L_802D207C; } // 802D2044
  c->r[0]=R32(c->r[30]+0x00000004u); // 802D2048
  cmpu(c,0,c->r[0],0x00000002u); // 802D204C
  if (!crb(c,2)) { goto L_802D2070; } // 802D2050
  c->r[3]=c->r[30]|c->r[30]; // 802D2054
  c->r[4]=0u+0x00000000u; // 802D2058
  c->lr=0x802D2060u; f_802D21D0(c); // 802D205C
  c->r[3]=c->r[30]|c->r[30]; // 802D2060
  c->r[4]=0u+0x00000002u; // 802D2064
  c->lr=0x802D206Cu; f_802D21D0(c); // 802D2068
  goto L_802D207C; // 802D206C
L_802D2070:;
  c->r[3]=c->r[30]|c->r[30]; // 802D2070
  c->r[4]=0u+0x00000000u; // 802D2074
  c->lr=0x802D207Cu; f_802D21D0(c); // 802D2078
L_802D207C:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 802D207C
L_802D2080:;
  cmps(c,0,(int32_t)c->r[30],0); // 802D2080
  if (!crb(c,2)) { IRQCHK(c); goto L_802D1F60; } // 802D2084
L_802D2088:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D2088
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D208C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D2090
  c->r[29]=R32(c->r[1]+0x00000014u); // 802D2094
  c->r[28]=R32(c->r[1]+0x00000010u); // 802D2098
  c->lr=c->r[0]; // 802D209C
  c->r[1]=c->r[1]+0x00000020u; // 802D20A0
  return; // 802D20A4
}

// fn_802D20A8
void f_802D20A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D20A8
  c->r[0]=c->lr; // 802D20AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D20B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D20B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D20B8
  c->r[30]=c->r[4]|c->r[4]; // 802D20BC
  c->r[4]=c->r[5]|c->r[5]; // 802D20C0
  c->r[5]=c->r[6]|c->r[6]; // 802D20C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 802D20C8
  c->r[29]=c->r[3]|c->r[3]; // 802D20CC
  c->r[6]=c->r[7]|c->r[7]; // 802D20D0
  c->r[3]=c->r[3]+0x00000014u; // 802D20D4
  c->lr=0x802D20DCu; f_802D05B8(c); // 802D20D8
  c->r[31]=0u+0x00000000u; // 802D20DC
  c->r[3]=c->r[29]|c->r[29]; // 802D20E0
  W32(c->r[29]+0x00000004u,c->r[31]); // 802D20E4
  c->r[4]=c->r[30]|c->r[30]; // 802D20E8
  c->lr=0x802D20F0u; f_802D1E58(c); // 802D20EC
  c->lr=0x802D20F4u; f_80160C68(c); // 802D20F0
  c->r[4]=0u+0x80430000u; // 802D20F4
  c->r[0]=R32(c->r[4]+0x00007818u); // 802D20F8
  cmps(c,0,(int32_t)c->r[0],0); // 802D20FC
  if (crb(c,2)) { goto L_802D210C; } // 802D2100
  W32(c->r[29]+0x00000000u,c->r[0]); // 802D2104
  goto L_802D2110; // 802D2108
L_802D210C:;
  W32(c->r[29]+0x00000000u,c->r[31]); // 802D210C
L_802D2110:;
  c->r[4]=0u+0x80430000u; // 802D2110
  W32(c->r[4]+0x00007818u,c->r[29]); // 802D2114
  c->lr=0x802D211Cu; f_80160C90(c); // 802D2118
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D211C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D2120
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D2124
  c->r[29]=R32(c->r[1]+0x00000014u); // 802D2128
  c->lr=c->r[0]; // 802D212C
  c->r[1]=c->r[1]+0x00000020u; // 802D2130
  return; // 802D2134
}

// fn_802D2138
void f_802D2138(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D2138
  c->r[0]=c->lr; // 802D213C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D2140
  c->r[11]=c->r[1]+0x00000020u; // 802D2144
  c->lr=0x802D214Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802D2148
  c->r[26]=c->r[3]|c->r[3]; // 802D214C
  c->lr=0x802D2154u; f_80160C68(c); // 802D2150
  c->r[30]=0u+0x80430000u; // 802D2154
  c->r[31]=0u+0x00000000u; // 802D2158
  c->r[28]=R32(c->r[30]+0x00007818u); // 802D215C
  c->r[27]=c->r[3]|c->r[3]; // 802D2160
  W32(c->r[30]+0x00007818u,c->r[31]); // 802D2164
  goto L_802D21A0; // 802D2168
L_802D216C:;
  cmpu(c,0,c->r[28],c->r[26]); // 802D216C
  c->r[29]=R32(c->r[28]+0x00000000u); // 802D2170
  if (crb(c,2)) { goto L_802D219C; } // 802D2174
  c->lr=0x802D217Cu; f_80160C68(c); // 802D2178
  c->r[0]=R32(c->r[30]+0x00007818u); // 802D217C
  cmps(c,0,(int32_t)c->r[0],0); // 802D2180
  if (crb(c,2)) { goto L_802D2190; } // 802D2184
  W32(c->r[28]+0x00000000u,c->r[0]); // 802D2188
  goto L_802D2194; // 802D218C
L_802D2190:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 802D2190
L_802D2194:;
  W32(c->r[30]+0x00007818u,c->r[28]); // 802D2194
  c->lr=0x802D219Cu; f_80160C90(c); // 802D2198
L_802D219C:;
  c->r[28]=c->r[29]|c->r[29]; // 802D219C
L_802D21A0:;
  cmps(c,0,(int32_t)c->r[28],0); // 802D21A0
  if (!crb(c,2)) { IRQCHK(c); goto L_802D216C; } // 802D21A4
  c->r[3]=c->r[27]|c->r[27]; // 802D21A8
  c->lr=0x802D21B0u; f_80160C90(c); // 802D21AC
  c->r[3]=c->r[26]+0x00000014u; // 802D21B0
  c->lr=0x802D21B8u; f_802D0740(c); // 802D21B4
  c->r[11]=c->r[1]+0x00000020u; // 802D21B8
  c->lr=0x802D21C0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802D21BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D21C0
  c->lr=c->r[0]; // 802D21C4
  c->r[1]=c->r[1]+0x00000020u; // 802D21C8
  return; // 802D21CC
}

// fn_802D21D0
void f_802D21D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D21D0
  c->r[0]=c->lr; // 802D21D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802D21D8
  c->r[11]=c->r[1]+0x00000030u; // 802D21DC
  c->lr=0x802D21E4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802D21E0
  cmps(c,0,(int32_t)c->r[4],3); // 802D21E4
  c->r[30]=c->r[3]|c->r[3]; // 802D21E8
  c->r[31]=c->r[4]|c->r[4]; // 802D21EC
  if (crb(c,2)) { goto L_802D22A8; } // 802D21F0
  if (!crb(c,0)) { goto L_802D22EC; } // 802D21F4
  cmps(c,0,(int32_t)c->r[4],0); // 802D21F8
  if (crb(c,2)) { goto L_802D22A8; } // 802D21FC
  if (!crb(c,0)) { goto L_802D2208; } // 802D2200
  goto L_802D22EC; // 802D2204
L_802D2208:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 802D2208
  cmps(c,0,(int32_t)c->r[0],0); // 802D220C
  if (!crb(c,2)) { goto L_802D229C; } // 802D2210
  c->lr=0x802D2218u; f_80160C68(c); // 802D2214
  c->r[7]=c->r[30]+0x0000241Cu; // 802D2218
  c->r[9]=0u+0x00000000u; // 802D221C
  c->r[0]=0u+0x00000001u; // 802D2220
  goto L_802D2288; // 802D2224
L_802D2228:;
  c->r[5]=R32(c->r[7]+0x00000004u); // 802D2228
  W32(c->r[7]+0x0000000Cu,c->r[5]); // 802D222C
  c->r[4]=R32(c->r[7]+0x00000018u); // 802D2230
  W32(c->r[7]+0x0000001Cu,c->r[4]); // 802D2234
  c->r[8]=R8(c->r[5]+0x00000000u); // 802D2238
  c->r[6]=rotl(c->r[8],0)&0x0000007Fu; // 802D223C
  goto L_802D2260; // 802D2240
L_802D2244:;
  c->r[4]=R32(c->r[7]+0x0000000Cu); // 802D2244
  c->r[5]=rotl(c->r[6],7)&0xFFFFFF80u; // 802D2248
  c->r[4]=c->r[4]+0x00000001u; // 802D224C
  W32(c->r[7]+0x0000000Cu,c->r[4]); // 802D2250
  c->r[8]=R8(c->r[4]+0x00000000u); // 802D2254
  c->r[4]=rotl(c->r[8],0)&0x0000007Fu; // 802D2258
  c->r[6]=c->r[5]+c->r[4]; // 802D225C
L_802D2260:;
  c->r[4]=rotl(c->r[8],0)&0x00000080u; cr0(c,c->r[4]); // 802D2260
  if (!crb(c,2)) { IRQCHK(c); goto L_802D2244; } // 802D2264
  c->r[5]=R32(c->r[7]+0x0000000Cu); // 802D2268
  c->r[4]=rotl(c->r[6],16)&0xFFFF0000u; // 802D226C
  c->r[9]=c->r[9]+0x00000001u; // 802D2270
  c->r[5]=c->r[5]+0x00000001u; // 802D2274
  W32(c->r[7]+0x0000000Cu,c->r[5]); // 802D2278
  W32(c->r[7]+0x00000020u,c->r[4]); // 802D227C
  W32(c->r[7]+0x00000024u,c->r[0]); // 802D2280
  c->r[7]=c->r[7]+0x00000028u; // 802D2284
L_802D2288:;
  c->r[4]=R16(c->r[30]+0x00000008u); // 802D2288
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[4]); // 802D228C
  if (crb(c,0)) { IRQCHK(c); goto L_802D2228; } // 802D2290
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 802D2294
  c->lr=0x802D229Cu; f_80160C90(c); // 802D2298
L_802D229C:;
  c->r[0]=0u+0x00000000u; // 802D229C
  W32(c->r[30]+0x00000010u,c->r[0]); // 802D22A0
  goto L_802D22EC; // 802D22A4
L_802D22A8:;
  c->r[27]=0u+0x00000000u; // 802D22A8
  c->r[28]=0u+0x0000007Bu; // 802D22AC
  c->r[29]=0u+0x00000000u; // 802D22B0
L_802D22B4:;
  c->lr=0x802D22B8u; f_80160C68(c); // 802D22B4
  c->r[0]=c->r[27]|0x000000B0u; // 802D22B8
  c->r[26]=c->r[3]|c->r[3]; // 802D22BC
  W8(c->r[1]+0x00000008u,c->r[0]); // 802D22C0
  c->r[3]=c->r[30]+0x00000014u; // 802D22C4
  c->r[4]=c->r[1]+0x00000008u; // 802D22C8
  W8(c->r[1]+0x00000009u,c->r[28]); // 802D22CC
  W8(c->r[1]+0x0000000Au,c->r[29]); // 802D22D0
  c->lr=0x802D22D8u; f_802D07E8(c); // 802D22D4
  c->r[3]=c->r[26]|c->r[26]; // 802D22D8
  c->lr=0x802D22E0u; f_80160C90(c); // 802D22DC
  c->r[27]=c->r[27]+0x00000001u; // 802D22E0
  cmps(c,0,(int32_t)c->r[27],16); // 802D22E4
  if (crb(c,0)) { IRQCHK(c); goto L_802D22B4; } // 802D22E8
L_802D22EC:;
  W32(c->r[30]+0x00000004u,c->r[31]); // 802D22EC
  c->r[11]=c->r[1]+0x00000030u; // 802D22F0
  c->lr=0x802D22F8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802D22F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 802D22F8
  c->lr=c->r[0]; // 802D22FC
  c->r[1]=c->r[1]+0x00000030u; // 802D2300
  return; // 802D2304
}

// fn_802D2308
void f_802D2308(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 802D2308
  return; // 802D230C
}

// fn_802D2310
void f_802D2310(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000014u; // 802D2310
  f_802D0838(c); return; // 802D2314
}

// fn_802D2318
void f_802D2318(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D2318
  c->r[0]=c->lr; // 802D231C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D2320
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D2324
  c->r[31]=c->r[6]|c->r[6]; // 802D2328
  c->r[6]=c->r[9]|c->r[9]; // 802D232C
  c->r[9]=c->r[1]+0x00000008u; // 802D2330
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D2334
  c->r[30]=c->r[5]|c->r[5]; // 802D2338
  c->r[5]=c->r[8]|c->r[8]; // 802D233C
  c->r[8]=0u+0x00000000u; // 802D2340
  W32(c->r[1]+0x00000014u,c->r[29]); // 802D2344
  c->r[29]=c->r[4]|c->r[4]; // 802D2348
  c->r[4]=c->r[7]|c->r[7]; // 802D234C
  c->r[7]=0u+0x00000001u; // 802D2350
  c->lr=0x802D2358u; f_80221EA0(c); // 802D2354
  cmps(c,0,(int32_t)c->r[3],0); // 802D2358
  if (crb(c,2)) { goto L_802D2364; } // 802D235C
  goto L_802D2380; // 802D2360
L_802D2364:;
  c->r[0]=R16(c->r[1]+0x00000008u); // 802D2364
  c->r[3]=0u+0x00000000u; // 802D2368
  W16(c->r[30]+0x00000000u,c->r[0]); // 802D236C
  c->r[0]=R16(c->r[1]+0x0000000Au); // 802D2370
  W16(c->r[31]+0x00000000u,c->r[0]); // 802D2374
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802D2378
  W32(c->r[29]+0x00000000u,c->r[0]); // 802D237C
L_802D2380:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D2380
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D2384
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D2388
  c->r[29]=R32(c->r[1]+0x00000014u); // 802D238C
  c->lr=c->r[0]; // 802D2390
  c->r[1]=c->r[1]+0x00000020u; // 802D2394
  return; // 802D2398
}

// fn_802D239C
void f_802D239C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D239C
  c->r[0]=c->lr; // 802D23A0
  c->r[9]=c->r[4]|c->r[4]; // 802D23A4
  c->r[4]=c->r[6]|c->r[6]; // 802D23A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D23AC
  c->r[0]=c->r[5]|c->r[5]; // 802D23B0
  c->r[5]=c->r[7]|c->r[7]; // 802D23B4
  c->r[6]=c->r[9]|c->r[9]; // 802D23B8
  c->r[7]=c->r[0]|c->r[0]; // 802D23BC
  c->r[9]=0u+0x00000001u; // 802D23C0
  c->r[10]=0u+0x00000000u; // 802D23C4
  c->lr=0x802D23CCu; f_8022202C(c); // 802D23C8
  c->r[0]=0u-c->r[3]; // 802D23CC
  c->r[0]=c->r[0]|c->r[3]; // 802D23D0
  c->r[0]=sraw(c,c->r[0],31); // 802D23D4
  c->r[3]=c->r[3]&c->r[0]; // 802D23D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D23DC
  c->lr=c->r[0]; // 802D23E0
  c->r[1]=c->r[1]+0x00000010u; // 802D23E4
  return; // 802D23E8
}

