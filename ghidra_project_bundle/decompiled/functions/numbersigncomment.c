/**
 * Function: numbersigncomment
 * Address:  140838980
 * Signature: undefined8 __thiscall numbersigncomment(void * this, QSettings * param_1, QString * param_2)
 * Body size: 1409 bytes
 */


undefined8 __thiscall numbersigncomment(void *this,QSettings *param_1,QString *param_2)

{
  undefined8 extraout_RAX;
  QVariant local_208 [32];
  QVariant local_1e8 [32];
  QVariant local_1c8 [32];
  QVariant local_1a8 [32];
  QVariant local_188 [32];
  QVariant local_168 [32];
  QVariant local_148 [32];
  QVariant local_128 [32];
  QChar *local_108;
  ulonglong local_100;
  QChar *local_f8;
  ulonglong local_f0;
  QChar *local_e8;
  ulonglong local_e0;
  QChar *local_d8;
  ulonglong local_d0;
  QChar *local_c8;
  ulonglong local_c0;
  QChar *local_b8;
  ulonglong local_b0;
  QChar *local_a8;
  ulonglong local_a0;
  QChar *local_98;
  ulonglong local_90;
  QVariant local_88 [32];
  char *local_68;
  undefined8 local_60;
  QString local_58 [16];
  ulonglong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  QVariant::QVariant(local_88,*(bool *)((longlong)this + 0x60));
  QString::QString(local_58,param_2);
  local_68 = "atelse";
  local_60 = 6;
  QString::operator+=(local_58,&local_68);
  local_108 = QString::begin(local_58);
  local_100 = local_48 | 0x8000000000000000;
  QSettings::value(param_1,local_208,&local_108,local_88);
  QVariant::~QVariant(local_208);
  QString::~QString(local_58);
  QVariant::~QVariant(local_88);
  QVariant::QVariant(local_88,*(bool *)((longlong)this + 0x61));
  QString::QString(local_58,param_2);
  local_68 = "foldcomments";
  local_60 = 0xc;
  QString::operator+=(local_58,&local_68);
  local_f8 = QString::begin(local_58);
  local_f0 = local_48 | 0x8000000000000000;
  QSettings::value(param_1,local_1e8,&local_f8,local_88);
  QVariant::~QVariant(local_1e8);
  QString::~QString(local_58);
  QVariant::~QVariant(local_88);
  QVariant::QVariant(local_88,*(bool *)((longlong)this + 0x62));
  QString::QString(local_58,param_2);
  local_68 = "foldcompact";
  local_60 = 0xb;
  QString::operator+=(local_58,&local_68);
  local_e8 = QString::begin(local_58);
  local_e0 = local_48 | 0x8000000000000000;
  QSettings::value(param_1,local_1c8,&local_e8,local_88);
  QVariant::~QVariant(local_1c8);
  QString::~QString(local_58);
  QVariant::~QVariant(local_88);
  QVariant::QVariant(local_88,*(bool *)((longlong)this + 99));
  QString::QString(local_58,param_2);
  local_68 = "onlybegin";
  local_60 = 9;
  QString::operator+=(local_58,&local_68);
  local_d8 = QString::begin(local_58);
  local_d0 = local_48 | 0x8000000000000000;
  QSettings::value(param_1,local_1a8,&local_d8,local_88);
  QVariant::~QVariant(local_1a8);
  QString::~QString(local_58);
  QVariant::~QVariant(local_88);
  QVariant::QVariant(local_88,*(bool *)((longlong)this + 100));
  QString::QString(local_58,param_2);
  local_68 = "backticksidentifier";
  local_60 = 0x13;
  QString::operator+=(local_58,&local_68);
  local_c8 = QString::begin(local_58);
  local_c0 = local_48 | 0x8000000000000000;
  QSettings::value(param_1,local_188,&local_c8,local_88);
  QVariant::~QVariant(local_188);
  QString::~QString(local_58);
  QVariant::~QVariant(local_88);
  QVariant::QVariant(local_88,*(bool *)((longlong)this + 0x65));
  QString::QString(local_58,param_2);
  local_68 = "numbersigncomment";
  local_60 = 0x11;
  QString::operator+=(local_58,&local_68);
  local_b8 = QString::begin(local_58);
  local_b0 = local_48 | 0x8000000000000000;
  QSettings::value(param_1,local_168,&local_b8,local_88);
  QVariant::~QVariant(local_168);
  QString::~QString(local_58);
  QVariant::~QVariant(local_88);
  QVariant::QVariant(local_88,*(bool *)((longlong)this + 0x66));
  QString::QString(local_58,param_2);
  local_68 = "backslashescapes";
  local_60 = 0x10;
  QString::operator+=(local_58,&local_68);
  local_a8 = QString::begin(local_58);
  local_a0 = local_48 | 0x8000000000000000;
  QSettings::value(param_1,local_148,&local_a8,local_88);
  QVariant::~QVariant(local_148);
  QString::~QString(local_58);
  QVariant::~QVariant(local_88);
  QVariant::QVariant(local_88,*(bool *)((longlong)this + 0x67));
  QString::QString(local_58,param_2);
  local_68 = "allowdottedword";
  local_60 = 0xf;
  QString::operator+=(local_58,&local_68);
  local_98 = QString::begin(local_58);
  local_90 = local_48 | 0x8000000000000000;
  QSettings::value(param_1,local_128,&local_98,local_88);
  QVariant::~QVariant(local_128);
  QString::~QString(local_58);
  QVariant::~QVariant(local_88);
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
}

