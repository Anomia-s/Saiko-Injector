/**
 * Function: Outliner
 * Address:  140295140
 * Signature: Outliner * __thiscall Outliner(Outliner * this, QWidget * param_1)
 * Body size: 1344 bytes
 */


Outliner * __thiscall ldv::editor::Outliner::Outliner(Outliner *this,QWidget *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  QTreeWidgetItem *pQVar3;
  Outliner *pOVar4;
  undefined4 *puVar5;
  uint in_stack_ffffffffffffff4c;
  QObject local_98 [8];
  QObject local_90 [8];
  QObject local_88 [8];
  undefined1 *local_80;
  QString local_78 [24];
  QTreeWidgetItem *local_60;
  undefined8 local_58;
  undefined4 local_50;
  QIcon local_38 [8];
  Outliner *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  QTreeWidget::QTreeWidget((QTreeWidget *)this,param_1);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->Outliner_data).offset_0x10 = 0;
  local_80 = &(this->Outliner_data).field_0x30;
  (this->Outliner_data).offset_0x18 = 0;
  (this->Outliner_data).offset_0x20 = 0;
  (this->Outliner_data).offset_0x28 = 0;
  local_58 = (code *)((ulonglong)local_58._4_4_ << 0x20);
  local_30 = this;
  FUN_14000ad50(local_80,&local_58);
  QTreeView::setHeaderHidden((QTreeView *)local_30,true);
  QTreeView::setRootIsDecorated((QTreeView *)local_30,true);
  QAbstractItemView::setSelectionMode((QAbstractItemView *)local_30,3);
  QAbstractItemView::setAlternatingRowColors((QAbstractItemView *)local_30,true);
  local_60 = (QTreeWidgetItem *)FUN_140b65d30(0x60);
  pOVar4 = local_30;
  QTreeWidgetItem::QTreeWidgetItem(local_60,(QTreeWidget *)local_30,0);
  pQVar3 = local_60;
  puVar1 = &(pOVar4->Outliner_data).offset_0x18;
  *puVar1 = local_60;
  QString::QString(local_78,"World");
  ::QVariant::QVariant((QVariant *)&local_58,local_78);
  (**(code **)(*(longlong *)pQVar3 + 0x18))(pQVar3,0,0,(QVariant *)&local_58);
  ::QVariant::~QVariant((QVariant *)&local_58);
  QString::~QString(local_78);
  plVar2 = (longlong *)*puVar1;
  QString::QString(local_78,":/icons/world.svg");
  QIcon::QIcon(local_38,local_78);
  QIcon::operator_class_QVariant(local_38);
  (**(code **)(*plVar2 + 0x18))(plVar2,0,1,&local_58);
  ::QVariant::~QVariant((QVariant *)&local_58);
  QIcon::~QIcon(local_38);
  QString::~QString(local_78);
  QTreeWidgetItem::setExpanded((QTreeWidgetItem *)*puVar1,true);
  pQVar3 = (QTreeWidgetItem *)*puVar1;
  QTreeWidgetItem::flags(pQVar3);
  QTreeWidgetItem::setFlags(pQVar3,(uint)local_58 & 0xfffffffd);
  local_60 = (QTreeWidgetItem *)FUN_140b65d30(0x60);
  pOVar4 = local_30;
  QTreeWidgetItem::QTreeWidgetItem(local_60,(QTreeWidget *)local_30,0);
  pQVar3 = local_60;
  (pOVar4->Outliner_data).offset_0x20 = local_60;
  QString::QString(local_78,"Lighting");
  ::QVariant::QVariant((QVariant *)&local_58,local_78);
  (**(code **)(*(longlong *)pQVar3 + 0x18))(pQVar3,0,0,(QVariant *)&local_58);
  ::QVariant::~QVariant((QVariant *)&local_58);
  QString::~QString(local_78);
  plVar2 = (longlong *)(local_30->Outliner_data).offset_0x20;
  QString::QString(local_78,":/icons/sun.svg");
  QIcon::QIcon(local_38,local_78);
  QIcon::operator_class_QVariant(local_38);
  (**(code **)(*plVar2 + 0x18))(plVar2,0,1,&local_58);
  ::QVariant::~QVariant((QVariant *)&local_58);
  QIcon::~QIcon(local_38);
  QString::~QString(local_78);
  pOVar4 = local_30;
  plVar2 = (longlong *)(local_30->Outliner_data).offset_0x20;
  ::QVariant::QVariant((QVariant *)&local_58,DAT_14151f7b8);
  (**(code **)(*plVar2 + 0x18))(plVar2,0,0x101,(QVariant *)&local_58);
  ::QVariant::~QVariant((QVariant *)&local_58);
  pQVar3 = (QTreeWidgetItem *)(pOVar4->Outliner_data).offset_0x20;
  QTreeWidgetItem::flags(pQVar3);
  QTreeWidgetItem::setFlags(pQVar3,(uint)local_58 & 0xfffffffd);
  local_60 = (QTreeWidgetItem *)FUN_140b65d30(0x60);
  pOVar4 = local_30;
  QTreeWidgetItem::QTreeWidgetItem(local_60,(QTreeWidget *)local_30,0);
  pQVar3 = local_60;
  (pOVar4->Outliner_data).offset_0x28 = local_60;
  QString::QString(local_78,"Audio");
  ::QVariant::QVariant((QVariant *)&local_58,local_78);
  (**(code **)(*(longlong *)pQVar3 + 0x18))(pQVar3,0,0,(QVariant *)&local_58);
  ::QVariant::~QVariant((QVariant *)&local_58);
  QString::~QString(local_78);
  plVar2 = (longlong *)(local_30->Outliner_data).offset_0x28;
  QString::QString(local_78,":/icons/audio.svg");
  QIcon::QIcon(local_38,local_78);
  QIcon::operator_class_QVariant(local_38);
  (**(code **)(*plVar2 + 0x18))(plVar2,0,1,&local_58);
  ::QVariant::~QVariant((QVariant *)&local_58);
  QIcon::~QIcon(local_38);
  QString::~QString(local_78);
  pQVar3 = (QTreeWidgetItem *)(local_30->Outliner_data).offset_0x28;
  QTreeWidgetItem::flags(pQVar3);
  QTreeWidgetItem::setFlags(pQVar3,(uint)local_58 & 0xfffffffd);
  local_58 = itemSelectionChanged_exref;
  local_50 = 0;
  puVar5 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar5 = 1;
  *(code **)(puVar5 + 2) = FUN_140298110;
  *(Outliner **)(puVar5 + 4) = local_30;
  QObject::connectImpl
            (local_98,&local_30->vftablePtr,(QObject *)&local_58,&local_30->vftablePtr,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar5,
             (int *)((ulonglong)in_stack_ffffffffffffff4c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_98);
  local_58 = itemDoubleClicked_exref;
  local_50 = 0;
  puVar5 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar5 = 1;
  *(undefined1 **)(puVar5 + 2) = &LAB_140298280;
  *(Outliner **)(puVar5 + 4) = local_30;
  QObject::connectImpl
            (local_90,&local_30->vftablePtr,(QObject *)&local_58,&local_30->vftablePtr,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar5,
             (int *)((ulonglong)in_stack_ffffffffffffff4c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_90);
  local_58 = itemChanged_exref;
  local_50 = 0;
  puVar5 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar5 = 1;
  *(code **)(puVar5 + 2) = FUN_1402982d0;
  *(Outliner **)(puVar5 + 4) = local_30;
  QObject::connectImpl
            (local_88,&local_30->vftablePtr,(QObject *)&local_58,&local_30->vftablePtr,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar5,
             (int *)((ulonglong)in_stack_ffffffffffffff4c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_88);
  return local_30;
}

