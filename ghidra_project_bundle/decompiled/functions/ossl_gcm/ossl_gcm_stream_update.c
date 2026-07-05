/**
 * Function: ossl_gcm_stream_update
 * Address:  140d982f0
 * Signature: undefined ossl_gcm_stream_update(void)
 * Body size: 168 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_gcm_stream_update
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4,
          undefined8 param_5,ulonglong param_6)

{
  int iVar1;
  
  if (param_6 == 0) {
    *param_3 = 0;
  }
  else {
    if (param_4 < param_6) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon_gcm.c",0x155,
                 "ossl_gcm_stream_update");
      FUN_140b91cc0(0x39,0x6a,0);
      return 0;
    }
    iVar1 = FUN_140d98480();
    if (iVar1 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon_gcm.c",0x15a,
                 "ossl_gcm_stream_update");
      FUN_140b91cc0(0x39,0x66,0);
      return 0;
    }
  }
  return 1;
}

