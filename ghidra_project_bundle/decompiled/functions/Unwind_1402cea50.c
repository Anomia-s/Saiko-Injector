/**
 * Function: Unwind@1402cea50
 * Address:  1402cea50
 * Signature: undefined Unwind@1402cea50(void)
 * Body size: 87 bytes
 */


void Unwind_1402cea50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  QFileInfo *this;
  
  this = *(QFileInfo **)(param_2 + 0x40);
  for (lVar1 = *(longlong *)(param_2 + 0x48); lVar1 != 0; lVar1 = lVar1 + -0x20) {
    QFileInfo::~QFileInfo(this);
    this = this + 0x20;
  }
  FUN_1402ceab0(param_2 + 0x28);
  return;
}

