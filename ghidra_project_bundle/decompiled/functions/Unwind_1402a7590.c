/**
 * Function: Unwind@1402a7590
 * Address:  1402a7590
 * Signature: undefined Unwind@1402a7590(void)
 * Body size: 132 bytes
 */


void Unwind_1402a7590(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  _Associated_state<int> *this;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x150) + 0x108);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,CONCAT71((int7)((ulonglong)*(longlong **)(param_2 + 0xb8) >> 8),
                               plVar1 != *(longlong **)(param_2 + 0xb8)));
    *(undefined8 *)(*(longlong *)(param_2 + 0x150) + 0x108) = 0;
  }
  this = *(_Associated_state<int> **)(param_2 + 0x150);
  std::_Associated_state<int>::~_Associated_state<int>(this);
  thunk_FUN_140b68ba8(this,0x110);
  return;
}

