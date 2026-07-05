/**
 * Function: getthreaddescription
 * Address:  1401a5980
 * Signature: undefined getthreaddescription(void)
 * Body size: 365 bytes
 */


undefined * getthreaddescription(DWORD param_1)

{
  DWORD *pDVar1;
  HANDLE hObject;
  INT_PTR IVar2;
  size_t sVar3;
  HMODULE hModule;
  undefined *puVar4;
  undefined1 auStack_58 [40];
  wchar_t *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  for (pDVar1 = DAT_1416b46b0; pDVar1 != (DWORD *)0x0; pDVar1 = *(DWORD **)(pDVar1 + 4)) {
    if (*pDVar1 == param_1) {
      puVar4 = *(undefined **)(pDVar1 + 2);
      goto LAB_1401a5a71;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_141526418) && (FUN_140b6864c(&DAT_141526418), DAT_141526418 == -1)) {
    hModule = GetModuleHandleA("kernel32.dll");
    DAT_141526410 = GetProcAddress(hModule,"GetThreadDescription");
    _Init_thread_footer(&DAT_141526418);
  }
  if (((DAT_141526410 != (FARPROC)0x0) &&
      (hObject = OpenThread(0x800,0,param_1), hObject != (HANDLE)0x0)) &&
     (IVar2 = (*DAT_141526410)(hObject,&local_30), -1 < (int)IVar2)) {
    puVar4 = &DAT_141526310;
    sVar3 = wcstombs(&DAT_141526310,local_30,0x100);
    CloseHandle(hObject);
    LocalFree(local_30);
    if (sVar3 != 0xffffffffffffffff) goto LAB_1401a5a71;
  }
  puVar4 = &DAT_141526310;
  FUN_1401a5af0(&DAT_141526310,"%u",param_1);
LAB_1401a5a71:
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_58)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_58);
}

