/**
 * Function: CFloatingDragPreview
 * Address:  140597fa0
 * Signature: CFloatingDragPreview * __thiscall CFloatingDragPreview(CFloatingDragPreview * this, QWidget * param_1, undefined8 param_2)
 * Body size: 593 bytes
 */


CFloatingDragPreview * __thiscall
ads::CFloatingDragPreview::CFloatingDragPreview
          (CFloatingDragPreview *this,QWidget *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  CFloatingDragPreview *pCVar5;
  char cVar6;
  QObject *pQVar7;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar8;
  QObject local_60 [8];
  undefined8 *local_58;
  undefined4 local_50 [6];
  undefined8 local_38;
  CFloatingDragPreview *local_30;
  undefined8 local_28;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_28 = 0xfffffffffffffffe;
  QWidget::QWidget((QWidget *)this,param_2,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_30 = this;
  local_58 = (undefined8 *)FUN_140b65d30(0x68);
  pCVar5 = local_30;
  *local_58 = local_30;
  *(undefined4 *)(local_58 + 2) = 0;
  local_58[6] = 0;
  *(undefined1 *)(local_58 + 8) = 0;
  *(undefined1 (*) [16])(local_58 + 3) = (undefined1  [16])0x0;
  QPixmap::QPixmap((QPixmap *)(local_58 + 9));
  puVar4 = local_58;
  *(undefined1 *)(local_58 + 0xc) = 0;
  (pCVar5->CFloatingDragPreview_data).offset_0x0 = (longlong)local_58;
  local_58[1] = param_1;
  pQVar7 = QMetaObject::cast((QMetaObject *)&DAT_140e00e30,(QObject *)param_1);
  if (pQVar7 == (QObject *)0x0) {
    pQVar7 = QMetaObject::cast((QMetaObject *)&DAT_140dff7e0,(QObject *)puVar4[1]);
    if (pQVar7 == (QObject *)0x0) {
      local_50[0] = 0;
    }
    else {
      FUN_140573250(pQVar7,local_50,0);
    }
  }
  else {
    FUN_14028e0f0(pQVar7,local_50);
  }
  *(undefined4 *)((local_30->CFloatingDragPreview_data).offset_0x0 + 0x10) = local_50[0];
  QWidget::setAttribute((QWidget *)local_30,0x37,true);
  cVar6 = FUN_1402765c0(0x1000);
  if (cVar6 == '\0') {
    QWidget::setWindowFlags((QWidget *)local_30,0x80b);
    QWidget::setAttribute((QWidget *)local_30,9,true);
    QWidget::setAttribute((QWidget *)local_30,0x78,true);
  }
  else {
    QWidget::setWindowFlags((QWidget *)local_30,0x8008001);
  }
  cVar6 = FUN_1402765c0(0x800);
  if (cVar6 != '\0') {
    uVar1 = *(undefined8 *)(*(longlong *)&param_1[1].field_0x8 + 0x1c);
    uVar2 = *(undefined8 *)(*(longlong *)&param_1[1].field_0x8 + 0x14);
    local_38 = CONCAT44(((int)((ulonglong)uVar1 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20)) + 1,
                        ((int)uVar1 - (int)uVar2) + 1);
    QPixmap::QPixmap((QPixmap *)local_50,(QSize *)&local_38);
    QPixmap::operator=((QPixmap *)((local_30->CFloatingDragPreview_data).offset_0x0 + 0x48),
                       (QPixmap *)local_50);
    QPixmap::~QPixmap((QPixmap *)local_50);
    QRegion::QRegion((QRegion *)local_50);
    local_38 = 0;
    QWidget::render(param_1,(local_30->CFloatingDragPreview_data).offset_0x0 + 0x48,&local_38,
                    local_50,CONCAT44(uVar8,3));
    QRegion::~QRegion((QRegion *)local_50);
  }
  pcVar3 = self_exref;
  QObject::connect(local_60,*(char **)self_exref,
                   (QObject *)"2applicationStateChanged(Qt::ApplicationState)",(char *)local_30,
                   0x41397211);
  QMetaObject::Connection::~Connection((Connection *)local_60);
  QObject::installEventFilter(*(QObject **)pcVar3,(QObject *)local_30);
  return local_30;
}

