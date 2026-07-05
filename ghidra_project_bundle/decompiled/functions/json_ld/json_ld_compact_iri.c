/**
 * Function: json_ld_compact_iri
 * Address:  14082c4b0
 * Signature: QString * __thiscall json_ld_compact_iri(void * this, QString * param_1, undefined4 param_2)
 * Body size: 434 bytes
 */


QString * __thiscall json_ld_compact_iri(void *this,QString *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "Default";
    break;
  case 1:
    pcVar1 = "Number";
    break;
  case 2:
    pcVar1 = "String";
    break;
  case 3:
    pcVar1 = "Unclosed string";
    break;
  case 4:
    pcVar1 = "Property";
    break;
  case 5:
    pcVar1 = "Escape sequence";
    break;
  case 6:
    pcVar1 = "Line comment";
    break;
  case 7:
    pcVar1 = "Block comment";
    break;
  case 8:
    pcVar1 = "Operator";
    break;
  case 9:
    pcVar1 = "IRI";
    break;
  case 10:
    pcVar1 = "JSON-LD compact IRI";
    break;
  case 0xb:
    pcVar1 = "JSON keyword";
    break;
  case 0xc:
    pcVar1 = "JSON-LD keyword";
    break;
  case 0xd:
    pcVar1 = "Parsing error";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_1412401a8,(char *)param_1,pcVar1,0);
  return param_1;
}

