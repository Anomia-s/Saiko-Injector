/**
 * Function: CDockWidget
 * Address:  14028d8b0
 * Signature: CDockWidget * __thiscall CDockWidget(CDockWidget * this, QObject * param_1, QString * param_2, undefined8 param_3)
 * Body size: 809 bytes
 */


CDockWidget * __thiscall
ads::CDockWidget::CDockWidget
          (CDockWidget *this,QObject *param_1,QString *param_2,undefined8 param_3)

{
  ToolButtonStyle TVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  QToolBar *this_00;
  CDockWidget *pCVar6;
  char cVar7;
  ToolButtonStyle TVar8;
  undefined8 *puVar9;
  ExternalRefCountData *pEVar10;
  undefined8 uVar11;
  QObject local_58 [8];
  int local_50;
  int local_4c;
  longlong *local_48;
  int *local_40;
  QBoxLayout *local_38;
  CDockWidget *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  QFrame::QFrame((QFrame *)this,param_3);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_30 = this;
  puVar9 = (undefined8 *)FUN_140b65d30(200);
  *puVar9 = local_30;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *(undefined4 *)(puVar9 + 4) = 0x227;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  *(undefined8 *)((longlong)puVar9 + 0x41) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x49) = 0;
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  *(undefined4 *)(puVar9 + 0xd) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x6c) = 0x1000000003;
  *(undefined8 *)((longlong)puVar9 + 0x74) = 0x1800000010;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = 0x18;
  *(undefined1 *)(puVar9 + 0x10) = 0;
  puVar9[0x11] = 0;
  puVar9[0x12] = 0;
  *(undefined8 *)((longlong)puVar9 + 0x94) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x9c) = 0;
  puVar9[0x15] = 0;
  puVar9[0x16] = 0;
  *(undefined8 *)((longlong)puVar9 + 0xb4) = 0;
  *(undefined8 *)((longlong)puVar9 + 0xbc) = 0;
  (local_30->CDockWidget_data).offset_0x10 = (longlong)puVar9;
  if (param_1 == (QObject *)0x0) {
    puVar9[5] = 0;
    puVar9[6] = 0;
  }
  else {
    pEVar10 = QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
    piVar2 = (int *)puVar9[5];
    puVar9[5] = pEVar10;
    puVar9[6] = param_1;
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        FUN_140b68ba8();
      }
    }
  }
  local_38 = (QBoxLayout *)FUN_140b65d30(0x20);
  QBoxLayout::QBoxLayout(local_38,2,(QWidget *)0x0);
  *(QBoxLayout **)((local_30->CDockWidget_data).offset_0x10 + 8) = local_38;
  QLayout::setContentsMargins(*(QLayout **)((local_30->CDockWidget_data).offset_0x10 + 8),0,0,0,0);
  plVar3 = *(longlong **)((local_30->CDockWidget_data).offset_0x10 + 8);
  (**(code **)(*plVar3 + 0x60))(plVar3,0);
  QWidget::setLayout((QWidget *)local_30,*(QLayout **)((local_30->CDockWidget_data).offset_0x10 + 8)
                    );
  QWidget::setWindowTitle((QWidget *)local_30,param_2);
  QObject::doSetObjectName((QObject *)local_30,param_2);
  lVar4 = (local_30->CDockWidget_data).offset_0x10;
  lVar5 = *(longlong *)(lVar4 + 0x28);
  if (lVar5 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
    if (lVar4 != 0 && *(int *)(lVar5 + 4) != 0) {
      FUN_140278710(lVar4,&local_48);
      goto LAB_14028da70;
    }
  }
  FUN_140566af0(&local_48);
LAB_14028da70:
  pCVar6 = local_30;
  uVar11 = (**(code **)(*local_48 + 8))(local_48,local_30);
  *(undefined8 *)((pCVar6->CDockWidget_data).offset_0x10 + 0x18) = uVar11;
  if (local_40 != (int *)0x0) {
    LOCK();
    piVar2 = local_40 + 1;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(local_40 + 2))(local_40);
    }
    LOCK();
    *local_40 = *local_40 + -1;
    UNLOCK();
    if (*local_40 == 0) {
      FUN_140b68ba8(local_40);
    }
  }
  local_38 = (QBoxLayout *)FUN_140b65d30(0x10);
  pCVar6 = local_30;
  QAction::QAction((QAction *)local_38,param_2,(QObject *)local_30);
  *(QBoxLayout **)((pCVar6->CDockWidget_data).offset_0x10 + 0x48) = local_38;
  QAction::setCheckable(*(QAction **)((pCVar6->CDockWidget_data).offset_0x10 + 0x48),true);
  QObject::connect(local_58,*(char **)((local_30->CDockWidget_data).offset_0x10 + 0x48),
                   (QObject *)"2triggered(bool)",(char *)local_30,0x41396b3d);
  QMetaObject::Connection::~Connection((Connection *)local_58);
  lVar4 = (local_30->CDockWidget_data).offset_0x10;
  this_00 = *(QToolBar **)(lVar4 + 0x60);
  if (this_00 != (QToolBar *)0x0) {
    plVar3 = *(longlong **)(lVar4 + 0x70);
    local_48 = plVar3;
    QToolBar::iconSize(this_00);
    if ((local_50 != (int)plVar3) || (local_4c != (int)((ulonglong)plVar3 >> 0x20))) {
      QToolBar::setIconSize
                (*(QToolBar **)((local_30->CDockWidget_data).offset_0x10 + 0x60),(QSize *)&local_48)
      ;
    }
    lVar4 = (local_30->CDockWidget_data).offset_0x10;
    TVar1 = *(ToolButtonStyle *)(lVar4 + 0x68);
    TVar8 = QToolBar::toolButtonStyle(*(QToolBar **)(lVar4 + 0x60));
    if (TVar1 != TVar8) {
      QToolBar::setToolButtonStyle
                (*(QToolBar **)((local_30->CDockWidget_data).offset_0x10 + 0x60),TVar1);
    }
  }
  cVar7 = FUN_1402765c0(0x200000);
  if (cVar7 != '\0') {
    QWidget::setFocusPolicy((QWidget *)local_30,2);
  }
  cVar7 = FUN_1402765c0(0x40000000);
  if (cVar7 != '\0') {
    QWidget::winId((QWidget *)local_30);
  }
  return local_30;
}

