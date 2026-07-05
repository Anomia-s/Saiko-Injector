/**
 * Function: Unwind@14056e0e0
 * Address:  14056e0e0
 * Signature: undefined Unwind@14056e0e0(void)
 * Body size: 55 bytes
 */


void Unwind_14056e0e0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x30);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x30));
    }
  }
  return;
}

