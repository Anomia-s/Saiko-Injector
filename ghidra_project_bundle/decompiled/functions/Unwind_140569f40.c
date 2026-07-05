/**
 * Function: Unwind@140569f40
 * Address:  140569f40
 * Signature: undefined Unwind@140569f40(void)
 * Body size: 55 bytes
 */


void Unwind_140569f40(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x20));
    }
  }
  return;
}

