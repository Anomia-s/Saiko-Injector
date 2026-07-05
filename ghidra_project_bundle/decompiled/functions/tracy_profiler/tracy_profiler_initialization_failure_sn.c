/**
 * Function: tracy_profiler_initialization_failure_sn
 * Address:  140dbc9e0
 * Signature: undefined tracy_profiler_initialization_failure_sn(void)
 * Body size: 212 bytes
 */


void tracy_profiler_initialization_failure_sn(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined8 uVar3;
  FILE *_File;
  
  BVar1 = AttachConsole(0xffffffff);
  if (BVar1 != 0) {
    uVar3 = __acrt_iob_func(2);
    FUN_14002b100(uVar3,"Tracy Profiler initialization failure: %s\n",param_1);
    _File = (FILE *)__acrt_iob_func(2);
    freopen("CONOUT$","w",_File);
    uVar3 = __acrt_iob_func(2);
    FUN_14002b100(uVar3,"Tracy Profiler initialization failure: %s\n",param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  DVar2 = GetLastError();
  if (DVar2 == 5) {
    uVar3 = __acrt_iob_func(2);
    FUN_14002b100(uVar3,"Tracy Profiler initialization failure: %s\n",param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  MessageBoxA((HWND)0x0,param_1,"Tracy Profiler initialization failure",0x10);
                    /* WARNING: Subroutine does not return */
  exit(1);
}

