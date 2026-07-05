/**
 * Function: Unwind@1402d5200
 * Address:  1402d5200
 * Signature: undefined Unwind@1402d5200(void)
 * Body size: 79 bytes
 */


void Unwind_1402d5200(undefined8 param_1,longlong param_2)

{
  QFileInfo *pQVar1;
  QFileInfo *this;
  
  pQVar1 = *(QFileInfo **)(param_2 + 0x58);
  for (this = *(QFileInfo **)(param_2 + 0x68); this != pQVar1; this = this + 0x20) {
    QFileInfo::~QFileInfo(this);
  }
  return;
}

