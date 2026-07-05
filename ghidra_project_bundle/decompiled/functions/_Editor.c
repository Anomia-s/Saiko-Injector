/**
 * Function: ~Editor
 * Address:  1407d8190
 * Signature: void __thiscall ~Editor(Editor * this, undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 361 bytes
 */


void __thiscall
Scintilla::Editor::~Editor(Editor *this,undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 **ppuVar1;
  undefined1 *this_00;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  Editor_vftable1 **ppEVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  this->vftablePtr = &vftable;
  ppEVar7 = &this->vftablePtr;
  this->vftablePtr = &vftable;
  lVar9 = 0;
  FUN_14080cb90((this->EditModel_data).offset_0x2e8,ppEVar7);
  ppuVar1 = &(this->Editor_data).offset_0x238;
  uVar8 = CONCAT71((int7)((ulonglong)ppEVar7 >> 8),1);
  FUN_140a33520(ppuVar1,uVar8);
  this_00 = &(this->Editor_data).field_0x288;
  uVar5 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  FUN_140a35dd0(this_00);
  uVar2 = (this->Editor_data).offset_0x4c0;
  if (0xf < uVar2) {
    lVar3 = (this->Editor_data).offset_0x4a8;
    uVar5 = uVar2 + 1;
    lVar6 = lVar3;
    if (0xfff < uVar5) {
      lVar6 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar6)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar2 + 0x28;
      lVar9 = lVar6;
    }
    thunk_FUN_140b68ba8(lVar6);
  }
  (this->Editor_data).offset_0x4b8 = 0;
  (this->Editor_data).offset_0x4c0 = 0xf;
  *(undefined1 *)&(this->Editor_data).offset_0x4a8 = 0;
  FUN_140a40610(&(this->Editor_data).field_0x378);
  EditView::~EditView((EditView *)this_00);
  puVar4 = (this->Editor_data).offset_0x248;
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = 1;
    (**(code **)*puVar4)();
  }
  puVar4 = (this->Editor_data).offset_0x240;
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = 1;
    (**(code **)*puVar4)();
  }
  puVar4 = *ppuVar1;
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = 1;
    (**(code **)*puVar4)();
  }
  FUN_140a30dc0(&(this->Editor_data).field_0x38);
  httplib::ClientImpl::vfunction4();
  httplib::ClientImpl::vfunction4();
  EditModel::~EditModel((EditModel *)this,uVar5,lVar9,param_3);
  return;
}

