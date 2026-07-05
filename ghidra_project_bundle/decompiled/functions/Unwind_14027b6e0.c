/**
 * Function: Unwind@14027b6e0
 * Address:  14027b6e0
 * Signature: undefined Unwind@14027b6e0(void)
 * Body size: 60 bytes
 */


void Unwind_14027b6e0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x28) != 0) {
    piVar1 = *(int **)(param_2 + 0x28);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_140b68ba8(*(undefined8 *)(param_2 + 0x28));
    }
  }
  return;
}

