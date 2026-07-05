/**
 * Function: IconWidget
 * Address:  1405491b0
 * Signature: IconWidget * __thiscall IconWidget(IconWidget * this, undefined8 param_1)
 * Body size: 181 bytes
 */


IconWidget * __thiscall
oclero::qlementine::IconWidget::IconWidget(IconWidget *this,undefined8 param_1)

{
  undefined4 uVar1;
  QStyle *pQVar2;
  undefined1 *this_00;
  
  QWidget::QWidget((QWidget *)this,param_1,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->IconWidget_data).offset_0x10 = 0xffffffffffffffff;
  this_00 = &(this->IconWidget_data).field_0x18;
  QIcon::QIcon((QIcon *)this_00);
  QWidget::setSizePolicy((QWidget *)this);
  QWidget::setFocusPolicy((QWidget *)this,0);
  pQVar2 = QWidget::style((QWidget *)this);
  if (pQVar2 == (QStyle *)0x0) {
    uVar1 = 0x10;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)pQVar2 + 0xd8))(pQVar2,0x48,0,this,this_00);
  }
  (this->IconWidget_data).offset_0x10 = CONCAT44(uVar1,uVar1);
  return this;
}

