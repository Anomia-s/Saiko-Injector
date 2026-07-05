/**
 * Function: LoginDialog
 * Address:  1402a88e0
 * Signature: LoginDialog * __thiscall LoginDialog(LoginDialog * this, undefined8 param_1, undefined8 param_2)
 * Body size: 2060 bytes
 */


LoginDialog * __thiscall
ldv::editor::LoginDialog::LoginDialog(LoginDialog *this,undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  QLineEdit *this_00;
  longlong *plVar2;
  void **ppvVar3;
  code *pcVar4;
  QVBoxLayout *this_01;
  QWidget *pQVar5;
  QHBoxLayout *pQVar6;
  LoginDialog *pLVar7;
  undefined4 *puVar8;
  uint in_stack_ffffffffffffff1c;
  QObject local_c8 [8];
  QObject local_c0 [8];
  QObject local_b8 [8];
  QObject local_b0 [8];
  QObject local_a8 [8];
  int **local_a0;
  longlong *local_98;
  QVBoxLayout *local_90;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  QWidget *local_78;
  code *local_70;
  undefined4 local_68;
  QHBoxLayout *local_58;
  LoginDialog *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  QDialog::QDialog((QDialog *)this,param_2,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->LoginDialog_data).offset_0x10 = param_1;
  (this->LoginDialog_data).offset_0x18 = 0;
  local_a0 = &(this->LoginDialog_data).offset_0x70;
  (this->LoginDialog_data).offset_0x20 = 0;
  (this->LoginDialog_data).offset_0x28 = 0;
  (this->LoginDialog_data).offset_0x30 = 0;
  (this->LoginDialog_data).offset_0x38 = 0;
  (this->LoginDialog_data).offset_0x40 = 0;
  (this->LoginDialog_data).offset_0x48 = 0;
  (this->LoginDialog_data).offset_0x50 = 0;
  (this->LoginDialog_data).offset_0x58 = 0;
  *(undefined8 *)((longlong)&(this->LoginDialog_data).offset_0x58 + 1) = 0;
  (this->LoginDialog_data).offset_0x61 = 0;
  (this->LoginDialog_data).offset_0x70 = (int *)0x0;
  (this->LoginDialog_data).offset_0x78 = 0;
  (this->LoginDialog_data).offset_0x80 = 0;
  (this->LoginDialog_data).offset_0x88 = 0;
  (this->LoginDialog_data).offset_0x90 = 0;
  (this->LoginDialog_data).offset_0x98 = 0xf;
  local_98 = &(this->LoginDialog_data).offset_0xa0;
  (this->LoginDialog_data).offset_0xa0 = 0;
  (this->LoginDialog_data).offset_0xa8 = 0;
  (this->LoginDialog_data).offset_0xb0 = 0;
  (this->LoginDialog_data).offset_0xb8 = 0xf;
  local_50 = this;
  QString::QString((QString *)&local_70,"Sign In to Luduvo");
  pLVar7 = local_50;
  QWidget::setWindowTitle((QWidget *)local_50,(QString *)&local_70);
  QString::~QString((QString *)&local_70);
  QWidget::setMinimumWidth((QWidget *)pLVar7,0x168);
  local_90 = (QVBoxLayout *)FUN_140b65d30(0x20);
  QVBoxLayout::QVBoxLayout(local_90,(QWidget *)local_50);
  local_78 = (QWidget *)FUN_140b65d30(0x20);
  this_01 = local_90;
  QFormLayout::QFormLayout((QFormLayout *)local_78,(QWidget *)0x0);
  local_58 = (QHBoxLayout *)FUN_140b65d30(0x28);
  pQVar5 = local_78;
  QLineEdit::QLineEdit((QLineEdit *)local_58,(QWidget *)0x0);
  pQVar6 = local_58;
  puVar1 = &(local_50->LoginDialog_data).offset_0x20;
  *puVar1 = local_58;
  QString::QString((QString *)&local_70,"Email or username");
  QLineEdit::setPlaceholderText((QLineEdit *)pQVar6,(QString *)&local_70);
  QString::~QString((QString *)&local_70);
  local_58 = (QHBoxLayout *)FUN_140b65d30(0x28);
  QLineEdit::QLineEdit((QLineEdit *)local_58,(QWidget *)0x0);
  (local_50->LoginDialog_data).offset_0x28 = local_58;
  QLineEdit::setEchoMode((QLineEdit *)local_58,2);
  this_00 = (QLineEdit *)(local_50->LoginDialog_data).offset_0x28;
  QString::QString((QString *)&local_70,"Your password");
  QLineEdit::setPlaceholderText(this_00,(QString *)&local_70);
  QString::~QString((QString *)&local_70);
  local_58 = (QHBoxLayout *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_70,"Account:");
  pQVar6 = local_58;
  QLabel::QLabel((QLabel *)local_58,&local_70,0,0);
  (local_50->LoginDialog_data).offset_0x40 = pQVar6;
  QString::~QString((QString *)&local_70);
  local_58 = (QHBoxLayout *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_70,"Password:");
  pQVar6 = local_58;
  QLabel::QLabel((QLabel *)local_58,&local_70,0,0);
  pLVar7 = local_50;
  (local_50->LoginDialog_data).offset_0x48 = pQVar6;
  QString::~QString((QString *)&local_70);
  QFormLayout::addRow((QFormLayout *)pQVar5,(QWidget *)(pLVar7->LoginDialog_data).offset_0x40,
                      (QWidget *)(pLVar7->LoginDialog_data).offset_0x20);
  QFormLayout::addRow((QFormLayout *)pQVar5,(QWidget *)(local_50->LoginDialog_data).offset_0x48,
                      (QWidget *)(local_50->LoginDialog_data).offset_0x28);
  local_58 = (QHBoxLayout *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_70,"Code:");
  pQVar6 = local_58;
  QLabel::QLabel((QLabel *)local_58,&local_70,0,0);
  pLVar7 = local_50;
  (local_50->LoginDialog_data).offset_0x50 = pQVar6;
  QString::~QString((QString *)&local_70);
  (**(code **)(*(longlong *)(pLVar7->LoginDialog_data).offset_0x50 + 0x58))();
  local_58 = (QHBoxLayout *)FUN_140b65d30(0x28);
  QLineEdit::QLineEdit((QLineEdit *)local_58,(QWidget *)0x0);
  pQVar6 = local_58;
  (local_50->LoginDialog_data).offset_0x30 = local_58;
  QString::QString((QString *)&local_70,"000000");
  QLineEdit::setPlaceholderText((QLineEdit *)pQVar6,(QString *)&local_70);
  QString::~QString((QString *)&local_70);
  QLineEdit::setMaxLength((QLineEdit *)(local_50->LoginDialog_data).offset_0x30,6);
  plVar2 = (longlong *)(local_50->LoginDialog_data).offset_0x30;
  (**(code **)(*plVar2 + 0x58))(plVar2,0);
  QFormLayout::addRow((QFormLayout *)pQVar5,(QWidget *)(local_50->LoginDialog_data).offset_0x50,
                      (QWidget *)(local_50->LoginDialog_data).offset_0x30);
  local_58 = (QHBoxLayout *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_70,
                   "This account has two-factor authentication enabled.  Enter the 6-digit code from your authenticator app."
                  );
  pQVar6 = local_58;
  QLabel::QLabel((QLabel *)local_58,&local_70,0,0);
  pLVar7 = local_50;
  (local_50->LoginDialog_data).offset_0x38 = pQVar6;
  QString::~QString((QString *)&local_70);
  QLabel::setWordWrap((QLabel *)(pLVar7->LoginDialog_data).offset_0x38,true);
  plVar2 = (longlong *)(local_50->LoginDialog_data).offset_0x38;
  (**(code **)(*plVar2 + 0x58))(plVar2,0);
  QBoxLayout::addLayout((QBoxLayout *)this_01,(QLayout *)pQVar5,0);
  QBoxLayout::addWidget((QBoxLayout *)this_01,(local_50->LoginDialog_data).offset_0x38,0,0);
  local_78 = (QWidget *)FUN_140b65d30(0x28);
  QLabel::QLabel((QLabel *)local_78,0);
  pQVar5 = local_78;
  (local_50->LoginDialog_data).offset_0x58 = local_78;
  QString::QString((QString *)&local_70,"color: red; font-weight: bold;");
  QWidget::setStyleSheet(pQVar5,(QString *)&local_70);
  QString::~QString((QString *)&local_70);
  plVar2 = (longlong *)(local_50->LoginDialog_data).offset_0x58;
  (**(code **)(*plVar2 + 0x58))(plVar2,0);
  QBoxLayout::addWidget((QBoxLayout *)this_01,(local_50->LoginDialog_data).offset_0x58,0,0);
  local_58 = (QHBoxLayout *)FUN_140b65d30(0x20);
  QHBoxLayout::QHBoxLayout(local_58);
  local_78 = (QWidget *)FUN_140b65d30(0x28);
  pQVar6 = local_58;
  QString::QString((QString *)&local_70,"Sign In");
  pQVar5 = local_78;
  QPushButton::QPushButton((QPushButton *)local_78,(QString *)&local_70,(QWidget *)0x0);
  pLVar7 = local_50;
  *(QWidget **)&(local_50->LoginDialog_data).field_0x60 = pQVar5;
  QString::~QString((QString *)&local_70);
  QPushButton::setDefault(*(QPushButton **)&(pLVar7->LoginDialog_data).field_0x60,true);
  local_78 = (QWidget *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_70,"Cancel");
  QPushButton::QPushButton((QPushButton *)local_78,(QString *)&local_70,(QWidget *)0x0);
  QString::~QString((QString *)&local_70);
  QBoxLayout::addStretch((QBoxLayout *)pQVar6,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar6,local_78,0,0);
  QBoxLayout::addWidget
            ((QBoxLayout *)pQVar6,*(undefined8 *)&(local_50->LoginDialog_data).field_0x60,0,0);
  QBoxLayout::addLayout((QBoxLayout *)this_01,(QLayout *)pQVar6,0);
  pcVar4 = clicked_exref;
  local_88 = enter_exactly_6_digits;
  uStack_80 = 0;
  ppvVar3 = *(void ***)&(local_50->LoginDialog_data).field_0x60;
  local_70 = clicked_exref;
  local_68 = 0;
  puVar8 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar8 = 1;
  *(undefined1 **)(puVar8 + 2) = &LAB_140085340;
  *(code **)(puVar8 + 4) = local_88;
  *(ulonglong *)(puVar8 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_c8,ppvVar3,(QObject *)&local_70,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar8,
             (int *)((ulonglong)in_stack_ffffffffffffff1c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_c8);
  local_88 = (code *)&LAB_140283bb0;
  uStack_80 = 0;
  local_70 = pcVar4;
  local_68 = 0;
  puVar8 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar8 = 1;
  *(undefined1 **)(puVar8 + 2) = &LAB_140085340;
  *(code **)(puVar8 + 4) = local_88;
  *(ulonglong *)(puVar8 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_c0,(void **)local_78,(QObject *)&local_70,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar8,
             (int *)((ulonglong)in_stack_ffffffffffffff1c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_c0);
  pcVar4 = returnPressed_exref;
  local_88 = enter_exactly_6_digits;
  uStack_80 = 0;
  ppvVar3 = (void **)*puVar1;
  local_70 = returnPressed_exref;
  local_68 = 0;
  puVar8 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar8 = 1;
  *(undefined1 **)(puVar8 + 2) = &LAB_140085340;
  *(code **)(puVar8 + 4) = local_88;
  *(ulonglong *)(puVar8 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_b8,ppvVar3,(QObject *)&local_70,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar8,
             (int *)((ulonglong)in_stack_ffffffffffffff1c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_b8);
  local_88 = enter_exactly_6_digits;
  uStack_80 = 0;
  ppvVar3 = (void **)(local_50->LoginDialog_data).offset_0x28;
  local_70 = pcVar4;
  local_68 = 0;
  puVar8 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar8 = 1;
  *(undefined1 **)(puVar8 + 2) = &LAB_140085340;
  *(code **)(puVar8 + 4) = local_88;
  *(ulonglong *)(puVar8 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_b0,ppvVar3,(QObject *)&local_70,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar8,
             (int *)((ulonglong)in_stack_ffffffffffffff1c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_b0);
  local_88 = enter_exactly_6_digits;
  uStack_80 = 0;
  ppvVar3 = (void **)(local_50->LoginDialog_data).offset_0x30;
  local_70 = pcVar4;
  local_68 = 0;
  puVar8 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar8 = 1;
  *(undefined1 **)(puVar8 + 2) = &LAB_140085340;
  *(code **)(puVar8 + 4) = local_88;
  *(ulonglong *)(puVar8 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            (local_a8,ppvVar3,(QObject *)&local_70,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar8,
             (int *)((ulonglong)in_stack_ffffffffffffff1c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_a8);
  return local_50;
}

