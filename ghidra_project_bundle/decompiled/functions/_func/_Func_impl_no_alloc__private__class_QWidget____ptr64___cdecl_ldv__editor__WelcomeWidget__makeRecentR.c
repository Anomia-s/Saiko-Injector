/**
 * Function: _Func_impl_no_alloc<`private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64'::`1'::<lambda_2>,void>
 * Address:  14028c120
 * Signature: _Func_impl_no_alloc<`private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64'::`1'::<lambda_2>,void> * __thiscall _Func_impl_no_alloc<`private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64'::`1'::<lambda_2>,void>(_Func_impl_no_alloc<`private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64'::`1'::<lambda_2>,void> * this, QString * param_1)
 * Body size: 935 bytes
 */


_Func_impl_no_alloc<_private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64_::_1_::<lambda_2>,void>
* __thiscall
std::
_Func_impl_no_alloc<`private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64'::`1'::<lambda_2>,void>
::
_Func_impl_no_alloc<_private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64_::_1_::<lambda_2>,void>
          (_Func_impl_no_alloc<_private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64_::_1_::<lambda_2>,void>
           *this,QString *param_1)

{
  longlong *plVar1;
  QWidget *pQVar2;
  QLayout *pQVar3;
  LinkLabel *pLVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint in_stack_ffffffffffffff0c;
  _Func_impl_no_alloc<_private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64_::_1_::<lambda_2>,void>_vftable
  *local_e0;
  _Func_impl_no_alloc<_private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64_::_1_::<lambda_2>,void>
  *local_d8;
  QString local_d0 [40];
  _Func_impl_no_alloc<_private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64_::_1_::<lambda_2>,void>_vftable
  **local_a8;
  QObject local_a0 [8];
  QWidget *local_98;
  QLayout *local_90;
  _Func_impl_no_alloc<_private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64_::_1_::<lambda_2>,void>
  *local_88;
  QString local_80 [24];
  LinkLabel *local_68;
  code *local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_98 = (QWidget *)FUN_140b65d30(0x28);
  QWidget::QWidget(local_98,this[5].vftablePtr,0);
  local_90 = (QLayout *)FUN_140b65d30(0x20);
  pQVar2 = local_98;
  QHBoxLayout::QHBoxLayout((QHBoxLayout *)local_90,(QWidget *)local_98);
  pQVar3 = local_90;
  QLayout::setContentsMargins(local_90,0,2,0,2);
  (**(code **)(*(longlong *)pQVar3 + 0x60))(pQVar3,8);
  local_68 = (LinkLabel *)FUN_140b65d30(0x68);
  ldv::editor::_anon_E1468FF4::LinkLabel::LinkLabel(local_68);
  local_88 = this;
  QString::QString(local_80,param_1);
  local_a8 = (_Func_impl_no_alloc<_private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64_::_1_::<lambda_2>,void>_vftable
              **)0x0;
  local_e0 = &vftable;
  local_d8 = local_88;
  QString::QString(local_d0,local_80);
  pLVar4 = local_68;
  local_a8 = &local_e0;
  puVar7 = &(local_68->LinkLabel_data).field_0x10;
  plVar1 = (longlong *)(local_68->LinkLabel_data).offset_0x48;
  if (plVar1 == (longlong *)0x0) {
LAB_14028c259:
    puVar5 = (*(*local_a8)->vfunction1)(local_a8,(undefined8 *)puVar7);
    (pLVar4->LinkLabel_data).offset_0x48 = puVar5;
    if (local_a8 ==
        (_Func_impl_no_alloc<_private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64_::_1_::<lambda_2>,void>_vftable
         **)0x0) goto LAB_14028c287;
    (*(*local_a8)->vfunction5)(local_a8,local_a8 != &local_e0);
  }
  else {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)puVar7);
    (pLVar4->LinkLabel_data).offset_0x48 = 0;
    if (local_a8 ==
        (_Func_impl_no_alloc<_private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64_::_1_::<lambda_2>,void>_vftable
         **)0x0) goto LAB_14028c287;
    if (local_a8 == &local_e0) goto LAB_14028c259;
    (pLVar4->LinkLabel_data).offset_0x48 = local_a8;
  }
  local_a8 = (_Func_impl_no_alloc<_private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64_::_1_::<lambda_2>,void>_vftable
              **)0x0;
LAB_14028c287:
  QString::~QString(local_80);
  QBoxLayout::addWidget((QBoxLayout *)pQVar3,pLVar4,1,0x81);
  local_68 = (LinkLabel *)FUN_140b65d30(0x28);
  QToolButton::QToolButton((QToolButton *)local_68,(QWidget *)pQVar2);
  local_60 = (code *)0x0;
  local_58 = L"welcomeForget";
  local_50 = 0xd;
  QString::QString((QString *)&local_88,(QArrayDataPointer<char16_t> *)&local_60);
  pLVar4 = local_68;
  QObject::doSetObjectName((QObject *)local_68,(QString *)&local_88);
  QString::~QString((QString *)&local_88);
  if (local_60 != (code *)0x0) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + -1;
    UNLOCK();
    if (*(int *)local_60 == 0) {
      free(local_60);
    }
  }
  local_60 = (code *)0x0;
  local_58 = L"×";
  local_50 = 1;
  QString::QString((QString *)&local_88,(QArrayDataPointer<char16_t> *)&local_60);
  QAbstractButton::setText((QAbstractButton *)pLVar4,(QString *)&local_88);
  QString::~QString((QString *)&local_88);
  if (local_60 != (code *)0x0) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + -1;
    UNLOCK();
    if (*(int *)local_60 == 0) {
      free(local_60);
    }
  }
  QToolButton::setAutoRaise((QToolButton *)pLVar4,true);
  QCursor::QCursor((QCursor *)&local_88,0xd);
  QWidget::setCursor((QWidget *)pLVar4,(QCursor *)&local_88);
  QCursor::~QCursor((QCursor *)&local_88);
  QWidget::setFocusPolicy((QWidget *)pLVar4,0);
  QString::QString((QString *)&local_88,"Forget this project");
  QWidget::setToolTip((QWidget *)pLVar4,(QString *)&local_88);
  QString::~QString((QString *)&local_88);
  QWidget::setFixedSize((QWidget *)pLVar4,0x14,0x14);
  local_88 = this;
  QString::QString(local_80,param_1);
  local_60 = clicked_exref;
  local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffff00000000);
  puVar6 = (undefined4 *)FUN_140b65d30(0x30);
  *puVar6 = 1;
  *(code **)(puVar6 + 2) = FUN_14028cb60;
  *(_Func_impl_no_alloc<_private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64_::_1_::<lambda_2>,void>
    **)(puVar6 + 4) = local_88;
  QString::QString((QString *)(puVar6 + 6),local_80);
  QObject::connectImpl
            (local_a0,&pLVar4->vftablePtr,(QObject *)&local_60,&this->vftablePtr,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar6,
             (int *)((ulonglong)in_stack_ffffffffffffff0c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_a0);
  QString::~QString(local_80);
  QBoxLayout::addWidget((QBoxLayout *)pQVar3,pLVar4,0,0x80);
  return (_Func_impl_no_alloc<_private:_class_QWidget*___ptr64___cdecl_ldv::editor::WelcomeWidget::makeRecentRow(QString_const&___ptr64)___ptr64_::_1_::<lambda_2>,void>
          *)pQVar2;
}

