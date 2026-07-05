/**
 * Function: dh_to_privatekeyinfo_pem_encode
 * Address:  140d64810
 * Signature: undefined dh_to_privatekeyinfo_pem_encode(void)
 * Body size: 400 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
dh_to_privatekeyinfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,byte param_5,
          longlong param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2any.c",0x604,
               "dh_to_PrivateKeyInfo_pem_encode");
    FUN_140b91cc0(0x39,0x80106,0);
    return 0;
  }
  uVar2 = 0;
  if (param_3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2any.c",0x4cb,"key2any_encode")
    ;
    uVar4 = 0xc0102;
  }
  else {
    iVar1 = FUN_140c0ac20(param_3,0x1000);
    if (iVar1 == 0) {
      lVar3 = FUN_140d713c0(*param_1,param_2);
      if (lVar3 != 0) {
        if (param_6 != 0) {
          iVar1 = FUN_140c714b0(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_140d648f7;
        }
        uVar2 = FUN_140d676d0(lVar3,param_3,0x1c,"DH PRIVATE KEY",FUN_140d679c0,FUN_140d67b90,
                              param_1);
      }
LAB_140d648f7:
      FUN_140b73150(lVar3);
      return uVar2;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2any.c",0x4d8,"key2any_encode")
    ;
    uVar4 = 0x80106;
  }
  FUN_140b91cc0(0x39,uVar4,0);
  return 0;
}

