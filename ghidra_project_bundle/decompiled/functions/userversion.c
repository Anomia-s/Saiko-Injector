/**
 * Function: userversion
 * Address:  140278a60
 * Signature: undefined userversion(void)
 * Body size: 793 bytes
 */


QByteArray * userversion(longlong param_1,QByteArray *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *local_108;
  undefined8 local_100;
  QChar *local_f8;
  ulonglong local_f0;
  char *local_e8;
  undefined8 local_e0;
  QChar *local_d8;
  ulonglong local_d0;
  char *local_c8;
  undefined8 local_c0;
  QChar *local_b8;
  ulonglong local_b0;
  char *local_a8;
  undefined8 local_a0;
  QChar *local_98;
  ulonglong local_90;
  char *local_88;
  undefined8 local_80;
  QByteArray local_78 [16];
  undefined8 local_68;
  QString local_60 [16];
  ulonglong local_50;
  QXmlStreamWriter local_48 [8];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  QByteArray::QByteArray(local_78);
  QXmlStreamWriter::QXmlStreamWriter(local_48,local_78);
  uVar3 = DAT_141500978;
  QXmlStreamWriter::setAutoFormatting(local_48,SUB41((DAT_141500978 & 0x10) >> 4,0));
  QXmlStreamWriter::writeStartDocument(local_48);
  local_108 = "QtAdvancedDockingSystem";
  local_100 = 0x17;
  QXmlStreamWriter::writeStartElement(local_48,&local_108);
  QString::number((int)local_60,1);
  local_f8 = QString::begin(local_60);
  local_f0 = local_50 | 0x8000000000000000;
  local_e8 = "Version";
  local_e0 = 7;
  QXmlStreamWriter::writeAttribute(local_48,&local_e8,&local_f8);
  QString::~QString(local_60);
  QString::number((int)local_60,param_3);
  local_d8 = QString::begin(local_60);
  local_d0 = local_50 | 0x8000000000000000;
  local_c8 = "UserVersion";
  local_c0 = 0xb;
  QXmlStreamWriter::writeAttribute(local_48,&local_c8,&local_d8);
  QString::~QString(local_60);
  QString::number((__int64)local_60,(int)*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x48));
  local_b8 = QString::begin(local_60);
  local_b0 = local_50 | 0x8000000000000000;
  local_a8 = "Containers";
  local_a0 = 10;
  QXmlStreamWriter::writeAttribute(local_48,&local_a8,&local_b8);
  QString::~QString(local_60);
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (*(QObject **)(lVar6 + 0xa8) != (QObject *)0x0) {
    QObject::objectName(*(QObject **)(lVar6 + 0xa8));
    local_98 = QString::begin(local_60);
    local_90 = local_50 | 0x8000000000000000;
    local_88 = "CentralWidget";
    local_80 = 0xd;
    QXmlStreamWriter::writeAttribute(local_48,&local_88,&local_98);
    QString::~QString(local_60);
    lVar6 = *(longlong *)(param_1 + 0x30);
  }
  piVar2 = *(int **)(lVar6 + 0x38);
  if ((piVar2 == (int *)0x0) || (1 < *piVar2)) {
    FUN_140096f80(lVar6 + 0x38,0,0,0);
    puVar4 = *(undefined8 **)(lVar6 + 0x40);
    puVar7 = puVar4;
    if (*(int **)(lVar6 + 0x38) != (int *)0x0) {
      iVar1 = **(int **)(lVar6 + 0x38);
      goto joined_r0x000140278ca9;
    }
  }
  else {
    puVar4 = *(undefined8 **)(lVar6 + 0x40);
    iVar1 = *piVar2;
joined_r0x000140278ca9:
    puVar7 = puVar4;
    if (iVar1 < 2) goto LAB_140278cd3;
  }
  FUN_140096f80(lVar6 + 0x38,0,0,0);
  puVar4 = *(undefined8 **)(lVar6 + 0x40);
LAB_140278cd3:
  lVar6 = *(longlong *)(lVar6 + 0x48);
  for (; puVar7 != puVar4 + lVar6; puVar7 = puVar7 + 1) {
    FUN_14056cec0(*puVar7,local_48);
  }
  QXmlStreamWriter::writeEndElement(local_48);
  QXmlStreamWriter::writeEndDocument(local_48);
  if ((uVar3 & 0x20) == 0) {
    QByteArray::QByteArray(param_2,local_78);
  }
  else {
    pcVar5 = QByteArray::data(local_78);
    qCompress((uchar *)param_2,(__int64)pcVar5,(int)local_68);
  }
  QXmlStreamWriter::~QXmlStreamWriter(local_48);
  QByteArray::~QByteArray(local_78);
  return param_2;
}

