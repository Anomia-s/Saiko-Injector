/**
 * Function: Unwind@14026a340
 * Address:  14026a340
 * Signature: undefined Unwind@14026a340(void)
 * Body size: 70 bytes
 */


void Unwind_14026a340(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0xb8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0xb8));
    }
  }
  return;
}

