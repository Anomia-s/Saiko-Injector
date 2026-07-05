/**
 * Function: AccountWidget
 * Address:  1402a6910
 * Signature: AccountWidget * __thiscall AccountWidget(AccountWidget * this, undefined8 param_1, undefined8 param_2)
 * Body size: 897 bytes
 */


AccountWidget * __thiscall
ldv::editor::AccountWidget::AccountWidget(AccountWidget *this,undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  void **ppvVar3;
  code *pcVar4;
  QLayout *pQVar5;
  QWidget *pQVar6;
  AccountWidget *pAVar7;
  undefined4 *puVar8;
  uint in_stack_ffffffffffffff5c;
  QObject local_88 [8];
  QObject local_80 [8];
  QLayout *local_78;
  undefined1 *local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  code *local_60;
  undefined4 local_58;
  QWidget *local_48;
  AccountWidget *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  QWidget::QWidget((QWidget *)this,param_2);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->AccountWidget_data).offset_0x10 = param_1;
  (this->AccountWidget_data).offset_0x18 = 0;
  (this->AccountWidget_data).offset_0x20 = 0;
  (this->AccountWidget_data).offset_0x28 = 0;
  (this->AccountWidget_data).offset_0x30 = 0;
  (this->AccountWidget_data).offset_0x38 = 0;
  (this->AccountWidget_data).offset_0x40 = 0;
  (this->AccountWidget_data).offset_0x48 = 0;
  local_40 = this;
  local_78 = (QLayout *)FUN_140b65d30(0x20);
  QHBoxLayout::QHBoxLayout((QHBoxLayout *)local_78,(QWidget *)local_40);
  pQVar5 = local_78;
  QLayout::setContentsMargins(local_78,8,0,8,0);
  (**(code **)(*(longlong *)pQVar5 + 0x60))(pQVar5,6);
  local_48 = (QWidget *)FUN_140b65d30(0x28);
  QLabel::QLabel((QLabel *)local_48,0,0);
  puVar1 = &(local_40->AccountWidget_data).offset_0x18;
  *puVar1 = local_48;
  QWidget::setFixedSize(local_48,0x18,0x18);
  QLabel::setScaledContents((QLabel *)*puVar1,true);
  (**(code **)(*(longlong *)*puVar1 + 0x58))((longlong *)*puVar1,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar5,*puVar1,0,0);
  local_48 = (QWidget *)FUN_140b65d30(0x28);
  QLabel::QLabel((QLabel *)local_48,0);
  pQVar6 = local_48;
  (local_40->AccountWidget_data).offset_0x20 = local_48;
  QString::QString((QString *)&local_60,"font-weight: bold; color: palette(text);");
  QWidget::setStyleSheet(pQVar6,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  plVar2 = (longlong *)(local_40->AccountWidget_data).offset_0x20;
  (**(code **)(*plVar2 + 0x58))(plVar2,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar5,(local_40->AccountWidget_data).offset_0x20,0,0);
  local_48 = (QWidget *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_60,"Sign In");
  pQVar6 = local_48;
  QPushButton::QPushButton((QPushButton *)local_48,(QString *)&local_60,(QWidget *)0x0);
  pAVar7 = local_40;
  (local_40->AccountWidget_data).offset_0x28 = pQVar6;
  QString::~QString((QString *)&local_60);
  QBoxLayout::addWidget((QBoxLayout *)pQVar5,(pAVar7->AccountWidget_data).offset_0x28,0,0);
  local_48 = (QWidget *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_60,"Sign Out");
  pQVar6 = local_48;
  QPushButton::QPushButton((QPushButton *)local_48,(QString *)&local_60,(QWidget *)0x0);
  pAVar7 = local_40;
  (local_40->AccountWidget_data).offset_0x30 = pQVar6;
  QString::~QString((QString *)&local_60);
  plVar2 = (longlong *)(pAVar7->AccountWidget_data).offset_0x30;
  (**(code **)(*plVar2 + 0x58))(plVar2,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar5,(local_40->AccountWidget_data).offset_0x30,0,0);
  pcVar4 = clicked_exref;
  local_70 = &LAB_14009c890;
  uStack_68 = 0;
  ppvVar3 = (void **)(local_40->AccountWidget_data).offset_0x28;
  local_60 = clicked_exref;
  local_58 = 0;
  puVar8 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar8 = 1;
  *(undefined1 **)(puVar8 + 2) = &LAB_140085340;
  *(undefined1 **)(puVar8 + 4) = local_70;
  *(ulonglong *)(puVar8 + 6) = CONCAT44(uStack_64,uStack_68);
  QObject::connectImpl
            (local_88,ppvVar3,(QObject *)&local_60,&local_40->vftablePtr,
             (QSlotObjectBase *)&local_70,(ConnectionType)puVar8,
             (int *)((ulonglong)in_stack_ffffffffffffff5c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_88);
  local_70 = &LAB_14009c8b0;
  uStack_68 = 0;
  ppvVar3 = (void **)(local_40->AccountWidget_data).offset_0x30;
  local_60 = pcVar4;
  local_58 = 0;
  puVar8 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar8 = 1;
  *(undefined1 **)(puVar8 + 2) = &LAB_140085340;
  *(undefined1 **)(puVar8 + 4) = local_70;
  *(ulonglong *)(puVar8 + 6) = CONCAT44(uStack_64,uStack_68);
  QObject::connectImpl
            (local_80,ppvVar3,(QObject *)&local_60,&local_40->vftablePtr,
             (QSlotObjectBase *)&local_70,(ConnectionType)puVar8,
             (int *)((ulonglong)in_stack_ffffffffffffff5c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_80);
  FUN_1402a6eb0(local_40);
  return local_40;
}

