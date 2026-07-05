/**
 * Function: ComboboxItemViewFilter
 * Address:  14007eaa0
 * Signature: ComboboxItemViewFilter * __thiscall ComboboxItemViewFilter(ComboboxItemViewFilter * this, undefined8 param_1, QWidget * param_2)
 * Body size: 374 bytes
 */


ComboboxItemViewFilter * __thiscall
oclero::qlementine::ComboboxItemViewFilter::ComboboxItemViewFilter
          (ComboboxItemViewFilter *this,undefined8 param_1,QWidget *param_2)

{
  ComboboxItemViewFilter *pCVar1;
  QObject *pQVar2;
  QObject *pQVar3;
  undefined4 *puVar4;
  uint in_stack_ffffffffffffff8c;
  QObject local_58 [8];
  code *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ComboboxItemViewFilter *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  QObject::QObject((QObject *)this,(QObject *)param_2);
  this->vftablePtr = &vftable;
  (this->ComboboxItemViewFilter_data).offset_0x8 = param_1;
  (this->ComboboxItemViewFilter_data).offset_0x10 = (QObject *)param_2;
  local_38 = this;
  QWidget::maximumSize(param_2);
  *(undefined4 *)&local_38[1].vftablePtr = local_48._4_4_;
  *(undefined8 *)&local_38[1].ComboboxItemViewFilter_data = 0xffffffffffffffff;
  local_38[1].ComboboxItemViewFilter_data.offset_0x8 = 0;
  local_38[1].ComboboxItemViewFilter_data.offset_0x10 = (QObject *)0x0;
  *(undefined1 *)&local_38[2].vftablePtr = 0;
  QObject::installEventFilter
            ((QObject *)(local_38->ComboboxItemViewFilter_data).offset_0x10,(QObject *)local_38);
  pQVar2 = (QObject *)
           QAbstractScrollArea::viewport
                     ((QAbstractScrollArea *)(local_38->ComboboxItemViewFilter_data).offset_0x10);
  if (pQVar2 != (QObject *)0x0) {
    QObject::installEventFilter(pQVar2,(QObject *)local_38);
  }
  pQVar2 = (QObject *)
           QObject::parent((QObject *)(local_38->ComboboxItemViewFilter_data).offset_0x10);
  QObject::installEventFilter(pQVar2,(QObject *)local_38);
  QObject::installEventFilter
            ((QObject *)(local_38->ComboboxItemViewFilter_data).offset_0x8,(QObject *)local_38);
  pQVar3 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,
                             (local_38->ComboboxItemViewFilter_data).offset_0x10);
  pCVar1 = local_38;
  if (pQVar3 != (QObject *)0x0) {
    local_50 = FUN_140086050;
    local_48 = expanded_exref;
    local_40 = 0;
    puVar4 = (undefined4 *)FUN_140b65d30(0x18);
    *puVar4 = 1;
    *(undefined1 **)(puVar4 + 2) = &LAB_1400863a0;
    *(code **)(puVar4 + 4) = FUN_140086050;
    QObject::connectImpl
              (local_58,(void **)pQVar3,(QObject *)&local_48,&local_38->vftablePtr,
               (QSlotObjectBase *)&local_50,(ConnectionType)puVar4,
               (int *)((ulonglong)in_stack_ffffffffffffff8c << 0x20),(QMetaObject *)0x0);
    QMetaObject::Connection::~Connection((Connection *)local_58);
  }
  return pCVar1;
}

