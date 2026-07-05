/**
 * Function: qpointerads_cautohidedockcontainer
 * Address:  140592b30
 * Signature: int __fastcall qpointerads_cautohidedockcontainer(QByteArray * param_1)
 * Body size: 228 bytes
 */


int qpointerads_cautohidedockcontainer(QByteArray *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  size_t _Size;
  char *_Buf1;
  char *_Str;
  undefined *local_70;
  undefined8 local_68;
  _Func_impl_no_alloc<_public:_static_bool___cdecl_QMetaType::registerConverter<QPointer<ads::CAutoHideDockContainer>,QObject*___ptr64,QtPrivate::QSmartPointerConvertFunctor<QPointer<ads::CAutoHideDockContainer>_>_>(QtPrivate::QSmartPointerConvertFunctor<QPointer<ads::CAutoHideDockContainer>_>)_::_1_::<lambda_1>,bool,void_const*___ptr64,void*___ptr64>_vftable
  *local_60 [7];
  _Func_impl_no_alloc<_public:_static_bool___cdecl_QMetaType::registerConverter<QPointer<ads::CAutoHideDockContainer>,QObject*___ptr64,QtPrivate::QSmartPointerConvertFunctor<QPointer<ads::CAutoHideDockContainer>_>_>(QtPrivate::QSmartPointerConvertFunctor<QPointer<ads::CAutoHideDockContainer>_>)_::_1_::<lambda_1>,bool,void_const*___ptr64,void*___ptr64>_vftable
  **local_28;
  
  local_70 = &DAT_14150b398;
  iVar2 = QMetaType::registerHelper((QMetaType *)&local_70);
  QMetaType::QMetaType((QMetaType *)&local_68,0x27);
  bVar1 = QMetaType::hasRegisteredConverterFunction(&DAT_14150b398,local_68);
  if (!bVar1) {
    local_60[0] = &std::
                   _Func_impl_no_alloc<`public:_static_bool___cdecl_QMetaType::registerConverter<QPointer<ads::CAutoHideDockContainer>,QObject*___ptr64,QtPrivate::QSmartPointerConvertFunctor<QPointer<ads::CAutoHideDockContainer>_>_>(QtPrivate::QSmartPointerConvertFunctor<QPointer<ads::CAutoHideDockContainer>_>)'::`1'::<lambda_1>,bool,void_const*___ptr64,void*___ptr64>
                   ::vftable;
    local_28 = local_60;
    FUN_140592c20(local_28,&DAT_14150b398,&DAT_14150af30);
  }
  if ((local_70 == (undefined *)0x0) || (_Str = *(char **)(local_70 + 0x18), _Str == (char *)0x0)) {
    _Str = (char *)0x0;
    _Size = 0;
    _Buf1 = QByteArray::begin(param_1);
    if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_140592bfa;
  }
  else {
    _Size = strlen(_Str);
    _Buf1 = QByteArray::begin(param_1);
    if (*(size_t *)(param_1 + 0x10) != _Size) goto LAB_140592bfa;
  }
  if (_Size == 0) {
    return iVar2;
  }
  iVar3 = memcmp(_Buf1,_Str,_Size);
  if (iVar3 == 0) {
    return iVar2;
  }
LAB_140592bfa:
  QMetaType::registerNormalizedTypedef(param_1,local_70);
  return iVar2;
}

