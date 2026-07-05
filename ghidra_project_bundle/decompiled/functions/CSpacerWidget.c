/**
 * Function: CSpacerWidget
 * Address:  140595190
 * Signature: CSpacerWidget * __thiscall CSpacerWidget(CSpacerWidget * this, undefined8 param_1)
 * Body size: 124 bytes
 */


CSpacerWidget * __thiscall ads::CSpacerWidget::CSpacerWidget(CSpacerWidget *this,undefined8 param_1)

{
  QWidget *pQVar1;
  QString local_38 [24];
  QWidget *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  QWidget::QWidget((QWidget *)this,param_1,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_20 = (QWidget *)this;
  QWidget::setSizePolicy((QWidget *)this,0x770000);
  QString::QString(local_38,"border: none; background: none;");
  pQVar1 = local_20;
  QWidget::setStyleSheet(local_20,local_38);
  QString::~QString(local_38);
  return (CSpacerWidget *)pQVar1;
}

