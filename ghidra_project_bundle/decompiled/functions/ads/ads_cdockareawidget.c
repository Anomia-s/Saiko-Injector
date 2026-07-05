/**
 * Function: ads_cdockareawidget
 * Address:  140294700
 * Signature: undefined ads_cdockareawidget(void)
 * Body size: 270 bytes
 */


int ads_cdockareawidget(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  QByteArray *this;
  char *_Buf1;
  QByteArray local_48 [16];
  size_t local_38;
  undefined *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (DAT_1416bad28 != 0) {
    return DAT_1416bad28;
  }
  pcVar3 = QMetaObject::className((QMetaObject *)&DAT_140dff7e0);
  QByteArray::QByteArray(local_48);
  sVar4 = strlen(pcVar3);
  QByteArray::reserve(local_48,sVar4 + 1);
  this = QByteArray::append(local_48,pcVar3,-1);
  QByteArray::append(this,'*');
  local_30 = &DAT_1415014a0;
  iVar1 = QMetaType::registerHelper((QMetaType *)&local_30);
  if ((local_30 == (undefined *)0x0) ||
     (pcVar3 = *(char **)(local_30 + 0x18), pcVar3 == (char *)0x0)) {
    pcVar3 = (char *)0x0;
    sVar4 = 0;
    _Buf1 = QByteArray::begin(local_48);
    if (local_38 == 0) goto LAB_1402947ce;
  }
  else {
    sVar4 = strlen(pcVar3);
    _Buf1 = QByteArray::begin(local_48);
    if (local_38 == sVar4) {
LAB_1402947ce:
      if ((sVar4 == 0) || (iVar2 = memcmp(_Buf1,pcVar3,sVar4), iVar2 == 0)) goto LAB_1402947f3;
    }
  }
  QMetaType::registerNormalizedTypedef(local_48,local_30);
LAB_1402947f3:
  DAT_1416bad28 = iVar1;
  QByteArray::~QByteArray(local_48);
  return iVar1;
}

