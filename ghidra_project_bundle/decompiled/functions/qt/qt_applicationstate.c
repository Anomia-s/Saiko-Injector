/**
 * Function: qt_applicationstate
 * Address:  140294f00
 * Signature: undefined qt_applicationstate(void)
 * Body size: 305 bytes
 */


int qt_applicationstate(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  QByteArray *pQVar5;
  char *_Buf1;
  QByteArray local_48 [16];
  size_t local_38;
  undefined *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (DAT_1416bad38 != 0) {
    return DAT_1416bad38;
  }
  pcVar3 = QMetaObject::className((QMetaObject *)staticMetaObject_exref);
  QByteArray::QByteArray(local_48);
  sVar4 = strlen(pcVar3);
  QByteArray::reserve(local_48,sVar4 + 0x12);
  pQVar5 = QByteArray::append(local_48,pcVar3,-1);
  pQVar5 = QByteArray::append(pQVar5,"::",-1);
  QByteArray::append(pQVar5,"ApplicationState",-1);
  local_30 = &DAT_141501b30;
  iVar1 = QMetaType::registerHelper((QMetaType *)&local_30);
  if ((local_30 == (undefined *)0x0) ||
     (pcVar3 = *(char **)(local_30 + 0x18), pcVar3 == (char *)0x0)) {
    pcVar3 = (char *)0x0;
    sVar4 = 0;
    _Buf1 = QByteArray::begin(local_48);
    if (local_38 == 0) goto LAB_140294ff1;
  }
  else {
    sVar4 = strlen(pcVar3);
    _Buf1 = QByteArray::begin(local_48);
    if (local_38 == sVar4) {
LAB_140294ff1:
      if ((sVar4 == 0) || (iVar2 = memcmp(_Buf1,pcVar3,sVar4), iVar2 == 0)) goto LAB_140295016;
    }
  }
  QMetaType::registerNormalizedTypedef(local_48,local_30);
LAB_140295016:
  DAT_1416bad38 = iVar1;
  QByteArray::~QByteArray(local_48);
  return iVar1;
}

