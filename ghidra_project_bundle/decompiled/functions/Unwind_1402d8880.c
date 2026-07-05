/**
 * Function: Unwind@1402d8880
 * Address:  1402d8880
 * Signature: undefined Unwind@1402d8880(void)
 * Body size: 95 bytes
 */


void Unwind_1402d8880(undefined8 param_1,longlong param_2)

{
  QString *this;
  
  this = *(QString **)(param_2 + 0x298);
  while ((QString *)(param_2 + 0x88) != this) {
    this = this + -0x18;
    QString::~QString(this);
  }
  return;
}

