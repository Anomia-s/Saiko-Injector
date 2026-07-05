/**
 * Function: Unwind@1402d7150
 * Address:  1402d7150
 * Signature: undefined Unwind@1402d7150(void)
 * Body size: 58 bytes
 */


void Unwind_1402d7150(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x90);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x90));
    }
  }
  return;
}

