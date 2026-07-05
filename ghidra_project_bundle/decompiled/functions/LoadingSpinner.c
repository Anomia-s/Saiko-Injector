/**
 * Function: LoadingSpinner
 * Address:  1405499a0
 * Signature: LoadingSpinner * __thiscall LoadingSpinner(LoadingSpinner * this, undefined8 param_1)
 * Body size: 126 bytes
 */


LoadingSpinner * __thiscall
oclero::qlementine::LoadingSpinner::LoadingSpinner(LoadingSpinner *this,undefined8 param_1)

{
  QWidget::QWidget((QWidget *)this,param_1,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->LoadingSpinner_data).offset_0x10 = 0xffffffff;
  (this->LoadingSpinner_data).offset_0x14 = 0;
  (this->LoadingSpinner_data).offset_0x18 = 0;
  QWidget::setFocusPolicy((QWidget *)this,0);
  QWidget::setSizePolicy((QWidget *)this,0);
  QWidget::setAttribute((QWidget *)this,0x33,true);
  return this;
}

