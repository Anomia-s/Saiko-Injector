/**
 * Function: Unwind@1402b3f80
 * Address:  1402b3f80
 * Signature: undefined Unwind@1402b3f80(void)
 * Body size: 101 bytes
 */


void Unwind_1402b3f80(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  FUN_1400017d0(param_2 + 0x170);
  piVar1 = *(int **)(param_2 + 0x160);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(longlong *)(param_2 + 0x160) != 0)) {
      FUN_140b68ba8();
    }
  }
  return;
}

