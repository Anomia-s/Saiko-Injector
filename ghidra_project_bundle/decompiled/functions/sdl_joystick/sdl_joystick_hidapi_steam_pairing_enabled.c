/**
 * Function: sdl_joystick_hidapi_steam_pairing_enabled
 * Address:  140642f20
 * Signature: undefined sdl_joystick_hidapi_steam_pairing_enabled(void)
 * Body size: 317 bytes
 */


void sdl_joystick_hidapi_steam_pairing_enabled(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  if (*(short *)(param_1 + 0x22) == 0x1142) {
    plVar1 = *(longlong **)(param_1 + 0x70);
    FUN_1401108b0("SDL_JOYSTICK_HIDAPI_STEAM_PAIRING_ENABLED",FUN_140643060,plVar1);
    if ((DAT_1416fde68 == plVar1) && ((char)plVar1[1] == '\0')) {
      lVar2 = *plVar1;
      uStack_90 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_58 = 0;
      local_98 = 0x2ad00;
      if (*(char *)(lVar2 + 0x54) == '\0') {
        iVar4 = 0x32;
        do {
          iVar3 = FUN_14017a740(*(undefined8 *)(lVar2 + 0x80),&local_98,0x41);
          if (-1 < iVar3) break;
          setwaitabletimerex(500000);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      else {
        uStack_40 = 0;
        local_38 = 0;
        local_48 = 0x2adc003;
        FUN_14017a740(*(undefined8 *)(lVar2 + 0x80),&local_48,0x14);
      }
      plVar1[3] = 0;
      DAT_1416fde68 = (longlong *)0x0;
    }
  }
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_b8);
}

