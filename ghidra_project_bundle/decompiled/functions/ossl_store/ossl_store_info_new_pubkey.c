/**
 * Function: ossl_store_info_new_pubkey
 * Address:  140c26460
 * Signature: undefined ossl_store_info_new_pubkey(void)
 * Body size: 117 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * ossl_store_info_new_pubkey(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_140b8da80(0x18,"crypto\\store\\store_lib.c",0x264);
  if (puVar1 == (undefined4 *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\store\\store_lib.c",0x296,"OSSL_STORE_INFO_new_PUBKEY");
    FUN_140b91cc0(0x2c,0x8002c,0);
    return (undefined4 *)0x0;
  }
  *puVar1 = 3;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}

