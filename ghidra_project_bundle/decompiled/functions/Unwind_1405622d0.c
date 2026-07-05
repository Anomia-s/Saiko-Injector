/**
 * Function: Unwind@1405622d0
 * Address:  1405622d0
 * Signature: undefined Unwind@1405622d0(void)
 * Body size: 111 bytes
 */


void Unwind_1405622d0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x110) != 0) {
    piVar1 = *(int **)(param_2 + 0x110);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_140b68ba8(*(undefined8 *)(param_2 + 0x110));
    }
  }
  return;
}

