/**
 * Function: Unwind@1402d6bf0
 * Address:  1402d6bf0
 * Signature: undefined Unwind@1402d6bf0(void)
 * Body size: 84 bytes
 */


void Unwind_1402d6bf0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x48);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x48));
    }
  }
  thunk_FUN_140b68ba8(*(undefined8 *)(param_2 + 0xa8),0x28);
  return;
}

