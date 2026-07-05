/**
 * Function: open_in_file_manager
 * Address:  1405ac3b0
 * Signature: undefined open_in_file_manager(void)
 * Body size: 3309 bytes
 */


QWidget * open_in_file_manager(QWidget *param_1,longlong param_2,QAbstractProxyModel *param_3)

{
  QFileInfo QVar1;
  code *pcVar2;
  QFileInfo QVar3;
  QAbstractItemModel *pQVar4;
  QObject *pQVar5;
  QFileInfo *this;
  QAction *pQVar6;
  undefined4 *puVar7;
  QWidget *pQVar8;
  undefined4 in_stack_fffffffffffffe8c;
  code *local_158 [3];
  QString local_140 [24];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  QIcon local_108 [8];
  QObject local_100 [8];
  QString local_f8 [24];
  code *local_e0;
  code *local_d8 [3];
  code *local_c0;
  code *local_b8;
  code *pcStack_b0;
  QWidget *local_a8;
  QWidget *local_a0;
  QString QStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  QFileInfo QStack_88;
  undefined7 uStack_87;
  code *local_80;
  code *pcStack_78;
  code *local_70;
  QString local_68 [31];
  QFileInfo local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_a8 = (QWidget *)FUN_140b65d30(0x28);
  QMenu::QMenu((QMenu *)local_a8,param_1);
  local_c0 = *(code **)(param_1 + 0x28);
  QString::QString(local_140,(QString *)(param_1 + 0x30));
  pQVar8 = local_a8;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    FUN_1405ad8a0(local_a8,param_1,local_140);
    FUN_1405ada00(pQVar8,param_1,local_140);
    QMenu::addSeparator((QMenu *)pQVar8);
    QString::QString((QString *)&local_a0,"Refresh");
    QString::QString((QString *)&local_128,":/icons/refresh.png");
    QIcon::QIcon((QIcon *)local_68,(QString *)&local_128);
    pQVar6 = QWidget::addAction(pQVar8,(QIcon *)local_68,(QString *)&local_a0);
    local_158[0] = triggered_exref;
    puVar7 = (undefined4 *)FUN_140b65d30(0x18);
    *puVar7 = 1;
    *(undefined1 **)(puVar7 + 2) = &LAB_1405ae820;
    *(QWidget **)(puVar7 + 4) = param_1;
    QObject::connectImpl
              ((QObject *)local_f8,(void **)pQVar6,(QObject *)local_158,(void **)pQVar6,
               (QSlotObjectBase *)0x0,(ConnectionType)puVar7,
               (int *)CONCAT44(in_stack_fffffffffffffe8c,1),(QMetaObject *)0x0);
    QMetaObject::Connection::~Connection((Connection *)local_f8);
    QIcon::~QIcon((QIcon *)local_68);
    QString::~QString((QString *)&local_128);
    QString::~QString((QString *)&local_a0);
    goto LAB_1405ad07c;
  }
  puVar7 = *(undefined4 **)(param_2 + 8);
  local_118 = *(undefined8 *)(puVar7 + 4);
  local_128 = *puVar7;
  uStack_124 = puVar7[1];
  uStack_120 = puVar7[2];
  uStack_11c = puVar7[3];
  (**(code **)((longlong)(param_3->QAbstractItemModel).QObject + 0x188))
            (param_3,local_158,(QString *)&local_128);
  pQVar8 = local_a8;
  pQVar4 = QAbstractProxyModel::sourceModel(param_3);
  pQVar5 = QMetaObject::cast((QMetaObject *)&DAT_140de15f0,(QObject *)pQVar4);
  if (pQVar5 == (QObject *)0x0) goto LAB_1405ad07c;
  this = (QFileInfo *)FUN_1402ce290(pQVar5,(ulonglong)local_158[0] & 0xffffffff);
  QFileInfo::absoluteFilePath(this);
  local_49 = (QFileInfo)QFileInfo::isDir(this);
  QVar1 = this[0x10];
  local_a0 = param_1;
  if ((bool)local_49) {
    QString::QString(&QStack_98,local_f8);
    QString::QString(local_68,"Open");
    pQVar6 = QWidget::addAction(pQVar8,local_68);
    local_d8[0] = triggered_exref;
    puVar7 = (undefined4 *)FUN_140b65d30(0x30);
    *puVar7 = 1;
    *(code **)(puVar7 + 2) = FUN_1405ae850;
    *(QWidget **)(puVar7 + 4) = local_a0;
    QString::QString((QString *)(puVar7 + 6),&QStack_98);
    QObject::connectImpl
              ((QObject *)&local_b8,(void **)pQVar6,(QObject *)local_d8,(void **)pQVar6,
               (QSlotObjectBase *)0x0,(ConnectionType)puVar7,
               (int *)CONCAT44(in_stack_fffffffffffffe8c,1),(QMetaObject *)0x0);
    QMetaObject::Connection::~Connection((Connection *)&local_b8);
    QString::~QString(local_68);
    QString::~QString(&QStack_98);
    pQVar8 = local_a8;
    QMenu::addSeparator((QMenu *)local_a8);
    FUN_1405ad8a0(pQVar8,param_1,local_f8);
    FUN_1405ada00(pQVar8,param_1,local_f8);
  }
  else {
    local_b8 = *(code **)(this + 8);
    pcStack_b0 = *(code **)(this + 0x10);
    QVar3 = this[0x18];
    QStack_98 = SUB81(local_b8,0);
    uStack_97 = (undefined7)((ulonglong)local_b8 >> 8);
    uStack_90 = SUB81(pcStack_b0,0);
    uStack_8f = (undefined7)((ulonglong)pcStack_b0 >> 8);
    QStack_88 = QVar3;
    QString::QString((QString *)&local_80,local_f8);
    QString::QString(local_68,"Open");
    pQVar6 = QWidget::addAction(pQVar8,local_68);
    local_d8[0] = triggered_exref;
    puVar7 = (undefined4 *)FUN_140b65d30(0x48);
    *puVar7 = 1;
    *(code **)(puVar7 + 2) = FUN_1405ae8a0;
    *(QWidget **)(puVar7 + 4) = local_a0;
    *(ulonglong *)(puVar7 + 6) = CONCAT71(uStack_97,QStack_98);
    *(ulonglong *)((longlong)puVar7 + 0x19) = CONCAT17(uStack_90,uStack_97);
    *(ulonglong *)((longlong)puVar7 + 0x21) = CONCAT17(QStack_88,uStack_8f);
    QString::QString((QString *)(puVar7 + 0xc),(QString *)&local_80);
    QObject::connectImpl
              ((QObject *)&local_e0,(void **)pQVar6,(QObject *)local_d8,(void **)pQVar6,
               (QSlotObjectBase *)0x0,(ConnectionType)puVar7,
               (int *)CONCAT44(in_stack_fffffffffffffe8c,1),(QMetaObject *)0x0);
    QMetaObject::Connection::~Connection((Connection *)&local_e0);
    QString::~QString(local_68);
    QString::~QString((QString *)&local_80);
    if ((local_c0 == (code *)0x0) || (QVar1 != (QFileInfo)0x0)) {
      pQVar8 = local_a8;
      if (QVar1 == (QFileInfo)0x0) goto LAB_1405ac93e;
    }
    else {
      local_a0 = param_1;
      QString::QString(&QStack_98,local_f8);
      local_80 = local_c0;
      QString::QString(local_68,"Import as Asset");
      pQVar8 = local_a8;
      QString::QString((QString *)local_d8,":/icons/add.svg");
      QIcon::QIcon(local_108,(QString *)local_d8);
      pQVar6 = QWidget::addAction(pQVar8,local_108,local_68);
      local_e0 = triggered_exref;
      puVar7 = (undefined4 *)FUN_140b65d30(0x38);
      *puVar7 = 1;
      *(code **)(puVar7 + 2) = FUN_1405ae920;
      *(QWidget **)(puVar7 + 4) = local_a0;
      QString::QString((QString *)(puVar7 + 6),&QStack_98);
      *(code **)(puVar7 + 0xc) = local_80;
      QObject::connectImpl
                (local_100,(void **)pQVar6,(QObject *)&local_e0,(void **)pQVar6,
                 (QSlotObjectBase *)0x0,(ConnectionType)puVar7,
                 (int *)CONCAT44(in_stack_fffffffffffffe8c,1),(QMetaObject *)0x0);
      QMetaObject::Connection::~Connection((Connection *)local_100);
      QIcon::~QIcon(local_108);
      QString::~QString((QString *)local_d8);
      QString::~QString(local_68);
      QString::~QString(&QStack_98);
LAB_1405ac93e:
      pQVar8 = local_a8;
      QFileInfo::QFileInfo((QFileInfo *)local_68,local_f8);
      QFileInfo::suffix((QFileInfo *)local_68);
      QVar3 = (QFileInfo)FUN_1405adbf0(&local_a0);
      QString::~QString((QString *)&local_a0);
      QFileInfo::~QFileInfo((QFileInfo *)local_68);
    }
    if ((local_c0 != (code *)0x0) && (QVar3 == (QFileInfo)0x1)) {
      local_a0 = param_1;
      QString::QString(&QStack_98,local_f8);
      local_80 = local_b8;
      pcStack_78 = pcStack_b0;
      local_70 = local_c0;
      QString::QString(local_68,"Insert into Scene");
      pQVar6 = QWidget::addAction(pQVar8,local_68);
      local_d8[0] = triggered_exref;
      puVar7 = (undefined4 *)FUN_140b65d30(0x48);
      *puVar7 = 1;
      *(code **)(puVar7 + 2) = FUN_1405aec50;
      *(QWidget **)(puVar7 + 4) = local_a0;
      QString::QString((QString *)(puVar7 + 6),&QStack_98);
      *(code **)(puVar7 + 0xc) = local_80;
      *(code **)(puVar7 + 0xe) = pcStack_78;
      *(code **)(puVar7 + 0x10) = local_70;
      QObject::connectImpl
                ((QObject *)&local_e0,(void **)pQVar6,(QObject *)local_d8,(void **)pQVar6,
                 (QSlotObjectBase *)0x0,(ConnectionType)puVar7,
                 (int *)CONCAT44(in_stack_fffffffffffffe8c,1),(QMetaObject *)0x0);
      QMetaObject::Connection::~Connection((Connection *)&local_e0);
      QString::~QString(local_68);
      QString::~QString(&QStack_98);
      pQVar8 = local_a8;
    }
  }
  QMenu::addSeparator((QMenu *)pQVar8);
  local_a0 = param_1;
  QString::QString(&QStack_98,local_f8);
  local_80 = (code *)CONCAT71(local_80._1_7_,QVar1);
  pcStack_78 = local_c0;
  QString::QString(local_68,"Rename\tF2");
  pQVar6 = QWidget::addAction(pQVar8,local_68);
  pcVar2 = triggered_exref;
  local_d8[0] = triggered_exref;
  puVar7 = (undefined4 *)FUN_140b65d30(0x40);
  *puVar7 = 1;
  *(code **)(puVar7 + 2) = failed_to_rename_1;
  *(QWidget **)(puVar7 + 4) = local_a0;
  QString::QString((QString *)(puVar7 + 6),&QStack_98);
  *(code **)(puVar7 + 0xc) = local_80;
  *(code **)(puVar7 + 0xe) = pcStack_78;
  QObject::connectImpl
            ((QObject *)&local_b8,(void **)pQVar6,(QObject *)local_d8,(void **)pQVar6,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar7,
             (int *)CONCAT44(in_stack_fffffffffffffe8c,1),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b8);
  QString::~QString(local_68);
  QString::~QString(&QStack_98);
  local_a0 = param_1;
  QString::QString(&QStack_98,local_f8);
  local_80 = (code *)CONCAT71(local_80._1_7_,QVar1);
  pcStack_78 = local_c0;
  QString::QString(local_68,"Move to Trash\tDel");
  QString::QString((QString *)local_d8,":/icons/trash.svg");
  QIcon::QIcon((QIcon *)local_100,(QString *)local_d8);
  pQVar6 = QWidget::addAction(local_a8,(QIcon *)local_100,local_68);
  local_b8 = pcVar2;
  puVar7 = (undefined4 *)FUN_140b65d30(0x40);
  *puVar7 = 1;
  *(code **)(puVar7 + 2) = move_to_trash;
  *(QWidget **)(puVar7 + 4) = local_a0;
  QString::QString((QString *)(puVar7 + 6),&QStack_98);
  *(code **)(puVar7 + 0xc) = local_80;
  *(code **)(puVar7 + 0xe) = pcStack_78;
  QObject::connectImpl
            ((QObject *)&local_e0,(void **)pQVar6,(QObject *)&local_b8,(void **)pQVar6,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar7,
             (int *)CONCAT44(in_stack_fffffffffffffe8c,1),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_e0);
  QIcon::~QIcon((QIcon *)local_100);
  QString::~QString((QString *)local_d8);
  QString::~QString(local_68);
  QString::~QString(&QStack_98);
  pQVar8 = local_a8;
  if (local_49 == (QFileInfo)0x0) {
    local_a0 = param_1;
    QString::QString(&QStack_98,local_f8);
    QString::QString(local_68,"Duplicate");
    pQVar6 = QWidget::addAction(pQVar8,local_68);
    local_d8[0] = pcVar2;
    puVar7 = (undefined4 *)FUN_140b65d30(0x30);
    *puVar7 = 1;
    *(code **)(puVar7 + 2) = failed_to_duplicate_1;
    *(QWidget **)(puVar7 + 4) = local_a0;
    QString::QString((QString *)(puVar7 + 6),&QStack_98);
    QObject::connectImpl
              ((QObject *)&local_b8,(void **)pQVar6,(QObject *)local_d8,(void **)pQVar6,
               (QSlotObjectBase *)0x0,(ConnectionType)puVar7,
               (int *)CONCAT44(in_stack_fffffffffffffe8c,1),(QMetaObject *)0x0);
    QMetaObject::Connection::~Connection((Connection *)&local_b8);
    QString::~QString(local_68);
    QString::~QString(&QStack_98);
  }
  QMenu::addSeparator((QMenu *)pQVar8);
  QString::QString((QString *)&local_a0,local_f8);
  QStack_88 = SUB81(local_c0,0);
  uStack_87 = (undefined7)((ulonglong)local_c0 >> 8);
  QString::QString(local_68,"Copy Relative Path");
  pQVar6 = QWidget::addAction(pQVar8,local_68);
  local_d8[0] = pcVar2;
  puVar7 = (undefined4 *)FUN_140b65d30(0x30);
  *puVar7 = 1;
  *(code **)(puVar7 + 2) = FUN_1405b0530;
  QString::QString((QString *)(puVar7 + 4),(QString *)&local_a0);
  *(ulonglong *)(puVar7 + 10) = CONCAT71(uStack_87,QStack_88);
  QObject::connectImpl
            ((QObject *)&local_b8,(void **)pQVar6,(QObject *)local_d8,(void **)pQVar6,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar7,
             (int *)CONCAT44(in_stack_fffffffffffffe8c,1),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b8);
  QString::~QString(local_68);
  QString::~QString((QString *)&local_a0);
  QString::QString((QString *)&local_a0,local_f8);
  QString::QString(local_68,"Copy Absolute Path");
  pQVar6 = QWidget::addAction(pQVar8,local_68);
  local_d8[0] = pcVar2;
  puVar7 = (undefined4 *)FUN_140b65d30(0x28);
  *puVar7 = 1;
  *(code **)(puVar7 + 2) = FUN_1405b0770;
  QString::QString((QString *)(puVar7 + 4),(QString *)&local_a0);
  QObject::connectImpl
            ((QObject *)&local_b8,(void **)pQVar6,(QObject *)local_d8,(void **)pQVar6,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar7,
             (int *)CONCAT44(in_stack_fffffffffffffe8c,1),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b8);
  QString::~QString(local_68);
  QString::~QString((QString *)&local_a0);
  QMenu::addSeparator((QMenu *)pQVar8);
  QString::QString((QString *)&local_a0,local_f8);
  QStack_88 = local_49;
  QString::QString(local_68,"Open in File Manager");
  pQVar6 = QWidget::addAction(pQVar8,local_68);
  local_d8[0] = pcVar2;
  puVar7 = (undefined4 *)FUN_140b65d30(0x30);
  *puVar7 = 1;
  *(code **)(puVar7 + 2) = FUN_1405b07d0;
  QString::QString((QString *)(puVar7 + 4),(QString *)&local_a0);
  *(QFileInfo *)(puVar7 + 10) = QStack_88;
  QObject::connectImpl
            ((QObject *)&local_b8,(void **)pQVar6,(QObject *)local_d8,(void **)pQVar6,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar7,
             (int *)CONCAT44(in_stack_fffffffffffffe8c,1),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)&local_b8);
  QString::~QString(local_68);
  QString::~QString((QString *)&local_a0);
  QString::~QString(local_f8);
LAB_1405ad07c:
  QString::~QString(local_140);
  return pQVar8;
}

