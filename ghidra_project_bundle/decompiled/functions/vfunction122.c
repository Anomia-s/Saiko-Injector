/**
 * Function: vfunction122
 * Address:  14058cb00
 * Signature: void __thiscall vfunction122(QsciScintilla * this, QColor * param_1)
 * Body size: 80 bytes
 */


void __thiscall QsciScintilla::vfunction122(QsciScintilla *this,QColor *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = QColor::alpha(param_1);
  iVar2 = 0x100;
  if (iVar1 != 0xff) {
    iVar2 = iVar1;
  }
  FUN_14074b9f0(this,0x814,1,param_1);
  FUN_14074b730(this,0x9ae,iVar2);
  return;
}

