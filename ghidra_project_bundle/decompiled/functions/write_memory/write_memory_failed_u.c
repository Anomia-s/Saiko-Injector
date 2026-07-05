/**
 * Function: write_memory_failed_u
 * Address:  14064baf0
 * Signature: undefined write_memory_failed_u(void)
 * Body size: 321 bytes
 */


void write_memory_failed_u(longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined6 uStack_40;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  uStack_40 = 0;
  uStack_3a = 0;
  uStack_38 = 0;
  local_48 = (ulonglong)
             CONCAT16(param_3,CONCAT15(1,CONCAT14((char)param_2,
                                                  CONCAT13((char)((uint)param_2 >> 8),
                                                           CONCAT12((char)((uint)param_2 >> 0x10),
                                                                    CONCAT11((char)param_1[5],0x16))
                                                          )) | 0x400));
  iVar1 = FUN_14017a5d0(*(undefined8 *)(*param_1 + 0x80),&local_48,0x16);
  if (-1 < iVar1) {
    lVar2 = sdl_timer_resolution();
    do {
      while( true ) {
        iVar1 = FUN_140106170(*param_1 + 0x88);
        if (iVar1 < 1) break;
LAB_14064bb9f:
        uVar3 = sdl_timer_resolution();
        if (lVar2 + 0xfaU <= uVar3) {
LAB_14064bc05:
          FUN_1400fbed0("Read timed out");
          goto LAB_14064bc11;
        }
        FUN_140118490(1);
      }
      iVar1 = FUN_14017a630(*(undefined8 *)(*param_1 + 0x80),(char *)((longlong)param_1 + 0x2c),0x16
                            ,0);
      if (iVar1 == -1) goto LAB_14064bc05;
      if (iVar1 < 1) goto LAB_14064bb9f;
    } while ((*(char *)((longlong)param_1 + 0x2c) != '\"') ||
            (*(char *)((longlong)param_1 + 0x2f) != '\x16'));
    if ((char)param_1[6] != '\0') {
      FUN_1400fbed0("Write memory failed: %u");
    }
  }
LAB_14064bc11:
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_68);
}

