/**
 * Function: oclero_qlementine_radiusesf
 * Address:  140235200
 * Signature: undefined oclero_qlementine_radiusesf(void)
 * Body size: 182 bytes
 */


int oclero_qlementine_radiusesf(void)

{
  int iVar1;
  int iVar2;
  size_t _Size;
  char *_Buf1;
  char *_Str;
  QByteArray local_48 [16];
  size_t local_38;
  undefined *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  QMetaObject::normalizedType((char *)local_48);
  local_30 = &DAT_1414ff7b0;
  iVar1 = QMetaType::registerHelper((QMetaType *)&local_30);
  if ((local_30 == (undefined *)0x0) || (_Str = *(char **)(local_30 + 0x18), _Str == (char *)0x0)) {
    _Str = (char *)0x0;
    _Size = 0;
    _Buf1 = QByteArray::begin(local_48);
    if (local_38 == 0) goto LAB_14023527c;
  }
  else {
    _Size = strlen(_Str);
    _Buf1 = QByteArray::begin(local_48);
    if (local_38 == _Size) {
LAB_14023527c:
      if ((_Size == 0) || (iVar2 = memcmp(_Buf1,_Str,_Size), iVar2 == 0)) goto LAB_1402352a1;
    }
  }
  QMetaType::registerNormalizedTypedef(local_48,local_30);
LAB_1402352a1:
  QByteArray::~QByteArray(local_48);
  return iVar1;
}

