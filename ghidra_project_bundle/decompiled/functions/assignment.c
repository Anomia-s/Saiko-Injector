/**
 * Function: assignment
 * Address:  140833930
 * Signature: QString * __thiscall assignment(void * this, QString * param_1, undefined4 param_2)
 * Body size: 218 bytes
 */


QString * __thiscall assignment(void *this,QString *param_1,undefined4 param_2)

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
    pcVar1 = "Section";
    break;
  case 3:
    pcVar1 = "Assignment";
    break;
  case 4:
    pcVar1 = "Default value";
    break;
  case 5:
    pcVar1 = "Key";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_141240e18,(char *)param_1,pcVar1,0);
  return param_1;
}

