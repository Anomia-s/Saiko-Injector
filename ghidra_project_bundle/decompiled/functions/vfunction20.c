/**
 * Function: vfunction20
 * Address:  140a58f10
 * Signature: void __thiscall vfunction20(QsciListBoxQt * this, char * param_1, char param_2, char param_3)
 * Body size: 257 bytes
 */


void __thiscall
QsciListBoxQt::vfunction20(QsciListBoxQt *this,char *param_1,char param_2,char param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  (*this->vftablePtr->vfunction9)(this);
  pcVar5 = qstrdup(param_1);
  if (pcVar5 == (char *)0x0) {
    return;
  }
  cVar2 = *pcVar5;
  iVar4 = -1;
  pcVar8 = pcVar5;
  if (cVar2 != '\0') {
    pcVar6 = (char *)0x0;
    pcVar1 = pcVar5 + 1;
    do {
      while (pcVar7 = pcVar1, cVar2 != param_2) {
        if (cVar2 == param_3) {
          pcVar6 = pcVar7 + -1;
        }
        cVar2 = *pcVar7;
        pcVar1 = pcVar7 + 1;
        if (cVar2 == '\0') goto LAB_140a58fc6;
      }
      pcVar7[-1] = '\0';
      if (pcVar6 == (char *)0x0) {
        iVar3 = -1;
      }
      else {
        *pcVar6 = '\0';
        iVar3 = atoi(pcVar6 + 1);
      }
      (*this->vftablePtr->vfunction10)(this,pcVar8,iVar3);
      pcVar6 = (char *)0x0;
      cVar2 = *pcVar7;
      pcVar1 = pcVar7 + 1;
      pcVar8 = pcVar7;
    } while (cVar2 != '\0');
LAB_140a58fc6:
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = '\0';
      iVar4 = atoi(pcVar6 + 1);
    }
  }
  (*this->vftablePtr->vfunction10)(this,pcVar8,iVar4);
  thunk_FUN_140b68ba8(pcVar5);
  return;
}

