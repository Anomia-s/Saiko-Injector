/**
 * Function: RoundedFocusFrame
 * Address:  140259910
 * Signature: RoundedFocusFrame * __thiscall RoundedFocusFrame(RoundedFocusFrame * this, QWidget * param_1)
 * Body size: 516 bytes
 */


RoundedFocusFrame * __thiscall
oclero::qlementine::RoundedFocusFrame::RoundedFocusFrame(RoundedFocusFrame *this,QWidget *param_1)

{
  QWidget *pQVar1;
  QStyle *pQVar2;
  QObject *pQVar3;
  longlong lVar4;
  QPaintDevice QVar5;
  undefined8 uVar6;
  undefined1 local_80 [32];
  RoundedFocusFrame_vftable1 **local_60;
  undefined1 *local_58;
  QWidget *local_50;
  QPaintDevice *local_48;
  undefined1 *local_40;
  QWidget *local_38;
  QPaintDevice local_30;
  QWidget *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  QAbstractButton::QAbstractButton((QAbstractButton *)this,param_1);
                    /* inlined constructor: oclero::qlementine::Switch::Switch */
  this->vftablePtr = (RoundedFocusFrame_vftable0 *)&Switch::vftable;
  this->vftablePtr = (RoundedFocusFrame_vftable1 *)&Switch::vftable;
  this[1].vftablePtr = (RoundedFocusFrame_vftable1 *)0x4000000000000000;
  *(undefined4 *)&this[2].field_0x8 = 0;
  local_60 = &this[2].vftablePtr;
  *(undefined4 *)&this[2].vftablePtr = 0;
  *(undefined1 *)((longlong)&this[2].vftablePtr + 4) = 0;
  local_28 = (QWidget *)this;
  QVariantAnimation::QVariantAnimation((QVariantAnimation *)local_60,(QObject *)0x0);
  local_58 = &local_28[3].field_0x8;
  QVariantAnimation::QVariantAnimation((QVariantAnimation *)local_58,(QObject *)0x0);
  local_50 = local_28 + 4;
  QVariantAnimation::QVariantAnimation((QVariantAnimation *)local_50,(QObject *)0x0);
  local_48 = &local_28[4].QPaintDevice;
  QVariantAnimation::QVariantAnimation((QVariantAnimation *)local_48,(QObject *)0x0);
  local_40 = &local_28[5].field_0x8;
  QVariantAnimation::QVariantAnimation((QVariantAnimation *)local_40,(QObject *)0x0);
  local_38 = local_28 + 6;
  QVariantAnimation::QVariantAnimation((QVariantAnimation *)local_38,(QObject *)0x0);
  local_28[6].QPaintDevice = (QPaintDevice)0x0;
  QAbstractButton::setCheckable((QAbstractButton *)local_28,true);
  QAbstractButton::setChecked((QAbstractButton *)local_28,false);
  QAbstractButton::setAutoRepeat((QAbstractButton *)local_28,false);
  FUN_140259ca0(local_28);
  QWidget::setSizePolicy(local_28,0x70000);
  pQVar2 = QWidget::style(local_28);
  pQVar3 = QMetaObject::cast((QMetaObject *)&DAT_140df5860,(QObject *)pQVar2);
  if (pQVar3 == (QObject *)0x0) {
    QVar5 = (QPaintDevice)0x4000000000000000;
  }
  else {
    lVar4 = FUN_140069820(pQVar3);
    QVar5 = (QPaintDevice)(double)(*(int *)(lVar4 + 0x570) * 2);
  }
  local_28[1].QPaintDevice = QVar5;
  local_30 = (QPaintDevice)FUN_140b65d30(0x48);
  pQVar1 = local_28;
  QFocusFrame::QFocusFrame((QFocusFrame *)local_30,(QWidget *)local_28);
  QVar5 = local_30;
  *(RoundedFocusFrame_vftable0 **)local_30 = &vftable;
  *(RoundedFocusFrame_vftable1 **)((longlong)local_30 + 0x10) = &vftable;
  *(QPaintDevice *)((longlong)local_30 + 0x28) = (QPaintDevice)0x0;
  *(sharedPainter **)((longlong)local_30 + 0x30) = (sharedPainter *)0x0;
  ((RoundedFocusFrame_vftable1 *)((longlong)local_30 + 0x38))->vfunction1 = (vfunction1 *)0x0;
  *(QPaintDevice *)((longlong)local_30 + 0x40) = (QPaintDevice)0x0;
  pQVar1[6].QPaintDevice = local_30;
  if (pQVar3 == (QObject *)0x0) {
    uVar6 = 0;
  }
  else {
    lVar4 = FUN_140069820(pQVar3);
    uVar6 = *(undefined8 *)(lVar4 + 0x550);
  }
  FUN_140257f70(local_80,uVar6);
  FUN_14025ca80(QVar5,local_80);
  QFocusFrame::setWidget((QFocusFrame *)local_28[6].QPaintDevice,(QWidget *)local_28);
  return (RoundedFocusFrame *)local_28;
}

