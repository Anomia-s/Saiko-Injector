/**
 * Function: simulate_touch_input_with_mouse_clicks
 * Address:  14026e630
 * Signature: undefined simulate_touch_input_with_mouse_clicks(void)
 * Body size: 8598 bytes
 */


void simulate_touch_input_with_mouse_clicks(QObject *param_1)

{
  void **ppvVar1;
  QMenu *pQVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  QMenuBar *pQVar6;
  QWidget *pQVar7;
  QAction *pQVar8;
  undefined4 *puVar9;
  QPaintDevice QVar10;
  QMenu *pQVar11;
  QWidget *this;
  longlong lVar12;
  QChar *pQVar13;
  QChar *pQVar14;
  QObject *pQVar15;
  uint in_stack_fffffffffffffebc;
  size_t local_128;
  char *local_120;
  size_t local_118;
  char *local_110;
  size_t local_108;
  char *local_100;
  QObject local_f8 [8];
  QObject local_f0 [8];
  QObject local_e8 [8];
  QObject local_e0 [8];
  QWidget *local_d8;
  QWidget *local_d0;
  QObject *local_c8;
  AccountWidget *local_c0;
  QKeySequence local_b8 [8];
  code *local_b0;
  QChar *local_a8;
  code *local_a0;
  undefined8 uStack_98;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78;
  code *local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  code *local_60;
  QKeySequence local_50 [8];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  pQVar6 = QMainWindow::menuBar((QMainWindow *)param_1);
  QString::QString((QString *)&local_70,"&File");
  pQVar7 = (QWidget *)QMenuBar::addMenu(pQVar6,(QString *)&local_70);
  QString::~QString((QString *)&local_70);
  local_88 = failed_to_create_project_at;
  uStack_80 = 0;
  QKeySequence::QKeySequence(local_50,6);
  QString::QString((QString *)&local_70,"New Project...");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70,local_50);
  pcVar4 = triggered_exref;
  local_a0 = triggered_exref;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)pQVar8,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  QString::~QString((QString *)&local_70);
  QKeySequence::~QKeySequence(local_50);
  local_88 = open_project_directory;
  uStack_80 = 0;
  QKeySequence::QKeySequence(local_50,3);
  QString::QString((QString *)&local_70,"Open Project...");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70,local_50);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)pQVar8,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  QString::~QString((QString *)&local_70);
  QKeySequence::~QKeySequence(local_50);
  local_88 = failed_to_save_project;
  uStack_80 = 0;
  QKeySequence::QKeySequence(local_50,5);
  QString::QString((QString *)&local_70,"Save");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70,local_50);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)pQVar8,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  *(QAction **)(param_1 + 0x43d10) = pQVar8;
  QString::~QString((QString *)&local_70);
  QKeySequence::~QKeySequence(local_50);
  local_88 = project_closed;
  uStack_80 = 0;
  QString::QString((QString *)&local_70,"Close Project");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)pQVar8,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  *(QAction **)(param_1 + 0x43d18) = pQVar8;
  QString::~QString((QString *)&local_70);
  QMenu::addSeparator((QMenu *)pQVar7);
  local_88 = published_to_place;
  uStack_80 = 0;
  QString::QString((QString *)&local_70,"Publish to Luduvo...");
  QVar10 = (QPaintDevice)QWidget::addAction(pQVar7,(QString *)&local_70);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)QVar10,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  *(QPaintDevice *)(param_1 + 0x43d98) = QVar10;
  QString::~QString((QString *)&local_70);
  QAction::setEnabled((QAction *)*(QPaintDevice *)(param_1 + 0x43d98),false);
  QMenu::addSeparator((QMenu *)pQVar7);
  ppvVar1 = *(void ***)self_exref;
  QKeySequence::QKeySequence((QKeySequence *)&local_b0,0x41);
  QString::QString((QString *)&local_70,"Quit");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70,(QKeySequence *)&local_b0);
  local_88 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140271b50;
  *(code **)(puVar9 + 4) = quit_exref;
  QObject::connectImpl
            ((QObject *)&local_a0,(void **)pQVar8,(QObject *)&local_88,ppvVar1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  QString::~QString((QString *)&local_70);
  QKeySequence::~QKeySequence((QKeySequence *)&local_b0);
  pQVar6 = QMainWindow::menuBar((QMainWindow *)param_1);
  QString::QString((QString *)&local_70,"&Edit");
  QVar10 = (QPaintDevice)QMenuBar::addMenu(pQVar6,(QString *)&local_70);
  *(QPaintDevice *)(param_1 + 0x43d20) = QVar10;
  QString::~QString((QString *)&local_70);
  QVar10 = *(QPaintDevice *)(param_1 + 0x43d20);
  local_88 = FUN_140092a50;
  uStack_80 = 0;
  QKeySequence::QKeySequence(local_50,0xb);
  QString::QString((QString *)&local_70,"Undo");
  pQVar8 = QWidget::addAction((QWidget *)QVar10,(QString *)&local_70,local_50);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)pQVar8,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  QString::~QString((QString *)&local_70);
  QKeySequence::~QKeySequence(local_50);
  QVar10 = *(QPaintDevice *)(param_1 + 0x43d20);
  local_88 = FUN_140092a80;
  uStack_80 = 0;
  QKeySequence::QKeySequence(local_50,0xc);
  QString::QString((QString *)&local_70,"Redo");
  pQVar8 = QWidget::addAction((QWidget *)QVar10,(QString *)&local_70,local_50);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)pQVar8,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  QString::~QString((QString *)&local_70);
  QKeySequence::~QKeySequence(local_50);
  QMenu::addSeparator((QMenu *)*(QPaintDevice *)(param_1 + 0x43d20));
  QVar10 = *(QPaintDevice *)(param_1 + 0x43d20);
  local_88 = (code *)&LAB_140091370;
  uStack_80 = 0;
  QKeySequence::QKeySequence(local_50,8);
  QString::QString((QString *)&local_70,"Cut");
  pQVar8 = QWidget::addAction((QWidget *)QVar10,(QString *)&local_70,local_50);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)pQVar8,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  *(QAction **)(param_1 + 0x43d60) = pQVar8;
  QString::~QString((QString *)&local_70);
  QKeySequence::~QKeySequence(local_50);
  QVar10 = *(QPaintDevice *)(param_1 + 0x43d20);
  local_88 = FUN_140091380;
  uStack_80 = 0;
  QKeySequence::QKeySequence(local_50,9);
  QString::QString((QString *)&local_70,"Copy");
  QVar10 = (QPaintDevice)QWidget::addAction((QWidget *)QVar10,(QString *)&local_70,local_50);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)QVar10,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  *(QPaintDevice *)(param_1 + 0x43d68) = QVar10;
  QString::~QString((QString *)&local_70);
  QKeySequence::~QKeySequence(local_50);
  QVar10 = *(QPaintDevice *)(param_1 + 0x43d20);
  local_88 = FUN_140091530;
  uStack_80 = 0;
  QKeySequence::QKeySequence(local_50,10);
  QString::QString((QString *)&local_70,"Paste");
  pQVar8 = QWidget::addAction((QWidget *)QVar10,(QString *)&local_70,local_50);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)pQVar8,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  QString::~QString((QString *)&local_70);
  QKeySequence::~QKeySequence(local_50);
  QVar10 = *(QPaintDevice *)(param_1 + 0x43d20);
  local_88 = FUN_140091710;
  uStack_80 = 0;
  QKeySequence::QKeySequence(local_50,0x1a);
  QString::QString((QString *)&local_70,"Select All");
  pQVar8 = QWidget::addAction((QWidget *)QVar10,(QString *)&local_70,local_50);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)pQVar8,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  QString::~QString((QString *)&local_70);
  QKeySequence::~QKeySequence(local_50);
  QMenu::addSeparator((QMenu *)*(QPaintDevice *)(param_1 + 0x43d20));
  QVar10 = *(QPaintDevice *)(param_1 + 0x43d20);
  local_88 = deleted_entity;
  uStack_80 = 0;
  QKeySequence::QKeySequence(local_50,7);
  QString::QString((QString *)&local_70,"Delete");
  QVar10 = (QPaintDevice)QWidget::addAction((QWidget *)QVar10,(QString *)&local_70,local_50);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)QVar10,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  *(QPaintDevice *)(param_1 + 0x43d38) = QVar10;
  QString::~QString((QString *)&local_70);
  QKeySequence::~QKeySequence(local_50);
  QVar10 = *(QPaintDevice *)(param_1 + 0x43d20);
  local_a0 = FUN_140090fb0;
  uStack_98 = (QChar *)((ulonglong)uStack_98._4_4_ << 0x20);
  QString::QString((QString *)&local_70,"Ctrl+D");
  QKeySequence::QKeySequence(local_b8,(QString *)&local_70,0);
  QString::QString((QString *)&local_88,"Duplicate");
  pQVar8 = QWidget::addAction((QWidget *)QVar10,(QString *)&local_88,local_b8);
  local_b0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_a0;
  *(QChar **)(puVar9 + 6) = uStack_98;
  QObject::connectImpl
            ((QObject *)local_50,(void **)pQVar8,(QObject *)&local_b0,(void **)param_1,
             (QSlotObjectBase *)&local_a0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_50);
  *(QAction **)(param_1 + 0x43d58) = pQVar8;
  QString::~QString((QString *)&local_88);
  QKeySequence::~QKeySequence(local_b8);
  QString::~QString((QString *)&local_70);
  pQVar6 = QMainWindow::menuBar((QMainWindow *)param_1);
  QString::QString((QString *)&local_70,"&Insert");
  pQVar11 = QMenuBar::addMenu(pQVar6,(QString *)&local_70);
  *(QMenu **)(param_1 + 0x43d28) = pQVar11;
  QString::~QString((QString *)&local_70);
  pQVar2 = *(QMenu **)(param_1 + 0x43d28);
  QString::QString((QString *)&local_70,"Part");
  pQVar7 = (QWidget *)QMenu::addMenu(pQVar2,(QString *)&local_70);
  QString::~QString((QString *)&local_70);
  QString::QString((QString *)&local_70,"Box");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70);
  local_88 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140271b70;
  *(QObject **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            ((QObject *)&local_a0,(void **)pQVar8,(QObject *)&local_88,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  QString::~QString((QString *)&local_70);
  QString::QString((QString *)&local_70,"Sphere");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70);
  local_88 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140271ba0;
  *(QObject **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            ((QObject *)&local_a0,(void **)pQVar8,(QObject *)&local_88,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  QString::~QString((QString *)&local_70);
  QString::QString((QString *)&local_70,"Cylinder");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70);
  local_88 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140271bd0;
  *(QObject **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            ((QObject *)&local_a0,(void **)pQVar8,(QObject *)&local_88,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  QString::~QString((QString *)&local_70);
  QString::QString((QString *)&local_70,"Cone");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70);
  local_88 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140271c00;
  *(QObject **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            ((QObject *)&local_a0,(void **)pQVar8,(QObject *)&local_88,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  QString::~QString((QString *)&local_70);
  QString::QString((QString *)&local_70,"Wedge");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70);
  local_88 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140271c30;
  *(QObject **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            ((QObject *)&local_a0,(void **)pQVar8,(QObject *)&local_88,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  QString::~QString((QString *)&local_70);
  pQVar2 = *(QMenu **)(param_1 + 0x43d28);
  QString::QString((QString *)&local_70,"Light");
  pQVar7 = (QWidget *)QMenu::addMenu(pQVar2,(QString *)&local_70);
  QString::~QString((QString *)&local_70);
  local_88 = inserted_point_light;
  uStack_80 = 0;
  QString::QString((QString *)&local_70,"PointLight");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)pQVar8,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  QString::~QString((QString *)&local_70);
  local_88 = inserted_spot_light;
  uStack_80 = 0;
  QString::QString((QString *)&local_70,"SpotLight");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)pQVar8,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  QString::~QString((QString *)&local_70);
  pQVar7 = *(QWidget **)(param_1 + 0x43d28);
  local_88 = inserted_spawn_point;
  uStack_80 = 0;
  QString::QString((QString *)&local_70,"Spawn Point");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)pQVar8,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  QString::~QString((QString *)&local_70);
  QMenu::addSeparator(*(QMenu **)(param_1 + 0x43d28));
  pQVar7 = *(QWidget **)(param_1 + 0x43d28);
  local_88 = select_an_entity_first;
  uStack_80 = 0;
  QString::QString((QString *)&local_70,"Script");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)pQVar8,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  *(QAction **)(param_1 + 0x43d48) = pQVar8;
  QString::~QString((QString *)&local_70);
  pQVar7 = *(QWidget **)(param_1 + 0x43d28);
  local_88 = select_an_entity_first;
  uStack_80 = 0;
  QString::QString((QString *)&local_70,"Script Handles");
  QVar10 = (QPaintDevice)QWidget::addAction(pQVar7,(QString *)&local_70);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)QVar10,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  *(QPaintDevice *)(param_1 + 0x43d50) = QVar10;
  QString::~QString((QString *)&local_70);
  pQVar6 = QMainWindow::menuBar((QMainWindow *)param_1);
  QString::QString((QString *)&local_70,"&View");
  pQVar11 = QMenuBar::addMenu(pQVar6,(QString *)&local_70);
  *(QMenu **)(param_1 + 0x43d30) = pQVar11;
  QString::~QString((QString *)&local_70);
  pQVar6 = QMainWindow::menuBar((QMainWindow *)param_1);
  QString::QString((QString *)&local_70,"&Test");
  pQVar7 = (QWidget *)QMenuBar::addMenu(pQVar6,(QString *)&local_70);
  QString::~QString((QString *)&local_70);
  local_a0 = failed_to_start_playtest;
  uStack_98 = (QChar *)((ulonglong)uStack_98 & 0xffffffff00000000);
  QString::QString((QString *)&local_70,"F5");
  QKeySequence::QKeySequence(local_b8,(QString *)&local_70,0);
  QString::QString((QString *)&local_88,"Play / Stop");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_88,local_b8);
  local_b0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_a0;
  *(QChar **)(puVar9 + 6) = uStack_98;
  QObject::connectImpl
            ((QObject *)local_50,(void **)pQVar8,(QObject *)&local_b0,(void **)param_1,
             (QSlotObjectBase *)&local_a0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_50);
  QString::~QString((QString *)&local_88);
  QKeySequence::~QKeySequence(local_b8);
  QString::~QString((QString *)&local_70);
  local_a0 = multi_client_playtest_not_yet_supported_start;
  uStack_98 = (QChar *)((ulonglong)uStack_98 & 0xffffffff00000000);
  QString::QString((QString *)&local_70,"F8");
  QKeySequence::QKeySequence(local_b8,(QString *)&local_70,0);
  QString::QString((QString *)&local_88,"Server && Clients");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_88,local_b8);
  local_b0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_a0;
  *(QChar **)(puVar9 + 6) = uStack_98;
  QObject::connectImpl
            ((QObject *)local_50,(void **)pQVar8,(QObject *)&local_b0,(void **)param_1,
             (QSlotObjectBase *)&local_a0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_50);
  QString::~QString((QString *)&local_88);
  QKeySequence::~QKeySequence(local_b8);
  QString::~QString((QString *)&local_70);
  QMenu::addSeparator((QMenu *)pQVar7);
  local_a0 = FUN_140094540;
  uStack_98 = (QChar *)((ulonglong)uStack_98 & 0xffffffff00000000);
  QString::QString((QString *)&local_70,"F6");
  QKeySequence::QKeySequence(local_b8,(QString *)&local_70,0);
  QString::QString((QString *)&local_88,"Pause / Resume");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_88,local_b8);
  local_b0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_a0;
  *(QChar **)(puVar9 + 6) = uStack_98;
  QObject::connectImpl
            ((QObject *)local_50,(void **)pQVar8,(QObject *)&local_b0,(void **)param_1,
             (QSlotObjectBase *)&local_a0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_50);
  QString::~QString((QString *)&local_88);
  QKeySequence::~QKeySequence(local_b8);
  QString::~QString((QString *)&local_70);
  local_a0 = FUN_140092070;
  uStack_98 = (QChar *)((ulonglong)uStack_98 & 0xffffffff00000000);
  QString::QString((QString *)&local_70,"Shift+F5");
  QKeySequence::QKeySequence(local_b8,(QString *)&local_70,0);
  QString::QString((QString *)&local_88,"Stop");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_88,local_b8);
  local_b0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_a0;
  *(QChar **)(puVar9 + 6) = uStack_98;
  QObject::connectImpl
            ((QObject *)local_50,(void **)pQVar8,(QObject *)&local_b0,(void **)param_1,
             (QSlotObjectBase *)&local_a0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_50);
  QString::~QString((QString *)&local_88);
  QKeySequence::~QKeySequence(local_b8);
  QString::~QString((QString *)&local_70);
  local_a0 = (code *)&LAB_140094590;
  uStack_98 = (QChar *)((ulonglong)uStack_98 & 0xffffffff00000000);
  QString::QString((QString *)&local_70,"F7");
  QKeySequence::QKeySequence(local_b8,(QString *)&local_70,0);
  QString::QString((QString *)&local_88,"Step Forward");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_88,local_b8);
  local_b0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_a0;
  *(QChar **)(puVar9 + 6) = uStack_98;
  QObject::connectImpl
            ((QObject *)local_50,(void **)pQVar8,(QObject *)&local_b0,(void **)param_1,
             (QSlotObjectBase *)&local_a0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_50);
  QString::~QString((QString *)&local_88);
  QKeySequence::~QKeySequence(local_b8);
  QString::~QString((QString *)&local_70);
  QMenu::addSeparator((QMenu *)pQVar7);
  QString::QString((QString *)&local_70,"Player Emulator...");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70);
  local_88 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(code **)(puVar9 + 2) = FUN_140271c60;
  *(QObject **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            ((QObject *)&local_a0,(void **)pQVar8,(QObject *)&local_88,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  QString::~QString((QString *)&local_70);
  QString::QString((QString *)&local_70,"Device");
  this = (QWidget *)QMenu::addMenu((QMenu *)pQVar7,(QString *)&local_70);
  local_c8 = param_1;
  QString::~QString((QString *)&local_70);
  QString::QString((QString *)&local_70,"Simulate Touch");
  pQVar8 = QWidget::addAction(this,(QString *)&local_70);
  QString::~QString((QString *)&local_70);
  QAction::setCheckable((QAction *)pQVar8,true);
  QString::QString((QString *)&local_70,"Simulate touch input with mouse clicks");
  QAction::setToolTip((QAction *)pQVar8,(QString *)&local_70);
  QString::~QString((QString *)&local_70);
  QString::QString((QString *)&local_70,"Simulate Controller");
  pQVar8 = QWidget::addAction(this,(QString *)&local_70);
  pQVar15 = local_c8;
  QString::~QString((QString *)&local_70);
  QAction::setCheckable((QAction *)pQVar8,true);
  QString::QString((QString *)&local_70,"Simulate gamepad controller input");
  QAction::setToolTip((QAction *)pQVar8,(QString *)&local_70);
  QString::~QString((QString *)&local_70);
  QMenu::addSeparator((QMenu *)pQVar7);
  QString::QString((QString *)&local_70,"Team Test");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70);
  local_88 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(code **)(puVar9 + 2) = team_test_requires_collaboration_mode;
  *(QObject **)(puVar9 + 4) = pQVar15;
  QObject::connectImpl
            ((QObject *)&local_a0,(void **)pQVar8,(QObject *)&local_88,(void **)pQVar15,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  QString::~QString((QString *)&local_70);
  QString::QString((QString *)&local_70,"Party Simulation...");
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70);
  local_88 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(code **)(puVar9 + 2) = party_simulation_is_configured_in_server_cli;
  *(QObject **)(puVar9 + 4) = pQVar15;
  QObject::connectImpl
            ((QObject *)&local_a0,(void **)pQVar8,(QObject *)&local_88,(void **)pQVar15,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  QString::~QString((QString *)&local_70);
  pQVar6 = QMainWindow::menuBar((QMainWindow *)pQVar15);
  QString::QString((QString *)&local_70,"&Settings");
  pQVar7 = (QWidget *)QMenuBar::addMenu(pQVar6,(QString *)&local_70);
  QString::~QString((QString *)&local_70);
  local_88 = FUN_140092c40;
  uStack_80 = 0;
  QString::QString((QString *)&local_70,"Studio Settings...");
  local_d0 = pQVar7;
  pQVar8 = QWidget::addAction(pQVar7,(QString *)&local_70);
  local_a0 = pcVar4;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_88;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_7c,uStack_80);
  QObject::connectImpl
            ((QObject *)&local_b0,(void **)pQVar8,(QObject *)&local_a0,(void **)pQVar15,
             (QSlotObjectBase *)&local_88,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  QString::~QString((QString *)&local_70);
  pQVar7 = local_d0;
  QMenu::addSeparator((QMenu *)local_d0);
  QString::QString((QString *)&local_70,"Themes");
  local_d8 = (QWidget *)QMenu::addMenu((QMenu *)pQVar7,(QString *)&local_70);
  QString::~QString((QString *)&local_70);
  local_c0 = (AccountWidget *)FUN_140b65d30(0x10);
  QActionGroup::QActionGroup((QActionGroup *)local_c0,pQVar15);
  QActionGroup::setExclusive((QActionGroup *)local_c0,true);
  lVar12 = FUN_140089040();
  QString::QString((QString *)&local_88,(QString *)(lVar12 + 0x180));
  lVar12 = 0;
  do {
    pcVar3 = *(char **)((longlong)&PTR_s_Necessity_Dark_140dfc920 + lVar12);
    if (pcVar3 == (char *)0x0) {
      local_128 = 0;
    }
    else {
      local_128 = strlen(pcVar3);
    }
    local_120 = pcVar3;
    QString::fromUtf8((QString *)&local_70,&local_128);
    pQVar8 = QWidget::addAction(local_d8,(QString *)&local_70);
    QString::~QString((QString *)&local_70);
    QAction::setCheckable((QAction *)pQVar8,true);
    pcVar3 = *(char **)((longlong)&PTR_s_necessity_dark_140dfc928 + lVar12);
    if (pcVar3 == (char *)0x0) {
      local_118 = 0;
    }
    else {
      local_118 = strlen(pcVar3);
    }
    local_110 = pcVar3;
    QString::fromUtf8((QString *)&local_a0,&local_118);
    QVariant::QVariant((QVariant *)&local_70,(QString *)&local_a0);
    QAction::setData((QAction *)pQVar8,(QVariant *)&local_70);
    QVariant::~QVariant((QVariant *)&local_70);
    QString::~QString((QString *)&local_a0);
    QActionGroup::addAction((QActionGroup *)local_c0,pQVar8);
    if (pcVar3 == (char *)0x0) {
      local_108 = 0;
    }
    else {
      local_108 = strlen(pcVar3);
    }
    local_100 = pcVar3;
    QString::fromUtf8((QString *)&local_70,&local_108);
    pQVar13 = QString::begin((QString *)&local_70);
    pcVar4 = local_60;
    pQVar14 = QString::begin((QString *)&local_88);
    if (local_78 == pcVar4) {
      local_a0 = pcVar4;
      local_b0 = pcVar4;
      local_a8 = pQVar14;
      uStack_98 = pQVar13;
      bVar5 = QtPrivate::equalStrings(&local_b0,(QString *)&local_a0);
      QString::~QString((QString *)&local_70);
      pQVar15 = local_c8;
      if (bVar5) {
        QAction::setChecked((QAction *)pQVar8,true);
      }
    }
    else {
      QString::~QString((QString *)&local_70);
      pQVar15 = local_c8;
    }
    local_70 = triggered_exref;
    puVar9 = (undefined4 *)FUN_140b65d30(0x20);
    *puVar9 = 1;
    *(code **)(puVar9 + 2) = FUN_140271e10;
    *(QObject **)(puVar9 + 4) = pQVar15;
    *(QAction **)(puVar9 + 6) = pQVar8;
    QObject::connectImpl
              (local_f8,(void **)pQVar8,(QObject *)&local_70,(void **)pQVar15,(QSlotObjectBase *)0x0
               ,(ConnectionType)puVar9,(int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),
               (QMetaObject *)0x0);
    QMetaObject::Connection::~Connection((Connection *)local_f8);
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x30);
  QString::QString((QString *)&local_70,"VSync");
  pQVar8 = QWidget::addAction(local_d0,(QString *)&local_70);
  *(QAction **)(pQVar15 + 0x43d90) = pQVar8;
  QString::~QString((QString *)&local_70);
  QAction::setCheckable(*(QAction **)(pQVar15 + 0x43d90),true);
  QAction::setChecked(*(QAction **)(pQVar15 + 0x43d90),(bool)pQVar15[0x43dac]);
  local_70 = FUN_140093bc0;
  uStack_68 = 0;
  ppvVar1 = *(void ***)(pQVar15 + 0x43d90);
  local_a0 = toggled_exref;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140271f00;
  *(code **)(puVar9 + 4) = local_70;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_64,uStack_68);
  QObject::connectImpl
            (local_f0,ppvVar1,(QObject *)&local_a0,(void **)pQVar15,(QSlotObjectBase *)&local_70,
             (ConnectionType)puVar9,(int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_f0);
  local_c0 = (AccountWidget *)FUN_140b65d30(0x68);
  ldv::editor::AccountWidget::AccountWidget(local_c0,pQVar15 + 0x43cb0,pQVar15);
  *(AccountWidget **)(pQVar15 + 0x43da0) = local_c0;
  QWidget::setSizePolicy((QWidget *)local_c0,0x50000);
  pQVar6 = QMainWindow::menuBar((QMainWindow *)pQVar15);
  QMenuBar::setCornerWidget(pQVar6,*(QWidget **)(pQVar15 + 0x43da0),1);
  local_a0 = FUN_14008fdc0;
  uStack_98 = (QChar *)((ulonglong)uStack_98 & 0xffffffff00000000);
  ppvVar1 = *(void ***)(pQVar15 + 0x43da0);
  local_70 = (code *)&LAB_14009c890;
  uStack_68 = 0;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_a0;
  *(QChar **)(puVar9 + 6) = uStack_98;
  QObject::connectImpl
            (local_e8,ppvVar1,(QObject *)&local_70,(void **)pQVar15,(QSlotObjectBase *)&local_a0,
             (ConnectionType)puVar9,(int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_e8);
  local_a0 = FUN_14008ff90;
  uStack_98 = (QChar *)((ulonglong)uStack_98 & 0xffffffff00000000);
  ppvVar1 = *(void ***)(pQVar15 + 0x43da0);
  local_70 = (code *)&LAB_14009c8b0;
  uStack_68 = 0;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_a0;
  *(QChar **)(puVar9 + 6) = uStack_98;
  QObject::connectImpl
            (local_e0,ppvVar1,(QObject *)&local_70,(void **)pQVar15,(QSlotObjectBase *)&local_a0,
             (ConnectionType)puVar9,(int *)((ulonglong)in_stack_fffffffffffffebc << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_e0);
  QString::~QString((QString *)&local_88);
  return;
}

