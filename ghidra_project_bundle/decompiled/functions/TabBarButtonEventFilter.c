/**
 * Function: TabBarButtonEventFilter
 * Address:  14007ec50
 * Signature: TabBarButtonEventFilter * __thiscall TabBarButtonEventFilter(TabBarButtonEventFilter * this, QObject * param_1)
 * Body size: 770 bytes
 */


TabBarButtonEventFilter * __thiscall
oclero::qlementine::TabBarButtonEventFilter::TabBarButtonEventFilter
          (TabBarButtonEventFilter *this,QObject *param_1)

{
  QObject QVar1;
  TabBarButtonEventFilter_vftable *pTVar2;
  QObject *this_00;
  TabBarButtonEventFilter_vftable *pTVar3;
  TabBarButtonEventFilter_vftable *pTVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  TabBarButtonEventFilter *local_58;
  TabBarButtonEventFilter *local_50;
  int *local_48;
  undefined8 *puStack_40;
  longlong local_38;
  undefined4 local_2c;
  TabBarButtonEventFilter *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  QObject::QObject((QObject *)this,param_1);
                    /* inlined constructor: oclero::qlementine::TabBarEventFilter::TabBarEventFilter
                        */
  this->vftablePtr = (TabBarButtonEventFilter_vftable *)&TabBarEventFilter::vftable;
  this[2].vftablePtr = (TabBarButtonEventFilter_vftable *)param_1;
  local_58 = this + 3;
  local_50 = this + 5;
  this[3].vftablePtr = (TabBarButtonEventFilter_vftable *)0x0;
  this[4].vftablePtr = (TabBarButtonEventFilter_vftable *)0x0;
  this[5].vftablePtr = (TabBarButtonEventFilter_vftable *)0x0;
  this[6].vftablePtr = (TabBarButtonEventFilter_vftable *)0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = (int *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = 0;
  local_28 = this;
  qt_qFindChildren_helper(param_1,&local_78,staticMetaObject_exref,&local_48,1);
  if (local_38 == 2) {
    this_00 = (QObject *)FUN_140b65d30(0x18);
    QVar1 = *(QObject *)(local_28 + 2);
    QObject::QObject(this_00,(QObject *)QVar1);
    *this_00 = (QObject)&vftable;
    this_00[2] = QVar1;
    pTVar4 = (TabBarButtonEventFilter_vftable *)*puStack_40;
    if (pTVar4 == (TabBarButtonEventFilter_vftable *)0x0) {
      pTVar3 = (TabBarButtonEventFilter_vftable *)0x0;
    }
    else {
      pTVar3 = (TabBarButtonEventFilter_vftable *)
               QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pTVar4);
    }
    pTVar2 = local_28[3].vftablePtr;
    local_28[3].vftablePtr = pTVar3;
    local_28[4].vftablePtr = pTVar4;
    if (pTVar2 != (TabBarButtonEventFilter_vftable *)0x0) {
      LOCK();
      *(int *)&pTVar2->metaObject = *(int *)&pTVar2->metaObject + -1;
      UNLOCK();
      if (*(int *)&pTVar2->metaObject == 0) {
        FUN_140b68ba8();
      }
      pTVar4 = local_28[4].vftablePtr;
    }
    QWidget::setFocusPolicy((QWidget *)pTVar4,0);
    QWidget::setSizePolicy((QWidget *)local_28[4].vftablePtr,0);
    pTVar4 = local_28[4].vftablePtr;
    (**(code **)((longlong)*(QObject *)&pTVar4->metaObject + 0x60))(pTVar4,&local_78);
    QWidget::setFixedSize((QWidget *)pTVar4,(QSize *)&local_78);
    if ((local_58->vftablePtr != (TabBarButtonEventFilter_vftable *)0x0) &&
       (*(int *)((longlong)&local_58->vftablePtr->metaObject + 4) != 0)) {
      pTVar4 = local_28[4].vftablePtr;
      local_2c = 0;
      if (pTVar4 != (TabBarButtonEventFilter_vftable *)0x0) {
        ::QVariant::QVariant((QVariant *)&local_78,&DAT_1414f3bc8,&local_2c);
        QObject::doSetProperty
                  ((QObject *)pTVar4,"autoIconColor",(QVariant *)&local_78,(QVariant *)&local_78);
        ::QVariant::~QVariant((QVariant *)&local_78);
      }
    }
    QObject::installEventFilter((QObject *)local_28[4].vftablePtr,(QObject *)this_00);
    pTVar4 = (TabBarButtonEventFilter_vftable *)puStack_40[1];
    if (pTVar4 == (TabBarButtonEventFilter_vftable *)0x0) {
      pTVar3 = (TabBarButtonEventFilter_vftable *)0x0;
    }
    else {
      pTVar3 = (TabBarButtonEventFilter_vftable *)
               QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pTVar4);
    }
    pTVar2 = local_28[5].vftablePtr;
    local_28[5].vftablePtr = pTVar3;
    local_28[6].vftablePtr = pTVar4;
    if (pTVar2 != (TabBarButtonEventFilter_vftable *)0x0) {
      LOCK();
      *(int *)&pTVar2->metaObject = *(int *)&pTVar2->metaObject + -1;
      UNLOCK();
      if (*(int *)&pTVar2->metaObject == 0) {
        FUN_140b68ba8();
      }
      pTVar4 = local_28[6].vftablePtr;
    }
    QWidget::setFocusPolicy((QWidget *)pTVar4,0);
    QWidget::setSizePolicy((QWidget *)local_28[6].vftablePtr,0);
    pTVar4 = local_28[6].vftablePtr;
    (**(code **)((longlong)*(QObject *)&pTVar4->metaObject + 0x60))(pTVar4,&local_78);
    QWidget::setFixedSize((QWidget *)pTVar4,(QSize *)&local_78);
    if ((local_50->vftablePtr != (TabBarButtonEventFilter_vftable *)0x0) &&
       (*(int *)((longlong)&local_50->vftablePtr->metaObject + 4) != 0)) {
      pTVar4 = local_28[6].vftablePtr;
      local_2c = 0;
      if (pTVar4 != (TabBarButtonEventFilter_vftable *)0x0) {
        ::QVariant::QVariant((QVariant *)&local_78,&DAT_1414f3bc8,&local_2c);
        QObject::doSetProperty
                  ((QObject *)pTVar4,"autoIconColor",(QVariant *)&local_78,(QVariant *)&local_78);
        ::QVariant::~QVariant((QVariant *)&local_78);
      }
    }
    QObject::installEventFilter((QObject *)local_28[6].vftablePtr,(QObject *)this_00);
  }
  if (local_48 != (int *)0x0) {
    LOCK();
    *local_48 = *local_48 + -1;
    UNLOCK();
    if (*local_48 == 0) {
      free(local_48);
    }
  }
  return local_28;
}

