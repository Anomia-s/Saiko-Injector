/**
 * Function: Unwind@140069d00
 * Address:  140069d00
 * Signature: undefined Unwind@140069d00(void)
 * Body size: 59 bytes
 */


void Unwind_140069d00(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x30);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x30));
    }
  }
  return;
}

