/**
 * Function: cancelioex
 * Address:  140175d40
 * Signature: undefined cancelioex(void)
 * Body size: 333 bytes
 */


void cancelioex(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  undefined1 auStack_48 [36];
  DWORD local_24;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  hModule = GetModuleHandleW(L"kernel32.dll");
  pFVar4 = GetProcAddress(hModule,"CancelIoEx");
  if (param_1 != (undefined8 *)0x0) {
    if (pFVar4 == (FARPROC)0x0) {
      CancelIo((HANDLE)*param_1);
      iVar1 = *(int *)(param_1 + 7);
    }
    else {
      (*pFVar4)((HANDLE)*param_1,0);
      iVar1 = *(int *)(param_1 + 7);
    }
    if (iVar1 != 0) {
      local_24 = 0;
      GetOverlappedResult((HANDLE)*param_1,(LPOVERLAPPED)(param_1 + 9),&local_24,1);
    }
    CloseHandle((HANDLE)param_1[0xc]);
    CloseHandle((HANDLE)param_1[0x10]);
    CloseHandle((HANDLE)*param_1);
    FUN_140160cf0(param_1[6]);
    param_1[6] = 0;
    FUN_140160cf0(param_1[2]);
    FUN_140160cf0(param_1[5]);
    FUN_140160cf0(param_1[8]);
    puVar3 = (undefined8 *)param_1[0x11];
    while (puVar3 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)puVar3[7];
      FUN_140160cf0(*puVar3);
      FUN_140160cf0(puVar3[2]);
      FUN_140160cf0(puVar3[4]);
      FUN_140160cf0(puVar3[5]);
      FUN_140160cf0(puVar3);
      puVar3 = puVar2;
    }
    FUN_140160cf0(param_1);
  }
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_48);
}

