/**
 * Function: pkey_rsa_sign
 * Address:  140bfad00
 * Signature: undefined pkey_rsa_sign(void)
 * Body size: 722 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong pkey_rsa_sign(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4,
                       size_t param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar9;
  ulonglong uVar10;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar10 = 0x140bfad1c;
  lVar1 = *(longlong *)(param_1 + 0x98);
  uVar8 = FUN_140c0a3e0(*(undefined8 *)(param_1 + 0x88));
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    uVar9 = CONCAT44(uVar7,*(undefined4 *)(lVar1 + 0x1c));
LAB_140bfafa1:
    uVar10 = FUN_140c8d0f0((int)param_5,param_4,param_2,uVar8,uVar9,uVar10);
LAB_140bfafac:
    if (-1 < (int)uVar10) {
      *param_3 = (longlong)(int)uVar10;
      uVar10 = 1;
    }
  }
  else {
    iVar4 = FUN_140b97b40();
    if (iVar4 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\rsa\\rsa_pmeth.c",0x98,"pkey_rsa_sign")
      ;
      FUN_140b91cc0(4,0x8f,0);
    }
    else {
      if (param_5 != (longlong)iVar4) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\rsa\\rsa_pmeth.c",0x9d,"pkey_rsa_sign");
        FUN_140b91cc0(4,0x8f,0);
        return 0xffffffff;
      }
      iVar5 = FUN_140b78ee0(*(undefined8 *)(lVar1 + 0x20));
      iVar4 = *(int *)(lVar1 + 0x1c);
      if (iVar5 == 0x5f) {
        if (iVar4 == 1) {
          uVar10 = rsa_sign_asn1_octet_string(0,param_4,(int)param_5,param_2,local_res8,uVar8);
          if ((int)uVar10 < 1) {
            return uVar10;
          }
          uVar10 = (ulonglong)local_res8[0];
          goto LAB_140bfafac;
        }
      }
      else {
        if (iVar4 == 5) {
          iVar4 = FUN_140c8d0a0(uVar8);
          if ((ulonglong)(longlong)iVar4 < param_5 + 1) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\rsa\\rsa_pmeth.c",0xac,"pkey_rsa_sign");
            FUN_140b91cc0(4,0x78,0);
            return 0xffffffff;
          }
          iVar4 = FUN_140bfc400(lVar1,param_1);
          if (iVar4 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\rsa\\rsa_pmeth.c",0xb0,"pkey_rsa_sign");
            FUN_140b91cc0(4,0x80004,0);
            return 0xffffffff;
          }
          memcpy(*(void **)(lVar1 + 0x38),param_4,param_5);
          lVar2 = *(longlong *)(lVar1 + 0x38);
          uVar6 = FUN_140b78ee0(*(undefined8 *)(lVar1 + 0x20));
          uVar3 = FUN_140c90230(uVar6);
          *(undefined1 *)(lVar2 + param_5) = uVar3;
          param_5._0_4_ = (int)param_5 + 1;
          param_4 = *(void **)(lVar1 + 0x38);
          uVar9 = CONCAT44(uVar7,5);
          goto LAB_140bfafa1;
        }
        if (iVar4 == 1) {
          uVar7 = FUN_140b78ee0(*(undefined8 *)(lVar1 + 0x20));
          uVar10 = cryptorsarsa_signc(uVar7,param_4,(int)param_5,param_2,local_res8,uVar8);
          if ((int)uVar10 < 1) {
            return uVar10;
          }
          uVar10 = (ulonglong)local_res8[0];
          goto LAB_140bfafac;
        }
        if ((iVar4 == 6) && (iVar4 = FUN_140bfc400(lVar1,param_1), iVar4 != 0)) {
          uVar10 = (ulonglong)*(uint *)(lVar1 + 0x30);
          uVar9 = *(undefined8 *)(lVar1 + 0x28);
          iVar4 = FUN_140c902a0(uVar8,*(undefined8 *)(lVar1 + 0x38),param_4,
                                *(undefined8 *)(lVar1 + 0x20),uVar9,uVar10);
          uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
          if (iVar4 != 0) {
            param_4 = *(void **)(lVar1 + 0x38);
            param_5._0_4_ = FUN_140c8d0a0(uVar8);
            uVar9 = CONCAT44(uVar7,3);
            goto LAB_140bfafa1;
          }
        }
      }
    }
    uVar10 = 0xffffffff;
  }
  return uVar10;
}

