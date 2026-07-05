/**
 * Function: dgram_pair_read
 * Address:  140c3d8f0
 * Signature: undefined dgram_pair_read(void)
 * Body size: 467 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong dgram_pair_read(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar7 = 0x140c3d90a;
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (param_3 < 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\bio\\bss_dgram_pair.c",0x3f8,"dgram_pair_read");
    FUN_140b91cc0(0x20,0x7d,0);
  }
  else if (*plVar1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\bio\\bss_dgram_pair.c",0x3fd,"dgram_pair_read");
    FUN_140b91cc0(0x20,0x7c,0);
  }
  else {
    plVar2 = *(longlong **)(*plVar1 + 0x40);
    uVar5 = *(uint *)(plVar2 + 0xb) >> 2 & 1;
    plVar6 = plVar2;
    plVar3 = plVar1;
    if (uVar5 != 0) {
      plVar6 = plVar1;
      plVar3 = plVar2;
    }
    if ((((uVar5 != (*(uint *)(plVar1 + 0xb) >> 2 & 1)) && (plVar2 != plVar1)) && (plVar3 != plVar6)
        ) && (iVar4 = FUN_140b8b770(plVar3[10]), iVar4 != 0)) {
      iVar4 = FUN_140b8b770(plVar6[10]);
      if (iVar4 != 0) {
        uVar7 = FUN_140c3ed50(param_1,param_2,(longlong)param_3,0,0,uVar7 & 0xffffffff00000000);
        if ((longlong)uVar7 < 0) {
          if (uVar7 != 0xffffffffffffff90) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\bio\\bss_dgram_pair.c",0x410,"dgram_pair_read");
            FUN_140b91cc0(0x20,-(int)uVar7,0);
          }
          uVar7 = 0xffffffff;
        }
        FUN_140b8b7a0(plVar2[10]);
        FUN_140b8b7a0(plVar1[10]);
        return uVar7 & 0xffffffff;
      }
      FUN_140b8b7a0(plVar3[10]);
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\bio\\bss_dgram_pair.c",0x409,"dgram_pair_read");
    FUN_140b91cc0(0x20,0xc0110,0);
  }
  return 0xffffffff;
}

