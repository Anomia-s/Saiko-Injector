/**
 * Function: sdl_joystick_hidapi_xbox_360_player_led
 * Address:  14064dca0
 * Signature: undefined sdl_joystick_hidapi_xbox_360_player_led(void)
 * Body size: 271 bytes
 */


undefined8 sdl_joystick_hidapi_xbox_360_player_led(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x70);
  httplib::ClientImpl::vfunction4();
  *(undefined8 *)((longlong)plVar1 + 0x41) = 0;
  *(undefined8 *)((longlong)plVar1 + 0x49) = 0;
  *(undefined8 *)((longlong)plVar1 + 0x31) = 0;
  *(undefined8 *)((longlong)plVar1 + 0x39) = 0;
  *(undefined8 *)((longlong)plVar1 + 0x21) = 0;
  *(undefined8 *)((longlong)plVar1 + 0x29) = 0;
  *(undefined8 *)((longlong)plVar1 + 0x11) = 0;
  *(undefined8 *)((longlong)plVar1 + 0x19) = 0;
  uVar3 = parameter_s_is_invalid(param_2);
  *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
  cVar2 = FUN_1401106d0("SDL_JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED",1);
  *(char *)(plVar1 + 2) = cVar2;
  if ((cVar2 == '\0') || (*(int *)((longlong)plVar1 + 0xc) < 0)) {
    uVar4 = *(undefined8 *)(*plVar1 + 0x80);
    local_28._0_4_ = 0x40080000;
  }
  else {
    uVar4 = *(undefined8 *)(*plVar1 + 0x80);
    local_28._0_4_ = CONCAT13(((byte)*(int *)((longlong)plVar1 + 0xc) & 3) + 0x46,0x80000);
  }
  local_28 = (ulonglong)(uint)local_28;
  local_20 = 0;
  FUN_14017a5d0(uVar4,&local_28,0xc);
  parameter_s_is_invalid("SDL_JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED",FUN_14064de60,plVar1);
  *(undefined4 *)(param_2 + 0x70) = 0xb;
  *(undefined4 *)(param_2 + 0x40) = 6;
  *(undefined4 *)(param_2 + 0x60) = 1;
  *(undefined4 *)(param_2 + 0xdc) = 2;
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_48)) {
    return CONCAT71((int7)((local_18 ^ (ulonglong)auStack_48) >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_48);
}

