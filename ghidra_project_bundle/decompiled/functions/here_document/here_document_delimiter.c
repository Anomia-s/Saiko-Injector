/**
 * Function: here_document_delimiter
 * Address:  1408368d0
 * Signature: QString * __thiscall here_document_delimiter(void * this, QString * param_1, undefined4 param_2)
 * Body size: 893 bytes
 */


QString * __thiscall here_document_delimiter(void *this,QString *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "Default";
    break;
  case 1:
    pcVar1 = "Error";
    break;
  case 2:
    pcVar1 = "Comment";
    break;
  case 3:
    pcVar1 = "POD";
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
    pcVar1 = "Regular expression";
    break;
  case 0xd:
    pcVar1 = "Global";
    break;
  case 0xe:
    pcVar1 = "Symbol";
    break;
  case 0xf:
    pcVar1 = "Module name";
    break;
  case 0x10:
    pcVar1 = "Instance variable";
    break;
  case 0x11:
    pcVar1 = "Class variable";
    break;
  case 0x12:
    pcVar1 = "Backticks";
    break;
  case 0x13:
    pcVar1 = "Data section";
    break;
  case 0x14:
    pcVar1 = "Here document delimiter";
    break;
  case 0x15:
    pcVar1 = "Here document";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  case 0x18:
    pcVar1 = "%q string";
    break;
  case 0x19:
    pcVar1 = "%Q string";
    break;
  case 0x1a:
    pcVar1 = "%x string";
    break;
  case 0x1b:
    pcVar1 = "%r string";
    break;
  case 0x1c:
    pcVar1 = "%w string";
    break;
  case 0x1d:
    pcVar1 = "Demoted keyword";
    break;
  case 0x1e:
    pcVar1 = "stdin";
    break;
  case 0x1f:
    pcVar1 = "stdout";
    break;
  case 0x28:
    pcVar1 = "stderr";
  }
  QMetaObject::tr((QMetaObject *)&DAT_141241058,(char *)param_1,pcVar1,0);
  return param_1;
}

