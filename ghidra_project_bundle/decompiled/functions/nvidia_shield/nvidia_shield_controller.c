/**
 * Function: nvidia_shield_controller
 * Address:  140638560
 * Signature: undefined nvidia_shield_controller(void)
 * Body size: 70 bytes
 */


undefined8 nvidia_shield_controller(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140160c70(1,0x60);
  if (lVar1 != 0) {
    *(longlong *)(param_1 + 0x70) = lVar1;
    FUN_14043fe30(param_1,"NVIDIA SHIELD Controller");
    uVar2 = FUN_140440300(param_1,0);
    return uVar2;
  }
  return 0;
}

