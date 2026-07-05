/**
 * Function: block_comment
 * Address:  140a59f20
 * Signature: QString * __thiscall block_comment(void * this, QString * param_1, undefined4 param_2)
 * Body size: 488 bytes
 */


QString * __thiscall block_comment(void *this,QString *param_1,undefined4 param_2)

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
    pcVar1 = "Operator";
    break;
  case 5:
    pcVar1 = "Identifier";
    break;
  case 6:
    pcVar1 = "CPU instruction";
    break;
  case 7:
    pcVar1 = "FPU instruction";
    break;
  case 8:
    pcVar1 = "Register";
    break;
  case 9:
    pcVar1 = "Directive";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  case 0xb:
    pcVar1 = "Directive operand";
    break;
  case 0xc:
    pcVar1 = "Block comment";
    break;
  case 0xd:
    pcVar1 = "Single-quoted string";
    break;
  case 0xe:
    pcVar1 = "Unclosed string";
    break;
  case 0x10:
    pcVar1 = "Extended instruction";
    break;
  case 0x11:
    pcVar1 = "Comment directive";
  }
  QMetaObject::tr((QMetaObject *)&DAT_14123f038,(char *)param_1,pcVar1,0);
  return param_1;
}

