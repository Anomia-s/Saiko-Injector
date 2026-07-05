/**
 * Function: dgram_pair_write
 * Address:  140c3d7c0
 * Signature: undefined dgram_pair_write(void)
 * Body size: 290 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong dgram_pair_write(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0x140c3d7da;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (param_3 < 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\bio\\bss_dgram_pair.c",0x501,"dgram_pair_write");
    FUN_140b91cc0(0x20,0x7d,0);
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_140b8b770(*(undefined8 *)(lVar1 + 0x50));
    if (iVar2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\bio\\bss_dgram_pair.c",0x506,"dgram_pair_write");
      FUN_140b91cc0(0x20,0xc0110,0);
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = FUN_140c3f2c0(param_1,param_2,(longlong)param_3,0,0,uVar3 & 0xffffffff00000000);
      if ((longlong)uVar3 < 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\bio\\bss_dgram_pair.c",0x50c,"dgram_pair_write");
        FUN_140b91cc0(0x20,-(int)uVar3,0);
        uVar3 = 0xffffffff;
      }
      FUN_140b8b7a0(*(undefined8 *)(lVar1 + 0x50));
      uVar3 = uVar3 & 0xffffffff;
    }
  }
  return uVar3;
}

