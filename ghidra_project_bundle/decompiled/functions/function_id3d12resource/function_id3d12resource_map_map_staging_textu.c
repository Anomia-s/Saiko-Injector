/**
 * Function: function_id3d12resource_map_map_staging_textu
 * Address:  14041f750
 * Signature: undefined function_id3d12resource_map_map_staging_textu(void)
 * Body size: 1327 bytes
 */


undefined8 function_id3d12resource_map_map_staging_textu(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_1f8 [32];
  ulonglong local_1d8;
  undefined8 uStack_1d0;
  undefined8 *local_1c8;
  longlong **pplStack_1c0;
  undefined8 *local_1b8;
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  longlong *local_178;
  longlong *plStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  int iStack_160;
  int iStack_15c;
  undefined4 local_158;
  undefined4 local_154;
  uint local_150;
  undefined4 local_14c;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *plStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_1f8;
  lVar1 = *(longlong *)(param_1 + 0x2c0);
  local_80 = (longlong *)0x0;
  local_128 = 0;
  uStack_120 = 0;
  if (*(longlong *)(lVar1 + 0x422c8) == 0) {
    puVar5 = (undefined8 *)(lVar1 + (longlong)*(int *)(lVar1 + 200) * 8 + 0xb0);
  }
  else {
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x422c8) + 8);
  }
  plVar2 = (longlong *)*puVar5;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_88 = 0;
  (**(code **)(*plVar2 + 0x50))(plVar2,&local_b8);
  local_a8 = (longlong)*(int *)(param_2 + 8);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)(param_2 + 0xc));
  local_e8 = 0;
  local_c8 = 0;
  local_1b8 = &local_e8;
  local_f8 = 1;
  uStack_f0 = 0x10000;
  uStack_e0 = 0x1000100000001;
  local_d8 = 0x100000000;
  uStack_d0 = 0x100000000;
  local_1c8 = (undefined8 *)0x0;
  pplStack_1c0 = (longlong **)0x0;
  local_1d8 = 0;
  uStack_1d0 = (longlong **)0x0;
  (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x130))(*(longlong **)(lVar1 + 0x30),&local_b8,0,1);
  local_108 = 0;
  local_10c = 3;
  local_100 = 0x100000001;
  pplStack_1c0 = &local_80;
  local_1c8 = (undefined8 *)&DAT_140e15530;
  uStack_1d0 = (longlong **)0x0;
  local_1d8 = CONCAT44(local_1d8._4_4_,0x400);
  iVar4 = (**(code **)(**(longlong **)(lVar1 + 0x30) + 0xd8))
                    (*(longlong **)(lVar1 + 0x30),&local_10c,0,&local_f8);
  if (iVar4 < 0) {
    pcVar6 = "__FUNCTION__, ID3D12Device::CreateTexture2D [create staging texture]";
LAB_14041fbbc:
    FUN_1403d7600(pcVar6,iVar4);
  }
  else {
    local_178 = (longlong *)0x0;
    iStack_15c = 0;
    uStack_164 = 4;
    iStack_160 = 0x800;
    local_168 = 0xffffffff;
    plStack_170 = plVar2;
    (**(code **)(**(longlong **)(lVar1 + 0x48) + 0xd0))(*(longlong **)(lVar1 + 0x48),1,&local_178);
    cVar3 = the_physical_display_is_in_an_unknown_or_unsu
                      (*(undefined8 *)(param_1 + 0x2c0),param_2,&local_128,0);
    if (cVar3 != '\0') {
      local_140 = local_128;
      local_134 = uStack_120;
      local_138 = 0;
      local_12c = 1;
      iVar4 = 4;
      if (((6 < (int)local_98 - 0x57U) || ((0x53U >> ((int)local_98 - 0x57U & 0x1f) & 1) == 0)) &&
         ((int)local_98 != 0x18)) {
        if ((int)local_98 == 10) {
          iVar4 = 8;
        }
        else {
          iVar4 = 0;
        }
      }
      uVar7 = iVar4 * (int)local_a8 + 0xff;
      local_150 = uVar7 & 0xffffff00;
      local_168 = 0;
      uStack_164 = 0;
      local_178 = local_80;
      plStack_170 = (longlong *)0x1;
      iStack_160 = (int)local_98;
      iStack_15c = (int)local_a8;
      local_158 = (undefined4)uStack_a0;
      local_154 = 1;
      local_14c = 0;
      local_1a0 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_180 = 0;
      uStack_198 = 0;
      local_1c8 = &local_140;
      uStack_1d0 = &local_1a8;
      local_1d8 = local_1d8 & 0xffffffff00000000;
      local_1a8 = plVar2;
      (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x80))
                (*(longlong **)(lVar1 + 0x48),&local_178,0,0);
      FUN_140421960(lVar1);
      local_78 = 0;
      uStack_5c = 0;
      uStack_64 = 0x800;
      uStack_60 = 4;
      local_68 = 0xffffffff;
      plStack_70 = plVar2;
      (**(code **)(**(longlong **)(lVar1 + 0x48) + 0xd0))(*(longlong **)(lVar1 + 0x48),1,&local_78);
      iVar4 = (**(code **)(*local_80 + 0x40))(local_80,0,0,&local_78);
      if (-1 < iVar4) {
        puVar8 = (undefined4 *)(param_1 + 0x1f0);
        if (*(longlong *)(param_1 + 0x1e0) != 0) {
          puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x1e0) + 0x10);
        }
        uVar9 = 0x16362004;
        switch((int)local_98) {
        case 0x57:
        case 0x5b:
          break;
        case 0x58:
        case 0x5d:
          uVar9 = 0x16161804;
          break;
        case 0x59:
        case 0x5a:
        case 0x5c:
switchD_14041fb87_caseD_59:
          uVar9 = 0;
          break;
        default:
          if ((int)local_98 == 10) {
            uVar9 = 0x1a204008;
          }
          else {
            if ((int)local_98 != 0x18) goto switchD_14041fb87_caseD_59;
            uVar9 = 0x16572004;
          }
        }
        uStack_1d0 = (longlong **)(CONCAT44(uStack_1d0._4_4_,uVar7) & 0xffffffffffffff00);
        local_1d8 = local_78;
        uVar9 = parameter_s_is_invalid
                          (*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),uVar9,*puVar8
                          );
        (**(code **)(*local_80 + 0x48))(local_80,0,0);
        goto joined_r0x00014041fbd1;
      }
      pcVar6 = "__FUNCTION__, ID3D12Resource::Map [map staging texture]";
      goto LAB_14041fbbc;
    }
  }
  uVar9 = 0;
joined_r0x00014041fbd1:
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x10))();
  }
  if (DAT_1414ef3c0 == (local_50 ^ (ulonglong)auStack_1f8)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStack_1f8);
}

