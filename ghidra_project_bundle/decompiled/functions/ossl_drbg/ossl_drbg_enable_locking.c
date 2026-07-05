/**
 * Function: ossl_drbg_enable_locking
 * Address:  140cac5b0
 * Signature: undefined ossl_drbg_enable_locking(void)
 * Body size: 190 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_drbg_enable_locking(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    if ((code *)param_1[7] != (code *)0x0) {
      iVar1 = (*(code *)param_1[7])(param_1[6]);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\rands\\drbg.c",0x2fb,"ossl_drbg_enable_locking");
        FUN_140b91cc0(0x39,0xb6,0);
        return 0;
      }
    }
    lVar2 = cryptothreads_winc();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\rands\\drbg.c",0x300,"ossl_drbg_enable_locking");
      FUN_140b91cc0(0x39,0xb4,0);
      return 0;
    }
  }
  return 1;
}

