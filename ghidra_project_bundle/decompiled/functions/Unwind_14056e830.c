/**
 * Function: Unwind@14056e830
 * Address:  14056e830
 * Signature: undefined Unwind@14056e830(void)
 * Body size: 57 bytes
 */


void Unwind_14056e830(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(undefined8 **)(param_2 + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free((void *)**(undefined8 **)(param_2 + 0x28));
    }
  }
  return;
}

