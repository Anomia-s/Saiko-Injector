/**
 * Function: table_modified_during_sorting
 * Address:  1406aaa00
 * Signature: undefined table_modified_during_sorting(void)
 * Body size: 499 bytes
 */


void table_modified_during_sorting
               (undefined8 param_1,longlong param_2,int param_3,int param_4,code *param_5,
               uint param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_98 [44];
  uint local_6c;
  longlong local_68;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  local_6c = param_4 - param_3;
  uVar11 = param_6 * 2;
  uVar13 = param_6 * 2 + 2;
  uVar9 = param_6;
  local_68 = param_2;
  local_5c = param_4;
  if ((int)local_6c < (int)uVar13) {
    if ((uVar11 | 1) != local_6c) goto LAB_1406aabb2;
  }
  else {
    do {
      iVar3 = *(int *)(local_68 + 8);
      lVar10 = (longlong)(int)(uVar9 + param_3) * 0x10;
      iVar7 = (*param_5)(param_1,*(longlong *)(local_68 + 0x18) + lVar10,
                         (longlong)(int)(param_3 + uVar11 + 1) * 0x10 +
                         *(longlong *)(local_68 + 0x18));
      if (*(int *)(local_68 + 8) != iVar3) goto LAB_1406aabd7;
      param_6 = uVar9;
      if (iVar7 != 0) {
        param_6 = uVar11 | 1;
      }
      iVar7 = (*param_5)(param_1,(longlong)(int)(param_6 + param_3) * 0x10 +
                                 *(longlong *)(local_68 + 0x18),
                         (longlong)(int)(param_3 + uVar13) * 0x10 + *(longlong *)(local_68 + 0x18));
      if (*(int *)(local_68 + 8) != iVar3) goto LAB_1406aabd7;
      if (iVar7 != 0) {
        param_6 = uVar13;
      }
      if (param_6 == uVar9) {
        uVar11 = uVar9 * 2;
        param_6 = uVar9;
        break;
      }
      lVar12 = *(longlong *)(local_68 + 0x18);
      uVar4 = *(undefined8 *)(lVar12 + lVar10);
      uVar5 = ((undefined8 *)(lVar12 + lVar10))[1];
      lVar8 = (longlong)(int)(param_6 + param_3) * 0x10;
      puVar1 = (undefined8 *)(lVar12 + lVar8);
      uVar6 = puVar1[1];
      *(undefined8 *)(lVar12 + lVar10) = *puVar1;
      ((undefined8 *)(lVar12 + lVar10))[1] = uVar6;
      local_58._0_4_ = (undefined4)uVar4;
      local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar5;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = (undefined4 *)(lVar12 + lVar8);
      *puVar2 = (undefined4)local_58;
      puVar2[1] = local_58._4_4_;
      puVar2[2] = (undefined4)uStack_50;
      puVar2[3] = uStack_50._4_4_;
      uVar11 = param_6 * 2;
      uVar13 = param_6 * 2 + 2;
      uVar9 = param_6;
      local_58 = uVar4;
      uStack_50 = uVar5;
    } while ((int)uVar13 <= (int)local_6c);
    if ((uVar11 | 1) != local_6c) goto LAB_1406aabb2;
  }
  iVar3 = *(int *)(local_68 + 8);
  lVar12 = (longlong)local_5c * 0x10;
  lVar10 = (longlong)(int)(param_6 + param_3) * 0x10;
  iVar7 = (*param_5)(param_1,*(longlong *)(local_68 + 0x18) + lVar10,
                     *(longlong *)(local_68 + 0x18) + lVar12);
  if (*(int *)(local_68 + 8) != iVar3) {
LAB_1406aabd7:
                    /* WARNING: Subroutine does not return */
    FUN_1406b7390(param_1,"table modified during sorting");
  }
  if (iVar7 != 0) {
    lVar8 = *(longlong *)(local_68 + 0x18);
    uVar4 = *(undefined8 *)(lVar8 + lVar10);
    uVar5 = ((undefined8 *)(lVar8 + lVar10))[1];
    uVar6 = ((undefined8 *)(lVar8 + lVar12))[1];
    *(undefined8 *)(lVar8 + lVar10) = *(undefined8 *)(lVar8 + lVar12);
    ((undefined8 *)(lVar8 + lVar10))[1] = uVar6;
    local_58._0_4_ = (undefined4)uVar4;
    local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_50._0_4_ = (undefined4)uVar5;
    uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    puVar2 = (undefined4 *)(lVar8 + lVar12);
    *puVar2 = (undefined4)local_58;
    puVar2[1] = local_58._4_4_;
    puVar2[2] = (undefined4)uStack_50;
    puVar2[3] = uStack_50._4_4_;
    local_58 = uVar4;
    uStack_50 = uVar5;
  }
LAB_1406aabb2:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_98);
  }
  return;
}

