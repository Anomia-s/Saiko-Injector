/**
 * Function: close_other_groups
 * Address:  140596db0
 * Signature: QWidget * __thiscall close_other_groups(void * this, QWidget * param_1)
 * Body size: 1166 bytes
 */


QWidget * __thiscall close_other_groups(void *this,QWidget *param_1)

{
  undefined8 uVar1;
  QObject *pQVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  QAction *pQVar6;
  QWidget *this_00;
  bool bVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint local_60 [6];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar3 = FUN_140573240(*(undefined8 *)(*(longlong *)((longlong)this + 0x28) + 0x60));
  cVar4 = FUN_140576e80(*(undefined8 *)(*(longlong *)((longlong)this + 0x28) + 0x60));
  if (param_1 == (QWidget *)0x0) {
    param_1 = (QWidget *)FUN_140b65d30(0x28);
    QMenu::QMenu((QMenu *)param_1,this);
  }
  if (cVar4 == '\0') {
    pcVar8 = "Detach Group";
    if (cVar3 != '\0') {
      pcVar8 = "Detach";
    }
    QMetaObject::tr((QMetaObject *)&DAT_140dff0f0,(char *)local_60,pcVar8,0);
    pQVar6 = QWidget::addAction(param_1,(QString *)local_60,this,"1onUndockButtonClicked()",0);
    QString::~QString((QString *)local_60);
    FUN_140573250(*(undefined8 *)(*(longlong *)((longlong)this + 0x28) + 0x60),local_60,0);
    QAction::setEnabled((QAction *)pQVar6,SUB41((local_60[0] & 4) >> 2,0));
    cVar5 = FUN_140279df0(1);
    if (cVar5 != '\0') {
      pcVar8 = "Pin Group";
      if (cVar3 != '\0') {
        pcVar8 = "Unpin (Dock)";
      }
      QMetaObject::tr((QMetaObject *)&DAT_140dff0f0,(char *)local_60,pcVar8,0);
      pQVar6 = QWidget::addAction(param_1,(QString *)local_60,this,
                                  "1onAutoHideDockAreaActionClicked()",0);
      QString::~QString((QString *)local_60);
      FUN_140573250(*(undefined8 *)(*(longlong *)((longlong)this + 0x28) + 0x60),local_60,0);
      bVar7 = (bool)((byte)(local_60[0] >> 9) & 1);
      QAction::setEnabled((QAction *)pQVar6,bVar7);
      if (cVar3 == '\0') {
        QMetaObject::tr((QMetaObject *)&DAT_140dff0f0,(char *)local_60,"Pin Group To...",0);
        this_00 = (QWidget *)QMenu::addMenu((QMenu *)param_1,(QString *)local_60);
        QString::~QString((QString *)local_60);
        QWidget::setEnabled(this_00,bVar7);
        uVar1 = *(undefined8 *)((longlong)this + 0x28);
        uVar9 = 0xffffffff;
        QMetaObject::tr((QMetaObject *)&DAT_140dff0f0,(char *)local_60,"Top",0);
        FUN_140597540(uVar1,local_60,0,this_00,uVar9);
        QString::~QString((QString *)local_60);
        uVar1 = *(undefined8 *)((longlong)this + 0x28);
        uVar9 = 0xffffffff;
        QMetaObject::tr((QMetaObject *)&DAT_140dff0f0,(char *)local_60,"Left",0);
        FUN_140597540(uVar1,local_60,1,this_00,uVar9);
        QString::~QString((QString *)local_60);
        uVar1 = *(undefined8 *)((longlong)this + 0x28);
        uVar9 = 0xffffffff;
        QMetaObject::tr((QMetaObject *)&DAT_140dff0f0,(char *)local_60,"Right",0);
        FUN_140597540(uVar1,local_60,2,this_00,uVar9);
        QString::~QString((QString *)local_60);
        uVar1 = *(undefined8 *)((longlong)this + 0x28);
        uVar9 = 0xffffffff;
        QMetaObject::tr((QMetaObject *)&DAT_140dff0f0,(char *)local_60,"Bottom",0);
        FUN_140597540(uVar1,local_60,3,this_00,uVar9);
        QString::~QString((QString *)local_60);
      }
    }
    QMenu::addSeparator((QMenu *)param_1);
  }
  else {
  }
  if (cVar3 == '\0') {
    QMetaObject::tr((QMetaObject *)&DAT_140dff0f0,(char *)local_60,"Close Group",0);
    pQVar6 = QWidget::addAction(param_1,(QString *)local_60,this,"1onCloseButtonClicked()",0);
  }
  else {
    QMetaObject::tr((QMetaObject *)&DAT_140dff0f0,(char *)local_60,"Minimize",0);
    QWidget::addAction(param_1,(QString *)local_60,this,"1minimizeAutoHideContainer()",0);
    QString::~QString((QString *)local_60);
    QMetaObject::tr((QMetaObject *)&DAT_140dff0f0,(char *)local_60,"Close",0);
    pQVar6 = QWidget::addAction(param_1,(QString *)local_60,this,"1onAutoHideCloseActionTriggered()"
                                ,0);
  }
  QString::~QString((QString *)local_60);
  FUN_140573250(*(undefined8 *)(*(longlong *)((longlong)this + 0x28) + 0x60),local_60,0);
  QAction::setEnabled((QAction *)pQVar6,(bool)((byte)local_60[0]._0_1_ & 1));
  if (cVar3 == '\0' && cVar4 == '\0') {
    pQVar2 = *(QObject **)(*(longlong *)((longlong)this + 0x28) + 0x60);
    QMetaObject::tr((QMetaObject *)&DAT_140dff0f0,(char *)local_60,"Close Other Groups",0);
    QWidget::addAction(param_1,(QString *)local_60,pQVar2,"1closeOtherAreas()",0);
    QString::~QString((QString *)local_60);
  }
  return param_1;
}

