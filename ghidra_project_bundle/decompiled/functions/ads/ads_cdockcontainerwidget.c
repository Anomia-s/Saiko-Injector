/**
 * Function: ads_cdockcontainerwidget
 * Address:  140292950
 * Signature: void * __thiscall ads_cdockcontainerwidget(void * this, char * param_1)
 * Body size: 86 bytes
 */


void * __thiscall ads_cdockcontainerwidget(void *this,char *param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == (char *)0x0) {
    this = (void *)0x0;
  }
  else {
    iVar1 = strcmp(param_1,"ads::CDockManager");
    if (iVar1 != 0) {
      iVar1 = strcmp(param_1,"ads::CDockContainerWidget");
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140292993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pvVar2 = QFrame::qt_metacast(this,param_1);
        return pvVar2;
      }
    }
  }
  return this;
}

