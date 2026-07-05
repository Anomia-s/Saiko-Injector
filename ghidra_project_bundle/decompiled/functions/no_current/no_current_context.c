/**
 * Function: no_current_context
 * Address:  14014d3d0
 * Signature: undefined no_current_context(void)
 * Body size: 163 bytes
 */


void no_current_context(undefined4 *param_1)

{
  longlong lVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_1400fbed0("Parameter \'%s\' is invalid","interval");
    return;
  }
  *param_1 = 0;
  if (DAT_1415259c8 == 0) {
    FUN_1400fbed0("no video driver");
    return;
  }
  lVar1 = parameter_s_is_invalid(DAT_1415259c8 + 0x54c);
  if (lVar1 == 0) {
    FUN_1400fbed0("no current context");
    return;
  }
  if (*(code **)(DAT_1415259c8 + 0x1c0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014014d41d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_1415259c8 + 0x1c0))(DAT_1415259c8,param_1);
    return;
  }
  FUN_1400fbed0("not implemented");
  return;
}

