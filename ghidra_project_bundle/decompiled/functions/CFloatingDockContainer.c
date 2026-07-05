/**
 * Function: CFloatingDockContainer
 * Address:  14056f580
 * Signature: CFloatingDockContainer * __thiscall CFloatingDockContainer(CFloatingDockContainer * this, CDockContainerWidget * param_1)
 * Body size: 522 bytes
 */


CFloatingDockContainer * __thiscall
ads::CFloatingDockContainer::CFloatingDockContainer
          (CFloatingDockContainer *this,CDockContainerWidget *param_1)

{
  int *piVar1;
  CDockContainerWidget *pCVar2;
  CFloatingDockContainer *pCVar3;
  char cVar4;
  undefined8 *puVar5;
  ExternalRefCountData *pEVar6;
  QObject local_48 [8];
  QObject local_40 [8];
  CDockContainerWidget *local_38;
  CFloatingDockContainer *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  QWidget::QWidget((QWidget *)this,param_1,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_30 = this;
  puVar5 = (undefined8 *)FUN_140b65d30(0x58);
  *puVar5 = local_30;
  DAT_1416f299c = DAT_1416f299c + 1;
  *(int *)(puVar5 + 2) = DAT_1416f299c;
  puVar5[3] = 0;
  puVar5[4] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x2c) = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x41) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x49) = 0;
  *(undefined2 *)((longlong)puVar5 + 0x51) = 1;
  (local_30->CFloatingDockContainer_data).offset_0x0 = (longlong)puVar5;
  if (param_1 == (CDockContainerWidget *)0x0) {
    puVar5[3] = 0;
    puVar5[4] = 0;
  }
  else {
    pEVar6 = QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)param_1);
    piVar1 = (int *)puVar5[3];
    puVar5[3] = pEVar6;
    puVar5[4] = param_1;
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_140b68ba8();
      }
    }
  }
  local_38 = (CDockContainerWidget *)FUN_140b65d30(0x30);
  pCVar3 = local_30;
  CDockContainerWidget::CDockContainerWidget(local_38,param_1,local_30);
  *(CDockContainerWidget **)((pCVar3->CFloatingDockContainer_data).offset_0x0 + 8) = local_38;
  QObject::connect(local_48,*(char **)((pCVar3->CFloatingDockContainer_data).offset_0x0 + 8),
                   (QObject *)"2dockAreasAdded()",(char *)pCVar3,0x41399d9a);
  QMetaObject::Connection::~Connection((Connection *)local_48);
  QObject::connect(local_40,*(char **)((local_30->CFloatingDockContainer_data).offset_0x0 + 8),
                   (QObject *)"2dockAreasRemoved()",(char *)local_30,0x41399d9a);
  QMetaObject::Connection::~Connection((Connection *)local_40);
  QWidget::setWindowFlags((QWidget *)local_30,0x8008001);
  local_38 = (CDockContainerWidget *)FUN_140b65d30(0x20);
  QBoxLayout::QBoxLayout((QBoxLayout *)local_38,2,(QWidget *)0x0);
  pCVar2 = local_38;
  QLayout::setContentsMargins((QLayout *)local_38,0,0,0,0);
  (**(code **)(*(longlong *)pCVar2 + 0x60))(pCVar2,0);
  QWidget::setLayout((QWidget *)local_30,(QLayout *)pCVar2);
  QBoxLayout::addWidget
            ((QBoxLayout *)pCVar2,
             *(undefined8 *)((local_30->CFloatingDockContainer_data).offset_0x0 + 8),0,0);
  cVar4 = FUN_1402765c0(0x40000000);
  if (cVar4 != '\0') {
    QWidget::winId((QWidget *)local_30);
  }
  FUN_140278840(param_1,local_30);
  return local_30;
}

