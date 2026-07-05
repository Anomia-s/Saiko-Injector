/**
 * Function: Unwind@1402b3e00
 * Address:  1402b3e00
 * Signature: undefined Unwind@1402b3e00(void)
 * Body size: 139 bytes
 */


void Unwind_1402b3e00(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  _Associated_state<int> *this;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 800) + 0x108);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,CONCAT71((int7)((ulonglong)*(longlong **)(param_2 + 0x138) >> 8),
                               plVar1 != *(longlong **)(param_2 + 0x138)));
    *(undefined8 *)(*(longlong *)(param_2 + 800) + 0x108) = 0;
  }
  this = *(_Associated_state<int> **)(param_2 + 800);
  std::_Associated_state<int>::~_Associated_state<int>(this);
  thunk_FUN_140b68ba8(this,0x110);
  return;
}

