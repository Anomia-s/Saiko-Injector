/**
 * Function: Unwind@14056ca10
 * Address:  14056ca10
 * Signature: undefined Unwind@14056ca10(void)
 * Body size: 59 bytes
 */


void Unwind_14056ca10(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x38);
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    FUN_140b68ba8(*(undefined8 *)(param_2 + 0x38));
  }
  *(undefined8 *)(param_2 + 0x30) = **(undefined8 **)(param_2 + 0x40);
  return;
}

