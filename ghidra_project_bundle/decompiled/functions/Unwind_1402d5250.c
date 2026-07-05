/**
 * Function: Unwind@1402d5250
 * Address:  1402d5250
 * Signature: undefined Unwind@1402d5250(void)
 * Body size: 75 bytes
 */


void Unwind_1402d5250(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  QFileInfo *this;
  
  this = *(QFileInfo **)(param_2 + 0x68);
  lVar1 = *(longlong *)(param_2 + 0x78);
  do {
    QFileInfo::~QFileInfo(this);
    this = this + 0x20;
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0);
  return;
}

