/**
 * Function: right_quoted_string
 * Address:  140820f50
 * Signature: QString * __thiscall right_quoted_string(void * this, QString * param_1, undefined4 param_2)
 * Body size: 461 bytes
 */


QString * __thiscall right_quoted_string(void *this,QString *param_1,undefined4 param_2)

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
    pcVar1 = "String";
    break;
  case 3:
    pcVar1 = "Left quoted string";
    break;
  case 4:
    pcVar1 = "Right quoted string";
    break;
  case 5:
    pcVar1 = "Function";
    break;
  case 6:
    pcVar1 = "Variable";
    break;
  case 7:
    pcVar1 = "Label";
    break;
  case 8:
    pcVar1 = "User defined";
    break;
  case 9:
    pcVar1 = "WHILE block";
    break;
  case 10:
    pcVar1 = "FOREACH block";
    break;
  case 0xb:
    pcVar1 = "IF block";
    break;
  case 0xc:
    pcVar1 = "MACRO block";
    break;
  case 0xd:
    pcVar1 = "Variable within a string";
    break;
  case 0xe:
    pcVar1 = "Number";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_14123f458,(char *)param_1,pcVar1,0);
  return param_1;
}

