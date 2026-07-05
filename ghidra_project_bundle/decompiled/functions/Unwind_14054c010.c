/**
 * Function: Unwind@14054c010
 * Address:  14054c010
 * Signature: undefined Unwind@14054c010(void)
 * Body size: 71 bytes
 */


void Unwind_14054c010(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x38) + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x28));
    *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x60) = 0;
  }
  QWidget::~QWidget(*(QWidget **)(param_2 + 0x38));
  return;
}

