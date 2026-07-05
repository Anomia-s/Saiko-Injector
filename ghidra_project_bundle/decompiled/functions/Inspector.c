/**
 * Function: Inspector
 * Address:  1402a3800
 * Signature: Inspector * __thiscall Inspector(Inspector * this, QWidget * param_1)
 * Body size: 155 bytes
 */


Inspector * __thiscall ldv::editor::Inspector::Inspector(Inspector *this,QWidget *param_1)

{
  longlong lVar1;
  
  QScrollArea::QScrollArea((QScrollArea *)this,param_1);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->Inspector_data).offset_0x10 = 0;
  (this->Inspector_data).offset_0x18 = 0;
  (this->Inspector_data).offset_0x20 = 0;
  (this->Inspector_data).offset_0x28 = 0;
  (this->Inspector_data).offset_0x30 = 0;
  (this->Inspector_data).offset_0x38 = 0;
  (this->Inspector_data).offset_0x40 = 0;
  (this->Inspector_data).offset_0x48 = 0;
  lVar1 = FUN_140b65d30(0x40);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  (this->Inspector_data).offset_0x40 = lVar1;
  QScrollArea::setWidgetResizable((QScrollArea *)this,true);
  QFrame::setFrameShape((QFrame *)this,0);
  FUN_1402a38f0(this);
  return this;
}

