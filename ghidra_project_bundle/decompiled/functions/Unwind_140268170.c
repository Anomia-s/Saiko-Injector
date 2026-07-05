/**
 * Function: Unwind@140268170
 * Address:  140268170
 * Signature: undefined Unwind@140268170(void)
 * Body size: 162 bytes
 */


void Unwind_140268170(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x278) + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,CONCAT71((int7)((ulonglong)*(longlong **)(param_2 + 0x268) >> 8),
                               plVar1 != *(longlong **)(param_2 + 0x268)));
    *(undefined8 *)(*(longlong *)(param_2 + 0x278) + 0x68) = 0;
  }
  thunk_FUN_140b68ba8(*(undefined8 *)(param_2 + 0x278),0x88);
  return;
}

