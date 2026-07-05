/**
 * Function: PopoverButton
 * Address:  14054edb0
 * Signature: PopoverButton * __thiscall PopoverButton(PopoverButton * this, QString * param_1, QIcon * param_2, QWidget * param_3)
 * Body size: 505 bytes
 */


PopoverButton * __thiscall
oclero::qlementine::PopoverButton::PopoverButton
          (PopoverButton *this,QString *param_1,QIcon *param_2,QWidget *param_3)

{
  PopoverButton_vftable1 *pPVar1;
  undefined4 *puVar2;
  uint in_stack_ffffffffffffff8c;
  QObject local_58 [8];
  QObject local_50 [8];
  QObject local_48 [8];
  PopoverButton_vftable1 *local_40;
  code *local_38;
  undefined4 local_30;
  PopoverButton *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  QPushButton::QPushButton((QPushButton *)this,param_2,param_1,param_3);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_28 = this;
  local_40 = (PopoverButton_vftable1 *)FUN_140b65d30(0x168);
  std::
  _Func_impl_no_alloc<`public:___cdecl_oclero::qlementine::Popover::Popover(QWidget*___ptr64)___ptr64'::`1'::<lambda_0>,void>
  ::
  _Func_impl_no_alloc<_public:___cdecl_oclero::qlementine::Popover::Popover(QWidget*___ptr64)___ptr64_::_1_::<lambda_0>,void>
            ((_Func_impl_no_alloc<_public:___cdecl_oclero::qlementine::Popover::Popover(QWidget*___ptr64)___ptr64_::_1_::<lambda_0>,void>
              *)local_40);
  local_28[1].vftablePtr = local_40;
  FUN_14054cb70();
  local_38 = clicked_exref;
  local_30 = 0;
  puVar2 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar2 = 1;
  *(undefined1 **)(puVar2 + 2) = &LAB_14054f2c0;
  *(PopoverButton **)(puVar2 + 4) = local_28;
  QObject::connectImpl
            (local_58,&local_28->vftablePtr,(QObject *)&local_38,&local_28->vftablePtr,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar2,
             (int *)((ulonglong)in_stack_ffffffffffffff8c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_58);
  pPVar1 = local_28[1].vftablePtr;
  local_38 = FUN_140232780;
  local_30 = 0;
  puVar2 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_14054f2f0;
  *(PopoverButton **)(puVar2 + 4) = local_28;
  QObject::connectImpl
            (local_50,&pPVar1->vfunction1,(QObject *)&local_38,&local_28->vftablePtr,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar2,
             (int *)((ulonglong)in_stack_ffffffffffffff8c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_50);
  pPVar1 = local_28[1].vftablePtr;
  local_38 = (code *)&LAB_140232760;
  local_30 = 0;
  puVar2 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar2 = 1;
  *(undefined **)(puVar2 + 2) = &DAT_14054f350;
  *(PopoverButton **)(puVar2 + 4) = local_28;
  QObject::connectImpl
            (local_48,&pPVar1->vfunction1,(QObject *)&local_38,&local_28->vftablePtr,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar2,
             (int *)((ulonglong)in_stack_ffffffffffffff8c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_48);
  return local_28;
}

