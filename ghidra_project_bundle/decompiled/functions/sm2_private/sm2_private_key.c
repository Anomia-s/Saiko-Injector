/**
 * Function: sm2_private_key
 * Address:  140d614b0
 * Signature: undefined sm2_private_key(void)
 * Body size: 498 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool sm2_private_key(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                    uint param_5,longlong param_6,undefined8 param_7)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_4 == 0) {
    if ((param_5 & 1) != 0) {
      bVar3 = false;
      if (param_3 != 0) {
        lVar2 = FUN_140d713c0(*param_1);
        if ((lVar2 != 0) &&
           ((param_6 == 0 || (iVar1 = FUN_140c714b0(param_1 + 3,param_6,param_7), iVar1 != 0)))) {
          iVar1 = FUN_140bf44b0(FUN_140d68260,param_1,"SM2 PRIVATE KEY",lVar2,param_3,param_1[2],0,0
                                ,FUN_140c718d0,param_1 + 3);
          bVar3 = 0 < iVar1;
        }
        FUN_140b73150(lVar2);
        return bVar3;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\encode_decode\\encode_key2any.c",0x4cb,
                 "key2any_encode");
      FUN_140b91cc0(0x39,0xc0102,0);
      return false;
    }
    if ((param_5 & 0x84) != 0) {
      bVar3 = false;
      if (param_3 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\encode_decode\\encode_key2any.c",0x4cb,
                   "key2any_encode");
        FUN_140b91cc0(0x39,0xc0102,0);
        return false;
      }
      lVar2 = FUN_140d713c0(*param_1);
      if (lVar2 != 0) {
        iVar1 = FUN_140bf44b0(FUN_140d68240,param_1,"SM2 PARAMETERS",lVar2,param_3,param_1[2],0,0,0,
                              0);
        bVar3 = 0 < iVar1;
      }
      FUN_140b73150(lVar2);
      return bVar3;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\encode_decode\\encode_key2any.c",0x5e8,
             "sm2_to_type_specific_no_pub_pem_encode");
  FUN_140b91cc0(0x39,0x80106,0);
  return false;
}

