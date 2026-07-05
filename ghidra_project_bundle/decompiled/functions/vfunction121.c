/**
 * Function: vfunction121
 * Address:  14058ca70
 * Signature: void __thiscall vfunction121(QsciScintilla * this, undefined4 param_1, int param_2, undefined4 param_3, int param_4)
 * Body size: 143 bytes
 */


void __thiscall
QsciScintilla::vfunction121
          (QsciScintilla *this,undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_14074b730(this,0x877,param_3);
  if (0 < param_4) {
    do {
      uVar1 = FUN_14074b730(this,0x972,uVar1);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  uVar2 = FUN_14074b730(this,0x877,param_1);
  if (0 < param_2) {
    do {
      uVar2 = FUN_14074b730(this,0x972,uVar2);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_14074b900(this,0x870,uVar2,uVar1);
  return;
}

