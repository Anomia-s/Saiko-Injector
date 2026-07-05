/**
 * Function: test_rng_enable_locking
 * Address:  140d294d0
 * Signature: undefined test_rng_enable_locking(void)
 * Body size: 110 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 test_rng_enable_locking(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x48) == 0)) {
    lVar1 = cryptothreads_winc();
    *(longlong *)(param_1 + 0x48) = lVar1;
    if (lVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\rands\\test_rng.c",0x134,"test_rng_enable_locking");
      FUN_140b91cc0(0x39,0x7e,0);
      return 0;
    }
  }
  return 1;
}

