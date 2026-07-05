/**
 * Function: failed_to_create_project_at
 * Address:  14008d0c0
 * Signature: undefined __thiscall failed_to_create_project_at(void * this)
 * Body size: 1008 bytes
 */


void __thiscall failed_to_create_project_at(void *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  _Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
  *p_Var6;
  undefined8 *****pppppuVar7;
  undefined1 local_178 [120];
  QString local_100 [32];
  undefined8 local_e0;
  char *local_d8;
  QString local_d0 [24];
  _Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
  *local_b8;
  void *local_b0;
  ulonglong local_a0;
  _Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
  **local_80;
  undefined8 ****local_78 [2];
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 ****local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  ldv::editor::NewProjectDialog::NewProjectDialog((NewProjectDialog *)local_178,this);
  iVar3 = QDialog::exec((QDialog *)local_178);
  if (iVar3 == 1) {
    FUN_140284bc0(local_178,local_78);
    FUN_140284b40(local_178,local_d0);
    cVar2 = failed_to_save_project(this);
    if (cVar2 != '\0') {
      if (*(char *)((longlong)this + 0x140) != '\0') {
        FUN_140092070(this);
      }
      QString::toStdString(local_d0);
      cVar2 = FUN_1402800c0((longlong)this + 0x28,local_78,&local_b8);
      if (0xf < local_a0) {
        uVar5 = local_a0 + 1;
        p_Var6 = local_b8;
        if (0xfff < uVar5) {
          p_Var6 = (_Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
                    *)local_b8[-1].vfunction6;
          if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)p_Var6))) goto LAB_14008d497;
          uVar5 = local_a0 + 0x28;
        }
        thunk_FUN_140b68ba8(p_Var6,uVar5);
      }
      if (cVar2 == '\0') {
        local_40 = local_78;
        if (7 < local_60) {
          local_40 = local_78[0];
        }
        uVar1 = *(undefined8 *)((longlong)this + 0x43ce8);
        local_38 = local_68;
        uVar4 = FUN_140b6625c();
        FUN_14003e640(&local_b8,uVar4,&local_40);
        QString::fromStdString
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58);
        local_e0 = 0x1c;
        local_d8 = "Failed to create project at ";
        QString::fromUtf8(&local_40,&local_e0);
        QString::append((QString *)&local_40,(QString *)&local_58);
        FUN_140282ac0(uVar1,&local_40);
        QString::~QString((QString *)&local_40);
        QString::~QString((QString *)&local_58);
        if (0xf < local_a0) {
          uVar5 = local_a0 + 1;
          p_Var6 = local_b8;
          if (0xfff < uVar5) {
            p_Var6 = (_Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
                      *)local_b8[-1].vfunction6;
            if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)p_Var6)))
            goto LAB_14008d497;
            uVar5 = local_a0 + 0x28;
          }
          thunk_FUN_140b68ba8(p_Var6,uVar5);
        }
      }
      else {
        local_40 = local_78[0];
        if (local_60 < 8) {
          local_40 = local_78;
        }
        local_38 = local_68;
        uVar4 = FUN_140b6625c();
        FUN_14003e640(&local_b8,uVar4,&local_40);
        QString::fromStdString
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40);
        if (0xf < local_a0) {
          uVar5 = local_a0 + 1;
          p_Var6 = local_b8;
          if (0xfff < uVar5) {
            p_Var6 = (_Func_impl_no_alloc<_private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64_::_1_::<lambda_14>,void>_vftable
                      *)local_b8[-1].vfunction6;
            if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)p_Var6)))
            goto LAB_14008d497;
            uVar5 = local_a0 + 0x28;
          }
          thunk_FUN_140b68ba8(p_Var6,uVar5);
        }
        FUN_14008edd0();
        FUN_14008e3c0(this);
        if (*(longlong *)((longlong)this + 0x118) != 0) {
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64'::`1'::<lambda_14>,void>
                        */
          local_b8 = &std::
                      _Func_impl_no_alloc<`private:_void___cdecl_ldv::editor::EditorMainWindow::hookProjectCallbacks(void)___ptr64'::`1'::<lambda_14>,void>
                      ::vftable;
          local_b0 = this;
          local_80 = &local_b8;
          FUN_140289cf0(*(longlong *)((longlong)this + 0x118),&local_b8);
        }
        FUN_14008f2c0(this);
        uVar1 = *(undefined8 *)((longlong)this + 0x43ce8);
        local_58 = 0x11;
        local_50 = "Created project: ";
        QString::fromUtf8(&local_b8,&local_58);
        QString::append((QString *)&local_b8,local_d0);
        FUN_1402826c0(uVar1,&local_b8);
        QString::~QString((QString *)&local_b8);
        QString::~QString((QString *)&local_40);
      }
    }
    QString::~QString(local_d0);
    if (7 < local_60) {
      uVar5 = local_60 * 2 + 2;
      pppppuVar7 = (undefined8 *****)local_78[0];
      if (0xfff < uVar5) {
        pppppuVar7 = (undefined8 *****)local_78[0][-1];
        if (0x1f < (ulonglong)((longlong)local_78[0] + (-8 - (longlong)pppppuVar7))) {
LAB_14008d497:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar5 = local_60 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pppppuVar7,uVar5);
    }
  }
                    /* inlined constructor or destructor (approx location) for
                       ldv::editor::NewProjectDialog */
  local_178._0_8_ = &ldv::editor::NewProjectDialog::vftable;
  local_178._16_8_ = &ldv::editor::NewProjectDialog::vftable;
  QString::~QString(local_100);
  QString::~QString((QString *)(local_178 + 0x60));
  QDialog::~QDialog((QDialog *)local_178);
  return;
}

