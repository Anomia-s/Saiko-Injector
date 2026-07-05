/**
 * Function: read_timed_out
 * Address:  14064b9a0
 * Signature: undefined read_timed_out(void)
 * Body size: 309 bytes
 */


undefined8 read_timed_out(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [41];
  undefined1 local_2f;
  byte local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  local_2f = 0x17;
  local_2e = *(byte *)(param_1 + 5) | 4;
  local_2d = (undefined1)((ulonglong)param_2 >> 0x10);
  local_2c = (undefined1)((ulonglong)param_2 >> 8);
  local_2b = (undefined1)param_2;
  local_2a = 0x200;
  if (param_3 == '\0') {
    cVar1 = hidapi_rumble();
    if ((cVar1 != '\0') && (iVar2 = FUN_14064f890(*param_1,&local_2f,7), -1 < iVar2))
    goto LAB_14064baa6;
  }
  else {
    iVar2 = FUN_14017a5d0(*(undefined8 *)(*param_1 + 0x80),&local_2f,7);
    if (-1 < iVar2) {
      lVar3 = sdl_timer_resolution();
      do {
        while (iVar2 = FUN_140106170(*param_1 + 0x88), 0 < iVar2) {
LAB_14064ba44:
          uVar4 = sdl_timer_resolution();
          if (lVar3 + 0xfaU <= uVar4) {
LAB_14064baaa:
            FUN_1400fbed0("Read timed out");
            goto LAB_14064bab6;
          }
          FUN_140118490(1);
        }
        iVar2 = FUN_14017a630(*(undefined8 *)(*param_1 + 0x80),(char *)((longlong)param_1 + 0x2c),
                              0x16,0);
        if (iVar2 == -1) goto LAB_14064baaa;
        if (iVar2 < 1) goto LAB_14064ba44;
      } while (*(char *)((longlong)param_1 + 0x2c) != '!');
LAB_14064baa6:
      uVar5 = 1;
      goto LAB_14064bab8;
    }
  }
LAB_14064bab6:
  uVar5 = 0;
LAB_14064bab8:
  if (DAT_1414ef3c0 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_28 ^ (ulonglong)auStack_58);
  }
  return uVar5;
}

