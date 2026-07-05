/**
 * Function: nintendo_gamecube_controller
 * Address:  1406369d0
 * Signature: undefined nintendo_gamecube_controller(void)
 * Body size: 976 bytes
 */


undefined8 nintendo_gamecube_controller(longlong param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 auStack_b8 [32];
  char *local_98;
  char *local_90;
  char *local_88;
  undefined1 local_79;
  char local_78;
  byte local_77;
  byte local_6e;
  byte local_65;
  byte local_5c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  local_79 = 0x13;
  pcVar4 = (char *)FUN_140160c70(1,0x54);
  if (pcVar4 == (char *)0x0) {
LAB_140636d6d:
    uVar5 = 0;
    goto LAB_140636d6f;
  }
  *(char **)(param_1 + 0x70) = pcVar4;
  pcVar1 = pcVar4 + 4;
  pcVar4[4] = '\0';
  pcVar4[5] = '\0';
  pcVar4[6] = '\0';
  pcVar4[7] = '\0';
  pcVar4[8] = '\0';
  pcVar4[9] = '\0';
  pcVar4[10] = '\0';
  pcVar4[0xb] = '\0';
  pcVar4[0xc] = '\0';
  pcVar4[0xd] = '\0';
  pcVar4[0xe] = '\0';
  pcVar4[0xf] = '\0';
  pcVar4[0x10] = '\0';
  pcVar4[0x11] = '\0';
  pcVar4[0x12] = '\0';
  pcVar4[0x13] = '\0';
  pcVar4[0x4c] = '\x11';
  pcVar4[0x52] = '\0';
  if (*(short *)(param_1 + 0x20) == 0x57e) {
    if (*pcVar4 == '\x01') goto LAB_140636c99;
    iVar2 = FUN_14017a5d0(*(undefined8 *)(param_1 + 0x80),&local_79,1);
    if (iVar2 != 1) {
      FUN_1400fb830(7,"HIDAPI_DriverGameCube_InitDevice(): Couldn\'t initialize WUP-028");
      goto LAB_140636d6d;
    }
    FUN_140118490(10);
    uVar3 = FUN_14017a630(*(undefined8 *)(param_1 + 0x80),&local_78,0x25,0);
    if (0 < (int)uVar3) {
      local_88 = pcVar4 + 0x30;
      local_90 = pcVar4 + 0x36;
      local_98 = pcVar4 + 0x3c;
      do {
        if ((0x24 < uVar3) && (local_78 == '!')) {
          bVar6 = local_77 >> 5 & 1;
          pcVar4[0x14] = bVar6;
          pcVar4[0x48] = (bVar6 ^ 1) & local_77 >> 2;
          if ((local_77 & 0x30) == 0) {
            if (*(int *)(pcVar4 + 4) != 0) {
              FUN_1404400d0(param_1);
              pcVar1[0] = '\0';
              pcVar1[1] = '\0';
              pcVar1[2] = '\0';
              pcVar1[3] = '\0';
            }
          }
          else if (*(int *)(pcVar4 + 4) == 0) {
            builtin_strncpy(pcVar4 + 0x18,"((((",4);
            local_88[4] = -0x28;
            local_88[5] = -0x28;
            local_88[0] = -0x28;
            local_88[1] = -0x28;
            local_88[2] = -0x28;
            local_88[3] = -0x28;
            pcVar4[0x1c] = '(';
            pcVar4[0x1d] = '(';
            FUN_140440300(param_1,pcVar1);
          }
          bVar6 = local_6e >> 5 & 1;
          pcVar4[0x15] = bVar6;
          pcVar4[0x49] = (bVar6 ^ 1) & local_6e >> 2;
          if ((local_6e & 0x30) == 0) {
            if (*(int *)(pcVar4 + 8) != 0) {
              FUN_1404400d0(param_1);
              pcVar4[8] = '\0';
              pcVar4[9] = '\0';
              pcVar4[10] = '\0';
              pcVar4[0xb] = '\0';
            }
          }
          else if (*(int *)(pcVar4 + 8) == 0) {
            builtin_strncpy(pcVar4 + 0x1e,"((((",4);
            local_90[4] = -0x28;
            local_90[5] = -0x28;
            local_90[0] = -0x28;
            local_90[1] = -0x28;
            local_90[2] = -0x28;
            local_90[3] = -0x28;
            pcVar4[0x22] = '(';
            pcVar4[0x23] = '(';
            FUN_140440300(param_1,pcVar4 + 8);
          }
          bVar6 = local_65 >> 5 & 1;
          pcVar4[0x16] = bVar6;
          pcVar4[0x4a] = (bVar6 ^ 1) & local_65 >> 2;
          if ((local_65 & 0x30) == 0) {
            if (*(int *)(pcVar4 + 0xc) != 0) {
              FUN_1404400d0(param_1);
              pcVar4[0xc] = '\0';
              pcVar4[0xd] = '\0';
              pcVar4[0xe] = '\0';
              pcVar4[0xf] = '\0';
            }
          }
          else if (*(int *)(pcVar4 + 0xc) == 0) {
            builtin_strncpy(pcVar4 + 0x24,"((((",4);
            local_98[4] = -0x28;
            local_98[5] = -0x28;
            local_98[0] = -0x28;
            local_98[1] = -0x28;
            local_98[2] = -0x28;
            local_98[3] = -0x28;
            pcVar4[0x28] = '(';
            pcVar4[0x29] = '(';
            FUN_140440300(param_1,pcVar4 + 0xc);
          }
          bVar6 = local_5c >> 5 & 1;
          pcVar4[0x17] = bVar6;
          pcVar4[0x4b] = (bVar6 ^ 1) & local_5c >> 2;
          if ((local_5c & 0x30) == 0) {
            if (*(int *)(pcVar4 + 0x10) != 0) {
              FUN_1404400d0(param_1);
              pcVar4[0x10] = '\0';
              pcVar4[0x11] = '\0';
              pcVar4[0x12] = '\0';
              pcVar4[0x13] = '\0';
            }
          }
          else if (*(int *)(pcVar4 + 0x10) == 0) {
            pcVar4[0x2a] = '(';
            pcVar4[0x2b] = '(';
            pcVar4[0x2c] = '(';
            pcVar4[0x2d] = '(';
            pcVar4[0x46] = -0x28;
            pcVar4[0x47] = -0x28;
            pcVar4[0x42] = -0x28;
            pcVar4[0x43] = -0x28;
            pcVar4[0x44] = -0x28;
            pcVar4[0x45] = -0x28;
            pcVar4[0x2e] = '(';
            pcVar4[0x2f] = '(';
            FUN_140440300(param_1,pcVar4 + 0x10);
          }
        }
        uVar3 = FUN_14017a630(*(undefined8 *)(param_1 + 0x80),&local_78,0x25,0);
      } while (0 < (int)uVar3);
    }
  }
  else {
    *pcVar4 = '\x01';
LAB_140636c99:
    pcVar4[0x18] = '(';
    pcVar4[0x19] = '(';
    pcVar4[0x1a] = '(';
    pcVar4[0x1b] = '(';
    pcVar4[0x30] = -0x28;
    pcVar4[0x31] = -0x28;
    pcVar4[0x32] = -0x28;
    pcVar4[0x33] = -0x28;
    pcVar4[0x34] = -0x28;
    pcVar4[0x35] = -0x28;
    pcVar4[0x1c] = '(';
    pcVar4[0x1d] = '(';
    FUN_140440300(param_1,pcVar1);
    pcVar4[0x1e] = '(';
    pcVar4[0x1f] = '(';
    pcVar4[0x20] = '(';
    pcVar4[0x21] = '(';
    pcVar4[0x36] = -0x28;
    pcVar4[0x37] = -0x28;
    pcVar4[0x38] = -0x28;
    pcVar4[0x39] = -0x28;
    pcVar4[0x3a] = -0x28;
    pcVar4[0x3b] = -0x28;
    pcVar4[0x22] = '(';
    pcVar4[0x23] = '(';
    FUN_140440300(param_1,pcVar4 + 8);
    pcVar4[0x24] = '(';
    pcVar4[0x25] = '(';
    pcVar4[0x26] = '(';
    pcVar4[0x27] = '(';
    pcVar4[0x3c] = -0x28;
    pcVar4[0x3d] = -0x28;
    pcVar4[0x3e] = -0x28;
    pcVar4[0x3f] = -0x28;
    pcVar4[0x40] = -0x28;
    pcVar4[0x41] = -0x28;
    pcVar4[0x28] = '(';
    pcVar4[0x29] = '(';
    FUN_140440300(param_1,pcVar4 + 0xc);
    pcVar4[0x2a] = '(';
    pcVar4[0x2b] = '(';
    pcVar4[0x2c] = '(';
    pcVar4[0x2d] = '(';
    pcVar4[0x42] = -0x28;
    pcVar4[0x43] = -0x28;
    pcVar4[0x44] = -0x28;
    pcVar4[0x45] = -0x28;
    pcVar4[0x46] = -0x28;
    pcVar4[0x47] = -0x28;
    pcVar4[0x2e] = '(';
    pcVar4[0x2f] = '(';
    FUN_140440300(param_1,pcVar4 + 0x10);
  }
  parameter_s_is_invalid("SDL_JOYSTICK_HIDAPI_GAMECUBE_RUMBLE_BRAKE",FUN_1406379d0,pcVar4);
  FUN_14043fe30(param_1,"Nintendo GameCube Controller");
  uVar5 = 1;
LAB_140636d6f:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_b8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_b8);
}

