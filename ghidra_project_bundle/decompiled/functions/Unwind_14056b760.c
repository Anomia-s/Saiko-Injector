/**
 * Function: Unwind@14056b760
 * Address:  14056b760
 * Signature: undefined Unwind@14056b760(void)
 * Body size: 93 bytes
 */


void Unwind_14056b760(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x20));
    }
  }
  return;
}

