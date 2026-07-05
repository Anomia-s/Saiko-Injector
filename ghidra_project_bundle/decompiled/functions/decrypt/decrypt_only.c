/**
 * Function: decrypt_only
 * Address:  140d9ac60
 * Signature: undefined decrypt_only(void)
 * Body size: 179 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
decrypt_only(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140b93540(param_1,"decrypt-only");
  if ((lVar2 != 0) && (iVar1 = FUN_140b94350(lVar2,0), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\cipher_tdes_common.c",200,
               "ossl_tdes_get_params");
    FUN_140b91cc0(0x39,0x68,0);
    return 0;
  }
  uVar3 = blocksize(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar3;
}

