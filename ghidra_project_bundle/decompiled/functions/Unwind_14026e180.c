/**
 * Function: Unwind@14026e180
 * Address:  14026e180
 * Signature: undefined Unwind@14026e180(void)
 * Body size: 51 bytes
 */


void Unwind_14026e180(undefined8 param_1,longlong param_2)

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

