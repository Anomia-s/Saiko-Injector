/**
 * Function: oclero_qlementine_actionbutton
 * Address:  14022ffb0
 * Signature: void * __thiscall oclero_qlementine_actionbutton(void * this, char * param_1)
 * Body size: 70 bytes
 */


void * __thiscall oclero_qlementine_actionbutton(void *this,char *param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == (char *)0x0) {
    this = (void *)0x0;
  }
  else {
    iVar1 = strcmp(param_1,"oclero::qlementine::ActionButton");
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014022ffe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar2 = QPushButton::qt_metacast(this,param_1);
      return pvVar2;
    }
  }
  return this;
}

