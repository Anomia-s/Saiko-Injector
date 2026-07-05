/**
 * Function: u_add_component
 * Address:  14026a840
 * Signature: undefined u_add_component(void)
 * Body size: 1169 bytes
 */


QWidget * u_add_component(undefined8 *param_1,undefined8 param_2,QWidget *param_3)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  QWidget *this;
  undefined8 *puVar5;
  QAction *pQVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  bool bVar11;
  undefined4 in_stack_ffffffffffffff1c;
  QObject local_d0 [8];
  size_t local_c8;
  char *local_c0;
  size_t local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  QWidget *local_78;
  int *local_70;
  code *local_68;
  wchar_t *local_60;
  undefined8 local_58;
  QWidget *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_a8 = param_2;
  local_a0 = param_1;
  this = (QWidget *)FUN_140b65d30(0x28);
  local_68 = (code *)0x0;
  local_60 = L"+ Add Component";
  local_58 = 0xf;
  local_50 = this;
  QString::QString((QString *)&local_98,(QArrayDataPointer<char16_t> *)&local_68);
  QPushButton::QPushButton((QPushButton *)this,(QString *)&local_98,param_3);
  QString::~QString((QString *)&local_98);
  if (local_68 != (code *)0x0) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + -1;
    UNLOCK();
    if (*(int *)local_68 == 0) {
      free(local_68);
    }
  }
  local_68 = (code *)0x0;
  local_60 = L"addSlotBtn";
  local_58 = 10;
  QString::QString((QString *)&local_98,(QArrayDataPointer<char16_t> *)&local_68);
  QObject::doSetObjectName(&local_50->QObject,(QString *)&local_98);
  QString::~QString((QString *)&local_98);
  if (local_68 != (code *)0x0) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + -1;
    UNLOCK();
    if (*(int *)local_68 == 0) {
      free(local_68);
    }
  }
  local_78 = (QWidget *)FUN_140b65d30(0x28);
  QMenu::QMenu((QMenu *)local_78,(QWidget *)local_50);
  local_70 = (int *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_1416b85a8) && (FUN_140b6864c(&DAT_1416b85a8), DAT_1416b85a8 == -1)) {
    atexit(FUN_1402691d0);
    _Init_thread_footer(&DAT_1416b85a8);
  }
  plVar10 = DAT_1416b8598;
  for (plVar8 = DAT_1416b8590; plVar8 != plVar10; plVar8 = plVar8 + 4) {
    cVar4 = FUN_1400b9b40(*local_a0,local_a8,plVar8[1]);
    if (cVar4 == '\0') {
      pcVar1 = *(char **)(*plVar8 + 8);
      if (pcVar1 == (char *)0x0) {
        local_68 = (code *)0x0;
        local_60 = L"Other";
        local_58 = 5;
        QString::QString((QString *)&local_98,(QArrayDataPointer<char16_t> *)&local_68);
        if (local_68 != (code *)0x0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          UNLOCK();
          if (*(int *)local_68 == 0) {
            free(local_68);
          }
        }
      }
      else {
        local_c8 = strlen(pcVar1);
        local_c0 = pcVar1;
        QString::fromUtf8((QString *)&local_98,&local_c8);
      }
      puVar5 = (undefined8 *)FUN_14026af90(&local_70,(QString *)&local_98);
      FUN_14026dc20(puVar5,puVar5[2],plVar8);
      if (((int *)*puVar5 == (int *)0x0) || (1 < *(int *)*puVar5)) {
        FUN_14026df70(puVar5,0,0,0);
      }
      QString::~QString((QString *)&local_98);
    }
  }
  if (local_70 == (int *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)**(undefined8 **)(local_70 + 2);
  }
  do {
    plVar8 = plVar10;
    if (local_70 == (int *)0x0) {
      if (plVar8 == (longlong *)0x0) {
        bVar11 = false;
        goto LAB_14026ac5d;
      }
    }
    else if (plVar8 == *(longlong **)(local_70 + 2)) {
      bVar11 = *(longlong *)(local_70 + 4) != 0;
LAB_14026ac5d:
      QWidget::setEnabled(local_50,bVar11);
      QPushButton::setMenu((QPushButton *)local_50,(QMenu *)local_78);
      piVar3 = local_70;
      if (local_70 != (int *)0x0) {
        LOCK();
        *local_70 = *local_70 + -1;
        UNLOCK();
        if ((*local_70 == 0) && (local_70 != (int *)0x0)) {
          FUN_14026bf90(local_70 + 2,local_70 + 2,*(undefined8 *)(*(longlong *)(local_70 + 2) + 8));
          thunk_FUN_140b68ba8(*(undefined8 *)(piVar3 + 2),0x50);
          thunk_FUN_140b68ba8(piVar3,0x18);
        }
      }
      return local_50;
    }
    QMenu::addSection((QMenu *)local_78,(QString *)(plVar8 + 4));
    puVar5 = (undefined8 *)plVar8[8];
    puVar9 = puVar5 + plVar8[9] * 4;
    for (; puVar5 != puVar9; puVar5 = puVar5 + 4) {
      pcVar1 = *(char **)*puVar5;
      if (pcVar1 == (char *)0x0) {
        local_b8 = 0;
      }
      else {
        local_b8 = strlen(pcVar1);
      }
      local_b0 = pcVar1;
      QString::fromUtf8((QString *)&local_98,&local_b8);
      pQVar6 = QWidget::addAction(local_78,(QString *)&local_98);
      QString::~QString((QString *)&local_98);
      local_98 = *(undefined4 *)puVar5;
      uStack_94 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_90 = *(undefined4 *)(puVar5 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar5 + 0xc);
      local_88 = *(undefined4 *)(puVar5 + 2);
      uStack_84 = *(undefined4 *)((longlong)puVar5 + 0x14);
      uStack_80 = *(undefined4 *)(puVar5 + 3);
      uStack_7c = *(undefined4 *)((longlong)puVar5 + 0x1c);
      local_68 = triggered_exref;
      puVar7 = (undefined4 *)FUN_140b65d30(0x40);
      *puVar7 = 1;
      *(code **)(puVar7 + 2) =
           ldv::editor::GenericAddComponentCmd::GenericAddComponentCmd_Constructor_or_Destructor;
      *(undefined8 **)(puVar7 + 4) = local_a0;
      *(undefined8 *)(puVar7 + 6) = local_a8;
      *(ulonglong *)(puVar7 + 8) = CONCAT44(uStack_94,local_98);
      *(ulonglong *)(puVar7 + 10) = CONCAT44(uStack_8c,uStack_90);
      *(ulonglong *)(puVar7 + 0xc) = CONCAT44(uStack_84,local_88);
      *(ulonglong *)(puVar7 + 0xe) = CONCAT44(uStack_7c,uStack_80);
      QObject::connectImpl
                (local_d0,(void **)pQVar6,(QObject *)&local_68,(void **)pQVar6,
                 (QSlotObjectBase *)0x0,(ConnectionType)puVar7,
                 (int *)CONCAT44(in_stack_ffffffffffffff1c,1),(QMetaObject *)0x0);
      QMetaObject::Connection::~Connection((Connection *)local_d0);
    }
    plVar2 = (longlong *)plVar8[2];
    if (*(char *)(plVar8[2] + 0x19) == '\0') {
      do {
        plVar10 = plVar2;
        plVar2 = (longlong *)*plVar10;
      } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    }
    else {
      do {
        plVar10 = (longlong *)plVar8[1];
        if (*(char *)((longlong)plVar10 + 0x19) != '\0') break;
        bVar11 = plVar8 == (longlong *)plVar10[2];
        plVar8 = plVar10;
      } while (bVar11);
    }
  } while( true );
}

