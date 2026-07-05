/**
 * Function: stopping_the_device
 * Address:  140653f50
 * Signature: undefined stopping_the_device(void)
 * Body size: 61 bytes
 */


undefined8 stopping_the_device(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0xb0))
                    ((longlong *)**(undefined8 **)(param_1 + 0x28),2);
  if (-1 < iVar1) {
    return 1;
  }
  uVar2 = FUN_1400fbed0("Haptic error %s","Stopping the device");
  return uVar2;
}

