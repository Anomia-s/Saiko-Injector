/**
 * Function: CDockAreaTitleBar
 * Address:  140595790
 * Signature: CDockAreaTitleBar * __thiscall CDockAreaTitleBar(CDockAreaTitleBar * this, undefined8 param_1)
 * Body size: 374 bytes
 */


CDockAreaTitleBar * __thiscall
ads::CDockAreaTitleBar::CDockAreaTitleBar(CDockAreaTitleBar *this,undefined8 param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  QBoxLayout *this_00;
  
  QFrame::QFrame();
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  puVar2 = (undefined8 *)FUN_140b65d30(0xb8);
  *puVar2 = this;
  puVar2[0xe] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *(undefined1 *)(puVar2 + 0xf) = 1;
  puVar2[0x16] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  *(undefined4 *)(puVar2 + 0x15) = 0;
  (this->CDockAreaTitleBar_data).offset_0x10 = puVar2;
  puVar2[0xc] = param_1;
  QObject::setObjectName();
  this_00 = (QBoxLayout *)FUN_140b65d30(0x20);
  QBoxLayout::QBoxLayout(this_00,0,(QWidget *)0x0);
  (this->CDockAreaTitleBar_data).offset_0x10[0xb] = this_00;
  QLayout::setContentsMargins((QLayout *)(this->CDockAreaTitleBar_data).offset_0x10[0xb],0,0,0,0);
  plVar1 = (longlong *)(this->CDockAreaTitleBar_data).offset_0x10[0xb];
  (**(code **)(*plVar1 + 0x60))(plVar1,0);
  QWidget::setLayout((QWidget *)this,(QLayout *)(this->CDockAreaTitleBar_data).offset_0x10[0xb]);
  QWidget::setSizePolicy((QWidget *)this);
  _tabclosedint((this->CDockAreaTitleBar_data).offset_0x10);
  FUN_140595010((this->CDockAreaTitleBar_data).offset_0x10);
  pin_active_tab_press_ctrl_to_pin_group((this->CDockAreaTitleBar_data).offset_0x10);
  QWidget::setFocusPolicy((QWidget *)this,0);
  return this;
}

