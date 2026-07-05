/**
 * Function: extended_css_property
 * Address:  1408262b0
 * Signature: QString * __thiscall extended_css_property(void * this, QString * param_1, undefined4 param_2)
 * Body size: 704 bytes
 */


QString * __thiscall extended_css_property(void *this,QString *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "Default";
    break;
  case 1:
    pcVar1 = "Tag";
    break;
  case 2:
    pcVar1 = "Class selector";
    break;
  case 3:
    pcVar1 = "Pseudo-class";
    break;
  case 4:
    pcVar1 = "Unknown pseudo-class";
    break;
  case 5:
    pcVar1 = "Operator";
    break;
  case 6:
    pcVar1 = "CSS1 property";
    break;
  case 7:
    pcVar1 = "Unknown property";
    break;
  case 8:
    pcVar1 = "Value";
    break;
  case 9:
    pcVar1 = "Comment";
    break;
  case 10:
    pcVar1 = "ID selector";
    break;
  case 0xb:
    pcVar1 = "Important";
    break;
  case 0xc:
    pcVar1 = "@-rule";
    break;
  case 0xd:
    pcVar1 = "Double-quoted string";
    break;
  case 0xe:
    pcVar1 = "Single-quoted string";
    break;
  case 0xf:
    pcVar1 = "CSS2 property";
    break;
  case 0x10:
    pcVar1 = "Attribute";
    break;
  case 0x11:
    pcVar1 = "CSS3 property";
    break;
  case 0x12:
    pcVar1 = "Pseudo-element";
    break;
  case 0x13:
    pcVar1 = "Extended CSS property";
    break;
  case 0x14:
    pcVar1 = "Extended pseudo-class";
    break;
  case 0x15:
    pcVar1 = "Extended pseudo-element";
    break;
  case 0x16:
    pcVar1 = "Media rule";
    break;
  case 0x17:
    pcVar1 = "Variable";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_14123f8c8,(char *)param_1,pcVar1,0);
  return param_1;
}

