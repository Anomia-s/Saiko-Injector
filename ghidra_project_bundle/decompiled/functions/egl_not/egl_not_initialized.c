/**
 * Function: egl_not_initialized
 * Address:  140458250
 * Signature: undefined egl_not_initialized(void)
 * Body size: 46 bytes
 */


undefined8 egl_not_initialized(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x688) != 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x688) + 0x20);
    *param_2 = uVar1;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  uVar2 = FUN_1400fbed0("EGL not initialized");
  return uVar2;
}

