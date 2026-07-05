/**
 * Function: Unwind@1400937d0
 * Address:  1400937d0
 * Signature: undefined Unwind@1400937d0(void)
 * Body size: 58 bytes
 */


void Unwind_1400937d0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x88);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x88));
    }
  }
  return;
}

