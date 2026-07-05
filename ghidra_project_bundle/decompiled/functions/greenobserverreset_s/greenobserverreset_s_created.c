/**
 * Function: greenobserverreset_s_created
 * Address:  1400c32a0
 * Signature: undefined greenobserverreset_s_created(void)
 * Body size: 711 bytes
 */


longlong greenobserverreset_s_created(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_2 + 8);
  if (lVar2 == 0) {
    if (*(char *)(param_2 + 0x9d9) == '\0') {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_38 = 0;
      lVar2 = s_is_invalid_for_ecs_entity_desc_t_add_expr(param_1,&local_88);
      if (lVar2 != 0) goto LAB_1400c32d3;
    }
    lVar2 = 0;
    lVar3 = ecs_observer_impl_t(param_1,0,param_2);
    if (lVar3 != 0) {
      lVar2 = 0;
      plVar1 = (longlong *)FUN_1403b2f60(0,param_1 + 0x1b0,8);
      *plVar1 = lVar3;
    }
  }
  else {
LAB_1400c32d3:
    plVar1 = (longlong *)FUN_1403962a0(param_1,lVar2,0x101);
    lVar3 = *plVar1;
    if (lVar3 == 0) {
      lVar3 = ecs_observer_impl_t(param_1,lVar2,param_2);
      if (lVar3 == 0) {
        FUN_1400ba990(param_1,lVar2);
        lVar2 = 0;
        goto LAB_1400c351f;
      }
      *plVar1 = lVar3;
      lVar3 = FUN_1403af230(param_1,lVar2);
      if (lVar3 != 0) {
        local_98 = FUN_1403af230(param_1,lVar2);
        FUN_140399630(0,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/observer.c",
                      0x4fd,"#[green]observer#[reset] %s created");
      }
    }
    else {
      if (((*(code **)(lVar3 + 0x88) != (code *)0x0) && (*(longlong *)(lVar3 + 0x70) != 0)) &&
         (*(longlong *)(lVar3 + 0x70) != *(longlong *)(param_2 + 0x9f0))) {
        (**(code **)(lVar3 + 0x88))();
      }
      if (((*(code **)(lVar3 + 0x90) != (code *)0x0) && (*(longlong *)(lVar3 + 0x78) != 0)) &&
         (*(longlong *)(lVar3 + 0x78) != *(longlong *)(param_2 + 0xa00))) {
        (**(code **)(lVar3 + 0x90))();
        *(undefined8 *)(lVar3 + 0x90) = 0;
        *(undefined8 *)(lVar3 + 0x78) = 0;
      }
      if (((*(code **)(lVar3 + 0x98) != (code *)0x0) && (*(longlong *)(lVar3 + 0x80) != 0)) &&
         (*(longlong *)(lVar3 + 0x80) != *(longlong *)(param_2 + 0xa10))) {
        (**(code **)(lVar3 + 0x98))();
        *(undefined8 *)(lVar3 + 0x98) = 0;
        *(undefined8 *)(lVar3 + 0x80) = 0;
      }
      if ((*(longlong *)(param_2 + 0x9e8) != 0) &&
         (*(longlong *)(lVar3 + 0x68) = *(longlong *)(param_2 + 0x9e8),
         *(longlong *)(param_2 + 0x9e0) == 0)) {
        *(undefined8 *)(lVar3 + 0x60) = 0;
      }
      if ((*(longlong *)(param_2 + 0x9e0) != 0) &&
         (*(longlong *)(lVar3 + 0x60) = *(longlong *)(param_2 + 0x9e0),
         *(longlong *)(param_2 + 0x9e8) == 0)) {
        *(undefined8 *)(lVar3 + 0x68) = 0;
      }
      if (*(longlong *)(param_2 + 0x9f0) != 0) {
        *(longlong *)(lVar3 + 0x70) = *(longlong *)(param_2 + 0x9f0);
      }
      if (*(longlong *)(param_2 + 0xa00) != 0) {
        *(longlong *)(lVar3 + 0x78) = *(longlong *)(param_2 + 0xa00);
      }
      if (*(longlong *)(param_2 + 0xa10) != 0) {
        *(longlong *)(lVar3 + 0x80) = *(longlong *)(param_2 + 0xa10);
      }
      if (*(longlong *)(param_2 + 0x9f8) != 0) {
        *(longlong *)(lVar3 + 0x88) = *(longlong *)(param_2 + 0x9f8);
      }
      if (*(longlong *)(param_2 + 0xa08) != 0) {
        *(longlong *)(lVar3 + 0x90) = *(longlong *)(param_2 + 0xa08);
      }
      if (*(longlong *)(param_2 + 0xa18) != 0) {
        *(longlong *)(lVar3 + 0x98) = *(longlong *)(param_2 + 0xa18);
      }
    }
    FUN_140396330(param_1,lVar2,0x101);
  }
LAB_1400c351f:
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_b8)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_b8);
}

