/**
 * Function: Unwind@1402d41a0
 * Address:  1402d41a0
 * Signature: undefined Unwind@1402d41a0(void)
 * Body size: 80 bytes
 */


void Unwind_1402d41a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  QFileInfo *this;
  
  this = *(QFileInfo **)(param_2 + 0x60);
  for (lVar1 = *(longlong *)(param_2 + 0x68); lVar1 != 0; lVar1 = lVar1 + -0x20) {
    QFileInfo::~QFileInfo(this);
    this = this + 0x20;
  }
  return;
}

