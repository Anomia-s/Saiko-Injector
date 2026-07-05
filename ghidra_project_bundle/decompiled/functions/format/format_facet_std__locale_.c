/**
 * Function: format_facet<std::locale>
 * Address:  140014da0
 * Signature: format_facet<std::locale> * __thiscall format_facet<std::locale>(format_facet<std::locale> * this, undefined8 param_1)
 * Body size: 478 bytes
 */


format_facet<std::locale> * __thiscall
fmtquill::v12::format_facet<std::locale>::format_facet<std::locale>
          (format_facet<std::locale> *this,undefined8 param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  format_facet<std::locale> *pfVar8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  ulonglong uStack_50;
  longlong *local_48;
  longlong *local_40;
  format_facet<std::locale>_data *local_38;
  format_facet<std::locale> *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  std::locale::facet::facet((facet *)this,0);
  this->vftablePtr = &vftable;
  local_38 = &this->format_facet<std::locale>_data;
  (this->format_facet<std::locale>_data).offset_0x0 = 0;
  (this->format_facet<std::locale>_data).offset_0x8 = 0;
  (this->format_facet<std::locale>_data).offset_0x10 = 0;
  (this->format_facet<std::locale>_data).offset_0x18 = 0xf;
  local_40 = &(this->format_facet<std::locale>_data).offset_0x20;
  (this->format_facet<std::locale>_data).offset_0x20 = 0;
  (this->format_facet<std::locale>_data).offset_0x28 = 0;
  (this->format_facet<std::locale>_data).offset_0x30 = 0;
  (this->format_facet<std::locale>_data).offset_0x38 = 0xf;
  local_48 = &(this->format_facet<std::locale>_data).offset_0x40;
  (this->format_facet<std::locale>_data).offset_0x40 = 0;
  (this->format_facet<std::locale>_data).offset_0x48 = 0;
  (this->format_facet<std::locale>_data).offset_0x50 = 0;
  (this->format_facet<std::locale>_data).offset_0x58 = 0xf;
  local_30 = this;
  plVar3 = (longlong *)FUN_140015140(param_1);
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_68);
  pfVar8 = local_30;
  plVar1 = local_40;
  if (local_40 == (longlong *)&local_68) {
    if (0xf < uStack_50) {
      lVar7 = CONCAT44(uStack_64,local_68);
      uVar5 = uStack_50 + 1;
      lVar6 = lVar7;
      if (0xfff < uVar5) {
        lVar6 = *(longlong *)(lVar7 + -8);
        if (0x1f < (ulonglong)((lVar7 + -8) - lVar6)) goto LAB_140014f65;
        uVar5 = uStack_50 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar6,uVar5);
    }
  }
  else {
    uVar5 = (local_30->format_facet<std::locale>_data).offset_0x38;
    if (0xf < uVar5) {
      lVar6 = *local_40;
      uVar4 = uVar5 + 1;
      lVar7 = lVar6;
      if (0xfff < uVar4) {
        lVar7 = *(longlong *)(lVar6 + -8);
        if (0x1f < (ulonglong)((lVar6 + -8) - lVar7)) goto LAB_140014f65;
        uVar4 = uVar5 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar7,uVar4);
    }
    plVar1[2] = local_58;
    plVar1[3] = uStack_50;
    *(undefined4 *)plVar1 = local_68;
    *(undefined4 *)((longlong)plVar1 + 4) = uStack_64;
    *(undefined4 *)(plVar1 + 1) = uStack_60;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_5c;
  }
  if ((pfVar8->format_facet<std::locale>_data).offset_0x30 != 0) {
    uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
    pfVar8 = local_30;
    uVar5 = (local_30->format_facet<std::locale>_data).offset_0x18;
    if (0xf < uVar5) {
      lVar6 = local_38->offset_0x0;
      uVar4 = uVar5 + 1;
      lVar7 = lVar6;
      if (0xfff < uVar4) {
        lVar7 = *(longlong *)(lVar6 + -8);
        if (0x1f < (ulonglong)((lVar6 + -8) - lVar7)) {
LAB_140014f65:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar4 = uVar5 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar7,uVar4);
    }
    *(undefined1 *)&(pfVar8->format_facet<std::locale>_data).offset_0x0 = uVar2;
    *(undefined8 *)((longlong)&(pfVar8->format_facet<std::locale>_data).offset_0x0 + 1) = 0;
    (pfVar8->format_facet<std::locale>_data).offset_0x8 = 0;
    (pfVar8->format_facet<std::locale>_data).offset_0x10 = 1;
    (pfVar8->format_facet<std::locale>_data).offset_0x18 = 0xf;
  }
  return pfVar8;
}

