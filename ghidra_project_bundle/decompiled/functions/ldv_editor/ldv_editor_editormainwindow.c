/**
 * Function: ldv_editor_editormainwindow
 * Address:  14009c9d0
 * Signature: void * __thiscall ldv_editor_editormainwindow(void * this, char * param_1)
 * Body size: 70 bytes
 */


void * __thiscall ldv_editor_editormainwindow(void *this,char *param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == (char *)0x0) {
    this = (void *)0x0;
  }
  else {
    iVar1 = strcmp(param_1,"ldv::editor::EditorMainWindow");
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014009ca03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar2 = QMainWindow::qt_metacast(this,param_1);
      return pvVar2;
    }
  }
  return this;
}

