/**
 * Function: rgbad_d_d_d
 * Address:  14008b790
 * Signature: undefined rgbad_d_d_d(void)
 * Body size: 167 bytes
 */


void rgbad_d_d_d(char *param_1,QColor *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar1 = QColor::alpha(param_2);
  if (iVar1 == 0xff) {
    iVar1 = QColor::blue(param_2);
    uVar2 = QColor::green(param_2);
    uVar3 = QColor::red(param_2);
    pcVar4 = "#%02x%02x%02x";
  }
  else {
    QColor::alpha(param_2);
    iVar1 = QColor::blue(param_2);
    uVar2 = QColor::green(param_2);
    uVar3 = QColor::red(param_2);
    pcVar4 = "rgba(%d, %d, %d, %d)";
  }
  QString::asprintf(param_1,pcVar4,(ulonglong)uVar3,(ulonglong)uVar2,iVar1);
  return;
}

