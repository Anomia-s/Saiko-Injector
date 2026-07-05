/**
 * Function: x931_padding_not_allowed_with_rsa_pss
 * Address:  140d41890
 * Signature: undefined x931_padding_not_allowed_with_rsa_pss(void)
 * Body size: 1594 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void x931_padding_not_allowed_with_rsa_pss(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  char *_Str1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined1 auStack_318 [32];
  int local_2f8;
  int local_2e8;
  int local_2e4;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined local_2c0;
  undefined8 local_2bf;
  undefined8 uStack_2b7;
  undefined8 local_2af;
  undefined8 uStack_2a7;
  undefined8 local_29f;
  undefined8 uStack_297;
  undefined1 local_28f;
  undefined1 local_288;
  undefined8 local_287;
  undefined8 uStack_27f;
  undefined8 local_277;
  undefined8 uStack_26f;
  undefined8 local_267;
  undefined8 uStack_25f;
  undefined1 local_257;
  undefined1 local_248;
  undefined1 local_247 [255];
  undefined1 local_148;
  undefined1 local_147 [255];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140d418b2;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_318;
  local_2c0 = 0;
  local_28f = 0;
  pcVar9 = (char *)0x0;
  local_248 = 0;
  local_2e0 = (undefined *)0x0;
  local_2bf = 0;
  uStack_2b7 = 0;
  local_2af = 0;
  uStack_2a7 = 0;
  local_29f = 0;
  uStack_297 = 0;
  memset(local_247,0,0xff);
  local_2c8 = (undefined1 *)0x0;
  local_288 = 0;
  local_257 = 0;
  local_148 = 0;
  local_2d8 = (undefined1 *)0x0;
  local_287 = 0;
  uStack_27f = 0;
  local_277 = 0;
  uStack_26f = 0;
  local_267 = 0;
  uStack_25f = 0;
  memset(local_147,0,0xff);
  local_2d0 = (undefined1 *)0x0;
  if (((param_1 == 0) || (param_2 == (longlong *)0x0)) || (*param_2 == 0)) goto LAB_140d41c5d;
  local_2e8 = *(int *)(param_1 + 0x68);
  local_2e4 = *(int *)(param_1 + 0xb0);
  lVar5 = FUN_140b93540(param_2,"digest");
  if (lVar5 != 0) {
    lVar6 = FUN_140b93540(param_2,"properties");
    local_2e0 = &local_2c0;
    iVar4 = FUN_140b94f00(lVar5,&local_2e0,0x32);
    if (iVar4 == 0) goto LAB_140d41c5d;
    if (lVar6 != 0) {
      local_2c8 = &local_248;
      iVar4 = FUN_140b94f00(lVar6,&local_2c8,0x100);
      if (iVar4 == 0) goto LAB_140d41c5d;
    }
  }
  lVar5 = FUN_140b93540(param_2,"pad-mode");
  if (lVar5 == 0) {
LAB_140d41b24:
    lVar5 = FUN_140b93540(param_2,"saltlen");
    if (lVar5 == 0) {
LAB_140d41d95:
      lVar5 = FUN_140b93540(param_2,"mgf1-digest");
      if (lVar5 != 0) {
        lVar6 = FUN_140b93540(param_2,"mgf1-properties");
        local_2d8 = &local_288;
        iVar4 = FUN_140b94f00(lVar5,&local_2d8,0x32);
        if (iVar4 == 0) goto LAB_140d41c5d;
        if (lVar6 != 0) {
          local_2d0 = &local_148;
          iVar4 = FUN_140b94f00(lVar6,&local_2d0,0x100);
          if (iVar4 == 0) goto LAB_140d41c5d;
        }
        if (local_2e8 != 6) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\signature\\rsa_sig.c",0x6df,"rsa_set_ctx_params");
          pcVar9 = (char *)0x0;
          uVar8 = 0xa7;
          goto LAB_140d41c51;
        }
      }
      *(int *)(param_1 + 0xb0) = local_2e4;
      *(int *)(param_1 + 0x68) = local_2e8;
      if (((*(longlong *)(param_1 + 0x20) == 0) && (local_2e0 == (undefined *)0x0)) &&
         (local_2e8 == 6)) {
        local_2e0 = &DAT_1413a6ffc;
      }
      if ((local_2d8 == (undefined1 *)0x0) ||
         (iVar4 = s_exceeds_name_buffer_length(param_1,local_2d8,local_2d0), iVar4 != 0)) {
        if (local_2e0 == (undefined *)0x0) {
          providersimplementationssignaturersa_sigc(param_1,0,0,*(undefined4 *)(param_1 + 0x30));
        }
        else {
          s_exceeds_name_buffer_length(param_1,local_2e0,local_2c8,"RSA Sign Set Ctx");
        }
      }
      goto LAB_140d41c5d;
    }
    if (local_2e8 == 6) {
      if (*(int *)(lVar5 + 8) == 1) {
        iVar4 = FUN_140b93920(lVar5,&local_2e4);
        if (iVar4 == 0) goto LAB_140d41c5d;
      }
      else {
        if (*(int *)(lVar5 + 8) != 4) goto LAB_140d41c5d;
        pcVar9 = *(char **)(lVar5 + 0x10);
        iVar4 = strcmp(pcVar9,"digest");
        if (iVar4 == 0) {
          local_2e4 = -1;
        }
        else {
          iVar4 = strcmp(pcVar9,"max");
          if (iVar4 == 0) {
            local_2e4 = -3;
          }
          else {
            iVar4 = strcmp(pcVar9,"auto");
            if (iVar4 == 0) {
              local_2e4 = -2;
            }
            else {
              iVar4 = strcmp(pcVar9,"auto-digestmax");
              if (iVar4 == 0) {
                local_2e4 = -4;
              }
              else {
                local_2e4 = atoi(pcVar9);
              }
            }
          }
        }
      }
      if (-5 < local_2e4) {
        if (*(int *)(param_1 + 0xb4) != -1) {
          if ((local_2e4 + 4U & 0xfffffffd) == 0) {
            if ((*(uint *)(param_1 + 0x18) & 0x8020) == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("providers\\implementations\\signature\\rsa_sig.c",0x6b0,
                         "rsa_set_ctx_params");
              pcVar9 = "Cannot use autodetected salt length";
              goto LAB_140d41c4c;
            }
          }
          else if (local_2e4 == -1) {
            iVar4 = FUN_140b97b40(*(undefined8 *)(param_1 + 0x20));
            if (iVar4 < *(int *)(param_1 + 0xb4)) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("providers\\implementations\\signature\\rsa_sig.c",0x6b7,
                         "rsa_set_ctx_params");
              uVar1 = *(undefined4 *)(param_1 + 0xb4);
              local_2f8 = FUN_140b97b40(*(undefined8 *)(param_1 + 0x20));
              FUN_140b91cc0(0x39,0xac,
                            "Should be more than %d, but would be set to match digest size (%d)",
                            uVar1);
              goto LAB_140d41c5d;
            }
          }
          else if ((-1 < local_2e4) && (local_2e4 < *(int *)(param_1 + 0xb4))) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("providers\\implementations\\signature\\rsa_sig.c",0x6c2,"rsa_set_ctx_params"
                      );
            local_2f8 = local_2e4;
            FUN_140b91cc0(0x39,0xac,"Should be more than %d, but would be set to %d",
                          *(undefined4 *)(param_1 + 0xb4));
            goto LAB_140d41c5d;
          }
        }
        goto LAB_140d41d95;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\rsa_sig.c",0x6a6,"rsa_set_ctx_params");
      pcVar9 = (char *)0x0;
LAB_140d41c4c:
      uVar8 = 0x70;
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\rsa_sig.c",0x685,"rsa_set_ctx_params");
      pcVar9 = "PSS saltlen can only be specified if PSS padding has been specified first";
      uVar8 = 0x88;
    }
  }
  else {
    if (*(int *)(lVar5 + 8) == 1) {
      iVar4 = FUN_140b93920(lVar5,&local_2e8);
      if (iVar4 == 0) goto LAB_140d41c5d;
    }
    else {
      if ((*(int *)(lVar5 + 8) != 4) ||
         (_Str1 = *(char **)(lVar5 + 0x10), pcVar7 = pcVar9, pcVar2 = pcVar9, pcVar3 = pcVar9,
         iVar4 = (int)DAT_14151d260, _Str1 == (char *)0x0)) goto LAB_140d41c5d;
      while (iVar4 != 0) {
        iVar4 = strcmp(_Str1,*(char **)((longlong)&PTR_s_pkcs1_14151d268 + (longlong)pcVar2));
        if (iVar4 == 0) {
          local_2e8 = *(int *)(&DAT_14151d260 + (longlong)(int)pcVar3 * 2);
          break;
        }
        pcVar7 = pcVar7 + 1;
        pcVar2 = (char *)((longlong)pcVar7 * 0x10);
        pcVar3 = (char *)(ulonglong)((int)pcVar3 + 1);
        iVar4 = *(int *)(&DAT_14151d260 + (longlong)pcVar7 * 2);
      }
    }
    if (local_2e8 == 1) {
      pcVar9 = "PKCS#1 padding not allowed with RSA-PSS";
LAB_140d41ae3:
      iVar4 = FUN_140c2a410(*(undefined8 *)(param_1 + 0x10),0xf000);
      if (iVar4 == 0) goto LAB_140d41b24;
LAB_140d41af5:
      uVar8 = 0x67b;
    }
    else {
      if (local_2e8 == 3) {
        pcVar9 = "No padding not allowed with RSA-PSS";
        goto LAB_140d41ae3;
      }
      if (local_2e8 == 4) {
        pcVar9 = "OAEP padding not allowed for signing / verifying";
        goto LAB_140d41af5;
      }
      if (local_2e8 == 5) {
        pcVar9 = "X.931 padding not allowed with RSA-PSS";
        goto LAB_140d41ae3;
      }
      if (local_2e8 == 6) {
        if ((*(uint *)(param_1 + 0x18) & 0xc030) != 0) goto LAB_140d41b24;
        pcVar9 = "PSS padding only allowed for sign and verify operations";
        goto LAB_140d41af5;
      }
      uVar8 = 0x679;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\rsa_sig.c",uVar8,"rsa_set_ctx_params");
    uVar8 = 0xa5;
  }
LAB_140d41c51:
  FUN_140b91cc0(0x39,uVar8,pcVar9);
LAB_140d41c5d:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_318);
}

