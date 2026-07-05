/**
 * Function: could_not_resize_swapchain_buffers
 * Address:  1404030a0
 * Signature: undefined could_not_resize_swapchain_buffers(void)
 * Body size: 1220 bytes
 */


undefined8
could_not_resize_swapchain_buffers
          (char param_1,longlong param_2,undefined8 param_3,longlong *param_4,undefined4 *param_5,
          undefined4 *param_6)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  char *pcVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong *plVar26;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_90;
  char local_81;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  lVar25 = *(longlong *)(param_2 + 0x50);
  *param_4 = 0;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  uVar12 = video_subsystem_has_not_been_initialized(param_3);
  lVar15 = FUN_14014ff10(uVar12,"SDL_GPUD3D12WindowPropertyData",0);
  if (lVar15 == 0) {
    if (*(char *)(lVar25 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,"Cannot acquire swapchain texture from an unclaimed window!");
    }
    FUN_1400fbed0(&DAT_141339891,"Cannot acquire swapchain texture from an unclaimed window!");
    uVar16 = 0;
    goto LAB_14040353d;
  }
  if (*(char *)(lVar15 + 0x138) == '\x01') {
    local_81 = param_1;
    local_80 = param_4;
    setting_fence_event_failed(lVar25);
    if (*(int *)(lVar15 + 0x110) != 0) {
      plVar22 = (longlong *)(lVar15 + 0x48);
      uVar23 = 0;
      do {
        lVar24 = *plVar22;
        lVar17 = *(longlong *)(lVar24 + 0x28);
        if (lVar17 != 0) {
          FUN_1401552a0(*(undefined8 *)(lVar17 + 0x20));
          lVar2 = *(longlong *)(lVar17 + 0x18);
          lVar18 = (ulonglong)*(uint *)(lVar17 + 0x14) * 0x20;
          uVar12 = *(undefined4 *)(lVar24 + 0x28);
          uVar4 = *(undefined4 *)(lVar24 + 0x2c);
          uVar5 = *(undefined4 *)(lVar24 + 0x30);
          uVar6 = *(undefined4 *)(lVar24 + 0x34);
          uVar7 = *(undefined4 *)(lVar24 + 0x3c);
          uVar8 = *(undefined4 *)(lVar24 + 0x40);
          uVar9 = *(undefined4 *)(lVar24 + 0x44);
          puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar18);
          *puVar1 = *(undefined4 *)(lVar24 + 0x38);
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          puVar1 = (undefined4 *)(lVar2 + lVar18);
          *puVar1 = uVar12;
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          *(int *)(lVar17 + 0x14) = *(int *)(lVar17 + 0x14) + 1;
          FUN_1401552c0(*(undefined8 *)(lVar17 + 0x20));
          lVar24 = *plVar22;
        }
        plVar26 = *(longlong **)(*(longlong *)(lVar24 + 0x10) + 0x18);
        lVar24 = *plVar26;
        if (lVar24 != 0) {
          FUN_1401552a0(*(undefined8 *)(lVar24 + 0x20));
          lVar17 = *(longlong *)(lVar24 + 0x18);
          lVar19 = (ulonglong)*(uint *)(lVar24 + 0x14) * 0x20;
          lVar2 = *plVar26;
          uVar12 = *(undefined4 *)((longlong)plVar26 + 4);
          lVar18 = plVar26[1];
          uVar4 = *(undefined4 *)((longlong)plVar26 + 0xc);
          uVar5 = *(undefined4 *)((longlong)plVar26 + 0x14);
          lVar10 = plVar26[3];
          uVar6 = *(undefined4 *)((longlong)plVar26 + 0x1c);
          puVar1 = (undefined4 *)(lVar17 + 0x10 + lVar19);
          *puVar1 = (int)plVar26[2];
          puVar1[1] = uVar5;
          puVar1[2] = (int)lVar10;
          puVar1[3] = uVar6;
          puVar1 = (undefined4 *)(lVar17 + lVar19);
          *puVar1 = (int)lVar2;
          puVar1[1] = uVar12;
          puVar1[2] = (int)lVar18;
          puVar1[3] = uVar4;
          *(int *)(lVar24 + 0x14) = *(int *)(lVar24 + 0x14) + 1;
          FUN_1401552c0(*(undefined8 *)(lVar24 + 0x20));
          plVar26 = *(longlong **)(*(longlong *)(*plVar22 + 0x10) + 0x18);
        }
        FUN_140160cf0(plVar26);
        FUN_140160cf0(*(undefined8 *)(*plVar22 + 0x10));
        FUN_140160cf0(*plVar22);
        FUN_140160cf0(plVar22[1]);
        uVar23 = uVar23 + 1;
        plVar22 = plVar22 + 10;
      } while (uVar23 < *(uint *)(lVar15 + 0x110));
    }
    local_90 = (uint)(*(int *)(lVar25 + 0x40) != 0) << 0xb;
    local_98 = (ulonglong)local_98._4_4_ << 0x20;
    iVar13 = (**(code **)(**(longlong **)(lVar15 + 8) + 0x68))(*(longlong **)(lVar15 + 8),0,0,0);
    if (-1 < iVar13) {
      if (*(int *)(lVar15 + 0x110) != 0) {
        lVar24 = lVar15 + 0x20;
        uVar23 = 0;
        do {
          local_98 = lVar24;
          cVar11 = could_not_get_buffer_from_swapchain
                             (lVar25,*(undefined8 *)(lVar15 + 8),*(undefined4 *)(lVar15 + 0x14),
                              uVar23 & 0xffffffff);
          if (cVar11 == '\0') goto LAB_140403387;
          uVar23 = uVar23 + 1;
          lVar24 = lVar24 + 0x50;
        } while (uVar23 < *(uint *)(lVar15 + 0x110));
      }
      (**(code **)(**(longlong **)(lVar15 + 8) + 0x90))(*(longlong **)(lVar15 + 8),&local_78);
      *(undefined8 *)(lVar15 + 0x130) = local_78;
      *(undefined1 *)(lVar15 + 0x138) = 0;
      param_4 = local_80;
      param_1 = local_81;
      goto LAB_140403331;
    }
    pcVar21 = "Could not resize swapchain buffers";
  }
  else {
LAB_140403331:
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)(lVar15 + 0x130);
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = *(undefined4 *)(lVar15 + 0x134);
    }
    puVar3 = *(undefined8 **)(lVar15 + 0x118 + (ulonglong)*(uint *)(lVar15 + 0x1c) * 8);
    if (puVar3 != (undefined8 *)0x0) {
      if (param_1 == '\0') {
        lVar24 = (**(code **)(*(longlong *)*puVar3 + 0x40))();
        uVar16 = 1;
        if (lVar24 != 1) goto LAB_14040353d;
      }
      else {
        cVar11 = setting_fence_event_failed
                           (lVar25,1,lVar15 + (ulonglong)*(uint *)(lVar15 + 0x1c) * 8 + 0x118,1);
        if (cVar11 == '\0') {
LAB_140403387:
          uVar16 = 0;
          goto LAB_14040353d;
        }
      }
      lVar24 = *(longlong *)(lVar15 + 0x118 + (ulonglong)*(uint *)(lVar15 + 0x1c) * 8);
      iVar13 = FUN_140106160(lVar24 + 0x10,0xffffffff);
      if (iVar13 == 1) {
        FUN_1401552a0(*(undefined8 *)(lVar25 + 0x1f8));
        uVar14 = *(uint *)(lVar25 + 0x130);
        if (uVar14 + 1 < *(uint *)(lVar25 + 0x134)) {
          lVar17 = *(longlong *)(lVar25 + 0x128);
        }
        else {
          uVar14 = *(uint *)(lVar25 + 0x134) * 2;
          *(uint *)(lVar25 + 0x134) = uVar14;
          lVar17 = FUN_140160cc0(*(undefined8 *)(lVar25 + 0x128),(ulonglong)uVar14 << 3);
          *(longlong *)(lVar25 + 0x128) = lVar17;
          uVar14 = *(uint *)(lVar25 + 0x130);
        }
        *(longlong *)(lVar17 + (ulonglong)uVar14 * 8) = lVar24;
        *(int *)(lVar25 + 0x130) = *(int *)(lVar25 + 0x130) + 1;
        FUN_1401552c0(*(undefined8 *)(lVar25 + 0x1f8));
      }
      *(undefined8 *)(lVar15 + 0x118 + (ulonglong)*(uint *)(lVar15 + 0x1c) * 8) = 0;
    }
    uVar14 = (**(code **)(**(longlong **)(lVar15 + 8) + 0x120))();
    iVar13 = (**(code **)(**(longlong **)(lVar15 + 8) + 0x48))
                       (*(longlong **)(lVar15 + 8),uVar14,&DAT_140e14d30,
                        *(longlong *)(lVar15 + 0x48 + (ulonglong)uVar14 * 0x50) + 0x20);
    if (-1 < iVar13) {
      lVar25 = (ulonglong)uVar14 * 0x50 + lVar15;
      uVar20 = *(uint *)(param_2 + 0x80);
      if (uVar20 == *(uint *)(param_2 + 0x84)) {
        *(uint *)(param_2 + 0x84) = uVar20 + 1;
        lVar24 = FUN_140160cc0(*(undefined8 *)(param_2 + 0x78),(ulonglong)(uVar20 + 1) << 4);
        *(longlong *)(param_2 + 0x78) = lVar24;
        uVar20 = *(uint *)(param_2 + 0x80);
      }
      else {
        lVar24 = *(longlong *)(param_2 + 0x78);
      }
      *(longlong *)(lVar24 + (ulonglong)uVar20 * 0x10) = lVar15;
      *(uint *)(*(longlong *)(param_2 + 0x78) + 8 + (ulonglong)*(uint *)(param_2 + 0x80) * 0x10) =
           uVar14;
      *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
      local_78 = 0;
      local_64 = 0x400000000;
      local_70 = *(undefined8 *)(*(longlong *)(lVar25 + 0x48) + 0x20);
      local_68 = 0;
      (**(code **)(**(longlong **)(param_2 + 0x60) + 0xd0))
                (*(longlong **)(param_2 + 0x60),1,&local_78);
      *param_4 = lVar25 + 0x20;
      uVar16 = 1;
      goto LAB_14040353d;
    }
    pcVar21 = "Could not acquire swapchain!";
  }
  s_error_code_s_0x08lx(lVar25,pcVar21,iVar13);
  uVar16 = 0;
LAB_14040353d:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_b8)) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_b8);
}

