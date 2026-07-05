/**
 * Function: Unwind@14057de20
 * Address:  14057de20
 * Signature: undefined Unwind@14057de20(void)
 * Body size: 53 bytes
 */


void Unwind_14057de20(undefined8 param_1,longlong param_2)

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

