/**
 * Function: style_pre_processor_block
 * Address:  14082e6f0
 * Signature: QString * __thiscall style_pre_processor_block(void * this, QString * param_1, undefined4 param_2)
 * Body size: 461 bytes
 */


QString * __thiscall style_pre_processor_block(void *this,QString *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "Default";
    break;
  case 1:
    pcVar1 = "Identifier";
    break;
  case 2:
    pcVar1 = "\'{ ... }\' style comment";
    break;
  case 3:
    pcVar1 = "\'(* ... *)\' style comment";
    break;
  case 4:
    pcVar1 = "Line comment";
    break;
  case 5:
    pcVar1 = "\'{$ ... }\' style pre-processor block";
    break;
  case 6:
    pcVar1 = "\'(*$ ... *)\' style pre-processor block";
    break;
  case 7:
    pcVar1 = "Number";
    break;
  case 8:
    pcVar1 = "Hexadecimal number";
    break;
  case 9:
    pcVar1 = "Keyword";
    break;
  case 10:
    pcVar1 = "Single-quoted string";
    break;
  case 0xb:
    pcVar1 = "Unclosed string";
    break;
  case 0xc:
    pcVar1 = "Character";
    break;
  case 0xd:
    pcVar1 = "Operator";
    break;
  case 0xe:
    pcVar1 = "Inline asm";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_1412406a8,(char *)param_1,pcVar1,0);
  return param_1;
}

