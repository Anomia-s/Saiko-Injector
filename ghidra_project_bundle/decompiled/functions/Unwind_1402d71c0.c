/**
 * Function: Unwind@1402d71c0
 * Address:  1402d71c0
 * Signature: undefined Unwind@1402d71c0(void)
 * Body size: 90 bytes
 */


void Unwind_1402d71c0(undefined8 param_1,longlong param_2)

{
  QLabel *this;
  QObject QVar1;
  
  this = *(QLabel **)(param_2 + 0xb0);
  QVar1 = this[5].QFrame.QWidget.QObject;
  if (QVar1 != (QObject)0x0) {
    (**(code **)(*(longlong *)QVar1 + 0x20))(QVar1,QVar1 != *(QObject *)(param_2 + 0xa8));
    this[5].QFrame.QWidget.QObject = (QObject)0x0;
  }
  QString::~QString(*(QString **)(param_2 + 0x70));
  QLabel::~QLabel(this);
  return;
}

