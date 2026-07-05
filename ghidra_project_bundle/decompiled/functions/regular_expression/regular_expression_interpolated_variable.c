/**
 * Function: regular_expression_interpolated_variable
 * Address:  14082fbc0
 * Signature: QString * __thiscall regular_expression_interpolated_variable(void * this, QString * param_1, undefined4 param_2)
 * Body size: 1163 bytes
 */


QString * __thiscall
regular_expression_interpolated_variable(void *this,QString *param_1,undefined4 param_2)

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
  default:
    QString::QString(param_1);
    return param_1;
  case 10:
    pcVar1 = "Operator";
    break;
  case 0xb:
    pcVar1 = "Identifier";
    break;
  case 0xc:
    pcVar1 = "Scalar";
    break;
  case 0xd:
    pcVar1 = "Array";
    break;
  case 0xe:
    pcVar1 = "Hash";
    break;
  case 0xf:
    pcVar1 = "Symbol table";
    break;
  case 0x11:
    pcVar1 = "Regular expression";
    break;
  case 0x12:
    pcVar1 = "Substitution";
    break;
  case 0x14:
    pcVar1 = "Backticks";
    break;
  case 0x15:
    pcVar1 = "Data section";
    break;
  case 0x16:
    pcVar1 = "Here document delimiter";
    break;
  case 0x17:
    pcVar1 = "Single-quoted here document";
    break;
  case 0x18:
    pcVar1 = "Double-quoted here document";
    break;
  case 0x19:
    pcVar1 = "Backtick here document";
    break;
  case 0x1a:
    pcVar1 = "Quoted string (q)";
    break;
  case 0x1b:
    pcVar1 = "Quoted string (qq)";
    break;
  case 0x1c:
    pcVar1 = "Quoted string (qx)";
    break;
  case 0x1d:
    pcVar1 = "Quoted string (qr)";
    break;
  case 0x1e:
    pcVar1 = "Quoted string (qw)";
    break;
  case 0x1f:
    pcVar1 = "POD verbatim";
    break;
  case 0x28:
    pcVar1 = "Subroutine prototype";
    break;
  case 0x29:
    pcVar1 = "Format identifier";
    break;
  case 0x2a:
    pcVar1 = "Format body";
    break;
  case 0x2b:
    pcVar1 = "Double-quoted string (interpolated variable)";
    break;
  case 0x2c:
    pcVar1 = "Translation";
    break;
  case 0x36:
    pcVar1 = "Regular expression (interpolated variable)";
    break;
  case 0x37:
    pcVar1 = "Substitution (interpolated variable)";
    break;
  case 0x39:
    pcVar1 = "Backticks (interpolated variable)";
    break;
  case 0x3d:
    pcVar1 = "Double-quoted here document (interpolated variable)";
    break;
  case 0x3e:
    pcVar1 = "Backtick here document (interpolated variable)";
    break;
  case 0x40:
    pcVar1 = "Quoted string (qq, interpolated variable)";
    break;
  case 0x41:
    pcVar1 = "Quoted string (qx, interpolated variable)";
    break;
  case 0x42:
    pcVar1 = "Quoted string (qr, interpolated variable)";
  }
  QMetaObject::tr((QMetaObject *)&DAT_141240808,(char *)param_1,pcVar1,0);
  return param_1;
}

