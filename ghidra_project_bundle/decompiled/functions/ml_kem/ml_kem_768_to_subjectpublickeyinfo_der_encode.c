/**
 * Function: ml_kem_768_to_subjectpublickeyinfo_der_encode
 * Address:  140d5c9f0
 * Signature: undefined ml_kem_768_to_subjectpublickeyinfo_der_encode(void)
 * Body size: 330 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
ml_kem_768_to_subjectpublickeyinfo_der_encode
          (undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,byte param_5,
          longlong param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2any.c",0x697,
               "ml_kem_768_to_SubjectPublicKeyInfo_der_encode");
    FUN_140b91cc0(0x39,0x80106,0);
    return 0;
  }
  uVar2 = 0;
  if (param_3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2any.c",0x4cb,"key2any_encode")
    ;
    FUN_140b91cc0(0x39,0xc0102,0);
    return 0;
  }
  lVar3 = FUN_140d713c0(*param_1);
  if (lVar3 != 0) {
    if (param_6 != 0) {
      iVar1 = FUN_140c714b0(param_1 + 3,param_6,param_7);
      if (iVar1 == 0) goto LAB_140d5cadf;
    }
    lVar4 = key_to_pubkey(param_3,0x5af,0,0xffffffff,FUN_140d68400,param_1);
    if (lVar4 != 0) {
      uVar2 = FUN_140bf3590(lVar3,lVar4);
    }
    FUN_140b9d550(lVar4);
  }
LAB_140d5cadf:
  FUN_140b73150(lVar3);
  return uVar2;
}

