/**
 * Function: ecdsa_secp256r1_sha256
 * Address:  140bb5390
 * Signature: undefined ecdsa_secp256r1_sha256(void)
 * Body size: 726 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ecdsa_secp256r1_sha256(char *param_1,int param_2,ulonglong *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  int iVar4;
  char *pcVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined **ppuVar12;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  char local_60 [40];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x140bb53a6;
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  uVar9 = 0;
  local_68 = 0;
  local_64 = 0;
  if (param_1 != (char *)0x0) {
    if (*param_1 == '?') {
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    }
    if ((*param_3 != 0x3e) && (param_2 < 0x28)) {
      uVar10 = (ulonglong)param_2;
      memcpy(local_60,param_1,uVar10);
      if (0x27 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_140b68c50();
      }
      local_60[uVar10] = '\0';
      pcVar5 = strchr(local_60,0x2b);
      if (pcVar5 == (char *)0x0) {
        uVar10 = param_3[0x11];
        if (uVar10 == 0) {
          ppuVar12 = &PTR_s_ecdsa_secp256r1_sha256_141234e00;
          uVar10 = uVar9;
          do {
            puVar2 = *ppuVar12;
            if (((ppuVar12[1] != (undefined *)0x0) && (iVar4 = FUN_140b8c6a0(local_60), iVar4 == 0))
               || (iVar4 = FUN_140b8c6a0(local_60,puVar2), iVar4 == 0)) {
              uVar3 = *(undefined2 *)(ppuVar12 + 2);
              goto LAB_140bb560c;
            }
            uVar10 = uVar10 + 1;
            ppuVar12 = ppuVar12 + 9;
          } while (uVar10 < 0x1f);
        }
        else {
          uVar7 = uVar9;
          uVar11 = uVar9;
          if (*(longlong *)(uVar10 + 0x640) != 0) {
            while (((uVar1 = *(undefined8 *)(*(longlong *)(uVar10 + 0x650) + uVar7),
                    *(longlong *)(*(longlong *)(uVar10 + 0x650) + 8 + uVar7) == 0 ||
                    (iVar4 = FUN_140b8c6a0(local_60), iVar4 != 0)) &&
                   (iVar4 = FUN_140b8c6a0(local_60,uVar1), iVar4 != 0))) {
              uVar10 = param_3[0x11];
              uVar11 = uVar11 + 1;
              uVar7 = uVar7 + 0x48;
              if (*(ulonglong *)(uVar10 + 0x640) <= uVar11) goto LAB_140bb5654;
            }
            if (*(int *)(*(longlong *)(param_3[0x11] + 0x650) + 0x2c + uVar11 * 0x48) == 0)
            goto LAB_140bb5654;
            uVar3 = *(undefined2 *)(*(longlong *)(param_3[0x11] + 0x650) + uVar11 * 0x48 + 0x10);
LAB_140bb560c:
            *(undefined2 *)((longlong)param_3 + *param_3 * 2 + 8) = uVar3;
            *param_3 = *param_3 + 1;
            uVar10 = *param_3 - 1;
            if (uVar10 == 0) goto LAB_140bb5654;
            puVar6 = param_3 + 1;
            do {
              if ((short)*puVar6 == *(short *)((longlong)param_3 + uVar10 * 2 + 8)) {
                *param_3 = uVar10;
                break;
              }
              uVar9 = uVar9 + 1;
              puVar6 = (ulonglong *)((longlong)puVar6 + 2);
            } while (uVar9 < uVar10);
          }
        }
      }
      else {
        *pcVar5 = '\0';
        if (pcVar5[1] != '\0') {
          FUN_140bb5280(&local_68,&local_64,local_60);
          FUN_140bb5280(&local_68,&local_64,pcVar5 + 1);
          if ((local_68 != 0) && (local_64 != 0)) {
            uVar10 = param_3[0x11];
            uVar7 = uVar9;
            if (uVar10 == 0) {
              do {
                if ((*(int *)((longlong)&DAT_141234e14 + uVar7) == local_64) &&
                   (*(int *)((longlong)&DAT_141234e1c + uVar7) == local_68)) {
                  uVar3 = *(undefined2 *)((longlong)&DAT_141234e10 + uVar7);
                  goto LAB_140bb560c;
                }
                uVar7 = uVar7 + 0x48;
              } while (uVar7 < 0x8b8);
            }
            else if (*(ulonglong *)(uVar10 + 0x640) != 0) {
              lVar8 = *(longlong *)(uVar10 + 0x650);
              do {
                if ((*(int *)(lVar8 + 0x14) == local_64) && (*(int *)(lVar8 + 0x1c) == local_68)) {
                  if (*(int *)(*(longlong *)(param_3[0x11] + 0x650) + 0x2c + uVar7 * 0x48) != 0) {
                    uVar3 = *(undefined2 *)(lVar8 + 0x10);
                    goto LAB_140bb560c;
                  }
                  break;
                }
                uVar7 = uVar7 + 1;
                lVar8 = lVar8 + 0x48;
              } while (uVar7 < *(ulonglong *)(uVar10 + 0x640));
            }
          }
        }
      }
    }
  }
LAB_140bb5654:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_88);
}

