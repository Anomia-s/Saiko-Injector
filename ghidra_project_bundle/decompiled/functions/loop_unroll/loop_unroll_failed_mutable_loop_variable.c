/**
 * Function: loop_unroll_failed_mutable_loop_variable
 * Address:  1406d7ab0
 * Signature: undefined loop_unroll_failed_mutable_loop_variable(void)
 * Body size: 1037 bytes
 */


undefined4
loop_unroll_failed_mutable_loop_variable
          (undefined8 *param_1,longlong param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStackY_a8 [32];
  undefined1 local_79;
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_1414ef3c0 ^ (ulonglong)auStackY_a8;
  if (param_1[0x22] == 0) {
LAB_1406d7cf1:
    uVar5 = *param_1;
    pcVar6 = "loop unroll failed: invalid iteration count";
LAB_1406d7cfb:
    FUN_1407ab880(uVar5,pcVar6);
  }
  else {
    uVar9 = *(ulonglong *)(param_2 + 0x30);
    uVar8 = param_1[0x23];
    uVar14 = 0;
    uVar15 = 0;
    if (uVar9 != uVar8) {
      uVar10 = uVar9 >> 9 ^ uVar9 >> 4;
      uVar7 = 0;
      do {
        uVar10 = uVar10 & param_1[0x21] - 1;
        lVar11 = uVar10 * 0x20;
        uVar1 = *(ulonglong *)(param_1[0x20] + lVar11);
        if (uVar1 == uVar9) {
          lVar11 = param_1[0x20] + lVar11;
          uVar5 = *(undefined8 *)(lVar11 + 0x10);
          uVar14 = (undefined4)uVar5;
          uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
          bVar12 = *(int *)(lVar11 + 8) == 3;
          uVar9 = *(ulonglong *)(param_2 + 0x38);
          goto joined_r0x0001406d7bf4;
        }
        if (uVar1 == uVar8) break;
        uVar10 = uVar10 + uVar7 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 <= param_1[0x21] - 1);
    }
    bVar12 = false;
    uVar9 = *(ulonglong *)(param_2 + 0x38);
joined_r0x0001406d7bf4:
    if (uVar9 == uVar8) {
      uVar9 = *(ulonglong *)(param_2 + 0x40);
      if (uVar9 != 0) {
        uVar5 = 0;
        iVar2 = 0;
        if (uVar9 != uVar8) goto LAB_1406d7c16;
      }
      goto LAB_1406d7cf1;
    }
    uVar7 = uVar9 >> 9 ^ uVar9 >> 4;
    uVar10 = 0;
    uVar5 = 0;
    do {
      uVar7 = uVar7 & param_1[0x21] - 1;
      lVar11 = uVar7 * 0x20;
      uVar1 = *(ulonglong *)(param_1[0x20] + lVar11);
      if (uVar1 == uVar9) {
        lVar11 = param_1[0x20] + lVar11;
        iVar2 = *(int *)(lVar11 + 8);
        uVar5 = *(undefined8 *)(lVar11 + 0x10);
        uVar9 = *(ulonglong *)(param_2 + 0x40);
        goto joined_r0x0001406d7c82;
      }
      iVar2 = 0;
      if (uVar1 == uVar8) break;
      uVar7 = uVar7 + uVar10 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 <= param_1[0x21] - 1);
    uVar9 = *(ulonglong *)(param_2 + 0x40);
joined_r0x0001406d7c82:
    if (uVar9 != 0) {
      uVar8 = param_1[0x23];
      if (uVar9 != uVar8) {
LAB_1406d7c16:
        uVar7 = uVar9 >> 9 ^ uVar9 >> 4;
        uVar10 = 0;
        do {
          uVar7 = uVar7 & param_1[0x21] - 1;
          lVar11 = uVar7 * 0x20;
          uVar1 = *(ulonglong *)(param_1[0x20] + lVar11);
          if (uVar1 == uVar9) {
            lVar11 = param_1[0x20] + lVar11;
            uVar16 = (undefined4)*(undefined8 *)(lVar11 + 0x10);
            bVar13 = *(int *)(lVar11 + 8) == 3;
            goto LAB_1406d7ca3;
          }
          if (uVar1 == uVar8) break;
          uVar7 = uVar7 + uVar10 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 <= param_1[0x21] - 1);
      }
      goto LAB_1406d7cf1;
    }
    uVar16 = 0;
    bVar13 = true;
LAB_1406d7ca3:
    if (((!(bool)(bVar12 & iVar2 == 3)) || (!bVar13)) ||
       (iVar2 = FUN_1407b3870(CONCAT44(uVar15,uVar14),uVar5,uVar16), iVar2 < 0)) goto LAB_1406d7cf1;
    if (iVar2 <= param_3) {
      uVar9 = *(ulonglong *)(param_2 + 0x28);
      if ((param_1[0x1d] != 0) && (uVar9 != param_1[0x1e])) {
        uVar7 = uVar9 >> 9 ^ uVar9 >> 4;
        uVar8 = 0;
        do {
          uVar7 = uVar7 & param_1[0x1c] - 1;
          uVar10 = *(ulonglong *)(param_1[0x1b] + uVar7 * 0x18);
          if (uVar10 == uVar9) {
            if (*(char *)(param_1[0x1b] + uVar7 * 0x18 + 0x10) == '\x01') {
              uVar5 = *param_1;
              pcVar6 = "loop unroll failed: mutable loop variable";
              goto LAB_1406d7cfb;
            }
            break;
          }
          if (uVar10 == param_1[0x1e]) break;
          uVar7 = uVar7 + uVar8 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 <= param_1[0x1c] - 1);
      }
      local_78 = uVar9;
      uVar5 = Luau::Compile::CostVisitor::CostVisitor_Constructor_or_Destructor
                        (*(undefined8 **)(param_2 + 0x48),(longlong)&local_78,1,param_1 + 0x2f,
                         param_1 + 0x20);
      local_79 = 1;
      iVar3 = FUN_1407b3790(uVar5,&local_79,1);
      iVar3 = iVar3 * iVar2;
      iVar4 = FUN_1407b3790(uVar5,0,0);
      if ((iVar3 != 0) && (iVar4 = (iVar2 * (iVar4 + 1) * 100) / iVar3, iVar4 < param_4)) {
        param_4 = iVar4;
      }
      iVar4 = (param_3 * param_4) / 100;
      uVar16 = CONCAT31((int3)((uint)(param_3 * param_4) >> 8),iVar3 <= iVar4);
      if (iVar4 < iVar3) {
        FUN_1407ab880(*param_1,
                      "loop unroll failed: too expensive (iterations %d, cost %d, profit %.2fx)",
                      iVar2,iVar3);
      }
      else {
        FUN_1407ab880(*param_1,"loop unroll succeeded (iterations %d, cost %d, profit %.2fx)",iVar2,
                      iVar3);
        exceeded_jump_distance_limit_simplify_the_cod(param_1,param_2,iVar2,CONCAT44(uVar15,uVar14))
        ;
      }
      goto LAB_1406d7d02;
    }
    FUN_1407ab880(*param_1,"loop unroll failed: too many iterations (%d)",iVar2);
  }
  uVar16 = 0;
LAB_1406d7d02:
  if (DAT_1414ef3c0 != (local_70 ^ (ulonglong)auStackY_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_70 ^ (ulonglong)auStackY_a8);
  }
  return uVar16;
}

