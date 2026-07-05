/**
 * Function: CDockWidgetTab
 * Address:  140586420
 * Signature: CDockWidgetTab * __thiscall CDockWidgetTab(CDockWidgetTab * this, undefined8 param_1, undefined8 param_2)
 * Body size: 225 bytes
 */


CDockWidgetTab * __thiscall
ads::CDockWidgetTab::CDockWidgetTab(CDockWidgetTab *this,undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  QFrame::QFrame((QFrame *)this,param_2,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  puVar1 = (undefined8 *)FUN_140b65d30(0x78);
  *puVar1 = this;
  puVar1[2] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[9] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  QIcon::QIcon((QIcon *)(puVar1 + 10));
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0xffffffffffffffff;
  (this->CDockWidgetTab_data).offset_0x10 = puVar1;
  QWidget::setAttribute((QWidget *)this,0x49,true);
  (this->CDockWidgetTab_data).offset_0x10[1] = param_1;
  close_tab((this->CDockWidgetTab_data).offset_0x10);
  QWidget::setFocusPolicy((QWidget *)this,0);
  return this;
}

