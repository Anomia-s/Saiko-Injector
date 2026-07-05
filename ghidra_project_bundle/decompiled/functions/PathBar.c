/**
 * Function: PathBar
 * Address:  1402d6460
 * Signature: PathBar * __thiscall PathBar(PathBar * this)
 * Body size: 496 bytes
 */


PathBar * __thiscall ldv::editor::PathBar::PathBar(PathBar *this)

{
  undefined8 *puVar1;
  void **ppvVar2;
  QLayout *this_00;
  PathBar *pPVar3;
  undefined4 *puVar4;
  uint in_stack_ffffffffffffff8c;
  code *local_60;
  undefined4 local_58;
  QObject local_50 [8];
  undefined1 *local_48;
  undefined1 *local_40;
  QLayout *local_38;
  QWidget *local_30;
  PathBar *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  QWidget::QWidget();
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_48 = &(this->PathBar_data).field_0x10;
  QString::QString((QString *)local_48);
  local_40 = &(this->PathBar_data).field_0x28;
  QString::QString((QString *)local_40);
  (this->PathBar_data).offset_0x40 = 0;
  (this->PathBar_data).offset_0x48 = 0;
  (this->PathBar_data).offset_0x50 = 0;
  local_28 = this;
  local_38 = (QLayout *)FUN_140b65d30(0x20);
  QHBoxLayout::QHBoxLayout((QHBoxLayout *)local_38,(QWidget *)local_28);
  this_00 = local_38;
  QLayout::setContentsMargins(local_38,0,0,0,0);
  (**(code **)(*(longlong *)this_00 + 0x60))(this_00);
  local_30 = (QWidget *)FUN_140b65d30(0x20);
  QHBoxLayout::QHBoxLayout((QHBoxLayout *)local_30);
  puVar1 = &(local_28->PathBar_data).offset_0x40;
  *puVar1 = local_30;
  QLayout::setContentsMargins((QLayout *)local_30,0,0,0,0);
  (**(code **)(*(longlong *)*puVar1 + 0x60))((longlong *)*puVar1,0);
  QBoxLayout::addLayout((QBoxLayout *)this_00,(QLayout *)*puVar1,0);
  QBoxLayout::addStretch((QBoxLayout *)this_00,1);
  local_30 = (QWidget *)FUN_140b65d30(0x28);
  pPVar3 = local_28;
  QLineEdit::QLineEdit((QLineEdit *)local_30,(QWidget *)local_28);
  (pPVar3->PathBar_data).offset_0x48 = local_30;
  QWidget::hide(local_30);
  QBoxLayout::addWidget((QBoxLayout *)this_00,(local_28->PathBar_data).offset_0x48,0,0);
  ppvVar2 = (void **)(local_28->PathBar_data).offset_0x48;
  local_60 = editingFinished_exref;
  local_58 = 0;
  puVar4 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar4 = 1;
  *(code **)(puVar4 + 2) = FUN_1402d7560;
  *(PathBar **)(puVar4 + 4) = local_28;
  QObject::connectImpl
            (local_50,ppvVar2,(QObject *)&local_60,&local_28->vftablePtr,(QSlotObjectBase *)0x0,
             (ConnectionType)puVar4,(int *)((ulonglong)in_stack_ffffffffffffff8c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_50);
  QWidget::setMinimumHeight((QWidget *)local_28,0x18);
  return local_28;
}

