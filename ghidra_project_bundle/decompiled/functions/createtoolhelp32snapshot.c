/**
 * Function: createtoolhelp32snapshot
 * Address:  140cdaad0
 * Signature: undefined createtoolhelp32snapshot(void)
 * Body size: 517 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void createtoolhelp32snapshot(LPCSTR param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  HANDLE hObject;
  INT_PTR IVar4;
  undefined1 auStack_288 [32];
  undefined4 local_268 [10];
  HMODULE local_240;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_288;
  hModule = LoadLibraryW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\dso\\dso_win32.c",0x261,"win32_globallookup");
    FUN_140b91cc0(0x25,0x6c,0);
  }
  else {
    pFVar1 = GetProcAddress(hModule,"CreateToolhelp32Snapshot");
    if (pFVar1 == (FARPROC)0x0) {
      FreeLibrary(hModule);
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\dso\\dso_win32.c",0x269,"win32_globallookup");
      FUN_140b91cc0(0x25,0x6c,0);
    }
    else {
      pFVar2 = GetProcAddress(hModule,"Module32First");
      pFVar3 = GetProcAddress(hModule,"Module32Next");
      hObject = (HANDLE)(*pFVar1)(8,0);
      if (hObject == (HANDLE)0xffffffffffffffff) {
        FreeLibrary(hModule);
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\dso\\dso_win32.c",0x279,"win32_globallookup");
        FUN_140b91cc0(0x25,0x6c,0);
      }
      else {
        local_268[0] = 0x238;
        IVar4 = (*pFVar2)(hObject,local_268);
        if ((int)IVar4 == 0) {
          CloseHandle(hObject);
          FreeLibrary(hModule);
        }
        else {
          do {
            pFVar1 = GetProcAddress(local_240,param_1);
            if (pFVar1 != (FARPROC)0x0) {
              CloseHandle(hObject);
              FreeLibrary(hModule);
              goto LAB_140cdaccd;
            }
            IVar4 = (*pFVar3)(hObject,local_268);
          } while ((int)IVar4 != 0);
          CloseHandle(hObject);
          FreeLibrary(hModule);
        }
      }
    }
  }
LAB_140cdaccd:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_288);
}

