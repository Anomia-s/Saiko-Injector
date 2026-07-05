/**
 * Function: zstd_decompress_not_a_valid_zstd_frame
 * Address:  14074b0d0
 * Signature: undefined zstd_decompress_not_a_valid_zstd_frame(void)
 * Body size: 788 bytes
 */


undefined1 *
zstd_decompress_not_a_valid_zstd_frame
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  char *pcVar11;
  ulonglong uVar12;
  char *pcVar13;
  char **ppcVar14;
  void *pvVar15;
  size_t sVar16;
  char *local_60;
  undefined8 uStack_58;
  longlong local_50;
  ulonglong uStack_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar10 = FUN_1407cea90(param_2,param_3);
  if (uVar10 == 0xffffffffffffffff) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    pcVar11 = (char *)FUN_140b65d30(0x30);
    *(char **)(param_1 + 8) = pcVar11;
    *(undefined8 *)(param_1 + 0x18) = 0x2f;
    *(undefined8 *)(param_1 + 0x20) = 0x2f;
    builtin_strncpy(pcVar11,"zstd_decompress: frame has unknown content size",0x30);
  }
  else if (uVar10 == 0xfffffffffffffffe) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    pcVar11 = (char *)FUN_140b65d30(0x30);
    *(char **)(param_1 + 8) = pcVar11;
    *(undefined8 *)(param_1 + 0x18) = 0x27;
    *(undefined8 *)(param_1 + 0x20) = 0x2f;
    builtin_strncpy(pcVar11,"zstd_decompress: not a valid zstd frame",0x28);
  }
  else {
    lVar1 = *param_4;
    pvVar15 = (void *)param_4[1];
    sVar16 = uVar10 - ((longlong)pvVar15 - lVar1);
    if (uVar10 < (ulonglong)((longlong)pvVar15 - lVar1)) {
      param_4[1] = (longlong)(lVar1 + uVar10);
      pvVar15 = (void *)(lVar1 + uVar10);
    }
    else if (sVar16 != 0) {
      if ((ulonglong)(param_4[2] - lVar1) < uVar10) {
        FUN_140037db0(param_4,uVar10,&local_60);
        pvVar15 = (void *)param_4[1];
      }
      else {
        memset(pvVar15,0,sVar16);
        param_4[1] = (longlong)((longlong)pvVar15 + sVar16);
        pvVar15 = (void *)((longlong)pvVar15 + sVar16);
      }
    }
    uVar12 = FUN_1407cf620(*param_4,(longlong)pvVar15 - *param_4,param_2);
    iVar9 = FUN_1407ce730(uVar12);
    if (iVar9 == 0) {
      if (uVar12 != uVar10) {
        lVar1 = *param_4;
        pvVar15 = (void *)param_4[1];
        sVar16 = uVar12 - ((longlong)pvVar15 - lVar1);
        if (uVar12 < (ulonglong)((longlong)pvVar15 - lVar1)) {
          param_4[1] = lVar1 + uVar12;
        }
        else if (sVar16 != 0) {
          if ((ulonglong)(param_4[2] - lVar1) < uVar12) {
            FUN_140037db0(param_4,uVar12,&local_60);
          }
          else {
            memset(pvVar15,0,sVar16);
            param_4[1] = (longlong)pvVar15 + sVar16;
          }
        }
      }
      *param_1 = 1;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0xf;
    }
    else {
      if (*param_4 != param_4[1]) {
        param_4[1] = *param_4;
      }
      *param_1 = 0;
      pcVar11 = (char *)FUN_1407ce740(uVar12);
      uStack_58 = 0;
      pcVar13 = (char *)FUN_140b65d30(0x20);
      local_50 = 0x11;
      uStack_48 = 0x1f;
      builtin_strncpy(pcVar13,"ZSTD_decompress: ",0x12);
      local_60 = pcVar13;
      sVar16 = strlen(pcVar11);
      if (sVar16 < 0xf) {
        local_50 = sVar16 + 0x11;
        memmove(pcVar13 + 0x11,pcVar11,sVar16);
        pcVar13[sVar16 + 0x11] = '\0';
        ppcVar14 = &local_60;
      }
      else {
        ppcVar14 = (char **)FUN_140006210(&local_60,sVar16);
      }
      uVar2 = *(undefined4 *)ppcVar14;
      uVar3 = *(undefined4 *)((longlong)ppcVar14 + 4);
      uVar4 = *(undefined4 *)(ppcVar14 + 1);
      uVar5 = *(undefined4 *)((longlong)ppcVar14 + 0xc);
      uVar6 = *(undefined4 *)((longlong)ppcVar14 + 0x14);
      uVar7 = *(undefined4 *)(ppcVar14 + 3);
      uVar8 = *(undefined4 *)((longlong)ppcVar14 + 0x1c);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(ppcVar14 + 2);
      *(undefined4 *)(param_1 + 0x1c) = uVar6;
      *(undefined4 *)(param_1 + 0x20) = uVar7;
      *(undefined4 *)(param_1 + 0x24) = uVar8;
      *(undefined4 *)(param_1 + 8) = uVar2;
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      *(undefined4 *)(param_1 + 0x10) = uVar4;
      *(undefined4 *)(param_1 + 0x14) = uVar5;
      ppcVar14[2] = (char *)0x0;
      ppcVar14[3] = (char *)0xf;
      *(undefined1 *)ppcVar14 = 0;
      if (0xf < uStack_48) {
        uVar10 = uStack_48 + 1;
        pcVar11 = local_60;
        if (0xfff < uVar10) {
          pcVar11 = *(char **)(local_60 + -8);
          if ((char *)0x1f < local_60 + (-8 - (longlong)pcVar11)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar10 = uStack_48 + 0x28;
        }
        thunk_FUN_140b68ba8(pcVar11,uVar10);
      }
    }
  }
  return param_1;
}

