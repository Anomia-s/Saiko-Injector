/**
 * Function: vfunction126
 * Address:  14058d000
 * Signature: void __thiscall vfunction126(QsciScintilla * this, undefined8 param_1)
 * Body size: 189 bytes
 */


void __thiscall QsciScintilla::vfunction126(QsciScintilla *this,undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  QByteArray local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  iVar1 = FUN_14074b900(this,0x85c,0,0);
  if (iVar1 != 0) {
    (*this->vftablePtr->vfunction120)(this,0);
  }
  FUN_14074b900(this,0x7d4,0,0);
  FUN_14074bf20(this,local_48,param_1);
  pcVar2 = QByteArray::data(local_48);
  FUN_14074b940(this,0x7d1,local_38,pcVar2);
  FUN_14074b900(this,0x87f,0,0);
  (*this->vftablePtr->vfunction120)(this,iVar1 != 0);
  QByteArray::~QByteArray(local_48);
  return;
}

