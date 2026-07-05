/**
 * Function: https_apiluduvocom
 * Address:  1402ac960
 * Signature: undefined https_apiluduvocom(void)
 * Body size: 216 bytes
 */


undefined8 https_apiluduvocom(undefined8 param_1,undefined8 param_2)

{
  char *local_80;
  undefined8 local_78;
  QSettings local_70 [16];
  QString local_60 [32];
  QString local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  QString::QString(local_60,"Studio");
  QString::QString(local_40,"Luduvo");
  QSettings::QSettings(local_70,local_40,local_60,(QObject *)0x0);
  QString::~QString(local_40);
  QString::~QString(local_60);
  QVariant::QVariant((QVariant *)local_40,"https://api.luduvo.com");
  local_80 = "backend/url";
  local_78 = 0xb;
  QSettings::value(local_70,local_60,&local_80,local_40);
  QVariant::toString((QVariant *)local_60);
  QVariant::~QVariant((QVariant *)local_60);
  QVariant::~QVariant((QVariant *)local_40);
  QSettings::~QSettings(local_70);
  return param_2;
}

