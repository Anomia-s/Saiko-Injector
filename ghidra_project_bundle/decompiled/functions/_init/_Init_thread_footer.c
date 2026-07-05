/**
 * Function: _Init_thread_footer
 * Address:  140b68704
 * Signature: undefined _Init_thread_footer(void)
 * Body size: 105 bytes
 */


/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14151ed08);
  uVar1 = (ulonglong)_tls_index;
  DAT_1414f3048 = DAT_1414f3048 + 1;
  *param_1 = DAT_1414f3048;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x140) = DAT_1414f3048;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14151ed08);
                    /* WARNING: Could not recover jumptable at 0x000140b68766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable(&DAT_14151ed00);
  return;
}

