/**
 * Function: cant_write_to_file_n1
 * Address:  14055a510
 * Signature: undefined cant_write_to_file_n1(void)
 * Body size: 961 bytes
 */


void cant_write_to_file_n1(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  QString *pQVar3;
  QByteArray *pQVar4;
  ulonglong uVar5;
  QString local_170 [24];
  QString local_158 [24];
  QString local_140 [24];
  QString local_128 [24];
  QString local_110 [24];
  QChar *local_f8;
  ulonglong local_f0;
  __int64 local_e8;
  undefined *local_e0;
  __int64 local_d8;
  undefined *local_d0;
  QChar *local_c8;
  ulonglong local_c0;
  QString local_b8 [24];
  QVariant local_a0 [16];
  longlong local_90;
  QSettings local_80 [16];
  QFile local_70 [16];
  QJsonDocument local_60 [8];
  QString local_58 [32];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  QStandardPaths::writableLocation((StandardLocation)local_170);
  QString::QString(local_58,local_170);
  QString::operator+=(local_58,0x2f);
  pQVar3 = QString::append(local_58,(QString *)&DAT_1416f2970);
  QString::QString(local_158,pQVar3);
  QString::~QString(local_58);
  QSettings::QSettings(local_80,(QObject *)0x0);
  QVariant::QVariant(local_a0,local_158);
  local_f8 = QString::begin((QString *)&DAT_1416f2958);
  local_f0 = DAT_1416f2968 | 0x8000000000000000;
  QSettings::value(local_80,local_58,&local_f8,local_a0);
  QVariant::toString((QVariant *)local_58);
  QVariant::~QVariant((QVariant *)local_58);
  QVariant::~QVariant(local_a0);
  pQVar3 = local_58;
  QString::QString(pQVar3,"JSON Files (*.json)");
  QString::QString(local_b8,"Save JSON theme");
  QFileDialog::getSaveFileName
            (local_a0,*(undefined8 *)(lVar1 + 0x218),local_b8,local_140,pQVar3,0,0);
  QString::~QString(local_b8);
  QString::~QString(local_58);
  if (local_90 != 0) {
    ustatuscolorsuccess(lVar1 + 0x220,local_60);
    QJsonDocument::toJson(local_60,(JsonFormat)local_58);
    local_e8 = QByteArrayView::lengthHelperCharArray("  ",3);
    local_e0 = &DAT_1413a21da;
    local_d8 = QByteArrayView::lengthHelperCharArray("    ",5);
    local_d0 = &DAT_1413a21d8;
    pQVar4 = QByteArray::replace((QByteArray *)local_58,&local_d8,&local_e8);
    QByteArray::QByteArray((QByteArray *)local_b8,pQVar4);
    QByteArray::~QByteArray((QByteArray *)local_58);
    QFile::QFile(local_70,(QString *)local_a0);
    bVar2 = QFile::open(local_70);
    if (bVar2) {
      QFile::resize(local_70,0);
      QIODevice::write((QIODevice *)local_70,(QByteArray *)local_b8);
      QFileDevice::close((QFileDevice *)local_70);
      QVariant::QVariant((QVariant *)local_58,(QString *)local_a0);
      local_c8 = QString::begin((QString *)&DAT_1416f2958);
      local_c0 = DAT_1416f2968 | 0x8000000000000000;
      QSettings::setValue(local_80,&local_c8,local_58);
      QVariant::~QVariant((QVariant *)local_58);
      QSettings::sync(local_80);
    }
    else {
      QString::QString(local_128,"Can\'t write to file:\n%1");
      uVar5 = CONCAT62((int6)((ulonglong)pQVar3 >> 0x10),0x20);
      QString::arg(local_128,local_58,local_a0,0,uVar5);
      QString::QString(local_110,"Writing Error");
      QMessageBox::critical
                (*(undefined8 *)(lVar1 + 0x218),local_110,local_58,0x400,uVar5 & 0xffffffff00000000)
      ;
      QString::~QString(local_110);
      QString::~QString(local_58);
      QString::~QString(local_128);
    }
    QFile::~QFile(local_70);
    QByteArray::~QByteArray((QByteArray *)local_b8);
    QJsonDocument::~QJsonDocument(local_60);
  }
  QString::~QString((QString *)local_a0);
  QString::~QString(local_140);
  QSettings::~QSettings(local_80);
  QString::~QString(local_158);
  QString::~QString(local_170);
  return;
}

