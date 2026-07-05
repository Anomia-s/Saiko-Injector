/**
 * Function: failed_to_obtain_xinput_device_capabilities_d
 * Address:  1406520f0
 * Signature: undefined failed_to_obtain_xinput_device_capabilities_d(void)
 * Body size: 243 bytes
 */


undefined8 failed_to_obtain_xinput_device_capabilities_d(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2c [20];
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0xc68) = 1;
  iVar2 = (*DAT_1416fdeb0)(uVar1,1,local_2c);
  if (iVar2 == 0) {
    local_30 = 0;
    iVar2 = (*DAT_1416fdea8)(uVar1,&local_30);
    *(bool *)(*(longlong *)(param_1 + 0x140) + 0xc69) = iVar2 == 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0xc6a) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = 6;
    *(undefined4 *)(param_1 + 0x70) = 0xb;
    *(undefined4 *)(param_1 + 0x60) = 1;
    uVar3 = parameter_s_is_invalid(param_1);
    FUN_14014fd20(uVar3,"SDL.joystick.cap.rumble",1);
    uVar4 = 1;
  }
  else {
    FUN_140160cf0(*(undefined8 *)(param_1 + 0x140));
    *(undefined8 *)(param_1 + 0x140) = 0;
    uVar4 = FUN_1400fbed0("Failed to obtain XInput device capabilities. Device disconnected?");
  }
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_58);
}

