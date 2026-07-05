/**
 * Function: sdl_joystick_hidapi_ps4_report_interval
 * Address:  14063d060
 * Signature: undefined sdl_joystick_hidapi_ps4_report_interval(void)
 * Body size: 77 bytes
 */


void sdl_joystick_hidapi_ps4_report_interval(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  FUN_1401108b0("SDL_JOYSTICK_HIDAPI_PS4_REPORT_INTERVAL",FUN_14063db30,lVar1);
  FUN_1401108b0("SDL_JOYSTICK_ENHANCED_REPORTS",FUN_14063dcd0,lVar1);
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined1 *)(lVar1 + 0x20) = 0;
  *(undefined2 *)(lVar1 + 0x1d) = 0;
  return;
}

