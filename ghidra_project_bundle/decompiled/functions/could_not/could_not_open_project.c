/**
 * Function: could_not_open_project
 * Address:  140095490
 * Signature: void __fastcall could_not_open_project(int param_1, longlong param_2, undefined8 param_3, longlong param_4)
 * Body size: 595 bytes
 */


void could_not_open_project(int param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  QString *this;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  _Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
  *p_Var5;
  undefined8 in_stack_ffffffffffffff68;
  uint uVar6;
  _Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
  *local_88;
  longlong local_80;
  ulonglong local_70;
  _Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
  **local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 local_30;
  
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_30 = 0xfffffffffffffffe;
  if (param_1 == 1) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    this = *(QString **)(param_4 + 8);
    cVar3 = failed_to_save_project(lVar1);
    if (cVar3 != '\0') {
      if (*(char *)(lVar1 + 0x140) != '\0') {
        FUN_140092070(lVar1);
      }
      QString::toStdWString(this);
      cVar3 = FUN_14027e900(lVar1 + 0x28,&local_88);
      if (7 < local_70) {
        uVar4 = local_70 * 2 + 2;
        p_Var5 = local_88;
        if (0xfff < uVar4) {
          p_Var5 = (_Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
                    *)local_88[-1].vfunction6;
          if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)p_Var5))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar4 = local_70 * 2 + 0x29;
        }
        thunk_FUN_140b68ba8(p_Var5,uVar4);
      }
      if (cVar3 == '\0') {
        FUN_14008db60(lVar1,this);
        uVar2 = *(undefined8 *)(lVar1 + 0x43ce8);
        local_48 = 0x18;
        local_40 = "Could not open project: ";
        QString::fromUtf8((QString *)&local_88,&local_48);
        QString::append((QString *)&local_88,this);
        FUN_140282ac0(uVar2,&local_88);
        QString::~QString((QString *)&local_88);
        QString::QString((QString *)&local_88,
                         "The project could not be opened.\n\nCheck the Output panel for details.");
        QString::QString((QString *)&local_48,"Open Failed");
        QMessageBox::warning(lVar1,&local_48,&local_88,0x400,(ulonglong)uVar6 << 0x20);
        QString::~QString((QString *)&local_48);
        QString::~QString((QString *)&local_88);
      }
      else {
        FUN_14008edd0();
        FUN_14008e3c0(lVar1);
        if (*(longlong *)(lVar1 + 0x118) != 0) {
          local_88 = &std::
                      _Func_impl_no_alloc<`private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64'::`1'::<lambda_14>,void>
                      ::vftable;
          local_80 = lVar1;
          local_50 = &local_88;
          FUN_140289cf0(*(longlong *)(lVar1 + 0x118),&local_88);
        }
        FUN_14008f2c0(lVar1);
        uVar2 = *(undefined8 *)(lVar1 + 0x43ce8);
        local_48 = 0x10;
        local_40 = "Opened project: ";
        QString::fromUtf8((QString *)&local_88,&local_48);
        QString::append((QString *)&local_88,this);
        FUN_1402826c0(uVar2,&local_88);
        QString::~QString((QString *)&local_88);
        failed_to_load_the_autosave_file(lVar1);
      }
    }
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    thunk_FUN_140b68ba8(param_2,0x18);
    return;
  }
  return;
}

