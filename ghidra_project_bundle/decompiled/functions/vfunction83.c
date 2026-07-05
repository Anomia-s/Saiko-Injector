/**
 * Function: vfunction83
 * Address:  14058e560
 * Signature: void __thiscall vfunction83(QsciScintilla * this)
 * Body size: 194 bytes
 */


void __thiscall QsciScintilla::vfunction83(QsciScintilla *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14058e240(this,&local_24,&local_28,2);
  if (local_28 < 0) {
    if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_48)) {
      return;
    }
    goto LAB_14058e615;
  }
  if (cVar1 == '\0') {
    if (local_28 <= local_24) goto LAB_14058e5c6;
LAB_14058e5a2:
    iVar4 = local_28 + 1;
    iVar3 = local_24;
  }
  else {
    if (local_28 <= local_24) goto LAB_14058e5a2;
LAB_14058e5c6:
    iVar3 = local_24 + 1;
    iVar4 = local_28;
  }
  uVar2 = FUN_14074b730(this,0x876,iVar4);
  (*this->vftablePtr->vfunction69)(this,uVar2);
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_48)) {
    FUN_14074b900(this,0x870,iVar3,iVar4);
    return;
  }
LAB_14058e615:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_48);
}

