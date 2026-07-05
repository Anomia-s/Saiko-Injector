/**
 * Function: sdl_blendfillrects_dst
 * Address:  14061efc0
 * Signature: undefined sdl_blendfillrects_dst(void)
 * Body size: 507 bytes
 */


ulonglong sdl_blendfillrects_dst
                    (longlong param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
                    byte param_6,byte param_7,byte param_8)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  code *pcVar6;
  uint uVar7;
  uint7 uVar9;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  byte local_88;
  byte local_80;
  byte local_78;
  code *local_70;
  uint local_64;
  undefined8 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  uVar5 = (ulonglong)param_3;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  local_60 = param_4;
  cVar4 = FUN_140110960();
  if (cVar4 == '\0') {
    uVar5 = FUN_1400fbed0("Parameter \'%s\' is invalid","SDL_BlendFillRects(): dst");
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x38);
    bVar1 = *(byte *)(lVar3 + 4);
    if (7 < bVar1) {
      uVar7 = (uint)param_5;
      if ((int)local_60 - 1U < 2) {
        uVar7 = (uVar7 * param_8) / 0xff;
        param_6 = (byte)(((uint)param_6 * (uint)param_8) / 0xff);
        param_7 = (byte)(((uint)param_7 * (uint)param_8) / 0xff);
      }
      if (bVar1 == 0x20) {
        if (*(int *)(lVar3 + 8) != 0xff0000) goto LAB_14061f0fd;
        iVar2 = *(int *)(lVar3 + 0x14);
        pcVar6 = FUN_140618190;
        local_70 = FUN_140618e80;
LAB_14061f10f:
        if (iVar2 == 0) {
          local_70 = pcVar6;
        }
      }
      else if (bVar1 == 0x10) {
        if (*(int *)(lVar3 + 8) != 0xf800) goto LAB_14061f0fd;
        local_70 = FUN_1406170d0;
      }
      else {
        if ((bVar1 != 0xf) || (*(int *)(lVar3 + 8) != 0x7c00)) {
LAB_14061f0fd:
          iVar2 = *(int *)(lVar3 + 0x14);
          pcVar6 = that_operation_is_not_supported;
          local_70 = that_operation_is_not_supported;
          goto LAB_14061f10f;
        }
        local_70 = FUN_140616020;
      }
      uVar9 = (uint7)(uint3)(param_3 >> 8);
      if ((int)param_3 < 1) {
        uVar8 = CONCAT71(uVar9,1);
      }
      else {
        uVar8 = CONCAT71(uVar9,1);
        local_64 = uVar7;
        do {
          cVar4 = potential_rect_math_overflow(param_2,param_1 + 100,local_58);
          if (cVar4 != '\0') {
            local_78 = param_8;
            local_88 = param_6;
            local_80 = param_7;
            uVar7 = (*local_70)(param_1,local_58,local_60,local_64);
            uVar8 = (ulonglong)uVar7;
          }
          param_2 = param_2 + 0x10;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_a8)) {
        return uVar8 & 0xffffffffffffff01;
      }
      goto LAB_14061f1b8;
    }
    uVar5 = FUN_1400fbed0("SDL_BlendFillRects(): Unsupported surface format");
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_a8)) {
    return uVar5;
  }
LAB_14061f1b8:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_a8);
}

