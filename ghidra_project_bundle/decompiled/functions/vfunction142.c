/**
 * Function: vfunction142
 * Address:  140081150
 * Signature: QlementineStyle_vftable * __thiscall vfunction142(QlementineStyle * this, int param_1)
 * Body size: 33 bytes
 */


QlementineStyle_vftable * __thiscall
oclero::qlementine::QlementineStyle::vfunction142(QlementineStyle *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = 0x4c8;
  if (param_1 - 1U < 3) {
    lVar1 = *(longlong *)(&DAT_140dddcf0 + (ulonglong)(param_1 - 1U) * 8);
  }
  return (QlementineStyle_vftable *)((longlong)&(this[2].vftablePtr)->vfunction1 + lVar1);
}

