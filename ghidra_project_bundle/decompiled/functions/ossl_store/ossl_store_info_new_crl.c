/**
 * Function: ossl_store_info_new_crl
 * Address:  140c265e0
 * Signature: undefined ossl_store_info_new_crl(void)
 * Body size: 117 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * ossl_store_info_new_crl(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_140b8da80(0x18,"crypto\\store\\store_lib.c",0x264);
  if (puVar1 == (undefined4 *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\store\\store_lib.c",0x2b1,"OSSL_STORE_INFO_new_CRL");
    FUN_140b91cc0(0x2c,0x8002c,0);
    return (undefined4 *)0x0;
  }
  *puVar1 = 6;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}

