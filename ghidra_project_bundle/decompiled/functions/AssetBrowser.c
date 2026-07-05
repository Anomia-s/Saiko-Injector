/**
 * Function: AssetBrowser
 * Address:  1402a0cf0
 * Signature: AssetBrowser * __thiscall AssetBrowser(AssetBrowser * this)
 * Body size: 664 bytes
 */


AssetBrowser * __thiscall ldv::editor::AssetBrowser::AssetBrowser(AssetBrowser *this)

{
  void **ppvVar1;
  QLayout *pQVar2;
  undefined4 *puVar3;
  uint in_stack_ffffffffffffff8c;
  code *local_60;
  QObject local_58 [8];
  QObject local_50 [8];
  undefined1 *local_48;
  undefined8 *local_40;
  code *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  QLayout *local_28;
  AssetBrowser *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  QWidget::QWidget();
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->AssetBrowser_data).offset_0x10 = 0;
  local_48 = &(this->AssetBrowser_data).field_0x18;
  QString::QString((QString *)local_48);
  local_40 = &(this->AssetBrowser_data).offset_0x30;
  (this->AssetBrowser_data).offset_0x30 = 0;
  (this->AssetBrowser_data).offset_0x38 = 0;
  (this->AssetBrowser_data).offset_0x40 = 0;
  (this->AssetBrowser_data).offset_0x48 = 0xffffffff;
  (this->AssetBrowser_data).offset_0x4c = 0;
  (this->AssetBrowser_data).offset_0x50 = 0;
  (this->AssetBrowser_data).offset_0x58 = 0;
  (this->AssetBrowser_data).offset_0x60 = 0;
  (this->AssetBrowser_data).offset_0x68 = 0;
  (this->AssetBrowser_data).offset_0x70 = 0;
  (this->AssetBrowser_data).offset_0x78 = 0;
  (this->AssetBrowser_data).offset_0x80 = 0;
  (this->AssetBrowser_data).offset_0x88 = 0;
  (this->AssetBrowser_data).offset_0x90 = 0;
  (this->AssetBrowser_data).offset_0x98 = 0;
  (this->AssetBrowser_data).offset_0xa0 = 0;
  (this->AssetBrowser_data).offset_0xa8 = 0;
  local_20 = this;
  local_28 = (QLayout *)FUN_140b65d30(0x20);
  QVBoxLayout::QVBoxLayout((QVBoxLayout *)local_28,(QWidget *)local_20);
  pQVar2 = local_28;
  QLayout::setContentsMargins(local_28,0,0,0,0);
  (**(code **)(*(longlong *)pQVar2 + 0x60))(pQVar2,2);
  FUN_1402a1060(local_20);
  AssetItemDelegate::AssetItemDelegate_Constructor_or_Destructor((QWidget *)local_20);
  FUN_1402a1b30(local_20);
  local_28 = (QLayout *)FUN_140b65d30(0x10);
  QFileSystemWatcher::QFileSystemWatcher((QFileSystemWatcher *)local_28,(QObject *)local_20);
  (local_20->AssetBrowser_data).offset_0xa0 = local_28;
  local_28 = (QLayout *)FUN_140b65d30(0x10);
  QTimer::QTimer((QTimer *)local_28,(QObject *)local_20);
  (local_20->AssetBrowser_data).offset_0xa8 = local_28;
  QTimer::setSingleShot((QTimer *)local_28,true);
  QTimer::setInterval((QTimer *)(local_20->AssetBrowser_data).offset_0xa8,200);
  local_38 = FUN_1402a2500;
  uStack_30 = 0;
  ppvVar1 = (void **)(local_20->AssetBrowser_data).offset_0xa8;
  local_60 = timeout_exref;
  puVar3 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar3 = 1;
  *(undefined1 **)(puVar3 + 2) = &LAB_140085340;
  *(code **)(puVar3 + 4) = local_38;
  *(ulonglong *)(puVar3 + 6) = CONCAT44(uStack_2c,uStack_30);
  QObject::connectImpl
            (local_58,ppvVar1,(QObject *)&local_60,&local_20->vftablePtr,
             (QSlotObjectBase *)&local_38,(ConnectionType)puVar3,
             (int *)((ulonglong)in_stack_ffffffffffffff8c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_58);
  ppvVar1 = (void **)(local_20->AssetBrowser_data).offset_0xa0;
  local_38 = directoryChanged_exref;
  puVar3 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar3 = 1;
  *(undefined1 **)(puVar3 + 2) = &LAB_1402a36d0;
  *(AssetBrowser **)(puVar3 + 4) = local_20;
  QObject::connectImpl
            (local_50,ppvVar1,(QObject *)&local_38,&local_20->vftablePtr,(QSlotObjectBase *)0x0,
             (ConnectionType)puVar3,(int *)((ulonglong)in_stack_ffffffffffffff8c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_50);
  FUN_1402a2520(local_20);
  return local_20;
}

