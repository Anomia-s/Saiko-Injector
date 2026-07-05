/**
 * Function: auth_token
 * Address:  1402ace00
 * Signature: undefined auth_token(void)
 * Body size: 228 bytes
 */


void auth_token(undefined8 param_1,QString *param_2)

{
  QString local_88 [24];
  char *local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  QString local_50 [32];
  QSettings local_30 [16];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  QString::QString(local_50,"Studio");
  QString::QString(local_88,"Luduvo");
  QSettings::QSettings(local_30,local_88,local_50,(QObject *)0x0);
  QString::~QString(local_88);
  QString::~QString(local_50);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    local_70 = "auth/token";
    local_68 = 10;
    QSettings::remove(local_30,&local_70);
  }
  else {
    QVariant::QVariant((QVariant *)local_50,param_2);
    local_60 = "auth/token";
    local_58 = 10;
    QSettings::setValue(local_30,&local_60,(QVariant *)local_50);
    QVariant::~QVariant((QVariant *)local_50);
  }
  QSettings::~QSettings(local_30);
  return;
}

