/**
 * Function: strong_emphasis_using_double_asterisks
 * Address:  14082da20
 * Signature: QString * __thiscall strong_emphasis_using_double_asterisks(void * this, QString * param_1, undefined4 param_2)
 * Body size: 653 bytes
 */


QString * __thiscall
strong_emphasis_using_double_asterisks(void *this,QString *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "Default";
    break;
  case 1:
    pcVar1 = "Special";
    break;
  case 2:
    pcVar1 = "Strong emphasis using double asterisks";
    break;
  case 3:
    pcVar1 = "Strong emphasis using double underscores";
    break;
  case 4:
    pcVar1 = "Emphasis using single asterisks";
    break;
  case 5:
    pcVar1 = "Emphasis using single underscores";
    break;
  case 6:
    pcVar1 = "Level 1 header";
    break;
  case 7:
    pcVar1 = "Level 2 header";
    break;
  case 8:
    pcVar1 = "Level 3 header";
    break;
  case 9:
    pcVar1 = "Level 4 header";
    break;
  case 10:
    pcVar1 = "Level 5 header";
    break;
  case 0xb:
    pcVar1 = "Level 6 header";
    break;
  case 0xc:
    pcVar1 = "Pre-char";
    break;
  case 0xd:
    pcVar1 = "Unordered list item";
    break;
  case 0xe:
    pcVar1 = "Ordered list item";
    break;
  case 0xf:
    pcVar1 = "Block quote";
    break;
  case 0x10:
    pcVar1 = "Strike out";
    break;
  case 0x11:
    pcVar1 = "Horizontal rule";
    break;
  case 0x12:
    pcVar1 = "Link";
    break;
  case 0x13:
    pcVar1 = "Code between backticks";
    break;
  case 0x14:
    pcVar1 = "Code between double backticks";
    break;
  case 0x15:
    pcVar1 = "Code block";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_141240378,(char *)param_1,pcVar1,0);
  return param_1;
}

