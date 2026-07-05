/**
 * Function: CDockContainerWidget
 * Address:  14056b7c0
 * Signature: CDockContainerWidget * __thiscall CDockContainerWidget(CDockContainerWidget * this, CDockContainerWidget * param_1, undefined8 param_2)
 * Body size: 469 bytes
 */


CDockContainerWidget * __thiscall
ads::CDockContainerWidget::CDockContainerWidget
          (CDockContainerWidget *this,CDockContainerWidget *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong lVar4;
  ExternalRefCountData *pEVar5;
  QObject *this_00;
  QObject *pQVar6;
  QGridLayout *this_01;
  
  QFrame::QFrame((QFrame *)this,param_2);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  lVar4 = FUN_140b65d30(200);
  FUN_140566ce0(lVar4);
  (this->CDockContainerWidget_data).offset_0x10 = lVar4;
  if (param_1 == (CDockContainerWidget *)0x0) {
    pEVar5 = (ExternalRefCountData *)0x0;
  }
  else {
    pEVar5 = QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)param_1);
  }
  piVar1 = *(int **)(lVar4 + 8);
  *(ExternalRefCountData **)(lVar4 + 8) = pEVar5;
  *(CDockContainerWidget **)(lVar4 + 0x10) = param_1;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_140b68ba8();
    }
  }
  this_00 = (QObject *)QObject::parent((QObject *)this);
  do {
    if (this_00 == (QObject *)0x0) {
      uVar3 = 0;
LAB_14056b8a2:
      *(undefined1 *)((this->CDockContainerWidget_data).offset_0x10 + 0x68) = uVar3;
      this_01 = (QGridLayout *)FUN_140b65d30(0x20);
      QGridLayout::QGridLayout(this_01,(QWidget *)0x0);
      *(QGridLayout **)((this->CDockContainerWidget_data).offset_0x10 + 0x58) = this_01;
      QLayout::setContentsMargins
                (*(QLayout **)((this->CDockContainerWidget_data).offset_0x10 + 0x58),0,0,0,0);
      plVar2 = *(longlong **)((this->CDockContainerWidget_data).offset_0x10 + 0x58);
      (**(code **)(*plVar2 + 0x60))(plVar2,0);
      QGridLayout::setColumnStretch
                (*(QGridLayout **)((this->CDockContainerWidget_data).offset_0x10 + 0x58),1,1);
      QGridLayout::setRowStretch
                (*(QGridLayout **)((this->CDockContainerWidget_data).offset_0x10 + 0x58),1,1);
      QWidget::setLayout((QWidget *)this,
                         *(QLayout **)((this->CDockContainerWidget_data).offset_0x10 + 0x58));
      if (param_1 != this) {
        FUN_140278990(*(undefined8 *)((this->CDockContainerWidget_data).offset_0x10 + 0x10));
        FUN_14056bab0(this);
        FUN_14056bb80(this);
      }
      return this;
    }
    pQVar6 = QMetaObject::cast((QMetaObject *)&DAT_140e014e0,(QObject *)this_00);
    if (pQVar6 != (QObject *)0x0) {
      uVar3 = 1;
      goto LAB_14056b8a2;
    }
    this_00 = (QObject *)QObject::parent(this_00);
  } while( true );
}

