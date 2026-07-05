/**
 * Function: ntsettimerresolution
 * Address:  1403be8f0
 * Signature: undefined ntsettimerresolution(void)
 * Body size: 134 bytes
 */


void ntsettimerresolution(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_1414ef3c0 ^ (ulonglong)auStack_38;
  if (((byte)DAT_1415034c8 & 1) != 0) {
    hModule = GetModuleHandleA("ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"NtSetTimerResolution");
      if ((pFVar1 != (FARPROC)0x0) && (DAT_1416dfb70 != 0)) {
        (*pFVar1)((ulonglong)(uint)DAT_1416dfb70,0,local_c);
        DAT_1416dfb70 = 0;
      }
    }
  }
  if (DAT_1414ef3c0 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_8 ^ (ulonglong)auStack_38);
}

