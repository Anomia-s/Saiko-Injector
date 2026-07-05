/**
 * Function: scintilla_scintillabase
 * Address:  140754990
 * Signature: void * __thiscall scintilla_scintillabase(void * this, char * param_1)
 * Body size: 92 bytes
 */


void * __thiscall scintilla_scintillabase(void *this,char *param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == (char *)0x0) {
    this = (void *)0x0;
  }
  else {
    iVar1 = strcmp(param_1,"QsciScintillaQt");
    if (iVar1 != 0) {
      iVar1 = strcmp(param_1,"Scintilla::ScintillaBase");
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001407549d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pvVar2 = QObject::qt_metacast(this,param_1);
        return pvVar2;
      }
      this = (void *)((longlong)this + 0x10);
    }
  }
  return this;
}

