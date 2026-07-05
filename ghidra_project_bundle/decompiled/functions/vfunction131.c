/**
 * Function: vfunction131
 * Address:  14058d320
 * Signature: void __thiscall vfunction131(QsciScintilla * this, undefined4 param_1)
 * Body size: 108 bytes
 */


void __thiscall QsciScintilla::vfunction131(QsciScintilla *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_14074b730(this,0x84f,param_1);
  iVar2 = FUN_14074b900(this,0x84b,0,0);
  if (iVar2 == 0) {
    iVar2 = FUN_14074b900(this,0x849,0,0);
  }
  iVar3 = 0;
  if (0 < iVar1 - iVar2) {
    iVar3 = iVar1 - iVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014058d389. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->vftablePtr->vfunction103)(this,param_1,iVar3);
  return;
}

