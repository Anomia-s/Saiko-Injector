/**
 * Function: vfunction28
 * Address:  14081ed90
 * Signature: void __thiscall vfunction28(QsciSciCallTip * this)
 * Body size: 151 bytes
 */


void __thiscall QsciSciCallTip::vfunction28(QsciSciCallTip *this)

{
  int iVar1;
  longlong *extraout_RAX;
  QPainter local_30 [8];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  Scintilla::SurfaceImpl::SurfaceImpl_Constructor_or_Destructor();
  if (extraout_RAX != (longlong *)0x0) {
    QPainter::QPainter(local_30,(QPaintDevice *)&this->vftablePtr);
    (**(code **)(*extraout_RAX + 8))(extraout_RAX,local_30);
    iVar1 = FUN_1407efc60((this->QsciSciCallTip_data).offset_0x10 + 0x10);
    (**(code **)(*extraout_RAX + 0x110))(extraout_RAX,iVar1 == 0xfde9);
    FUN_140a4e3b0((this->QsciSciCallTip_data).offset_0x10 + 0x900,extraout_RAX);
    (**(code **)*extraout_RAX)(extraout_RAX,1);
    QPainter::~QPainter(local_30);
  }
  return;
}

