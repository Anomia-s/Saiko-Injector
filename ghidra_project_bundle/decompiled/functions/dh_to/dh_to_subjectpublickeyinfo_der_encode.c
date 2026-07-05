/**
 * Function: dh_to_subjectpublickeyinfo_der_encode
 * Address:  140d64af0
 * Signature: undefined dh_to_subjectpublickeyinfo_der_encode(void)
 * Body size: 642 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
dh_to_subjectpublickeyinfo_der_encode
          (undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,byte param_5,
          longlong param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2any.c",0x605,
               "dh_to_SubjectPublicKeyInfo_der_encode");
    FUN_140b91cc0(0x39,0x80106,0);
    return 0;
  }
  uVar2 = 0;
  if (param_3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2any.c",0x4cb,"key2any_encode")
    ;
    uVar6 = 0xc0102;
  }
  else {
    iVar1 = FUN_140c0ac20(param_3,0x1000);
    if (iVar1 == 0) {
      lVar3 = FUN_140d713c0(*param_1,param_2);
      if (lVar3 != 0) {
        if (param_6 != 0) {
          iVar1 = FUN_140c714b0(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_140d64cc4;
        }
        piVar4 = (int *)FUN_140b78910();
        if (piVar4 == (int *)0x0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\encode_decode\\encode_key2any.c",0x1d3,
                     "prepare_dh_params");
          FUN_140b91cc0(0x39,0x8000d,0);
          FUN_140b73150(lVar3);
          return 0;
        }
        iVar1 = FUN_140ca6c00(param_3,piVar4 + 2);
        *piVar4 = iVar1;
        if (iVar1 < 1) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\encode_decode\\encode_key2any.c",0x1dd,
                     "prepare_dh_params");
          FUN_140b91cc0(0x39,0x8000d,0);
          FUN_140b78950(piVar4);
          FUN_140b73150(lVar3);
          return 0;
        }
        piVar4[1] = 0x10;
        lVar5 = key_to_pubkey(param_3,0x1c,piVar4,0x10,FUN_140d67ac0,param_1);
        if (lVar5 != 0) {
          uVar2 = FUN_140bf3590(lVar3,lVar5);
        }
        FUN_140b9d550(lVar5);
      }
LAB_140d64cc4:
      FUN_140b73150(lVar3);
      return uVar2;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2any.c",0x4d8,"key2any_encode")
    ;
    uVar6 = 0x80106;
  }
  FUN_140b91cc0(0x39,uVar6,0);
  return 0;
}

