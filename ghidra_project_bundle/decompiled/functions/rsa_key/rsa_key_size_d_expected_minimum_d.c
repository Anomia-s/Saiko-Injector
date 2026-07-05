/**
 * Function: rsa_key_size_d_expected_minimum_d
 * Address:  140d44220
 * Signature: undefined rsa_key_size_d_expected_minimum_d(void)
 * Body size: 1293 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
rsa_key_size_d_expected_minimum_d
          (longlong param_1,longlong param_2,ulonglong *param_3,ulonglong param_4,void *param_5,
          size_t param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  size_t sVar9;
  ulonglong uVar10;
  char *pcVar11;
  int local_res8 [2];
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar12;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar12 = 0x140d4423e;
  iVar4 = FUN_140c8d0a0(*(undefined8 *)(param_1 + 0x10));
  uVar10 = (ulonglong)iVar4;
  if ((*(longlong *)(param_1 + 0x20) == 0) || (iVar4 = FUN_140b97b40(), iVar4 < 1)) {
    sVar9 = 0;
  }
  else {
    sVar9 = (size_t)iVar4;
  }
  iVar4 = FUN_140b69250();
  if (iVar4 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    *param_3 = uVar10;
    return 1;
  }
  if (param_4 < uVar10) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\rsa_sig.c",0x2b5,"rsa_sign_directly");
    FUN_140b91cc0(0x39,0xb3,"is %zu, should be at least %zu",param_4,uVar10);
    return 0;
  }
  if (sVar9 == 0) {
    iVar4 = FUN_140c8d0f0((int)param_6,param_5,param_2,*(undefined8 *)(param_1 + 0x10),
                          CONCAT44(uVar8,*(undefined4 *)(param_1 + 0x68)),uVar12);
  }
  else {
    if (param_6 != sVar9) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\rsa_sig.c",700,"rsa_sign_directly");
      pcVar11 = (char *)0x0;
      uVar12 = 0xa6;
      goto LAB_140d44359;
    }
    iVar5 = FUN_140b97ac0(*(undefined8 *)(param_1 + 0x20),&DAT_1413a6f0c);
    iVar4 = *(int *)(param_1 + 0x68);
    if (iVar5 == 0) {
      if (iVar4 == 1) {
        iVar5 = cryptorsarsa_signc(*(undefined4 *)(param_1 + 0x30),param_5,(int)param_6,param_2,
                                   local_res8,*(undefined8 *)(param_1 + 0x10));
        iVar4 = local_res8[0];
        if (iVar5 < 1) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\signature\\rsa_sig.c",0x2ed,"rsa_sign_directly");
          pcVar11 = (char *)0x0;
          uVar12 = 0x80004;
          goto LAB_140d44359;
        }
      }
      else if (iVar4 == 5) {
        iVar4 = FUN_140c8d0a0(*(undefined8 *)(param_1 + 0x10));
        if ((ulonglong)(longlong)iVar4 < param_6 + 1) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\signature\\rsa_sig.c",0x2d7,"rsa_sign_directly");
          uVar8 = FUN_140c8d0a0(*(undefined8 *)(param_1 + 0x10));
          FUN_140b91cc0(0x39,0xab,"RSA key size = %d, expected minimum = %d",uVar8,param_6 + 1);
          return 0;
        }
        iVar4 = providersimplementationssignaturersa_sigc(param_1);
        if (iVar4 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\signature\\rsa_sig.c",0x2dd,"rsa_sign_directly");
          pcVar11 = (char *)0x0;
          uVar12 = 0x80039;
          goto LAB_140d44359;
        }
        memcpy(*(void **)(param_1 + 200),param_5,param_6);
        lVar2 = *(longlong *)(param_1 + 200);
        uVar3 = FUN_140c90230(*(undefined4 *)(param_1 + 0x30));
        *(undefined1 *)(lVar2 + param_6) = uVar3;
        iVar4 = FUN_140c8d0f0((int)param_6 + 1,*(undefined8 *)(param_1 + 200),param_2,
                              *(undefined8 *)(param_1 + 0x10),CONCAT44(uVar8,5));
        FUN_140d441e0(param_1);
      }
      else {
        if (iVar4 != 6) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\signature\\rsa_sig.c",0x329,"rsa_sign_directly");
          pcVar11 = "Only X.931, PKCS#1 v1.5 or PSS padding allowed";
          goto LAB_140d44354;
        }
        iVar4 = *(int *)(param_1 + 0xb4);
        if (iVar4 != -1) {
          if (*(int *)(param_1 + 0xb0) == -1) {
            iVar5 = FUN_140b97b40(*(undefined8 *)(param_1 + 0x20));
            iVar4 = *(int *)(param_1 + 0xb4);
            if (iVar5 < iVar4) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("providers\\implementations\\signature\\rsa_sig.c",0x2fd,
                         "rsa_sign_directly");
              uVar7 = *(undefined4 *)(param_1 + 0xb4);
              uVar6 = FUN_140b97b40(*(undefined8 *)(param_1 + 0x20));
              FUN_140b91cc0(0x39,0xac,"minimum salt length set to %d, but the digest only gives %d",
                            uVar7,CONCAT44(uVar8,uVar6));
              return 0;
            }
          }
          if ((-1 < *(int *)(param_1 + 0xb0)) && (*(int *)(param_1 + 0xb0) < iVar4)) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("providers\\implementations\\signature\\rsa_sig.c",0x309,"rsa_sign_directly")
            ;
            FUN_140b91cc0(0x39,0xac,
                          "minimum salt length set to %d, but theactual salt length is only set to %d"
                          ,*(undefined4 *)(param_1 + 0xb4),
                          CONCAT44(uVar8,*(undefined4 *)(param_1 + 0xb0)));
            return 0;
          }
        }
        iVar4 = providersimplementationssignaturersa_sigc(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        local_res8[0] = *(int *)(param_1 + 0xb0);
        uVar12 = *(undefined8 *)(param_1 + 0x70);
        iVar4 = FUN_140c90990(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 200),param_5
                              ,*(undefined8 *)(param_1 + 0x20),uVar12,local_res8);
        uVar8 = (undefined4)((ulonglong)uVar12 >> 0x20);
        if (iVar4 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\signature\\rsa_sig.c",0x31b,"rsa_sign_directly");
          pcVar11 = (char *)0x0;
          uVar12 = 0x80004;
          goto LAB_140d44359;
        }
        uVar12 = *(undefined8 *)(param_1 + 0x10);
        uVar1 = *(undefined8 *)(param_1 + 200);
        uVar7 = FUN_140c8d0a0(uVar12);
        iVar4 = FUN_140c8d0f0(uVar7,uVar1,param_2,uVar12,CONCAT44(uVar8,3));
        FUN_140d441e0(param_1);
      }
    }
    else {
      if (iVar4 != 1) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\signature\\rsa_sig.c",0x2c5,"rsa_sign_directly");
        pcVar11 = "only PKCS#1 padding supported with MDC2";
LAB_140d44354:
        uVar12 = 0xa8;
        goto LAB_140d44359;
      }
      iVar5 = rsa_sign_asn1_octet_string
                        (0,param_5,(int)param_6,param_2,local_res8,*(undefined8 *)(param_1 + 0x10));
      iVar4 = local_res8[0];
      if (iVar5 < 1) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\signature\\rsa_sig.c",0x2cd,"rsa_sign_directly");
        pcVar11 = (char *)0x0;
        uVar12 = 0x80004;
        goto LAB_140d44359;
      }
    }
  }
  if (0 < iVar4) {
    *param_3 = (longlong)iVar4;
    return 1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\signature\\rsa_sig.c",0x336,"rsa_sign_directly");
  pcVar11 = (char *)0x0;
  uVar12 = 0x80004;
LAB_140d44359:
  FUN_140b91cc0(0x39,uVar12,pcVar11);
  return 0;
}

