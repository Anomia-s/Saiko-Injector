/**
 * Function: point_shadow_binding_set
 * Address:  1404e2c30
 * Signature: undefined point_shadow_binding_set(void)
 * Body size: 1229 bytes
 */


bool point_shadow_binding_set
               (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong param_5,char param_6)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong local_b8;
  undefined4 *puStack_b0;
  undefined4 *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  longlong lStack_80;
  ulonglong uStack_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  if (param_6 == '\0') {
    if (((char)param_1[0x9d] != '\x01') || (param_1[0x9e] != param_2)) {
      if (param_1[0x97] == 0) {
        return false;
      }
      if (param_1[0x95] == 0) {
        return false;
      }
      if (param_2 == 0) {
        return false;
      }
      if (param_1[0x11] == 0) {
        return false;
      }
      if ((int)param_1[1] != 0) {
        uVar7 = 0;
        do {
          local_b8 = 0;
          puStack_b0 = (undefined4 *)0x0;
          local_a8 = (undefined4 *)0x0;
          local_a0 = 1;
          uStack_90 = 0;
          lStack_80 = 0;
          uStack_78 = 0xffffffffffffffff;
          local_88 = 5;
          local_98 = (longlong *)param_2;
          FUN_140197fb0(&local_b8,0,&local_98);
          lVar6 = param_1[0x11];
          uStack_90 = 1;
          lStack_80 = 0;
          uStack_78 = 0xffffffffffffffff;
          local_88 = 5;
          local_98 = (longlong *)lVar6;
          if (puStack_b0 == local_a8) {
            FUN_140197fb0(&local_b8,puStack_b0,&local_98);
          }
          else {
            *(undefined8 *)(puStack_b0 + 8) = 0xffffffffffffffff;
            local_98._0_4_ = (undefined4)lVar6;
            local_98._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
            *(undefined8 *)(puStack_b0 + 4) = 5;
            *(undefined8 *)(puStack_b0 + 6) = 0;
            *puStack_b0 = (undefined4)local_98;
            puStack_b0[1] = local_98._4_4_;
            puStack_b0[2] = 1;
            puStack_b0[3] = 0;
            puStack_b0 = puStack_b0 + 10;
          }
          uVar5 = (ulonglong)*(uint *)((longlong)param_1 + 0x4b4);
          plVar1 = (longlong *)param_1[0x95];
          if (plVar1 == (longlong *)0x0) {
            bVar2 = 9;
          }
          else {
            lVar6 = (**(code **)(*plVar1 + 0x28))(plVar1);
            bVar2 = *(char *)(lVar6 + 0x3b) + 9;
          }
          lStack_80 = uVar7 * uVar5;
          uStack_90 = 0;
          local_88 = (ulonglong)bVar2;
          local_98 = plVar1;
          uStack_78 = uVar5;
          if (puStack_b0 == local_a8) {
            FUN_140197fb0(&local_b8,puStack_b0,&local_98);
          }
          else {
            *(ulonglong *)(puStack_b0 + 8) = uVar5;
            local_98._0_4_ = SUB84(plVar1,0);
            local_98._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
            *(ulonglong *)(puStack_b0 + 4) = local_88;
            *(longlong *)(puStack_b0 + 6) = lStack_80;
            *puStack_b0 = (undefined4)local_98;
            puStack_b0[1] = local_98._4_4_;
            puStack_b0[2] = 0;
            puStack_b0[3] = 0;
            puStack_b0 = puStack_b0 + 10;
          }
          cVar3 = FUN_1404e4810(*(undefined8 *)(*param_1 + 0x18));
          if (local_b8 != 0) {
            lVar6 = local_b8;
            if ((0xfff < (ulonglong)((longlong)local_a8 - local_b8)) &&
               (lVar6 = *(longlong *)(local_b8 + -8), 0x1f < (ulonglong)((local_b8 + -8) - lVar6)))
            goto LAB_1404e3102;
            thunk_FUN_140b68ba8(lVar6);
          }
          if (cVar3 == '\0') {
            return false;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(param_1 + 1));
      }
      param_1[0x9e] = param_2;
      *(undefined1 *)(param_1 + 0x9d) = 1;
    }
  }
  else if (((char)param_1[0xa6] != '\x01') || (param_1[0xa7] != param_2)) {
    if ((param_1[0x97] == 0) || (param_1[0x95] == 0)) {
      return false;
    }
    if (param_2 == 0) {
      return false;
    }
    if (param_1[0x11] == 0) {
      return false;
    }
    lVar6 = 0;
    do {
      local_b8 = 0;
      puStack_b0 = (undefined4 *)0x0;
      local_a8 = (undefined4 *)0x0;
      local_a0 = 1;
      uStack_90 = 0;
      lStack_80 = 0;
      uStack_78 = 0xffffffffffffffff;
      local_88 = 5;
      local_98 = (longlong *)param_2;
      FUN_140197fb0(&local_b8,0,&local_98);
      lVar4 = param_1[0x11];
      uStack_90 = 1;
      lStack_80 = 0;
      uStack_78 = 0xffffffffffffffff;
      local_88 = 5;
      local_98 = (longlong *)lVar4;
      if (puStack_b0 == local_a8) {
        FUN_140197fb0(&local_b8,puStack_b0,&local_98);
      }
      else {
        *(undefined8 *)(puStack_b0 + 8) = 0xffffffffffffffff;
        local_98._0_4_ = (undefined4)lVar4;
        local_98._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
        *(undefined8 *)(puStack_b0 + 4) = 5;
        *(undefined8 *)(puStack_b0 + 6) = 0;
        *puStack_b0 = (undefined4)local_98;
        puStack_b0[1] = local_98._4_4_;
        puStack_b0[2] = 1;
        puStack_b0[3] = 0;
        puStack_b0 = puStack_b0 + 10;
      }
      uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0x4b4);
      plVar1 = (longlong *)param_1[0x95];
      if (plVar1 == (longlong *)0x0) {
        bVar2 = 9;
      }
      else {
        lVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
        bVar2 = *(char *)(lVar4 + 0x3b) + 9;
      }
      lStack_80 = lVar6 * uVar7;
      uStack_90 = 0;
      local_88 = (ulonglong)bVar2;
      local_98 = plVar1;
      uStack_78 = uVar7;
      if (puStack_b0 == local_a8) {
        FUN_140197fb0(&local_b8,puStack_b0,&local_98);
      }
      else {
        *(ulonglong *)(puStack_b0 + 8) = uVar7;
        local_98._0_4_ = SUB84(plVar1,0);
        local_98._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
        *(ulonglong *)(puStack_b0 + 4) = local_88;
        *(longlong *)(puStack_b0 + 6) = lStack_80;
        *puStack_b0 = (undefined4)local_98;
        puStack_b0[1] = local_98._4_4_;
        puStack_b0[2] = 0;
        puStack_b0[3] = 0;
        puStack_b0 = puStack_b0 + 10;
      }
      cVar3 = FUN_1404e4810(*(undefined8 *)(*param_1 + 0x18));
      if (local_b8 != 0) {
        lVar4 = local_b8;
        if ((0xfff < (ulonglong)((longlong)local_a8 - local_b8)) &&
           (lVar4 = *(longlong *)(local_b8 + -8), 0x1f < (ulonglong)((local_b8 + -8) - lVar4))) {
LAB_1404e3102:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_140b68ba8(lVar4);
      }
      if (cVar3 == '\0') {
        return false;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 6);
    param_1[0xa7] = param_2;
    *(undefined1 *)(param_1 + 0xa6) = 1;
  }
  return param_5 != 0 && (param_4 != 0 && param_3 != 0);
}

