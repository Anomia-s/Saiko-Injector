/**
 * Function: couldnt_set_up_raw_input_handling
 * Address:  140468e60
 * Signature: undefined couldnt_set_up_raw_input_handling(void)
 * Body size: 632 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong couldnt_set_up_raw_input_handling(longlong param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined1 auStackY_68 [32];
  HANDLE local_38;
  HANDLE local_30;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStackY_68;
  iVar2 = (uint)*(byte *)(param_1 + 0x100) + (uint)*(byte *)(param_1 + 0x101) * 2;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(int *)(param_1 + 0x104) == iVar2) goto LAB_140469091;
  if (DAT_141503e98 != (HANDLE)0xffffffffffffffff) {
    DAT_141503e80 = 1;
    SetEvent(DAT_141503e90);
    WaitForSingleObject(DAT_141503e98,3000);
    CloseHandle(DAT_141503e98);
    DAT_141503e98 = (HANDLE)0xffffffffffffffff;
  }
  if (DAT_141503e88 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(DAT_141503e88);
    DAT_141503e88 = (HANDLE)0xffffffffffffffff;
  }
  if (DAT_141503e90 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(DAT_141503e90);
    DAT_141503e90 = (HANDLE)0xffffffffffffffff;
  }
  if ((char)iVar2 == '\0') {
LAB_140468ff4:
    *(int *)(param_1 + 0x104) = iVar2;
    goto LAB_140469091;
  }
  _DAT_141503e84 = iVar2;
  DAT_141503e88 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  if (DAT_141503e88 == (HANDLE)0xffffffffffffffff) {
LAB_140468fff:
    FUN_1403d7710("CreateEvent");
  }
  else {
    DAT_141503e80 = 0;
    DAT_141503e90 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    if (DAT_141503e90 == (HANDLE)0xffffffffffffffff) goto LAB_140468fff;
    DAT_141503e98 =
         CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_140469140,&DAT_141503e80,0,(LPDWORD)0x0);
    if (DAT_141503e98 == (HANDLE)0xffffffffffffffff) {
      FUN_1403d7710("CreateThread");
    }
    else {
      local_38 = DAT_141503e88;
      local_30 = DAT_141503e98;
      DVar1 = WaitForMultipleObjects(2,&local_38,0,0xffffffff);
      if (DVar1 == 0) goto LAB_140468ff4;
      FUN_1400fbed0("Couldn\'t set up raw input handling");
    }
  }
  if (DAT_141503e98 != (HANDLE)0xffffffffffffffff) {
    DAT_141503e80 = 1;
    SetEvent(DAT_141503e90);
    WaitForSingleObject(DAT_141503e98,3000);
    CloseHandle(DAT_141503e98);
    DAT_141503e98 = (HANDLE)0xffffffffffffffff;
  }
  if (DAT_141503e88 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(DAT_141503e88);
    DAT_141503e88 = (HANDLE)0xffffffffffffffff;
  }
  if (DAT_141503e90 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(DAT_141503e90);
    DAT_141503e90 = (HANDLE)0xffffffffffffffff;
  }
  uVar3 = 0;
LAB_140469091:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStackY_68)) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStackY_68);
}

