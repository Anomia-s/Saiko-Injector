/**
 * Function: vfunction98
 * Address:  140588740
 * Signature: void __thiscall vfunction98(QsciScintilla * this, undefined8 * param_1)
 * Body size: 80 bytes
 */


void __thiscall QsciScintilla::vfunction98(QsciScintilla *this,undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (this->QsciScintilla_data).offset_0xf8;
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) &&
     ((this->QsciScintilla_data).offset_0x100 != (QObject *)0x0)) {
    return;
  }
  FUN_14074b9f0(this,0x803,0,param_1);
  uVar2 = param_1[1];
  *(undefined8 *)&(this->QsciScintilla_data).field_0x120 = *param_1;
  *(undefined8 *)&(this->QsciScintilla_data).field_0x128 = uVar2;
  return;
}

