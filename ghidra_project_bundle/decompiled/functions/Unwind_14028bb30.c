/**
 * Function: Unwind@14028bb30
 * Address:  14028bb30
 * Signature: undefined Unwind@14028bb30(void)
 * Body size: 87 bytes
 */


void Unwind_14028bb30(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  piVar2 = *(int **)(param_2 + 0xe0);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      free(*(void **)(param_2 + 0xe0));
    }
  }
  thunk_FUN_140b68ba8(uVar1,0x68);
  return;
}

