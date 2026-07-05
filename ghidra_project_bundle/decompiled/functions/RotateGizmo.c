/**
 * Function: RotateGizmo
 * Address:  140298e20
 * Signature: void __thiscall RotateGizmo(RotateGizmo * this)
 * Body size: 832 bytes
 */


void __thiscall ldv::editor::RotateGizmo::RotateGizmo(RotateGizmo *this)

{
  QObject *this_00;
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
                    /* inlined constructor: ldv::editor::ViewportWidget::ViewportWidget */
  this->vftablePtr = (RotateGizmo_vftable *)&ViewportWidget::vftable;
  *(ViewportWidget_vftable1 **)&(this->RotateGizmo_data).field_0x8 = &ViewportWidget::vftable;
  this_00 = (QObject *)this[0x23c].RotateGizmo_data.offset_0x40;
  if (this_00 != (QObject *)0x0) {
    QObject::deleteLater(this_00);
  }
  lVar1 = this[0x23d].RotateGizmo_data.offset_0x40;
  if (lVar1 != 0) {
    uVar3 = this[0x23d].RotateGizmo_data.offset_0x50 - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) goto LAB_140299147;
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    this[0x23d].RotateGizmo_data.offset_0x40 = 0;
    this[0x23d].RotateGizmo_data.offset_0x48 = 0;
    this[0x23d].RotateGizmo_data.offset_0x50 = 0;
  }
                    /* inlined constructor: ldv::editor::ScaleGizmo::ScaleGizmo */
  this[0x23a].RotateGizmo_data.offset_0x68 = &ScaleGizmo::vftable;
  lVar1 = this[0x23b].RotateGizmo_data.offset_0x50;
  if (lVar1 != 0) {
    uVar3 = this[0x23b].RotateGizmo_data.offset_0x60 - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) goto LAB_140299147;
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    this[0x23b].RotateGizmo_data.offset_0x50 = 0;
    this[0x23b].RotateGizmo_data.offset_0x58 = 0;
    this[0x23b].RotateGizmo_data.offset_0x60 = 0;
  }
  lVar1 = *(longlong *)&this[0x23b].RotateGizmo_data.field_0x38;
  if (lVar1 != 0) {
    uVar3 = this[0x23b].RotateGizmo_data.offset_0x48 - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) goto LAB_140299147;
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    *(undefined8 *)&this[0x23b].RotateGizmo_data.field_0x38 = 0;
    this[0x23b].RotateGizmo_data.offset_0x40 = 0;
    this[0x23b].RotateGizmo_data.offset_0x48 = 0;
  }
                    /* inlined constructor: ldv::editor::MoveGizmo::MoveGizmo */
  this[0x239].RotateGizmo_data.offset_0x50 = &MoveGizmo::vftable;
  lVar1 = *(longlong *)&this[0x23a].RotateGizmo_data.field_0x8;
  if (lVar1 != 0) {
    uVar3 = *(longlong *)&this[0x23a].RotateGizmo_data.field_0x18 - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) goto LAB_140299147;
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    *(undefined8 *)&this[0x23a].RotateGizmo_data.field_0x8 = 0;
    *(undefined8 *)&this[0x23a].RotateGizmo_data.field_0x10 = 0;
    *(undefined8 *)&this[0x23a].RotateGizmo_data.field_0x18 = 0;
  }
  *(RotateGizmo_vftable **)&this[0x238].RotateGizmo_data.field_0x8 = &vftable;
  lVar1 = this[0x238].RotateGizmo_data.offset_0x68;
  if (lVar1 != 0) {
    uVar3 = *(longlong *)&this[0x239].RotateGizmo_data - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) goto LAB_140299147;
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    this[0x238].RotateGizmo_data.offset_0x68 = 0;
    this[0x239].vftablePtr = (RotateGizmo_vftable *)0x0;
    *(undefined8 *)&this[0x239].RotateGizmo_data = 0;
  }
  lVar1 = this[0x238].RotateGizmo_data.offset_0x50;
  if (lVar1 != 0) {
    uVar3 = this[0x238].RotateGizmo_data.offset_0x60 - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) goto LAB_140299147;
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    this[0x238].RotateGizmo_data.offset_0x50 = 0;
    this[0x238].RotateGizmo_data.offset_0x58 = 0;
    this[0x238].RotateGizmo_data.offset_0x60 = 0;
  }
  QString::~QString((QString *)&this[0x237].RotateGizmo_data.offset_0x48);
  lVar1 = *(longlong *)&this[0x237].RotateGizmo_data.field_0x10;
  if (lVar1 != 0) {
    uVar3 = *(longlong *)&this[0x237].RotateGizmo_data.field_0x20 - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) {
LAB_140299147:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    *(undefined8 *)&this[0x237].RotateGizmo_data.field_0x10 = 0;
    *(undefined8 *)&this[0x237].RotateGizmo_data.field_0x18 = 0;
    *(undefined8 *)&this[0x237].RotateGizmo_data.field_0x20 = 0;
  }
  FUN_14029ea70(&(this->RotateGizmo_data).field_0x28);
  FUN_14000a5f0(&this[0x231].RotateGizmo_data.offset_0x50);
  FUN_14000a5f0(&this[0x22e].RotateGizmo_data.field_0x10);
  FUN_140061ef0(&this[0x22b].RotateGizmo_data.offset_0x50);
  FUN_14029d930(&this[0x22a].RotateGizmo_data.offset_0x40);
  FUN_14029dcd0(&this[0x228].RotateGizmo_data.field_0x8);
  FUN_14000b0d0(&(this->RotateGizmo_data).field_0x38);
                    /* WARNING: Could not recover jumptable at 0x000140299140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QWidget::~QWidget((QWidget *)this);
  return;
}

