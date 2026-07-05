/**
 * Function: ActionButton
 * Address:  14055d620
 * Signature: ActionButton * __thiscall ActionButton(ActionButton * this, QWidget * param_1)
 * Body size: 95 bytes
 */


ActionButton * __thiscall
oclero::qlementine::ActionButton::ActionButton(ActionButton *this,QWidget *param_1)

{
  QPushButton::QPushButton((QPushButton *)this,param_1);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->ActionButton_data).offset_0x10 = 0;
  QPushButton::setDefault((QPushButton *)this,true);
  QWidget::setFocusPolicy((QWidget *)this,0);
  return this;
}

