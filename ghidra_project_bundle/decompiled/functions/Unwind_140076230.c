/**
 * Function: Unwind@140076230
 * Address:  140076230
 * Signature: undefined Unwind@140076230(void)
 * Body size: 76 bytes
 */


void Unwind_140076230(undefined8 param_1,longlong param_2)

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

