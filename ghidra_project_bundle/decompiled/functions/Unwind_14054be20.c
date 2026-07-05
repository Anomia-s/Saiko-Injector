/**
 * Function: Unwind@14054be20
 * Address:  14054be20
 * Signature: undefined Unwind@14054be20(void)
 * Body size: 144 bytes
 */


void Unwind_14054be20(undefined8 param_1,longlong param_2)

{
  QWidget *this;
  
  this = *(QWidget **)(param_2 + 0x120);
  FUN_140084750(this + 4);
  FUN_140084750(*(undefined8 *)(param_2 + 0xe8));
  QWidget::~QWidget(this);
  return;
}

