/**
 * Function: comment_block
 * Address:  14083ccf0
 * Signature: QString * __thiscall comment_block(void * this, QString * param_1, undefined4 param_2)
 * Body size: 488 bytes
 */


QString * __thiscall comment_block(void *this,QString *param_1,undefined4 param_2)

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
    pcVar1 = "Comment line";
    break;
  case 3:
    pcVar1 = "Number";
    break;
  case 4:
    pcVar1 = "String";
    break;
  case 5:
    pcVar1 = "Operator";
    break;
  case 6:
    pcVar1 = "Identifier";
    break;
  case 7:
    pcVar1 = "Unclosed string";
    break;
  case 8:
    pcVar1 = "Keyword";
    break;
  case 9:
    pcVar1 = "Standard operator";
    break;
  case 10:
    pcVar1 = "Attribute";
    break;
  case 0xb:
    pcVar1 = "Standard function";
    break;
  case 0xc:
    pcVar1 = "Standard package";
    break;
  case 0xd:
    pcVar1 = "Standard type";
    break;
  case 0xe:
    pcVar1 = "User defined";
    break;
  case 0xf:
    pcVar1 = "Comment block";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_141241688,(char *)param_1,pcVar1,0);
  return param_1;
}

