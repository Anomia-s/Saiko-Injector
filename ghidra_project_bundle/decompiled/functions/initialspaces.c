/**
 * Function: initialspaces
 * Address:  140833e60
 * Signature: undefined8 __thiscall initialspaces(void * this, QSettings * param_1, QString * param_2)
 * Body size: 309 bytes
 */


undefined8 __thiscall initialspaces(void *this,QSettings *param_1,QString *param_2)

{
  undefined8 extraout_RAX;
  QChar *local_98;
  ulonglong local_90;
  QChar *local_88;
  ulonglong local_80;
  QVariant local_78 [32];
  char *local_58;
  undefined8 local_50;
  QString local_48 [16];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  QVariant::QVariant(local_78,*(bool *)((longlong)this + 0x60));
  QString::QString(local_48,param_2);
  local_58 = "foldcompact";
  local_50 = 0xb;
  QString::operator+=(local_48,&local_58);
  local_98 = QString::begin(local_48);
  local_90 = local_38 | 0x8000000000000000;
  QSettings::setValue(param_1,&local_98,local_78);
  QString::~QString(local_48);
  QVariant::~QVariant(local_78);
  QVariant::QVariant(local_78,*(bool *)((longlong)this + 0x61));
  QString::QString(local_48,param_2);
  local_58 = "initialspaces";
  local_50 = 0xd;
  QString::operator+=(local_48,&local_58);
  local_88 = QString::begin(local_48);
  local_80 = local_38 | 0x8000000000000000;
  QSettings::setValue(param_1,&local_88,local_78);
  QString::~QString(local_48);
  QVariant::~QVariant(local_78);
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
}

