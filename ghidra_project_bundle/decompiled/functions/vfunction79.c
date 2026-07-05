/**
 * Function: vfunction79
 * Address:  14058cf00
 * Signature: void __thiscall vfunction79(QsciScintilla * this, undefined8 param_1)
 * Body size: 82 bytes
 */


void __thiscall QsciScintilla::vfunction79(QsciScintilla *this,undefined8 param_1)

{
  char *pcVar1;
  QByteArray local_38 [24];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_14074bf20(this,local_38,param_1);
  pcVar1 = QByteArray::data(local_38);
  FUN_14074b960(this,0x87a,pcVar1);
  QByteArray::~QByteArray(local_38);
  return;
}

