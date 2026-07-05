/**
 * Function: dgram_pair_recvmmsg
 * Address:  140c3e5b0
 * Signature: undefined dgram_pair_recvmmsg(void)
 * Body size: 485 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong dgram_pair_recvmmsg(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                             undefined8 param_5,ulonglong *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x40);
  if (param_4 == 0) {
    *param_6 = 0;
    return 1;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\bio\\bss_dgram_pair.c",0x42c,"dgram_pair_recvmmsg");
    FUN_140b91cc0(0x20,0x7c,0);
    *param_6 = 0;
    return 0;
  }
  if (*plVar7 != 0) {
    plVar7 = *(longlong **)(*plVar7 + 0x40);
  }
  iVar1 = FUN_140b8b770(plVar7[10]);
  if (iVar1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\bio\\bss_dgram_pair.c",0x437,"dgram_pair_recvmmsg");
    FUN_140b91cc0(0x20,0xc0110,0);
    *param_6 = 0;
    return 0;
  }
  uVar5 = 0;
  uVar6 = uVar5;
  uVar4 = 1;
  if (param_4 != 0) {
    plVar3 = (longlong *)(param_2 + 8);
    do {
      lVar2 = FUN_140c3ed50(param_1,plVar3[-1],*plVar3,plVar3[2],plVar3[1],1);
      if (lVar2 < 0) {
        *param_6 = uVar6;
        if (uVar6 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\bio\\bss_dgram_pair.c",0x445,"dgram_pair_recvmmsg");
          FUN_140b91cc0(0x20,-(int)lVar2,0);
          uVar4 = uVar5;
        }
        goto LAB_140c3e729;
      }
      *plVar3 = lVar2;
      uVar6 = uVar6 + 1;
      plVar3[3] = 0;
      plVar3 = (longlong *)((longlong)plVar3 + param_3);
    } while (uVar6 < param_4);
  }
  *param_6 = uVar6;
LAB_140c3e729:
  FUN_140b8b7a0(plVar7[10]);
  return uVar4;
}

