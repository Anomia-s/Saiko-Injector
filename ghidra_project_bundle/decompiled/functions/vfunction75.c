/**
 * Function: vfunction75
 * Address:  14058e4a0
 * Signature: void __thiscall vfunction75(QsciScintilla * this)
 * Body size: 183 bytes
 */


void __thiscall QsciScintilla::vfunction75(QsciScintilla *this)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  bVar1 = FUN_14058e240(this,&local_1c,&local_20,2);
  if (local_20 < 0) {
    if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_48)) {
      return;
    }
  }
  else {
    iVar3 = (uint)(local_1c < local_20 ^ bVar1) + local_20;
    uVar2 = FUN_14074b730(this,0x876,iVar3);
    (*this->vftablePtr->vfunction69)(this,uVar2);
    if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_48)) {
      FUN_14074b900(this,0x870,iVar3,iVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_48);
}

