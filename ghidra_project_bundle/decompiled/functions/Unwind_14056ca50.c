/**
 * Function: Unwind@14056ca50
 * Address:  14056ca50
 * Signature: undefined Unwind@14056ca50(void)
 * Body size: 58 bytes
 */


void Unwind_14056ca50(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x30);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free((void *)**(undefined8 **)(param_2 + 0x40));
    }
  }
  return;
}

