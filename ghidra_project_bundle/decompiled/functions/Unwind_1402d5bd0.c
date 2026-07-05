/**
 * Function: Unwind@1402d5bd0
 * Address:  1402d5bd0
 * Signature: undefined Unwind@1402d5bd0(void)
 * Body size: 77 bytes
 */


void Unwind_1402d5bd0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  QFileInfo *this;
  
  this = *(QFileInfo **)(param_2 + 0x30);
  for (lVar1 = *(longlong *)(param_2 + 0x38); lVar1 != 0; lVar1 = lVar1 + -0x20) {
    QFileInfo::~QFileInfo(this);
    this = this + 0x20;
  }
  return;
}

