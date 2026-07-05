/**
 * Function: Label
 * Address:  1405497d0
 * Signature: Label * __thiscall Label(Label * this, undefined8 param_1, undefined4 param_2, undefined8 param_3)
 * Body size: 110 bytes
 */


Label * __thiscall
oclero::qlementine::Label::Label
          (Label *this,undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  QLabel::QLabel((QLabel *)this,param_1,param_3,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->Label_data).offset_0x10 = param_2;
  (this->Label_data).offset_0x14 = 0;
  FUN_1405496f0(this);
  QObject::installEventFilter(*(QObject **)self_exref,(QObject *)this);
  return this;
}

