/**
 * Function: x942_dh_parameters
 * Address:  140d61a00
 * Signature: undefined x942_dh_parameters(void)
 * Body size: 376 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool x942_dh_parameters(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                       byte param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if ((param_4 == 0) && ((param_5 & 0x84) != 0)) {
    bVar4 = false;
    if (param_3 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\encode_decode\\encode_key2any.c",0x4cb,
                 "key2any_encode");
      uVar3 = 0xc0102;
    }
    else {
      iVar1 = FUN_140c0ac20(param_3,0x1000);
      if (iVar1 != 0) {
        lVar2 = FUN_140d713c0(*param_1,param_2);
        if (lVar2 != 0) {
          iVar1 = FUN_140bf44b0(FUN_140d67c60,param_1,"X9.42 DH PARAMETERS",lVar2,param_3,param_1[2]
                                ,0,0,0,0);
          bVar4 = 0 < iVar1;
        }
        FUN_140b73150(lVar2);
        return bVar4;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\encode_decode\\encode_key2any.c",0x4d8,
                 "key2any_encode");
      uVar3 = 0x80106;
    }
    FUN_140b91cc0(0x39,uVar3,0);
    return false;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\encode_decode\\encode_key2any.c",0x6c8,
             "dhx_to_X9_42_pem_encode");
  FUN_140b91cc0(0x39,0x80106,0);
  return false;
}

