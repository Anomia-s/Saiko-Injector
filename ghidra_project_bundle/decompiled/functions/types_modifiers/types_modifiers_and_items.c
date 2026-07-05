/**
 * Function: types_modifiers_and_items
 * Address:  140832b50
 * Signature: QString * __thiscall types_modifiers_and_items(void * this, QString * param_1, undefined4 param_2)
 * Body size: 518 bytes
 */


QString * __thiscall types_modifiers_and_items(void *this,QString *param_1,undefined4 param_2)

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
    pcVar1 = "Operator";
    break;
  case 5:
    pcVar1 = "Identifier";
    break;
  case 6:
    pcVar1 = "String";
    break;
  case 7:
    pcVar1 = "Unclosed string";
    break;
  case 8:
    pcVar1 = "Directive";
    break;
  case 9:
    pcVar1 = "Bad directive";
    break;
  case 10:
    pcVar1 = "Objects, CSG and appearance";
    break;
  case 0xb:
    pcVar1 = "Types, modifiers and items";
    break;
  case 0xc:
    pcVar1 = "Predefined identifiers";
    break;
  case 0xd:
    pcVar1 = "Predefined functions";
    break;
  case 0xe:
    pcVar1 = "User defined 1";
    break;
  case 0xf:
    pcVar1 = "User defined 2";
    break;
  case 0x10:
    pcVar1 = "User defined 3";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_141240d08,(char *)param_1,pcVar1,0);
  return param_1;
}

