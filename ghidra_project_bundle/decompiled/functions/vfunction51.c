/**
 * Function: vfunction51
 * Address:  1407d46f0
 * Signature: void __thiscall vfunction51(QsciScintillaQt * this, int param_1, int param_2)
 * Body size: 78 bytes
 */


void __thiscall QsciScintillaQt::vfunction51(QsciScintillaQt *this,int param_1,int param_2)

{
  QObject *this_00;
  int iVar1;
  
  this_00 = (QObject *)((longlong)&this[-1].QsciScintillaQt_data.offset_0x1c + 4);
  iVar1 = *(int *)((longlong)&(this->ScintillaBase_data).offset_0x188 + (longlong)param_1 * 4);
  if (iVar1 != 0) {
    QObject::killTimer(this_00,iVar1);
  }
  iVar1 = QObject::startTimer(this_00,param_2,1);
  *(int *)((longlong)&(this->ScintillaBase_data).offset_0x188 + (longlong)param_1 * 4) = iVar1;
  return;
}

