/**
 * Function: CTabsWidget
 * Address:  1405901e0
 * Signature: CTabsWidget * __thiscall CTabsWidget(CTabsWidget * this, QWidget * param_1, int param_2)
 * Body size: 581 bytes
 */


CTabsWidget * __thiscall
ads::CTabsWidget::CTabsWidget(CTabsWidget *this,QWidget *param_1,int param_2)

{
  metric *pmVar1;
  QWidget *pQVar2;
  QPaintDevice QVar3;
  char *local_48;
  undefined8 local_40;
  QWidget *local_38;
  QWidget *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  QScrollArea::QScrollArea((QScrollArea *)this,param_1);
                    /* inlined constructor: ads::CAutoHideSideBar::CAutoHideSideBar */
  this->vftablePtr = (CTabsWidget_vftable0 *)&CAutoHideSideBar::vftable;
  this->vftablePtr = (CTabsWidget_vftable1 *)&CAutoHideSideBar::vftable;
  local_30 = (QWidget *)this;
  QVar3 = (QPaintDevice)FUN_140b65d30(0x28);
  *(QWidget **)QVar3 = local_30;
  local_30[1].QPaintDevice = QVar3;
  *(int *)((longlong)QVar3 + 0x24) = param_2;
  *(QWidget **)((longlong)QVar3 + 8) = param_1;
  *(uint *)((longlong)QVar3 + 0x20) = 2 - (uint)(param_2 == 0 || param_2 == 3);
  QWidget::setSizePolicy();
  QFrame::setFrameStyle((QFrame *)local_30,0);
  QScrollArea::setWidgetResizable((QScrollArea *)local_30,true);
  QAbstractScrollArea::setVerticalScrollBarPolicy((QAbstractScrollArea *)local_30,1);
  QAbstractScrollArea::setHorizontalScrollBarPolicy((QAbstractScrollArea *)local_30,1);
  local_38 = (QWidget *)FUN_140b65d30(0x30);
  pQVar2 = local_30;
  *(undefined8 *)&local_38[1].field_0x8 = 0;
  local_38[1].QPaintDevice = (QPaintDevice)0x0;
  local_38->QPaintDevice = (QPaintDevice)0x0;
  local_38[1].QObject = (QObject)0x0;
  local_38->QObject = (QObject)0x0;
  *(undefined8 *)&local_38->field_0x8 = 0;
  QWidget::QWidget(local_38,0);
  local_38->QObject = (QObject)&vftable;
  local_38->QPaintDevice = (QPaintDevice)&vftable;
  *(QWidget **)((longlong)pQVar2[1].QPaintDevice + 0x10) = local_38;
  QVar3 = pQVar2[1].QPaintDevice;
  *(QPaintDevice *)(*(paintEngine **)((longlong)QVar3 + 0x10) + 0x28) = QVar3;
  QWidget::setSizePolicy(*(QWidget **)((longlong)QVar3 + 0x10),0x550000);
  local_48 = "sideTabsContainerWidget";
  local_40 = 0x17;
  QObject::setObjectName(*(QObject **)((longlong)local_30[1].QPaintDevice + 0x10),&local_48);
  local_38 = (QWidget *)FUN_140b65d30(0x20);
  QBoxLayout::QBoxLayout
            ((QBoxLayout *)local_38,
             (uint)(*(int *)((longlong)local_30[1].QPaintDevice + 0x20) == 2) * 2,(QWidget *)0x0);
  *(QWidget **)((longlong)local_30[1].QPaintDevice + 0x18) = local_38;
  QLayout::setContentsMargins(*(QLayout **)((longlong)local_30[1].QPaintDevice + 0x18),0,0,0,0);
  pmVar1 = *(metric **)((longlong)local_30[1].QPaintDevice + 0x18);
  (**(code **)(*(longlong *)pmVar1 + 0x60))(pmVar1,0xc);
  QBoxLayout::addStretch(*(QBoxLayout **)((longlong)local_30[1].QPaintDevice + 0x18),1);
  QWidget::setLayout(*(QWidget **)((longlong)local_30[1].QPaintDevice + 0x10),
                     *(QLayout **)((longlong)local_30[1].QPaintDevice + 0x18));
  QScrollArea::setWidget
            ((QScrollArea *)local_30,*(QWidget **)((longlong)local_30[1].QPaintDevice + 0x10));
  QWidget::setFocusPolicy(local_30,0);
  if (*(int *)((longlong)local_30[1].QPaintDevice + 0x20) == 1) {
    QWidget::setSizePolicy(local_30,0x70000);
  }
  else {
    QWidget::setSizePolicy(local_30,0x700000);
  }
  QWidget::hide(local_30);
  return (CTabsWidget *)local_30;
}

