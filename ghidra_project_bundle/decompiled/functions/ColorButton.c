/**
 * Function: ColorButton
 * Address:  1405476d0
 * Signature: ColorButton * __thiscall ColorButton(ColorButton * this, QWidget * param_1)
 * Body size: 215 bytes
 */


ColorButton * __thiscall
oclero::qlementine::ColorButton::ColorButton(ColorButton *this,QWidget *param_1)

{
  undefined4 *puVar1;
  uint in_stack_ffffffffffffffac;
  code *local_38;
  undefined4 local_30;
  QObject local_28 [8];
  ColorButton *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  QAbstractButton::QAbstractButton((QAbstractButton *)this,param_1);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  QColor::QColor((QColor *)&(this->ColorButton_data).field_0x10);
  (this->ColorButton_data).offset_0x20 = 1;
  local_20 = this;
  QWidget::setSizePolicy((QWidget *)this,0);
  local_38 = clicked_exref;
  local_30 = 0;
  puVar1 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar1 = 1;
  *(code **)(puVar1 + 2) = FUN_140547bf0;
  *(ColorButton **)(puVar1 + 4) = local_20;
  QObject::connectImpl
            (local_28,&local_20->vftablePtr,(QObject *)&local_38,&local_20->vftablePtr,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar1,
             (int *)((ulonglong)in_stack_ffffffffffffffac << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_28);
  return local_20;
}

