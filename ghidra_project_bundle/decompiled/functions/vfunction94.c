/**
 * Function: vfunction94
 * Address:  14058cbe0
 * Signature: void __thiscall vfunction94(QsciScintilla * this, QColor * param_1)
 * Body size: 74 bytes
 */


void __thiscall QsciScintilla::vfunction94(QsciScintilla *this,QColor *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = QColor::alpha(param_1);
  iVar2 = 0x100;
  if (iVar1 != 0xff) {
    iVar2 = iVar1;
  }
  FUN_14074ba60(this,0x832,param_1);
  FUN_14074b730(this,0x9a6,iVar2);
  return;
}

