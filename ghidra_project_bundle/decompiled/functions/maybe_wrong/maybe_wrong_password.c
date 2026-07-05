/**
 * Function: maybe_wrong_password
 * Address:  140ce0940
 * Signature: undefined maybe_wrong_password(void)
 * Body size: 991 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong maybe_wrong_password
                   (undefined8 *param_1,undefined8 param_2,int param_3,longlong param_4,int param_5,
                   longlong *param_6,int *param_7,undefined4 param_8,undefined8 param_9,
                   undefined8 param_10)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  longlong lVar9;
  undefined4 uVar10;
  int local_28;
  int local_24 [3];
  
  local_24[1] = 0x40ce095e;
  local_24[2] = 1;
  lVar6 = 0;
  lVar7 = 0;
  lVar4 = FUN_140b857c0();
  local_28 = 0;
  if (lVar4 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pkcs12\\p12_decr.c",0x20,"PKCS12_pbe_crypt_ex");
    FUN_140b91cc0(0x23,0x80006,0);
  }
  else {
    lVar9 = lVar4;
    iVar1 = evp_pbe_cipherinit_ex
                      (*param_1,param_2,param_3,param_1[1],lVar4,param_8,param_9,param_10);
    uVar10 = (undefined4)((ulonglong)lVar9 >> 0x20);
    if (iVar1 != 0) {
      iVar1 = FUN_140b981c0(lVar4);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\pkcs12\\p12_decr.c",0x32,"PKCS12_pbe_crypt_ex");
        FUN_140b91cc0(0x23,0xc0102,0);
      }
      else {
        iVar1 = iVar1 + param_5;
        uVar5 = FUN_140b76060(lVar4);
        uVar2 = FUN_140b97ec0(uVar5);
        if ((uVar2 >> 0x19 & 1) != 0) {
          iVar3 = FUN_140b85be0(lVar4,0x16,0,&local_28);
          lVar6 = lVar7;
          if (iVar3 < 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\pkcs12\\p12_decr.c",0x3a,"PKCS12_pbe_crypt_ex");
            FUN_140b91cc0(0x23,0xc0103,0);
            goto LAB_140ce0cf8;
          }
          iVar3 = FUN_140b76080(lVar4);
          if (iVar3 == 0) {
            if (param_5 < local_28) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\pkcs12\\p12_decr.c",0x42,"PKCS12_pbe_crypt_ex");
              FUN_140b91cc0(0x23,0x77,0);
              goto LAB_140ce0cf8;
            }
            param_5 = param_5 - local_28;
            iVar3 = FUN_140b85be0(lVar4,0x11,local_28,param_5 + param_4);
            if (iVar3 < 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\pkcs12\\p12_decr.c",0x48,"PKCS12_pbe_crypt_ex");
              FUN_140b91cc0(0x23,0xc0103,0);
              goto LAB_140ce0cf8;
            }
          }
          else {
            iVar1 = iVar1 + local_28;
          }
        }
        lVar6 = FUN_140b8d8d0((longlong)iVar1,"crypto\\pkcs12\\p12_decr.c",0x4e);
        if (lVar6 != 0) {
          iVar3 = evp_encryptupdate(lVar4,lVar6,local_24,param_4,CONCAT44(uVar10,param_5));
          iVar1 = local_24[0];
          if (iVar3 == 0) {
            FUN_140b8d990(lVar6,"crypto\\pkcs12\\p12_decr.c",0x52);
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\pkcs12\\p12_decr.c",0x54,"PKCS12_pbe_crypt_ex");
            FUN_140b91cc0(0x23,0x80006,0);
            lVar6 = 0;
          }
          else {
            iVar3 = FUN_140b85790(lVar4,lVar6 + local_24[0],local_24);
            if (iVar3 == 0) {
              FUN_140b8d990(lVar6,"crypto\\pkcs12\\p12_decr.c",0x5a);
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\pkcs12\\p12_decr.c",0x5c,"PKCS12_pbe_crypt_ex");
              pcVar8 = "maybe wrong password";
              if (param_3 == 0) {
                pcVar8 = "empty password";
              }
              FUN_140b91cc0(0x23,0x74,pcVar8);
              lVar6 = 0;
            }
            else {
              iVar1 = iVar1 + local_24[0];
              uVar5 = FUN_140b76060(lVar4);
              uVar2 = FUN_140b97ec0(uVar5);
              if ((uVar2 >> 0x19 & 1) != 0) {
                iVar3 = FUN_140b76080(lVar4);
                if (iVar3 != 0) {
                  iVar3 = FUN_140b85be0(lVar4,0x10,local_28,iVar1 + lVar6);
                  if (iVar3 < 0) {
                    FUN_140b8d990(lVar6,"crypto\\pkcs12\\p12_decr.c",0x67);
                    d_aplatformplatformopenssl_srccryptoerrerr_lo();
                    d_aplatformplatformopenssl_srccryptoerrerr_lo
                              ("crypto\\pkcs12\\p12_decr.c",0x69,"PKCS12_pbe_crypt_ex");
                    FUN_140b91cc0(0x23,0xc0103,0);
                    lVar6 = 0;
                    goto LAB_140ce0cf8;
                  }
                  iVar1 = iVar1 + local_28;
                }
              }
              if (param_7 != (int *)0x0) {
                *param_7 = iVar1;
              }
              if (param_6 != (longlong *)0x0) {
                *param_6 = lVar6;
              }
            }
          }
        }
      }
    }
  }
LAB_140ce0cf8:
  FUN_140b858e0(lVar4);
  return lVar6;
}

