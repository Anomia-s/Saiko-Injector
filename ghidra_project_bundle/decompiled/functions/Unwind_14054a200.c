/**
 * Function: Unwind@14054a200
 * Address:  14054a200
 * Signature: undefined Unwind@14054a200(void)
 * Body size: 75 bytes
 */


void Unwind_14054a200(undefined8 param_1,longlong param_2)

{
  QWidget *this;
  
  this = *(QWidget **)(param_2 + 0x40);
  FUN_140084750(&this[5].field_0x8);
  FUN_140084750(*(undefined8 *)(param_2 + 0x28));
  QString::~QString(*(QString **)(param_2 + 0x20));
  QWidget::~QWidget(this);
  return;
}

