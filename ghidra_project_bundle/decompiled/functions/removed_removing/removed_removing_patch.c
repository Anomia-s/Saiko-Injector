/**
 * Function: removed_removing_patch
 * Address:  1408286d0
 * Signature: QString * __thiscall removed_removing_patch(void * this, QString * param_1, undefined4 param_2)
 * Body size: 380 bytes
 */


QString * __thiscall removed_removing_patch(void *this,QString *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "Default";
    break;
  case 1:
    pcVar1 = "Comment";
    break;
  case 2:
    pcVar1 = "Command";
    break;
  case 3:
    pcVar1 = "Header";
    break;
  case 4:
    pcVar1 = "Position";
    break;
  case 5:
    pcVar1 = "Removed line";
    break;
  case 6:
    pcVar1 = "Added line";
    break;
  case 7:
    pcVar1 = "Changed line";
    break;
  case 8:
    pcVar1 = "Added adding patch";
    break;
  case 9:
    pcVar1 = "Removed adding patch";
    break;
  case 10:
    pcVar1 = "Added removing patch";
    break;
  case 0xb:
    pcVar1 = "Removed removing patch";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_14123fbc8,(char *)param_1,pcVar1,0);
  return param_1;
}

