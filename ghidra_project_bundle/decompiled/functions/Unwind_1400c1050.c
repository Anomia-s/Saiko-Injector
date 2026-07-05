/**
 * Function: Unwind@1400c1050
 * Address:  1400c1050
 * Signature: undefined Unwind@1400c1050(void)
 * Body size: 225 bytes
 */


void Unwind_1400c1050(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_2 + 0x178) + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x178))(*(undefined8 **)(param_2 + 0x178),1);
  }
  return;
}

