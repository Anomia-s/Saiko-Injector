/**
 * Function: ossl_store_loader_get0_provider
 * Address:  140c5c480
 * Signature: undefined ossl_store_loader_get0_provider(void)
 * Body size: 81 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_store_loader_get0_provider
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x140c5c48a;
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\store\\store_meth.c",0x19e,"OSSL_STORE_LOADER_get0_provider",param_4,uVar1);
    FUN_140b91cc0(0x2c,0xc0102,0);
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x60);
}

