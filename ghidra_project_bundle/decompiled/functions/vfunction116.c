/**
 * Function: vfunction116
 * Address:  14058d4f0
 * Signature: void __thiscall vfunction116(QsciScintilla * this, undefined4 param_1)
 * Body size: 108 bytes
 */


void __thiscall QsciScintilla::vfunction116(QsciScintilla *this,undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  QByteArray local_40 [24];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_14074bf20(this,local_40);
  pcVar2 = QByteArray::data(local_40);
  uVar1 = FUN_14074b940(this,0x8e4,0x21,pcVar2);
  QByteArray::~QByteArray(local_40);
  (*this->vftablePtr->vfunction117)(this,param_1,uVar1);
  return;
}

