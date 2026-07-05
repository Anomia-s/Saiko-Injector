/**
 * Function: haptic_mouse_isnt_a_haptic_device
 * Address:  140150ad0
 * Signature: undefined haptic_mouse_isnt_a_haptic_device(void)
 * Body size: 43 bytes
 */


undefined8 haptic_mouse_isnt_a_haptic_device(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1404588c0();
  if (-1 < iVar1) {
    uVar2 = haptic_device_u_not_found(iVar1);
    return uVar2;
  }
  FUN_1400fbed0("Haptic: Mouse isn\'t a haptic device.");
  return 0;
}

