/**
 * Function: theme_not_found
 * Address:  140092ab0
 * Signature: undefined theme_not_found(void)
 * Body size: 196 bytes
 */


void theme_not_found(longlong param_1,QString *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_50;
  char *local_48;
  QString local_40 [24];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar2 = FUN_140089040();
  cVar1 = FUN_14008b3e0(uVar2,param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x43ce8);
  if (cVar1 == '\0') {
    local_50 = 0x11;
    local_48 = "Theme not found: ";
    QString::fromUtf8(local_40,&local_50);
    QString::append(local_40,param_2);
    FUN_140282ac0(uVar2,local_40);
  }
  else {
    local_50 = 7;
    local_48 = "Theme: ";
    QString::fromUtf8(local_40,&local_50);
    QString::append(local_40,param_2);
    FUN_1402826c0(uVar2,local_40);
  }
  QString::~QString(local_40);
  return;
}

