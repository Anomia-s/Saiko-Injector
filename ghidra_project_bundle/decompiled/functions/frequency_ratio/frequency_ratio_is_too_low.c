/**
 * Function: frequency_ratio_is_too_low
 * Address:  14013aa40
 * Signature: undefined frequency_ratio_is_too_low(void)
 * Body size: 142 bytes
 */


undefined8 frequency_ratio_is_too_low(undefined8 *param_1,float param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = FUN_1400fbed0("Parameter \'%s\' is invalid","stream");
    return uVar1;
  }
  if (0.01 <= param_2) {
    if (param_2 <= 100.0) {
      FUN_1401552a0(*param_1);
      *(float *)(param_1 + 0xb) = param_2;
      FUN_1401552c0(*param_1);
      return 1;
    }
    pcVar2 = "Frequency ratio is too high";
  }
  else {
    pcVar2 = "Frequency ratio is too low";
  }
  uVar1 = FUN_1400fbed0(pcVar2);
  return uVar1;
}

