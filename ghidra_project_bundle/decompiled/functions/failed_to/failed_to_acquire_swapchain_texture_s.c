/**
 * Function: failed_to_acquire_swapchain_texture_s
 * Address:  14043df70
 * Signature: undefined failed_to_acquire_swapchain_texture_s(void)
 * Body size: 541 bytes
 */


undefined8 failed_to_acquire_swapchain_texture_s(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [32];
  int *local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  longlong local_70;
  longlong local_68;
  undefined4 uStack_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_108;
  puVar1 = *(undefined8 **)(param_1 + 0x2c0);
  local_e8 = &local_78;
  cVar2 = parameter_s_is_invalid(puVar1[0x11],*(undefined8 *)(param_1 + 0x100),&local_70,&local_74);
  if (cVar2 == '\0') {
    uVar4 = out_of_memory();
                    /* WARNING: Subroutine does not return */
    FUN_1400fb950(6,"Failed to acquire swapchain texture: %s",uVar4);
  }
  if (local_70 == 0) {
    parameter_s_is_invalid(puVar1[0x11]);
  }
  else {
    local_90 = 0;
    uStack_88 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_d8 = puVar1[8];
    local_c0 = *(undefined8 *)((longlong)puVar1 + 0x4c);
    lStack_b8 = local_70;
    uStack_98 = 2;
    local_80 = 1;
    parameter_s_is_invalid(puVar1[0x11],&local_d8);
    parameter_s_is_invalid(puVar1[0x11]);
    if ((local_74 != *(int *)((longlong)puVar1 + 0x4c)) || (local_78 != *(int *)(puVar1 + 10))) {
      invalid_gpu_device(*puVar1,puVar1[8]);
      uVar3 = invalid_gpu_device(*puVar1,*(undefined8 *)(param_1 + 0x100));
      uStack_4c = 0;
      local_48 = 0;
      local_58 = local_78;
      local_68 = (ulonglong)uVar3 << 0x20;
      uStack_54 = 1;
      uStack_50 = 1;
      _uStack_60 = CONCAT44(local_74,3);
      uVar4 = invalid_gpu_device(*puVar1,&local_68);
      puVar1[8] = uVar4;
      *(int *)((longlong)puVar1 + 0x4c) = local_74;
      *(int *)(puVar1 + 10) = local_78;
      *(uint *)(puVar1 + 9) = uVar3;
    }
  }
  uVar4 = invalid_gpu_device(*puVar1);
  puVar1[0x11] = uVar4;
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_108)) {
    return CONCAT71((int7)((local_40 ^ (ulonglong)auStack_108) >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_108);
}

