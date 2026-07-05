/**
 * Function: Unwind@140568c20
 * Address:  140568c20
 * Signature: undefined Unwind@140568c20(void)
 * Body size: 63 bytes
 */


void Unwind_140568c20(undefined8 param_1,longlong param_2)

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

