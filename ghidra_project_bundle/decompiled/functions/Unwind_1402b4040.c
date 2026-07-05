/**
 * Function: Unwind@1402b4040
 * Address:  1402b4040
 * Signature: undefined Unwind@1402b4040(void)
 * Body size: 89 bytes
 */


void Unwind_1402b4040(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x310) != 0) {
    piVar1 = *(int **)(param_2 + 0x310);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_140b68ba8(*(undefined8 *)(param_2 + 0x310));
    }
  }
  return;
}

