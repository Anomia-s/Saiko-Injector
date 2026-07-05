/**
 * Function: NotificationBadge
 * Address:  14054a050
 * Signature: NotificationBadge * __thiscall NotificationBadge(NotificationBadge * this, undefined8 param_1)
 * Body size: 423 bytes
 */


NotificationBadge * __thiscall
oclero::qlementine::NotificationBadge::NotificationBadge(NotificationBadge *this,undefined8 param_1)

{
  undefined8 *this_00;
  undefined4 *this_01;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  QStyle *pQVar4;
  QObject *pQVar5;
  QFont *pQVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  NotificationBadge *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  QWidget::QWidget((QWidget *)this,param_1,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  QString::QString((QString *)&(this->NotificationBadge_data).field_0x10);
  this_00 = &(this->NotificationBadge_data).offset_0x28;
  QColor::QColor((QColor *)this_00,3);
  this_01 = &(this->NotificationBadge_data).offset_0x38;
  QColor::QColor((QColor *)this_01,7);
  (this->NotificationBadge_data).offset_0x48 = 0x200000004;
  (this->NotificationBadge_data).offset_0x50 = 0x200000004;
  (this->NotificationBadge_data).offset_0x58 = 0;
  (this->NotificationBadge_data).offset_0x60 = 0;
  (this->NotificationBadge_data).offset_0x68 = 0;
  (this->NotificationBadge_data).offset_0x70 = 0;
  (this->NotificationBadge_data).offset_0x78 = 0xfffffffc00000004;
  local_38 = this;
  QWidget::setFocusPolicy((QWidget *)this,0);
  QWidget::setSizePolicy((QWidget *)local_38,0);
  QWidget::setAttribute((QWidget *)local_38,0x33,true);
  pQVar4 = QWidget::style((QWidget *)local_38);
  pQVar5 = QMetaObject::cast((QMetaObject *)&DAT_140df5860,(QObject *)pQVar4);
  if (pQVar5 == (QObject *)0x0) {
    QColor::QColor((QColor *)&local_48,7);
    (this->NotificationBadge_data).offset_0x38 = (undefined4)local_48;
    (this->NotificationBadge_data).offset_0x3c = local_48._4_4_;
    (this->NotificationBadge_data).offset_0x40 = (undefined4)uStack_40;
    (this->NotificationBadge_data).offset_0x44 = uStack_40._4_4_;
    QColor::QColor((QColor *)&local_48,3);
  }
  else {
    pQVar6 = (QFont *)(**(code **)(*(longlong *)pQVar5 + 0x408))(pQVar5,0xffffffff);
    QFont::QFont((QFont *)&local_48,pQVar6);
    QFont::setWeight((QFont *)&local_48,700);
    QWidget::setFont((QWidget *)local_38,(QFont *)&local_48);
    QFont::~QFont((QFont *)&local_48);
    puVar7 = (undefined4 *)(**(code **)(*(longlong *)pQVar5 + 0x3d0))(pQVar5,4,1);
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    *this_01 = *puVar7;
    (this->NotificationBadge_data).offset_0x3c = uVar1;
    (this->NotificationBadge_data).offset_0x40 = uVar2;
    (this->NotificationBadge_data).offset_0x44 = uVar3;
    puVar8 = (undefined8 *)(**(code **)(*(longlong *)pQVar5 + 0x3d8))(pQVar5,4,1);
    local_48 = *puVar8;
    uStack_40 = puVar8[1];
  }
  *this_00 = local_48;
  (this->NotificationBadge_data).offset_0x30 = uStack_40;
  return local_38;
}

