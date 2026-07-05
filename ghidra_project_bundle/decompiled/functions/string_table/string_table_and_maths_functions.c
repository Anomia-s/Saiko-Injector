/**
 * Function: string_table_and_maths_functions
 * Address:  14058fad0
 * Signature: QString * __thiscall string_table_and_maths_functions(void * this, QString * param_1, undefined4 param_2)
 * Body size: 596 bytes
 */


QString * __thiscall
string_table_and_maths_functions(void *this,QString *param_1,undefined4 param_2)

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
    pcVar1 = "Line comment";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  case 4:
    pcVar1 = "Number";
    break;
  case 5:
    pcVar1 = "Keyword";
    break;
  case 6:
    pcVar1 = "String";
    break;
  case 7:
    pcVar1 = "Character";
    break;
  case 8:
    pcVar1 = "Literal string";
    break;
  case 9:
    pcVar1 = "Preprocessor";
    break;
  case 10:
    pcVar1 = "Operator";
    break;
  case 0xb:
    pcVar1 = "Identifier";
    break;
  case 0xc:
    pcVar1 = "Unclosed string";
    break;
  case 0xd:
    pcVar1 = "Basic functions";
    break;
  case 0xe:
    pcVar1 = "String, table and maths functions";
    break;
  case 0xf:
    pcVar1 = "Coroutines, i/o and system facilities";
    break;
  case 0x10:
    pcVar1 = "User defined 1";
    break;
  case 0x11:
    pcVar1 = "User defined 2";
    break;
  case 0x12:
    pcVar1 = "User defined 3";
    break;
  case 0x13:
    pcVar1 = "User defined 4";
    break;
  case 0x14:
    pcVar1 = "Label";
  }
  QMetaObject::tr((QMetaObject *)&DAT_1412402a8,(char *)param_1,pcVar1,0);
  return param_1;
}

