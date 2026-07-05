/**
 * Function: Unwind@14023e590
 * Address:  14023e590
 * Signature: undefined Unwind@14023e590(void)
 * Body size: 87 bytes
 */


void Unwind_14023e590(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x170);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x170));
    }
  }
  return;
}

