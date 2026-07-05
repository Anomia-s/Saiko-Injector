/**
 * Function: Unwind@140268070
 * Address:  140268070
 * Signature: undefined Unwind@140268070(void)
 * Body size: 125 bytes
 */


void Unwind_140268070(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x1d8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x1d8));
    }
  }
  return;
}

