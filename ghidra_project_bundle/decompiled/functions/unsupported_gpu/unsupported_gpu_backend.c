/**
 * Function: unsupported_gpu_backend
 * Address:  140635f30
 * Signature: undefined unsupported_gpu_backend(void)
 * Body size: 1093 bytes
 */


undefined8 unsupported_gpu_backend(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined *local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  uVar1 = invalid_gpu_device(param_2);
  if (uVar1 == 0) {
    lVar3 = 0;
LAB_1406360a0:
    param_1[lVar3] = 0;
  }
  else {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 8) != 0) {
        ppuVar2 = &PTR_DAT_1412080f0;
        goto LAB_140635f86;
      }
      lVar3 = 0;
LAB_140636094:
      FUN_1400fbed0("Unsupported GPU backend");
      goto LAB_1406360a0;
    }
    ppuVar2 = &PTR_DAT_1412080e0;
LAB_140635f86:
    uStack_50 = 0;
    uStack_4c = 0;
    local_40 = 0;
    local_68 = *ppuVar2;
    local_70 = (ulonglong)*(uint *)(ppuVar2 + 1);
    local_58 = *(undefined4 *)((longlong)ppuVar2 + 0xc);
    local_60 = "main";
    uStack_48 = 0x100000000;
    local_54 = 0;
    lVar3 = invalid_gpu_device(param_2,&local_70);
    *param_1 = lVar3;
    if (lVar3 != 0) {
      uVar1 = invalid_gpu_device(param_2);
      if (uVar1 == 0) {
        lVar3 = 1;
        goto LAB_1406360a0;
      }
      if ((uVar1 & 2) == 0) {
        lVar3 = 1;
        if ((uVar1 & 8) == 0) goto LAB_140636094;
        ppuVar2 = &PTR_DAT_141208118;
      }
      else {
        ppuVar2 = &PTR_DAT_141208108;
      }
      uStack_50 = 0;
      uStack_4c = 0;
      local_40 = 0;
      local_68 = *ppuVar2;
      local_70 = (ulonglong)*(uint *)(ppuVar2 + 1);
      local_58 = *(undefined4 *)((longlong)ppuVar2 + 0xc);
      local_60 = "main";
      uStack_48 = 0x100000000;
      local_54 = 0;
      lVar3 = invalid_gpu_device(param_2,&local_70);
      param_1[1] = lVar3;
      if (lVar3 == 0) goto LAB_1406360a8;
      uVar1 = invalid_gpu_device(param_2);
      if (uVar1 == 0) {
        lVar3 = 2;
        goto LAB_1406360a0;
      }
      if ((uVar1 & 2) == 0) {
        lVar3 = 2;
        if ((uVar1 & 8) == 0) goto LAB_140636094;
        ppuVar2 = &PTR_DAT_141208140;
      }
      else {
        ppuVar2 = &PTR_DAT_141208130;
      }
      uStack_50 = 0;
      uStack_4c = 0;
      local_40 = 0;
      local_68 = *ppuVar2;
      local_70 = (ulonglong)*(uint *)(ppuVar2 + 1);
      local_58 = *(undefined4 *)((longlong)ppuVar2 + 0xc);
      local_60 = "main";
      uStack_48 = 0x100000000;
      local_54 = 0;
      lVar3 = invalid_gpu_device(param_2,&local_70);
      param_1[2] = lVar3;
      if (lVar3 == 0) goto LAB_1406360a8;
      uVar1 = invalid_gpu_device(param_2);
      if (uVar1 == 0) {
        lVar3 = 0;
      }
      else if ((uVar1 & 2) == 0) {
        if ((uVar1 & 8) != 0) {
          ppuVar2 = &PTR_DAT_141208170;
          goto LAB_1406361e9;
        }
        lVar3 = 0;
LAB_1406362e3:
        FUN_1400fbed0("Unsupported GPU backend");
      }
      else {
        ppuVar2 = &PTR_DAT_141208160;
LAB_1406361e9:
        uStack_50 = 0;
        uStack_4c = 0;
        local_40 = 0;
        local_68 = *ppuVar2;
        local_70 = (ulonglong)*(uint *)(ppuVar2 + 1);
        local_58 = *(undefined4 *)((longlong)ppuVar2 + 0xc);
        local_60 = "main";
        uStack_48 = 0;
        local_54 = 1;
        lVar3 = invalid_gpu_device(param_2,&local_70);
        param_1[3] = lVar3;
        if (lVar3 == 0) goto LAB_1406360a8;
        uVar1 = invalid_gpu_device(param_2);
        if (uVar1 == 0) {
          lVar3 = 1;
        }
        else {
          if ((uVar1 & 2) == 0) {
            lVar3 = 1;
            if ((uVar1 & 8) == 0) goto LAB_1406362e3;
            ppuVar2 = &PTR_DAT_141208198;
          }
          else {
            ppuVar2 = &PTR_DAT_141208188;
          }
          uStack_4c = 0;
          uStack_48 = 0;
          local_40 = 0;
          local_68 = *ppuVar2;
          local_70 = (ulonglong)*(uint *)(ppuVar2 + 1);
          local_58 = *(undefined4 *)((longlong)ppuVar2 + 0xc);
          local_60 = "main";
          local_54 = 1;
          uStack_50 = 1;
          lVar3 = invalid_gpu_device(param_2,&local_70);
          param_1[4] = lVar3;
          if (lVar3 == 0) goto LAB_1406360a8;
          uVar1 = invalid_gpu_device(param_2);
          if (uVar1 != 0) {
            if ((uVar1 & 2) == 0) {
              lVar3 = 2;
              if ((uVar1 & 8) == 0) goto LAB_1406362e3;
              ppuVar2 = &PTR_DAT_1412081c0;
            }
            else {
              ppuVar2 = &PTR_DAT_1412081b0;
            }
            uStack_4c = 0;
            uStack_48 = 0;
            local_40 = 0;
            local_68 = *ppuVar2;
            local_70 = (ulonglong)*(uint *)(ppuVar2 + 1);
            local_58 = *(undefined4 *)((longlong)ppuVar2 + 0xc);
            local_60 = "main";
            local_54 = 1;
            uStack_50 = 1;
            lVar3 = invalid_gpu_device(param_2,&local_70);
            param_1[5] = lVar3;
            uVar4 = 1;
            if (lVar3 != 0) goto LAB_140636120;
            goto LAB_1406360a8;
          }
          lVar3 = 2;
        }
      }
      param_1[lVar3 + 3] = 0;
    }
  }
LAB_1406360a8:
  invalid_gpu_device(param_2,*param_1);
  *param_1 = 0;
  invalid_gpu_device(param_2,param_1[1]);
  param_1[1] = 0;
  invalid_gpu_device(param_2,param_1[2]);
  param_1[2] = 0;
  invalid_gpu_device(param_2,param_1[3]);
  param_1[3] = 0;
  invalid_gpu_device(param_2,param_1[4]);
  param_1[4] = 0;
  invalid_gpu_device(param_2,param_1[5]);
  param_1[5] = 0;
  uVar4 = 0;
LAB_140636120:
  if (DAT_1414ef3c0 != (local_38 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_38 ^ (ulonglong)auStack_98);
  }
  return uVar4;
}

