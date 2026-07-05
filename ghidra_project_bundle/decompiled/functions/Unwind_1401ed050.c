/**
 * Function: Unwind@1401ed050
 * Address:  1401ed050
 * Signature: undefined Unwind@1401ed050(void)
 * Body size: 99 bytes
 */


void Unwind_1401ed050(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xb0) + 0x250);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x90));
    *(undefined8 *)(*(longlong *)(param_2 + 0xb0) + 0x250) = 0;
  }
  return;
}

