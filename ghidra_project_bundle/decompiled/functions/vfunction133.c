/**
 * Function: vfunction133
 * Address:  14058c080
 * Signature: void __thiscall vfunction133(QsciScintilla * this, int param_1)
 * Body size: 53 bytes
 */


void __thiscall QsciScintilla::vfunction133(QsciScintilla *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_14074b900(this,0x946,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014058c0b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->vftablePtr->vfunction136)(this,param_1 + iVar1);
  return;
}

