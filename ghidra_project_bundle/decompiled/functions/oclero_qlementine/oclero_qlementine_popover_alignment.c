/**
 * Function: oclero_qlementine_popover_alignment
 * Address:  140234c70
 * Signature: undefined oclero_qlementine_popover_alignment(void)
 * Body size: 305 bytes
 */


int oclero_qlementine_popover_alignment(void)

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
  if (DAT_1416b853c != 0) {
    return DAT_1416b853c;
  }
  pcVar3 = QMetaObject::className((QMetaObject *)&DAT_140df83b8);
  QByteArray::QByteArray(local_48);
  sVar4 = strlen(pcVar3);
  QByteArray::reserve(local_48,sVar4 + 0xb);
  pQVar5 = QByteArray::append(local_48,pcVar3,-1);
  pQVar5 = QByteArray::append(pQVar5,"::",-1);
  QByteArray::append(pQVar5,"Alignment",-1);
  local_30 = &DAT_1414ff5f0;
  iVar1 = QMetaType::registerHelper((QMetaType *)&local_30);
  if ((local_30 == (undefined *)0x0) ||
     (pcVar3 = *(char **)(local_30 + 0x18), pcVar3 == (char *)0x0)) {
    pcVar3 = (char *)0x0;
    sVar4 = 0;
    _Buf1 = QByteArray::begin(local_48);
    if (local_38 == 0) goto LAB_140234d61;
  }
  else {
    sVar4 = strlen(pcVar3);
    _Buf1 = QByteArray::begin(local_48);
    if (local_38 == sVar4) {
LAB_140234d61:
      if ((sVar4 == 0) || (iVar2 = memcmp(_Buf1,pcVar3,sVar4), iVar2 == 0)) goto LAB_140234d86;
    }
  }
  QMetaType::registerNormalizedTypedef(local_48,local_30);
LAB_140234d86:
  DAT_1416b853c = iVar1;
  QByteArray::~QByteArray(local_48);
  return iVar1;
}

