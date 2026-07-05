/**
 * Function: auth_user_id
 * Address:  1402ad340
 * Signature: undefined auth_user_id(void)
 * Body size: 186 bytes
 */


void auth_user_id(undefined8 param_1,__int64 param_2)

{
  QString local_78 [24];
  char *local_60;
  undefined8 local_58;
  QString local_50 [32];
  QSettings local_30 [16];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  QString::QString(local_50,"Studio");
  QString::QString(local_78,"Luduvo");
  QSettings::QSettings(local_30,local_78,local_50,(QObject *)0x0);
  QString::~QString(local_78);
  QString::~QString(local_50);
  QVariant::QVariant((QVariant *)local_50,param_2);
  local_60 = "auth/user_id";
  local_58 = 0xc;
  QSettings::setValue(local_30,&local_60,(QVariant *)local_50);
  QVariant::~QVariant((QVariant *)local_50);
  QSettings::~QSettings(local_30);
  return;
}

