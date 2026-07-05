/**
 * Function: Unwind@1402d51b0
 * Address:  1402d51b0
 * Signature: undefined Unwind@1402d51b0(void)
 * Body size: 80 bytes
 */


void Unwind_1402d51b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  QFileInfo *this;
  
  lVar1 = *(longlong *)(param_2 + 0x78);
  if (lVar1 != 0) {
    this = *(QFileInfo **)(param_2 + 0x58);
    do {
      QFileInfo::~QFileInfo(this);
      this = this + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  return;
}

