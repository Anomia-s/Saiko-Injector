/**
 * Function: Unwind@1400881c0
 * Address:  1400881c0
 * Signature: undefined Unwind@1400881c0(void)
 * Body size: 74 bytes
 */


void Unwind_1400881c0(undefined8 param_1,longlong param_2)

{
  QIcon *this;
  
  if (*(char *)(param_2 + 0x265) == '\x01') {
    this = *(QIcon **)(param_2 + 0xa0);
    do {
      this = this + -8;
      QIcon::~QIcon(this);
    } while (this != (QIcon *)(param_2 + 0x1f0));
  }
  return;
}

