/**
 * Function: vfunction74
 * Address:  14058ce70
 * Signature: void __thiscall vfunction74(QsciScintilla * this, undefined8 param_1, undefined8 param_2, int param_3)
 * Body size: 73 bytes
 */


void __thiscall
QsciScintilla::vfunction74(QsciScintilla *this,undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14074b730(this,0x877);
  if (0 < param_3) {
    do {
      uVar1 = FUN_14074b730(this,0x972,uVar1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_14058cd70(this,param_1,uVar1);
  return;
}

