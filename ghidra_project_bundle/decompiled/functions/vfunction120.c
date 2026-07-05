/**
 * Function: vfunction120
 * Address:  14058cc40
 * Signature: void __thiscall vfunction120(QsciScintilla * this, byte param_1)
 * Body size: 52 bytes
 */


void __thiscall QsciScintilla::vfunction120(QsciScintilla *this,byte param_1)

{
  QWidget::setAttribute((QWidget *)this,0xe,(bool)(param_1 ^ 1));
  FUN_14074b730(this,0x87b,param_1);
  return;
}

