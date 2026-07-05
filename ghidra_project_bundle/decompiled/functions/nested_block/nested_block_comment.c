/**
 * Function: nested_block_comment
 * Address:  14081f8f0
 * Signature: QString * __thiscall nested_block_comment(void * this, QString * param_1, undefined4 param_2)
 * Body size: 461 bytes
 */


QString * __thiscall nested_block_comment(void *this,QString *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "Default";
    break;
  case 1:
    pcVar1 = "Block comment";
    break;
  case 2:
    pcVar1 = "Nested block comment";
    break;
  case 3:
    pcVar1 = "Line comment";
    break;
  case 4:
    pcVar1 = "Number";
    break;
  case 5:
    pcVar1 = "Operator";
    break;
  case 6:
    pcVar1 = "Identifier";
    break;
  case 7:
    pcVar1 = "Double-quoted string";
    break;
  case 8:
    pcVar1 = "Triple double-quoted string";
    break;
  case 9:
    pcVar1 = "Keyword";
    break;
  case 10:
    pcVar1 = "Filter";
    break;
  case 0xb:
    pcVar1 = "Plugin";
    break;
  case 0xc:
    pcVar1 = "Function";
    break;
  case 0xd:
    pcVar1 = "Clip property";
    break;
  case 0xe:
    pcVar1 = "User defined";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_14123f198,(char *)param_1,pcVar1,0);
  return param_1;
}

