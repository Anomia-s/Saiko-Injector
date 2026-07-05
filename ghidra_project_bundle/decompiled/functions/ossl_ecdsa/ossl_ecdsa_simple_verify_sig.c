/**
 * Function: ossl_ecdsa_simple_verify_sig
 * Address:  140cefb50
 * Signature: undefined ossl_ecdsa_simple_verify_sig(void)
 * Body size: 1549 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ossl_ecdsa_simple_verify_sig
                    (undefined8 param_1,int param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  
  uVar12 = 0xffffffff;
  if ((((param_4 == 0) || (lVar3 = FUN_140b772a0(param_4), lVar3 == 0)) ||
      (lVar4 = FUN_140b97dc0(param_4), lVar4 == 0)) || (param_3 == (undefined8 *)0x0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecdsa_ossl.c",0x1ca,"ossl_ecdsa_simple_verify_sig");
    uVar11 = 0x7c;
  }
  else {
    iVar1 = FUN_140c0e750(param_4);
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\ec\\ecdsa_ossl.c",0x1cf,"ossl_ecdsa_simple_verify_sig");
      uVar11 = 0x9f;
    }
    else {
      lVar5 = FUN_140c936d0(*(undefined8 *)(param_4 + 0x50));
      if (lVar5 != 0) {
        bn_ctx_start(lVar5);
        uVar11 = FUN_140c93a20(lVar5);
        uVar6 = FUN_140c93a20(lVar5);
        uVar7 = FUN_140c93a20(lVar5);
        lVar8 = FUN_140c93a20(lVar5);
        if (lVar8 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\ec\\ecdsa_ossl.c",0x1de,"ossl_ecdsa_simple_verify_sig");
          FUN_140b91cc0(0x10,0x80003,0);
          lVar10 = 0;
        }
        else {
          lVar9 = FUN_140b77290(lVar3);
          if (lVar9 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\ec\\ecdsa_ossl.c",0x1e4,"ossl_ecdsa_simple_verify_sig");
            FUN_140b91cc0(0x10,0x80010,0);
            lVar10 = 0;
          }
          else {
            iVar1 = FUN_140bfc7d0(*param_3);
            if ((((iVar1 == 0) && (iVar1 = FUN_140bfcde0(*param_3), iVar1 == 0)) &&
                ((iVar1 = FUN_140bfd180(*param_3,lVar9), iVar1 < 0 &&
                 ((iVar1 = FUN_140bfc7d0(param_3[1]), iVar1 == 0 &&
                  (iVar1 = FUN_140bfcde0(param_3[1]), iVar1 == 0)))))) &&
               (iVar1 = FUN_140bfd180(param_3[1],lVar9), iVar1 < 0)) {
              iVar1 = FUN_140c0dc70(lVar3,uVar6,param_3[1],lVar5);
              if (iVar1 == 0) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("crypto\\ec\\ecdsa_ossl.c",0x1f1,"ossl_ecdsa_simple_verify_sig");
                FUN_140b91cc0(0x10,0x80003,0);
                lVar10 = 0;
              }
              else {
                uVar2 = FUN_140bfc870(lVar9);
                if ((int)uVar2 < param_2 * 8) {
                  param_2 = (int)(((int)(uVar2 + 7) >> 0x1f & 7U) + uVar2 + 7) >> 3;
                }
                lVar10 = FUN_140bfcc40(param_1,param_2,uVar7);
                if (lVar10 == 0) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("crypto\\ec\\ecdsa_ossl.c",0x1fc,"ossl_ecdsa_simple_verify_sig");
                  FUN_140b91cc0(0x10,0x80003,0);
                  lVar10 = 0;
                }
                else if (((int)uVar2 < param_2 * 8) &&
                        (iVar1 = FUN_140c23400(uVar7,uVar7,8 - (uVar2 & 7)), iVar1 == 0)) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("crypto\\ec\\ecdsa_ossl.c",0x201,"ossl_ecdsa_simple_verify_sig");
                  FUN_140b91cc0(0x10,0x80003,0);
                  lVar10 = 0;
                }
                else {
                  iVar1 = FUN_140cc3ac0(uVar11,uVar7,uVar6,lVar9,lVar5);
                  if (iVar1 == 0) {
                    d_aplatformplatformopenssl_srccryptoerrerr_lo();
                    d_aplatformplatformopenssl_srccryptoerrerr_lo
                              ("crypto\\ec\\ecdsa_ossl.c",0x206,"ossl_ecdsa_simple_verify_sig");
                    FUN_140b91cc0(0x10,0x80003,0);
                    lVar10 = 0;
                  }
                  else {
                    iVar1 = FUN_140cc3ac0(uVar6,*param_3,uVar6,lVar9,lVar5);
                    if (iVar1 == 0) {
                      d_aplatformplatformopenssl_srccryptoerrerr_lo();
                      d_aplatformplatformopenssl_srccryptoerrerr_lo
                                ("crypto\\ec\\ecdsa_ossl.c",0x20b,"ossl_ecdsa_simple_verify_sig");
                      FUN_140b91cc0(0x10,0x80003,0);
                      lVar10 = 0;
                    }
                    else {
                      lVar10 = FUN_140c0cd80(lVar3);
                      if (lVar10 == 0) {
                        d_aplatformplatformopenssl_srccryptoerrerr_lo();
                        d_aplatformplatformopenssl_srccryptoerrerr_lo
                                  ("crypto\\ec\\ecdsa_ossl.c",0x210,"ossl_ecdsa_simple_verify_sig");
                        FUN_140b91cc0(0x10,0x80010,0);
                      }
                      else {
                        iVar1 = FUN_140c0d950(lVar3,lVar10,uVar11,lVar4,uVar6,lVar5);
                        if (iVar1 == 0) {
                          d_aplatformplatformopenssl_srccryptoerrerr_lo();
                          d_aplatformplatformopenssl_srccryptoerrerr_lo
                                    ("crypto\\ec\\ecdsa_ossl.c",0x214,"ossl_ecdsa_simple_verify_sig"
                                    );
                          FUN_140b91cc0(0x10,0x80010,0);
                        }
                        else {
                          iVar1 = ec_point_is_at_infinity(lVar3,lVar10,lVar8,0,lVar5);
                          if (iVar1 == 0) {
                            d_aplatformplatformopenssl_srccryptoerrerr_lo();
                            d_aplatformplatformopenssl_srccryptoerrerr_lo
                                      ("crypto\\ec\\ecdsa_ossl.c",0x219,
                                       "ossl_ecdsa_simple_verify_sig");
                            FUN_140b91cc0(0x10,0x80010,0);
                          }
                          else {
                            iVar1 = FUN_140cc3880(uVar11,lVar8,lVar9,lVar5);
                            if (iVar1 == 0) {
                              d_aplatformplatformopenssl_srccryptoerrerr_lo();
                              d_aplatformplatformopenssl_srccryptoerrerr_lo
                                        ("crypto\\ec\\ecdsa_ossl.c",0x21e,
                                         "ossl_ecdsa_simple_verify_sig");
                              FUN_140b91cc0(0x10,0x80003,0);
                            }
                            else {
                              iVar1 = FUN_140bfd180(uVar11,*param_3);
                              uVar12 = (ulonglong)(iVar1 == 0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\ec\\ecdsa_ossl.c",0x1eb,"ossl_ecdsa_simple_verify_sig");
              FUN_140b91cc0(0x10,0x9c,0);
              uVar12 = 0;
              lVar10 = 0;
            }
          }
        }
        FUN_140c93bc0(lVar5);
        FUN_140c93850(lVar5);
        FUN_140c0ce80(lVar10);
        return uVar12;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\ec\\ecdsa_ossl.c",0x1d5,"ossl_ecdsa_simple_verify_sig");
      uVar11 = 0x80003;
    }
  }
  FUN_140b91cc0(0x10,uVar11,0);
  return 0xffffffff;
}

