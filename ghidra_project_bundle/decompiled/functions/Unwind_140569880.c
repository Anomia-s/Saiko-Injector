/**
 * Function: Unwind@140569880
 * Address:  140569880
 * Signature: undefined Unwind@140569880(void)
 * Body size: 71 bytes
 */


void Unwind_140569880(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x58);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(longlong *)(param_2 + 0x58) != 0)) {
      FUN_140b68ba8();
    }
  }
  return;
}

