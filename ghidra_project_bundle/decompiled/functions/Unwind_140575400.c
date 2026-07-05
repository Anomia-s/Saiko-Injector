/**
 * Function: Unwind@140575400
 * Address:  140575400
 * Signature: undefined Unwind@140575400(void)
 * Body size: 73 bytes
 */


void Unwind_140575400(undefined8 param_1,longlong param_2)

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

