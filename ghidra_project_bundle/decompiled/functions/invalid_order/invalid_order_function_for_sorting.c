/**
 * Function: invalid_order_function_for_sorting
 * Address:  1406aa510
 * Signature: undefined invalid_order_function_for_sorting(void)
 * Body size: 1219 bytes
 */


void invalid_order_function_for_sorting
               (undefined8 param_1,longlong param_2,uint param_3,uint param_4,uint param_5,
               code *param_6)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_d8 [32];
  code *local_b8;
  code *local_b0;
  uint local_a0;
  uint local_9c;
  undefined8 local_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  if ((int)param_3 < (int)param_4) {
    uVar16 = (ulonglong)param_4;
    local_9c = param_5;
    local_98 = param_1;
LAB_1406aa596:
    do {
      iVar14 = (int)uVar16;
      local_a0 = param_3;
      if (local_9c == 0) {
        uVar8 = iVar14 - param_3;
        uVar11 = (uVar8 + 1 >> 1) + 1;
        do {
          local_b0 = (code *)CONCAT44(local_b0._4_4_,uVar11 - 2);
          local_b8 = param_6;
          table_modified_during_sorting(param_1,param_2,param_3,uVar16 & 0xffffffff);
          uVar11 = uVar11 - 1;
        } while (1 < uVar11);
        uVar16 = (ulonglong)uVar8 + 1;
        lVar15 = (longlong)(int)param_3 * 0x10;
        lVar9 = (ulonglong)uVar8 * 0x10 + lVar15;
        do {
          iVar14 = iVar14 + -1;
          lVar17 = *(longlong *)(param_2 + 0x18);
          uVar3 = *(undefined8 *)(lVar17 + lVar15);
          uVar4 = ((undefined8 *)(lVar17 + lVar15))[1];
          uVar5 = ((undefined8 *)(lVar17 + lVar9))[1];
          *(undefined8 *)(lVar17 + lVar15) = *(undefined8 *)(lVar17 + lVar9);
          ((undefined8 *)(lVar17 + lVar15))[1] = uVar5;
          local_58._0_4_ = (undefined4)uVar3;
          local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar4;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          puVar1 = (undefined4 *)(lVar17 + lVar9);
          *puVar1 = (undefined4)local_58;
          puVar1[1] = local_58._4_4_;
          puVar1[2] = (undefined4)uStack_50;
          puVar1[3] = uStack_50._4_4_;
          local_b8 = param_6;
          local_b0 = (code *)((ulonglong)local_b0 & 0xffffffff00000000);
          local_58 = uVar3;
          uStack_50 = uVar4;
          table_modified_during_sorting(param_1,param_2,param_3,iVar14);
          uVar16 = uVar16 - 1;
          lVar9 = lVar9 + -0x10;
        } while (1 < uVar16);
        break;
      }
      iVar10 = *(int *)(param_2 + 8);
      local_60 = (longlong)(int)param_3;
      lVar15 = local_60 * 0x10;
      local_90 = (longlong)iVar14;
      lVar9 = local_90 * 0x10;
      iVar6 = (*param_6)(param_1,*(longlong *)(param_2 + 0x18) + lVar9,
                         *(longlong *)(param_2 + 0x18) + lVar15);
      if (*(int *)(param_2 + 8) != iVar10) {
LAB_1406aa9a5:
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(param_1,"table modified during sorting");
      }
      if (iVar6 != 0) {
        lVar17 = *(longlong *)(param_2 + 0x18);
        uVar3 = *(undefined8 *)(lVar17 + lVar9);
        uVar4 = ((undefined8 *)(lVar17 + lVar9))[1];
        uVar5 = ((undefined8 *)(lVar17 + lVar15))[1];
        *(undefined8 *)(lVar17 + lVar9) = *(undefined8 *)(lVar17 + lVar15);
        ((undefined8 *)(lVar17 + lVar9))[1] = uVar5;
        local_58._0_4_ = (undefined4)uVar3;
        local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_50._0_4_ = (undefined4)uVar4;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        puVar1 = (undefined4 *)(lVar17 + lVar15);
        *puVar1 = (undefined4)local_58;
        puVar1[1] = local_58._4_4_;
        puVar1[2] = (undefined4)uStack_50;
        puVar1[3] = uStack_50._4_4_;
        local_58 = uVar3;
        uStack_50 = uVar4;
      }
      iVar10 = iVar14 - param_3;
      if (iVar10 == 1) break;
      iVar6 = *(int *)(param_2 + 8);
      lVar17 = (longlong)(int)((iVar10 >> 1) + param_3) * 0x10;
      iVar7 = (*param_6)(param_1,*(longlong *)(param_2 + 0x18) + lVar17,
                         *(longlong *)(param_2 + 0x18) + lVar15);
      if (*(int *)(param_2 + 8) != iVar6) goto LAB_1406aa9a5;
      lVar18 = *(longlong *)(param_2 + 0x18);
      if (iVar7 == 0) {
        iVar7 = (*param_6)(param_1,lVar18 + lVar9,lVar18 + lVar17);
        if (*(int *)(param_2 + 8) != iVar6) goto LAB_1406aa9a5;
        if (iVar7 != 0) {
          lVar15 = *(longlong *)(param_2 + 0x18);
          uVar3 = *(undefined8 *)(lVar15 + lVar17);
          uVar4 = ((undefined8 *)(lVar15 + lVar17))[1];
          uVar5 = ((undefined8 *)(lVar15 + lVar9))[1];
          *(undefined8 *)(lVar15 + lVar17) = *(undefined8 *)(lVar15 + lVar9);
          ((undefined8 *)(lVar15 + lVar17))[1] = uVar5;
          local_58._0_4_ = (undefined4)uVar3;
          local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar4;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          puVar1 = (undefined4 *)(lVar15 + lVar9);
          *puVar1 = (undefined4)local_58;
          puVar1[1] = local_58._4_4_;
          puVar1[2] = (undefined4)uStack_50;
          puVar1[3] = uStack_50._4_4_;
          local_58 = uVar3;
          uStack_50 = uVar4;
        }
      }
      else {
        uVar3 = *(undefined8 *)(lVar18 + lVar17);
        uVar4 = ((undefined8 *)(lVar18 + lVar17))[1];
        uVar5 = ((undefined8 *)(lVar18 + lVar15))[1];
        *(undefined8 *)(lVar18 + lVar17) = *(undefined8 *)(lVar18 + lVar15);
        ((undefined8 *)(lVar18 + lVar17))[1] = uVar5;
        local_58._0_4_ = (undefined4)uVar3;
        local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_50._0_4_ = (undefined4)uVar4;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        puVar1 = (undefined4 *)(lVar18 + lVar15);
        *puVar1 = (undefined4)local_58;
        puVar1[1] = local_58._4_4_;
        puVar1[2] = (undefined4)uStack_50;
        puVar1[3] = uStack_50._4_4_;
        local_58 = uVar3;
        uStack_50 = uVar4;
      }
      if (iVar10 == 2) break;
      iVar14 = iVar14 + -1;
      lVar9 = *(longlong *)(param_2 + 0x18);
      uVar3 = *(undefined8 *)(lVar9 + lVar17);
      uVar4 = ((undefined8 *)(lVar9 + lVar17))[1];
      lVar15 = (local_90 + -1) * 0x10;
      uVar5 = ((undefined8 *)(lVar9 + lVar15))[1];
      *(undefined8 *)(lVar9 + lVar17) = *(undefined8 *)(lVar9 + lVar15);
      ((undefined8 *)(lVar9 + lVar17))[1] = uVar5;
      local_58._0_4_ = (undefined4)uVar3;
      local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar4;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      puVar1 = (undefined4 *)(lVar9 + lVar15);
      *puVar1 = (undefined4)local_58;
      puVar1[1] = local_58._4_4_;
      puVar1[2] = (undefined4)uStack_50;
      puVar1[3] = uStack_50._4_4_;
      uVar12 = (ulonglong)local_a0;
      local_88 = uVar16;
      local_58 = uVar3;
      uStack_50 = uVar4;
      while( true ) {
        lVar17 = (longlong)(int)uVar12;
        iVar10 = *(int *)(param_2 + 8);
        lVar18 = lVar17 << 4;
        lVar9 = 0;
        local_80 = uVar12;
        while( true ) {
          lVar18 = lVar18 + 0x10;
          iVar6 = (*param_6)(param_1,*(longlong *)(param_2 + 0x18) + lVar18,
                             *(longlong *)(param_2 + 0x18) + lVar15);
          if (*(int *)(param_2 + 8) != iVar10) goto LAB_1406aa9a5;
          if (iVar6 == 0) break;
          lVar13 = lVar17 + lVar9;
          lVar9 = lVar9 + 1;
          if (local_90 <= lVar13 + 1) {
                    /* WARNING: Subroutine does not return */
            FUN_1406b7390(param_1,"invalid order function for sorting");
          }
        }
        local_68 = uVar12 & 0xffffffff;
        local_78 = local_68 + lVar9 + 1;
        lVar13 = (longlong)iVar14;
        local_70 = lVar17 + 1 + lVar9;
        lVar17 = lVar13 << 4;
        while( true ) {
          iVar14 = iVar14 + -1;
          lVar17 = lVar17 + -0x10;
          iVar6 = (*param_6)(local_98,*(longlong *)(param_2 + 0x18) + lVar15,
                             *(longlong *)(param_2 + 0x18) + lVar17);
          uVar16 = local_88;
          param_1 = local_98;
          param_3 = local_a0;
          if (*(int *)(param_2 + 8) != iVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_1406b7390(local_98,"table modified during sorting");
          }
          if (iVar6 == 0) break;
          lVar13 = lVar13 + -1;
          if (lVar13 <= local_60) {
                    /* WARNING: Subroutine does not return */
            FUN_1406b7390(local_98,"invalid order function for sorting");
          }
        }
        lVar2 = *(longlong *)(param_2 + 0x18);
        if (lVar13 <= local_70) break;
        uVar3 = *(undefined8 *)(lVar2 + lVar18);
        uVar4 = ((undefined8 *)(lVar2 + lVar18))[1];
        uVar5 = ((undefined8 *)(lVar2 + lVar17))[1];
        *(undefined8 *)(lVar2 + lVar18) = *(undefined8 *)(lVar2 + lVar17);
        ((undefined8 *)(lVar2 + lVar18))[1] = uVar5;
        local_58._0_4_ = (undefined4)uVar3;
        local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_50._0_4_ = (undefined4)uVar4;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        puVar1 = (undefined4 *)(lVar2 + lVar17);
        *puVar1 = (undefined4)local_58;
        puVar1[1] = local_58._4_4_;
        puVar1[2] = (undefined4)uStack_50;
        puVar1[3] = uStack_50._4_4_;
        uVar12 = local_78;
        local_58 = uVar3;
        uStack_50 = uVar4;
      }
      uVar12 = local_68 + lVar9;
      uVar3 = *(undefined8 *)(lVar2 + lVar15);
      uVar4 = ((undefined8 *)(lVar2 + lVar15))[1];
      uVar5 = ((undefined8 *)(lVar2 + lVar18))[1];
      *(undefined8 *)(lVar2 + lVar15) = *(undefined8 *)(lVar2 + lVar18);
      ((undefined8 *)(lVar2 + lVar15))[1] = uVar5;
      local_58._0_4_ = (undefined4)uVar3;
      local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar4;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      puVar1 = (undefined4 *)(lVar2 + lVar18);
      *puVar1 = (undefined4)local_58;
      puVar1[1] = local_58._4_4_;
      puVar1[2] = (undefined4)uStack_50;
      puVar1[3] = uStack_50._4_4_;
      local_9c = (local_9c >> 2) + (local_9c >> 1);
      uVar8 = (uint)local_80;
      iVar14 = (int)lVar9;
      iVar10 = (int)local_88;
      local_58 = uVar3;
      uStack_50 = uVar4;
      if ((int)((~uVar8 + iVar10) - iVar14) <= (int)((uVar8 - local_a0) + iVar14 + 1)) {
        local_b0 = param_6;
        local_b8 = (code *)CONCAT44(local_b8._4_4_,local_9c);
        invalid_order_function_for_sorting
                  (local_98,param_2,uVar8 + iVar14 + 2,local_88 & 0xffffffff);
        uVar16 = uVar12 & 0xffffffff;
        if ((int)uVar12 <= (int)param_3) break;
        goto LAB_1406aa596;
      }
      local_b0 = param_6;
      local_b8 = (code *)CONCAT44(local_b8._4_4_,local_9c);
      invalid_order_function_for_sorting(local_98,param_2,local_a0);
      param_3 = uVar8 + iVar14 + 2;
    } while ((int)param_3 < iVar10);
  }
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_d8);
  }
  return;
}

