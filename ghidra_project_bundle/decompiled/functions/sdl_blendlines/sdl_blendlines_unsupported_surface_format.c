/**
 * Function: sdl_blendlines_unsupported_surface_format
 * Address:  140621a40
 * Signature: undefined sdl_blendlines_unsupported_surface_format(void)
 * Body size: 638 bytes
 */


undefined8
sdl_blendlines_unsupported_surface_format
          (longlong param_1,int *param_2,uint param_3,undefined4 param_4,undefined1 param_5,
          undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  code *pcVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  int *local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  longlong local_68;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  local_5c = param_4;
  cVar2 = FUN_140110960();
  if (cVar2 == '\0') {
    pcVar5 = "SDL_BlendLines(): Passed NULL destination surface";
LAB_140621afe:
    uVar3 = FUN_1400fbed0(pcVar5);
    if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_c8)) {
      return uVar3;
    }
    goto LAB_140621cb7;
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (*(char *)(lVar4 + 5) == '\x04') {
    if (*(int *)(lVar4 + 8) == 0xff0000) {
      pcVar6 = FUN_14062ad20;
      pcVar7 = FUN_140628580;
    }
    else {
      pcVar6 = FUN_14062ff00;
      pcVar7 = FUN_14062d110;
    }
    if (*(int *)(lVar4 + 0x14) == 0) {
      pcVar7 = pcVar6;
    }
  }
  else {
    if (*(char *)(lVar4 + 5) != '\x02') {
      pcVar5 = "SDL_BlendLines(): Unsupported surface format";
      goto LAB_140621afe;
    }
    pcVar6 = FUN_140625e70;
    if (*(int *)(lVar4 + 8) == 0xf800) {
      pcVar6 = FUN_140623d90;
    }
    pcVar7 = FUN_140621cd0;
    if (*(int *)(lVar4 + 8) != 0x7c00) {
      pcVar7 = pcVar6;
    }
  }
  local_68 = param_1;
  local_60 = param_3;
  if (1 < (int)param_3) {
    uVar8 = 1;
    do {
      local_4c = param_2[uVar8 * 2 + -2];
      local_50 = param_2[uVar8 * 2 + -1];
      local_54 = param_2[uVar8 * 2];
      local_58 = param_2[uVar8 * 2 + 1];
      local_a8 = &local_58;
      cVar2 = potential_rect_math_overflow(param_1 + 100,&local_4c,&local_50,&local_54);
      if (cVar2 != '\0') {
        local_78 = true;
        if (local_54 == param_2[uVar8 * 2]) {
          local_78 = local_58 != param_2[uVar8 * 2 + 1];
        }
        local_80 = param_8;
        local_88 = param_7;
        local_90 = param_6;
        local_98 = param_5;
        local_a0 = local_5c;
        local_a8 = (int *)CONCAT44(local_a8._4_4_,local_58);
        (*pcVar7)(local_68,local_4c,local_50);
      }
      uVar8 = uVar8 + 1;
    } while (param_3 != uVar8);
  }
  lVar4 = (longlong)(int)local_60;
  if (*param_2 == param_2[lVar4 * 2 + -2]) {
    iVar1 = param_2[lVar4 * 2 + -1];
    if (param_2[1] != iVar1) goto LAB_140621c50;
  }
  else {
    iVar1 = param_2[lVar4 * 2 + -1];
LAB_140621c50:
    local_90 = param_8;
    local_98 = param_7;
    local_a0 = CONCAT31(local_a0._1_3_,param_6);
    local_a8 = (int *)CONCAT71(local_a8._1_7_,param_5);
    sdl_blendpoint_dst(local_68,param_2[lVar4 * 2 + -2],iVar1,local_5c);
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_c8)) {
    return CONCAT71((int7)((local_48 ^ (ulonglong)auStack_c8) >> 8),1);
  }
LAB_140621cb7:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_c8);
}

