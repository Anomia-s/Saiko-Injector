/**
 * Function: couldnt_find_joystick_in_haptic_device_list
 * Address:  140652e40
 * Signature: undefined couldnt_find_joystick_in_haptic_device_list(void)
 * Body size: 234 bytes
 */


undefined8 couldnt_find_joystick_in_haptic_device_list(undefined4 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_498 [36];
  undefined4 local_474;
  undefined1 local_470 [1096];
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_498;
  local_474 = 0x44c;
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x140) + 0x10);
  iVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,&local_474);
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    if (DAT_1416f2140 != (undefined4 *)0x0) {
      puVar4 = DAT_1416f2140;
      do {
        iVar2 = FUN_1403d7fa0(puVar4 + 7,local_470);
        if (iVar2 != 0) {
          *param_1 = *puVar4;
          uVar3 = FUN_1400fcda0(*(undefined8 *)(puVar4 + 2));
          *(undefined8 *)(param_1 + 2) = uVar3;
          uVar3 = setting_cooperative_level_to_exclusive
                            (param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x140) + 0x10),1);
          goto LAB_140652ef6;
        }
        puVar4 = *(undefined4 **)(puVar4 + 0x124);
      } while (puVar4 != (undefined4 *)0x0);
    }
    uVar3 = FUN_1400fbed0("Couldn\'t find joystick in haptic device list");
  }
LAB_140652ef6:
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_498)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_498);
}

