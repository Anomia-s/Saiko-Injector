/**
 * Function: ddoc_style_block_comment
 * Address:  140827900
 * Signature: QString * __thiscall ddoc_style_block_comment(void * this, QString * param_1, undefined4 param_2)
 * Body size: 677 bytes
 */


QString * __thiscall ddoc_style_block_comment(void *this,QString *param_1,undefined4 param_2)

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
    pcVar1 = "Line comment";
    break;
  case 3:
    pcVar1 = "DDoc style block comment";
    break;
  case 4:
    pcVar1 = "Nesting comment";
    break;
  case 5:
    pcVar1 = "Number";
    break;
  case 6:
    pcVar1 = "Keyword";
    break;
  case 7:
    pcVar1 = "Secondary keyword";
    break;
  case 8:
    pcVar1 = "Documentation keyword";
    break;
  case 9:
    pcVar1 = "Type definition";
    break;
  case 10:
    pcVar1 = "String";
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
    pcVar1 = "Identifier";
    break;
  case 0xf:
    pcVar1 = "DDoc style line comment";
    break;
  case 0x10:
    pcVar1 = "DDoc keyword";
    break;
  case 0x11:
    pcVar1 = "DDoc keyword error";
    break;
  case 0x12:
    pcVar1 = "Backquoted string";
    break;
  case 0x13:
    pcVar1 = "Raw string";
    break;
  case 0x14:
    pcVar1 = "User defined 1";
    break;
  case 0x15:
    pcVar1 = "User defined 2";
    break;
  case 0x16:
    pcVar1 = "User defined 3";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_14123fb68,(char *)param_1,pcVar1,0);
  return param_1;
}

