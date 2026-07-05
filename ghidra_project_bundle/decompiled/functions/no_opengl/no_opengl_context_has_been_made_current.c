/**
 * Function: no_opengl_context_has_been_made_current
 * Address:  14014d350
 * Signature: undefined no_opengl_context_has_been_made_current(void)
 * Body size: 122 bytes
 */


void no_opengl_context_has_been_made_current(undefined4 param_1)

{
  longlong lVar1;
  
  if (DAT_1415259c8 == 0) {
    FUN_1400fbed0("Video subsystem has not been initialized");
    return;
  }
  lVar1 = parameter_s_is_invalid(DAT_1415259c8 + 0x54c);
  if (lVar1 != 0) {
    if (*(code **)(DAT_1415259c8 + 0x1b8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014014d38e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(DAT_1415259c8 + 0x1b8))(DAT_1415259c8,param_1);
      return;
    }
    FUN_1400fbed0("Setting the swap interval is not supported");
    return;
  }
  FUN_1400fbed0("No OpenGL context has been made current");
  return;
}

