/**
 * Function: sm2_to_subjectpublickeyinfo_der_encode
 * Address:  140d538a0
 * Signature: undefined sm2_to_subjectpublickeyinfo_der_encode(void)
 * Body size: 387 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
sm2_to_subjectpublickeyinfo_der_encode
          (undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,byte param_5,
          longlong param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res20 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140d538b0;
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2any.c",0x622,
               "sm2_to_SubjectPublicKeyInfo_der_encode");
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
      if (iVar1 == 0) goto LAB_140d539c8;
    }
    local_18 = 0;
    local_res20[0] = 0xffffffff;
    iVar1 = FUN_140d67ff0(param_3,0x198,*(undefined4 *)(param_1 + 1),&local_18,local_res20);
    if (iVar1 != 0) {
      lVar4 = key_to_pubkey(param_3,0x198,local_18,local_res20[0],FUN_140d68160,param_1);
      if (lVar4 != 0) {
        uVar2 = FUN_140bf3590(lVar3,lVar4);
      }
      FUN_140b9d550(lVar4);
    }
  }
LAB_140d539c8:
  FUN_140b73150(lVar3);
  return uVar2;
}

