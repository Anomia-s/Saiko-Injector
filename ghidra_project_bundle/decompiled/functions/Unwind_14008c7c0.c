/**
 * Function: Unwind@14008c7c0
 * Address:  14008c7c0
 * Signature: undefined Unwind@14008c7c0(void)
 * Body size: 62 bytes
 */


void Unwind_14008c7c0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x98);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x98));
    }
  }
  return;
}

