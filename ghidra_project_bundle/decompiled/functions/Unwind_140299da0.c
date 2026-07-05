/**
 * Function: Unwind@140299da0
 * Address:  140299da0
 * Signature: undefined Unwind@140299da0(void)
 * Body size: 58 bytes
 */


void Unwind_140299da0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x70);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x70));
    }
  }
  return;
}

