/**
 * Function: bad_string_character
 * Address:  140831780
 * Signature: QString * __thiscall bad_string_character(void * this, QString * param_1, undefined4 param_2)
 * Body size: 488 bytes
 */


QString * __thiscall bad_string_character(void *this,QString *param_1,undefined4 param_2)

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
    pcVar1 = "DSC comment";
    break;
  case 3:
    pcVar1 = "DSC comment value";
    break;
  case 4:
    pcVar1 = "Number";
    break;
  case 5:
    pcVar1 = "Name";
    break;
  case 6:
    pcVar1 = "Keyword";
    break;
  case 7:
    pcVar1 = "Literal";
    break;
  case 8:
    pcVar1 = "Immediately evaluated literal";
    break;
  case 9:
    pcVar1 = "Array parenthesis";
    break;
  case 10:
    pcVar1 = "Dictionary parenthesis";
    break;
  case 0xb:
    pcVar1 = "Procedure parenthesis";
    break;
  case 0xc:
    pcVar1 = "Text";
    break;
  case 0xd:
    pcVar1 = "Hexadecimal string";
    break;
  case 0xe:
    pcVar1 = "Base85 string";
    break;
  case 0xf:
    pcVar1 = "Bad string character";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_141240b68,(char *)param_1,pcVar1,0);
  return param_1;
}

