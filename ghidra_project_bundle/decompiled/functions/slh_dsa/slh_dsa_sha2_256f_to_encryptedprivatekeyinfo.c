/**
 * Function: slh_dsa_sha2_256f_to_encryptedprivatekeyinfo
 * Address:  140d56c00
 * Signature: undefined slh_dsa_sha2_256f_to_encryptedprivatekeyinfo(void)
 * Body size: 335 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
slh_dsa_sha2_256f_to_encryptedprivatekeyinfo
          (undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,byte param_5,
          longlong param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2any.c",0x64c,
               "slh_dsa_sha2_256f_to_EncryptedPrivateKeyInfo_pem_encode");
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
      if (iVar1 == 0) goto LAB_140d56cf4;
    }
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      lVar4 = p8info_to_encp8(param_3,0x5b9,0,0xffffffff,FUN_140d686f0,param_1);
      if (lVar4 != 0) {
        uVar2 = encrypted_private_key(lVar3,lVar4);
      }
      FUN_140c6f680(lVar4);
    }
  }
LAB_140d56cf4:
  FUN_140b73150(lVar3);
  return uVar2;
}

