/**
 * Function: Unwind@1402d5100
 * Address:  1402d5100
 * Signature: undefined Unwind@1402d5100(void)
 * Body size: 88 bytes
 */


void Unwind_1402d5100(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  QFileInfo *this;
  
  lVar1 = *(longlong *)(param_2 + 0x70);
  if (lVar1 != 0) {
    this = *(QFileInfo **)(param_2 + 0x78);
    do {
      QFileInfo::~QFileInfo(this);
      this = this + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x78);
  return;
}

