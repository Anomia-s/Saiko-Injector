/**
 * Function: Unwind@140265c90
 * Address:  140265c90
 * Signature: undefined Unwind@140265c90(void)
 * Body size: 76 bytes
 */


void Unwind_140265c90(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x70);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x70));
    }
  }
  thunk_FUN_140b68ba8(*(undefined8 *)(param_2 + 0x90),0x28);
  return;
}

