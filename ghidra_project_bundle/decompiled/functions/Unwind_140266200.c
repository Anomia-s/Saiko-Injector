/**
 * Function: Unwind@140266200
 * Address:  140266200
 * Signature: undefined Unwind@140266200(void)
 * Body size: 54 bytes
 */


void Unwind_140266200(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x58);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x58));
    }
  }
  return;
}

