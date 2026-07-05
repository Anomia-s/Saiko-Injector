/**
 * Function: Unwind@140081b40
 * Address:  140081b40
 * Signature: undefined Unwind@140081b40(void)
 * Body size: 50 bytes
 */


void Unwind_140081b40(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x90);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x90));
    }
  }
  return;
}

