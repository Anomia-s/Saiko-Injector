/**
 * Function: specified_texture_is_not_a_render_target
 * Address:  140431e10
 * Signature: undefined specified_texture_is_not_a_render_target(void)
 * Body size: 707 bytes
 */


undefined8 specified_texture_is_not_a_render_target(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0x2c0);
  FUN_1404372e0(lVar1);
  if (param_2 == 0) {
    lVar2 = *(longlong *)(lVar1 + 0x28d8);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 8);
      if (*(longlong *)(lVar1 + 0x710) != 0) {
        (*DAT_1416f14e8)(*(undefined8 *)(lVar1 + 0x698));
        *(undefined8 *)(lVar1 + 0x710) = 0;
      }
      uStack_60 = 0;
      local_68 = 0x2d;
      local_58 = 0x20000011a0;
      uStack_50 = *(undefined4 *)(lVar2 + 0x20);
      uStack_4c = 5;
      uStack_48 = 0xffffffff;
      uStack_44 = 0xffffffff;
      local_38 = 1;
      uStack_30 = 1;
      local_28 = 1;
      local_70 = &local_68;
      local_78 = 1;
      local_80 = 0;
      local_88 = 0;
      local_90 = 0;
      local_98 = 0;
      uStack_40 = uVar3;
      (*DAT_1416f14f0)(*(undefined8 *)(lVar1 + 0x698),0x1480,0x80,0);
      *(undefined4 *)(lVar2 + 0x20) = 5;
    }
    *(undefined8 *)(lVar1 + 0x28d8) = 0;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0xf0);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      uVar3 = FUN_1400fbed0("specified texture is not a render target");
      if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_b8)) {
        return uVar3;
      }
      goto LAB_1404320c3;
    }
    *(longlong *)(lVar1 + 0x28d8) = lVar2;
    uVar3 = *(undefined8 *)(lVar2 + 8);
    if (*(longlong *)(lVar1 + 0x710) != 0) {
      (*DAT_1416f14e8)(*(undefined8 *)(lVar1 + 0x698));
      *(undefined8 *)(lVar1 + 0x710) = 0;
    }
    uStack_60 = 0;
    local_68 = 0x2d;
    local_58 = 0x11a0000011a0;
    uStack_50 = *(undefined4 *)(lVar2 + 0x20);
    uStack_4c = 2;
    uStack_48 = 0xffffffff;
    uStack_44 = 0xffffffff;
    local_38 = 1;
    uStack_30 = 1;
    local_28 = 1;
    local_70 = &local_68;
    local_78 = 1;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = 0;
    uStack_40 = uVar3;
    (*DAT_1416f14f0)(*(undefined8 *)(lVar1 + 0x698),0x1480,0x1480,0);
    *(undefined4 *)(lVar2 + 0x20) = 2;
  }
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_b8)) {
    return CONCAT71((int7)((local_20 ^ (ulonglong)auStack_b8) >> 8),1);
  }
LAB_1404320c3:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_b8);
}

