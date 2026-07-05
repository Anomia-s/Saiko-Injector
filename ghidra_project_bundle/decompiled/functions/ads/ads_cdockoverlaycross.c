/**
 * Function: ads_cdockoverlaycross
 * Address:  140292c90
 * Signature: void * __thiscall ads_cdockoverlaycross(void * this, char * param_1)
 * Body size: 70 bytes
 */


void * __thiscall ads_cdockoverlaycross(void *this,char *param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == (char *)0x0) {
    this = (void *)0x0;
  }
  else {
    iVar1 = strcmp(param_1,"ads::CDockOverlayCross");
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140292cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar2 = QWidget::qt_metacast(this,param_1);
      return pvVar2;
    }
  }
  return this;
}

