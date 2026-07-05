/**
 * Function: Unwind@1405612b0
 * Address:  1405612b0
 * Signature: undefined Unwind@1405612b0(void)
 * Body size: 120 bytes
 */


void Unwind_1405612b0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  FUN_1405644d0(param_2 + 0xa8);
  if (*(longlong *)(param_2 + 0x158) != 0) {
    piVar1 = *(int **)(param_2 + 0x158);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_140b68ba8(*(undefined8 *)(param_2 + 0x158));
    }
  }
  return;
}

