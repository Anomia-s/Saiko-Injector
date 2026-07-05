/**
 * Function: Unwind@1400c0080
 * Address:  1400c0080
 * Signature: undefined Unwind@1400c0080(void)
 * Body size: 237 bytes
 */


void Unwind_1400c0080(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  FUN_1400c1610(param_2 + 400);
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_2 + 0x2f0) + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x2f0))(*(undefined8 **)(param_2 + 0x2f0),1);
  }
  return;
}

