/**
 * Function: Unwind@1405677e0
 * Address:  1405677e0
 * Signature: undefined Unwind@1405677e0(void)
 * Body size: 73 bytes
 */


void Unwind_1405677e0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(undefined8 **)(param_2 + 0x38);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free((void *)**(undefined8 **)(param_2 + 0x38));
    }
  }
  return;
}

