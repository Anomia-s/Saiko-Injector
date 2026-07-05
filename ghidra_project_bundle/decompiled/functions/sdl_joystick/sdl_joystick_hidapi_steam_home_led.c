/**
 * Function: sdl_joystick_hidapi_steam_home_led
 * Address:  140642cd0
 * Signature: undefined sdl_joystick_hidapi_steam_home_led(void)
 * Body size: 585 bytes
 */


void sdl_joystick_hidapi_steam_home_led(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  FUN_1401108b0("SDL_JOYSTICK_HIDAPI_STEAM_HOME_LED",couldnt_write_feature_report,
                *(undefined8 *)(param_1 + 0x70));
  uStack_80 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = 0;
  local_88 = 0x8500;
  if (*(char *)(param_1 + 0x54) == '\0') {
    iVar2 = 0x32;
    do {
      iVar1 = FUN_14017a740(*(undefined8 *)(param_1 + 0x80),&local_88,0x41);
      if (-1 < iVar1) break;
      setwaitabletimerex(500000);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else {
    uStack_30 = 0;
    local_28 = 0;
    local_38 = 0x85c003;
    FUN_14017a740(*(undefined8 *)(param_1 + 0x80),&local_38,0x14);
  }
  uStack_80 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = 0;
  local_88 = 0x8e00;
  if (*(char *)(param_1 + 0x54) == '\0') {
    iVar2 = 0x32;
    do {
      iVar1 = FUN_14017a740(*(undefined8 *)(param_1 + 0x80),&local_88,0x41);
      if (-1 < iVar1) break;
      setwaitabletimerex(500000);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else {
    uStack_30 = 0;
    local_28 = 0;
    local_38 = 0x8ec003;
    FUN_14017a740(*(undefined8 *)(param_1 + 0x80),&local_38,0x14);
  }
  uStack_80 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = 0;
  local_88 = 0x8038700;
  if (*(char *)(param_1 + 0x54) == '\0') {
    iVar2 = 0x32;
    do {
      iVar1 = FUN_14017a740(*(undefined8 *)(param_1 + 0x80),&local_88,0x41);
      if (-1 < iVar1) break;
      setwaitabletimerex(500000);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else {
    uStack_30 = 0;
    local_28 = 0;
    local_38 = 0x80387c003;
    FUN_14017a740(*(undefined8 *)(param_1 + 0x80),&local_38,0x14);
  }
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_a8);
}

