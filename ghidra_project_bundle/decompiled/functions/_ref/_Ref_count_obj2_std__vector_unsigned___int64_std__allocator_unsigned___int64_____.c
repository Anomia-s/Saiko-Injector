/**
 * Function: _Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>
 * Address:  1402628e0
 * Signature: _Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_> * __thiscall _Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>(_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_> * this, longlong * param_1)
 * Body size: 246 bytes
 */


_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_> * __thiscall
std::_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>::
_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>
          (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_> *this,
          longlong *param_1)

{
  _Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable *p_Var1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  size_t _Size;
  vfunction1 *_Dst;
  
  p_Var1 = (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
            *)FUN_140b65d30(0x28);
  p_Var1->vfunction2 = (vfunction2 *)0x100000001;
  p_Var1->vfunction1 = (vfunction1 *)&vftable;
  p_Var1->vfunction1 = (vfunction1 *)0x0;
  p_Var1->vfunction6 = (vfunction6 *)0x0;
  p_Var1[1].vfunction1 = (vfunction1 *)0x0;
  lVar4 = param_1[1] - *param_1;
  if (lVar4 != 0) {
    uVar2 = param_1[1] - *param_1 >> 3;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      vector_too_long();
    }
    if (uVar2 < 0x200) {
      _Dst = (vfunction1 *)FUN_140b65d30(lVar4);
    }
    else {
      lVar3 = FUN_140b65d30(lVar4 + 0x27);
      _Dst = (vfunction1 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(_Dst + -8) = lVar3;
    }
    p_Var1->vfunction1 = _Dst;
    p_Var1->vfunction6 = (vfunction6 *)_Dst;
    p_Var1[1].vfunction1 = _Dst + lVar4;
    _Size = param_1[1] - *param_1;
    memmove(_Dst,(void *)*param_1,_Size);
    p_Var1->vfunction6 = (vfunction6 *)(_Dst + _Size);
  }
  this->vftablePtr =
       (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable *)
       &p_Var1->vfunction1;
  this[1].vftablePtr = p_Var1;
  return this;
}

