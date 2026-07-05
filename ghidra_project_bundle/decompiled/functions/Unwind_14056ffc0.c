/**
 * Function: Unwind@14056ffc0
 * Address:  14056ffc0
 * Signature: undefined Unwind@14056ffc0(void)
 * Body size: 77 bytes
 */


void Unwind_14056ffc0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  FUN_140570060(param_2 + 0x80);
  piVar1 = *(int **)(param_2 + 0x30);
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    FUN_140b68ba8();
  }
  return;
}

