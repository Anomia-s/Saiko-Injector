/**
 * Function: Unwind@14057e2b0
 * Address:  14057e2b0
 * Signature: undefined Unwind@14057e2b0(void)
 * Body size: 50 bytes
 */


void Unwind_14057e2b0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x50) != 0) {
    piVar1 = *(int **)(param_2 + 0x50);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_140b68ba8(*(undefined8 *)(param_2 + 0x50));
    }
  }
  return;
}

