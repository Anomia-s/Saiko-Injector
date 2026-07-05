/**
 * Function: rsa_ossl_public_decrypt
 * Address:  140ca79d0
 * Signature: undefined rsa_ossl_public_decrypt(void)
 * Body size: 989 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int rsa_ossl_public_decrypt
              (int param_1,undefined8 param_2,void *param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  void *_Src;
  longlong lVar7;
  byte *pbVar8;
  size_t _Size;
  undefined4 uVar9;
  
  iVar2 = 0;
  _Src = (void *)0x0;
  iVar3 = -1;
  iVar1 = FUN_140bfc870(*(undefined8 *)(param_4 + 0x28));
  if (0x4000 < iVar1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_ossl.c",0x2cb,"rsa_ossl_public_decrypt");
    FUN_140b91cc0(4,0x69,0);
    return -1;
  }
  iVar1 = FUN_140bfd180(*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x30));
  if (iVar1 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_ossl.c",0x2d0,"rsa_ossl_public_decrypt");
    FUN_140b91cc0(4,0x65,0);
    return -1;
  }
  iVar1 = FUN_140bfc870(*(undefined8 *)(param_4 + 0x28));
  if ((0xc00 < iVar1) && (iVar1 = FUN_140bfc870(*(undefined8 *)(param_4 + 0x30)), 0x40 < iVar1)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_ossl.c",0x2d7,"rsa_ossl_public_decrypt");
    FUN_140b91cc0(4,0x65,0);
    return -1;
  }
  lVar4 = FUN_140c936d0(*(undefined8 *)(param_4 + 8));
  if (lVar4 == 0) goto LAB_140ca7d73;
  bn_ctx_start(lVar4);
  uVar5 = FUN_140c93a20(lVar4);
  lVar6 = FUN_140c93a20(lVar4);
  if (lVar6 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_ossl.c",0x2e2,"rsa_ossl_public_decrypt");
    uVar5 = 0x80003;
  }
  else {
    iVar1 = FUN_140bfc870(*(undefined8 *)(param_4 + 0x28));
    iVar2 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
    _Src = (void *)FUN_140b8d8d0((longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0x2e6);
    if (_Src == (void *)0x0) goto LAB_140ca7d73;
    if (iVar2 < param_1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\rsa\\rsa_ossl.c",0x2ef,"rsa_ossl_public_decrypt");
      uVar5 = 0x6c;
    }
    else {
      lVar7 = FUN_140bfcc40(param_2,param_1,uVar5);
      if (lVar7 == 0) goto LAB_140ca7d73;
      iVar1 = FUN_140bfd180(uVar5,*(undefined8 *)(param_4 + 0x28));
      if (iVar1 < 0) {
        if (((*(byte *)(param_4 + 0xa4) & 2) != 0) &&
           (lVar7 = FUN_140c92e90((undefined8 *)(param_4 + 0xa8),*(undefined8 *)(param_4 + 0xd0),
                                  *(undefined8 *)(param_4 + 0x28),lVar4), lVar7 == 0))
        goto LAB_140ca7d73;
        lVar7 = lVar4;
        iVar1 = (**(code **)(*(longlong *)(param_4 + 0x18) + 0x30))
                          (lVar6,uVar5,*(undefined8 *)(param_4 + 0x30),
                           *(undefined8 *)(param_4 + 0x28),lVar4,*(undefined8 *)(param_4 + 0xa8));
        uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
        if ((iVar1 == 0) ||
           (((param_5 == 5 && (pbVar8 = (byte *)FUN_140b8c100(lVar6), (*pbVar8 & 0xf) != 0xc)) &&
            (iVar1 = FUN_140c99e50(lVar6,*(undefined8 *)(param_4 + 0x28),lVar6), iVar1 == 0))))
        goto LAB_140ca7d73;
        iVar1 = FUN_140bfcca0(lVar6,_Src,iVar2);
        _Size = (size_t)iVar1;
        if (iVar1 < 0) goto LAB_140ca7d73;
        if (param_5 == 1) {
          iVar3 = FUN_140cfcf90(param_3,iVar2,_Src,_Size,CONCAT44(uVar9,iVar2));
        }
        else {
          if (param_5 == 3) {
            memcpy(param_3,_Src,_Size);
            iVar3 = iVar1;
            goto LAB_140ca7d73;
          }
          if (param_5 != 5) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\rsa\\rsa_ossl.c",0x318,"rsa_ossl_public_decrypt");
            uVar5 = 0x76;
            goto LAB_140ca7d5c;
          }
          iVar3 = FUN_140c90100(param_3,iVar2,_Src,_Size,CONCAT44(uVar9,iVar2));
        }
        if (-1 < iVar3) goto LAB_140ca7d73;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\rsa\\rsa_ossl.c",0x31c,"rsa_ossl_public_decrypt");
        uVar5 = 0x72;
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\rsa\\rsa_ossl.c",0x2f7,"rsa_ossl_public_decrypt");
        uVar5 = 0x84;
      }
    }
  }
LAB_140ca7d5c:
  FUN_140b91cc0(4,uVar5,0);
LAB_140ca7d73:
  FUN_140c93bc0(lVar4);
  FUN_140c93850(lVar4);
  FUN_140b8db20(_Src,(longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0x321);
  return iVar3;
}

