/**
 * Function: Unwind@14056feb0
 * Address:  14056feb0
 * Signature: undefined Unwind@14056feb0(void)
 * Body size: 83 bytes
 */


void Unwind_14056feb0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x80);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(longlong *)(param_2 + 0x80) != 0)) {
      FUN_140b68ba8();
    }
  }
  return;
}

