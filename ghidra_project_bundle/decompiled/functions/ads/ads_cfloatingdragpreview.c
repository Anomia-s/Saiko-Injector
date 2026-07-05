/**
 * Function: ads_cfloatingdragpreview
 * Address:  140294190
 * Signature: void * __thiscall ads_cfloatingdragpreview(void * this, char * param_1)
 * Body size: 92 bytes
 */


void * __thiscall ads_cfloatingdragpreview(void *this,char *param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == (char *)0x0) {
    this = (void *)0x0;
  }
  else {
    iVar1 = strcmp(param_1,"ads::CFloatingDragPreview");
    if (iVar1 != 0) {
      iVar1 = strcmp(param_1,"IFloatingWidget");
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001402941d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pvVar2 = QWidget::qt_metacast(this,param_1);
        return pvVar2;
      }
      this = (void *)((longlong)this + 0x28);
    }
  }
  return this;
}

