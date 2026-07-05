/**
 * Function: message_context_text
 * Address:  140831220
 * Signature: QString * __thiscall message_context_text(void * this, QString * param_1, undefined4 param_2)
 * Body size: 461 bytes
 */


QString * __thiscall message_context_text(void *this,QString *param_1,undefined4 param_2)

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
    pcVar1 = "Message identifier";
    break;
  case 3:
    pcVar1 = "Message identifier text";
    break;
  case 4:
    pcVar1 = "Message string";
    break;
  case 5:
    pcVar1 = "Message string text";
    break;
  case 6:
    pcVar1 = "Message context";
    break;
  case 7:
    pcVar1 = "Message context text";
    break;
  case 8:
    pcVar1 = "Fuzzy flag";
    break;
  case 9:
    pcVar1 = "Programmer comment";
    break;
  case 10:
    pcVar1 = "Reference";
    break;
  case 0xb:
    pcVar1 = "Flags";
    break;
  case 0xc:
    pcVar1 = "Message identifier text end-of-line";
    break;
  case 0xd:
    pcVar1 = "Message string text end-of-line";
    break;
  case 0xe:
    pcVar1 = "Message context text end-of-line";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_141240968,(char *)param_1,pcVar1,0);
  return param_1;
}

