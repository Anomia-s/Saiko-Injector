/**
 * Function: Unwind@140573ea0
 * Address:  140573ea0
 * Signature: undefined Unwind@140573ea0(void)
 * Body size: 59 bytes
 */


void Unwind_140573ea0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(longlong *)(param_2 + 0x28) != 0)) {
      FUN_140b68ba8();
    }
  }
  return;
}

