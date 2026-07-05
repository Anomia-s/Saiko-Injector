/**
 * Function: Unwind@1400c1230
 * Address:  1400c1230
 * Signature: undefined Unwind@1400c1230(void)
 * Body size: 67 bytes
 */


void Unwind_1400c1230(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_2 + 0x38) + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x38))(*(undefined8 **)(param_2 + 0x38),1);
  }
  return;
}

