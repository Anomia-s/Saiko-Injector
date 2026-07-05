/**
 * Function: Unwind@140265d10
 * Address:  140265d10
 * Signature: undefined Unwind@140265d10(void)
 * Body size: 62 bytes
 */


void Unwind_140265d10(undefined8 param_1,longlong param_2)

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

