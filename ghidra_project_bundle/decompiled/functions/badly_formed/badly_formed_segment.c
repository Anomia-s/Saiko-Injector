/**
 * Function: badly_formed_segment
 * Address:  1408289b0
 * Signature: QString * __thiscall badly_formed_segment(void * this, QString * param_1, undefined4 param_2)
 * Body size: 299 bytes
 */


QString * __thiscall badly_formed_segment(void *this,QString *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "Default";
    break;
  case 1:
    pcVar1 = "Segment start";
    break;
  case 2:
    pcVar1 = "Segment end";
    break;
  case 3:
    pcVar1 = "Element separator";
    break;
  case 4:
    pcVar1 = "Composite separator";
    break;
  case 5:
    pcVar1 = "Release separator";
    break;
  case 6:
    pcVar1 = "UNA segment header";
    break;
  case 7:
    pcVar1 = "UNH segment header";
    break;
  case 8:
    pcVar1 = "Badly formed segment";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_14123fc30,(char *)param_1,pcVar1,0);
  return param_1;
}

