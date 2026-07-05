/**
 * Function: oclero_qlementine_plaintextedit
 * Address:  1402317e0
 * Signature: void * __thiscall oclero_qlementine_plaintextedit(void * this, char * param_1)
 * Body size: 70 bytes
 */


void * __thiscall oclero_qlementine_plaintextedit(void *this,char *param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == (char *)0x0) {
    this = (void *)0x0;
  }
  else {
    iVar1 = strcmp(param_1,"oclero::qlementine::PlainTextEdit");
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140231813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar2 = QPlainTextEdit::qt_metacast(this,param_1);
      return pvVar2;
    }
  }
  return this;
}

