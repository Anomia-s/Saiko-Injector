/**
 * Function: NewProjectDialog
 * Address:  140282d00
 * Signature: NewProjectDialog * __thiscall NewProjectDialog(NewProjectDialog * this, undefined8 param_1)
 * Body size: 2326 bytes
 */


NewProjectDialog * __thiscall
ldv::editor::NewProjectDialog::NewProjectDialog(NewProjectDialog *this,undefined8 param_1)

{
  undefined8 *puVar1;
  QWidget *pQVar2;
  QWidget *this_00;
  void **ppvVar3;
  QLineEdit *pQVar4;
  code *pcVar5;
  QLayout *this_01;
  QFormLayout *pQVar6;
  NewProjectDialog *pNVar7;
  bool bVar8;
  int iVar9;
  QAction *pQVar10;
  QPushButton *this_02;
  undefined4 *puVar11;
  uint in_stack_ffffffffffffff1c;
  QObject local_d0 [8];
  QObject local_c8 [8];
  QObject local_c0 [8];
  QObject local_b8 [8];
  QObject local_b0 [8];
  QObject local_a8 [8];
  QLayout *local_a0;
  QString *local_98;
  QString *local_90;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  QFormLayout *local_78;
  QWidget *local_70;
  code *local_68;
  undefined4 local_60;
  NewProjectDialog *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  QDialog::QDialog((QDialog *)this,param_1,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_98 = (QString *)&(this->NewProjectDialog_data).field_0x48;
  (this->NewProjectDialog_data).offset_0x10 = 0;
  (this->NewProjectDialog_data).offset_0x18 = 0;
  (this->NewProjectDialog_data).offset_0x20 = 0;
  (this->NewProjectDialog_data).offset_0x28 = 0;
  (this->NewProjectDialog_data).offset_0x30 = 0;
  (this->NewProjectDialog_data).offset_0x38 = 0;
  (this->NewProjectDialog_data).offset_0x40 = 0;
  QString::QString(local_98);
  local_90 = (QString *)&(this->NewProjectDialog_data).field_0x60;
  QString::QString(local_90);
  (this->NewProjectDialog_data).offset_0x78 = 1;
  local_50 = this;
  QString::QString((QString *)&local_68,"Create New Project");
  pNVar7 = local_50;
  QWidget::setWindowTitle((QWidget *)local_50,(QString *)&local_68);
  QString::~QString((QString *)&local_68);
  QDialog::setModal((QDialog *)pNVar7,true);
  QWidget::setMinimumWidth((QWidget *)local_50,0x1cc);
  local_a0 = (QLayout *)FUN_140b65d30(0x20);
  QVBoxLayout::QVBoxLayout((QVBoxLayout *)local_a0,(QWidget *)local_50);
  this_01 = local_a0;
  QLayout::setContentsMargins(local_a0,0x12,0x12,0x12,0xe);
  (**(code **)(*(longlong *)this_01 + 0x60))(this_01);
  local_78 = (QFormLayout *)FUN_140b65d30(0x20);
  QFormLayout::QFormLayout(local_78,(QWidget *)0x0);
  pQVar6 = local_78;
  QFormLayout::setLabelAlignment(local_78,0x82);
  QFormLayout::setFieldGrowthPolicy(pQVar6,1);
  QFormLayout::setHorizontalSpacing(pQVar6,0xc);
  QFormLayout::setVerticalSpacing(pQVar6,8);
  local_70 = (QWidget *)FUN_140b65d30(0x28);
  pNVar7 = local_50;
  QLineEdit::QLineEdit((QLineEdit *)local_70,(QWidget *)local_50);
  pQVar2 = local_70;
  puVar1 = &(pNVar7->NewProjectDialog_data).offset_0x10;
  *puVar1 = local_70;
  QString::QString((QString *)&local_68,"Project name:");
  QFormLayout::addRow(pQVar6,(QString *)&local_68,pQVar2);
  QString::~QString((QString *)&local_68);
  local_70 = (QWidget *)FUN_140b65d30(0x28);
  pNVar7 = local_50;
  QLineEdit::QLineEdit((QLineEdit *)local_70,(QWidget *)local_50);
  pQVar2 = local_70;
  (pNVar7->NewProjectDialog_data).offset_0x18 = local_70;
  QIcon::QIcon((QIcon *)&local_68);
  pQVar10 = QLineEdit::addAction((QLineEdit *)pQVar2,(QIcon *)&local_68,1);
  (pNVar7->NewProjectDialog_data).offset_0x30 = pQVar10;
  QIcon::~QIcon((QIcon *)&local_68);
  local_70 = (QWidget *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_68,&DAT_14131f560);
  pNVar7 = local_50;
  pQVar2 = local_70;
  QPushButton::QPushButton((QPushButton *)local_70,(QString *)&local_68,(QWidget *)local_50);
  (pNVar7->NewProjectDialog_data).offset_0x28 = pQVar2;
  QString::~QString((QString *)&local_68);
  QPushButton::setAutoDefault((QPushButton *)(pNVar7->NewProjectDialog_data).offset_0x28,false);
  local_70 = (QWidget *)FUN_140b65d30(0x20);
  QHBoxLayout::QHBoxLayout((QHBoxLayout *)local_70);
  pQVar2 = local_70;
  (**(code **)(*(longlong *)local_70 + 0x60))(local_70,8);
  QBoxLayout::addWidget((QBoxLayout *)pQVar2,(local_50->NewProjectDialog_data).offset_0x18,1,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar2,(local_50->NewProjectDialog_data).offset_0x28,0,0);
  QString::QString((QString *)&local_68,"Location:");
  QFormLayout::addRow(pQVar6,(QString *)&local_68,(QLayout *)pQVar2);
  QString::~QString((QString *)&local_68);
  local_70 = (QWidget *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_68,"Create a folder");
  pNVar7 = local_50;
  pQVar2 = local_70;
  QCheckBox::QCheckBox((QCheckBox *)local_70,(QString *)&local_68,(QWidget *)local_50);
  (pNVar7->NewProjectDialog_data).offset_0x20 = pQVar2;
  QString::~QString((QString *)&local_68);
  QAbstractButton::setChecked((QAbstractButton *)(pNVar7->NewProjectDialog_data).offset_0x20,true);
  pQVar2 = (QWidget *)(local_50->NewProjectDialog_data).offset_0x20;
  QString::QString((QString *)&local_68);
  QFormLayout::addRow(pQVar6,(QString *)&local_68,pQVar2);
  QString::~QString((QString *)&local_68);
  QBoxLayout::addLayout((QBoxLayout *)this_01,(QLayout *)pQVar6,0);
  local_78 = (QFormLayout *)FUN_140b65d30(0x28);
  pNVar7 = local_50;
  QLabel::QLabel((QLabel *)local_78,local_50,0);
  (pNVar7->NewProjectDialog_data).offset_0x38 = local_78;
  QLabel::setWordWrap((QLabel *)local_78,true);
  QLabel::setTextFormat((QLabel *)(local_50->NewProjectDialog_data).offset_0x38,0);
  this_00 = (QWidget *)(local_50->NewProjectDialog_data).offset_0x38;
  QFontMetrics::QFontMetrics
            ((QFontMetrics *)&local_68,(QFont *)(*(longlong *)&this_00[1].field_0x8 + 0x38));
  iVar9 = QFontMetrics::height((QFontMetrics *)&local_68);
  QWidget::setMinimumHeight(this_00,iVar9 * 2);
  QFontMetrics::~QFontMetrics((QFontMetrics *)&local_68);
  QBoxLayout::addWidget((QBoxLayout *)this_01,(local_50->NewProjectDialog_data).offset_0x38,0,0);
  local_78 = (QFormLayout *)FUN_140b65d30(0x28);
  QFrame::QFrame((QFrame *)local_78,local_50,0);
  pQVar6 = local_78;
  QFrame::setFrameShape((QFrame *)local_78,4);
  QFrame::setFrameShadow((QFrame *)pQVar6,0x30);
  QBoxLayout::addWidget((QBoxLayout *)this_01,pQVar6,0,0);
  local_78 = (QFormLayout *)FUN_140b65d30(0x28);
  QDialogButtonBox::QDialogButtonBox((QDialogButtonBox *)local_78,0x400400,local_50);
  pQVar6 = local_78;
  this_02 = QDialogButtonBox::button((QDialogButtonBox *)local_78,0x400);
  (local_50->NewProjectDialog_data).offset_0x40 = this_02;
  QString::QString((QString *)&local_68,"Create");
  QAbstractButton::setText((QAbstractButton *)this_02,(QString *)&local_68);
  QString::~QString((QString *)&local_68);
  QPushButton::setDefault((QPushButton *)(local_50->NewProjectDialog_data).offset_0x40,true);
  QBoxLayout::addWidget((QBoxLayout *)this_01,pQVar6,0,0);
  local_88 = oclero::qlementine::QlementineStyle::vfunction51;
  uStack_80 = 0;
  local_68 = accepted_exref;
  local_60 = 0;
  puVar11 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar11 = 1;
  *(undefined1 **)(puVar11 + 2) = &LAB_140085340;
  *(code **)(puVar11 + 4) = local_88;
  *(ulonglong *)(puVar11 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_d0,(void **)pQVar6,(QObject *)&local_68,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar11,
             (int *)((ulonglong)in_stack_ffffffffffffff1c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_d0);
  local_88 = (code *)&LAB_140283bb0;
  uStack_80 = 0;
  local_68 = rejected_exref;
  local_60 = 0;
  puVar11 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar11 = 1;
  *(undefined1 **)(puVar11 + 2) = &LAB_140085340;
  *(code **)(puVar11 + 4) = local_88;
  *(ulonglong *)(puVar11 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_c8,(void **)pQVar6,(QObject *)&local_68,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar11,
             (int *)((ulonglong)in_stack_ffffffffffffff1c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_c8);
  local_88 = FUN_140283bc0;
  uStack_80 = 0;
  ppvVar3 = (void **)(local_50->NewProjectDialog_data).offset_0x28;
  local_68 = clicked_exref;
  local_60 = 0;
  puVar11 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar11 = 1;
  *(undefined1 **)(puVar11 + 2) = &LAB_140085340;
  *(code **)(puVar11 + 4) = local_88;
  *(ulonglong *)(puVar11 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_c0,ppvVar3,(QObject *)&local_68,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar11,
             (int *)((ulonglong)in_stack_ffffffffffffff1c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_c0);
  pcVar5 = textChanged_exref;
  local_88 = FUN_140284320;
  uStack_80 = 0;
  ppvVar3 = (void **)*puVar1;
  local_68 = textChanged_exref;
  local_60 = 0;
  puVar11 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar11 = 1;
  *(undefined1 **)(puVar11 + 2) = &LAB_140085340;
  *(code **)(puVar11 + 4) = local_88;
  *(ulonglong *)(puVar11 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_b8,ppvVar3,(QObject *)&local_68,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar11,
             (int *)((ulonglong)in_stack_ffffffffffffff1c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_b8);
  local_88 = (code *)&LAB_140284340;
  uStack_80 = 0;
  ppvVar3 = (void **)(local_50->NewProjectDialog_data).offset_0x18;
  local_68 = pcVar5;
  local_60 = 0;
  puVar11 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar11 = 1;
  *(undefined1 **)(puVar11 + 2) = &LAB_140085340;
  *(code **)(puVar11 + 4) = local_88;
  *(ulonglong *)(puVar11 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_b0,ppvVar3,(QObject *)&local_68,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar11,
             (int *)((ulonglong)in_stack_ffffffffffffff1c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_b0);
  local_88 = FUN_140284350;
  uStack_80 = 0;
  ppvVar3 = (void **)(local_50->NewProjectDialog_data).offset_0x20;
  local_68 = toggled_exref;
  local_60 = 0;
  puVar11 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar11 = 1;
  *(undefined1 **)(puVar11 + 2) = &LAB_140271f00;
  *(code **)(puVar11 + 4) = local_88;
  *(ulonglong *)(puVar11 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_a8,ppvVar3,(QObject *)&local_68,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar11,
             (int *)((ulonglong)in_stack_ffffffffffffff1c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_a8);
  pQVar4 = (QLineEdit *)*puVar1;
  QString::QString((QString *)&local_68,"New Game Project");
  QLineEdit::setText(pQVar4,(QString *)&local_68);
  QString::~QString((QString *)&local_68);
  pQVar4 = (QLineEdit *)(local_50->NewProjectDialog_data).offset_0x18;
  FUN_140284650(&local_68);
  QLineEdit::setText(pQVar4,(QString *)&local_68);
  QString::~QString((QString *)&local_68);
  bVar8 = QString::isNull(local_98);
  if (!bVar8) {
    QString::QString((QString *)&local_68);
    QString::swap(local_98,(QString *)&local_68);
    QString::~QString((QString *)&local_68);
  }
  bVar8 = QString::isNull(local_90);
  if (!bVar8) {
    QString::QString((QString *)&local_68);
    QString::swap(local_90,(QString *)&local_68);
    QString::~QString((QString *)&local_68);
  }
  FUN_1402847e0(local_50);
  FUN_140284350(local_50,1);
  QLineEdit::selectAll((QLineEdit *)*puVar1);
  QWidget::setFocus((QWidget *)*puVar1,7);
  return local_50;
}

