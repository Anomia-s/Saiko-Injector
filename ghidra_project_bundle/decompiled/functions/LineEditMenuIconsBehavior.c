/**
 * Function: LineEditMenuIconsBehavior
 * Address:  140086cb0
 * Signature: LineEditMenuIconsBehavior * __thiscall LineEditMenuIconsBehavior(LineEditMenuIconsBehavior * this, QObject * param_1)
 * Body size: 259 bytes
 */


LineEditMenuIconsBehavior * __thiscall
oclero::qlementine::LineEditMenuIconsBehavior::LineEditMenuIconsBehavior
          (LineEditMenuIconsBehavior *this,QObject *param_1)

{
  LineEditMenuIconsBehavior *pLVar1;
  ExternalRefCountData *pEVar2;
  undefined4 *puVar3;
  uint in_stack_ffffffffffffff9c;
  code *local_48;
  undefined4 local_40;
  QObject local_38 [8];
  undefined8 *local_30;
  LineEditMenuIconsBehavior *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = this;
  QObject::QObject((QObject *)this,param_1);
  this->vftablePtr = &vftable;
  local_30 = &(this->LineEditMenuIconsBehavior_data).offset_0x8;
  if (param_1 == (QObject *)0x0) {
    *local_30 = 0;
    (this->LineEditMenuIconsBehavior_data).offset_0x10 = 0;
    (this->LineEditMenuIconsBehavior_data).offset_0x18 = 0;
  }
  else {
    pEVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
    (local_28->LineEditMenuIconsBehavior_data).offset_0x8 = pEVar2;
    (local_28->LineEditMenuIconsBehavior_data).offset_0x10 = param_1;
    (local_28->LineEditMenuIconsBehavior_data).offset_0x18 = 0;
    if (pEVar2 != (ExternalRefCountData *)0x0) {
      if (*(int *)(pEVar2 + 4) == 0) {
        param_1 = (QObject *)0x0;
      }
      goto LAB_140086d27;
    }
  }
  param_1 = (QObject *)0x0;
LAB_140086d27:
  pLVar1 = local_28;
  local_48 = aboutToShow_exref;
  local_40 = 0;
  puVar3 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar3 = 1;
  *(code **)(puVar3 + 2) = FUN_140087180;
  *(LineEditMenuIconsBehavior **)(puVar3 + 4) = pLVar1;
  QObject::connectImpl
            (local_38,(void **)param_1,(QObject *)&local_48,&pLVar1->vftablePtr,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar3,
             (int *)((ulonglong)in_stack_ffffffffffffff9c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_38);
  return pLVar1;
}

