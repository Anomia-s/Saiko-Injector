/**
 * Function: vfunction104
 * Address:  14058d390
 * Signature: void __thiscall vfunction104(QsciScintilla * this, char param_1)
 * Body size: 96 bytes
 */


void __thiscall QsciScintilla::vfunction104(QsciScintilla *this,char param_1)

{
  int *piVar1;
  QObject *pQVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_1 != '\0') {
    piVar1 = (this->QsciScintilla_data).offset_0xf8;
    uVar3 = 1;
    if (piVar1 != (int *)0x0) {
      pQVar2 = (this->QsciScintilla_data).offset_0x100;
      if (pQVar2 != (QObject *)0x0 && piVar1[1] != 0) {
        uVar3 = (**(code **)(*(longlong *)pQVar2 + 200))(pQVar2,*(longlong *)pQVar2,1);
      }
    }
  }
  FUN_14074b730(this,0x854,uVar3);
  return;
}

