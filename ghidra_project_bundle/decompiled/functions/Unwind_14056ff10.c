/**
 * Function: Unwind@14056ff10
 * Address:  14056ff10
 * Signature: undefined Unwind@14056ff10(void)
 * Body size: 83 bytes
 */


void Unwind_14056ff10(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x38);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(longlong *)(param_2 + 0x38) != 0)) {
      FUN_140b68ba8();
    }
  }
  return;
}

