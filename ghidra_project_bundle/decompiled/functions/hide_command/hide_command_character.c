/**
 * Function: hide_command_character
 * Address:  140820b00
 * Signature: QString * __thiscall hide_command_character(void * this, QString * param_1, undefined4 param_2)
 * Body size: 272 bytes
 */


QString * __thiscall hide_command_character(void *this,QString *param_1,undefined4 param_2)

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
    pcVar1 = "Keyword";
    break;
  case 3:
    pcVar1 = "Label";
    break;
  case 4:
    pcVar1 = "Hide command character";
    break;
  case 5:
    pcVar1 = "External command";
    break;
  case 6:
    pcVar1 = "Variable";
    break;
  case 7:
    pcVar1 = "Operator";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_14123f358,(char *)param_1,pcVar1,0);
  return param_1;
}

