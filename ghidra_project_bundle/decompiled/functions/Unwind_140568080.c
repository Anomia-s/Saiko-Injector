/**
 * Function: Unwind@140568080
 * Address:  140568080
 * Signature: undefined Unwind@140568080(void)
 * Body size: 69 bytes
 */


void Unwind_140568080(undefined8 param_1,longlong param_2)

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

