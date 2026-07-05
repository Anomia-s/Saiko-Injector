/**
 * Function: Unwind@1400c0600
 * Address:  1400c0600
 * Signature: undefined Unwind@1400c0600(void)
 * Body size: 142 bytes
 */


void Unwind_1400c0600(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_1400c1610(param_2 + 0x30);
  puVar2 = *(undefined8 **)(param_2 + 0x150);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}

