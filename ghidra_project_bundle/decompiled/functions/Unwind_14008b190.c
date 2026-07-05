/**
 * Function: Unwind@14008b190
 * Address:  14008b190
 * Signature: undefined Unwind@14008b190(void)
 * Body size: 49 bytes
 */


void Unwind_14008b190(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x40);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x40));
    }
  }
  return;
}

