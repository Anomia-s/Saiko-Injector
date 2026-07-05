/**
 * Function: Unwind@140571e90
 * Address:  140571e90
 * Signature: undefined Unwind@140571e90(void)
 * Body size: 47 bytes
 */


void Unwind_140571e90(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_140b68ba8(piVar1);
    }
  }
  return;
}

