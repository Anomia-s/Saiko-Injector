/**
 * Function: failed_to_convert_command_list
 * Address:  1403fe0c0
 * Signature: undefined failed_to_convert_command_list(void)
 * Body size: 1270 bytes
 */


ulonglong failed_to_convert_command_list(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  char *pcVar11;
  longlong **unaff_RBX;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x50);
  FUN_1401552a0(*(undefined8 *)(lVar1 + 0x1e8));
  if (*(longlong **)(param_1 + 0x360) != (longlong *)0x0) {
    plVar2 = *(longlong **)(**(longlong **)(param_1 + 0x360) + 0x10);
    (**(code **)(*plVar2 + 0x48))(plVar2,0,0);
    *(undefined8 *)(**(longlong **)(param_1 + 0x360) + 0x80) = 0;
  }
  if (*(longlong **)(param_1 + 0x500) != (longlong *)0x0) {
    plVar2 = *(longlong **)(**(longlong **)(param_1 + 0x500) + 0x10);
    (**(code **)(*plVar2 + 0x48))(plVar2,0,0);
    *(undefined8 *)(**(longlong **)(param_1 + 0x500) + 0x80) = 0;
  }
  if (*(longlong **)(param_1 + 0x368) != (longlong *)0x0) {
    plVar2 = *(longlong **)(**(longlong **)(param_1 + 0x368) + 0x10);
    (**(code **)(*plVar2 + 0x48))(plVar2,0,0);
    *(undefined8 *)(**(longlong **)(param_1 + 0x368) + 0x80) = 0;
  }
  if (*(longlong **)(param_1 + 0x508) != (longlong *)0x0) {
    plVar2 = *(longlong **)(**(longlong **)(param_1 + 0x508) + 0x10);
    (**(code **)(*plVar2 + 0x48))(plVar2,0,0);
    *(undefined8 *)(**(longlong **)(param_1 + 0x508) + 0x80) = 0;
  }
  if (*(longlong **)(param_1 + 0x370) != (longlong *)0x0) {
    plVar2 = *(longlong **)(**(longlong **)(param_1 + 0x370) + 0x10);
    (**(code **)(*plVar2 + 0x48))(plVar2,0,0);
    *(undefined8 *)(**(longlong **)(param_1 + 0x370) + 0x80) = 0;
  }
  if (*(longlong **)(param_1 + 0x510) != (longlong *)0x0) {
    plVar2 = *(longlong **)(**(longlong **)(param_1 + 0x510) + 0x10);
    (**(code **)(*plVar2 + 0x48))(plVar2,0,0);
    *(undefined8 *)(**(longlong **)(param_1 + 0x510) + 0x80) = 0;
  }
  if (*(longlong **)(param_1 + 0x378) != (longlong *)0x0) {
    plVar2 = *(longlong **)(**(longlong **)(param_1 + 0x378) + 0x10);
    (**(code **)(*plVar2 + 0x48))(plVar2,0,0);
    *(undefined8 *)(**(longlong **)(param_1 + 0x378) + 0x80) = 0;
  }
  if (*(longlong **)(param_1 + 0x518) != (longlong *)0x0) {
    plVar2 = *(longlong **)(**(longlong **)(param_1 + 0x518) + 0x10);
    (**(code **)(*plVar2 + 0x48))(plVar2,0,0);
    *(undefined8 *)(**(longlong **)(param_1 + 0x518) + 0x80) = 0;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    lVar13 = 8;
    uVar14 = 0;
    unaff_RBX = &local_68;
    do {
      plVar2 = *(longlong **)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x78) + -8 + lVar13) + 0x48 +
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x78) + lVar13) * 0x50) + 0x10);
      local_68 = (longlong *)0x0;
      local_54 = 4;
      local_60 = *(undefined8 *)(*plVar2 + 0x20);
      local_58 = *(undefined4 *)((longlong)plVar2 + 0x14);
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0xd0))
                (*(longlong **)(param_1 + 0x60),1,unaff_RBX);
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x10;
    } while (uVar14 < *(uint *)(param_1 + 0x80));
  }
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x48))();
  if (iVar6 < 0) {
    pcVar11 = "Failed to close command list!";
LAB_1403fe3fd:
    s_error_code_s_0x08lx(lVar1,pcVar11,iVar6);
  }
  else {
    iVar6 = (**(code **)**(undefined8 **)(param_1 + 0x60))
                      (*(undefined8 **)(param_1 + 0x60),&DAT_140e14dc0,&local_68);
    if (iVar6 < 0) {
      FUN_1401552c0(*(undefined8 *)(lVar1 + 0x1e8));
      pcVar11 = "Failed to convert command list!";
      goto LAB_1403fe3fd;
    }
    (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x50))(*(longlong **)(lVar1 + 0x70),1,&local_68);
    (**(code **)(*local_68 + 0x10))();
    puVar8 = (undefined8 *)failed_to_create_fence(lVar1);
    *(undefined8 **)(param_1 + 0x68) = puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      iVar6 = (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x70))
                        (*(longlong **)(lVar1 + 0x70),*puVar8,1);
      if (-1 < iVar6) {
        uVar10 = *(uint *)(lVar1 + 0x100);
        uVar7 = uVar10 + 1;
        if (uVar7 < *(uint *)(lVar1 + 0x104)) {
          lVar13 = *(longlong *)(lVar1 + 0xf8);
        }
        else {
          *(uint *)(lVar1 + 0x104) = uVar7;
          lVar13 = FUN_140160cc0(*(undefined8 *)(lVar1 + 0xf8),(ulonglong)uVar7 << 3);
          *(longlong *)(lVar1 + 0xf8) = lVar13;
          uVar10 = *(uint *)(lVar1 + 0x100);
        }
        *(longlong *)(lVar13 + (ulonglong)uVar10 * 8) = param_1;
        uVar7 = *(uint *)(lVar1 + 0x100);
        *(uint *)(lVar1 + 0x100) = uVar7 + 1;
        if (*(int *)(param_1 + 0x80) == 0) {
          uVar14 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
        }
        else {
          uVar14 = 1;
          lVar13 = 8;
          uVar12 = 0;
          do {
            lVar9 = *(longlong *)(param_1 + 0x78);
            lVar3 = *(longlong *)(lVar9 + -8 + lVar13);
            iVar6 = (uint)(*(int *)(lVar3 + 0x10) == 1) << 9;
            if (*(int *)(lVar1 + 0x40) == 0) {
              iVar6 = 0;
            }
            iVar6 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x40))
                              (*(longlong **)(lVar3 + 8),*(int *)(lVar3 + 0x10) - 3U < 0xfffffffe,
                               iVar6);
            if (iVar6 < 0) {
              uVar14 = 0;
            }
            (**(code **)(**(longlong **)
                           (*(longlong *)
                             (lVar3 + 0x48 + (ulonglong)*(uint *)(lVar9 + lVar13) * 0x50) + 0x20) +
                        0x10))();
            lVar9 = *(longlong *)(param_1 + 0x68);
            *(longlong *)(lVar3 + 0x118 + (ulonglong)*(uint *)(lVar3 + 0x1c) * 8) = lVar9;
            FUN_140106160(lVar9 + 0x10);
            *(uint *)(lVar3 + 0x1c) = (*(int *)(lVar3 + 0x1c) + 1U) % *(uint *)(lVar1 + 0x7c);
            uVar12 = uVar12 + 1;
            lVar13 = lVar13 + 0x10;
          } while (uVar12 < *(uint *)(param_1 + 0x80));
          uVar7 = *(int *)(lVar1 + 0x100) - 1;
        }
        if (-1 < (int)uVar7) {
          lVar13 = (ulonglong)uVar7 + 1;
          do {
            lVar9 = (**(code **)(*(longlong *)
                                  **(undefined8 **)
                                    (*(longlong *)(*(longlong *)(lVar1 + 0xf8) + -8 + lVar13 * 8) +
                                    0x68) + 0x40))();
            if (lVar9 == 1) {
              bVar5 = could_not_reset_command_list
                                (lVar1,*(undefined8 *)
                                        (*(longlong *)(lVar1 + 0xf8) + -8 + lVar13 * 8),0);
              uVar14 = CONCAT71((int7)(uVar14 >> 8),(char)uVar14 != '\0' & bVar5);
            }
            lVar9 = lVar13 + -1;
            bVar4 = 0 < lVar13;
            lVar13 = lVar9;
          } while (lVar9 != 0 && bVar4);
        }
        FUN_140403d60(lVar1);
        FUN_1401552c0(*(undefined8 *)(lVar1 + 0x1e8));
        goto LAB_1403fe404;
      }
      FUN_1401552c0(*(undefined8 *)(lVar1 + 0x1e8));
      pcVar11 = "Failed to enqueue fence signal!";
      goto LAB_1403fe3fd;
    }
    FUN_1401552c0(*(undefined8 *)(lVar1 + 0x1e8));
  }
  uVar14 = 0;
LAB_1403fe404:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_88)) {
    return uVar14 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_88);
}

