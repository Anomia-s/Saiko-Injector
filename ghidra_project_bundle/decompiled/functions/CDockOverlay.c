/**
 * Function: CDockOverlay
 * Address:  1405770a0
 * Signature: CDockOverlay * __thiscall CDockOverlay(CDockOverlay * this, undefined8 param_1, undefined4 param_2)
 * Body size: 319 bytes
 */


CDockOverlay * __thiscall
ads::CDockOverlay::CDockOverlay(CDockOverlay *this,undefined8 param_1,undefined4 param_2)

{
  QPaintDevice QVar1;
  QString local_48 [24];
  CDockOverlayCross *local_30;
  QWidget *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  QFrame::QFrame((QFrame *)this,param_1,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_28 = (QWidget *)this;
  QVar1 = (QPaintDevice)FUN_140b65d30(0x48);
  *(QWidget **)QVar1 = local_28;
  *(undefined4 *)((longlong)QVar1 + 8) = 0;
  *(metric **)((longlong)QVar1 + 0x18) = (metric *)0x0;
  *(initPainter **)((longlong)QVar1 + 0x20) = (initPainter *)0x0;
  *(undefined4 *)((longlong)QVar1 + 0x28) = 0;
  *(undefined1 *)((longlong)QVar1 + 0x2c) = 1;
  *(undefined4 *)((longlong)QVar1 + 0x34) = 0;
  *(undefined4 *)&((CDockOverlay_vftable1 *)((longlong)QVar1 + 0x38))->vfunction1 = 0;
  *(undefined4 *)((longlong)QVar1 + 0x3c) = 0xffffffff;
  *(undefined4 *)((longlong)QVar1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)QVar1 + 0x44) = 0xfffffffe;
  local_28[1].QPaintDevice = QVar1;
  *(undefined4 *)((longlong)QVar1 + 0x30) = param_2;
  local_30 = (CDockOverlayCross *)FUN_140b65d30(0x30);
  CDockOverlayCross::CDockOverlayCross(local_30,&local_28->QObject);
  *(CDockOverlayCross **)((longlong)local_28[1].QPaintDevice + 0x10) = local_30;
  QWidget::setWindowFlags(local_28,0x80b);
  QWidget::setWindowOpacity(local_28,1.0);
  QString::QString(local_48,"DockOverlay");
  QWidget::setWindowTitle(local_28,local_48);
  QString::~QString(local_48);
  QWidget::setAttribute(local_28,9,true);
  QWidget::setAttribute(local_28,0x78,true);
  (**(code **)(*(longlong *)*(paintEngine **)((longlong)local_28[1].QPaintDevice + 0x10) + 0x58))();
  (**(setVisible **)((longlong)local_28->QObject + 0x58))(local_28,false);
  return (CDockOverlay *)local_28;
}

