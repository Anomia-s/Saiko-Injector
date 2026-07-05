/**
 * Function: invalid_cluster_operation_type
 * Address:  14070cf10
 * Signature: undefined invalid_cluster_operation_type(void)
 * Body size: 625 bytes
 */


void invalid_cluster_operation_type
               (undefined4 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
               longlong param_5,longlong param_6)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  byte bVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *(undefined4 *)(param_3 + 0x10) = *param_1;
  bVar1 = *(byte *)((longlong)param_1 + 6);
  bVar5 = (bVar1 & 2) >> 1;
  bVar9 = (bVar1 & 1) == 0;
  iVar8 = 4;
  if (bVar9) {
    iVar8 = (uint)bVar5 * 8;
  }
  iVar7 = 0x44;
  if (bVar9) {
    iVar7 = (uint)bVar5 * 8 + 0x40;
  }
  if ((bVar1 & 8) == 0) {
    iVar7 = iVar8;
  }
  *(int *)(param_3 + 0x14) = iVar7;
  if ((ulonglong)*(byte *)(param_1 + 1) < 5) {
    *(undefined4 *)(param_3 + 0x18) =
         *(undefined4 *)(&DAT_14123a9ac + (ulonglong)*(byte *)(param_1 + 1) * 4);
    bVar1 = *(byte *)((longlong)param_1 + 5);
  }
  else {
    local_48 = 0;
    local_50 = (char *)FUN_140b65d30(0x20);
    local_40 = 0x1e;
    local_38 = 0x1f;
    builtin_strncpy(local_50,"Invalid cluster operation type",0x1f);
    FUN_140533460(param_2,&local_50);
    if (0xf < local_38) {
      uVar4 = local_38 + 1;
      pcVar6 = local_50;
      if (0xfff < uVar4) {
        pcVar6 = *(char **)(local_50 + -8);
        if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_14070d168;
        uVar4 = local_38 + 0x28;
      }
      thunk_FUN_140b68ba8(pcVar6,uVar4);
    }
    *(undefined4 *)(param_3 + 0x18) = 0;
    bVar1 = *(byte *)((longlong)param_1 + 5);
  }
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
    local_48 = 0;
    local_50 = (char *)FUN_140b65d30(0x20);
    local_40 = 0x1e;
    local_38 = 0x1f;
    builtin_strncpy(local_50,"Invalid cluster operation mode",0x1f);
    FUN_140533460(param_2,&local_50);
    if (0xf < local_38) {
      uVar4 = local_38 + 1;
      pcVar6 = local_50;
      if (0xfff < uVar4) {
        pcVar6 = *(char **)(local_50 + -8);
        if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) {
LAB_14070d168:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar4 = local_38 + 0x28;
      }
      thunk_FUN_140b68ba8(pcVar6,uVar4);
    }
    uVar2 = 0;
  }
  *(uint *)(param_3 + 0x1c) = uVar2;
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 - 1 < 3) {
    uVar3 = FUN_1406f1fe0(*(undefined1 *)(param_1 + 4));
    *(undefined4 *)(param_5 + 0x10) = uVar3;
    *(undefined4 *)(param_5 + 0x14) = param_1[5];
    *(undefined4 *)(param_5 + 0x18) = param_1[6];
    *(undefined4 *)(param_5 + 0x1c) = param_1[7];
    *(undefined4 *)(param_5 + 0x20) = param_1[8];
    *(undefined4 *)(param_5 + 0x24) = param_1[9];
    *(undefined4 *)(param_5 + 0x28) = param_1[10];
    *(undefined4 *)(param_5 + 0x2c) = param_1[0xb];
  }
  else if (bVar1 == 4) {
    *(undefined4 *)(param_6 + 0x14) = param_1[0xc];
    *(undefined4 *)(param_6 + 0x10) = param_1[0xd];
    param_5 = param_6;
  }
  else {
    if (bVar1 != 0) {
      return;
    }
    uVar2 = 2;
    if (*(char *)(param_1 + 2) != '\x02') {
      uVar2 = (uint)(*(char *)(param_1 + 2) == '\x01');
    }
    *(uint *)(param_4 + 0x10) = uVar2;
    *(uint *)(param_4 + 0x14) = *(byte *)((longlong)param_1 + 6) >> 2 & 1;
    *(ulonglong *)(param_4 + 0x18) = (ulonglong)(uint)param_1[3];
    param_5 = param_4;
  }
  *(longlong *)(param_3 + 0x20) = param_5;
  return;
}

