/**
 * Function: Unwind@14028baa0
 * Address:  14028baa0
 * Signature: undefined Unwind@14028baa0(void)
 * Body size: 70 bytes
 */


void Unwind_14028baa0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0xe0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0xe0));
    }
  }
  return;
}

