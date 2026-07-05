/**
 * Function: Unwind@1402d5c20
 * Address:  1402d5c20
 * Signature: undefined Unwind@1402d5c20(void)
 * Body size: 76 bytes
 */


void Unwind_1402d5c20(undefined8 param_1,longlong param_2)

{
  QFileInfo *pQVar1;
  QFileInfo *this;
  
  pQVar1 = *(QFileInfo **)(param_2 + 0x38);
  for (this = *(QFileInfo **)(param_2 + 0x30); this != pQVar1; this = this + 0x20) {
    QFileInfo::~QFileInfo(this);
  }
  return;
}

