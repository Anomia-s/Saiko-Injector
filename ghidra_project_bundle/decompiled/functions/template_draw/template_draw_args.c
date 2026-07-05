/**
 * Function: template_draw_args
 * Address:  1404d2fa0
 * Signature: undefined template_draw_args(void)
 * Body size: 245 bytes
 */


bool template_draw_args(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_1404d4c10(&local_20,*param_1,"Cull Object Data",0x20,*(undefined4 *)(param_1 + 1));
  plVar2 = local_20;
  local_20 = (longlong *)0x0;
  plVar1 = (longlong *)param_1[0x1a];
  param_1[0x1a] = plVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    plVar1 = local_20;
    if (local_20 != (longlong *)0x0) {
      local_20 = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar2 = (longlong *)param_1[0x1a];
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_1404d4c10(&local_20,*param_1,"Template Draw Args",0x14,*(undefined4 *)(param_1 + 1));
    plVar2 = local_20;
    local_20 = (longlong *)0x0;
    plVar1 = (longlong *)param_1[0x23];
    param_1[0x23] = plVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = local_20;
      if (local_20 != (longlong *)0x0) {
        local_20 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0x10))();
      }
    }
    return param_1[0x23] != 0;
  }
  return false;
}

