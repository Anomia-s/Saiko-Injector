/**
 * Function: spot_shadow_binding_set
 * Address:  1404e31c0
 * Signature: undefined spot_shadow_binding_set(void)
 * Body size: 1204 bytes
 */


void spot_shadow_binding_set
               (longlong *param_1,longlong *param_2,undefined8 param_3,uint param_4,longlong param_5
               )

{
  undefined8 *puVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  ulonglong local_8c8;
  longlong lStack_8c0;
  ulonglong uStack_8b8;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  int *piStack_c0;
  int *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [52];
  uint local_74;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  if (param_4 != 0) {
    uVar8 = 8;
    if (param_4 < 8) {
      uVar8 = param_4;
    }
    local_d8 = param_2;
    local_d0 = param_3;
    if (((char)param_1[0xb0] != '\x01') || (param_1[0xb1] != param_5)) {
      if (param_1[0x97] == 0) {
        return;
      }
      if (param_1[0x95] == 0) {
        return;
      }
      if (param_5 == 0) {
        return;
      }
      if (param_1[0x11] == 0) {
        return;
      }
      lVar10 = 0;
      local_74 = uVar8;
      do {
        local_c8 = 0;
        piStack_c0 = (int *)0x0;
        local_b8 = (int *)0x0;
        local_b0 = 1;
        uStack_8d0 = 0;
        local_8d8 = (longlong *)param_5;
        lStack_8c0 = 0;
        uStack_8b8 = 0xffffffffffffffff;
        local_8c8 = 5;
        FUN_140197fb0(&local_c8,0,&local_8d8);
        lVar5 = param_1[0x11];
        uStack_8d0 = 1;
        lStack_8c0 = 0;
        uStack_8b8 = 0xffffffffffffffff;
        local_8c8 = 5;
        local_8d8 = (longlong *)lVar5;
        if (piStack_c0 == local_b8) {
          FUN_140197fb0(&local_c8,piStack_c0,&local_8d8);
        }
        else {
          piStack_c0[8] = -1;
          piStack_c0[9] = -1;
          local_8d8._0_4_ = (int)lVar5;
          local_8d8._4_4_ = (int)((ulonglong)lVar5 >> 0x20);
          piStack_c0[4] = 5;
          piStack_c0[5] = 0;
          piStack_c0[6] = 0;
          piStack_c0[7] = 0;
          *piStack_c0 = (int)local_8d8;
          piStack_c0[1] = local_8d8._4_4_;
          piStack_c0[2] = 1;
          piStack_c0[3] = 0;
          piStack_c0 = piStack_c0 + 10;
        }
        uVar6 = (ulonglong)*(uint *)((longlong)param_1 + 0x4b4);
        plVar2 = (longlong *)param_1[0x95];
        if (plVar2 == (longlong *)0x0) {
          bVar3 = 9;
        }
        else {
          lVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
          bVar3 = *(char *)(lVar5 + 0x3b) + 9;
        }
        lStack_8c0 = lVar10 * uVar6;
        uStack_8d0 = 0;
        local_8c8 = (ulonglong)bVar3;
        local_8d8 = plVar2;
        uStack_8b8 = uVar6;
        if (piStack_c0 == local_b8) {
          FUN_140197fb0(&local_c8,piStack_c0,&local_8d8);
        }
        else {
          *(ulonglong *)(piStack_c0 + 8) = uVar6;
          local_8d8._0_4_ = (int)plVar2;
          local_8d8._4_4_ = (int)((ulonglong)plVar2 >> 0x20);
          *(ulonglong *)(piStack_c0 + 4) = local_8c8;
          *(longlong *)(piStack_c0 + 6) = lStack_8c0;
          *piStack_c0 = (int)local_8d8;
          piStack_c0[1] = local_8d8._4_4_;
          piStack_c0[2] = 0;
          piStack_c0[3] = 0;
          piStack_c0 = piStack_c0 + 10;
        }
        cVar4 = FUN_1404e4810(*(undefined8 *)(*param_1 + 0x18));
        if (local_c8 != 0) {
          lVar5 = local_c8;
          if ((0xfff < (ulonglong)((longlong)local_b8 - local_c8)) &&
             (lVar5 = *(longlong *)(local_c8 + -8), 0x1f < (ulonglong)((local_c8 + -8) - lVar5))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_140b68ba8(lVar5);
        }
        if (cVar4 == '\0') {
          return;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 8);
      param_1[0xb1] = param_5;
      *(undefined1 *)(param_1 + 0xb0) = 1;
      uVar8 = local_74;
    }
    FUN_1401a3690(&local_c8,*param_1,"Spot Shadow Upload",1000,
                  "/opt/actions-runner/_work/Platform/Platform/graphics/intern/ShadowMap.cpp",
                  "gfx_sm_begin_spot_shadows");
    plVar2 = local_d8;
    (**(code **)(*local_d8 + 0x80))(local_d8,param_1[0x11],local_d0,(ulonglong)uVar8 << 6,0);
    uVar12 = 0;
    piVar7 = (int *)&local_8d8;
    memset(piVar7,0,0x800);
    uVar9 = (ulonglong)*(uint *)((longlong)param_1 + 0x4b4);
    uVar6 = (ulonglong)(uVar8 & 3);
    if (3 < param_4) {
      uVar12 = 0;
      do {
        iVar11 = (int)uVar12;
        *piVar7 = iVar11;
        piVar7[1] = 0;
        piVar7[2] = 0;
        piVar7[3] = 0;
        piVar7[4] = 0;
        piVar7[5] = 0;
        piVar7[6] = 0;
        piVar7[7] = 0x3f800000;
        *(int *)((longlong)piVar7 + uVar9) = iVar11 + 1;
        puVar1 = (undefined8 *)((longlong)piVar7 + uVar9 + 4);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((longlong)piVar7 + uVar9 + 0x14) = 0;
        *(undefined4 *)((longlong)piVar7 + uVar9 + 0x1c) = 0x3f800000;
        *(int *)((longlong)piVar7 + uVar9 * 2) = iVar11 + 2;
        puVar1 = (undefined8 *)((longlong)piVar7 + uVar9 * 2 + 4);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((longlong)piVar7 + uVar9 * 2 + 0x14) = 0;
        *(undefined4 *)((longlong)piVar7 + uVar9 * 2 + 0x1c) = 0x3f800000;
        *(int *)((longlong)piVar7 + uVar9 * 3) = iVar11 + 3;
        puVar1 = (undefined8 *)((longlong)piVar7 + uVar9 * 3 + 4);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((longlong)piVar7 + uVar9 * 3 + 0x14) = 0;
        *(undefined4 *)((longlong)piVar7 + uVar9 * 3 + 0x1c) = 0x3f800000;
        uVar12 = uVar12 + 4;
        piVar7 = piVar7 + uVar9;
      } while (uVar12 != (uVar8 & 0xc));
    }
    if (uVar6 != 0) {
      piVar7 = (int *)((longlong)&local_8d8 + uVar12 * uVar9);
      do {
        *piVar7 = (int)uVar12;
        piVar7[1] = 0;
        piVar7[2] = 0;
        piVar7[3] = 0;
        piVar7[4] = 0;
        piVar7[5] = 0;
        piVar7[6] = 0;
        piVar7[7] = 0x3f800000;
        uVar12 = (ulonglong)((int)uVar12 + 1);
        piVar7 = (int *)((longlong)piVar7 + uVar9);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    (**(code **)(*plVar2 + 0x80))(plVar2,param_1[0x95],&local_8d8,uVar9 * uVar8,0);
    FUN_1401a43a0(local_a8);
    FUN_1401a44e0(&local_c8);
  }
  return;
}

