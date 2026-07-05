/**
 * Function: Unwind@1402abbd0
 * Address:  1402abbd0
 * Signature: undefined Unwind@1402abbd0(void)
 * Body size: 87 bytes
 */


void Unwind_1402abbd0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  FUN_1402abd10(param_2 + 0x100);
  piVar1 = *(int **)(param_2 + 0xf0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(longlong *)(param_2 + 0xf0) != 0)) {
      FUN_140b68ba8();
    }
  }
  return;
}

