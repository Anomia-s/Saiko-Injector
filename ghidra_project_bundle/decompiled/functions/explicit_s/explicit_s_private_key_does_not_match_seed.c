/**
 * Function: explicit_s_private_key_does_not_match_seed
 * Address:  140d9f0b0
 * Signature: undefined explicit_s_private_key_does_not_match_seed(void)
 * Body size: 309 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int explicit_s_private_key_does_not_match_seed(undefined8 *param_1)

{
  void *_Buf2;
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1[0x16] == 0) {
    lVar3 = FUN_140b8d8d0(0x20,"crypto\\ml_dsa\\ml_dsa_key.c",0x1d2);
    param_1[0x16] = lVar3;
    if (lVar3 != 0) {
      iVar1 = FUN_140b82e60(*param_1,lVar3,0x20,0);
      if (0 < iVar1) goto LAB_140d9f130;
      FUN_140b8d990(param_1[0x16],"crypto\\ml_dsa\\ml_dsa_key.c",0x1d5);
      param_1[0x16] = 0;
    }
    return 0;
  }
LAB_140d9f130:
  _Buf2 = (void *)param_1[0x15];
  param_1[0x15] = 0;
  iVar1 = FUN_140d9f890(param_1);
  if (_Buf2 != (void *)0x0) {
    if (iVar1 != 0) {
      iVar2 = memcmp((void *)param_1[0x15],_Buf2,*(size_t *)(param_1[1] + 0x40));
      if (iVar2 != 0) {
        iVar1 = 0;
        d_aplatformplatformopenssl_srccryptoml_dsaml(param_1);
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\ml_dsa\\ml_dsa_key.c",0x1e4,"ossl_ml_dsa_generate_key");
        FUN_140b91cc0(0x39,0x9e,"explicit %s private key does not match seed",
                      *(undefined8 *)param_1[1]);
      }
    }
    FUN_140b8d990(_Buf2,"crypto\\ml_dsa\\ml_dsa_key.c",0x1e8);
  }
  return iVar1;
}

