/**
 * Function: camera_subsystem_is_not_initialized
 * Address:  1400fe940
 * Signature: undefined camera_subsystem_is_not_initialized(void)
 * Body size: 329 bytes
 */


longlong camera_subsystem_is_not_initialized(int *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  if (DAT_141524bc0 == 0) {
    if (param_1 != (int *)0x0) {
      *param_1 = 0;
    }
    FUN_1400fbed0("Camera subsystem is not initialized");
    lVar3 = 0;
  }
  else {
    FUN_140158000(DAT_141524c18);
    iVar2 = FUN_140106170(&DAT_141524c40);
    lVar3 = FUN_140160c40((longlong)iVar2 * 4 + 4);
    if (lVar3 == 0) {
      iVar2 = 0;
      FUN_140158040(DAT_141524c18);
    }
    else {
      local_58 = 0;
      cVar1 = FUN_1403d8c20(DAT_141524c20,local_48,local_50,&local_58);
      if (cVar1 == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined4 *)(lVar3 + uVar4 * 4) = local_48[0];
          uVar4 = uVar4 + 1;
          cVar1 = FUN_1403d8c20(DAT_141524c20,local_48,local_50,&local_58);
        } while (cVar1 != '\0');
        uVar4 = uVar4 & 0xffffffff;
      }
      *(undefined4 *)(lVar3 + uVar4 * 4) = 0;
      FUN_140158040(DAT_141524c18);
    }
    if (param_1 != (int *)0x0) {
      *param_1 = iVar2;
    }
  }
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_78)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_78);
}

