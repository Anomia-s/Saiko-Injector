/**
 * Function: add_script_to_selected_entity
 * Address:  140271f60
 * Signature: undefined add_script_to_selected_entity(void)
 * Body size: 8840 bytes
 */


QWidget * add_script_to_selected_entity(QWidget *param_1)

{
  int iVar1;
  code *pcVar2;
  QWidget *pQVar3;
  QWidget *pQVar4;
  QWidget *pQVar5;
  QAction *pQVar6;
  void **ppvVar7;
  void **ppvVar8;
  undefined4 *puVar9;
  QWidget *pQVar10;
  QAction *pQVar11;
  QWidget *pQVar12;
  QObject *pQVar13;
  QObject QVar14;
  QPaintDevice QVar15;
  uint in_stack_fffffffffffffe6c;
  QObject local_178 [8];
  QObject local_170 [8];
  QObject local_168 [8];
  QObject local_160 [8];
  QObject local_158 [8];
  QObject local_150 [8];
  QObject local_148 [8];
  QObject local_140 [8];
  QObject local_138 [8];
  QObject local_130 [8];
  QObject local_128 [8];
  QObject local_120 [8];
  QObject local_118 [8];
  QObject local_110 [8];
  QObject local_108 [8];
  char *local_100;
  undefined8 local_f8;
  __int64 local_f0;
  undefined *local_e8;
  QWidget *local_e0;
  QActionGroup *local_d8;
  QObject local_d0 [8];
  QWidget *local_c8;
  QWidget *local_c0;
  QWidget *local_b8;
  QWidget *local_b0;
  QIcon local_a8 [8];
  code *local_a0;
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  QWidget *local_80;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_c0 = (QWidget *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_60,"Tools");
  QToolBar::QToolBar((QToolBar *)local_c0,(QString *)&local_60,(QWidget *)param_1);
  QString::~QString((QString *)&local_60);
  pQVar3 = local_c0;
  local_e0 = local_c0;
  local_100 = "MainToolBar";
  local_f8 = 0xb;
  QObject::setObjectName(&local_c0->QObject);
  QToolBar::setMovable((QToolBar *)pQVar3,false);
  local_60 = (code *)0x1800000018;
  QToolBar::setIconSize((QToolBar *)pQVar3,(QSize *)&local_60);
  local_80 = (QWidget *)FUN_140b65d30(0x10);
  QActionGroup::QActionGroup((QActionGroup *)local_80,(QObject *)param_1);
  local_d8 = (QActionGroup *)local_80;
  QActionGroup::setExclusive((QActionGroup *)local_80,true);
  QString::QString((QString *)&local_60,"1");
  QKeySequence::QKeySequence((QKeySequence *)&local_a0,(QString *)&local_60,0);
  QString::QString((QString *)&local_78,"select.svg");
  QString::QString((QString *)&local_98,"Select");
  pQVar6 = (QAction *)
           FUN_140275ab0(&local_e0,&local_d8,&local_98,&local_78,(QKeySequence *)&local_a0);
  QString::~QString((QString *)&local_98);
  QString::~QString((QString *)&local_78);
  QKeySequence::~QKeySequence((QKeySequence *)&local_a0);
  QString::~QString((QString *)&local_60);
  QAction::setChecked(pQVar6,true);
  QString::QString((QString *)&local_60,"2");
  QKeySequence::QKeySequence((QKeySequence *)&local_a0,(QString *)&local_60,0);
  QString::QString((QString *)&local_78,"translate.svg");
  QString::QString((QString *)&local_98,"Move");
  ppvVar7 = (void **)FUN_140275ab0(&local_e0,&local_d8,&local_98,&local_78,(QKeySequence *)&local_a0
                                  );
  QString::~QString((QString *)&local_98);
  QString::~QString((QString *)&local_78);
  QKeySequence::~QKeySequence((QKeySequence *)&local_a0);
  QString::~QString((QString *)&local_60);
  QString::QString((QString *)&local_60,"3");
  QKeySequence::QKeySequence((QKeySequence *)&local_a0,(QString *)&local_60,0);
  QString::QString((QString *)&local_78,"scale.svg");
  QString::QString((QString *)&local_98,"Scale");
  ppvVar8 = (void **)FUN_140275ab0(&local_e0,&local_d8,&local_98,&local_78,(QKeySequence *)&local_a0
                                  );
  QString::~QString((QString *)&local_98);
  QString::~QString((QString *)&local_78);
  QKeySequence::~QKeySequence((QKeySequence *)&local_a0);
  QString::~QString((QString *)&local_60);
  QString::QString((QString *)&local_60,"4");
  QKeySequence::QKeySequence((QKeySequence *)&local_a0,(QString *)&local_60,0);
  QString::QString((QString *)&local_78,"rotate.svg");
  QString::QString((QString *)&local_98,"Rotate");
  local_b8 = (QWidget *)ppvVar8;
  local_80 = (QWidget *)ppvVar7;
  local_b0 = (QWidget *)
             FUN_140275ab0(&local_e0,&local_d8,&local_98,&local_78,(QKeySequence *)&local_a0);
  QString::~QString((QString *)&local_98);
  QString::~QString((QString *)&local_78);
  QKeySequence::~QKeySequence((QKeySequence *)&local_a0);
  QString::~QString((QString *)&local_60);
  pcVar2 = triggered_exref;
  local_60 = triggered_exref;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140275e60;
  *(QWidget **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            (local_178,(void **)pQVar6,(QObject *)&local_60,(void **)param_1,(QSlotObjectBase *)0x0,
             (ConnectionType)puVar9,(int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_178);
  local_60 = pcVar2;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140275ea0;
  *(QWidget **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            (local_170,(void **)local_80,(QObject *)&local_60,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_170);
  local_60 = pcVar2;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140275ee0;
  *(QWidget **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            (local_168,(void **)local_b8,(QObject *)&local_60,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_168);
  local_60 = pcVar2;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140275f20;
  *(QWidget **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            (local_160,(void **)local_b0,(QObject *)&local_60,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_160);
  pQVar3 = local_c0;
  QToolBar::addSeparator((QToolBar *)local_c0);
  local_b8 = (QWidget *)FUN_140b65d30(0x28);
  QWidget::QWidget(local_b8,pQVar3,0);
  local_b0 = (QWidget *)FUN_140b65d30(0x20);
  pQVar10 = local_b8;
  QVBoxLayout::QVBoxLayout((QVBoxLayout *)local_b0,(QWidget *)local_b8);
  pQVar4 = local_b0;
  QLayout::setContentsMargins((QLayout *)local_b0,2,2,2,0);
  (**(code **)(*(longlong *)pQVar4 + 0x60))(pQVar4,1);
  local_c8 = (QWidget *)FUN_140b65d30(0x28);
  QDoubleSpinBox::QDoubleSpinBox((QDoubleSpinBox *)local_c8,(QWidget *)pQVar10);
  pQVar3 = local_c8;
  QDoubleSpinBox::setRange((QDoubleSpinBox *)local_c8,0.0,1000.0);
  QDoubleSpinBox::setValue((QDoubleSpinBox *)pQVar3,1.0);
  QDoubleSpinBox::setSingleStep((QDoubleSpinBox *)pQVar3,0.25);
  QDoubleSpinBox::setDecimals((QDoubleSpinBox *)pQVar3,2);
  QString::QString((QString *)&local_60,"Movement Snapping Increment");
  QWidget::setToolTip(pQVar3,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QString::QString((QString *)&local_60,"Step ");
  QDoubleSpinBox::setPrefix((QDoubleSpinBox *)pQVar3,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QBoxLayout::addWidget((QBoxLayout *)pQVar4,pQVar3,0,0);
  local_80 = (QWidget *)FUN_140b65d30(0x28);
  QDoubleSpinBox::QDoubleSpinBox((QDoubleSpinBox *)local_80,(QWidget *)pQVar10);
  pQVar5 = local_80;
  QDoubleSpinBox::setRange((QDoubleSpinBox *)local_80,1.0,360.0);
  QDoubleSpinBox::setSingleStep((QDoubleSpinBox *)pQVar5,5.0);
  local_f0 = QByteArrayView::lengthHelperCharArray(&DAT_14131f540,3);
  local_e8 = &DAT_14131f540;
  QString::fromUtf8((QString *)&local_60,&local_f0);
  QDoubleSpinBox::setSuffix((QDoubleSpinBox *)pQVar5,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QDoubleSpinBox::setValue((QDoubleSpinBox *)pQVar5,22.5);
  QDoubleSpinBox::setDecimals((QDoubleSpinBox *)pQVar5,1);
  QString::QString((QString *)&local_60,"Rotation Snapping Increment (degrees)");
  QWidget::setToolTip(pQVar5,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QString::QString((QString *)&local_60,"Rot ");
  QDoubleSpinBox::setPrefix((QDoubleSpinBox *)pQVar5,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QBoxLayout::addWidget((QBoxLayout *)pQVar4,pQVar5,0,0);
  pQVar4 = local_c0;
  QToolBar::addWidget((QToolBar *)local_c0,(QWidget *)pQVar10);
  pcVar2 = valueChanged_exref;
  local_60 = valueChanged_exref;
  uStack_58 = 0;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140275f60;
  *(QWidget **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            (local_158,(void **)pQVar3,(QObject *)&local_60,(void **)param_1,(QSlotObjectBase *)0x0,
             (ConnectionType)puVar9,(int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_158);
  local_60 = pcVar2;
  uStack_58 = 0;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140275fa0;
  *(QWidget **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            (local_150,(void **)local_80,(QObject *)&local_60,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_150);
  local_80 = (QWidget *)FUN_140b65d30(0x28);
  QWidget::QWidget(local_80,pQVar4,0);
  local_b8 = (QWidget *)FUN_140b65d30(0x20);
  pQVar5 = local_80;
  QVBoxLayout::QVBoxLayout((QVBoxLayout *)local_b8,(QWidget *)local_80);
  pQVar4 = local_b8;
  QLayout::setContentsMargins((QLayout *)local_b8,2,2,2,0);
  (**(code **)(*(longlong *)pQVar4 + 0x60))(pQVar4,1);
  local_b0 = (QWidget *)FUN_140b65d30(0x28);
  QToolButton::QToolButton((QToolButton *)local_b0,(QWidget *)pQVar5);
  local_c8 = (QWidget *)FUN_140b65d30(0x28);
  QToolButton::QToolButton((QToolButton *)local_c8,(QWidget *)pQVar5);
  QString::QString((QString *)&local_60,"Local");
  pQVar10 = local_b0;
  QAbstractButton::setText((QAbstractButton *)local_b0,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QString::QString((QString *)&local_60,"Global");
  pQVar3 = local_c8;
  QAbstractButton::setText((QAbstractButton *)local_c8,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QAbstractButton::setCheckable((QAbstractButton *)pQVar10,true);
  QAbstractButton::setCheckable((QAbstractButton *)pQVar3,true);
  QAbstractButton::setChecked((QAbstractButton *)pQVar10,true);
  QString::QString((QString *)&local_60,"Local transform space (L)");
  QWidget::setToolTip(pQVar10,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QString::QString((QString *)&local_60,"Global transform space (L)");
  QWidget::setToolTip(pQVar3,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QAbstractButton::setAutoExclusive((QAbstractButton *)pQVar10,true);
  QAbstractButton::setAutoExclusive((QAbstractButton *)pQVar3,true);
  (**(code **)((longlong)pQVar3->QObject + 0x60))(pQVar3,&local_60);
  iVar1 = (int)local_60;
  (**(code **)((longlong)pQVar10->QObject + 0x60))(pQVar10,&local_78);
  if (iVar1 < (int)local_78) {
    iVar1 = (int)local_78;
  }
  QWidget::setFixedWidth(pQVar10,iVar1);
  QWidget::setFixedWidth(pQVar3,iVar1);
  QBoxLayout::addWidget((QBoxLayout *)pQVar4,pQVar10,0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar4,pQVar3,0,0);
  QWidget::setSizePolicy(pQVar5,0);
  QToolBar::addWidget((QToolBar *)local_c0,(QWidget *)pQVar5);
  local_80 = (QWidget *)FUN_140b65d30(0x10);
  QAction::QAction((QAction *)local_80,(QObject *)param_1);
  QString::QString((QString *)&local_60,"L");
  QKeySequence::QKeySequence((QKeySequence *)&local_78,(QString *)&local_60,0);
  pQVar4 = local_80;
  pcVar2 = triggered_exref;
  QAction::setShortcut((QAction *)local_80,(QKeySequence *)&local_78);
  QKeySequence::~QKeySequence((QKeySequence *)&local_78);
  QString::~QString((QString *)&local_60);
  QWidget::addAction(param_1,(QAction *)pQVar4);
  local_60 = pcVar2;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(code **)(puVar9 + 2) = FUN_140275fe0;
  *(QWidget **)(puVar9 + 4) = pQVar10;
  *(QWidget **)(puVar9 + 6) = pQVar3;
  QObject::connectImpl
            (local_148,(void **)pQVar4,(QObject *)&local_60,(void **)param_1,(QSlotObjectBase *)0x0,
             (ConnectionType)puVar9,(int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_148);
  pcVar2 = toggled_exref;
  local_60 = toggled_exref;
  uStack_58 = 0;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140276040;
  *(QWidget **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            (local_140,(void **)pQVar10,(QObject *)&local_60,(void **)param_1,(QSlotObjectBase *)0x0
             ,(ConnectionType)puVar9,(int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_140);
  local_60 = pcVar2;
  uStack_58 = 0;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140276080;
  *(QWidget **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            (local_138,(void **)pQVar3,(QObject *)&local_60,(void **)param_1,(QSlotObjectBase *)0x0,
             (ConnectionType)puVar9,(int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_138);
  pQVar3 = local_c0;
  QToolBar::addSeparator((QToolBar *)local_c0);
  local_80 = (QWidget *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_60,"Add");
  QMenu::QMenu((QMenu *)local_80,(QString *)&local_60,(QWidget *)param_1);
  QString::~QString((QString *)&local_60);
  QString::QString((QString *)&local_60,"Part");
  QString::QString((QString *)&local_78,":/icons/part.png");
  pcVar2 = triggered_exref;
  QIcon::QIcon((QIcon *)&local_98,(QString *)&local_78);
  pQVar4 = local_80;
  pQVar10 = (QWidget *)QMenu::addMenu((QMenu *)local_80,(QIcon *)&local_98,(QString *)&local_60);
  QIcon::~QIcon((QIcon *)&local_98);
  QString::~QString((QString *)&local_78);
  QString::~QString((QString *)&local_60);
  QString::QString((QString *)&local_60,"Box");
  pQVar11 = QWidget::addAction(pQVar10,(QString *)&local_60);
  local_78 = pcVar2;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140271b70;
  *(QWidget **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            ((QObject *)&local_98,(void **)pQVar11,(QObject *)&local_78,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  QString::~QString((QString *)&local_60);
  QString::QString((QString *)&local_60,"Sphere");
  pQVar11 = QWidget::addAction(pQVar10,(QString *)&local_60);
  local_78 = pcVar2;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140271ba0;
  *(QWidget **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            ((QObject *)&local_98,(void **)pQVar11,(QObject *)&local_78,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  QString::~QString((QString *)&local_60);
  QString::QString((QString *)&local_60,"Cylinder");
  pQVar11 = QWidget::addAction(pQVar10,(QString *)&local_60);
  local_78 = pcVar2;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140271bd0;
  *(QWidget **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            ((QObject *)&local_98,(void **)pQVar11,(QObject *)&local_78,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  QString::~QString((QString *)&local_60);
  QString::QString((QString *)&local_60,"Cone");
  pQVar11 = QWidget::addAction(pQVar10,(QString *)&local_60);
  local_78 = pcVar2;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140271c00;
  *(QWidget **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            ((QObject *)&local_98,(void **)pQVar11,(QObject *)&local_78,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  QString::~QString((QString *)&local_60);
  QString::QString((QString *)&local_60,"Wedge");
  pQVar11 = QWidget::addAction(pQVar10,(QString *)&local_60);
  local_78 = pcVar2;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140271c30;
  *(QWidget **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            ((QObject *)&local_98,(void **)pQVar11,(QObject *)&local_78,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  QString::~QString((QString *)&local_60);
  QString::QString((QString *)&local_60,"Light");
  QString::QString((QString *)&local_78,":/icons/light.svg");
  QIcon::QIcon((QIcon *)&local_98,(QString *)&local_78);
  pQVar10 = (QWidget *)QMenu::addMenu((QMenu *)pQVar4,(QIcon *)&local_98,(QString *)&local_60);
  QIcon::~QIcon((QIcon *)&local_98);
  QString::~QString((QString *)&local_78);
  QString::~QString((QString *)&local_60);
  local_78 = inserted_point_light;
  uStack_70 = 0;
  QString::QString((QString *)&local_60,"PointLight");
  pQVar11 = QWidget::addAction(pQVar10,(QString *)&local_60);
  local_98 = triggered_exref;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_78;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_6c,uStack_70);
  QObject::connectImpl
            ((QObject *)&local_a0,(void **)pQVar11,(QObject *)&local_98,(void **)param_1,
             (QSlotObjectBase *)&local_78,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  QString::~QString((QString *)&local_60);
  local_78 = inserted_spot_light;
  uStack_70 = 0;
  QString::QString((QString *)&local_60,"SpotLight");
  pQVar11 = QWidget::addAction(pQVar10,(QString *)&local_60);
  pcVar2 = triggered_exref;
  local_98 = triggered_exref;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_78;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_6c,uStack_70);
  QObject::connectImpl
            ((QObject *)&local_a0,(void **)pQVar11,(QObject *)&local_98,(void **)param_1,
             (QSlotObjectBase *)&local_78,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  QString::~QString((QString *)&local_60);
  local_98 = inserted_spawn_point;
  uStack_90 = 0;
  QString::QString((QString *)&local_60,"Spawn Point");
  QString::QString((QString *)&local_78,":/icons/spawn.png");
  QIcon::QIcon(local_a8,(QString *)&local_78);
  pQVar11 = QWidget::addAction(pQVar4,local_a8,(QString *)&local_60);
  local_a0 = pcVar2;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_98;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_8c,uStack_90);
  QObject::connectImpl
            (local_d0,(void **)pQVar11,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_98,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_d0);
  QIcon::~QIcon(local_a8);
  QString::~QString((QString *)&local_78);
  QString::~QString((QString *)&local_60);
  QString::QString((QString *)&local_60,"Add");
  QString::QString((QString *)&local_78,":/icons/add.svg");
  QIcon::QIcon((QIcon *)&local_98,(QString *)&local_78);
  pQVar11 = QWidget::addAction(pQVar3,(QIcon *)&local_98,(QString *)&local_60);
  QIcon::~QIcon((QIcon *)&local_98);
  QString::~QString((QString *)&local_78);
  QString::~QString((QString *)&local_60);
  QAction::setMenuObject((QAction *)pQVar11,(QObject *)pQVar4);
  local_60 = pcVar2;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140271b70;
  *(QWidget **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            (local_130,(void **)pQVar11,(QObject *)&local_60,(void **)param_1,(QSlotObjectBase *)0x0
             ,(ConnectionType)puVar9,(int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_130);
  pQVar12 = QToolBar::widgetForAction((QToolBar *)pQVar3,pQVar11);
  pQVar13 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)pQVar12);
  if (pQVar13 != (QObject *)0x0) {
    QToolButton::setPopupMode((QToolButton *)pQVar13,1);
    QToolButton::setToolButtonStyle((QToolButton *)pQVar13,3);
  }
  QVar15 = param_1[0x2d37].QPaintDevice;
  QString::QString((QString *)&local_60,":/icons/trash.svg");
  QIcon::QIcon((QIcon *)&local_78,(QString *)&local_60);
  QAction::setIcon((QAction *)QVar15,(QIcon *)&local_78);
  QIcon::~QIcon((QIcon *)&local_78);
  QString::~QString((QString *)&local_60);
  QWidget::addAction(pQVar3,(QAction *)param_1[0x2d37].QPaintDevice);
  pQVar12 = QToolBar::widgetForAction((QToolBar *)pQVar3,(QAction *)param_1[0x2d37].QPaintDevice);
  pQVar13 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)pQVar12);
  if (pQVar13 != (QObject *)0x0) {
    QToolButton::setToolButtonStyle((QToolButton *)pQVar13,3);
  }
  pQVar6 = *(QAction **)&param_1[0x2d38].field_0x8;
  QString::QString((QString *)&local_60,":/icons/script_add.svg");
  QIcon::QIcon((QIcon *)&local_78,(QString *)&local_60);
  QAction::setIcon(pQVar6,(QIcon *)&local_78);
  QIcon::~QIcon((QIcon *)&local_78);
  QString::~QString((QString *)&local_60);
  pQVar6 = *(QAction **)&param_1[0x2d38].field_0x8;
  QString::QString((QString *)&local_60,"Add Script to selected entity");
  QAction::setToolTip(pQVar6,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QWidget::addAction(pQVar3,*(QAction **)&param_1[0x2d38].field_0x8);
  pQVar12 = QToolBar::widgetForAction((QToolBar *)pQVar3,*(QAction **)&param_1[0x2d38].field_0x8);
  pQVar13 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)pQVar12);
  if (pQVar13 != (QObject *)0x0) {
    QToolButton::setToolButtonStyle((QToolButton *)pQVar13,3);
  }
  QString::QString((QString *)&local_60,"Focus");
  QString::QString((QString *)&local_78,":/icons/camera.svg");
  QIcon::QIcon((QIcon *)&local_98,(QString *)&local_78);
  QVar14 = (QObject)QWidget::addAction(pQVar3,(QIcon *)&local_98,(QString *)&local_60);
  param_1[0x2d38].QObject = QVar14;
  QIcon::~QIcon((QIcon *)&local_98);
  QString::~QString((QString *)&local_78);
  QString::~QString((QString *)&local_60);
  QVar14 = param_1[0x2d38].QObject;
  QString::QString((QString *)&local_60,"F");
  QKeySequence::QKeySequence((QKeySequence *)&local_78,(QString *)&local_60,0);
  QAction::setShortcut((QAction *)QVar14,(QKeySequence *)&local_78);
  QKeySequence::~QKeySequence((QKeySequence *)&local_78);
  QString::~QString((QString *)&local_60);
  QVar14 = param_1[0x2d38].QObject;
  QString::QString((QString *)&local_60,"Focus on selected (F)");
  QAction::setToolTip((QAction *)QVar14,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QVar14 = param_1[0x2d38].QObject;
  local_60 = triggered_exref;
  puVar9 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_1402760c0;
  *(QWidget **)(puVar9 + 4) = param_1;
  QObject::connectImpl
            (local_128,(void **)QVar14,(QObject *)&local_60,(void **)param_1,(QSlotObjectBase *)0x0,
             (ConnectionType)puVar9,(int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_128);
  pQVar12 = QToolBar::widgetForAction((QToolBar *)pQVar3,(QAction *)param_1[0x2d38].QObject);
  pQVar13 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)pQVar12);
  if (pQVar13 != (QObject *)0x0) {
    QToolButton::setToolButtonStyle((QToolButton *)pQVar13,3);
  }
  QToolBar::addSeparator((QToolBar *)pQVar3);
  local_80 = (QWidget *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_60,"Play");
  QMenu::QMenu((QMenu *)local_80,(QString *)&local_60,(QWidget *)param_1);
  QString::~QString((QString *)&local_60);
  local_98 = failed_to_start_playtest;
  uStack_90 = 0;
  QString::QString((QString *)&local_60,"F5");
  QKeySequence::QKeySequence((QKeySequence *)local_a8,(QString *)&local_60,0);
  QString::QString((QString *)&local_78,"Play");
  pQVar4 = local_80;
  pQVar11 = QWidget::addAction(local_80,(QString *)&local_78,(QKeySequence *)local_a8);
  local_a0 = triggered_exref;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_98;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_8c,uStack_90);
  QObject::connectImpl
            (local_d0,(void **)pQVar11,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_98,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_d0);
  QString::~QString((QString *)&local_78);
  QKeySequence::~QKeySequence((QKeySequence *)local_a8);
  QString::~QString((QString *)&local_60);
  local_98 = multi_client_playtest_not_yet_supported_start;
  uStack_90 = 0;
  QString::QString((QString *)&local_60,"F8");
  QKeySequence::QKeySequence((QKeySequence *)local_a8,(QString *)&local_60,0);
  QString::QString((QString *)&local_78,"Server && Clients");
  pQVar11 = QWidget::addAction(pQVar4,(QString *)&local_78,(QKeySequence *)local_a8);
  local_a0 = triggered_exref;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_98;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_8c,uStack_90);
  QObject::connectImpl
            (local_d0,(void **)pQVar11,(QObject *)&local_a0,(void **)param_1,
             (QSlotObjectBase *)&local_98,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_d0);
  QString::~QString((QString *)&local_78);
  QKeySequence::~QKeySequence((QKeySequence *)local_a8);
  QString::~QString((QString *)&local_60);
  QString::QString((QString *)&local_60,"Play");
  QString::QString((QString *)&local_78,":/icons/play.svg");
  QIcon::QIcon((QIcon *)&local_98,(QString *)&local_78);
  QVar14 = (QObject)QWidget::addAction(pQVar3,(QIcon *)&local_98,(QString *)&local_60);
  param_1[0x2d3a].QObject = QVar14;
  QIcon::~QIcon((QIcon *)&local_98);
  QString::~QString((QString *)&local_78);
  QString::~QString((QString *)&local_60);
  QVar14 = param_1[0x2d3a].QObject;
  QString::QString((QString *)&local_60,"F5");
  QKeySequence::QKeySequence((QKeySequence *)&local_78,(QString *)&local_60,0);
  QAction::setShortcut((QAction *)QVar14,(QKeySequence *)&local_78);
  QKeySequence::~QKeySequence((QKeySequence *)&local_78);
  QString::~QString((QString *)&local_60);
  QVar14 = param_1[0x2d3a].QObject;
  QString::QString((QString *)&local_60,"Play / Stop (F5)");
  QAction::setToolTip((QAction *)QVar14,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QAction::setMenuObject((QAction *)param_1[0x2d3a].QObject,(QObject *)pQVar4);
  pcVar2 = triggered_exref;
  local_60 = failed_to_start_playtest;
  uStack_58 = 0;
  QVar14 = param_1[0x2d3a].QObject;
  local_78 = triggered_exref;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_60;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_54,uStack_58);
  QObject::connectImpl
            (local_120,(void **)QVar14,(QObject *)&local_78,(void **)param_1,
             (QSlotObjectBase *)&local_60,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_120);
  pQVar12 = QToolBar::widgetForAction((QToolBar *)pQVar3,(QAction *)param_1[0x2d3a].QObject);
  pQVar13 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)pQVar12);
  if (pQVar13 != (QObject *)0x0) {
    QToolButton::setPopupMode((QToolButton *)pQVar13,1);
    QToolButton::setToolButtonStyle((QToolButton *)pQVar13,3);
  }
  QString::QString((QString *)&local_60,"Pause");
  QString::QString((QString *)&local_78,":/icons/pause.svg");
  QIcon::QIcon((QIcon *)&local_98,(QString *)&local_78);
  pQVar11 = QWidget::addAction(pQVar3,(QIcon *)&local_98,(QString *)&local_60);
  *(QAction **)&param_1[0x2d3a].field_0x8 = pQVar11;
  QIcon::~QIcon((QIcon *)&local_98);
  QString::~QString((QString *)&local_78);
  QString::~QString((QString *)&local_60);
  pQVar6 = *(QAction **)&param_1[0x2d3a].field_0x8;
  QString::QString((QString *)&local_60,"F6");
  QKeySequence::QKeySequence((QKeySequence *)&local_78,(QString *)&local_60,0);
  QAction::setShortcut(pQVar6,(QKeySequence *)&local_78);
  QKeySequence::~QKeySequence((QKeySequence *)&local_78);
  QString::~QString((QString *)&local_60);
  pQVar6 = *(QAction **)&param_1[0x2d3a].field_0x8;
  QString::QString((QString *)&local_60,"Pause / Resume (F6)");
  QAction::setToolTip(pQVar6,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QAction::setEnabled(*(QAction **)&param_1[0x2d3a].field_0x8,false);
  local_60 = FUN_140094540;
  uStack_58 = 0;
  ppvVar7 = *(void ***)&param_1[0x2d3a].field_0x8;
  local_78 = pcVar2;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_60;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_54,uStack_58);
  QObject::connectImpl
            (local_118,ppvVar7,(QObject *)&local_78,(void **)param_1,(QSlotObjectBase *)&local_60,
             (ConnectionType)puVar9,(int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_118);
  pQVar12 = QToolBar::widgetForAction((QToolBar *)pQVar3,*(QAction **)&param_1[0x2d3a].field_0x8);
  pQVar13 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)pQVar12);
  if (pQVar13 != (QObject *)0x0) {
    QToolButton::setToolButtonStyle((QToolButton *)pQVar13,3);
  }
  QString::QString((QString *)&local_60,"Step");
  QString::QString((QString *)&local_78,":/icons/step.svg");
  QIcon::QIcon((QIcon *)&local_98,(QString *)&local_78);
  QVar15 = (QPaintDevice)QWidget::addAction(pQVar3,(QIcon *)&local_98,(QString *)&local_60);
  param_1[0x2d3a].QPaintDevice = QVar15;
  QIcon::~QIcon((QIcon *)&local_98);
  QString::~QString((QString *)&local_78);
  QString::~QString((QString *)&local_60);
  QVar15 = param_1[0x2d3a].QPaintDevice;
  QString::QString((QString *)&local_60,"F7");
  QKeySequence::QKeySequence((QKeySequence *)&local_78,(QString *)&local_60,0);
  QAction::setShortcut((QAction *)QVar15,(QKeySequence *)&local_78);
  QKeySequence::~QKeySequence((QKeySequence *)&local_78);
  QString::~QString((QString *)&local_60);
  QVar15 = param_1[0x2d3a].QPaintDevice;
  QString::QString((QString *)&local_60,"Step Forward (F7)");
  QAction::setToolTip((QAction *)QVar15,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QAction::setEnabled((QAction *)param_1[0x2d3a].QPaintDevice,false);
  local_60 = (code *)&LAB_140094590;
  uStack_58 = 0;
  QVar15 = param_1[0x2d3a].QPaintDevice;
  local_78 = pcVar2;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_60;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_54,uStack_58);
  QObject::connectImpl
            (local_110,(void **)QVar15,(QObject *)&local_78,(void **)param_1,
             (QSlotObjectBase *)&local_60,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_110);
  pQVar12 = QToolBar::widgetForAction((QToolBar *)pQVar3,(QAction *)param_1[0x2d3a].QPaintDevice);
  pQVar13 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)pQVar12);
  if (pQVar13 != (QObject *)0x0) {
    QToolButton::setToolButtonStyle((QToolButton *)pQVar13,3);
  }
  QString::QString((QString *)&local_60,"Client");
  QVar14 = (QObject)QWidget::addAction(pQVar3,(QString *)&local_60);
  param_1[0x2d3b].QObject = QVar14;
  QString::~QString((QString *)&local_60);
  QAction::setCheckable((QAction *)param_1[0x2d3b].QObject,true);
  QVar14 = param_1[0x2d3b].QObject;
  QString::QString((QString *)&local_60,"Toggle Client/Server view");
  QAction::setToolTip((QAction *)QVar14,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  QAction::setEnabled((QAction *)param_1[0x2d3b].QObject,false);
  local_60 = view_toggle_not_yet_supported_in_embedded_mod;
  uStack_58 = 0;
  QVar14 = param_1[0x2d3b].QObject;
  local_78 = pcVar2;
  puVar9 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar9 = 1;
  *(undefined1 **)(puVar9 + 2) = &LAB_140085340;
  *(code **)(puVar9 + 4) = local_60;
  *(ulonglong *)(puVar9 + 6) = CONCAT44(uStack_54,uStack_58);
  QObject::connectImpl
            (local_108,(void **)QVar14,(QObject *)&local_78,(void **)param_1,
             (QSlotObjectBase *)&local_60,(ConnectionType)puVar9,
             (int *)((ulonglong)in_stack_fffffffffffffe6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_108);
  pQVar12 = QToolBar::widgetForAction((QToolBar *)pQVar3,(QAction *)param_1[0x2d3b].QObject);
  pQVar13 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)pQVar12);
  if (pQVar13 != (QObject *)0x0) {
    QToolButton::setToolButtonStyle((QToolButton *)pQVar13,3);
  }
  return pQVar3;
}

