/**
 * Function: vfunction52
 * Address:  1407d46a0
 * Signature: void __thiscall vfunction52(QsciScintillaQt * this, int param_1)
 * Body size: 54 bytes
 */


void __thiscall QsciScintillaQt::vfunction52(QsciScintillaQt *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)&(this->ScintillaBase_data).offset_0x188 + (longlong)param_1 * 4);
  if (iVar1 != 0) {
    QObject::killTimer((QObject *)((longlong)&this[-1].QsciScintillaQt_data.offset_0x1c + 4),iVar1);
    *(undefined4 *)((longlong)&(this->ScintillaBase_data).offset_0x188 + (longlong)param_1 * 4) = 0;
  }
  return;
}

