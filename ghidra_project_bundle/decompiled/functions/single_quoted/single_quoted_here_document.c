/**
 * Function: single_quoted_here_document
 * Address:  140820510
 * Signature: QString * __thiscall single_quoted_here_document(void * this, QString * param_1, undefined4 param_2)
 * Body size: 434 bytes
 */


QString * __thiscall single_quoted_here_document(void *this,QString *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "Default";
    break;
  case 1:
    pcVar1 = "Error";
    break;
  case 2:
    pcVar1 = "Comment";
    break;
  case 3:
    pcVar1 = "Number";
    break;
  case 4:
    pcVar1 = "Keyword";
    break;
  case 5:
    pcVar1 = "Double-quoted string";
    break;
  case 6:
    pcVar1 = "Single-quoted string";
    break;
  case 7:
    pcVar1 = "Operator";
    break;
  case 8:
    pcVar1 = "Identifier";
    break;
  case 9:
    pcVar1 = "Scalar";
    break;
  case 10:
    pcVar1 = "Parameter expansion";
    break;
  case 0xb:
    pcVar1 = "Backticks";
    break;
  case 0xc:
    pcVar1 = "Here document delimiter";
    break;
  case 0xd:
    pcVar1 = "Single-quoted here document";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_14123f2f8,(char *)param_1,pcVar1,0);
  return param_1;
}

