/**
 * Function: WidgetAnimation<double>
 * Address:  140082660
 * Signature: WidgetAnimation<double> * __thiscall WidgetAnimation<double>(WidgetAnimation<double> * this, QObject * param_1)
 * Body size: 275 bytes
 */


WidgetAnimation<double> * __thiscall
oclero::qlementine::WidgetAnimation<double>::WidgetAnimation<double>
          (WidgetAnimation<double> *this,QObject *param_1)

{
  undefined4 *puVar1;
  undefined4 in_stack_ffffffffffffffac;
  QObject local_40 [8];
  QVariantAnimation *local_38;
  WidgetAnimation<double> *local_30;
  code *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  QObject::QObject((QObject *)this,(QObject *)param_1);
  this->vftablePtr = &vftable;
  (this->WidgetAnimation<double>_data).offset_0x8 = 0;
  (this->WidgetAnimation<double>_data).offset_0xa = 0;
  local_38 = (QVariantAnimation *)&(this->WidgetAnimation<double>_data).field_0x10;
  local_30 = this;
  QVariantAnimation::QVariantAnimation(local_38,(QObject *)0x0);
  *(undefined8 *)&local_30[1].WidgetAnimation<double>_data = 0;
  local_30[1].WidgetAnimation<double>_data.offset_0x8 = 0;
  local_30[1].WidgetAnimation<double>_data.offset_0xa = 0;
  *(undefined5 *)&local_30[1].WidgetAnimation<double>_data.field_0xb = 0;
  if (param_1 != (QObject *)0x0) {
    QEasingCurve::QEasingCurve((QEasingCurve *)&local_28,6);
    QVariantAnimation::setEasingCurve(local_38,(QEasingCurve *)&local_28);
    QEasingCurve::~QEasingCurve((QEasingCurve *)&local_28);
    local_28 = valueChanged_exref;
    puVar1 = (undefined4 *)FUN_140b65d30(0x18);
    *puVar1 = 1;
    *(undefined1 **)(puVar1 + 2) = &LAB_1400828d0;
    *(QObject **)(puVar1 + 4) = param_1;
    QObject::connectImpl
              (local_40,(void **)local_38,(QObject *)&local_28,(void **)param_1,
               (QSlotObjectBase *)0x0,(ConnectionType)puVar1,
               (int *)CONCAT44(in_stack_ffffffffffffffac,2),(QMetaObject *)&DAT_140dde4bc);
    QMetaObject::Connection::~Connection((Connection *)local_40);
    QObject::installEventFilter(param_1,(QObject *)local_30);
  }
  return local_30;
}

