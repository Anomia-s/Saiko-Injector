/**
 * Function: failed_to_load_the_shader_d_s
 * Address:  14042f850
 * Signature: undefined failed_to_load_the_shader_d_s(void)
 * Body size: 610 bytes
 */


undefined4 failed_to_load_the_shader_d_s(longlong param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  int local_60;
  int local_5c;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  local_5c = 0;
  lVar2 = FUN_140635b10(param_2);
  if (lVar2 == 0) {
    FUN_1400fbed0("No shader body src");
    uVar1 = 1;
    goto LAB_14042fa82;
  }
  if (param_3 == 0x8b30) {
    local_58 = extension_gl_oes_egl_image_external_requirenn(param_2);
    local_50 = FUN_140635a70(*(undefined4 *)(param_1 + 0x2e8));
    local_48 = lVar2;
    uVar1 = (**(code **)(param_1 + 0x60))(0x8b30);
    (**(code **)(param_1 + 0x120))(uVar1,3,&local_58,0);
    (**(code **)(param_1 + 0x50))(uVar1);
    (**(code **)(param_1 + 0xe8))(uVar1,0x8b81,&local_5c);
    if (local_5c == 0) {
      local_58 = extension_gl_oes_egl_image_external_requirenn(param_2);
      local_50 = FUN_140635a70(4);
      local_48 = lVar2;
      uVar1 = (**(code **)(param_1 + 0x60))(0x8b30);
      uVar3 = 3;
LAB_14042fa47:
      (**(code **)(param_1 + 0x120))(uVar1,uVar3,&local_58,0);
      (**(code **)(param_1 + 0x50))(uVar1);
      (**(code **)(param_1 + 0xe8))(uVar1,0x8b81,&local_5c);
      if (local_5c == 0) {
        local_60 = 0;
        (**(code **)(param_1 + 0xe8))(uVar1,0x8b84,&local_60);
        if ((local_60 < 1) || (lVar2 = FUN_140160c40(), lVar2 == 0)) {
          FUN_1400fbed0("Failed to load the shader %d",param_2);
        }
        else {
          (**(code **)(param_1 + 0xe0))(uVar1,local_60,&local_60,lVar2);
          FUN_1400fbed0("Failed to load the shader %d: %s",param_2,lVar2);
          FUN_140160cf0(lVar2);
        }
        (**(code **)(param_1 + 0x70))(uVar1);
        uVar1 = 1;
        goto LAB_14042fa82;
      }
    }
  }
  else {
    local_58 = extension_gl_oes_egl_image_external_requirenn(param_2);
    local_50 = lVar2;
    uVar1 = (**(code **)(param_1 + 0x60))(param_3);
    (**(code **)(param_1 + 0x120))(uVar1,2,&local_58,0);
    (**(code **)(param_1 + 0x50))(uVar1);
    (**(code **)(param_1 + 0xe8))(uVar1,0x8b81,&local_5c);
    if (local_5c == 0) {
      local_58 = extension_gl_oes_egl_image_external_requirenn(param_2);
      local_50 = lVar2;
      uVar1 = (**(code **)(param_1 + 0x60))(param_3);
      uVar3 = 2;
      goto LAB_14042fa47;
    }
  }
  *(undefined4 *)(param_1 + 0x1e4 + (ulonglong)param_2 * 4) = uVar1;
LAB_14042fa82:
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_88)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_88);
}

