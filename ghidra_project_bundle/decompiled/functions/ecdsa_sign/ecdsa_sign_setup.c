/**
 * Function: ecdsa_sign_setup
 * Address:  140cf0160
 * Signature: undefined ecdsa_sign_setup(void)
 * Body size: 1333 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ecdsa_sign_setup(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                longlong param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong local_58;
  
  local_58 = 0;
  if ((param_1 == 0) || (lVar3 = FUN_140b772a0(), lVar3 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecdsa_ossl.c",0x94,"ecdsa_sign_setup");
    FUN_140b91cc0(0x10,0xc0102,0);
    return 0;
  }
  lVar4 = FUN_140b6a6a0(param_1);
  if (lVar4 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecdsa_ossl.c",0x98,"ecdsa_sign_setup");
    FUN_140b91cc0(0x10,0x7d,0);
    return 0;
  }
  iVar1 = FUN_140c0e750(param_1);
  if (iVar1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecdsa_ossl.c",0x9d,"ecdsa_sign_setup");
    FUN_140b91cc0(0x10,0x9f,0);
    return 0;
  }
  lVar5 = param_2;
  if ((param_2 == 0) && (lVar5 = FUN_140c936d0(*(undefined8 *)(param_1 + 0x50)), lVar5 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecdsa_ossl.c",0xa3,"ecdsa_sign_setup");
    FUN_140b91cc0(0x10,0x80003,0);
    return 0;
  }
  lVar6 = FUN_140bfcaf0();
  lVar7 = FUN_140bfcab0();
  lVar8 = FUN_140bfcab0();
  if (((lVar6 == 0) || (lVar7 == 0)) || (lVar8 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecdsa_ossl.c",0xac,"ecdsa_sign_setup");
    FUN_140b91cc0(0x10,0x80003,0);
  }
  else {
    local_58 = FUN_140c0cd80(lVar3);
    if (local_58 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\ec\\ecdsa_ossl.c",0xb0,"ecdsa_sign_setup");
      FUN_140b91cc0(0x10,0x80010,0);
    }
    else {
      lVar9 = FUN_140b77290(lVar3);
      if (lVar9 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\ec\\ecdsa_ossl.c",0xb5,"ecdsa_sign_setup");
        FUN_140b91cc0(0x10,0x80010,0);
      }
      else {
        iVar1 = FUN_140bfc870(lVar9);
        if (((0x3f < iVar1) && (iVar2 = FUN_140bfd2d0(lVar6,iVar1), iVar2 != 0)) &&
           ((iVar2 = FUN_140bfd2d0(lVar7,iVar1), iVar2 != 0 &&
            (iVar1 = FUN_140bfd2d0(lVar8,iVar1), iVar1 != 0)))) {
          do {
            do {
              if (param_5 == 0) {
                iVar1 = FUN_140ca3ca0(lVar6,lVar9,0,lVar5);
              }
              else if (param_7 == 1) {
                iVar1 = FUN_140cf7f90(lVar6);
              }
              else {
                iVar1 = FUN_140ca3f50(lVar6,lVar9,lVar4,param_5,(longlong)param_6,lVar5);
              }
              if (iVar1 == 0) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("crypto\\ec\\ecdsa_ossl.c",0xd8,"ecdsa_sign_setup");
                uVar10 = 0x9e;
                goto LAB_140cf0526;
              }
              iVar1 = FUN_140bfd7a0(lVar6,0);
            } while (iVar1 != 0);
            iVar1 = FUN_140c0d950(lVar3,local_58,lVar6,0,0,lVar5);
            if (iVar1 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              uVar10 = 0xdf;
LAB_140cf05d6:
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\ec\\ecdsa_ossl.c",uVar10,"ecdsa_sign_setup");
              uVar10 = 0x80010;
              goto LAB_140cf0526;
            }
            iVar1 = ec_point_is_at_infinity(lVar3,local_58,lVar8,0,lVar5);
            if (iVar1 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              uVar10 = 0xe4;
              goto LAB_140cf05d6;
            }
            iVar1 = FUN_140cc3880(lVar7,lVar8,lVar9,lVar5);
            if (iVar1 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              uVar10 = 0xe9;
              goto LAB_140cf0515;
            }
            iVar1 = FUN_140bfc7d0(lVar7);
          } while (iVar1 != 0);
          iVar1 = FUN_140c0dc70(lVar3,lVar6,lVar6,lVar5);
          if (iVar1 != 0) {
            FUN_140bfcb30(*param_4);
            FUN_140bfcb30(*param_3);
            *param_4 = lVar7;
            uVar10 = 1;
            *param_3 = lVar6;
            goto LAB_140cf054a;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar10 = 0xf0;
LAB_140cf0515:
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\ec\\ecdsa_ossl.c",uVar10,"ecdsa_sign_setup");
          uVar10 = 0x80003;
LAB_140cf0526:
          FUN_140b91cc0(0x10,uVar10,0);
        }
      }
    }
  }
  uVar10 = 0;
  FUN_140bfcb30(lVar6);
  FUN_140bfcb30(lVar7);
LAB_140cf054a:
  if (lVar5 != param_2) {
    FUN_140c93850(lVar5);
  }
  FUN_140c0ce80(local_58);
  FUN_140bfcb30(lVar8);
  return uVar10;
}

