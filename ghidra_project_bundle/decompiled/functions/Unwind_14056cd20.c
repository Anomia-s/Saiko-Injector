/**
 * Function: Unwind@14056cd20
 * Address:  14056cd20
 * Signature: undefined Unwind@14056cd20(void)
 * Body size: 57 bytes
 */


void Unwind_14056cd20(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x38);
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    FUN_140b68ba8(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}

