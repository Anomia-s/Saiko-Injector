/**
 * Function: ed25519_to_privatekeyinfo_pem_encode
 * Address:  140d53fa0
 * Signature: undefined ed25519_to_privatekeyinfo_pem_encode(void)
 * Body size: 313 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
ed25519_to_privatekeyinfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,byte param_5,
          longlong param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2any.c",0x629,
               "ed25519_to_PrivateKeyInfo_pem_encode");
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
      if (iVar1 == 0) goto LAB_140d5407e;
    }
    uVar2 = FUN_140d676d0(lVar3,param_3,0x43f,"ED25519 PRIVATE KEY",0,FUN_140d68310,param_1);
  }
LAB_140d5407e:
  FUN_140b73150(lVar3);
  return uVar2;
}

