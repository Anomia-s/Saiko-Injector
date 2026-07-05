/**
 * Function: LineEditButtonEventFilter
 * Address:  14007e8f0
 * Signature: LineEditButtonEventFilter * __thiscall LineEditButtonEventFilter(LineEditButtonEventFilter * this, QObject * param_1, undefined8 param_2, QObject * param_3)
 * Body size: 326 bytes
 */


LineEditButtonEventFilter * __thiscall
oclero::qlementine::LineEditButtonEventFilter::LineEditButtonEventFilter
          (LineEditButtonEventFilter *this,QObject *param_1,undefined8 param_2,QObject *param_3)

{
  QObject *pQVar1;
  ExternalRefCountData *pEVar2;
  QObject *pQVar3;
  undefined4 *puVar4;
  uint in_stack_ffffffffffffff7c;
  code *local_68;
  undefined4 local_60;
  QObject local_58 [8];
  code *local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ExternalRefCountData **local_40;
  LineEditButtonEventFilter *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  QObject::QObject((QObject *)this,(QObject *)param_3);
  this->vftablePtr = &vftable;
  local_38 = this;
  if (param_1 == (QObject *)0x0) {
    pEVar2 = (ExternalRefCountData *)0x0;
  }
  else {
    pEVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
  }
  local_40 = &(local_38->LineEditButtonEventFilter_data).offset_0x8;
  (local_38->LineEditButtonEventFilter_data).offset_0x8 = pEVar2;
  (local_38->LineEditButtonEventFilter_data).offset_0x10 = param_1;
  (local_38->LineEditButtonEventFilter_data).offset_0x18 = param_2;
  (local_38->LineEditButtonEventFilter_data).offset_0x20 = (QObject *)param_3;
  pQVar3 = QObject::parent(param_3);
  if (pQVar3 != (QObject *)0x0) {
    pQVar3 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,pQVar3);
    if (pQVar3 != (QObject *)0x0) {
      local_50 = returnPressed_exref;
      uStack_48 = 0;
      pQVar1 = (local_38->LineEditButtonEventFilter_data).offset_0x20;
      local_68 = clicked_exref;
      local_60 = 0;
      puVar4 = (undefined4 *)FUN_140b65d30(0x20);
      *puVar4 = 1;
      *(undefined1 **)(puVar4 + 2) = &LAB_140085340;
      *(code **)(puVar4 + 4) = local_50;
      *(ulonglong *)(puVar4 + 6) = CONCAT44(uStack_44,uStack_48);
      QObject::connectImpl
                (local_58,(void **)pQVar1,(QObject *)&local_68,(void **)pQVar3,
                 (QSlotObjectBase *)&local_50,(ConnectionType)puVar4,
                 (int *)((ulonglong)in_stack_ffffffffffffff7c << 0x20),(QMetaObject *)0x0);
      QMetaObject::Connection::~Connection((Connection *)local_58);
    }
  }
  return local_38;
}

