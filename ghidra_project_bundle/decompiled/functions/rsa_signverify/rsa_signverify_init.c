/**
 * Function: rsa_signverify_init
 * Address:  140d43e40
 * Signature: undefined rsa_signverify_init(void)
 * Body size: 829 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
rsa_signverify_init(longlong param_1,longlong param_2,code *param_3,undefined8 param_4,
                   undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined1 local_28 [8];
  undefined8 uStack_20;
  
  uStack_20 = 0x140d43e64;
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x10);
    if (param_2 != 0) goto LAB_140d43ede;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\rsa_sig.c",0x202,"rsa_signverify_init");
    pcVar13 = (char *)0x0;
    uVar12 = 0x72;
LAB_140d43fda:
    uVar11 = 0x39;
LAB_140d43fdf:
    FUN_140b91cc0(uVar11,uVar12,pcVar13);
  }
  else {
    iVar1 = FUN_140c2a540(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_140c2a430(*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = param_2;
LAB_140d43ede:
    iVar1 = invalid_operation_d(param_2,param_5,local_28);
    if (iVar1 == 0) {
      return 0;
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x38;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined8 *)(param_1 + 0xb0) = 0xfffffffffffffffc;
    iVar1 = FUN_140c2a410(*(undefined8 *)(param_1 + 0x10),0xf000);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    else {
      if (iVar1 != 0x1000) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\signature\\rsa_sig.c",0x252,"rsa_signverify_init");
        pcVar13 = (char *)0x0;
        uVar12 = 0xb2;
        uVar11 = 4;
        goto LAB_140d43fdf;
      }
      *(undefined4 *)(param_1 + 0x68) = 6;
      uVar11 = FUN_140c2a560(*(undefined8 *)(param_1 + 0x10));
      iVar1 = FUN_140c90320(uVar11);
      if (iVar1 == 0) {
        uVar2 = FUN_140c903d0(uVar11);
        uVar3 = FUN_140c903f0(uVar11);
        iVar1 = FUN_140c90400(uVar11);
        lVar7 = FUN_140ca9390(uVar2);
        lVar8 = FUN_140ca9390(uVar3);
        if (lVar7 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\signature\\rsa_sig.c",0x22e,"rsa_signverify_init")
          ;
          pcVar13 = "PSS restrictions lack hash algorithm";
        }
        else if (lVar8 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\signature\\rsa_sig.c",0x233,"rsa_signverify_init")
          ;
          pcVar13 = "PSS restrictions lack MGF1 hash algorithm";
        }
        else {
          uVar9 = FUN_140b8c190(param_1 + 0x34,lVar7,0x32);
          if (uVar9 < 0x32) {
            uVar9 = FUN_140b8c190(param_1 + 0x7c,lVar8,0x32);
            if (uVar9 < 0x32) {
              *(int *)(param_1 + 0xb0) = iVar1;
              iVar4 = s_exceeds_name_buffer_length(param_1,lVar8,*(undefined8 *)(param_1 + 8));
              if (iVar4 == 0) {
                return 0;
              }
              iVar4 = s_exceeds_name_buffer_length
                                (param_1,lVar7,*(undefined8 *)(param_1 + 8),param_6);
              if (iVar4 == 0) {
                return 0;
              }
              if (*(int *)(param_1 + 0x68) == 6) {
                uVar11 = *(undefined8 *)(param_1 + 0x10);
                iVar4 = FUN_140b97b40(*(undefined8 *)(param_1 + 0x20));
                iVar5 = FUN_140c8d0a0(uVar11);
                uVar6 = FUN_140c8d080(*(undefined8 *)(param_1 + 0x10));
                if (-1 < iVar1) {
                  iVar10 = (iVar5 - iVar4) + -1;
                  if ((uVar6 & 7) != 1) {
                    iVar10 = iVar5 - iVar4;
                  }
                  if (iVar1 <= iVar10) {
                    *(int *)(param_1 + 0xb4) = iVar1;
                    goto LAB_140d44162;
                  }
                }
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("providers\\implementations\\signature\\rsa_sig.c",0xdb,
                           "rsa_check_parameters");
                pcVar13 = (char *)0x0;
                uVar12 = 0x70;
                goto LAB_140d43fda;
              }
              goto LAB_140d44162;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("providers\\implementations\\signature\\rsa_sig.c",0x242,
                       "rsa_signverify_init");
            pcVar13 = "MGF1 hash algorithm name too long";
          }
          else {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("providers\\implementations\\signature\\rsa_sig.c",0x23b,
                       "rsa_signverify_init");
            pcVar13 = "hash algorithm name too long";
          }
        }
        uVar12 = 0x7a;
        goto LAB_140d43fda;
      }
    }
LAB_140d44162:
    iVar1 = (*param_3)(param_1,param_4);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

