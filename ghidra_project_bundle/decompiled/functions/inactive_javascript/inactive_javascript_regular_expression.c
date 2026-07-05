/**
 * Function: inactive_javascript_regular_expression
 * Address:  140823180
 * Signature: QString * __thiscall inactive_javascript_regular_expression(void * this, QString * param_1, undefined4 param_2)
 * Body size: 1568 bytes
 */


QString * __thiscall
inactive_javascript_regular_expression(void *this,QString *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "Default";
    break;
  case 1:
    pcVar1 = "C comment";
    break;
  case 2:
    pcVar1 = "C++ comment";
    break;
  case 3:
    pcVar1 = "JavaDoc style C comment";
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
    pcVar1 = "JavaScript regular expression";
    break;
  case 0xf:
    pcVar1 = "JavaDoc style C++ comment";
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
    pcVar1 = "Global classes and typedefs";
    break;
  case 0x14:
    pcVar1 = "C++ raw string";
    break;
  case 0x15:
    pcVar1 = "Vala triple-quoted verbatim string";
    break;
  case 0x16:
    pcVar1 = "Pike hash-quoted string";
    break;
  case 0x17:
    pcVar1 = "Pre-processor C comment";
    break;
  case 0x18:
    pcVar1 = "JavaDoc style pre-processor comment";
    break;
  case 0x19:
    pcVar1 = "User-defined literal";
    break;
  case 0x1a:
    pcVar1 = "Task marker";
    break;
  case 0x1b:
    pcVar1 = "Escape sequence";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  case 0x40:
    pcVar1 = "Inactive default";
    break;
  case 0x41:
    pcVar1 = "Inactive C comment";
    break;
  case 0x42:
    pcVar1 = "Inactive C++ comment";
    break;
  case 0x43:
    pcVar1 = "Inactive JavaDoc style C comment";
    break;
  case 0x44:
    pcVar1 = "Inactive number";
    break;
  case 0x45:
    pcVar1 = "Inactive keyword";
    break;
  case 0x46:
    pcVar1 = "Inactive double-quoted string";
    break;
  case 0x47:
    pcVar1 = "Inactive single-quoted string";
    break;
  case 0x48:
    pcVar1 = "Inactive IDL UUID";
    break;
  case 0x49:
    pcVar1 = "Inactive pre-processor block";
    break;
  case 0x4a:
    pcVar1 = "Inactive operator";
    break;
  case 0x4b:
    pcVar1 = "Inactive identifier";
    break;
  case 0x4c:
    pcVar1 = "Inactive unclosed string";
    break;
  case 0x4d:
    pcVar1 = "Inactive C# verbatim string";
    break;
  case 0x4e:
    pcVar1 = "Inactive JavaScript regular expression";
    break;
  case 0x4f:
    pcVar1 = "Inactive JavaDoc style C++ comment";
    break;
  case 0x50:
    pcVar1 = "Inactive secondary keywords and identifiers";
    break;
  case 0x51:
    pcVar1 = "Inactive JavaDoc keyword";
    break;
  case 0x52:
    pcVar1 = "Inactive JavaDoc keyword error";
    break;
  case 0x53:
    pcVar1 = "Inactive global classes and typedefs";
    break;
  case 0x54:
    pcVar1 = "Inactive C++ raw string";
    break;
  case 0x55:
    pcVar1 = "Inactive Vala triple-quoted verbatim string";
    break;
  case 0x56:
    pcVar1 = "Inactive Pike hash-quoted string";
    break;
  case 0x57:
    pcVar1 = "Inactive pre-processor C comment";
    break;
  case 0x58:
    pcVar1 = "Inactive JavaDoc style pre-processor comment";
    break;
  case 0x59:
    pcVar1 = "Inactive user-defined literal";
    break;
  case 0x5a:
    pcVar1 = "Inactive task marker";
    break;
  case 0x5b:
    pcVar1 = "Inactive escape sequence";
  }
  QMetaObject::tr((QMetaObject *)&DAT_14123f708,(char *)param_1,pcVar1,0);
  return param_1;
}

