/**
 * Function: Unwind@140257370
 * Address:  140257370
 * Signature: undefined Unwind@140257370(void)
 * Body size: 58 bytes
 */


void Unwind_140257370(undefined8 param_1,longlong param_2)

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

