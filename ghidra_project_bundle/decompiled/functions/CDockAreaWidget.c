/**
 * Function: CDockAreaWidget
 * Address:  140573650
 * Signature: CDockAreaWidget * __thiscall CDockAreaWidget(CDockAreaWidget * this, undefined8 param_1, undefined8 param_2)
 * Body size: 363 bytes
 */


CDockAreaWidget * __thiscall
ads::CDockAreaWidget::CDockAreaWidget(CDockAreaWidget *this,undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  QBoxLayout *this_00;
  undefined8 *puVar5;
  
  QFrame::QFrame((QFrame *)this,param_2);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  puVar4 = (undefined8 *)FUN_140b65d30(0x48);
  *puVar4 = this;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x21) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x29) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x34) = 0x1f;
  *(undefined4 *)(puVar4 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0xffffffff;
  *(undefined4 *)(puVar4 + 8) = 0;
  (this->CDockAreaWidget_data).offset_0x10 = puVar4;
  puVar4[4] = param_1;
  this_00 = (QBoxLayout *)FUN_140b65d30(0x20);
  QBoxLayout::QBoxLayout(this_00,2,(QWidget *)0x0);
  (this->CDockAreaWidget_data).offset_0x10[1] = this_00;
  QLayout::setContentsMargins((QLayout *)(this->CDockAreaWidget_data).offset_0x10[1],0,0,0,0);
  plVar1 = (longlong *)(this->CDockAreaWidget_data).offset_0x10[1];
  (**(code **)(*plVar1 + 0x60))(plVar1,0);
  QWidget::setLayout((QWidget *)this,(QLayout *)(this->CDockAreaWidget_data).offset_0x10[1]);
  FUN_140572a80((this->CDockAreaWidget_data).offset_0x10);
  puVar5 = (undefined8 *)FUN_140b65d30(0x30);
  puVar4 = (this->CDockAreaWidget_data).offset_0x10;
  *puVar5 = puVar4[1];
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  puVar5[5] = 0;
  puVar4[2] = puVar5;
  cVar3 = FUN_1402765c0(0x40000000);
  if (cVar3 != '\0') {
    QWidget::winId((QWidget *)this);
  }
  lVar2 = (this->CDockAreaWidget_data).offset_0x10[4];
  if (lVar2 != 0) {
    FUN_1402926f0(lVar2,this);
  }
  return this;
}

