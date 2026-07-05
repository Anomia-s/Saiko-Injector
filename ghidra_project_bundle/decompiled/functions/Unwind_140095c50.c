/**
 * Function: Unwind@140095c50
 * Address:  140095c50
 * Signature: undefined Unwind@140095c50(void)
 * Body size: 54 bytes
 */


void Unwind_140095c50(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x78);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x78));
    }
  }
  return;
}

