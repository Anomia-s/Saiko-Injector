/**
 * Function: Unwind@14028c0d0
 * Address:  14028c0d0
 * Signature: undefined Unwind@14028c0d0(void)
 * Body size: 73 bytes
 */


void Unwind_14028c0d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x50) + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x48));
    *(undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x60) = 0;
  }
  QLabel::~QLabel(*(QLabel **)(param_2 + 0x50));
  return;
}

