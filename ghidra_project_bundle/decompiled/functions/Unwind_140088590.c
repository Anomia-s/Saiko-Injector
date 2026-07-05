/**
 * Function: Unwind@140088590
 * Address:  140088590
 * Signature: undefined Unwind@140088590(void)
 * Body size: 88 bytes
 */


void Unwind_140088590(undefined8 param_1,longlong param_2)

{
  QIcon *this;
  
  this = *(QIcon **)(param_2 + 0x98);
  if (((QIcon *)(param_2 + 0x1f0) != this & *(byte *)(param_2 + 0x263)) == 1) {
    do {
      this = this + -8;
      QIcon::~QIcon(this);
    } while (this != (QIcon *)(param_2 + 0x1f0));
  }
  return;
}

