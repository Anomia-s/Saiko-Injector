/**
 * Function: rouninitialize
 * Address:  1403d7870
 * Signature: undefined rouninitialize(void)
 * Body size: 101 bytes
 */


void rouninitialize(void)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  
  if (DAT_1416f1350 == '\0') {
    DAT_1416f1358 = LoadLibraryExW(L"combase.dll",(HANDLE)0x0,0x800);
    DAT_1416f1350 = '\x01';
  }
  if ((DAT_1416f1358 != (HMODULE)0x0) &&
     (UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_1416f1358,"RoUninitialize"),
     UNRECOVERED_JUMPTABLE != (FARPROC)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001403d78cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

