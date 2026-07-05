/**
 * Function: FlashActionHelper
 * Address:  14025f430
 * Signature: FlashActionHelper * __thiscall FlashActionHelper(FlashActionHelper * this, QObject * param_1, QObject * param_2, longlong param_3)
 * Body size: 382 bytes
 */


FlashActionHelper * __thiscall
oclero::qlementine::FlashActionHelper::FlashActionHelper
          (FlashActionHelper *this,QObject *param_1,QObject *param_2,longlong param_3)

{
  QObject *this_00;
  FlashActionHelper *this_01;
  int iVar1;
  ExternalRefCountData *pEVar2;
  undefined8 uVar3;
  QVariant local_70 [32];
  ExternalRefCountData **local_50;
  ExternalRefCountData **local_48;
  undefined1 *local_40;
  FlashActionHelper *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  QObject::QObject((QObject *)this,param_1);
  this->vftablePtr = &vftable;
  (this->FlashActionHelper_data).offset_0x8 = 0xffffffff00000000;
  local_38 = this;
  if (param_2 == (QObject *)0x0) {
    pEVar2 = (ExternalRefCountData *)0x0;
  }
  else {
    pEVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  local_50 = &(local_38->FlashActionHelper_data).offset_0x10;
  (local_38->FlashActionHelper_data).offset_0x10 = pEVar2;
  (local_38->FlashActionHelper_data).offset_0x18 = param_2;
  if (param_1 == (QObject *)0x0) {
    pEVar2 = (ExternalRefCountData *)0x0;
  }
  else {
    pEVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
  }
  local_48 = &(local_38->FlashActionHelper_data).offset_0x20;
  (local_38->FlashActionHelper_data).offset_0x20 = pEVar2;
  (local_38->FlashActionHelper_data).offset_0x28 = param_1;
  local_40 = &(local_38->FlashActionHelper_data).field_0x30;
  (local_38->FlashActionHelper_data).offset_0x68 = 0;
  if (*(undefined8 **)(param_3 + 0x38) != (undefined8 *)0x0) {
    uVar3 = (**(code **)**(undefined8 **)(param_3 + 0x38))();
    (local_38->FlashActionHelper_data).offset_0x68 = uVar3;
  }
  if ((((*local_50 != (ExternalRefCountData *)0x0) && (*(int *)(*local_50 + 4) != 0)) &&
      ((local_38->FlashActionHelper_data).offset_0x18 != (QObject *)0x0)) &&
     ((*local_48 != (ExternalRefCountData *)0x0 &&
      (this_00 = (QObject *)(local_38->FlashActionHelper_data).offset_0x28,
      this_00 != (QObject *)0x0 && *(int *)(*local_48 + 4) != 0)))) {
    ::QVariant::QVariant(local_70,true);
    QObject::doSetProperty(this_00,"qlementine_flashing",local_70,local_70);
    ::QVariant::~QVariant(local_70);
    this_01 = local_38;
    QObject::blockSignals((QObject *)(local_38->FlashActionHelper_data).offset_0x18,true);
    iVar1 = QObject::startTimer((QObject *)this_01,0x3c,1);
    *(int *)((longlong)&(local_38->FlashActionHelper_data).offset_0x8 + 4) = iVar1;
  }
  return local_38;
}

