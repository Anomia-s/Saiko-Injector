/**
 * Function: Unwind@140591930
 * Address:  140591930
 * Signature: undefined Unwind@140591930(void)
 * Body size: 56 bytes
 */


void Unwind_140591930(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x48);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(longlong *)(param_2 + 0x48) != 0)) {
      FUN_140b68ba8();
    }
  }
  return;
}

