/**
 * Function: pre_processor_block
 * Address:  140828ea0
 * Signature: QString * __thiscall pre_processor_block(void * this, QString * param_1, undefined4 param_2)
 * Body size: 461 bytes
 */


QString * __thiscall pre_processor_block(void *this,QString *param_1,undefined4 param_2)

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
    pcVar1 = "Single-quoted string";
    break;
  case 4:
    pcVar1 = "Double-quoted string";
    break;
  case 5:
    pcVar1 = "Unclosed string";
    break;
  case 6:
    pcVar1 = "Operator";
    break;
  case 7:
    pcVar1 = "Identifier";
    break;
  case 8:
    pcVar1 = "Keyword";
    break;
  case 9:
    pcVar1 = "Intrinsic function";
    break;
  case 10:
    pcVar1 = "Extended function";
    break;
  case 0xb:
    pcVar1 = "Pre-processor block";
    break;
  case 0xc:
    pcVar1 = "Dotted operator";
    break;
  case 0xd:
    pcVar1 = "Label";
    break;
  case 0xe:
    pcVar1 = "Continuation";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_14123fd98,(char *)param_1,pcVar1,0);
  return param_1;
}

