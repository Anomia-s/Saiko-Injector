/**
 * Function: action_d_state_d_padding_number_d
 * Address:  140c02a00
 * Signature: undefined action_d_state_d_padding_number_d(void)
 * Body size: 719 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong action_d_state_d_padding_number_d(int param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  size_t sVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined **ppuVar11;
  ulonglong uVar12;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar13;
  undefined1 local_48 [40];
  undefined8 uStack_20;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  uStack_20 = 0x140c02a0f;
  uVar6 = FUN_140c05330();
  if ((int)uVar6 < 1) {
    return uVar6;
  }
  if (param_1 == 1) {
    if (*(int *)(param_3 + 8) == 1) {
      *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_3 + 0x20);
      *(longlong *)(param_3 + 0x20) = param_3 + 0x40;
      *(undefined4 *)(param_3 + 0x1c) = 0x32;
    }
    else if (*(int *)(param_3 + 8) == 2) {
      puVar7 = (undefined8 *)FUN_140b935b0(local_48,*(undefined8 *)(param_2 + 0x28),param_3 + 0x1c);
      puVar1 = *(undefined8 **)(param_3 + 0x30);
      uVar4 = puVar7[1];
      *puVar1 = *puVar7;
      puVar1[1] = uVar4;
      uVar4 = puVar7[3];
      puVar1[2] = puVar7[2];
      puVar1[3] = uVar4;
      puVar1[4] = puVar7[4];
      return 1;
    }
  }
  else if ((param_1 == 8) && (*(int *)(param_3 + 8) == 1)) {
    lVar2 = *(longlong *)(param_3 + 0x30);
    if (*(int *)(lVar2 + 8) == 1) {
      uVar6 = FUN_140b93920(lVar2,param_3 + 0x1c);
      return uVar6;
    }
    if (*(int *)(lVar2 + 8) == 2) {
      uVar6 = FUN_140b93940(lVar2,param_3 + 0x1c);
      return uVar6;
    }
    uVar6 = 0;
    piVar9 = &DAT_141248430;
    do {
      if (*(int *)(param_3 + 0x1c) == *piVar9) goto LAB_140c02b74;
      uVar6 = uVar6 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar6 < 7);
    if (uVar6 == 7) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\ctrl_params_translate.c",0x52f,"fix_rsa_padding_mode");
      FUN_140b91cc0(4,0x76,"[action:%d, state:%d] padding number %d",*(undefined4 *)(param_3 + 8),8,
                    CONCAT44(uVar13,*(undefined4 *)(param_3 + 0x1c)));
      return 0xfffffffe;
    }
LAB_140c02b74:
    pcVar3 = (&PTR_s_pkcs1_141248438)[uVar6 * 2];
    if (pcVar3 == (char *)0x0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\ctrl_params_translate.c",0x539,"fix_rsa_padding_mode");
      FUN_140b91cc0(6,0x93,0);
      return 0xfffffffe;
    }
    *(char **)(param_3 + 0x20) = pcVar3;
    sVar8 = strlen(pcVar3);
    *(int *)(param_3 + 0x1c) = (int)sVar8;
  }
  uVar6 = action_d_state_d_names_values(param_1,param_2,param_3);
  uVar10 = uVar6 & 0xffffffff;
  if (0 < (int)uVar6) {
    if (*(int *)(param_3 + 8) == 2) {
      if (param_1 != 7) {
        return uVar10;
      }
    }
    else {
      if (*(int *)(param_3 + 8) != 1) {
        return uVar10;
      }
      if (param_1 != 2) {
        return uVar10;
      }
    }
    ppuVar11 = &PTR_s_pkcs1_141248438;
    pcVar3 = *(char **)(param_3 + 0x20);
    uVar12 = 0;
    do {
      iVar5 = strcmp(pcVar3,*ppuVar11);
      if (iVar5 == 0) goto LAB_140c02c84;
      uVar12 = uVar12 + 1;
      ppuVar11 = ppuVar11 + 2;
    } while (uVar12 < 7);
    if (uVar12 == 7) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\ctrl_params_translate.c",0x54d,"fix_rsa_padding_mode");
      FUN_140b91cc0(4,0x76,"[action:%d, state:%d] padding name %s",*(undefined4 *)(param_3 + 8),
                    param_1,*(undefined8 *)(param_3 + 0x20));
      *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
      uVar6 = 0xfffffffe;
    }
    else {
LAB_140c02c84:
      uVar6 = uVar10;
      if (param_1 == 2) {
        **(undefined4 **)(param_3 + 0x38) = (&DAT_141248430)[uVar12 * 4];
      }
      else {
        *(undefined4 *)(param_3 + 0x1c) = (&DAT_141248430)[uVar12 * 4];
      }
    }
    *(undefined8 *)(param_3 + 0x20) = 0;
  }
  return uVar6;
}

