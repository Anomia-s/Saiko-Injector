/**
 * Function: Unwind@140561330
 * Address:  140561330
 * Signature: undefined Unwind@140561330(void)
 * Body size: 111 bytes
 */


void Unwind_140561330(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x160) != 0) {
    piVar1 = *(int **)(param_2 + 0x160);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_140b68ba8(*(undefined8 *)(param_2 + 0x160));
    }
  }
  return;
}

