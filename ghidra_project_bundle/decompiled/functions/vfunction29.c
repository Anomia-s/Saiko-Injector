/**
 * Function: vfunction29
 * Address:  14083a2c0
 * Signature: QString * __thiscall vfunction29(QsciLexerTeX * this, QString * param_1, undefined4 param_2)
 * Body size: 218 bytes
 */


QString * __thiscall
QsciLexerTeX::vfunction29(QsciLexerTeX *this,QString *param_1,undefined4 param_2)

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
    pcVar1 = "Group";
    break;
  case 3:
    pcVar1 = "Symbol";
    break;
  case 4:
    pcVar1 = "Command";
    break;
  case 5:
    pcVar1 = "Text";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  }
  QMetaObject::tr((QMetaObject *)&DAT_1412413e8,(char *)param_1,pcVar1,0);
  return param_1;
}

