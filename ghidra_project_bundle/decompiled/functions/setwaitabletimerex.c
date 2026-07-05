/**
 * Function: setwaitabletimerex
 * Address:  140160da0
 * Signature: undefined setwaitabletimerex(void)
 * Body size: 567 bytes
 */


void setwaitabletimerex(ulonglong param_1)

{
  undefined1 auVar1 [16];
  HMODULE hModule;
  HANDLE pvVar2;
  INT_PTR IVar3;
  ulonglong uVar4;
  longlong lVar5;
  DWORD dwMilliseconds;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  if (DAT_1415260c0 == (FARPROC)0x0 || DAT_1415260b0 == (FARPROC)0x0) {
    if (DAT_1415260c8 == '\0') {
      hModule = GetModuleHandleW(L"kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        DAT_1415260c0 = GetProcAddress(hModule,"CreateWaitableTimerExW");
        DAT_1415260b0 = GetProcAddress(hModule,"SetWaitableTimerEx");
      }
      DAT_1415260c8 = '\x01';
    }
    if ((DAT_1415260c0 != (FARPROC)0x0) && (DAT_1415260b0 != (FARPROC)0x0)) goto LAB_140160e4d;
LAB_140160f15:
    uVar4 = 0xf423ffff0bdc0;
    if (param_1 < 0xf423ffff0bdc0) {
      uVar4 = param_1;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar4;
    pvVar2 = (HANDLE)parameter_s_is_invalid();
    dwMilliseconds = (DWORD)(SUB168(auVar1 * ZEXT816(0x8637bd05af6c7),8) >> 7);
    if (pvVar2 == (HANDLE)0x0) {
      pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      if (pvVar2 == (HANDLE)0x0) {
        if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Could not recover jumptable at 0x000140160fc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          Sleep(dwMilliseconds);
          return;
        }
        goto LAB_140160fca;
      }
      parameter_s_is_invalid(&DAT_1415260cc,pvVar2);
    }
    if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Could not recover jumptable at 0x000140160f9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      WaitForSingleObjectEx(pvVar2,dwMilliseconds,0);
      return;
    }
  }
  else {
LAB_140160e4d:
    pvVar2 = (HANDLE)parameter_s_is_invalid(&DAT_1415260b8);
    if (pvVar2 == (HANDLE)0x0) {
      pvVar2 = (HANDLE)(*DAT_1415260c0)(0,0);
      if (pvVar2 == (HANDLE)0x0) goto LAB_140160f15;
      parameter_s_is_invalid(&DAT_1415260b8,pvVar2,&DAT_140160fe0);
    }
    lVar5 = SUB168(SEXT816((longlong)param_1) * SEXT816(0x5c28f5c28f5c28f5),8) - param_1;
    local_28 = (lVar5 >> 6) - (lVar5 >> 0x3f);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    IVar3 = (*DAT_1415260b0)(pvVar2,&local_28,0,0);
    if ((int)IVar3 != 0) {
      WaitForSingleObject(pvVar2,0xffffffff);
    }
    if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_68)) {
      return;
    }
  }
LAB_140160fca:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_68);
}

