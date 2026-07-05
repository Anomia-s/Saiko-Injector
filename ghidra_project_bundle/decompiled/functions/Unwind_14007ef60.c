/**
 * Function: Unwind@14007ef60
 * Address:  14007ef60
 * Signature: undefined Unwind@14007ef60(void)
 * Body size: 52 bytes
 */


void Unwind_14007ef60(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x60);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x60));
    }
  }
  return;
}

