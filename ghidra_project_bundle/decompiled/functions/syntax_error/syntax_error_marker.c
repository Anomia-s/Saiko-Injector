/**
 * Function: syntax_error_marker
 * Address:  14083eb50
 * Signature: QString * __thiscall syntax_error_marker(void * this, QString * param_1, undefined4 param_2)
 * Body size: 329 bytes
 */


QString * __thiscall syntax_error_marker(void *this,QString *param_1,undefined4 param_2)

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
    pcVar1 = "Identifier";
    break;
  case 3:
    pcVar1 = "Keyword";
    break;
  case 4:
    pcVar1 = "Number";
    break;
  case 5:
    pcVar1 = "Reference";
    break;
  case 6:
    pcVar1 = "Document delimiter";
    break;
  case 7:
    pcVar1 = "Text block marker";
    break;
  case 8:
    pcVar1 = "Syntax error marker";
    break;
  case 9:
    pcVar1 = "Operator";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_1412417e8,(char *)param_1,pcVar1,0);
  return param_1;
}

