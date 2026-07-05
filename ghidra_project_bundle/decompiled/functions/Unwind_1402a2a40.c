/**
 * Function: Unwind@1402a2a40
 * Address:  1402a2a40
 * Signature: undefined Unwind@1402a2a40(void)
 * Body size: 51 bytes
 */


void Unwind_1402a2a40(undefined8 param_1,longlong param_2)

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

