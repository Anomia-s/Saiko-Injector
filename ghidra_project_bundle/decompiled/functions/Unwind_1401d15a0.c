/**
 * Function: Unwind@1401d15a0
 * Address:  1401d15a0
 * Signature: undefined Unwind@1401d15a0(void)
 * Body size: 65 bytes
 */


void Unwind_1401d15a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x20);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x10))();
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}

