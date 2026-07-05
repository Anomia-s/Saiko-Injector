/**
 * Function: sdl_joystick_hidapi_ps5_player_led
 * Address:  14063f210
 * Signature: undefined sdl_joystick_hidapi_ps5_player_led(void)
 * Body size: 77 bytes
 */


void sdl_joystick_hidapi_ps5_player_led(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  FUN_1401108b0("SDL_JOYSTICK_ENHANCED_REPORTS",FUN_140640310,lVar1);
  FUN_1401108b0("SDL_JOYSTICK_HIDAPI_PS5_PLAYER_LED",FUN_140640400,lVar1);
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined1 *)(lVar1 + 0x1f) = 0;
  *(undefined2 *)(lVar1 + 0x1d) = 0;
  return;
}

