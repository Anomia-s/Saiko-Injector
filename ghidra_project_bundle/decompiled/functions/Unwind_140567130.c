/**
 * Function: Unwind@140567130
 * Address:  140567130
 * Signature: undefined Unwind@140567130(void)
 * Body size: 47 bytes
 */


void Unwind_140567130(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x28));
    }
  }
  return;
}

