/**
 * Function: 1requestclosedockwidget
 * Address:  140591cf0
 * Signature: void __thiscall 1requestclosedockwidget(void * this, longlong param_1)
 * Body size: 837 bytes
 */


void __thiscall _requestclosedockwidget(void *this,longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  QAction *pQVar3;
  QWidget *this_00;
  bool bVar4;
  undefined4 uVar5;
  QWidget local_78;
  uint local_50 [6];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  *(undefined1 *)(param_1 + 0xc) = 1;
  puVar1 = *(undefined8 **)((longlong)this + 0x30);
  puVar1[9] = *(undefined8 *)(param_1 + 0x30);
  QWidget::mapFromGlobal((QWidget *)*puVar1,(QPoint *)&local_78);
  puVar1[10] = CONCAT44(local_78.QObject._4_4_,local_78.QObject._0_4_);
  FUN_14028e0f0(*(undefined8 *)(*(longlong *)((longlong)this + 0x30) + 8),&local_78);
  QMenu::QMenu((QMenu *)&local_78,this);
  QMetaObject::tr((QMetaObject *)&DAT_140dfe690,(char *)local_50,"Detach",0);
  pQVar3 = QWidget::addAction(&local_78,(QString *)local_50,this,"1setDockWidgetFloating()",0);
  QString::~QString((QString *)local_50);
  QAction::setEnabled((QAction *)pQVar3,SUB41((local_78.QObject._0_4_ & 4) >> 2,0));
  FUN_14028e0f0(*(undefined8 *)(*(longlong *)((longlong)this + 0x30) + 8),local_50);
  bVar4 = (bool)((byte)(local_50[0] >> 9) & 1);
  QAction::setEnabled((QAction *)pQVar3,bVar4);
  QMetaObject::tr((QMetaObject *)&DAT_140dfe690,(char *)local_50,"Pin To...",0);
  this_00 = (QWidget *)QMenu::addMenu((QMenu *)&local_78,(QString *)local_50);
  QString::~QString((QString *)local_50);
  QWidget::setEnabled(this_00,bVar4);
  uVar2 = *(undefined8 *)((longlong)this + 0x30);
  uVar5 = 0xffffffff;
  QMetaObject::tr((QMetaObject *)&DAT_140dfe690,(char *)local_50,"Top",0);
  FUN_1405921f0(uVar2,local_50,0,this_00,uVar5);
  QString::~QString((QString *)local_50);
  uVar2 = *(undefined8 *)((longlong)this + 0x30);
  uVar5 = 0xffffffff;
  QMetaObject::tr((QMetaObject *)&DAT_140dfe690,(char *)local_50,"Left",0);
  FUN_1405921f0(uVar2,local_50,1,this_00,uVar5);
  QString::~QString((QString *)local_50);
  uVar2 = *(undefined8 *)((longlong)this + 0x30);
  uVar5 = 0xffffffff;
  QMetaObject::tr((QMetaObject *)&DAT_140dfe690,(char *)local_50,"Right",0);
  FUN_1405921f0(uVar2,local_50,2,this_00,uVar5);
  QString::~QString((QString *)local_50);
  uVar2 = *(undefined8 *)((longlong)this + 0x30);
  uVar5 = 0xffffffff;
  QMetaObject::tr((QMetaObject *)&DAT_140dfe690,(char *)local_50,"Bottom",0);
  FUN_1405921f0(uVar2,local_50,3,this_00,uVar5);
  QString::~QString((QString *)local_50);
  QMetaObject::tr((QMetaObject *)&DAT_140dfe690,(char *)local_50,"Unpin (Dock)",0);
  QWidget::addAction(&local_78,(QString *)local_50,this,"1unpinDockWidget()",0);
  QString::~QString((QString *)local_50);
  QMenu::addSeparator((QMenu *)&local_78);
  QMetaObject::tr((QMetaObject *)&DAT_140dfe690,(char *)local_50,"Close",0);
  pQVar3 = QWidget::addAction(&local_78,(QString *)local_50,this,"1requestCloseDockWidget()",0);
  QString::~QString((QString *)local_50);
  FUN_14028e0f0(*(undefined8 *)(*(longlong *)((longlong)this + 0x30) + 8),local_50);
  QAction::setEnabled((QAction *)pQVar3,(bool)((byte)local_50[0]._0_1_ & 1));
  QMenu::exec((QMenu *)&local_78,(QPoint *)(param_1 + 0x30),(QAction *)0x0);
  QMenu::~QMenu((QMenu *)&local_78);
  return;
}

