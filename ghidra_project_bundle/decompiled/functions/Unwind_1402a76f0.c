/**
 * Function: Unwind@1402a76f0
 * Address:  1402a76f0
 * Signature: undefined Unwind@1402a76f0(void)
 * Body size: 85 bytes
 */


void Unwind_1402a76f0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x110);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(longlong *)(param_2 + 0x110) != 0)) {
      FUN_140b68ba8();
    }
  }
  return;
}

