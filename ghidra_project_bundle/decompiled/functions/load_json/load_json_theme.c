/**
 * Function: load_json_theme
 * Address:  140559f60
 * Signature: undefined load_json_theme(void)
 * Body size: 695 bytes
 */


void load_json_theme(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  QString *pQVar3;
  Theme local_778;
  char local_e8;
  QString local_e0 [24];
  QString local_c8 [24];
  QString local_b0 [24];
  QChar *local_98;
  ulonglong local_90;
  QChar *local_88;
  ulonglong local_80;
  QString local_78 [24];
  QSettings local_60 [16];
  QVariant local_50 [32];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  QStandardPaths::writableLocation((StandardLocation)local_e0);
  QString::QString((QString *)&local_778,local_e0);
  QString::operator+=((QString *)&local_778,0x2f);
  pQVar3 = QString::append((QString *)&local_778,(QString *)&DAT_1416f2970);
  QString::QString(local_c8,pQVar3);
  QString::~QString((QString *)&local_778);
  QSettings::QSettings(local_60,(QObject *)0x0);
  QVariant::QVariant(local_50,local_c8);
  local_98 = QString::begin((QString *)&DAT_1416f2958);
  local_90 = DAT_1416f2968 | 0x8000000000000000;
  QSettings::value(local_60,&local_778,&local_98,local_50);
  QVariant::toString((QVariant *)&local_778);
  QVariant::~QVariant((QVariant *)&local_778);
  QVariant::~QVariant(local_50);
  QString::QString((QString *)&local_778,"JSON Files (*.json)");
  QString::QString((QString *)local_50,"Load JSON theme");
  QFileDialog::getOpenFileName
            (local_78,*(undefined8 *)(lVar1 + 0x218),local_50,local_b0,&local_778,0,0);
  QString::~QString((QString *)local_50);
  QString::~QString((QString *)&local_778);
  FUN_1402374d0(&local_778,local_78);
  if (local_e8 != '\0') {
    lVar1 = *(longlong *)(lVar1 + 0x218);
    cVar2 = FUN_140249070(&local_778,*(longlong *)(lVar1 + 0x28) + 0x220);
    if (cVar2 != '\0') {
      FUN_140069880(*(longlong *)(lVar1 + 0x28) + 0x220,&local_778);
      FUN_1405503b0(*(undefined8 *)(lVar1 + 0x28));
      FUN_14022f640(lVar1,*(longlong *)(lVar1 + 0x28) + 0x220);
    }
    QVariant::QVariant(local_50,local_78);
    local_88 = QString::begin((QString *)&DAT_1416f2958);
    local_80 = DAT_1416f2968 | 0x8000000000000000;
    QSettings::setValue(local_60,&local_88,local_50);
    QVariant::~QVariant(local_50);
    QSettings::sync(local_60);
    if (local_e8 == '\x01') {
      oclero::qlementine::Theme::~Theme(&local_778);
    }
  }
  QString::~QString(local_78);
  QString::~QString(local_b0);
  QSettings::~QSettings(local_60);
  QString::~QString(local_c8);
  QString::~QString(local_e0);
  return;
}

