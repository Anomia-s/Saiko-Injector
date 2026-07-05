/**
 * Function: triple_single_quoted_f_string
 * Address:  1408344c0
 * Signature: QString * __thiscall triple_single_quoted_f_string(void * this, QString * param_1, undefined4 param_2)
 * Body size: 596 bytes
 */


QString * __thiscall triple_single_quoted_f_string(void *this,QString *param_1,undefined4 param_2)

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
    pcVar1 = "Number";
    break;
  case 3:
    pcVar1 = "Double-quoted string";
    break;
  case 4:
    pcVar1 = "Single-quoted string";
    break;
  case 5:
    pcVar1 = "Keyword";
    break;
  case 6:
    pcVar1 = "Triple single-quoted string";
    break;
  case 7:
    pcVar1 = "Triple double-quoted string";
    break;
  case 8:
    pcVar1 = "Class name";
    break;
  case 9:
    pcVar1 = "Function or method name";
    break;
  case 10:
    pcVar1 = "Operator";
    break;
  case 0xb:
    pcVar1 = "Identifier";
    break;
  case 0xc:
    pcVar1 = "Comment block";
    break;
  case 0xd:
    pcVar1 = "Unclosed string";
    break;
  case 0xe:
    pcVar1 = "Highlighted identifier";
    break;
  case 0xf:
    pcVar1 = "Decorator";
    break;
  case 0x10:
    pcVar1 = "Double-quoted f-string";
    break;
  case 0x11:
    pcVar1 = "Single-quoted f-string";
    break;
  case 0x12:
    pcVar1 = "Triple single-quoted f-string";
    break;
  case 0x13:
    pcVar1 = "Triple double-quoted f-string";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_141240ff8,(char *)param_1,pcVar1,0);
  return param_1;
}

