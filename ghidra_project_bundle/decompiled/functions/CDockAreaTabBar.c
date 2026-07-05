/**
 * Function: CDockAreaTabBar
 * Address:  140592f50
 * Signature: CDockAreaTabBar * __thiscall CDockAreaTabBar(CDockAreaTabBar * this, QWidget * param_1)
 * Body size: 439 bytes
 */


CDockAreaTabBar * __thiscall
ads::CDockAreaTabBar::CDockAreaTabBar(CDockAreaTabBar *this,QWidget *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  QWidget *pQVar3;
  QBoxLayout *this_00;
  
  QScrollArea::QScrollArea((QScrollArea *)this,param_1);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  puVar2 = (undefined8 *)FUN_140b65d30(0x28);
  *puVar2 = this;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  (this->CDockAreaTabBar_data).offset_0x10 = puVar2;
  puVar2[1] = param_1;
  QWidget::setSizePolicy();
  QFrame::setFrameStyle((QFrame *)this,0);
  QScrollArea::setWidgetResizable((QScrollArea *)this,true);
  QAbstractScrollArea::setVerticalScrollBarPolicy((QAbstractScrollArea *)this,1);
  QAbstractScrollArea::setHorizontalScrollBarPolicy((QAbstractScrollArea *)this,1);
  pQVar3 = (QWidget *)FUN_140b65d30(0x28);
  QWidget::QWidget(pQVar3,0);
  (this->CDockAreaTabBar_data).offset_0x10[2] = pQVar3;
  QWidget::setSizePolicy((QWidget *)(this->CDockAreaTabBar_data).offset_0x10[2],0x550000);
  QObject::setObjectName((QObject *)(this->CDockAreaTabBar_data).offset_0x10[2]);
  this_00 = (QBoxLayout *)FUN_140b65d30(0x20);
  QBoxLayout::QBoxLayout(this_00,0,(QWidget *)0x0);
  (this->CDockAreaTabBar_data).offset_0x10[3] = this_00;
  QLayout::setContentsMargins((QLayout *)(this->CDockAreaTabBar_data).offset_0x10[3],0,0,0,0);
  plVar1 = (longlong *)(this->CDockAreaTabBar_data).offset_0x10[3];
  (**(code **)(*plVar1 + 0x60))(plVar1,0);
  QBoxLayout::addStretch((QBoxLayout *)(this->CDockAreaTabBar_data).offset_0x10[3],1);
  puVar2 = (this->CDockAreaTabBar_data).offset_0x10;
  QWidget::setLayout((QWidget *)puVar2[2],(QLayout *)puVar2[3]);
  QScrollArea::setWidget((QScrollArea *)this,(QWidget *)(this->CDockAreaTabBar_data).offset_0x10[2])
  ;
  QWidget::setFocusPolicy((QWidget *)this,0);
  return this;
}

