/**
 * Function: WidgetAnimation<QColor>
 * Address:  1400830a0
 * Signature: WidgetAnimation<QColor> * __thiscall WidgetAnimation<QColor>(WidgetAnimation<QColor> * this, QObject * param_1)
 * Body size: 289 bytes
 */


WidgetAnimation<QColor> * __thiscall
oclero::qlementine::WidgetAnimation<QColor>::WidgetAnimation<QColor>
          (WidgetAnimation<QColor> *this,QObject *param_1)

{
  WidgetAnimation<QColor> *pWVar1;
  undefined4 *puVar2;
  undefined4 in_stack_ffffffffffffff9c;
  QObject local_48 [8];
  QVariantAnimation *local_40;
  WidgetAnimation<QColor> *local_38;
  code *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  QObject::QObject((QObject *)this,(QObject *)param_1);
  this->vftablePtr = &vftable;
  (this->WidgetAnimation<QColor>_data).offset_0x8 = 0;
  (this->WidgetAnimation<QColor>_data).offset_0xa = 0;
  local_40 = (QVariantAnimation *)&(this->WidgetAnimation<QColor>_data).field_0x10;
  local_38 = this;
  QVariantAnimation::QVariantAnimation(local_40,(QObject *)0x0);
  pWVar1 = local_38;
  QColor::QColor((QColor *)&local_38[1].WidgetAnimation<QColor>_data);
  QColor::QColor((QColor *)&pWVar1[1].WidgetAnimation<QColor>_data.field_0x10);
  if (param_1 != (QObject *)0x0) {
    QEasingCurve::QEasingCurve((QEasingCurve *)&local_30,6);
    QVariantAnimation::setEasingCurve(local_40,(QEasingCurve *)&local_30);
    QEasingCurve::~QEasingCurve((QEasingCurve *)&local_30);
    local_30 = valueChanged_exref;
    puVar2 = (undefined4 *)FUN_140b65d30(0x18);
    *puVar2 = 1;
    *(undefined1 **)(puVar2 + 2) = &LAB_1400828d0;
    *(QObject **)(puVar2 + 4) = param_1;
    QObject::connectImpl
              (local_48,(void **)local_40,(QObject *)&local_30,(void **)param_1,
               (QSlotObjectBase *)0x0,(ConnectionType)puVar2,
               (int *)CONCAT44(in_stack_ffffffffffffff9c,2),(QMetaObject *)&DAT_140dde4bc);
    QMetaObject::Connection::~Connection((Connection *)local_48);
    QObject::installEventFilter(param_1,(QObject *)local_38);
  }
  return local_38;
}

