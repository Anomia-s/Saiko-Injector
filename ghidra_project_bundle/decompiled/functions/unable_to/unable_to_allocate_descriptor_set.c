/**
 * Function: unable_to_allocate_descriptor_set
 * Address:  140438da0
 * Signature: undefined unable_to_allocate_descriptor_set(void)
 * Body size: 936 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
unable_to_allocate_descriptor_set
          (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,undefined8 param_5,
          longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  longlong local_d0 [4];
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_168;
  lVar2 = *(longlong *)(param_1 + 0x2c0);
  uVar8 = *(uint *)(lVar2 + 0x2830);
  uVar4 = (ulonglong)*(uint *)(lVar2 + 0x690);
  local_e8 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x2820) + uVar4 * 8) + (ulonglong)uVar8 * 8);
  uStack_f0 = 0;
  local_f8 = 0x22;
  uStack_e0 = 1;
  local_d8 = local_d0;
  local_100 = 0;
  local_d0[0] = param_2;
  if (*(uint *)(lVar2 + 0x2834) < 0x1000) {
    iVar3 = (*DAT_1416f1550)(*(undefined8 *)(lVar2 + 0x660),&local_f8,&local_100);
    if (iVar3 != 0) {
      uVar4 = (ulonglong)*(uint *)(lVar2 + 0x690);
      goto LAB_140438e87;
    }
    iVar3 = *(int *)(lVar2 + 0x2834) + 1;
LAB_140438fbb:
    *(int *)(lVar2 + 0x2834) = iVar3;
    local_118 = 0;
    lStack_110 = 0;
    local_108 = 0;
    local_128 = param_5;
    local_120 = 0x20;
    local_d0[2] = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    plStack_60 = (longlong *)0x0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_d0[1] = 0x23;
    local_d0[3] = local_100;
    uStack_b0 = 1;
    local_a8 = 0x600000001;
    local_98 = &local_130;
    uVar7 = 1;
    if (param_6 != 0 && param_3 != 0) {
      local_88 = 0x23;
      local_78 = local_100;
      uStack_68 = 1;
      uStack_64 = 1;
      plStack_60 = &local_118;
      if (local_d0[0] == *(longlong *)(lVar2 + 0x748)) {
        local_118 = param_3;
      }
      lStack_110 = param_6;
      local_108 = 5;
      uVar7 = 2;
    }
    uStack_6c = 0;
    local_148 = 0;
    local_130 = param_4;
    (*DAT_1416f1558)(*(undefined8 *)(lVar2 + 0x660),uVar7,local_d0 + 1,0);
    uVar7 = local_100;
  }
  else {
LAB_140438e87:
    uVar8 = uVar8 + 1;
    if (uVar8 < *(uint *)(*(longlong *)(lVar2 + 0x2828) + uVar4 * 4)) {
      local_e8 = *(undefined8 *)
                  (*(longlong *)(*(longlong *)(lVar2 + 0x2820) + uVar4 * 8) + (ulonglong)uVar8 * 8);
      iVar3 = (*DAT_1416f1550)(*(undefined8 *)(lVar2 + 0x660),&local_f8,&local_100);
      if (iVar3 == 0) {
        *(uint *)(lVar2 + 0x2830) = uVar8;
        iVar3 = 1;
        goto LAB_140438fbb;
      }
      FUN_1400fbed0("Unable to allocate descriptor set");
    }
    else {
      lVar5 = sdl_render_vulkan_debug(*(undefined8 *)(lVar2 + 0x660));
      if (lVar5 != 0) {
        piVar1 = (int *)(*(longlong *)(lVar2 + 0x2828) + (ulonglong)*(uint *)(lVar2 + 0x690) * 4);
        *piVar1 = *piVar1 + 1;
        lVar6 = FUN_140160cc0(*(undefined8 *)
                               (*(longlong *)(lVar2 + 0x2820) +
                               (ulonglong)*(uint *)(lVar2 + 0x690) * 8),
                              (ulonglong)
                              *(uint *)(*(longlong *)(lVar2 + 0x2828) +
                                       (ulonglong)*(uint *)(lVar2 + 0x690) * 4) << 3);
        *(longlong *)
         (lVar6 + (ulonglong)
                  (*(int *)(*(longlong *)(lVar2 + 0x2828) + (ulonglong)*(uint *)(lVar2 + 0x690) * 4)
                  - 1) * 8) = lVar5;
        *(longlong *)(*(longlong *)(lVar2 + 0x2820) + (ulonglong)*(uint *)(lVar2 + 0x690) * 8) =
             lVar6;
        *(uint *)(lVar2 + 0x2830) = uVar8;
        *(undefined4 *)(lVar2 + 0x2834) = 0;
        local_140 = param_6;
        local_148 = param_5;
        uVar7 = unable_to_allocate_descriptor_set(param_1,local_d0[0],param_3,param_4);
        goto LAB_14043910d;
      }
    }
    uVar7 = 0;
  }
LAB_14043910d:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_168)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_168);
}

