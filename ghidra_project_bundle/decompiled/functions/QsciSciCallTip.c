/**
 * Function: QsciSciCallTip
 * Address:  14081ed00
 * Signature: QsciSciCallTip * __thiscall QsciSciCallTip(QsciSciCallTip * this, QWidget * param_1, undefined8 param_2)
 * Body size: 96 bytes
 */


QsciSciCallTip * __thiscall
QsciSciCallTip::QsciSciCallTip(QsciSciCallTip *this,QWidget *param_1,undefined8 param_2)

{
  QWidget::QWidget((QWidget *)this,param_1,0x80d);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->QsciSciCallTip_data).offset_0x10 = param_2;
  QWidget::setFocusProxy((QWidget *)this,param_1);
  return this;
}

