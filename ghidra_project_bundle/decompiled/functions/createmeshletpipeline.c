/**
 * Function: createmeshletpipeline
 * Address:  14051def0
 * Signature: undefined8 * __thiscall createmeshletpipeline(void * this, undefined8 * param_1, longlong param_2, undefined8 param_3)
 * Body size: 418 bytes
 */


undefined8 * __thiscall
createmeshletpipeline(void *this,undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  short sVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  local_80 = param_3;
  local_58 = param_2;
  local_50 = param_1;
  for (lVar5 = 0; lVar5 != 6; lVar5 = lVar5 + 2) {
    sVar1 = *(short *)((longlong)&DAT_140e4d9ca + lVar5);
    plVar3 = (longlong *)(param_2 + 0x18);
    if (((sVar1 != 0x10) && (plVar3 = (longlong *)(param_2 + 8), sVar1 != 0x40)) &&
       (plVar3 = (longlong *)(param_2 + 0x10), sVar1 != 0x80)) {
      httplib::ClientImpl::vfunction4();
      plVar3 = (longlong *)0x0;
    }
    local_88 = (longlong *)*plVar3;
    if (local_88 != (longlong *)0x0) {
      if (plStack_70 == local_68) {
        FUN_140029790(&local_78,plStack_70,&local_88);
      }
      else {
        *plStack_70 = (longlong)local_88;
        plStack_70 = plStack_70 + 1;
      }
      (**(code **)(*local_88 + 0x28))();
      cVar2 = unexpected_shader_type_used_in(this,sVar1);
      if (cVar2 == '\0') goto LAB_14051e03c;
    }
  }
  cVar2 = binding_layout_contains_more_than_one(this,local_58 + 0xb0);
  if ((cVar2 == '\0') ||
     (cVar2 = conservative_rasterization_is_not_supported_o(this,local_58 + 0x20), cVar2 == '\0')) {
LAB_14051e03c:
    *local_50 = 0;
  }
  else {
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x158))
              (*(longlong **)((longlong)this + 0x10),local_50);
  }
  if (local_78 != 0) {
    uVar4 = (longlong)local_68 - local_78;
    lVar5 = local_78;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(local_78 + -8);
      if (0x1f < (ulonglong)((local_78 + -8) - lVar5)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar5,uVar4);
  }
  return local_50;
}

