/**
 * Function: ossl_store_info_new_name
 * Address:  140c26300
 * Signature: undefined ossl_store_info_new_name(void)
 * Body size: 125 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * ossl_store_info_new_name(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_140b8da80(0x18,"crypto\\store\\store_lib.c",0x264);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(undefined8 *)(puVar1 + 2) = param_1;
    *(undefined8 *)(puVar1 + 4) = 0;
    return puVar1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\store\\store_lib.c",0x273,"OSSL_STORE_INFO_new_NAME");
  FUN_140b91cc0(0x2c,0x8002c,0);
  return (undefined4 *)0x0;
}

