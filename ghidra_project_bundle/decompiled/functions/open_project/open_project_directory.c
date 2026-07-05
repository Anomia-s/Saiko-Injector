/**
 * Function: open_project_directory
 * Address:  14008d700
 * Signature: void __fastcall open_project_directory(longlong param_1)
 * Body size: 628 bytes
 */


void open_project_directory(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  _Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
  *p_Var5;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffff48;
  ulonglong uVar7;
  QString local_b0 [16];
  longlong local_a0;
  _Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
  *local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  _Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
  **local_60;
  _Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
  *local_58;
  char *pcStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_30 = 0xfffffffffffffffe;
  QString::QString((QString *)&local_98);
  QString::QString((QString *)&local_58,"Open Project Directory");
  uVar7 = CONCAT44(uVar6,1);
  QFileDialog::getExistingDirectory(local_b0,param_1,(QString *)&local_58,&local_98,uVar7);
  QString::~QString((QString *)&local_58);
  QString::~QString((QString *)&local_98);
  if (local_a0 != 0) {
    cVar3 = failed_to_save_project(param_1);
    if (cVar3 != '\0') {
      if (*(char *)(param_1 + 0x140) != '\0') {
        FUN_140092070(param_1);
      }
      QString::toStdWString(local_b0);
      local_48 = local_88;
      uStack_44 = uStack_84;
      uStack_40 = uStack_80;
      uStack_3c = uStack_7c;
      local_58 = local_98;
      cVar3 = FUN_14027e900(param_1 + 0x28,(QString *)&local_58);
      uVar2 = CONCAT44(uStack_3c,uStack_40);
      uVar6 = extraout_XMM0_Da;
      if (7 < uVar2) {
        uVar4 = uVar2 * 2 + 2;
        p_Var5 = local_58;
        if (0xfff < uVar4) {
          p_Var5 = (_Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
                    *)local_58[-1].vfunction6;
          if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)p_Var5))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar4 = uVar2 * 2 + 0x29;
        }
        uVar6 = thunk_FUN_140b68ba8(p_Var5,uVar4);
      }
      if (cVar3 == '\0') {
        uVar1 = *(undefined8 *)(param_1 + 0x43ce8);
        local_58 = (_Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
                    *)0x18;
        pcStack_50 = "Could not open project: ";
        QString::fromUtf8(&local_98,(QString *)&local_58);
        QString::append((QString *)&local_98,local_b0);
        FUN_140282ac0(uVar1,&local_98);
        QString::~QString((QString *)&local_98);
        QString::QString((QString *)&local_98,
                         "The project could not be opened.\n\nCheck the Output panel for details.");
        QString::QString((QString *)&local_58,"Open Failed");
        QMessageBox::warning
                  (param_1,(QString *)&local_58,&local_98,0x400,uVar7 & 0xffffffff00000000);
        QString::~QString((QString *)&local_58);
        QString::~QString((QString *)&local_98);
      }
      else {
        FUN_14008edd0(uVar6,local_b0);
        FUN_14008e3c0(param_1);
        if (*(longlong *)(param_1 + 0x118) != 0) {
          local_98 = &std::
                      _Func_impl_no_alloc<`private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64'::`1'::<lambda_14>,void>
                      ::vftable;
          lStack_90 = param_1;
          local_60 = &local_98;
          FUN_140289cf0(*(longlong *)(param_1 + 0x118),&local_98);
        }
        FUN_14008f2c0(param_1);
        uVar1 = *(undefined8 *)(param_1 + 0x43ce8);
        local_58 = (_Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
                    *)0x10;
        pcStack_50 = "Opened project: ";
        QString::fromUtf8(&local_98,(QString *)&local_58);
        QString::append((QString *)&local_98,local_b0);
        FUN_1402826c0(uVar1,&local_98);
        QString::~QString((QString *)&local_98);
        failed_to_load_the_autosave_file(param_1);
      }
    }
  }
  QString::~QString(local_b0);
  return;
}

