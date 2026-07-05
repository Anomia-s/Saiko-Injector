/**
 * Function: sdl_drawlines_unsupported_surface_format
 * Address:  1406325e0
 * Signature: undefined sdl_drawlines_unsupported_surface_format(void)
 * Body size: 494 bytes
 */


undefined8
sdl_drawlines_unsupported_surface_format
          (longlong param_1,int *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  int *local_88;
  undefined4 local_80;
  undefined1 local_78;
  uint local_68;
  undefined4 local_64;
  code *local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  local_64 = param_4;
  cVar2 = FUN_140110960();
  if (cVar2 == '\0') {
    uVar3 = FUN_1400fbed0("Parameter \'%s\' is invalid","SDL_DrawLines(): dst");
LAB_140632654:
    if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_a8)) {
      return uVar3;
    }
    goto LAB_1406327c5;
  }
  cVar2 = *(char *)(*(longlong *)(param_1 + 0x38) + 5);
  if (cVar2 == '\x04') {
    local_60 = FUN_140633270;
  }
  else if (cVar2 == '\x02') {
    local_60 = FUN_140632b70;
  }
  else {
    if ((cVar2 != '\x01') || (*(byte *)(*(longlong *)(param_1 + 0x38) + 4) < 8)) {
      uVar3 = FUN_1400fbed0("SDL_DrawLines(): Unsupported surface format");
      goto LAB_140632654;
    }
    local_60 = FUN_1406327e0;
  }
  local_68 = param_3;
  if (1 < (int)param_3) {
    uVar5 = 1;
    do {
      local_4c = param_2[uVar5 * 2 + -2];
      local_50 = param_2[uVar5 * 2 + -1];
      local_54 = param_2[uVar5 * 2];
      local_58 = param_2[uVar5 * 2 + 1];
      local_88 = &local_58;
      cVar2 = potential_rect_math_overflow(param_1 + 100,&local_4c,&local_50,&local_54);
      if (cVar2 != '\0') {
        local_78 = true;
        if (((local_4c != local_54) || (local_50 != local_58)) && (local_54 == param_2[uVar5 * 2]))
        {
          local_78 = local_58 != param_2[uVar5 * 2 + 1];
        }
        local_80 = local_64;
        local_88 = (int *)CONCAT44(local_88._4_4_,local_58);
        (*local_60)(param_1,local_4c,local_50);
      }
      uVar5 = uVar5 + 1;
    } while (param_3 != uVar5);
  }
  lVar4 = (longlong)(int)local_68;
  if (*param_2 == param_2[lVar4 * 2 + -2]) {
    iVar1 = param_2[lVar4 * 2 + -1];
    if (param_2[1] != iVar1) goto LAB_140632791;
  }
  else {
    iVar1 = param_2[lVar4 * 2 + -1];
LAB_140632791:
    sdl_drawpoint_unsupported_surface_format(param_1,param_2[lVar4 * 2 + -2],iVar1,local_64);
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_a8)) {
    return CONCAT71((int7)((local_48 ^ (ulonglong)auStack_a8) >> 8),1);
  }
LAB_1406327c5:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_a8);
}

