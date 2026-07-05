/**
 * Function: PopoverFrame
 * Address:  14054bf00
 * Signature: PopoverFrame * __thiscall PopoverFrame(PopoverFrame * this, undefined8 param_1)
 * Body size: 216 bytes
 */


PopoverFrame * __thiscall
oclero::qlementine::Popover::PopoverFrame::PopoverFrame(PopoverFrame *this,undefined8 param_1)

{
  QVBoxLayout *this_00;
  
  QWidget::QWidget((QWidget *)this,param_1,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->PopoverFrame_data).offset_0x48 = 0;
  QWidget::setAttribute((QWidget *)this,0x78,true);
  QWidget::setAutoFillBackground((QWidget *)this,false);
  QWidget::setBackgroundRole((QWidget *)this,0x11);
  this_00 = (QVBoxLayout *)FUN_140b65d30(0x20);
  QVBoxLayout::QVBoxLayout(this_00,(QWidget *)this);
  (**(code **)(*(longlong *)this_00 + 0x60))(this_00,0);
  QLayout::setContentsMargins((QLayout *)this_00,0x10,0x10,0x10,0x10);
  QWidget::setLayout((QWidget *)this,(QLayout *)this_00);
  return this;
}

