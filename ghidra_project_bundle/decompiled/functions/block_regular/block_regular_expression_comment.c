/**
 * Function: block_regular_expression_comment
 * Address:  140821a10
 * Signature: QString * __thiscall block_regular_expression_comment(void * this, QString * param_1, undefined4 param_2)
 * Body size: 704 bytes
 */


QString * __thiscall
block_regular_expression_comment(void *this,QString *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "Default";
    break;
  case 1:
    pcVar1 = "C-style comment";
    break;
  case 2:
    pcVar1 = "C++-style comment";
    break;
  case 3:
    pcVar1 = "JavaDoc C-style comment";
    break;
  case 4:
    pcVar1 = "Number";
    break;
  case 5:
    pcVar1 = "Keyword";
    break;
  case 6:
    pcVar1 = "Double-quoted string";
    break;
  case 7:
    pcVar1 = "Single-quoted string";
    break;
  case 8:
    pcVar1 = "IDL UUID";
    break;
  case 9:
    pcVar1 = "Pre-processor block";
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
    pcVar1 = "C# verbatim string";
    break;
  case 0xe:
    pcVar1 = "Regular expression";
    break;
  case 0xf:
    pcVar1 = "JavaDoc C++-style comment";
    break;
  case 0x10:
    pcVar1 = "Secondary keywords and identifiers";
    break;
  case 0x11:
    pcVar1 = "JavaDoc keyword";
    break;
  case 0x12:
    pcVar1 = "JavaDoc keyword error";
    break;
  case 0x13:
    pcVar1 = "Global classes";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  case 0x16:
    pcVar1 = "Block comment";
    break;
  case 0x17:
    pcVar1 = "Block regular expression";
    break;
  case 0x18:
    pcVar1 = "Block regular expression comment";
    break;
  case 0x19:
    pcVar1 = "Instance property";
  }
  QMetaObject::tr((QMetaObject *)&DAT_14123f4c0,(char *)param_1,pcVar1,0);
  return param_1;
}

