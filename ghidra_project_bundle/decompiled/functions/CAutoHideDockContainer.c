/**
 * Function: CAutoHideDockContainer
 * Address:  140571140
 * Signature: CAutoHideDockContainer * __thiscall CAutoHideDockContainer(CAutoHideDockContainer * this, longlong param_1, uint param_2, undefined8 param_3)
 * Body size: 1058 bytes
 */


CAutoHideDockContainer * __thiscall
ads::CAutoHideDockContainer::CAutoHideDockContainer
          (CAutoHideDockContainer *this,longlong param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  CAutoHideDockContainer *pCVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  QObject *pQVar10;
  ExternalRefCountData *pEVar11;
  undefined4 *puVar12;
  void **ppvVar13;
  QSlotObjectBase *pQVar14;
  ulonglong uVar15;
  uint in_stack_ffffffffffffff5c;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  QObject local_70 [8];
  undefined1 *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  CDockAreaWidget *local_48;
  CAutoHideDockContainer *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  QFrame::QFrame((QFrame *)this,param_3,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_40 = this;
  puVar7 = (undefined8 *)FUN_140b65d30(0x50);
  *puVar7 = local_40;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 3) = 4;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0xffffffffffffffff;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0xffffffffffffffff;
  (local_40->CAutoHideDockContainer_data).offset_0x10 = (longlong)puVar7;
  QWidget::hide((QWidget *)local_40);
  *(uint *)((local_40->CAutoHideDockContainer_data).offset_0x10 + 0x18) = param_2;
  lVar2 = (local_40->CAutoHideDockContainer_data).offset_0x10;
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    lVar8 = FUN_14028d1d0();
    if (lVar8 != 0) {
      uVar9 = FUN_14028d1d0(*(undefined8 *)(lVar2 + 0x10));
      FUN_140278710(uVar9,(QObject *)&local_58);
      goto LAB_140571211;
    }
  }
  FUN_140566af0((QObject *)&local_58);
LAB_140571211:
  pQVar10 = (QObject *)(**(code **)(*(longlong *)local_58 + 0x10))(local_58,0);
  lVar2 = (local_40->CAutoHideDockContainer_data).offset_0x10;
  if (pQVar10 == (QObject *)0x0) {
    pEVar11 = (ExternalRefCountData *)0x0;
  }
  else {
    pEVar11 = QtSharedPointer::ExternalRefCountData::getAndRef(pQVar10);
  }
  piVar3 = *(int **)(lVar2 + 0x38);
  *(ExternalRefCountData **)(lVar2 + 0x38) = pEVar11;
  *(QObject **)(lVar2 + 0x40) = pQVar10;
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      FUN_140b68ba8();
    }
  }
  piVar3 = (int *)CONCAT44(uStack_4c,local_50);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(piVar3 + 2))(piVar3);
    }
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      FUN_140b68ba8(piVar3);
    }
  }
  local_68 = &LAB_1405716b0;
  uStack_60 = 0;
  lVar2 = (local_40->CAutoHideDockContainer_data).offset_0x10;
  lVar8 = *(longlong *)(lVar2 + 0x38);
  if ((lVar8 == 0) || (*(int *)(lVar8 + 4) == 0)) {
    ppvVar13 = (void **)0x0;
  }
  else {
    ppvVar13 = *(void ***)(lVar2 + 0x40);
  }
  local_58 = pressed_exref;
  local_50 = 0;
  puVar12 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar12 = 1;
  *(undefined1 **)(puVar12 + 2) = &LAB_140085340;
  *(undefined1 **)(puVar12 + 4) = local_68;
  *(ulonglong *)(puVar12 + 6) = CONCAT44(uStack_5c,uStack_60);
  pQVar14 = (QSlotObjectBase *)&local_68;
  QObject::connectImpl
            (local_70,ppvVar13,(QObject *)&local_58,&local_40->vftablePtr,pQVar14,
             (ConnectionType)puVar12,(int *)((ulonglong)in_stack_ffffffffffffff5c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_70);
  local_48 = (CDockAreaWidget *)FUN_140b65d30(0x30);
  uVar9 = FUN_14028d1d0(param_1);
  CDockAreaWidget::CDockAreaWidget(local_48,uVar9,param_3);
  *(CDockAreaWidget **)((local_40->CAutoHideDockContainer_data).offset_0x10 + 8) = local_48;
  local_90 = "autoHideDockArea";
  local_88 = 0x10;
  QObject::setObjectName
            (*(QObject **)((local_40->CAutoHideDockContainer_data).offset_0x10 + 8),&local_90);
  FUN_140573970(*(undefined8 *)((local_40->CAutoHideDockContainer_data).offset_0x10 + 8));
  local_80 = "autoHideDockContainer";
  local_78 = 0x15;
  QObject::setObjectName((QObject *)local_40,&local_80);
  local_48 = (CDockAreaWidget *)FUN_140b65d30(0x20);
  QBoxLayout::QBoxLayout((QBoxLayout *)local_48,(uint)(param_2 - 3 < 0xfffffffe) * 2,(QWidget *)0x0)
  ;
  *(CDockAreaWidget **)((local_40->CAutoHideDockContainer_data).offset_0x10 + 0x20) = local_48;
  uVar15 = (ulonglong)pQVar14 & 0xffffffff00000000;
  QLayout::setContentsMargins
            (*(QLayout **)((local_40->CAutoHideDockContainer_data).offset_0x10 + 0x20),0,0,0,0);
  plVar4 = *(longlong **)((local_40->CAutoHideDockContainer_data).offset_0x10 + 0x20);
  (**(code **)(*plVar4 + 0x60))(plVar4,0);
  QWidget::setLayout((QWidget *)local_40,
                     *(QLayout **)((local_40->CAutoHideDockContainer_data).offset_0x10 + 0x20));
  local_48 = (CDockAreaWidget *)FUN_140b65d30(0x30);
  pCVar5 = local_40;
  uVar6 = 2;
  if (param_2 < 4) {
    uVar6 = *(undefined4 *)(&DAT_1411f06f8 + (ulonglong)param_2 * 4);
  }
  CResizeHandle::CResizeHandle((CResizeHandle *)local_48,uVar6,(longlong)local_40);
  *(CDockAreaWidget **)((pCVar5->CAutoHideDockContainer_data).offset_0x10 + 0x28) = local_48;
  FUN_1405991d0(*(undefined8 *)((pCVar5->CAutoHideDockContainer_data).offset_0x10 + 0x28),0x40);
  uVar6 = FUN_1402765c0(8);
  FUN_1405995a0(*(undefined8 *)((local_40->CAutoHideDockContainer_data).offset_0x10 + 0x28),uVar6);
  lVar2 = (local_40->CAutoHideDockContainer_data).offset_0x10;
  lVar8 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x20);
  *(ulonglong *)(lVar2 + 0x30) =
       CONCAT44((*(int *)(lVar8 + 0x20) - *(int *)(lVar8 + 0x18)) + 1,
                (*(int *)(lVar8 + 0x1c) - *(int *)(lVar8 + 0x14)) + 1);
  lVar2 = *(longlong *)(param_1 + 0x20);
  *(ulonglong *)((local_40->CAutoHideDockContainer_data).offset_0x10 + 0x48) =
       CONCAT44((*(int *)(lVar2 + 0x20) - *(int *)(lVar2 + 0x18)) + 1,
                (*(int *)(lVar2 + 0x1c) - *(int *)(lVar2 + 0x14)) + 1);
  FUN_1405716c0(local_40,param_1);
  FUN_14056d7f0(param_3,local_40);
  lVar2 = (local_40->CAutoHideDockContainer_data).offset_0x10;
  QBoxLayout::addWidget(*(QBoxLayout **)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 8),0,0);
  lVar2 = (local_40->CAutoHideDockContainer_data).offset_0x10;
  QBoxLayout::insertWidget
            (*(QBoxLayout **)(lVar2 + 0x20),param_2 < 2,*(undefined8 *)(lVar2 + 0x28),0,
             uVar15 & 0xffffffff00000000);
  return local_40;
}

