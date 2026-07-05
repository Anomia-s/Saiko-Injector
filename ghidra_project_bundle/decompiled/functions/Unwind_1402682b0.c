/**
 * Function: Unwind@1402682b0
 * Address:  1402682b0
 * Signature: undefined Unwind@1402682b0(void)
 * Body size: 168 bytes
 */


void Unwind_1402682b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x278) + 0x88);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,CONCAT71((int7)((ulonglong)*(longlong **)(param_2 + 0x268) >> 8),
                               plVar1 != *(longlong **)(param_2 + 0x268)));
    *(undefined8 *)(*(longlong *)(param_2 + 0x278) + 0x88) = 0;
  }
  thunk_FUN_140b68ba8(*(undefined8 *)(param_2 + 0x278),200);
  return;
}

