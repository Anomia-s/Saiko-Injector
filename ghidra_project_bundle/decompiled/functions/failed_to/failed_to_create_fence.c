/**
 * Function: failed_to_create_fence
 * Address:  140403570
 * Signature: undefined failed_to_create_fence(void)
 * Body size: 299 bytes
 */


undefined8 * failed_to_create_fence(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  HANDLE pvVar4;
  undefined1 auStack_48 [32];
  longlong **local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  FUN_1401552a0(*(undefined8 *)(param_1 + 0x1f8));
  if (*(int *)(param_1 + 0x130) == 0) {
    local_28 = &local_20;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x120))
                      (*(longlong **)(param_1 + 0x50),0,0,&DAT_140e14dd0);
    if (iVar2 < 0) {
      s_error_code_s_0x08lx(param_1,"Failed to create fence!",iVar2);
    }
    else {
      puVar3 = (undefined8 *)FUN_140160c70(1,0x18);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = local_20;
        pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        puVar3[1] = pvVar4;
        FUN_140106140(puVar3 + 2,0);
        goto LAB_1404035bc;
      }
      (**(code **)(*local_20 + 0x10))();
    }
    FUN_1401552c0(*(undefined8 *)(param_1 + 0x1f8));
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x130) - 1;
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x128) + (ulonglong)uVar1 * 8);
    *(uint *)(param_1 + 0x130) = uVar1;
    (**(code **)(*(longlong *)*puVar3 + 0x50))((longlong *)*puVar3,0);
LAB_1404035bc:
    FUN_1401552c0(*(undefined8 *)(param_1 + 0x1f8));
    FUN_140106160(puVar3 + 2,1);
  }
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_48)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_48);
}

