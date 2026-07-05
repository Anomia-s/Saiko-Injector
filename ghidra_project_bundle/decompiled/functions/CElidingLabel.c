/**
 * Function: CElidingLabel
 * Address:  140599e20
 * Signature: CElidingLabel * __thiscall CElidingLabel(CElidingLabel * this, QString * param_1)
 * Body size: 150 bytes
 */


CElidingLabel * __thiscall ads::CElidingLabel::CElidingLabel(CElidingLabel *this,QString *param_1)

{
  undefined8 *puVar1;
  
  QLabel::QLabel();
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  puVar1 = (undefined8 *)FUN_140b65d30(0x30);
  *puVar1 = this;
  *(undefined4 *)(puVar1 + 1) = 3;
  QString::QString((QString *)(puVar1 + 2));
  *(undefined1 *)(puVar1 + 5) = 0;
  (this->CElidingLabel_data).offset_0x10 = puVar1;
  QString::operator=((QString *)(puVar1 + 2),param_1);
  QWidget::setToolTip((QWidget *)this,param_1);
  return this;
}

