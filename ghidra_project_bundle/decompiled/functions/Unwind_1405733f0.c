/**
 * Function: Unwind@1405733f0
 * Address:  1405733f0
 * Signature: undefined Unwind@1405733f0(void)
 * Body size: 59 bytes
 */


void Unwind_1405733f0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x28));
    }
  }
  return;
}

