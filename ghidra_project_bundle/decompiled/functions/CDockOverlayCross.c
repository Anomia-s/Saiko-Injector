/**
 * Function: CDockOverlayCross
 * Address:  140577270
 * Signature: CDockOverlayCross * __thiscall CDockOverlayCross(CDockOverlayCross * this, QObject * param_1)
 * Body size: 347 bytes
 */


CDockOverlayCross * __thiscall
ads::CDockOverlayCross::CDockOverlayCross(CDockOverlayCross *this,QObject *param_1)

{
  longlong *plVar1;
  CDockOverlayCross *pCVar2;
  QObject *pQVar3;
  undefined8 *puVar4;
  QString local_58 [24];
  QGridLayout *local_40;
  CDockOverlayCross *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  pQVar3 = QObject::parent(param_1);
  QWidget::QWidget((QWidget *)this,pQVar3,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_38 = this;
  puVar4 = (undefined8 *)FUN_140b65d30(0x88);
  pCVar2 = local_38;
  *puVar4 = local_38;
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[3] = 0;
  QColor::QColor((QColor *)(puVar4 + 5));
  QColor::QColor((QColor *)(puVar4 + 7));
  QColor::QColor((QColor *)(puVar4 + 9));
  QColor::QColor((QColor *)(puVar4 + 0xb));
  QColor::QColor((QColor *)(puVar4 + 0xd));
  *(undefined1 *)(puVar4 + 0xf) = 0;
  puVar4[0x10] = 0x3fb999999999999a;
  (pCVar2->CDockOverlayCross_data).offset_0x10 = (longlong)puVar4;
  puVar4[2] = param_1;
  QWidget::setWindowFlags((QWidget *)pCVar2,0x80b);
  QString::QString(local_58,"DockOverlayCross");
  pCVar2 = local_38;
  QWidget::setWindowTitle((QWidget *)local_38,local_58);
  QString::~QString(local_58);
  QWidget::setAttribute((QWidget *)pCVar2,0x78,true);
  local_40 = (QGridLayout *)FUN_140b65d30(0x20);
  QGridLayout::QGridLayout(local_40,(QWidget *)0x0);
  *(QGridLayout **)((local_38->CDockOverlayCross_data).offset_0x10 + 0x20) = local_40;
  plVar1 = *(longlong **)((local_38->CDockOverlayCross_data).offset_0x10 + 0x20);
  (**(code **)(*plVar1 + 0x60))(plVar1,0);
  QWidget::setLayout((QWidget *)local_38,
                     *(QLayout **)((local_38->CDockOverlayCross_data).offset_0x10 + 0x20));
  return local_38;
}

