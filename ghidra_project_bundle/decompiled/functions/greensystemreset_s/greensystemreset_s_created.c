/**
 * Function: greensystemreset_s_created
 * Address:  1403c6a20
 * Signature: undefined greensystemreset_s_created(void)
 * Body size: 1027 bytes
 */


longlong greensystemreset_s_created(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a48 [32];
  undefined8 local_a28;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined1 local_9c0 [2432];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_a48;
  lVar2 = *(longlong *)(param_2 + 8);
  if (lVar2 == 0) {
    local_9d8 = 0;
    uStack_9d0 = 0;
    local_9e8 = 0;
    uStack_9e0 = 0;
    local_9f8 = 0;
    uStack_9f0 = 0;
    local_a08 = 0;
    uStack_a00 = 0;
    local_a18 = 0;
    uStack_a10 = 0;
    local_9c8 = 0;
    lVar2 = s_is_invalid_for_ecs_entity_desc_t_add_expr(param_1,&local_a18);
  }
  plVar3 = (longlong *)FUN_1403962a0(param_1,lVar2,0x102);
  lVar5 = *plVar3;
  if (lVar5 == 0) {
    uVar4 = (*DAT_1415033a8)(0x98);
    lVar5 = FUN_140396260(uVar4,0x65637383,0x98,&PTR_s_ecs_system_t_141503510);
    *plVar3 = lVar5;
    *(code **)(lVar5 + 0x90) = FUN_1403c6e30;
    memcpy(local_9c0,(void *)(param_2 + 0x10),0x980);
    local_40 = lVar2;
    lVar6 = cannot_enforce_querycacheall_query_contains_u(param_1,local_9c0);
    if (lVar6 == 0) {
      FUN_1400ba990(param_1,lVar2);
    }
    else {
      FUN_140396bb0(param_1,**(undefined8 **)(param_1 + 0x9d0));
      if (*(longlong *)(param_2 + 0x998) != 0) {
        thunk_FUN_1400b7e20(param_1,lVar2);
        thunk_FUN_1400b7e20(param_1,lVar2,(ulonglong)*(uint *)(param_2 + 0x998) | 0x8000012800000000
                           );
      }
      *(longlong *)(lVar5 + 0x20) = lVar6;
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(param_2 + 0x9a8);
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x9a0);
      *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(param_2 + 0x9b0);
      *(undefined8 *)(lVar5 + 0x58) = *(undefined8 *)(param_2 + 0x9c0);
      *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)(param_2 + 0x9d0);
      *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(param_2 + 0x9b8);
      *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(param_2 + 0x9c8);
      *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(param_2 + 0x9d8);
      *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(param_2 + 0x9e8);
      *(undefined1 *)(lVar5 + 0x40) = *(undefined1 *)(param_2 + 0x9f0);
      *(undefined1 *)(lVar5 + 0x41) = *(undefined1 *)(param_2 + 0x9f1);
      local_a28 = 0;
      uVar4 = FUN_1403ae340(param_1,0,lVar2,".");
      *(undefined8 *)(lVar5 + 0x48) = uVar4;
      iVar1 = system_s_cannot_have_both_interval_and_rate_s(param_1,lVar2,param_2);
      if (iVar1 == 0) {
        lVar5 = FUN_1403af230(param_1,lVar2);
        if (lVar5 != 0) {
          local_a28 = FUN_1403af230(param_1,lVar2);
          FUN_140399630(0,
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/system/system.c"
                        ,0x151,"#[green]system#[reset] %s created");
        }
        FUN_140398ba0(param_1);
        goto LAB_1403c6dda;
      }
      FUN_1400ba990(param_1,lVar2);
      FUN_140398ba0(param_1);
    }
  }
  else {
    if (((*(code **)(lVar5 + 0x68) != (code *)0x0) && (*(longlong *)(lVar5 + 0x50) != 0)) &&
       (*(longlong *)(lVar5 + 0x50) != *(longlong *)(param_2 + 0x9b0))) {
      (**(code **)(lVar5 + 0x68))();
    }
    if (((*(code **)(lVar5 + 0x70) != (code *)0x0) && (*(longlong *)(lVar5 + 0x58) != 0)) &&
       (*(longlong *)(lVar5 + 0x58) != *(longlong *)(param_2 + 0x9c0))) {
      (**(code **)(lVar5 + 0x70))();
      *(undefined8 *)(lVar5 + 0x70) = 0;
      *(undefined8 *)(lVar5 + 0x58) = 0;
    }
    if (((*(code **)(lVar5 + 0x78) != (code *)0x0) && (*(longlong *)(lVar5 + 0x60) != 0)) &&
       (*(longlong *)(lVar5 + 0x60) != *(longlong *)(param_2 + 0x9d0))) {
      (**(code **)(lVar5 + 0x78))();
      *(undefined8 *)(lVar5 + 0x78) = 0;
      *(undefined8 *)(lVar5 + 0x60) = 0;
    }
    if ((*(longlong *)(param_2 + 0x9a8) != 0) &&
       (*(longlong *)(lVar5 + 0x10) = *(longlong *)(param_2 + 0x9a8),
       *(longlong *)(param_2 + 0x9a0) == 0)) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
    }
    if ((*(longlong *)(param_2 + 0x9a0) != 0) &&
       (*(longlong *)(lVar5 + 0x18) = *(longlong *)(param_2 + 0x9a0),
       *(longlong *)(param_2 + 0x9a8) == 0)) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
    }
    if (*(longlong *)(param_2 + 0x9b0) != 0) {
      *(longlong *)(lVar5 + 0x50) = *(longlong *)(param_2 + 0x9b0);
    }
    if (*(longlong *)(param_2 + 0x9c0) != 0) {
      *(longlong *)(lVar5 + 0x58) = *(longlong *)(param_2 + 0x9c0);
    }
    if (*(longlong *)(param_2 + 0x9d0) != 0) {
      *(longlong *)(lVar5 + 0x60) = *(longlong *)(param_2 + 0x9d0);
    }
    if (*(longlong *)(param_2 + 0x9b8) != 0) {
      *(longlong *)(lVar5 + 0x68) = *(longlong *)(param_2 + 0x9b8);
    }
    if (*(longlong *)(param_2 + 0x9c8) != 0) {
      *(longlong *)(lVar5 + 0x70) = *(longlong *)(param_2 + 0x9c8);
    }
    if (*(longlong *)(param_2 + 0x9d8) != 0) {
      *(longlong *)(lVar5 + 0x78) = *(longlong *)(param_2 + 0x9d8);
    }
    if (*(char *)(param_2 + 0x9f0) == '\x01') {
      *(undefined1 *)(lVar5 + 0x40) = 1;
    }
    if (*(char *)(param_2 + 0x9f1) == '\x01') {
      *(undefined1 *)(lVar5 + 0x41) = 1;
    }
    iVar1 = system_s_cannot_have_both_interval_and_rate_s(param_1,lVar2,param_2);
    if (iVar1 == 0) {
LAB_1403c6dda:
      FUN_140396330(param_1,lVar2,0x102);
      goto LAB_1403c6de8;
    }
  }
  lVar2 = 0;
LAB_1403c6de8:
  if (DAT_1414ef3c0 != (local_38 ^ (ulonglong)auStack_a48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_38 ^ (ulonglong)auStack_a48);
  }
  return lVar2;
}

