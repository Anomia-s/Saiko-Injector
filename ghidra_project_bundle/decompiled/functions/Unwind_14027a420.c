/**
 * Function: Unwind@14027a420
 * Address:  14027a420
 * Signature: undefined Unwind@14027a420(void)
 * Body size: 107 bytes
 */


void Unwind_14027a420(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x60);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x60));
    }
  }
  piVar1 = *(int **)(param_2 + 0x50);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(longlong *)(param_2 + 0x50) != 0)) {
      FUN_140b68ba8();
    }
  }
  return;
}

