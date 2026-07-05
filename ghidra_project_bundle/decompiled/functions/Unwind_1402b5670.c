/**
 * Function: Unwind@1402b5670
 * Address:  1402b5670
 * Signature: undefined Unwind@1402b5670(void)
 * Body size: 74 bytes
 */


void Unwind_1402b5670(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  FUN_1400017d0(param_2 + 0x90);
  piVar1 = *(int **)(param_2 + 0x80);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(longlong *)(param_2 + 0x80) != 0)) {
      FUN_140b68ba8();
    }
  }
  return;
}

