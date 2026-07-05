/**
 * Function: Unwind@1402aaf00
 * Address:  1402aaf00
 * Signature: undefined Unwind@1402aaf00(void)
 * Body size: 85 bytes
 */


void Unwind_1402aaf00(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    piVar1 = *(int **)(param_2 + 0x1c8);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_140b68ba8(*(undefined8 *)(param_2 + 0x1c8));
    }
  }
  return;
}

