/**
 * Function: creategraphicspipeline
 * Address:  14051da10
 * Signature: undefined8 * __thiscall creategraphicspipeline(void * this, undefined8 * param_1, longlong param_2, undefined8 param_3)
 * Body size: 542 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * __thiscall
creategraphicspipeline(void *this,undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined2 uVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = 0;
  puStack_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  local_80 = param_3;
  local_58 = param_2;
  local_50 = param_1;
  for (lVar5 = 0; lVar5 != 10; lVar5 = lVar5 + 2) {
    uVar1 = *(undefined2 *)((longlong)&DAT_140e4d9c0 + lVar5);
    puVar3 = (undefined8 *)(param_2 + 0x10);
    switch(uVar1) {
    case 2:
      local_88 = *(longlong **)(param_2 + 0x18);
      break;
    default:
      httplib::ClientImpl::vfunction4();
      local_88 = _DAT_00000000;
      break;
    case 4:
      local_88 = *(longlong **)(param_2 + 0x20);
      break;
    case 8:
      puVar3 = (undefined8 *)(param_2 + 0x28);
    case 1:
      local_88 = (longlong *)*puVar3;
      break;
    case 0x10:
      local_88 = *(longlong **)(param_2 + 0x30);
    }
    if (local_88 != (longlong *)0x0) {
      if (puStack_70 == local_68) {
        FUN_140029790(&local_78,puStack_70,&local_88);
      }
      else {
        *puStack_70 = local_88;
        puStack_70 = puStack_70 + 1;
      }
      (**(code **)(*local_88 + 0x28))();
      cVar2 = unexpected_shader_type_used_in(this,uVar1);
      if (cVar2 == '\0') goto LAB_14051dbbd;
    }
  }
  cVar2 = binding_layout_contains_more_than_one(this,local_58 + 0xd0);
  if ((cVar2 == '\0') ||
     (cVar2 = conservative_rasterization_is_not_supported_o(this,local_58 + 0x38), cVar2 == '\0')) {
LAB_14051dbbd:
    *local_50 = 0;
  }
  else {
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x140))
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

