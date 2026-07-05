/**
 * Function: ossl_drbg_verify_digest
 * Address:  140cac9e0
 * Signature: undefined ossl_drbg_verify_digest(void)
 * Body size: 89 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_drbg_verify_digest(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x140cac9ea;
  iVar1 = FUN_140b97c00(param_3);
  if (iVar1 != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\rands\\drbg.c",0x401,"ossl_drbg_verify_digest",param_4,
               uVar2);
    FUN_140b91cc0(0x39,0xb7,0);
    return 0;
  }
  return 1;
}

