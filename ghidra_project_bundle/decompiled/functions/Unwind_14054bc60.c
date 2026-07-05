/**
 * Function: Unwind@14054bc60
 * Address:  14054bc60
 * Signature: undefined Unwind@14054bc60(void)
 * Body size: 178 bytes
 */


void Unwind_14054bc60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x120) + 0x160);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0xf8));
    *(undefined8 *)(*(longlong *)(param_2 + 0x120) + 0x160) = 0;
  }
  QTimer::~QTimer(*(QTimer **)(param_2 + 0x110));
  return;
}

