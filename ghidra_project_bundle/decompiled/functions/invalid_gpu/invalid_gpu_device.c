/**
 * Function: invalid_gpu_device
 * Address:  140105f10
 * Signature: undefined invalid_gpu_device(void)
 * Body size: 53 bytes
 */


void invalid_gpu_device(longlong param_1,longlong param_2)

{
  if (param_1 == 0) {
    FUN_1400fbed0("Invalid GPU device");
  }
  else if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140105f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x278))(*(undefined8 *)(param_1 + 0x290));
    return;
  }
  return;
}

