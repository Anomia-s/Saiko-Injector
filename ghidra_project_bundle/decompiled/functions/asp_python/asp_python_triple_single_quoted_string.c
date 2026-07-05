/**
 * Function: asp_python_triple_single_quoted_string
 * Address:  140829a00
 * Signature: QString * __thiscall asp_python_triple_single_quoted_string(void * this, QString * param_1, undefined4 param_2)
 * Body size: 2999 bytes
 */


QString * __thiscall
asp_python_triple_single_quoted_string(void *this,QString *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "HTML default";
    break;
  case 1:
    pcVar1 = "Tag";
    break;
  case 2:
    pcVar1 = "Unknown tag";
    break;
  case 3:
    pcVar1 = "Attribute";
    break;
  case 4:
    pcVar1 = "Unknown attribute";
    break;
  case 5:
    pcVar1 = "HTML number";
    break;
  case 6:
    pcVar1 = "HTML double-quoted string";
    break;
  case 7:
    pcVar1 = "HTML single-quoted string";
    break;
  case 8:
    pcVar1 = "Other text in a tag";
    break;
  case 9:
    pcVar1 = "HTML comment";
    break;
  case 10:
    pcVar1 = "Entity";
    break;
  case 0xb:
    pcVar1 = "End of a tag";
    break;
  case 0xc:
    pcVar1 = "Start of an XML fragment";
    break;
  case 0xd:
    pcVar1 = "End of an XML fragment";
    break;
  case 0xe:
    pcVar1 = "Script tag";
    break;
  case 0xf:
    pcVar1 = "Start of an ASP fragment with @";
    break;
  case 0x10:
    pcVar1 = "Start of an ASP fragment";
    break;
  case 0x11:
    pcVar1 = "CDATA";
    break;
  case 0x12:
    pcVar1 = "Start of a PHP fragment";
    break;
  case 0x13:
    pcVar1 = "Unquoted HTML value";
    break;
  case 0x14:
    pcVar1 = "ASP X-Code comment";
    break;
  case 0x15:
    pcVar1 = "SGML default";
    break;
  case 0x16:
    pcVar1 = "SGML command";
    break;
  case 0x17:
    pcVar1 = "First parameter of an SGML command";
    break;
  case 0x18:
    pcVar1 = "SGML double-quoted string";
    break;
  case 0x19:
    pcVar1 = "SGML single-quoted string";
    break;
  case 0x1a:
    pcVar1 = "SGML error";
    break;
  case 0x1b:
    pcVar1 = "SGML special entity";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  case 0x1d:
    pcVar1 = "SGML comment";
    break;
  case 0x1e:
    pcVar1 = "First parameter comment of an SGML command";
    break;
  case 0x1f:
    pcVar1 = "SGML block default";
    break;
  case 0x28:
    pcVar1 = "Start of a JavaScript fragment";
    break;
  case 0x29:
    pcVar1 = "JavaScript default";
    break;
  case 0x2a:
    pcVar1 = "JavaScript comment";
    break;
  case 0x2b:
    pcVar1 = "JavaScript line comment";
    break;
  case 0x2c:
    pcVar1 = "JavaDoc style JavaScript comment";
    break;
  case 0x2d:
    pcVar1 = "JavaScript number";
    break;
  case 0x2e:
    pcVar1 = "JavaScript word";
    break;
  case 0x2f:
    pcVar1 = "JavaScript keyword";
    break;
  case 0x30:
    pcVar1 = "JavaScript double-quoted string";
    break;
  case 0x31:
    pcVar1 = "JavaScript single-quoted string";
    break;
  case 0x32:
    pcVar1 = "JavaScript symbol";
    break;
  case 0x33:
    pcVar1 = "JavaScript unclosed string";
    break;
  case 0x34:
    pcVar1 = "JavaScript regular expression";
    break;
  case 0x37:
    pcVar1 = "Start of an ASP JavaScript fragment";
    break;
  case 0x38:
    pcVar1 = "ASP JavaScript default";
    break;
  case 0x39:
    pcVar1 = "ASP JavaScript comment";
    break;
  case 0x3a:
    pcVar1 = "ASP JavaScript line comment";
    break;
  case 0x3b:
    pcVar1 = "JavaDoc style ASP JavaScript comment";
    break;
  case 0x3c:
    pcVar1 = "ASP JavaScript number";
    break;
  case 0x3d:
    pcVar1 = "ASP JavaScript word";
    break;
  case 0x3e:
    pcVar1 = "ASP JavaScript keyword";
    break;
  case 0x3f:
    pcVar1 = "ASP JavaScript double-quoted string";
    break;
  case 0x40:
    pcVar1 = "ASP JavaScript single-quoted string";
    break;
  case 0x41:
    pcVar1 = "ASP JavaScript symbol";
    break;
  case 0x42:
    pcVar1 = "ASP JavaScript unclosed string";
    break;
  case 0x43:
    pcVar1 = "ASP JavaScript regular expression";
    break;
  case 0x46:
    pcVar1 = "Start of a VBScript fragment";
    break;
  case 0x47:
    pcVar1 = "VBScript default";
    break;
  case 0x48:
    pcVar1 = "VBScript comment";
    break;
  case 0x49:
    pcVar1 = "VBScript number";
    break;
  case 0x4a:
    pcVar1 = "VBScript keyword";
    break;
  case 0x4b:
    pcVar1 = "VBScript string";
    break;
  case 0x4c:
    pcVar1 = "VBScript identifier";
    break;
  case 0x4d:
    pcVar1 = "VBScript unclosed string";
    break;
  case 0x50:
    pcVar1 = "Start of an ASP VBScript fragment";
    break;
  case 0x51:
    pcVar1 = "ASP VBScript default";
    break;
  case 0x52:
    pcVar1 = "ASP VBScript comment";
    break;
  case 0x53:
    pcVar1 = "ASP VBScript number";
    break;
  case 0x54:
    pcVar1 = "ASP VBScript keyword";
    break;
  case 0x55:
    pcVar1 = "ASP VBScript string";
    break;
  case 0x56:
    pcVar1 = "ASP VBScript identifier";
    break;
  case 0x57:
    pcVar1 = "ASP VBScript unclosed string";
    break;
  case 0x5a:
    pcVar1 = "Start of a Python fragment";
    break;
  case 0x5b:
    pcVar1 = "Python default";
    break;
  case 0x5c:
    pcVar1 = "Python comment";
    break;
  case 0x5d:
    pcVar1 = "Python number";
    break;
  case 0x5e:
    pcVar1 = "Python double-quoted string";
    break;
  case 0x5f:
    pcVar1 = "Python single-quoted string";
    break;
  case 0x60:
    pcVar1 = "Python keyword";
    break;
  case 0x61:
    pcVar1 = "Python triple single-quoted string";
    break;
  case 0x62:
    pcVar1 = "Python triple double-quoted string";
    break;
  case 99:
    pcVar1 = "Python class name";
    break;
  case 100:
    pcVar1 = "Python function or method name";
    break;
  case 0x65:
    pcVar1 = "Python operator";
    break;
  case 0x66:
    pcVar1 = "Python identifier";
    break;
  case 0x69:
    pcVar1 = "Start of an ASP Python fragment";
    break;
  case 0x6a:
    pcVar1 = "ASP Python default";
    break;
  case 0x6b:
    pcVar1 = "ASP Python comment";
    break;
  case 0x6c:
    pcVar1 = "ASP Python number";
    break;
  case 0x6d:
    pcVar1 = "ASP Python double-quoted string";
    break;
  case 0x6e:
    pcVar1 = "ASP Python single-quoted string";
    break;
  case 0x6f:
    pcVar1 = "ASP Python keyword";
    break;
  case 0x70:
    pcVar1 = "ASP Python triple single-quoted string";
    break;
  case 0x71:
    pcVar1 = "ASP Python triple double-quoted string";
    break;
  case 0x72:
    pcVar1 = "ASP Python class name";
    break;
  case 0x73:
    pcVar1 = "ASP Python function or method name";
    break;
  case 0x74:
    pcVar1 = "ASP Python operator";
    break;
  case 0x75:
    pcVar1 = "ASP Python identifier";
    break;
  case 0x76:
    pcVar1 = "PHP default";
    break;
  case 0x77:
    pcVar1 = "PHP double-quoted string";
    break;
  case 0x78:
    pcVar1 = "PHP single-quoted string";
    break;
  case 0x79:
    pcVar1 = "PHP keyword";
    break;
  case 0x7a:
    pcVar1 = "PHP number";
    break;
  case 0x7b:
    pcVar1 = "PHP variable";
    break;
  case 0x7c:
    pcVar1 = "PHP comment";
    break;
  case 0x7d:
    pcVar1 = "PHP line comment";
    break;
  case 0x7e:
    pcVar1 = "PHP double-quoted variable";
    break;
  case 0x7f:
    pcVar1 = "PHP operator";
  }
  QMetaObject::tr((QMetaObject *)&DAT_14123ffb8,(char *)param_1,pcVar1,0);
  return param_1;
}

