/**
 * Function: Unwind@14008a810
 * Address:  14008a810
 * Signature: undefined Unwind@14008a810(void)
 * Body size: 68 bytes
 */


void Unwind_14008a810(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x238);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x238));
    }
  }
  return;
}

