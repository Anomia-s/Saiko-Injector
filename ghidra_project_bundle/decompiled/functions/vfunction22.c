/**
 * Function: vfunction22
 * Address:  140919fb0
 * Signature: int __thiscall vfunction22(LexerCPP * this)
 * Body size: 77 bytes
 */


int __thiscall LexerCPP::vfunction22(LexerCPP *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = -1;
  for (lVar1 = this[2].LexerCPP_data.offset_0x88; lVar1 != this[2].LexerCPP_data.offset_0x90;
      lVar1 = lVar1 + 0x20) {
    iVar3 = *(int *)(lVar1 + 4) + *(int *)(lVar1 + 8) + -1;
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
  }
  iVar3 = 0x1b;
  if (0x1b < iVar2) {
    iVar3 = iVar2;
  }
  return iVar3 + 0x41;
}

