/**
 * Function: sdl_joystick_hidapi_xbox_one_home_led
 * Address:  14064ea30
 * Signature: undefined sdl_joystick_hidapi_xbox_one_home_led(void)
 * Body size: 122 bytes
 */


undefined8 sdl_joystick_hidapi_xbox_one_home_led(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  httplib::ClientImpl::vfunction4();
  *(undefined4 *)(lVar2 + 0x2f) = 0;
  *(undefined8 *)(lVar2 + 0x34) = 0;
  *(undefined8 *)(lVar2 + 0x3c) = 0;
  *(undefined8 *)(lVar2 + 0x44) = 0;
  *(undefined8 *)(lVar2 + 0x4c) = 0;
  *(undefined8 *)(lVar2 + 0x54) = 0;
  *(undefined8 *)(lVar2 + 0x5c) = 0;
  *(undefined8 *)(lVar2 + 100) = 0;
  *(undefined8 *)(lVar2 + 0x6c) = 0;
  *(undefined8 *)(lVar2 + 0x71) = 0;
  *(undefined8 *)(lVar2 + 0x79) = 0;
  *(undefined4 *)(param_2 + 0x70) = 0xb;
  bVar1 = *(byte *)(lVar2 + 0x2d);
  *(uint *)(param_2 + 0x70) = bVar1 + 0xb;
  if (*(char *)(lVar2 + 0x2a) == '\x01') {
    *(uint *)(param_2 + 0x70) = bVar1 + 0xf;
  }
  *(undefined4 *)(param_2 + 0x40) = 6;
  *(undefined4 *)(param_2 + 0x60) = 1;
  parameter_s_is_invalid("SDL_JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED",FUN_14064f6b0,lVar2);
  return 1;
}

