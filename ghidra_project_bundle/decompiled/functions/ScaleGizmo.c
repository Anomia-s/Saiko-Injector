/**
 * Function: ScaleGizmo
 * Address:  140298440
 * Signature: ScaleGizmo * __thiscall ScaleGizmo(ScaleGizmo * this, undefined4 param_1, undefined8 param_2)
 * Body size: 1371 bytes
 */


ScaleGizmo * __thiscall
ldv::editor::ScaleGizmo::ScaleGizmo(ScaleGizmo *this,undefined4 param_1,undefined8 param_2)

{
  longlong *plVar1;
  ScaleGizmo *pSVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  QWidget *pQVar7;
  int *local_40;
  wchar_t *local_38;
  undefined8 local_30;
  ScaleGizmo *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  QWidget::QWidget((QWidget *)this,param_2,0);
                    /* inlined constructor: ldv::editor::ViewportWidget::ViewportWidget */
  this->vftablePtr = (ScaleGizmo_vftable *)&ViewportWidget::vftable;
  *(ViewportWidget_vftable1 **)&(this->ScaleGizmo_data).field_0x8 = &ViewportWidget::vftable;
  (this->ScaleGizmo_data).field_0x20 = 0;
  *(undefined4 *)&(this->ScaleGizmo_data).field_0x24 = param_1;
  local_28 = this;
  FUN_14029e3f0();
  *(undefined8 *)&local_28[0x235].ScaleGizmo_data.field_0x20 = 0x4140000000000000;
  *(undefined8 *)&local_28[0x235].ScaleGizmo_data.field_0x28 = 0x41c80000;
  *(undefined8 *)&local_28[0x235].ScaleGizmo_data.field_0x30 = 0;
  *(undefined8 *)&local_28[0x235].ScaleGizmo_data.field_0x38 = 0x3dcccccd3f9c61ab;
  *(undefined4 *)&local_28[0x235].ScaleGizmo_data.offset_0x40 = 0x47c35000;
  *(undefined8 *)((longlong)&local_28[0x235].ScaleGizmo_data.offset_0x40 + 4) = 0;
  *(undefined8 *)((longlong)&local_28[0x235].ScaleGizmo_data.offset_0x48 + 4) = 0;
  *(undefined4 *)((longlong)&local_28[0x235].ScaleGizmo_data.offset_0x50 + 4) = 0;
  local_28[0x235].ScaleGizmo_data.offset_0x58 = 0x4170000041700000;
  local_28[0x235].ScaleGizmo_data.offset_0x60 = 0;
  local_28[0x235].ScaleGizmo_data.offset_0x68 = 0x3f80000040a00000;
  *(undefined8 *)((longlong)&local_28[0x236].ScaleGizmo_data.offset_0x60 + 4) = 0;
  local_28[0x237].vftablePtr = (ScaleGizmo_vftable *)0x0;
  *(undefined1 *)&local_28[0x237].ScaleGizmo_data = 0;
  *(undefined8 *)&local_28[0x237].ScaleGizmo_data.field_0x38 = 0;
  local_28[0x236].vftablePtr = (ScaleGizmo_vftable *)0x0;
  *(undefined8 *)&local_28[0x236].ScaleGizmo_data = 0;
  *(undefined8 *)&local_28[0x236].ScaleGizmo_data.field_0x8 = 0;
  *(undefined8 *)&local_28[0x236].ScaleGizmo_data.field_0x10 = 0;
  *(undefined8 *)&local_28[0x236].ScaleGizmo_data.field_0x18 = 0;
  *(undefined8 *)&local_28[0x236].ScaleGizmo_data.field_0x20 = 0;
  *(undefined8 *)&local_28[0x236].ScaleGizmo_data.field_0x28 = 0;
  *(undefined8 *)&local_28[0x236].ScaleGizmo_data.field_0x30 = 0;
  *(undefined8 *)&local_28[0x236].ScaleGizmo_data.field_0x38 = 0;
  local_28[0x236].ScaleGizmo_data.offset_0x40 = 0;
  local_28[0x236].ScaleGizmo_data.offset_0x48 = 0;
  local_28[0x236].ScaleGizmo_data.offset_0x50 = 0;
  *(undefined8 *)((longlong)&local_28[0x236].ScaleGizmo_data.offset_0x50 + 1) = 0;
  *(undefined8 *)((longlong)&local_28[0x236].ScaleGizmo_data.offset_0x58 + 1) = 0;
  *(undefined8 *)&local_28[0x237].ScaleGizmo_data.field_0x24 = 0;
  *(undefined8 *)&local_28[0x237].ScaleGizmo_data.field_0x2c = 0;
  *(undefined8 *)&local_28[0x237].ScaleGizmo_data.field_0x14 = 0;
  *(undefined8 *)&local_28[0x237].ScaleGizmo_data.field_0x1c = 0;
  *(undefined8 *)&local_28[0x237].ScaleGizmo_data.field_0x4 = 0;
  *(undefined8 *)&local_28[0x237].ScaleGizmo_data.field_0xc = 0;
  local_28[0x237].ScaleGizmo_data.offset_0x40 = 0x41b400003f800000;
  local_40 = (int *)0x0;
  local_38 = L"vulkan";
  local_30 = 6;
  QString::QString((QString *)&local_28[0x237].ScaleGizmo_data.offset_0x48,
                   (QArrayDataPointer<char16_t> *)&local_40);
  if (local_40 != (int *)0x0) {
    LOCK();
    *local_40 = *local_40 + -1;
    UNLOCK();
    if (*local_40 == 0) {
      free(local_40);
    }
  }
  pSVar2 = local_28;
  *(undefined4 *)&local_28[0x237].ScaleGizmo_data.offset_0x60 = 1;
  local_28[0x237].ScaleGizmo_data.offset_0x68 = 0;
  local_28[0x238].vftablePtr = (ScaleGizmo_vftable *)0xffffffff;
  *(undefined4 *)&local_28[0x238].ScaleGizmo_data = 0;
                    /* inlined constructor: ldv::editor::RotateGizmo::RotateGizmo */
  *(RotateGizmo_vftable **)&local_28[0x238].ScaleGizmo_data.field_0x8 = &RotateGizmo::vftable;
  local_28[0x238].ScaleGizmo_data.field_0x10 = 0;
  *(undefined4 *)&local_28[0x238].ScaleGizmo_data.field_0x14 = 0xffffffff;
  *(undefined8 *)&local_28[0x238].ScaleGizmo_data.field_0x18 = 0;
  *(undefined4 *)&local_28[0x238].ScaleGizmo_data.field_0x20 = 0;
  *(undefined8 *)&local_28[0x238].ScaleGizmo_data.field_0x28 = 0;
  *(undefined8 *)&local_28[0x238].ScaleGizmo_data.field_0x30 = 0x3f80000000000000;
  *(undefined8 *)&local_28[0x238].ScaleGizmo_data.field_0x38 = 0;
  local_28[0x238].ScaleGizmo_data.offset_0x40 = 0;
  local_28[0x238].ScaleGizmo_data.offset_0x48 = 0;
  local_28[0x238].ScaleGizmo_data.offset_0x50 = 0;
  local_28[0x238].ScaleGizmo_data.offset_0x58 = 0;
  local_28[0x238].ScaleGizmo_data.offset_0x60 = 0;
  local_28[0x238].ScaleGizmo_data.offset_0x68 = 0;
  local_28[0x239].vftablePtr = (ScaleGizmo_vftable *)0x0;
  *(undefined8 *)&local_28[0x239].ScaleGizmo_data = 0;
  *(undefined8 *)&local_28[0x239].ScaleGizmo_data.field_0x8 = 0;
  *(undefined8 *)&local_28[0x239].ScaleGizmo_data.field_0x10 = 0;
  *(undefined8 *)&local_28[0x239].ScaleGizmo_data.field_0x18 = 0;
  *(undefined8 *)&local_28[0x239].ScaleGizmo_data.field_0x20 = 0;
  *(undefined8 *)&local_28[0x239].ScaleGizmo_data.field_0x28 = 0;
  *(undefined8 *)&local_28[0x239].ScaleGizmo_data.field_0x30 = 0;
  *(undefined8 *)&local_28[0x239].ScaleGizmo_data.field_0x38 = 0;
  local_28[0x239].ScaleGizmo_data.offset_0x40 = 0;
                    /* inlined constructor: ldv::editor::MoveGizmo::MoveGizmo */
  local_28[0x239].ScaleGizmo_data.offset_0x50 = &MoveGizmo::vftable;
  *(undefined1 *)&local_28[0x239].ScaleGizmo_data.offset_0x58 = 0;
  *(undefined4 *)((longlong)&local_28[0x239].ScaleGizmo_data.offset_0x58 + 4) = 0xffffffff;
  local_28[0x239].ScaleGizmo_data.offset_0x60 = 0;
  local_28[0x239].ScaleGizmo_data.offset_0x68 = 0;
  *(undefined8 *)((longlong)&local_28[0x239].ScaleGizmo_data.offset_0x68 + 4) = 0;
  *(undefined8 *)((longlong)&local_28[0x23a].vftablePtr + 4) = 0;
  *(undefined4 *)&local_28[0x23a].ScaleGizmo_data.field_0x4 = 0x3f800000;
  *(undefined8 *)&local_28[0x23a].ScaleGizmo_data.field_0x8 = 0;
  *(undefined8 *)&local_28[0x23a].ScaleGizmo_data.field_0x10 = 0;
  *(undefined8 *)&local_28[0x23a].ScaleGizmo_data.field_0x18 = 0;
  *(undefined8 *)&local_28[0x23a].ScaleGizmo_data.field_0x20 = 0;
  *(undefined8 *)&local_28[0x23a].ScaleGizmo_data.field_0x28 = 0;
  *(undefined8 *)&local_28[0x23a].ScaleGizmo_data.field_0x30 = 0;
  *(undefined8 *)&local_28[0x23a].ScaleGizmo_data.field_0x38 = 0;
  local_28[0x23a].ScaleGizmo_data.offset_0x40 = 0;
  local_28[0x23a].ScaleGizmo_data.offset_0x48 = 0;
  local_28[0x23a].ScaleGizmo_data.offset_0x50 = 0;
  local_28[0x23a].ScaleGizmo_data.offset_0x58 = 0;
  local_28[0x23a].ScaleGizmo_data.offset_0x68 = &vftable;
  *(undefined1 *)&local_28[0x23b].vftablePtr = 0;
  *(undefined8 *)((longlong)&local_28[0x23b].vftablePtr + 4) = 0xffffffff;
  *(undefined8 *)&local_28[0x23b].ScaleGizmo_data.field_0x10 = 0;
  *(undefined8 *)&local_28[0x23b].ScaleGizmo_data.field_0x18 = 0x3f80000000000000;
  *(undefined8 *)&local_28[0x23b].ScaleGizmo_data.field_0x20 = 0;
  *(undefined8 *)&local_28[0x23b].ScaleGizmo_data.field_0x28 = 0x3f00000000000000;
  *(undefined8 *)&local_28[0x23b].ScaleGizmo_data.field_0x30 = 0x3f0000003f000000;
  *(undefined8 *)&local_28[0x23c].ScaleGizmo_data.field_0x20 = 0;
  *(undefined8 *)&local_28[0x23c].ScaleGizmo_data.field_0x28 = 0;
  *(undefined8 *)&local_28[0x23c].ScaleGizmo_data.field_0x10 = 0;
  *(undefined8 *)&local_28[0x23c].ScaleGizmo_data.field_0x18 = 0;
  *(undefined8 *)&local_28[0x23c].ScaleGizmo_data = 0;
  *(undefined8 *)&local_28[0x23c].ScaleGizmo_data.field_0x8 = 0;
  local_28[0x23b].ScaleGizmo_data.offset_0x68 = 0;
  local_28[0x23c].vftablePtr = (ScaleGizmo_vftable *)0x0;
  local_28[0x23b].ScaleGizmo_data.offset_0x58 = 0;
  local_28[0x23b].ScaleGizmo_data.offset_0x60 = 0;
  local_28[0x23b].ScaleGizmo_data.offset_0x48 = 0;
  local_28[0x23b].ScaleGizmo_data.offset_0x50 = 0;
  *(undefined8 *)&local_28[0x23b].ScaleGizmo_data.field_0x38 = 0;
  local_28[0x23b].ScaleGizmo_data.offset_0x40 = 0;
  *(undefined4 *)&local_28[0x23c].ScaleGizmo_data.field_0x38 = 0xffffffff;
  local_28[0x23d].ScaleGizmo_data.offset_0x40 = 0;
  local_28[0x23d].ScaleGizmo_data.offset_0x48 = 0;
  local_28[0x23d].ScaleGizmo_data.offset_0x50 = 0;
  *(undefined8 *)&local_28[0x23d].ScaleGizmo_data.field_0x18 = 0;
  *(undefined8 *)&local_28[0x23d].ScaleGizmo_data.field_0x20 = 0;
  *(undefined8 *)&local_28[0x23d].ScaleGizmo_data.field_0x8 = 0;
  *(undefined8 *)&local_28[0x23d].ScaleGizmo_data.field_0x10 = 0;
  local_28[0x23d].vftablePtr = (ScaleGizmo_vftable *)0x0;
  *(undefined8 *)&local_28[0x23d].ScaleGizmo_data = 0;
  local_28[0x23c].ScaleGizmo_data.offset_0x60 = 0;
  local_28[0x23c].ScaleGizmo_data.offset_0x68 = 0;
  local_28[0x23c].ScaleGizmo_data.offset_0x50 = 0;
  local_28[0x23c].ScaleGizmo_data.offset_0x58 = 0;
  local_28[0x23c].ScaleGizmo_data.offset_0x40 = 0;
  local_28[0x23c].ScaleGizmo_data.offset_0x48 = 0;
  local_28[0x23d].ScaleGizmo_data.field_0x28 = 0;
  *(undefined8 *)&local_28[0x23d].ScaleGizmo_data.field_0x2c = 0;
  *(undefined8 *)&local_28[0x23d].ScaleGizmo_data.field_0x34 = 0;
  local_28[0x23d].ScaleGizmo_data.field_0x3c = 0;
  QWidget::setAttribute((QWidget *)local_28,100,true);
  QWidget::setAttribute((QWidget *)pSVar2,8,true);
  QWidget::setAttribute((QWidget *)pSVar2,4,true);
  QWidget::setAttribute((QWidget *)pSVar2,9,true);
  QWidget::setFocusPolicy((QWidget *)pSVar2,0xb);
  QWidget::setAttribute((QWidget *)pSVar2,2,true);
  uVar3 = _Query_perf_frequency();
  uVar4 = _Query_perf_counter();
  if (uVar3 == 24000000) {
    lVar5 = (((longlong)uVar4 % 24000000) * 1000000000) / 24000000 +
            ((longlong)uVar4 / 24000000) * 1000000000;
  }
  else if (uVar3 == 10000000) {
    lVar5 = uVar4 * 100;
  }
  else {
    if ((uVar4 | uVar3) >> 0x20 == 0) {
      uVar6 = (uVar4 & 0xffffffff) / (uVar3 & 0xffffffff);
      uVar4 = (uVar4 & 0xffffffff) % (uVar3 & 0xffffffff);
    }
    else {
      uVar6 = (longlong)uVar4 / (longlong)uVar3;
      uVar4 = (longlong)uVar4 % (longlong)uVar3;
    }
    uVar4 = uVar4 * 1000000000;
    if ((uVar3 | uVar4) >> 0x20 == 0) {
      uVar4 = (uVar4 & 0xffffffff) / (uVar3 & 0xffffffff);
    }
    else {
      uVar4 = (longlong)uVar4 / (longlong)uVar3;
    }
    lVar5 = uVar4 + uVar6 * 1000000000;
  }
  *(longlong *)&local_28[0x237].ScaleGizmo_data.field_0x28 = lVar5;
  pQVar7 = (QWidget *)FUN_140b65d30(0x28);
  QLabel::QLabel((QLabel *)pQVar7,0,0x80d);
  plVar1 = &local_28[0x23c].ScaleGizmo_data.offset_0x40;
  *plVar1 = (longlong)pQVar7;
  QWidget::setAttribute(pQVar7,0x62,true);
  pQVar7 = (QWidget *)*plVar1;
  QString::QString((QString *)&local_40,
                   "color: white; background: rgba(0,0,0,160); padding: 2px 6px; border-radius: 3px; font-size: 12px;"
                  );
  QWidget::setStyleSheet(pQVar7,(QString *)&local_40);
  QString::~QString((QString *)&local_40);
  pSVar2 = local_28;
  QWidget::hide((QWidget *)*plVar1);
  return pSVar2;
}

