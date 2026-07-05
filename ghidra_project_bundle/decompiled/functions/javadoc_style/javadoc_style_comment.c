/**
 * Function: javadoc_style_comment
 * Address:  1408377e0
 * Signature: QString * __thiscall javadoc_style_comment(void * this, QString * param_1, undefined4 param_2)
 * Body size: 650 bytes
 */


QString * __thiscall javadoc_style_comment(void *this,QString *param_1,undefined4 param_2)

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
    pcVar1 = "Comment line";
    break;
  case 3:
    pcVar1 = "JavaDoc style comment";
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
    pcVar1 = "SQL*Plus keyword";
    break;
  case 9:
    pcVar1 = "SQL*Plus prompt";
    break;
  case 10:
    pcVar1 = "Operator";
    break;
  case 0xb:
    pcVar1 = "Identifier";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  case 0xd:
    pcVar1 = "SQL*Plus comment";
    break;
  case 0xf:
    pcVar1 = "# comment line";
    break;
  case 0x11:
    pcVar1 = "JavaDoc keyword";
    break;
  case 0x12:
    pcVar1 = "JavaDoc keyword error";
    break;
  case 0x13:
    pcVar1 = "User defined 1";
    break;
  case 0x14:
    pcVar1 = "User defined 2";
    break;
  case 0x15:
    pcVar1 = "User defined 3";
    break;
  case 0x16:
    pcVar1 = "User defined 4";
    break;
  case 0x17:
    pcVar1 = "Quoted identifier";
    break;
  case 0x18:
    pcVar1 = "Quoted operator";
  }
  QMetaObject::tr((QMetaObject *)&DAT_141241268,(char *)param_1,pcVar1,0);
  return param_1;
}

