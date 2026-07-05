/**
 * Function: vfunction119
 * Address:  140588790
 * Signature: void __thiscall vfunction119(QsciScintilla * this, undefined8 * param_1)
 * Body size: 102 bytes
 */


void __thiscall QsciScintilla::vfunction119(QsciScintilla *this,undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (this->QsciScintilla_data).offset_0xf8;
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) &&
     ((this->QsciScintilla_data).offset_0x100 != (QObject *)0x0)) {
    return;
  }
  FUN_14074b9f0(this,0x804,0,param_1);
  FUN_14074b9f0(this,0x804,0x20,param_1);
  uVar2 = param_1[1];
  *(undefined8 *)&(this->QsciScintilla_data).field_0x130 = *param_1;
  *(undefined8 *)&(this->QsciScintilla_data).field_0x138 = uVar2;
  return;
}

