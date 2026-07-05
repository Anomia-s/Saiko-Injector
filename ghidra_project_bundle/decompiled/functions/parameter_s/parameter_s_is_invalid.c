/**
 * Function: parameter_s_is_invalid
 * Address:  14017da40
 * Signature: undefined parameter_s_is_invalid(void)
 * Body size: 44 bytes
 */


undefined8 parameter_s_is_invalid(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1400fbed0("Parameter \'%s\' is invalid","menu");
  return 0;
}

