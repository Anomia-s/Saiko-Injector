/**
 * Function: haptic_joystick_isnt_a_haptic_device
 * Address:  140150b50
 * Signature: undefined haptic_joystick_isnt_a_haptic_device(void)
 * Body size: 305 bytes
 */


longlong haptic_joystick_isnt_a_haptic_device(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  char *pcVar4;
  
  FUN_1401264f0();
  cVar1 = FUN_1401291d0(param_1);
  if (cVar1 == '\0') {
    pcVar4 = "Haptic: Joystick isn\'t valid.";
  }
  else {
    uVar2 = parameter_s_is_invalid(param_1);
    cVar1 = FUN_14010ca40(uVar2);
    if ((cVar1 == '\0') && (cVar1 = FUN_140458900(param_1), lVar3 = DAT_141525a00, cVar1 != '\0')) {
      for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x80)) {
        cVar1 = FUN_140458930(lVar3,param_1);
        if (cVar1 != '\0') {
          *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
          FUN_140126530();
          return lVar3;
        }
      }
      lVar3 = FUN_140160c70(1,0x88);
      if (lVar3 != 0) {
        FUN_1403d8ef0(lVar3,6,1);
        *(undefined4 *)(lVar3 + 0x34) = 0xffffffff;
        cVar1 = couldnt_find_joystick_in_haptic_device_list(lVar3,param_1);
        if (cVar1 != '\0') {
          FUN_140126530();
          *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
          *(longlong *)(lVar3 + 0x80) = DAT_141525a00;
          DAT_141525a00 = lVar3;
          return lVar3;
        }
        FUN_1400fbed0("Haptic: SDL_SYS_HapticOpenFromJoystick failed.");
        FUN_1403d8ef0(lVar3,6,0);
        FUN_140160cf0(lVar3);
      }
      goto LAB_140150c40;
    }
    pcVar4 = "Haptic: Joystick isn\'t a haptic device.";
  }
  FUN_1400fbed0(pcVar4);
LAB_140150c40:
  FUN_140126530();
  return 0;
}

