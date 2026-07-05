/**
 * Function: Unwind@1402a96f0
 * Address:  1402a96f0
 * Signature: undefined Unwind@1402a96f0(void)
 * Body size: 92 bytes
 */


void Unwind_1402a96f0(undefined8 param_1,longlong param_2)

{
  QDialog *this;
  
  this = *(QDialog **)(param_2 + 200);
  FUN_140004b30(*(undefined8 *)(param_2 + 0x80));
  FUN_140004b30(&this[6].QWidget.field_0x8);
  FUN_140084750(*(undefined8 *)(param_2 + 0x78));
  QDialog::~QDialog(this);
  return;
}

