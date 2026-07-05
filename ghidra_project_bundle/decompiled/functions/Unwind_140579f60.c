/**
 * Function: Unwind@140579f60
 * Address:  140579f60
 * Signature: undefined Unwind@140579f60(void)
 * Body size: 110 bytes
 */


void Unwind_140579f60(undefined8 param_1,longlong param_2)

{
  QString *this;
  
  this = *(QString **)(param_2 + 0x110);
  if ((QString *)(param_2 + 0x48) != this && (*(byte *)(param_2 + 0x11f) & 1) == 0) {
    do {
      this = this + -0x20;
      QString::~QString(this);
    } while (this != (QString *)(param_2 + 0x48));
  }
  FUN_140b686c8(&DAT_1416f29a8);
  return;
}

