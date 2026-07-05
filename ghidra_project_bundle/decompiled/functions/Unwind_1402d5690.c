/**
 * Function: Unwind@1402d5690
 * Address:  1402d5690
 * Signature: undefined Unwind@1402d5690(void)
 * Body size: 87 bytes
 */


void Unwind_1402d5690(undefined8 param_1,longlong param_2)

{
  QFileInfo *this;
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_2 + 0x78); lVar1 != 0; lVar1 = lVar1 + -0x20) {
    this = *(QFileInfo **)(param_2 + 0x68);
    QFileInfo::~QFileInfo(this);
    *(QFileInfo **)(param_2 + 0x68) = this + 0x20;
  }
  return;
}

