/**
 * Function: vfunction99
 * Address:  14058d0f0
 * Signature: void __thiscall vfunction99(QsciScintilla * this, undefined4 param_1, int param_2)
 * Body size: 74 bytes
 */


void __thiscall QsciScintilla::vfunction99(QsciScintilla *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14074b730(this,0x877,param_1);
  if (0 < param_2) {
    do {
      uVar1 = FUN_14074b730(this,0x972,uVar1);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_14074b730(this,0x7e9,uVar1);
  return;
}

