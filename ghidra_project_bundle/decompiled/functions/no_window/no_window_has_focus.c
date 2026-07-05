/**
 * Function: no_window_has_focus
 * Address:  140136800
 * Signature: undefined no_window_has_focus(void)
 * Body size: 115 bytes
 */


void no_window_has_focus(char param_1)

{
  longlong lVar1;
  char cVar2;
  
  if (DAT_141525810 == 0) {
    FUN_1400fbed0("That operation is not supported");
    return;
  }
  cVar2 = FUN_140144870();
  if (cVar2 != '\0') {
    if (param_1 != '\0') {
      lVar1 = FUN_14015fd80();
      if (lVar1 == 0) {
        FUN_1400fbed0("No window has focus");
        return;
      }
    }
    DAT_141525894 = param_1;
    FUN_140136880(0);
    return;
  }
  FUN_1400fbed0("SDL_CaptureMouse() must be called on the main thread");
  return;
}

