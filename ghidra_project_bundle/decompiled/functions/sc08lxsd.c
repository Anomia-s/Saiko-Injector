/**
 * Function: sc08lxsd
 * Address:  140b99f50
 * Signature: undefined sc08lxsd(void)
 * Body size: 1280 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void sc08lxsd(longlong param_1,int param_2,longlong param_3,undefined4 *param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  size_t sVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined4 local_260;
  undefined1 *local_258;
  int local_250;
  int local_248;
  undefined4 local_244;
  longlong local_240;
  undefined1 *local_238;
  longlong local_230;
  undefined4 local_228 [2];
  undefined8 local_220;
  undefined8 local_218;
  undefined4 *local_210;
  int local_208 [2];
  undefined1 *local_200;
  undefined1 local_1f8 [24];
  longlong local_1e0;
  longlong local_1b0;
  undefined1 local_88 [48];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140b99f67;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_288;
  local_220 = param_5;
  local_218 = param_6;
  local_238 = &DAT_1413a2ad6;
  lVar12 = 0;
  local_210 = param_4;
  if (param_3 == 0) goto LAB_140b9a440;
  lVar13 = param_3;
  local_208[0] = param_2;
  if (param_2 == 1) {
LAB_140b9a018:
    local_1b0 = lVar13;
    local_200 = local_1f8;
    lVar12 = FUN_140b8eea0();
    if (lVar12 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar11 = 0xff;
LAB_140b9a02f:
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\by_dir.c",uVar11,"get_cert_by_subject_ex");
      uVar11 = 0x80007;
      goto LAB_140b9a3f4;
    }
    lVar13 = *(longlong *)(param_1 + 0x10);
    local_240 = lVar13;
    uVar2 = FUN_140b756b0(param_3,param_5,param_6,&local_248);
    local_244 = uVar2;
    if (local_248 != 0) {
      local_248 = 0;
      iVar4 = FUN_140b77980(*(undefined8 *)(lVar13 + 8));
      if (local_248 < iVar4) {
        do {
          lVar8 = 0;
          puVar5 = (undefined8 *)FUN_140b77990(*(undefined8 *)(lVar13 + 8),local_248);
          sVar6 = strlen((char *)*puVar5);
          lVar7 = FUN_140b8ef80(lVar12,(longlong)((int)sVar6 + 0x11));
          if (lVar7 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar11 = 0x10f;
            goto LAB_140b9a02f;
          }
          iVar4 = 0;
          if ((param_2 == 2) && (puVar5[2] != 0)) {
            local_228[0] = uVar2;
            iVar3 = FUN_140b8b750(*(undefined8 *)(lVar13 + 0x10));
            if (iVar3 == 0) break;
            iVar3 = FUN_140b78040(puVar5[2],local_228);
            if (-1 < iVar3) {
              lVar8 = FUN_140b77990(puVar5[2],iVar3);
              iVar4 = *(int *)(lVar8 + 4);
            }
            local_230 = lVar8;
            FUN_140b8b7a0(*(undefined8 *)(local_240 + 0x10));
          }
          else {
            local_230 = 0;
          }
          local_258 = local_238;
          local_268 = CONCAT44(local_268._4_4_,0x2f);
          local_260 = uVar2;
          local_250 = iVar4;
          FUN_140c07aa0(*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10),"%s%c%08lx.%s%d",
                        *puVar5);
          iVar3 = _stat64i32(*(undefined8 *)(lVar12 + 8),local_88);
          uVar11 = local_220;
          puVar1 = local_238;
          while (-1 < iVar3) {
            if (param_2 == 1) {
              local_268 = local_218;
              iVar3 = x509_load_cert_file_ex
                                (param_1,*(undefined8 *)(lVar12 + 8),*(undefined4 *)(puVar5 + 1),
                                 uVar11);
LAB_140b9a1bf:
              lVar8 = local_230;
              if (iVar3 == 0) break;
            }
            else if (param_2 == 2) {
              iVar3 = x509_load_crl_file(param_1,*(undefined8 *)(lVar12 + 8),
                                         *(undefined4 *)(puVar5 + 1));
              goto LAB_140b9a1bf;
            }
            iVar4 = iVar4 + 1;
            local_258 = puVar1;
            local_268 = CONCAT44(local_268._4_4_,0x2f);
            local_260 = uVar2;
            local_250 = iVar4;
            FUN_140c07aa0(*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10),
                          "%s%c%08lx.%s%d",*puVar5);
            iVar3 = _stat64i32(*(undefined8 *)(lVar12 + 8),local_88);
            lVar8 = local_230;
          }
          if (iVar4 < 1) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            iVar3 = FUN_140b76bd0(*(undefined8 *)(param_1 + 0x18));
            if (iVar3 == 0) break;
            uVar2 = FUN_140b78040(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_208);
            puVar9 = (undefined4 *)
                     FUN_140b77990(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),uVar2);
            FUN_140b76bf0(*(undefined8 *)(param_1 + 0x18));
          }
          lVar13 = local_240;
          if ((param_2 == 2) && (0 < iVar4)) {
            iVar3 = FUN_140b8b770(*(undefined8 *)(local_240 + 0x10));
            if (iVar3 == 0) break;
            if (lVar8 == 0) {
              local_228[0] = local_244;
              uVar2 = FUN_140b78040(puVar5[2],local_228);
              lVar8 = FUN_140b77990(puVar5[2],uVar2);
              if (lVar8 == 0) {
                puVar10 = (undefined4 *)FUN_140b8d8d0(8,"crypto\\x509\\by_dir.c",0x17a);
                if (puVar10 != (undefined4 *)0x0) {
                  *puVar10 = local_244;
                  puVar10[1] = iVar4;
                  iVar4 = FUN_140b78340(puVar5[2],puVar10);
                  if (iVar4 != 0) {
                    FUN_140b78500(puVar5[2]);
                    lVar13 = local_240;
                    FUN_140b8b7a0(*(undefined8 *)(local_240 + 0x10));
                    goto LAB_140b9a325;
                  }
                  FUN_140b8b7a0(*(undefined8 *)(local_240 + 0x10));
                  FUN_140b8d990(puVar10,"crypto\\x509\\by_dir.c",0x184);
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("crypto\\x509\\by_dir.c",0x185,"get_cert_by_subject_ex");
                  uVar11 = 0x8000f;
                  goto LAB_140b9a3f4;
                }
                FUN_140b8b7a0(*(undefined8 *)(local_240 + 0x10));
                break;
              }
            }
            lVar13 = local_240;
            if (*(int *)(lVar8 + 4) < iVar4) {
              *(int *)(lVar8 + 4) = iVar4;
            }
            FUN_140b8b7a0(*(undefined8 *)(local_240 + 0x10));
          }
LAB_140b9a325:
          if (puVar9 != (undefined4 *)0x0) {
            *local_210 = *puVar9;
            *(undefined8 *)(local_210 + 2) = *(undefined8 *)(puVar9 + 2);
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            break;
          }
          local_248 = local_248 + 1;
          iVar4 = FUN_140b77980(*(undefined8 *)(lVar13 + 8));
          uVar2 = local_244;
        } while (local_248 < iVar4);
      }
    }
  }
  else {
    if (param_2 == 2) {
      local_238 = &DAT_1413a5e14;
      local_1e0 = param_3;
      lVar13 = local_1b0;
      goto LAB_140b9a018;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\by_dir.c",0xfa,"get_cert_by_subject_ex");
    uVar11 = 0x70;
LAB_140b9a3f4:
    FUN_140b91cc0(0xb,uVar11,0);
  }
  iVar4 = FUN_140b76bd0(*(undefined8 *)(param_1 + 0x18));
  if (iVar4 != 0) {
    iVar4 = FUN_140b78550(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8));
    if (iVar4 == 0) {
      FUN_140b78500(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8));
    }
    FUN_140b76bf0(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_140b8ef10(lVar12);
LAB_140b9a440:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_288);
}

