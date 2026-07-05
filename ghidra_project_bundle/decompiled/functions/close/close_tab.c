/**
 * Function: close_tab
 * Address:  140585b10
 * Signature: undefined close_tab(void)
 * Body size: 830 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void close_tab(undefined8 *param_1)

{
  undefined8 uVar1;
  CElidingLabel *this;
  byte bVar2;
  int iVar3;
  QObject *pQVar4;
  uint uVar5;
  double dVar6;
  QObject local_80 [8];
  QObject local_78 [8];
  char *local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  QString local_50 [28];
  uint local_34;
  CElidingLabel *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = (CElidingLabel *)FUN_140b65d30(0x30);
  ads::CElidingLabel::CElidingLabel(local_30);
  param_1[3] = local_30;
  bVar2 = FUN_1402765c0(0x4000000);
  FUN_140599ef0(param_1[3],(uint)bVar2 * 2 + 1);
  uVar1 = param_1[3];
  QWidget::windowTitle((QWidget *)param_1[1]);
  FUN_14059a2b0(uVar1,local_50);
  QString::~QString(local_50);
  local_70 = "dockWidgetTabLabel";
  local_68 = 0x12;
  QObject::setObjectName((QObject *)param_1[3],&local_70);
  QLabel::setAlignment((QLabel *)param_1[3],0x84);
  QObject::connect(local_80,(char *)param_1[3],(QObject *)"2elidedChanged(bool)",(char *)*param_1,
                   0x41396bf3);
  QMetaObject::Connection::~Connection((Connection *)local_80);
  pQVar4 = (QObject *)FUN_140585f40(param_1);
  param_1[0xb] = pQVar4;
  local_60 = "tabCloseButton";
  local_58 = 0xe;
  QObject::setObjectName(pQVar4,&local_60);
  uVar5 = 0;
  FUN_14074acd0(param_1[0xb],3,0);
  QWidget::setSizePolicy((QWidget *)param_1[0xb]);
  QWidget::setFocusPolicy((QWidget *)param_1[0xb],0);
  FUN_14028e0f0(param_1[1],local_50);
  QWidget::sizePolicy((QWidget *)param_1[0xb]);
  if (((byte)local_50[0] & 1) != 0) {
    bVar2 = FUN_1402765c0(0x100);
    uVar5 = (uint)bVar2 << 0x1f;
  }
  local_34 = local_34 & 0x7fffffff | uVar5;
  QWidget::setSizePolicy((QWidget *)param_1[0xb]);
  QMetaObject::tr((QMetaObject *)staticMetaObject_exref,(char *)local_50,"Close Tab",0);
  QWidget::setToolTip((QWidget *)param_1[0xb],local_50);
  QString::~QString(local_50);
  QObject::connect(local_78,(char *)param_1[0xb],(QObject *)"2clicked()",(char *)*param_1,0x41399def
                  );
  QMetaObject::Connection::~Connection((Connection *)local_78);
  QFontMetrics::QFontMetrics
            ((QFontMetrics *)local_50,(QFont *)(*(longlong *)(param_1[3] + 0x20) + 0x38));
  iVar3 = QFontMetrics::height((QFontMetrics *)local_50);
  local_30 = (CElidingLabel *)FUN_140b65d30(0x20);
  QBoxLayout::QBoxLayout((QBoxLayout *)local_30,0,(QWidget *)0x0);
  this = local_30;
  iVar3 = (int)((double)((ulonglong)((double)iVar3 * 0.25) & 0x8000000000000000 |
                        (ulonglong)DAT_140dddd90) + (double)iVar3 * 0.25);
  QLayout::setContentsMargins((QLayout *)local_30,iVar3 * 2,0,0,0);
  (**(code **)(*(longlong *)this + 0x60))(this,0);
  QWidget::setLayout((QWidget *)*param_1,(QLayout *)this);
  QBoxLayout::addWidget((QBoxLayout *)this,param_1[3],1,0);
  QBoxLayout::addSpacing((QBoxLayout *)this,iVar3);
  QBoxLayout::addWidget((QBoxLayout *)this,param_1[0xb],0,0);
  dVar6 = ((double)iVar3 * 4.0) / 3.0;
  QBoxLayout::addSpacing
            ((QBoxLayout *)this,
             (int)((double)((ulonglong)dVar6 & 0x8000000000000000 | (ulonglong)DAT_140dddd90) +
                  dVar6));
  QLayoutItem::setAlignment((QLayoutItem *)((longlong)this + 0x10),0x84);
  (**(code **)(*(longlong *)param_1[3] + 0x58))((longlong *)param_1[3],1);
  QFontMetrics::~QFontMetrics((QFontMetrics *)local_50);
  return;
}

