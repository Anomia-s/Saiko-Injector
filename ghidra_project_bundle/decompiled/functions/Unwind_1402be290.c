/**
 * Function: Unwind@1402be290
 * Address:  1402be290
 * Signature: undefined Unwind@1402be290(void)
 * Body size: 70 bytes
 */


void Unwind_1402be290(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x50);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x50));
    }
  }
  return;
}

