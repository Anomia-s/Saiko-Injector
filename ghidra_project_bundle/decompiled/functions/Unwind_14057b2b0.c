/**
 * Function: Unwind@14057b2b0
 * Address:  14057b2b0
 * Signature: undefined Unwind@14057b2b0(void)
 * Body size: 117 bytes
 */


void Unwind_14057b2b0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x1b0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x1b0));
    }
  }
  return;
}

