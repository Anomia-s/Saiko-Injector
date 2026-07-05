/**
 * Function: rsa_pss_private_key
 * Address:  140d60d70
 * Signature: undefined rsa_pss_private_key(void)
 * Body size: 589 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool rsa_pss_private_key(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                        uint param_5,longlong param_6,undefined8 param_7)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_4 == 0) {
    if ((param_5 & 1) == 0) {
      if ((param_5 & 2) == 0) goto LAB_140d60f77;
      bVar3 = false;
      if (param_3 == 0) goto LAB_140d60db5;
      iVar1 = FUN_140c2a410(param_3,0xf000);
      if (iVar1 == 0x1000) {
        lVar2 = FUN_140d713c0(*param_1,param_2);
        if ((lVar2 != 0) &&
           ((param_6 == 0 || (iVar1 = FUN_140c714b0(param_1 + 3,param_6,param_7), iVar1 != 0)))) {
          iVar1 = FUN_140bf44b0(FUN_140d68610,param_1,"RSA-PSS PUBLIC KEY",lVar2,param_3,param_1[2],
                                0,0,0,0);
          bVar3 = 0 < iVar1;
        }
        FUN_140b73150(lVar2);
        return bVar3;
      }
    }
    else {
      bVar3 = false;
      if (param_3 == 0) {
LAB_140d60db5:
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\encode_decode\\encode_key2any.c",0x4cb,
                   "key2any_encode");
        FUN_140b91cc0(0x39,0xc0102,0);
        return false;
      }
      iVar1 = FUN_140c2a410(param_3,0xf000);
      if (iVar1 == 0x1000) {
        lVar2 = FUN_140d713c0(*param_1,param_2);
        if ((lVar2 != 0) &&
           ((param_6 == 0 || (iVar1 = FUN_140c714b0(param_1 + 3,param_6,param_7), iVar1 != 0)))) {
          iVar1 = FUN_140bf44b0(FUN_140d685f0,param_1,"RSA-PSS PRIVATE KEY",lVar2,param_3,param_1[2]
                                ,0,0,FUN_140c718d0,param_1 + 3);
          bVar3 = 0 < iVar1;
        }
        FUN_140b73150(lVar2);
        return bVar3;
      }
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2any.c",0x4d8,"key2any_encode")
    ;
    FUN_140b91cc0(0x39,0x80106,0);
  }
  else {
LAB_140d60f77:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2any.c",0x6c3,
               "rsapss_to_PKCS1_pem_encode");
    FUN_140b91cc0(0x39,0x80106,0);
  }
  return false;
}

