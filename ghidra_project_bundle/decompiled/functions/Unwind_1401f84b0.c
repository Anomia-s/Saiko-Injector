/**
 * Function: Unwind@1401f84b0
 * Address:  1401f84b0
 * Signature: undefined Unwind@1401f84b0(void)
 * Body size: 77 bytes
 */


void Unwind_1401f84b0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_2 + 0x48) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x48) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}

