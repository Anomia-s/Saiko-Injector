/**
 * Function: Expander
 * Address:  140548700
 * Signature: Expander * __thiscall Expander(Expander * this, undefined8 param_1)
 * Body size: 643 bytes
 */


Expander * __thiscall oclero::qlementine::Expander::Expander(Expander *this,undefined8 param_1)

{
  QVariantAnimation *this_00;
  int iVar1;
  QStyle *pQVar2;
  undefined4 *puVar3;
  uint in_stack_ffffffffffffff6c;
  QObject local_78 [8];
  QObject local_70 [8];
  undefined1 *local_68;
  undefined *local_60;
  code *local_58 [4];
  QVariantAnimation *local_38;
  undefined4 local_2c;
  Expander *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  QWidget::QWidget((QWidget *)this,param_1,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->Expander_data).offset_0x10 = 0;
  (this->Expander_data).offset_0x14 = 2;
  local_38 = (QVariantAnimation *)&(this->Expander_data).field_0x18;
  local_28 = this;
  QVariantAnimation::QVariantAnimation(local_38,(QObject *)0x0);
  local_68 = &local_28[1].field_0x8;
  *(undefined8 *)&local_28[1].field_0x8 = 0;
  local_28[1].vftablePtr = (Expander_vftable1 *)0x0;
  QWidget::setFocusPolicy((QWidget *)local_28,0);
  if ((local_28->Expander_data).offset_0x14 == 2) {
    QWidget::setSizePolicy((QWidget *)local_28,0x50000);
  }
  else {
    QWidget::setSizePolicy((QWidget *)local_28,0x500000);
  }
  pQVar2 = QWidget::style((QWidget *)local_28);
  iVar1 = (**(code **)(*(longlong *)pQVar2 + 0xe8))(pQVar2,0x71,0,0,0);
  local_2c = 0;
  local_60 = &DAT_1414f5510;
  QMetaType::registerHelper((QMetaType *)&local_60);
  ::QVariant::moveConstruct(local_58,&DAT_1414f5510,&local_2c);
  QVariantAnimation::setStartValue(local_38,(QVariant *)local_58);
  ::QVariant::~QVariant((QVariant *)local_58);
  local_2c = 0;
  local_60 = &DAT_1414f5510;
  QMetaType::registerHelper((QMetaType *)&local_60);
  ::QVariant::moveConstruct(local_58,&DAT_1414f5510,&local_2c);
  this_00 = local_38;
  QVariantAnimation::setEndValue(local_38,(QVariant *)local_58);
  ::QVariant::~QVariant((QVariant *)local_58);
  QVariantAnimation::setDuration(this_00,iVar1);
  QEasingCurve::QEasingCurve((QEasingCurve *)local_58,6);
  QVariantAnimation::setEasingCurve(local_38,(QEasingCurve *)local_58);
  QEasingCurve::~QEasingCurve((QEasingCurve *)local_58);
  local_58[0] = valueChanged_exref;
  puVar3 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar3 = 1;
  *(undefined1 **)(puVar3 + 2) = &LAB_140549150;
  *(Expander **)(puVar3 + 4) = local_28;
  QObject::connectImpl
            (local_78,(void **)local_38,(QObject *)local_58,&local_28->vftablePtr,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar3,
             (int *)((ulonglong)in_stack_ffffffffffffff6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_78);
  local_58[0] = finished_exref;
  puVar3 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar3 = 1;
  *(undefined **)(puVar3 + 2) = &DAT_140549180;
  *(Expander **)(puVar3 + 4) = local_28;
  QObject::connectImpl
            (local_70,(void **)local_38,(QObject *)local_58,&local_28->vftablePtr,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar3,
             (int *)((ulonglong)in_stack_ffffffffffffff6c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_70);
  return local_28;
}

