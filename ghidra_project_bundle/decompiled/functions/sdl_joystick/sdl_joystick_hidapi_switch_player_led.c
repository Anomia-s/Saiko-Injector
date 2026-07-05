/**
 * Function: sdl_joystick_hidapi_switch_player_led
 * Address:  140649110
 * Signature: undefined sdl_joystick_hidapi_switch_player_led(void)
 * Body size: 233 bytes
 */


void sdl_joystick_hidapi_switch_player_led(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x70);
  if ((*(char *)(lVar1 + 0x10) == '\0') &&
     (((*(char *)(lVar1 + 0x24) == '?' || (*(char *)(lVar1 + 0x24) == '\0')) &&
      (local_11 = 0x3f, *(char *)(lVar1 + 0x25) != '?')))) {
    *(undefined1 *)(lVar1 + 0x25) = 0x3f;
    local_28 = 0;
    FUN_140649540(lVar1,3,&local_11,1);
  }
  FUN_1401108b0("SDL_JOYSTICK_ENHANCED_REPORTS",FUN_14064a150,lVar1);
  pcVar2 = "SDL_JOYSTICK_HIDAPI_SWITCH_HOME_LED";
  if (*(int *)(lVar1 + 0x20) - 1U < 2) {
    pcVar2 = "SDL_JOYSTICK_HIDAPI_JOYCON_HOME_LED";
  }
  FUN_1401108b0(pcVar2,FUN_14064a2c0,lVar1);
  FUN_1401108b0("SDL_JOYSTICK_HIDAPI_SWITCH_PLAYER_LED",FUN_14064a3e0,lVar1);
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined1 *)(lVar1 + 0x99) = 0;
  *(undefined2 *)(lVar1 + 0x34) = 0;
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_48);
}

