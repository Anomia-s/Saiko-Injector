/**
 * Function: Unwind@14026ad50
 * Address:  14026ad50
 * Signature: undefined Unwind@14026ad50(void)
 * Body size: 84 bytes
 */


void Unwind_14026ad50(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0xb0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0xb0));
    }
  }
  thunk_FUN_140b68ba8(*(undefined8 *)(param_2 + 200),0x28);
  return;
}

