/**
 * Function: Unwind@14056cd60
 * Address:  14056cd60
 * Signature: undefined Unwind@14056cd60(void)
 * Body size: 69 bytes
 */


void Unwind_14056cd60(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(undefined8 **)(param_2 + 0x40);
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

