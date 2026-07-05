/**
 * Function: Unwind@14057e0a0
 * Address:  14057e0a0
 * Signature: undefined Unwind@14057e0a0(void)
 * Body size: 49 bytes
 */


void Unwind_14057e0a0(undefined8 param_1,longlong param_2)

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

