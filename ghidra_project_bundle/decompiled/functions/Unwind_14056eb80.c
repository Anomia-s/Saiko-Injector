/**
 * Function: Unwind@14056eb80
 * Address:  14056eb80
 * Signature: undefined Unwind@14056eb80(void)
 * Body size: 63 bytes
 */


void Unwind_14056eb80(undefined8 param_1,longlong param_2)

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

