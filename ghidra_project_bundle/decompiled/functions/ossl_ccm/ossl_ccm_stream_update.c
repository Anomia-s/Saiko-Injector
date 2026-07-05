/**
 * Function: ossl_ccm_stream_update
 * Address:  140d99940
 * Signature: undefined ossl_ccm_stream_update(void)
 * Body size: 160 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_ccm_stream_update(void)

{
  int iVar1;
  ulonglong in_R9;
  ulonglong in_stack_00000030;
  
  if (in_R9 < in_stack_00000030) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0x114,
               "ossl_ccm_stream_update");
    FUN_140b91cc0(0x39,0x6a,0);
    return 0;
  }
  iVar1 = FUN_140d99b60();
  if (iVar1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0x119,
               "ossl_ccm_stream_update");
    FUN_140b91cc0(0x39,0x66,0);
    return 0;
  }
  return 1;
}

