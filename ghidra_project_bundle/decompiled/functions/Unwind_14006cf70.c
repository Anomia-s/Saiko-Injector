/**
 * Function: Unwind@14006cf70
 * Address:  14006cf70
 * Signature: undefined Unwind@14006cf70(void)
 * Body size: 129 bytes
 */


void Unwind_14006cf70(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x130);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x130));
    }
  }
  return;
}

