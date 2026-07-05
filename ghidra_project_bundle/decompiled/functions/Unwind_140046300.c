/**
 * Function: Unwind@140046300
 * Address:  140046300
 * Signature: undefined Unwind@140046300(void)
 * Body size: 229 bytes
 */


void Unwind_140046300(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x120);
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

