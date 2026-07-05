/**
 * Function: indentwarning
 * Address:  140835890
 * Signature: undefined8 __thiscall indentwarning(void * this, QSettings * param_1, QString * param_2)
 * Body size: 1155 bytes
 */


undefined8 __thiscall indentwarning(void *this,QSettings *param_1,QString *param_2)

{
  undefined8 extraout_RAX;
  QChar *local_110;
  ulonglong local_108;
  QChar *local_100;
  ulonglong local_f8;
  QChar *local_f0;
  ulonglong local_e8;
  QChar *local_e0;
  ulonglong local_d8;
  QChar *local_d0;
  ulonglong local_c8;
  QChar *local_c0;
  ulonglong local_b8;
  QChar *local_b0;
  ulonglong local_a8;
  QChar *local_a0;
  ulonglong local_98;
  QChar *local_90;
  ulonglong local_88;
  QVariant local_80 [32];
  char *local_60;
  undefined8 local_58;
  QString local_50 [16];
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  QVariant::QVariant(local_80,*(bool *)((longlong)this + 0x60));
  QString::QString(local_50,param_2);
  local_60 = "foldcomments";
  local_58 = 0xc;
  QString::operator+=(local_50,&local_60);
  local_110 = QString::begin(local_50);
  local_108 = local_40 | 0x8000000000000000;
  QSettings::setValue(param_1,&local_110,local_80);
  QString::~QString(local_50);
  QVariant::~QVariant(local_80);
  QVariant::QVariant(local_80,*(bool *)((longlong)this + 0x61));
  QString::QString(local_50,param_2);
  local_60 = "foldcompact";
  local_58 = 0xb;
  QString::operator+=(local_50,&local_60);
  local_100 = QString::begin(local_50);
  local_f8 = local_40 | 0x8000000000000000;
  QSettings::setValue(param_1,&local_100,local_80);
  QString::~QString(local_50);
  QVariant::~QVariant(local_80);
  QVariant::QVariant(local_80,*(bool *)((longlong)this + 0x62));
  QString::QString(local_50,param_2);
  local_60 = "foldquotes";
  local_58 = 10;
  QString::operator+=(local_50,&local_60);
  local_f0 = QString::begin(local_50);
  local_e8 = local_40 | 0x8000000000000000;
  QSettings::setValue(param_1,&local_f0,local_80);
  QString::~QString(local_50);
  QVariant::~QVariant(local_80);
  QVariant::QVariant(local_80,*(int *)((longlong)this + 100));
  QString::QString(local_50,param_2);
  local_60 = "indentwarning";
  local_58 = 0xd;
  QString::operator+=(local_50,&local_60);
  local_e0 = QString::begin(local_50);
  local_d8 = local_40 | 0x8000000000000000;
  QSettings::setValue(param_1,&local_e0,local_80);
  QString::~QString(local_50);
  QVariant::~QVariant(local_80);
  QVariant::QVariant(local_80,*(bool *)((longlong)this + 0x68));
  QString::QString(local_50,param_2);
  local_60 = "stringsovernewline";
  local_58 = 0x12;
  QString::operator+=(local_50,&local_60);
  local_d0 = QString::begin(local_50);
  local_c8 = local_40 | 0x8000000000000000;
  QSettings::setValue(param_1,&local_d0,local_80);
  QString::~QString(local_50);
  QVariant::~QVariant(local_80);
  QVariant::QVariant(local_80,*(bool *)((longlong)this + 0x69));
  QString::QString(local_50,param_2);
  local_60 = "v2unicode";
  local_58 = 9;
  QString::operator+=(local_50,&local_60);
  local_c0 = QString::begin(local_50);
  local_b8 = local_40 | 0x8000000000000000;
  QSettings::setValue(param_1,&local_c0,local_80);
  QString::~QString(local_50);
  QVariant::~QVariant(local_80);
  QVariant::QVariant(local_80,*(bool *)((longlong)this + 0x6a));
  QString::QString(local_50,param_2);
  local_60 = "v3binaryoctal";
  local_58 = 0xd;
  QString::operator+=(local_50,&local_60);
  local_b0 = QString::begin(local_50);
  local_a8 = local_40 | 0x8000000000000000;
  QSettings::setValue(param_1,&local_b0,local_80);
  QString::~QString(local_50);
  QVariant::~QVariant(local_80);
  QVariant::QVariant(local_80,*(bool *)((longlong)this + 0x6b));
  QString::QString(local_50,param_2);
  local_60 = "v3bytes";
  local_58 = 7;
  QString::operator+=(local_50,&local_60);
  local_a0 = QString::begin(local_50);
  local_98 = local_40 | 0x8000000000000000;
  QSettings::setValue(param_1,&local_a0,local_80);
  QString::~QString(local_50);
  QVariant::~QVariant(local_80);
  QVariant::QVariant(local_80,*(bool *)((longlong)this + 0x6c));
  QString::QString(local_50,param_2);
  local_60 = "highlightsubids";
  local_58 = 0xf;
  QString::operator+=(local_50,&local_60);
  local_90 = QString::begin(local_50);
  local_88 = local_40 | 0x8000000000000000;
  QSettings::setValue(param_1,&local_90,local_80);
  QString::~QString(local_50);
  QVariant::~QVariant(local_80);
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
}

