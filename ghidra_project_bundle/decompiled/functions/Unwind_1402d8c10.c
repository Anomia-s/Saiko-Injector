/**
 * Function: Unwind@1402d8c10
 * Address:  1402d8c10
 * Signature: undefined Unwind@1402d8c10(void)
 * Body size: 95 bytes
 */


void Unwind_1402d8c10(undefined8 param_1,longlong param_2)

{
  QString *this;
  
  this = *(QString **)(param_2 + 0x290);
  while ((QString *)(param_2 + 0x88) != this) {
    this = this + -0x18;
    QString::~QString(this);
  }
  return;
}

