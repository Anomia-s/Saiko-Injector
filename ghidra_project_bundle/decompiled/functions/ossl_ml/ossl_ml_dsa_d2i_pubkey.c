/**
 * Function: ossl_ml_dsa_d2i_pubkey
 * Address:  140dac980
 * Signature: undefined ossl_ml_dsa_d2i_pubkey(void)
 * Body size: 300 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ossl_ml_dsa_d2i_pubkey
                   (void *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined *_Buf2;
  
  uVar2 = FUN_140b76070(param_4);
  puVar3 = (undefined8 *)FUN_140db6c10(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    if (param_3 == 0x5b1) {
      _Buf2 = &DAT_14131bc90;
    }
    else if (param_3 == 0x5b2) {
      _Buf2 = &DAT_14131bec0;
    }
    else {
      if (param_3 != 0x5b3) {
        return 0;
      }
      _Buf2 = &DAT_14131c0f0;
    }
    if ((((longlong)param_2 == puVar3[9] + 0x16) && (iVar1 = memcmp(param_1,_Buf2,0x16), iVar1 == 0)
        ) && (lVar4 = FUN_140d9e7f0(uVar2,param_5,param_3), lVar4 != 0)) {
      iVar1 = FUN_140d9fae0(lVar4,(longlong)param_1 + 0x16,(longlong)(param_2 + -0x16));
      if (iVar1 != 0) {
        return lVar4;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\encode_decode\\ml_dsa_codecs.c",0x80,
                 "ossl_ml_dsa_d2i_PUBKEY");
      FUN_140b91cc0(0x39,0x8d,"errror parsing %s public key from input SPKI",*puVar3);
      FUN_140d9eba0(lVar4);
    }
  }
  return 0;
}

