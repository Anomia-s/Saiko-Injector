/**
 * Function: surfaces_must_not_be_locked_during_blit
 * Address:  140113380
 * Signature: undefined surfaces_must_not_be_locked_during_blit(void)
 * Body size: 1027 bytes
 */


undefined8
surfaces_must_not_be_locked_during_blit
          (byte *param_1,longlong param_2,float param_3,undefined4 param_4,byte *param_5,
          byte *param_6)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  ulonglong uVar6;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  if ((param_1 == (byte *)0x0) || (*(undefined **)(param_1 + 0x28) != &DAT_14152553c)) {
    pcVar4 = "src";
LAB_1401133cd:
    uVar2 = FUN_1400fbed0("Parameter \'%s\' is invalid",pcVar4);
  }
  else {
    if ((param_5 == (byte *)0x0) || (*(undefined **)(param_5 + 0x28) != &DAT_14152553c)) {
      pcVar4 = "dst";
      goto LAB_1401133cd;
    }
    if (((*param_1 & 4) == 0) && ((*param_5 & 4) == 0)) {
      if (param_3 <= 0.0) {
        pcVar4 = "scale";
        goto LAB_1401133cd;
      }
      local_70 = 0;
      uStack_68 = *(undefined8 *)(param_1 + 8);
      if (param_6 == (byte *)0x0) {
        uVar10 = 0;
        uVar11 = 0;
        param_6 = param_5;
      }
      else {
        uVar10 = (undefined4)*(undefined8 *)param_6;
        uVar11 = (undefined4)((ulonglong)*(undefined8 *)param_6 >> 0x20);
      }
      local_80 = CONCAT44(uVar11,uVar10);
      local_78 = *(undefined8 *)(param_6 + 8);
      if (param_2 == 0) {
LAB_1401134c8:
        cVar1 = potential_rect_math_overflow(&local_80,param_5 + 100,&local_80);
        uVar2 = 1;
        if (cVar1 != '\0') {
          if ((*(uint *)(param_1 + 0x100) & 0x800) != 0) {
            *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) & 0xfffff7ff;
            FUN_1401579d0(param_1 + 0x78);
          }
          local_b4 = (int)(param_3 * (float)(int)uStack_68);
          iVar12 = (int)(param_3 * (float)(int)((ulonglong)uStack_68 >> 0x20));
          local_ac = local_78._4_4_ % iVar12;
          uVar6 = (longlong)local_78._4_4_ / (longlong)iVar12 & 0xffffffff;
          iVar3 = (int)local_78 % local_b4;
          uVar8 = (longlong)(int)local_78 / (longlong)local_b4 & 0xffffffff;
          local_bc = (int)((float)iVar3 / param_3);
          local_98 = local_70;
          uStack_90 = uStack_68;
          local_a4 = local_80._4_4_;
          local_a0 = CONCAT44(iVar12,local_b4);
          iVar9 = (int)((longlong)local_78._4_4_ / (longlong)iVar12);
          iVar7 = (int)((longlong)(int)local_78 / (longlong)local_b4);
          if (0 < iVar9) {
            if (iVar7 < 1) {
              if (iVar3 < 1) {
                local_a4 = local_80._4_4_ + iVar9 * iVar12;
              }
              else {
                do {
                  local_a8 = (int)local_80;
                  uStack_90 = CONCAT44(uStack_90._4_4_,local_bc);
                  local_a0 = CONCAT44(local_a0._4_4_,iVar3);
                  local_c8 = param_4;
                  cVar1 = size_too_large_for_scaling(param_1,&local_98,param_5,&local_a8);
                  if (cVar1 == '\0') goto LAB_140113755;
                  uStack_90 = CONCAT44(uStack_90._4_4_,(undefined4)uStack_68);
                  local_a0 = CONCAT44(local_a0._4_4_,local_b4);
                  local_a4 = local_a4 + local_a0._4_4_;
                  uVar5 = (int)uVar6 - 1;
                  uVar6 = (ulonglong)uVar5;
                } while (uVar5 != 0);
              }
            }
            else {
              iVar12 = 0;
              local_b0 = iVar3;
              do {
                local_a8 = (int)local_80;
                uVar6 = uVar8;
                local_b8 = iVar12;
                do {
                  local_c8 = param_4;
                  cVar1 = size_too_large_for_scaling(param_1,&local_98,param_5,&local_a8);
                  iVar3 = local_b0;
                  if (cVar1 == '\0') goto LAB_140113755;
                  local_a8 = local_a8 + (int)local_a0;
                  uVar5 = (int)uVar6 - 1;
                  uVar6 = (ulonglong)uVar5;
                } while (uVar5 != 0);
                if (0 < local_b0) {
                  uStack_90 = CONCAT44(uStack_90._4_4_,local_bc);
                  local_a0 = CONCAT44(local_a0._4_4_,local_b0);
                  local_c8 = param_4;
                  cVar1 = size_too_large_for_scaling(param_1,&local_98,param_5,&local_a8);
                  if (cVar1 == '\0') goto LAB_140113755;
                  uStack_90 = CONCAT44(uStack_90._4_4_,(undefined4)uStack_68);
                  local_a0 = CONCAT44(local_a0._4_4_,local_b4);
                }
                local_a4 = local_a4 + local_a0._4_4_;
                iVar12 = local_b8 + 1;
              } while (iVar12 != iVar9);
            }
          }
          if (0 < local_ac) {
            uStack_90 = CONCAT44((int)((float)local_ac / param_3),(undefined4)uStack_90);
            local_a0 = CONCAT44(local_ac,(int)local_a0);
            local_a8 = (int)local_80;
            if (0 < iVar7) {
              do {
                local_c8 = param_4;
                cVar1 = size_too_large_for_scaling(param_1,&local_98,param_5,&local_a8);
                if (cVar1 == '\0') goto LAB_140113755;
                local_a8 = local_a8 + (int)local_a0;
                uVar5 = (int)uVar8 - 1;
                uVar8 = (ulonglong)uVar5;
              } while (uVar5 != 0);
            }
            if (0 < iVar3) {
              uStack_90 = CONCAT44(uStack_90._4_4_,local_bc);
              local_a0 = CONCAT44(local_a0._4_4_,iVar3);
              local_c8 = param_4;
              cVar1 = size_too_large_for_scaling(param_1,&local_98,param_5,&local_a8);
              if (cVar1 == '\0') {
LAB_140113755:
                uVar2 = 0;
                goto LAB_140113757;
              }
            }
          }
          uVar2 = 1;
        }
      }
      else {
        cVar1 = potential_rect_math_overflow(param_2,&local_70);
        uVar2 = 1;
        if (cVar1 != '\0') goto LAB_1401134c8;
      }
LAB_140113757:
      if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_e8)) {
        return uVar2;
      }
      goto LAB_140113773;
    }
    uVar2 = FUN_1400fbed0("Surfaces must not be locked during blit");
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_e8)) {
    return uVar2;
  }
LAB_140113773:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_e8);
}

