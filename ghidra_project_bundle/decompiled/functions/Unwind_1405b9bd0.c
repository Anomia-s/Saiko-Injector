/**
 * Function: Unwind@1405b9bd0
 * Address:  1405b9bd0
 * Signature: undefined Unwind@1405b9bd0(void)
 * Body size: 78 bytes
 */


void Unwind_1405b9bd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,CONCAT71((int7)((ulonglong)*(longlong **)(param_2 + 0x20) >> 8),
                               plVar1 != *(longlong **)(param_2 + 0x20)));
    *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x40) = 0;
  }
  thunk_FUN_140b68ba8(*(undefined8 *)(param_2 + 0x28),0x48);
  return;
}

