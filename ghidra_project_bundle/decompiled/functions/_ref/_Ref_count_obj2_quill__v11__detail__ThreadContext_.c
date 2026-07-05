/**
 * Function: _Ref_count_obj2<quill::v11::detail::ThreadContext>
 * Address:  140006ba0
 * Signature: _Ref_count_obj2<quill::v11::detail::ThreadContext> * __thiscall _Ref_count_obj2<quill::v11::detail::ThreadContext>(_Ref_count_obj2<quill::v11::detail::ThreadContext> * this, undefined4 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4)
 * Body size: 367 bytes
 */


_Ref_count_obj2<quill::v11::detail::ThreadContext> * __thiscall
std::_Ref_count_obj2<quill::v11::detail::ThreadContext>::
_Ref_count_obj2<quill::v11::detail::ThreadContext>
          (_Ref_count_obj2<quill::v11::detail::ThreadContext> *this,undefined4 param_1,
          undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  vfunction2 **ppvVar1;
  undefined8 *puVar2;
  char cVar3;
  _Ref_count_obj2<quill::v11::detail::ThreadContext>_vftable *p_Var4;
  
  p_Var4 = (_Ref_count_obj2<quill::v11::detail::ThreadContext>_vftable *)FUN_140b68600(0x480,0x80);
  p_Var4->vfunction2 = (vfunction2 *)0x100000001;
  p_Var4->vfunction1 = (vfunction1 *)&vftable;
  FUN_140006ee0(p_Var4 + 4,param_1,param_2,param_3,param_4);
  this->vftablePtr = p_Var4 + 4;
  this[1].vftablePtr = p_Var4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_14151e358) && (FUN_140b6864c(&DAT_14151e358), DAT_14151e358 == -1)) {
    atexit(FUN_140007d20);
    _Init_thread_footer(&DAT_14151e358);
  }
  do {
    do {
      cVar3 = DAT_14151e350;
      puVar2 = DAT_14151e340;
    } while (DAT_14151e350 == '\x01');
    LOCK();
    DAT_14151e350 = '\x01';
    UNLOCK();
  } while (cVar3 == '\x01');
  if (DAT_14151e340 == DAT_14151e348) {
    FUN_140007e10(&DAT_14151e338,DAT_14151e340,this);
  }
  else {
    *DAT_14151e340 = 0;
    puVar2[1] = 0;
    if (this[1].vftablePtr != (_Ref_count_obj2<quill::v11::detail::ThreadContext>_vftable *)0x0) {
      LOCK();
      ppvVar1 = &(this[1].vftablePtr)->vfunction2;
      *(int *)ppvVar1 = *(int *)ppvVar1 + 1;
      UNLOCK();
    }
    *puVar2 = this->vftablePtr;
    puVar2[1] = this[1].vftablePtr;
    DAT_14151e340 = DAT_14151e340 + 2;
  }
  DAT_14151e350 = 0;
  DAT_14151e351 = 1;
  return this;
}

