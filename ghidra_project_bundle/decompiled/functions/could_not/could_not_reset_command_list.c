/**
 * Function: could_not_reset_command_list
 * Address:  1404036a0
 * Signature: undefined could_not_reset_command_list(void)
 * Body size: 1686 bytes
 */


undefined8 could_not_reset_command_list(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  ulonglong uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_88 [47];
  char local_59;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  if (*(int *)(param_2 + 0x7a8) == 0) {
LAB_1404036fe:
    *(undefined4 *)(param_2 + 0x7a8) = 0;
  }
  else {
    if (param_3 != '\0') {
      uVar11 = 0;
      do {
        FUN_140160cf0(*(undefined8 *)(*(longlong *)(param_2 + 0x7a0) + uVar11 * 8));
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_2 + 0x7a8));
      goto LAB_1404036fe;
    }
    bVar13 = true;
    uVar11 = 0;
    local_59 = param_3;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x7a0) + uVar11 * 8);
      uVar7 = *(undefined8 *)(param_2 + 0x50);
      iVar3 = (**(code **)(**(longlong **)(plVar1[1] + 0x10) + 0x40))
                        (*(longlong **)(plVar1[1] + 0x10),0,0,&local_50);
      if ((iVar3 < 0) ||
         (iVar3 = (**(code **)(**(longlong **)(*plVar1 + 0x10) + 0x40))
                            (*(longlong **)(*plVar1 + 0x10),0,0,&local_58), iVar3 < 0)) {
        s_error_code_s_0x08lx(uVar7);
        bVar13 = false;
      }
      else {
        uVar9 = *(uint *)(plVar1 + 3);
        if ((uVar9 != 0) && (uVar8 = *(uint *)((longlong)plVar1 + 0x14), uVar8 != 0)) {
          uVar12 = 0;
          do {
            uVar2 = 0;
            if (uVar8 != 0) {
              uVar9 = 0;
              do {
                memcpy((void *)((ulonglong)(*(uint *)(plVar1 + 4) * uVar9) +
                                (ulonglong)(*(int *)((longlong)plVar1 + 0x24) * uVar12) +
                               (ulonglong)*(uint *)((longlong)plVar1 + 0x1c) + local_58),
                       (void *)((ulonglong)((int)plVar1[5] * uVar9) +
                               (ulonglong)(uVar8 * uVar12) + local_50),
                       (ulonglong)*(uint *)(plVar1 + 4));
                uVar9 = uVar9 + 1;
                uVar8 = *(uint *)((longlong)plVar1 + 0x14);
              } while (uVar9 < uVar8);
              uVar9 = *(uint *)(plVar1 + 3);
              uVar2 = uVar8;
            }
            uVar8 = uVar2;
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar9);
        }
        (**(code **)(**(longlong **)(plVar1[1] + 0x10) + 0x48))();
        (**(code **)(**(longlong **)(*plVar1 + 0x10) + 0x48))();
      }
      FUN_140160cf0(*(undefined8 *)(*(longlong *)(param_2 + 0x7a0) + uVar11 * 8));
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_2 + 0x7a8));
    *(undefined4 *)(param_2 + 0x7a8) = 0;
    param_3 = local_59;
    if (!bVar13) {
      uVar7 = 0;
      goto LAB_140403d22;
    }
  }
  iVar3 = (**(code **)(**(longlong **)(param_2 + 0x58) + 0x40))();
  if (iVar3 < 0) {
    pcVar10 = "Could not reset command allocator";
  }
  else {
    iVar3 = (**(code **)(**(longlong **)(param_2 + 0x60) + 0x50))
                      (*(longlong **)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x58),0);
    if (-1 < iVar3) {
      lVar6 = *(longlong *)(param_2 + 0xe0);
      if (lVar6 != 0) {
        lVar4 = (longlong)*(int *)(lVar6 + 8);
        lVar5 = param_1 + lVar4 * 0x18;
        *(undefined4 *)(lVar6 + 0x2c) = 0;
        FUN_1401552a0(*(undefined8 *)(param_1 + 0x168 + lVar4 * 0x18));
        uVar9 = *(uint *)(param_1 + 0x158 + lVar4 * 0x18);
        uVar8 = *(uint *)(param_1 + 0x15c + lVar4 * 0x18);
        if (uVar8 < uVar9) {
          lVar4 = *(longlong *)(lVar5 + 0x160);
        }
        else {
          uVar9 = uVar9 * 2;
          *(uint *)(lVar5 + 0x158) = uVar9;
          lVar4 = FUN_140160cc0(*(undefined8 *)(lVar5 + 0x160),(ulonglong)uVar9 << 3);
          *(longlong *)(lVar5 + 0x160) = lVar4;
          uVar8 = *(uint *)(lVar5 + 0x15c);
        }
        *(longlong *)(lVar4 + (ulonglong)uVar8 * 8) = lVar6;
        *(int *)(lVar5 + 0x15c) = *(int *)(lVar5 + 0x15c) + 1;
        FUN_1401552c0(*(undefined8 *)(lVar5 + 0x168));
      }
      lVar6 = *(longlong *)(param_2 + 0xe8);
      if (lVar6 != 0) {
        lVar4 = (longlong)*(int *)(lVar6 + 8);
        lVar5 = param_1 + lVar4 * 0x18;
        *(undefined4 *)(lVar6 + 0x2c) = 0;
        FUN_1401552a0(*(undefined8 *)(param_1 + 0x168 + lVar4 * 0x18));
        uVar9 = *(uint *)(param_1 + 0x158 + lVar4 * 0x18);
        uVar8 = *(uint *)(param_1 + 0x15c + lVar4 * 0x18);
        if (uVar8 < uVar9) {
          lVar4 = *(longlong *)(lVar5 + 0x160);
        }
        else {
          uVar9 = uVar9 * 2;
          *(uint *)(lVar5 + 0x158) = uVar9;
          lVar4 = FUN_140160cc0(*(undefined8 *)(lVar5 + 0x160),(ulonglong)uVar9 << 3);
          *(longlong *)(lVar5 + 0x160) = lVar4;
          uVar8 = *(uint *)(lVar5 + 0x15c);
        }
        *(longlong *)(lVar4 + (ulonglong)uVar8 * 8) = lVar6;
        *(int *)(lVar5 + 0x15c) = *(int *)(lVar5 + 0x15c) + 1;
        FUN_1401552c0(*(undefined8 *)(lVar5 + 0x168));
      }
      *(undefined8 *)(param_2 + 0xe0) = 0;
      *(undefined8 *)(param_2 + 0xe8) = 0;
      FUN_1401552a0(*(undefined8 *)(param_1 + 0x1e0));
      if (*(int *)(param_2 + 0xf8) != 0) {
        uVar9 = *(uint *)(param_1 + 0x110);
        uVar11 = 0;
        do {
          uVar7 = *(undefined8 *)(*(longlong *)(param_2 + 0xf0) + uVar11 * 8);
          if (uVar9 < *(uint *)(param_1 + 0x114)) {
            lVar6 = *(longlong *)(param_1 + 0x108);
          }
          else {
            uVar9 = *(uint *)(param_1 + 0x114) * 2;
            *(uint *)(param_1 + 0x114) = uVar9;
            lVar6 = FUN_140160cc0(*(undefined8 *)(param_1 + 0x108),(ulonglong)uVar9 << 3);
            *(longlong *)(param_1 + 0x108) = lVar6;
            uVar9 = *(uint *)(param_1 + 0x110);
          }
          *(undefined8 *)(lVar6 + (ulonglong)uVar9 * 8) = uVar7;
          uVar9 = *(int *)(param_1 + 0x110) + 1;
          *(uint *)(param_1 + 0x110) = uVar9;
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(param_2 + 0xf8));
      }
      *(undefined4 *)(param_2 + 0xf8) = 0;
      FUN_1401552c0(*(undefined8 *)(param_1 + 0x1e0));
      if (*(int *)(param_2 + 0x758) != 0) {
        uVar11 = 0;
        do {
          FUN_140106160(*(longlong *)(*(longlong *)(param_2 + 0x750) + uVar11 * 8) + 0x48,0xffffffff
                       );
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(param_2 + 0x758));
      }
      *(undefined4 *)(param_2 + 0x758) = 0;
      if (*(int *)(param_2 + 0x768) != 0) {
        uVar11 = 0;
        do {
          FUN_140106160(*(longlong *)(*(longlong *)(param_2 + 0x760) + uVar11 * 8) + 0x88,0xffffffff
                       );
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(param_2 + 0x768));
      }
      *(undefined4 *)(param_2 + 0x768) = 0;
      if (*(int *)(param_2 + 0x778) != 0) {
        uVar11 = 0;
        do {
          FUN_140106160(*(longlong *)(*(longlong *)(param_2 + 0x770) + uVar11 * 8) + 0x58,0xffffffff
                       );
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(param_2 + 0x778));
      }
      *(undefined4 *)(param_2 + 0x778) = 0;
      if (*(int *)(param_2 + 0x788) != 0) {
        uVar11 = 0;
        do {
          FUN_140106160(*(longlong *)(*(longlong *)(param_2 + 0x780) + uVar11 * 8) + 0x74,0xffffffff
                       );
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(param_2 + 0x788));
      }
      *(undefined4 *)(param_2 + 0x788) = 0;
      if (*(int *)(param_2 + 0x798) != 0) {
        uVar11 = 0;
        do {
          FUN_140106160(*(longlong *)(*(longlong *)(param_2 + 0x790) + uVar11 * 8) + 0x28,0xffffffff
                       );
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(param_2 + 0x798));
      }
      *(undefined4 *)(param_2 + 0x798) = 0;
      *(undefined4 *)(param_2 + 0x80) = 0;
      if (*(char *)(param_2 + 0x70) == '\x01') {
        lVar6 = *(longlong *)(param_2 + 0x68);
        iVar3 = FUN_140106160(lVar6 + 0x10,0xffffffff);
        if (iVar3 == 1) {
          FUN_1401552a0(*(undefined8 *)(param_1 + 0x1f8));
          uVar9 = *(uint *)(param_1 + 0x130);
          if (uVar9 + 1 < *(uint *)(param_1 + 0x134)) {
            lVar5 = *(longlong *)(param_1 + 0x128);
          }
          else {
            uVar9 = *(uint *)(param_1 + 0x134) * 2;
            *(uint *)(param_1 + 0x134) = uVar9;
            lVar5 = FUN_140160cc0(*(undefined8 *)(param_1 + 0x128),(ulonglong)uVar9 << 3);
            *(longlong *)(param_1 + 0x128) = lVar5;
            uVar9 = *(uint *)(param_1 + 0x130);
          }
          *(longlong *)(lVar5 + (ulonglong)uVar9 * 8) = lVar6;
          *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
          FUN_1401552c0(*(undefined8 *)(param_1 + 0x1f8));
        }
        *(undefined8 *)(param_2 + 0x68) = 0;
      }
      FUN_1401552a0(*(undefined8 *)(param_1 + 0x1d8));
      uVar9 = *(uint *)(param_1 + 0xf0);
      if (uVar9 == *(uint *)(param_1 + 0xf4)) {
        *(uint *)(param_1 + 0xf4) = uVar9 + 1;
        lVar6 = FUN_140160cc0(*(undefined8 *)(param_1 + 0xe8),(ulonglong)(uVar9 + 1) << 3);
        *(longlong *)(param_1 + 0xe8) = lVar6;
        uVar9 = *(uint *)(param_1 + 0xf0);
      }
      else {
        lVar6 = *(longlong *)(param_1 + 0xe8);
      }
      *(longlong *)(lVar6 + (ulonglong)uVar9 * 8) = param_2;
      *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
      FUN_1401552c0(*(undefined8 *)(param_1 + 0x1d8));
      uVar7 = 1;
      if ((param_3 == '\0') && (uVar9 = *(uint *)(param_1 + 0x100), uVar9 != 0)) {
        uVar11 = 0;
        do {
          lVar6 = *(longlong *)(param_1 + 0xf8);
          if (*(longlong *)(lVar6 + uVar11 * 8) == param_2) {
            *(undefined8 *)(lVar6 + uVar11 * 8) =
                 *(undefined8 *)(lVar6 + (ulonglong)(uVar9 - 1) * 8);
            uVar9 = *(int *)(param_1 + 0x100) - 1;
            *(uint *)(param_1 + 0x100) = uVar9;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      goto LAB_140403d22;
    }
    pcVar10 = "Could not reset command list";
  }
  s_error_code_s_0x08lx(param_1,pcVar10,iVar3);
  uVar7 = 0;
LAB_140403d22:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_88);
  }
  return uVar7;
}

