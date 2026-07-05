/**
 * Function: PublishDialog
 * Address:  1402b0890
 * Signature: PublishDialog * __thiscall PublishDialog(PublishDialog * this, undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
 * Body size: 2423 bytes
 */


PublishDialog * __thiscall
ldv::editor::PublishDialog::PublishDialog
          (PublishDialog *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4,undefined8 param_5)

{
  QWidget *pQVar1;
  QWidget *pQVar2;
  void **ppvVar3;
  code *pcVar4;
  QVBoxLayout *this_00;
  QPushButton *pQVar5;
  QVBoxLayout *pQVar6;
  QWidget *pQVar7;
  PublishDialog *pPVar8;
  undefined4 *puVar9;
  uint in_stack_ffffffffffffff0c;
  QObject local_e0 [8];
  QObject local_d8 [8];
  QObject local_d0 [8];
  QObject local_c8 [8];
  QObject local_c0 [8];
  QObject local_b8 [8];
  longlong *local_b0;
  undefined1 *local_a8;
  int **local_a0;
  QVBoxLayout *local_98;
  QPushButton *local_90;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  QVBoxLayout *local_78;
  QGroupBox *local_70;
  QWidget *local_68;
  code *local_60;
  undefined4 local_58;
  undefined1 local_42;
  undefined1 local_41;
  PublishDialog *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  QDialog::QDialog((QDialog *)this,param_5,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_b0 = &(this->PublishDialog_data).offset_0x10;
  local_40 = this;
  FUN_1402b1910(local_b0,param_1);
  *(undefined8 *)&(local_40->PublishDialog_data).field_0x58 = param_2;
  *(undefined8 *)&(local_40->PublishDialog_data).field_0x60 = param_3;
  *(undefined8 *)&(local_40->PublishDialog_data).field_0x68 = param_4;
  local_a8 = &(local_40->PublishDialog_data).field_0x78;
  local_a0 = &(local_40->PublishDialog_data).offset_0xc0;
  *(undefined8 *)&(local_40->PublishDialog_data).field_0x70 = 0;
  *(undefined8 *)&(local_40->PublishDialog_data).field_0x78 = 0;
  *(undefined8 *)&(local_40->PublishDialog_data).field_0x80 = 0;
  *(undefined8 *)&(local_40->PublishDialog_data).field_0x88 = 0;
  *(undefined8 *)&(local_40->PublishDialog_data).field_0x90 = 0;
  *(undefined8 *)&(local_40->PublishDialog_data).field_0x98 = 0;
  *(undefined8 *)&(local_40->PublishDialog_data).field_0xa0 = 0;
  *(undefined8 *)&(local_40->PublishDialog_data).field_0xa8 = 0;
  *(undefined8 *)&(local_40->PublishDialog_data).field_0xb0 = 0;
  *(undefined8 *)&(local_40->PublishDialog_data).field_0xb8 = 0;
  (local_40->PublishDialog_data).offset_0xc0 = (int *)0x0;
  local_40[1].vftablePtr = (PublishDialog_vftable0 *)0x0;
  QString::QString((QString *)&local_60,"Publish to Luduvo");
  pPVar8 = local_40;
  QWidget::setWindowTitle((QWidget *)local_40,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QWidget::setMinimumSize((QWidget *)pPVar8,0x208,0x1e0);
  local_98 = (QVBoxLayout *)FUN_140b65d30(0x20);
  QVBoxLayout::QVBoxLayout(local_98,(QWidget *)local_40);
  local_70 = (QGroupBox *)FUN_140b65d30(0x28);
  this_00 = local_98;
  QString::QString((QString *)&local_60,"Your Places");
  QGroupBox::QGroupBox(local_70,(QString *)&local_60,(QWidget *)0x0);
  QString::~QString((QString *)&local_60);
  local_78 = (QVBoxLayout *)FUN_140b65d30(0x20);
  QVBoxLayout::QVBoxLayout(local_78,(QWidget *)local_70);
  local_68 = (QWidget *)FUN_140b65d30(0x28);
  pQVar6 = local_78;
  local_42 = 1;
  QString::QString((QString *)&local_60,
                   "Select an existing place to update, or fill in the fields below to publish as new:"
                  );
  pQVar2 = local_68;
  local_41 = 1;
  QLabel::QLabel((QLabel *)local_68,&local_60,0,0);
  local_41 = 0;
  QBoxLayout::addWidget((QBoxLayout *)pQVar6,pQVar2,0,0);
  QString::~QString((QString *)&local_60);
  local_68 = (QWidget *)FUN_140b65d30(0x28);
  QListWidget::QListWidget((QListWidget *)local_68,(QWidget *)0x0);
  *(QWidget **)&(local_40->PublishDialog_data).field_0x90 = local_68;
  QWidget::setMaximumHeight(local_68,0xb4);
  QBoxLayout::addWidget
            ((QBoxLayout *)pQVar6,*(undefined8 *)&(local_40->PublishDialog_data).field_0x90,0,0);
  QBoxLayout::addWidget((QBoxLayout *)this_00,local_70,0,0);
  local_70 = (QGroupBox *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_60,"Publish as New");
  QGroupBox::QGroupBox(local_70,(QString *)&local_60,(QWidget *)0x0);
  QString::~QString((QString *)&local_60);
  local_78 = (QVBoxLayout *)FUN_140b65d30(0x20);
  QFormLayout::QFormLayout((QFormLayout *)local_78,(QWidget *)local_70);
  local_68 = (QWidget *)FUN_140b65d30(0x28);
  pQVar6 = local_78;
  QLineEdit::QLineEdit((QLineEdit *)local_68,(QWidget *)0x0);
  pQVar2 = local_68;
  *(QWidget **)&(local_40->PublishDialog_data).field_0x98 = local_68;
  QString::QString((QString *)&local_60,"My Awesome Game");
  QLineEdit::setPlaceholderText((QLineEdit *)pQVar2,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QLineEdit::setMaxLength(*(QLineEdit **)&(local_40->PublishDialog_data).field_0x98,100);
  pQVar1 = *(QWidget **)&(local_40->PublishDialog_data).field_0x98;
  QString::QString((QString *)&local_60,"Title:");
  QFormLayout::addRow((QFormLayout *)pQVar6,(QString *)&local_60,pQVar1);
  QString::~QString((QString *)&local_60);
  local_68 = (QWidget *)FUN_140b65d30(0x28);
  QTextEdit::QTextEdit((QTextEdit *)local_68,(QWidget *)0x0);
  pQVar2 = local_68;
  *(QWidget **)&(local_40->PublishDialog_data).field_0xa0 = local_68;
  QString::QString((QString *)&local_60,"A short description of your place...");
  QTextEdit::setPlaceholderText((QTextEdit *)pQVar2,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QWidget::setMaximumHeight(*(QWidget **)&(local_40->PublishDialog_data).field_0xa0,0x50);
  pQVar1 = *(QWidget **)&(local_40->PublishDialog_data).field_0xa0;
  QString::QString((QString *)&local_60,"Description:");
  QFormLayout::addRow((QFormLayout *)pQVar6,(QString *)&local_60,pQVar1);
  QString::~QString((QString *)&local_60);
  local_68 = (QWidget *)FUN_140b65d30(0x20);
  QHBoxLayout::QHBoxLayout((QHBoxLayout *)local_68);
  pQVar7 = local_68;
  QBoxLayout::addStretch((QBoxLayout *)local_68,0);
  local_90 = (QPushButton *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_60,"Publish as New");
  pQVar5 = local_90;
  QPushButton::QPushButton(local_90,(QString *)&local_60,(QWidget *)0x0);
  pPVar8 = local_40;
  *(QPushButton **)&(local_40->PublishDialog_data).field_0xb8 = pQVar5;
  QString::~QString((QString *)&local_60);
  pQVar2 = *(QWidget **)&(pPVar8->PublishDialog_data).field_0xb8;
  QString::QString((QString *)&local_60,"QPushButton { font-weight: bold; }");
  QWidget::setStyleSheet(pQVar2,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QBoxLayout::addWidget
            ((QBoxLayout *)pQVar7,*(undefined8 *)&(local_40->PublishDialog_data).field_0xb8,0,0);
  QFormLayout::addRow((QFormLayout *)pQVar6,(QLayout *)pQVar7);
  QBoxLayout::addWidget((QBoxLayout *)this_00,local_70,0,0);
  local_70 = (QGroupBox *)FUN_140b65d30(0x28);
  QLabel::QLabel((QLabel *)local_70,0);
  *(QGroupBox **)&(local_40->PublishDialog_data).field_0xa8 = local_70;
  QLabel::setWordWrap((QLabel *)local_70,true);
  QBoxLayout::addWidget
            ((QBoxLayout *)this_00,*(undefined8 *)&(local_40->PublishDialog_data).field_0xa8,0,0);
  local_68 = (QWidget *)FUN_140b65d30(0x20);
  QHBoxLayout::QHBoxLayout((QHBoxLayout *)local_68);
  local_70 = (QGroupBox *)FUN_140b65d30(0x28);
  pQVar2 = local_68;
  QString::QString((QString *)&local_60,"Refresh");
  QPushButton::QPushButton((QPushButton *)local_70,(QString *)&local_60,(QWidget *)0x0);
  QString::~QString((QString *)&local_60);
  local_78 = (QVBoxLayout *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_60,"Publish to Selected");
  pQVar6 = local_78;
  QPushButton::QPushButton((QPushButton *)local_78,(QString *)&local_60,(QWidget *)0x0);
  pPVar8 = local_40;
  *(QVBoxLayout **)&(local_40->PublishDialog_data).field_0xb0 = pQVar6;
  QString::~QString((QString *)&local_60);
  QWidget::setEnabled(*(QWidget **)&(pPVar8->PublishDialog_data).field_0xb0,false);
  local_78 = (QVBoxLayout *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_60,"Cancel");
  QPushButton::QPushButton((QPushButton *)local_78,(QString *)&local_60,(QWidget *)0x0);
  QString::~QString((QString *)&local_60);
  QBoxLayout::addWidget((QBoxLayout *)pQVar2,local_70,0,0);
  QBoxLayout::addStretch((QBoxLayout *)pQVar2,0);
  QBoxLayout::addWidget
            ((QBoxLayout *)pQVar2,*(undefined8 *)&(local_40->PublishDialog_data).field_0xb0,0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar2,local_78,0,0);
  QBoxLayout::addLayout((QBoxLayout *)this_00,(QLayout *)pQVar2,0);
  local_88 = FUN_1402b1ad0;
  uStack_80 = 0;
  ppvVar3 = *(void ***)&(local_40->PublishDialog_data).field_0x90;
  local_60 = itemSelectionChanged_exref;
  local_58 = 0;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_e0,ppvVar3,(QObject *)&local_60,&local_40->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_ffffffffffffff0c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_e0);
  pcVar4 = clicked_exref;
  local_88 = failed_to_serialize_the_world;
  uStack_80 = 0;
  ppvVar3 = *(void ***)&(local_40->PublishDialog_data).field_0xb0;
  local_60 = clicked_exref;
  local_58 = 0;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_d8,ppvVar3,(QObject *)&local_60,&local_40->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_ffffffffffffff0c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_d8);
  local_88 = failed_to_serialize_the_world;
  uStack_80 = 0;
  ppvVar3 = *(void ***)&(local_40->PublishDialog_data).field_0xb8;
  local_60 = pcVar4;
  local_58 = 0;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_d0,ppvVar3,(QObject *)&local_60,&local_40->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_ffffffffffffff0c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_d0);
  local_88 = (code *)&LAB_140283bb0;
  uStack_80 = 0;
  local_60 = pcVar4;
  local_58 = 0;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_c8,(void **)local_78,(QObject *)&local_60,&local_40->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_ffffffffffffff0c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_c8);
  local_88 = failed_to_load_places_1;
  uStack_80 = 0;
  local_60 = pcVar4;
  local_58 = 0;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_c0,(void **)local_70,(QObject *)&local_60,&local_40->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_ffffffffffffff0c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_c0);
  ppvVar3 = *(void ***)&(local_40->PublishDialog_data).field_0x98;
  local_60 = textChanged_exref;
  local_58 = 0;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(code **)(puVar9 + 2) = FUN_1402b4af0;
  *(PublishDialog **)(puVar9 + 4) = local_40;
  QObject::connectImpl
            (local_b8,ppvVar3,(QObject *)&local_60,&local_40->vftablePtr,(QSlotObjectBase *)0x0,
             (ConnectionType)puVar9,(int *)((ulonglong)in_stack_ffffffffffffff0c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_b8);
  failed_to_load_places_1(local_40);
  return local_40;
}

