/**
 * Function: initializesrwlock
 * Address:  140157e90
 * Signature: undefined initializesrwlock(void)
 * Body size: 342 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initializesrwlock(void)

{
  HMODULE hModule;
  undefined **ppuVar1;
  
  if ((code *)CONCAT44(DAT_141525b10._4_4_,(undefined4)DAT_141525b10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140157ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)CONCAT44(DAT_141525b10._4_4_,(undefined4)DAT_141525b10))();
    return;
  }
  hModule = GetModuleHandleW(L"kernel32.dll");
  ppuVar1 = &PTR_FUN_140debc38;
  if (hModule != (HMODULE)0x0) {
    DAT_141525b48 = GetProcAddress(hModule,"InitializeSRWLock");
    if (DAT_141525b48 != (FARPROC)0x0) {
      DAT_141525b50 = GetProcAddress(hModule,"ReleaseSRWLockShared");
      if (DAT_141525b50 != (FARPROC)0x0) {
        _DAT_141525b58 = GetProcAddress(hModule,"AcquireSRWLockShared");
        if (_DAT_141525b58 != (FARPROC)0x0) {
          DAT_141525b60 = GetProcAddress(hModule,"TryAcquireSRWLockShared");
          if (DAT_141525b60 != (FARPROC)0x0) {
            DAT_141525b68 = GetProcAddress(hModule,"ReleaseSRWLockExclusive");
            if (DAT_141525b68 != (FARPROC)0x0) {
              DAT_141525b70 = GetProcAddress(hModule,"AcquireSRWLockExclusive");
              if (DAT_141525b70 != (FARPROC)0x0) {
                DAT_141525b78 = GetProcAddress(hModule,"TryAcquireSRWLockExclusive");
                ppuVar1 = &PTR_FUN_140debc70;
                if (DAT_141525b78 == (FARPROC)0x0) {
                  ppuVar1 = &PTR_FUN_140debc38;
                }
              }
            }
          }
        }
      }
    }
  }
  DAT_141525b10._0_4_ = *(undefined4 *)ppuVar1;
  DAT_141525b10._4_4_ = *(undefined4 *)((longlong)ppuVar1 + 4);
  _DAT_141525b18 = *(undefined4 *)(ppuVar1 + 1);
  uRam0000000141525b1c = *(undefined4 *)((longlong)ppuVar1 + 0xc);
  _DAT_141525b20 = *(undefined4 *)(ppuVar1 + 2);
  uRam0000000141525b24 = *(undefined4 *)((longlong)ppuVar1 + 0x14);
  _DAT_141525b28 = *(undefined4 *)(ppuVar1 + 3);
  uRam0000000141525b2c = *(undefined4 *)((longlong)ppuVar1 + 0x1c);
  _DAT_141525b30 = *(undefined4 *)(ppuVar1 + 4);
  uRam0000000141525b34 = *(undefined4 *)((longlong)ppuVar1 + 0x24);
  _DAT_141525b38 = *(undefined4 *)(ppuVar1 + 5);
  uRam0000000141525b3c = *(undefined4 *)((longlong)ppuVar1 + 0x2c);
  _DAT_141525b40 = ppuVar1[6];
                    /* WARNING: Could not recover jumptable at 0x000140157fe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*ppuVar1)();
  return;
}

