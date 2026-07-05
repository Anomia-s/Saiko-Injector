/**
 * Function: load_a_json_file_from_disk
 * Address:  140550e60
 * Signature: undefined load_a_json_file_from_disk(void)
 * Body size: 792 bytes
 */


void load_a_json_file_from_disk(longlong param_1,QWidget *param_2,QFormLayout *param_3)

{
  void **ppvVar1;
  QHBoxLayout *pQVar2;
  QWidget *pQVar3;
  int iVar4;
  QStyle *pQVar5;
  undefined4 *puVar6;
  uint in_stack_ffffffffffffff3c;
  QObject local_a8 [8];
  QObject local_a0 [8];
  QFormLayout *local_98;
  QString local_90 [24];
  QHBoxLayout *local_78;
  QWidget *local_70;
  code *local_68;
  undefined4 local_60;
  QString local_50 [8];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = (QHBoxLayout *)FUN_140b65d30(0x20);
  QHBoxLayout::QHBoxLayout(local_78);
  pQVar5 = QWidget::style(*(QWidget **)(param_1 + 0x218));
  iVar4 = (**(code **)(*(longlong *)pQVar5 + 0xd8))(pQVar5,0x4f,0,0);
  pQVar2 = local_78;
  (**(code **)(*(longlong *)local_78 + 0x60))(local_78,iVar4 * 2);
  local_70 = (QWidget *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_68,&DAT_14131f57c);
  QString::QString(local_90,"document-open");
  QIcon::fromTheme(local_50);
  pQVar3 = local_70;
  QPushButton::QPushButton((QPushButton *)local_70,(QIcon *)local_50,(QString *)&local_68,param_2);
  local_98 = param_3;
  QIcon::~QIcon((QIcon *)local_50);
  QString::~QString(local_90);
  QString::~QString((QString *)&local_68);
  QString::QString((QString *)&local_68,"Load a JSON file from disk.");
  QWidget::setToolTip(pQVar3,(QString *)&local_68);
  QString::~QString((QString *)&local_68);
  QWidget::setSizePolicy(pQVar3,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar2,pQVar3,0,0);
  ppvVar1 = *(void ***)(param_1 + 0x218);
  local_68 = pressed_exref;
  local_60 = 0;
  puVar6 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar6 = 1;
  *(undefined1 **)(puVar6 + 2) = &LAB_140559f30;
  *(longlong *)(puVar6 + 4) = param_1;
  QObject::connectImpl
            (local_a8,(void **)pQVar3,(QObject *)&local_68,ppvVar1,(QSlotObjectBase *)0x0,
             (ConnectionType)puVar6,(int *)((ulonglong)in_stack_ffffffffffffff3c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_a8);
  local_70 = (QWidget *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_68,&DAT_14131f56a);
  QString::QString(local_90,"document-save");
  QIcon::fromTheme(local_50);
  pQVar3 = local_70;
  QPushButton::QPushButton((QPushButton *)local_70,(QIcon *)local_50,(QString *)&local_68,param_2);
  QIcon::~QIcon((QIcon *)local_50);
  QString::~QString(local_90);
  QString::~QString((QString *)&local_68);
  QString::QString((QString *)&local_68,"Save the current theme as JSON file to disk.");
  QWidget::setToolTip(pQVar3,(QString *)&local_68);
  QString::~QString((QString *)&local_68);
  QWidget::setSizePolicy(pQVar3,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar2,pQVar3,0,0);
  ppvVar1 = *(void ***)(param_1 + 0x218);
  local_68 = pressed_exref;
  local_60 = 0;
  puVar6 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar6 = 1;
  *(undefined1 **)(puVar6 + 2) = &LAB_14055a4e0;
  *(longlong *)(puVar6 + 4) = param_1;
  QObject::connectImpl
            (local_a0,(void **)pQVar3,(QObject *)&local_68,ppvVar1,(QSlotObjectBase *)0x0,
             (ConnectionType)puVar6,(int *)((ulonglong)in_stack_ffffffffffffff3c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_a0);
  QFormLayout::addRow(local_98,(QLayout *)pQVar2);
  return;
}

