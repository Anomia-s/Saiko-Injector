/**
 * Function: sdl_no_signal_handlers
 * Address:  140404050
 * Signature: undefined sdl_no_signal_handlers(void)
 * Body size: 103 bytes
 */


undefined1 sdl_no_signal_handlers(void)

{
  char cVar1;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  
  cVar1 = FUN_1401106d0("SDL_NO_SIGNAL_HANDLERS",0);
  if (cVar1 == '\0') {
    signal(2);
    if (CONCAT71(extraout_var,extraout_AL) != 0) {
      signal(2);
    }
    signal(0xf);
    if (CONCAT71(extraout_var_00,extraout_AL_00) != 0) {
      signal(0xf);
    }
  }
  return 1;
}

