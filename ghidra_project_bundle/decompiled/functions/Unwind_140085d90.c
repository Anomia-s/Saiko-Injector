/**
 * Function: Unwind@140085d90
 * Address:  140085d90
 * Signature: undefined Unwind@140085d90(void)
 * Body size: 71 bytes
 */


void Unwind_140085d90(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x98) != 0) {
    piVar1 = *(int **)(param_2 + 0x98);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_140b68ba8(*(undefined8 *)(param_2 + 0x98));
    }
  }
  return;
}

