/**
 * Function: Unwind@140258ce0
 * Address:  140258ce0
 * Signature: undefined Unwind@140258ce0(void)
 * Body size: 71 bytes
 */


void Unwind_140258ce0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x40);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x40));
    }
  }
  FUN_140b686c8(&DAT_1416b8550);
  return;
}

