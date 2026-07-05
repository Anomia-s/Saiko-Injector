/**
 * Function: Unwind@1402d5090
 * Address:  1402d5090
 * Signature: undefined Unwind@1402d5090(void)
 * Body size: 100 bytes
 */


void Unwind_1402d5090(undefined8 param_1,longlong param_2)

{
  QFileInfo *pQVar1;
  QFileInfo *this;
  longlong lVar2;
  
  pQVar1 = *(QFileInfo **)(param_2 + 0x78);
  this = pQVar1;
  for (lVar2 = *(longlong *)(param_2 + 0x70); lVar2 != 0; lVar2 = lVar2 + -0x20) {
    QFileInfo::~QFileInfo(this);
    this = this + 0x20;
  }
  *(QFileInfo **)(param_2 + 0x60) = pQVar1;
  return;
}

