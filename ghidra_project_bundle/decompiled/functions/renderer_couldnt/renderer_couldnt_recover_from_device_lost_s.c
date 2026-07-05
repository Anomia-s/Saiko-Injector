/**
 * Function: renderer_couldnt_recover_from_device_lost_s
 * Address:  140439260
 * Signature: undefined renderer_couldnt_recover_from_device_lost_s(void)
 * Body size: 245 bytes
 */


ulonglong renderer_couldnt_recover_from_device_lost_s(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0x2c0);
  FUN_140439470();
  iVar2 = sdlrenderercreatevulkanphysical_device(param_1,*(undefined4 *)(lVar1 + 0x6f0));
  if (iVar2 == 0) {
    iVar2 = vulkan_createframebuffersandrenderpasses(param_1);
    if (iVar2 == 0) {
      uStack_90 = 0;
      local_28 = 0;
      uStack_20 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0x2001;
      uVar4 = parameter_s_is_invalid(param_1);
      uVar3 = video_subsystem_has_not_been_initialized(uVar4);
      local_88 = CONCAT44(local_88._4_4_,uVar3);
      FUN_140107bc0(&local_98);
      if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_b8)) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1) & 0xffffffff;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140b65db0(local_18 ^ (ulonglong)auStack_b8);
    }
  }
  uVar4 = out_of_memory();
                    /* WARNING: Subroutine does not return */
  FUN_1400fb950(6,"Renderer couldn\'t recover from device lost: %s",uVar4);
}

