/**
 * Function: sdl_joystick_hidapi_wii_player_led
 * Address:  14064b970
 * Signature: undefined sdl_joystick_hidapi_wii_player_led(void)
 * Body size: 45 bytes
 */


void sdl_joystick_hidapi_wii_player_led(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  FUN_1401108b0("SDL_JOYSTICK_HIDAPI_WII_PLAYER_LED",FUN_14064cc30,lVar1);
  *(undefined8 *)(lVar1 + 8) = 0;
  return;
}

