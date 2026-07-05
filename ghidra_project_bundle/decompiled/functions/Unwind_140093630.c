/**
 * Function: Unwind@140093630
 * Address:  140093630
 * Signature: undefined Unwind@140093630(void)
 * Body size: 61 bytes
 */


void Unwind_140093630(undefined8 param_1,longlong param_2)

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
  *(undefined1 *)(param_2 + 0xd7) = 0;
  return;
}

