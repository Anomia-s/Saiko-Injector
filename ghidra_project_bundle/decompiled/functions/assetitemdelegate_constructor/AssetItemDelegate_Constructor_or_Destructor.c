/**
 * Function: AssetItemDelegate_Constructor_or_Destructor
 * Address:  1402a18f0
 * Signature: void __fastcall AssetItemDelegate_Constructor_or_Destructor(QWidget * param_1)
 * Body size: 375 bytes
 */


void ldv::editor::AssetItemDelegate::AssetItemDelegate_Constructor_or_Destructor(QWidget *param_1)

{
  QLayout *pQVar1;
  QObject *pQVar2;
  char *local_30;
  undefined8 local_28;
  QPaintDevice local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = (QPaintDevice)FUN_140b65d30(0x50);
  AssetFileModel::AssetFileModel((AssetFileModel *)local_20,(QObject *)param_1);
  param_1[6].QPaintDevice = local_20;
  local_20 = (QPaintDevice)FUN_140b65d30(0x28);
  AssetFilterProxy::AssetFilterProxy((AssetFilterProxy *)local_20,(QObject *)param_1);
  param_1[7].QObject = (QObject)local_20;
  (**(code **)(*(longlong *)local_20 + 0x180))
            ((void *)local_20,(QAbstractItemModel *)param_1[6].QPaintDevice);
  local_20 = (QPaintDevice)FUN_140b65d30(0x10);
  QStyledItemDelegate::QStyledItemDelegate((QStyledItemDelegate *)local_20,(QObject *)param_1);
  ((QAbstractItemDelegate *)local_20)->QObject = (QObject)&vftable;
  *(QPaintDevice *)&param_1[7].field_0x8 = local_20;
  local_20 = (QPaintDevice)FUN_140b65d30(0x28);
  QListView::QListView((QListView *)local_20,(QWidget *)param_1);
  *(QPaintDevice *)&param_1[6].field_0x8 = local_20;
  local_30 = "AssetFileList";
  local_28 = 0xd;
  QObject::setObjectName((QObject *)local_20,&local_30);
  (**(code **)(**(longlong **)&param_1[6].field_0x8 + 400))
            (*(longlong **)&param_1[6].field_0x8,param_1[7].QObject);
  QAbstractItemView::setItemDelegate
            (*(QAbstractItemView **)&param_1[6].field_0x8,
             *(QAbstractItemDelegate **)&param_1[7].field_0x8);
  QAbstractItemView::setSelectionMode(*(QAbstractItemView **)&param_1[6].field_0x8,3);
  QWidget::setContextMenuPolicy(*(QWidget **)&param_1[6].field_0x8,3);
  QAbstractItemView::setDragEnabled(*(QAbstractItemView **)&param_1[6].field_0x8,true);
  pQVar1 = QWidget::layout(param_1);
  pQVar2 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)pQVar1);
  QBoxLayout::addWidget((QBoxLayout *)pQVar2,*(undefined8 *)&param_1[6].field_0x8,1,0);
  return;
}

