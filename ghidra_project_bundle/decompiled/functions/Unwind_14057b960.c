/**
 * Function: Unwind@14057b960
 * Address:  14057b960
 * Signature: undefined Unwind@14057b960(void)
 * Body size: 55 bytes
 */


void Unwind_14057b960(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x30);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x30));
    }
  }
  return;
}

