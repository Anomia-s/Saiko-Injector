/**
 * Function: close_others
 * Address:  140586c10
 * Signature: QWidget * __thiscall close_others(void * this, QWidget * param_1)
 * Body size: 956 bytes
 */


QWidget * __thiscall close_others(void *this,QWidget *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  QString QVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  QAction *pQVar8;
  QWidget *this_00;
  bool bVar9;
  undefined4 uVar10;
  uint local_50 [6];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_1 == (QWidget *)0x0) {
    param_1 = (QWidget *)FUN_140b65d30(0x28);
    QMenu::QMenu((QMenu *)param_1,this);
  }
  FUN_14028e0f0(*(undefined8 *)(*(longlong *)((longlong)this + 0x28) + 8),local_50);
  QVar3 = local_50[0]._0_1_;
  bVar4 = FUN_140576e80(*(undefined8 *)(*(longlong *)((longlong)this + 0x28) + 0x38));
  bVar5 = FUN_14028e280(*(undefined8 *)(*(longlong *)((longlong)this + 0x28) + 8));
  if ((bVar4 & bVar5) == 0) {
    QMetaObject::tr((QMetaObject *)&DAT_140e01200,(char *)local_50,"Detach",0);
    pQVar8 = QWidget::addAction(param_1,(QString *)local_50,this,"1detachDockWidget()",0);
    QString::~QString((QString *)local_50);
    QAction::setEnabled((QAction *)pQVar8,(bool)((bVar5 ^ 1) & (byte)QVar3 >> 2));
    cVar6 = FUN_140279df0(1);
    if (cVar6 != '\0') {
      QMetaObject::tr((QMetaObject *)&DAT_140e01200,(char *)local_50,"Pin",0);
      pQVar8 = QWidget::addAction(param_1,(QString *)local_50,this,"1autoHideDockWidget()",0);
      QString::~QString((QString *)local_50);
      FUN_14028e0f0(*(undefined8 *)(*(longlong *)((longlong)this + 0x28) + 8),local_50);
      bVar9 = (bool)((byte)(local_50[0] >> 9) & 1);
      QAction::setEnabled((QAction *)pQVar8,bVar9);
      QMetaObject::tr((QMetaObject *)&DAT_140e01200,(char *)local_50,"Pin To...",0);
      this_00 = (QWidget *)QMenu::addMenu((QMenu *)param_1,(QString *)local_50);
      QString::~QString((QString *)local_50);
      QWidget::setEnabled(this_00,bVar9);
      uVar1 = *(undefined8 *)((longlong)this + 0x28);
      uVar10 = 0xffffffff;
      QMetaObject::tr((QMetaObject *)&DAT_140e01200,(char *)local_50,"Top",0);
      FUN_1405871c0(uVar1,local_50,0,this_00,uVar10);
      QString::~QString((QString *)local_50);
      uVar1 = *(undefined8 *)((longlong)this + 0x28);
      uVar10 = 0xffffffff;
      QMetaObject::tr((QMetaObject *)&DAT_140e01200,(char *)local_50,"Left",0);
      FUN_1405871c0(uVar1,local_50,1,this_00,uVar10);
      QString::~QString((QString *)local_50);
      uVar1 = *(undefined8 *)((longlong)this + 0x28);
      uVar10 = 0xffffffff;
      QMetaObject::tr((QMetaObject *)&DAT_140e01200,(char *)local_50,"Right",0);
      FUN_1405871c0(uVar1,local_50,2,this_00,uVar10);
      QString::~QString((QString *)local_50);
      uVar1 = *(undefined8 *)((longlong)this + 0x28);
      uVar10 = 0xffffffff;
      QMetaObject::tr((QMetaObject *)&DAT_140e01200,(char *)local_50,"Bottom",0);
      FUN_1405871c0(uVar1,local_50,3,this_00,uVar10);
      QString::~QString((QString *)local_50);
    }
  }
  QMenu::addSeparator((QMenu *)param_1);
  QMetaObject::tr((QMetaObject *)&DAT_140e01200,(char *)local_50,"Close",0);
  pQVar8 = QWidget::addAction(param_1,(QString *)local_50,this,"2closeRequested()",0);
  QString::~QString((QString *)local_50);
  lVar2 = *(longlong *)(*(longlong *)((longlong)this + 0x28) + 8);
  if (lVar2 == 0) {
    bVar9 = false;
  }
  else {
    FUN_14028e0f0(lVar2,local_50);
    bVar9 = (bool)((byte)local_50[0]._0_1_ & 1);
  }
  QAction::setEnabled((QAction *)pQVar8,bVar9);
  iVar7 = FUN_140575100(*(undefined8 *)(*(longlong *)((longlong)this + 0x28) + 0x38));
  if (1 < iVar7) {
    QMetaObject::tr((QMetaObject *)&DAT_140e01200,(char *)local_50,"Close Others",0);
    QWidget::addAction(param_1,(QString *)local_50,this,"2closeOtherTabsRequested()",0);
    QString::~QString((QString *)local_50);
  }
  return param_1;
}

