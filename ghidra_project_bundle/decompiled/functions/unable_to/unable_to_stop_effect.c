/**
 * Function: unable_to_stop_effect
 * Address:  140653c50
 * Signature: undefined unable_to_stop_effect(void)
 * Body size: 54 bytes
 */


undefined8 unable_to_stop_effect(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_2 + 0x48) + 0x50) + 0x40))();
  if (-1 < iVar1) {
    return 1;
  }
  uVar2 = FUN_1400fbed0("Haptic error %s","Unable to stop effect");
  return uVar2;
}

