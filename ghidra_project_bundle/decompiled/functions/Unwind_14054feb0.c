/**
 * Function: Unwind@14054feb0
 * Address:  14054feb0
 * Signature: undefined Unwind@14054feb0(void)
 * Body size: 101 bytes
 */


void Unwind_14054feb0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 200) + 0x50);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,CONCAT71((int7)((ulonglong)*(longlong **)(param_2 + 0xb8) >> 8),
                               plVar1 != *(longlong **)(param_2 + 0xb8)));
    *(undefined8 *)(*(longlong *)(param_2 + 200) + 0x50) = 0;
  }
  thunk_FUN_140b68ba8(*(undefined8 *)(param_2 + 200),0x58);
  return;
}

