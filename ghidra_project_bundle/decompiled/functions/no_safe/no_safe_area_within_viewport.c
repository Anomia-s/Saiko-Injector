/**
 * Function: no_safe_area_within_viewport
 * Address:  14011e340
 * Signature: undefined no_safe_area_within_viewport(void)
 * Body size: 559 bytes
 */


ulonglong no_safe_area_within_viewport(longlong param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_98 [32];
  float *local_78;
  undefined1 local_70 [16];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  if (param_2 != (int *)0x0) {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  cVar1 = FUN_1403d8fa0(param_1,2);
  if (cVar1 == '\0') {
    FUN_1400fbed0("Parameter \'%s\' is invalid","renderer");
LAB_14011e3af:
    uVar3 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x2b8) == '\x01') {
      FUN_1400fbed0("Renderer\'s window has been destroyed, can\'t use further");
      goto LAB_14011e3af;
    }
    if ((*(longlong *)(param_1 + 0x1e0) != 0) || (*(longlong *)(param_1 + 0x100) == 0)) {
      if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_98)) {
        uVar3 = parameter_s_is_invalid(param_1,param_2);
        return uVar3;
      }
      goto LAB_14011e562;
    }
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (param_2 != (int *)0x0) {
      cVar1 = video_subsystem_has_not_been_initialized(*(longlong *)(param_1 + 0x100),&local_50);
      if (cVar1 != '\0') {
        local_54 = (float)local_50;
        local_58 = (float)local_4c;
        fVar5 = (float)local_48 + local_54;
        fVar6 = (float)local_44 + local_58;
        local_78 = &local_58;
        local_60 = fVar6;
        local_5c = fVar5;
        cVar1 = parameter_s_is_invalid(param_1,local_54,local_58,&local_54);
        if (cVar1 != '\0') {
          local_78 = &local_60;
          cVar1 = parameter_s_is_invalid(param_1,fVar5,fVar6,&local_5c);
          fVar5 = local_54;
          if (cVar1 != '\0') {
            fVar4 = ceilf(local_54);
            fVar6 = local_58;
            *param_2 = (int)fVar4;
            fVar4 = ceilf(local_58);
            param_2[1] = (int)fVar4;
            fVar5 = ceilf(local_5c - fVar5);
            param_2[2] = (int)fVar5;
            fVar5 = ceilf(local_60 - fVar6);
            param_2[3] = (int)fVar5;
            cVar1 = parameter_s_is_invalid(param_1,local_70);
            if (cVar1 != '\0') {
              cVar1 = potential_rect_math_overflow(param_2,local_70,param_2);
              if (cVar1 == '\0') {
                uVar2 = FUN_1400fbed0("No safe area within viewport");
                uVar3 = (ulonglong)uVar2;
              }
              goto LAB_14011e3b1;
            }
          }
        }
      }
      goto LAB_14011e3af;
    }
  }
LAB_14011e3b1:
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_98)) {
    return uVar3 & 0xffffffff;
  }
LAB_14011e562:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_98);
}

