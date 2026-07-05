/**
 * Function: Unwind@140074120
 * Address:  140074120
 * Signature: undefined Unwind@140074120(void)
 * Body size: 87 bytes
 */


void Unwind_140074120(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x200);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x200));
    }
  }
  return;
}

