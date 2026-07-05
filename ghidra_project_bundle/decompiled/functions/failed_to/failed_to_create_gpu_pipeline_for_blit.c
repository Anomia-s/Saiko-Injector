/**
 * Function: failed_to_create_gpu_pipeline_for_blit
 * Address:  1401003d0
 * Signature: undefined failed_to_create_gpu_pipeline_for_blit(void)
 * Body size: 551 bytes
 */


longlong failed_to_create_gpu_pipeline_for_blit
                   (undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                   longlong *param_10,uint *param_11,uint *param_12)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_128 [44];
  int local_fc [9];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_128;
  if (param_11 == (uint *)0x0) {
    lVar2 = *(longlong *)(*param_10 + 8 + (longlong)param_2 * 0x10);
  }
  else {
    if ((ulonglong)*param_11 != 0) {
      lVar2 = *param_10;
      lVar3 = 0;
      do {
        if ((*(int *)(lVar2 + lVar3) == param_2) && (*(int *)(lVar2 + 4 + lVar3) == param_3)) {
          lVar2 = *(longlong *)(lVar2 + 8 + lVar3);
          goto LAB_1401005d0;
        }
        lVar3 = lVar3 + 0x10;
      } while ((ulonglong)*param_11 << 4 != lVar3);
    }
    local_40 = 0;
    uStack_38 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    local_90 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    local_fc[5] = 0;
    local_fc[6] = 0;
    local_fc[1] = 0;
    local_fc[2] = 0;
    local_fc[3] = 0;
    local_fc[4] = 0;
    local_fc[7] = 0xf;
    local_fc[8] = 0;
    local_50 = local_fc;
    uStack_48 = 0x3a00000001;
    local_d0 = param_5;
    switch(param_2) {
    case 1:
      local_d0 = param_6;
      break;
    case 2:
      local_d0 = param_7;
      break;
    case 3:
      local_d0 = param_8;
      break;
    case 4:
      local_d0 = param_9;
    }
    uStack_88 = 0;
    local_80 = 0;
    uStack_a8 = 0;
    local_fc[0] = param_3;
    local_d8 = param_4;
    lVar2 = invalid_gpu_device(0,&local_d8);
    if (lVar2 == 0) {
      FUN_1400fbed0("Failed to create GPU pipeline for blit");
      lVar2 = 0;
    }
    else {
      uVar1 = *param_11;
      if (uVar1 + 1 < *param_12) {
        lVar3 = *param_10;
      }
      else {
        uVar1 = *param_12 * 2;
        *param_12 = uVar1;
        lVar3 = FUN_140160cc0(*param_10,(ulonglong)uVar1 << 4);
        *param_10 = lVar3;
        uVar1 = *param_11;
      }
      *(longlong *)(lVar3 + 8 + (ulonglong)uVar1 * 0x10) = lVar2;
      *(int *)(*param_10 + (ulonglong)*param_11 * 0x10) = param_2;
      *(int *)(*param_10 + 4 + (ulonglong)*param_11 * 0x10) = param_3;
      *param_11 = *param_11 + 1;
    }
  }
LAB_1401005d0:
  if (DAT_1414ef3c0 != (local_30 ^ (ulonglong)auStack_128)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_30 ^ (ulonglong)auStack_128);
  }
  return lVar2;
}

