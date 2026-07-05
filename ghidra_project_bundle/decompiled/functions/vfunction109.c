/**
 * Function: vfunction109
 * Address:  140080930
 * Signature: QlementineStyle_vftable * __thiscall vfunction109(QlementineStyle * this, int param_1)
 * Body size: 22 bytes
 */


QlementineStyle_vftable * __thiscall
oclero::qlementine::QlementineStyle::vfunction109(QlementineStyle *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = 0x2b8;
  if (param_1 == 4) {
    lVar1 = 0x2e8;
  }
  return (QlementineStyle_vftable *)((longlong)&(this[2].vftablePtr)->vfunction1 + lVar1);
}

