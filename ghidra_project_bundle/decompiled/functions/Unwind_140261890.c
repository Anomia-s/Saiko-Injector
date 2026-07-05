/**
 * Function: Unwind@140261890
 * Address:  140261890
 * Signature: undefined Unwind@140261890(void)
 * Body size: 82 bytes
 */


void Unwind_140261890(undefined8 param_1,longlong param_2)

{
  QString *this;
  
  this = *(QString **)(param_2 + 0x128);
  while ((QString *)(param_2 + 0x60) != this) {
    this = this + -0x18;
    QString::~QString(this);
  }
  return;
}

