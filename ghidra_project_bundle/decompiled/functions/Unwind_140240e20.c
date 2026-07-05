/**
 * Function: Unwind@140240e20
 * Address:  140240e20
 * Signature: undefined Unwind@140240e20(void)
 * Body size: 87 bytes
 */


void Unwind_140240e20(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x170);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x170));
    }
  }
  return;
}

