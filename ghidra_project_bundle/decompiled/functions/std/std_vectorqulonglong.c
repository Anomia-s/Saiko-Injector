/**
 * Function: std_vectorqulonglong
 * Address:  14009f7f0
 * Signature: undefined __thiscall std_vectorqulonglong(void * this)
 * Body size: 297 bytes
 */


int __thiscall std_vectorqulonglong(void *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  size_t _Size;
  char *_Buf1;
  char *_Str;
  undefined *local_68;
  _Func_impl_no_alloc<_public:_static_bool___cdecl_QMetaType::registerMutableView<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>,QIterable<QMetaSequence>,QtPrivate::QSequentialIterableMutableViewFunctor<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_>(QtPrivate::QSequentialIterableMutableViewFunctor<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>)_::_1_::<lambda_1>,bool,void*___ptr64,void*___ptr64>_vftable
  *local_60 [7];
  _Func_impl_no_alloc<_public:_static_bool___cdecl_QMetaType::registerMutableView<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>,QIterable<QMetaSequence>,QtPrivate::QSequentialIterableMutableViewFunctor<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_>(QtPrivate::QSequentialIterableMutableViewFunctor<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>)_::_1_::<lambda_1>,bool,void*___ptr64,void*___ptr64>_vftable
  **local_28;
  
  local_68 = &DAT_1414f5120;
  iVar2 = QMetaType::registerHelper((QMetaType *)&local_68);
  bVar1 = QtPrivate::hasRegisteredConverterFunctionToIterableMetaSequence(&DAT_1414f5120);
  if (bVar1) {
    bVar1 = QtPrivate::hasRegisteredMutableViewFunctionToIterableMetaSequence(&DAT_1414f5120);
    if (bVar1) goto LAB_14009f833;
LAB_14009f87c:
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_static_bool___cdecl_QMetaType::registerMutableView<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>,QIterable<QMetaSequence>,QtPrivate::QSequentialIterableMutableViewFunctor<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_>(QtPrivate::QSequentialIterableMutableViewFunctor<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>)'::`1'::<lambda_1>,bool,void*___ptr64,void*___ptr64>
                        */
    local_60[0] = &std::
                   _Func_impl_no_alloc<`public:_static_bool___cdecl_QMetaType::registerMutableView<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>,QIterable<QMetaSequence>,QtPrivate::QSequentialIterableMutableViewFunctor<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_>(QtPrivate::QSequentialIterableMutableViewFunctor<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>)'::`1'::<lambda_1>,bool,void*___ptr64,void*___ptr64>
                   ::vftable;
    local_28 = local_60;
    FUN_14009fa90(local_28,&DAT_1414f5120,&DAT_1414f5190);
    if (local_68 != (undefined *)0x0) goto LAB_14009f8af;
LAB_14009f8d4:
    _Str = (char *)0x0;
    _Size = 0;
    _Buf1 = QByteArray::begin(this);
    if (*(longlong *)((longlong)this + 0x10) != 0) goto LAB_14009f8ff;
  }
  else {
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_static_bool___cdecl_QMetaType::registerConverter<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>,QIterable<QMetaSequence>,QtPrivate::QSequentialIterableConvertFunctor<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_>(QtPrivate::QSequentialIterableConvertFunctor<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>)'::`1'::<lambda_1>,bool,void_const*___ptr64,void*___ptr64>
                        */
    local_60[0] = (_Func_impl_no_alloc<_public:_static_bool___cdecl_QMetaType::registerMutableView<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>,QIterable<QMetaSequence>,QtPrivate::QSequentialIterableMutableViewFunctor<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_>(QtPrivate::QSequentialIterableMutableViewFunctor<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>)_::_1_::<lambda_1>,bool,void*___ptr64,void*___ptr64>_vftable
                   *)&std::
                      _Func_impl_no_alloc<`public:_static_bool___cdecl_QMetaType::registerConverter<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>,QIterable<QMetaSequence>,QtPrivate::QSequentialIterableConvertFunctor<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_>(QtPrivate::QSequentialIterableConvertFunctor<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>)'::`1'::<lambda_1>,bool,void_const*___ptr64,void*___ptr64>
                      ::vftable;
    local_28 = local_60;
    FUN_14009f920(local_28,&DAT_1414f5120,&DAT_1414f5190);
    bVar1 = QtPrivate::hasRegisteredMutableViewFunctionToIterableMetaSequence(&DAT_1414f5120);
    if (!bVar1) goto LAB_14009f87c;
LAB_14009f833:
    if (local_68 == (undefined *)0x0) goto LAB_14009f8d4;
LAB_14009f8af:
    _Str = *(char **)(local_68 + 0x18);
    if (_Str == (char *)0x0) goto LAB_14009f8d4;
    _Size = strlen(_Str);
    _Buf1 = QByteArray::begin(this);
    if (*(size_t *)((longlong)this + 0x10) != _Size) goto LAB_14009f8ff;
  }
  if (_Size == 0) {
    return iVar2;
  }
  iVar3 = memcmp(_Buf1,_Str,_Size);
  if (iVar3 == 0) {
    return iVar2;
  }
LAB_14009f8ff:
  QMetaType::registerNormalizedTypedef(this,local_68);
  return iVar2;
}

