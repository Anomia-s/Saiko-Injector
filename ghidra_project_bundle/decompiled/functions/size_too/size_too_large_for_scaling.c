/**
 * Function: size_too_large_for_scaling
 * Address:  14017dbd0
 * Signature: undefined size_too_large_for_scaling(void)
 * Body size: 1348 bytes
 */


ulonglong size_too_large_for_scaling
                    (uint *param_1,int *param_2,uint *param_3,int *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  uint *puVar16;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  int *local_b0;
  undefined4 local_a8;
  uint local_a0;
  uint local_98;
  undefined4 local_90;
  longlong local_88;
  uint local_80;
  uint *local_78;
  uint *local_70;
  int local_68 [2];
  undefined8 local_60;
  int local_58 [3];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  if (param_1 == (uint *)0x0) {
    pcVar10 = "src";
LAB_14017dc7e:
    uVar7 = FUN_1400fbed0("Parameter \'%s\' is invalid",pcVar10);
  }
  else {
    if (param_3 == (uint *)0x0) {
      pcVar10 = "dst";
      goto LAB_14017dc7e;
    }
    uVar5 = param_1[1];
    if (uVar5 != param_3[1]) {
      local_b8 = CONCAT44(local_b8._4_4_,param_3[0xd]);
      lVar8 = empty_destination_palette
                        (param_1,param_3[1],*(undefined8 *)(param_3 + 0x12),param_3[0x10]);
      if (lVar8 != 0) {
        local_b8 = CONCAT44(local_b8._4_4_,param_5);
        uVar5 = size_too_large_for_scaling(lVar8,param_2,param_3,param_4);
        parameter_s_is_invalid(lVar8);
        if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_d8)) {
          return (ulonglong)uVar5;
        }
        goto LAB_14017e104;
      }
      piVar12 = (int *)0x0;
LAB_14017de6e:
      if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_d8)) {
        return (ulonglong)piVar12 & 0xffffffff;
      }
      goto LAB_14017e104;
    }
    puVar11 = (uint *)(param_4 + 3);
    puVar16 = (uint *)(param_4 + 2);
    piVar15 = param_4 + 1;
    if ((uVar5 & 0xf0000000) != 0x10000000 && uVar5 != 0) {
      if (param_4 == (int *)0x0) {
        puVar11 = (uint *)((longlong)&local_60 + 4);
        puVar16 = (uint *)&local_60;
        piVar15 = local_68 + 1;
        local_68[0] = 0;
        local_68[1] = 0;
        local_60 = *(undefined8 *)(param_3 + 2);
        param_4 = local_68;
      }
      local_78 = puVar16;
      local_70 = puVar11;
      lVar8 = parameter_s_is_invalid(param_1,0x16161804);
      lVar9 = height_pitch_would_overflow(param_4[2],param_4[3],0x16161804);
      piVar12 = (int *)0x0;
      if ((lVar8 != 0) && (lVar9 != 0)) {
        local_b8 = CONCAT44(local_b8._4_4_,param_5);
        piVar12 = (int *)0x0;
        cVar4 = size_too_large_for_scaling(lVar8,param_2,lVar9,0);
        if (cVar4 != '\0') {
          uVar5 = param_3[4];
          iVar1 = *piVar15;
          iVar2 = *param_4;
          lVar3 = *(longlong *)(param_3 + 6);
          uVar14 = param_3[1];
          if ((uVar14 & 0xf0000000) == 0x10000000 || uVar14 == 0) {
            uVar6 = uVar14 & 0xff;
          }
          else {
            uVar6 = 2;
            if (((uVar14 != 0x32595559) && (uVar14 != 0x55595659)) && (uVar14 != 0x59565955)) {
              uVar6 = (uVar14 == 0x30313050) + 1;
            }
          }
          local_90 = parameter_s_is_invalid(param_3);
          local_a0 = param_3[1];
          local_98 = param_3[0x10];
          local_a8 = *(undefined4 *)(lVar9 + 0x10);
          local_b0 = *(int **)(lVar9 + 0x18);
          local_b8 = local_b8 & 0xffffffff00000000;
          local_88 = (longlong)iVar1 * (longlong)(int)uVar5 + lVar3 +
                     (ulonglong)uVar6 * (longlong)iVar2;
          local_80 = uVar5;
          uVar5 = parameter_s_is_invalid(*local_78,*local_70,*(undefined4 *)(lVar9 + 4),0x120005a0);
          piVar12 = (int *)(ulonglong)uVar5;
        }
      }
      parameter_s_is_invalid(lVar8);
      parameter_s_is_invalid(lVar9);
      goto LAB_14017de6e;
    }
    if (1 < param_5) {
      pcVar10 = "scaleMode";
      goto LAB_14017dc7e;
    }
    if ((param_5 == 1) && (uVar5 == 0x16372004 || (char)uVar5 != '\x04')) {
      uVar7 = FUN_1400fbed0("Wrong format");
    }
    else {
      if (param_2 == (int *)0x0) {
        local_58[0] = 0;
        local_58[1] = 0;
        uVar5 = param_1[2];
        uVar14 = param_1[3];
        param_2 = local_58;
        local_58[2] = uVar5;
        local_4c = uVar14;
      }
      else if (((*param_2 < 0) || (param_2[1] < 0)) ||
              ((uVar5 = param_2[2], (int)param_1[2] < (int)(*param_2 + uVar5) ||
               (uVar14 = param_2[3], (int)param_1[3] < (int)(param_2[1] + uVar14))))) {
        uVar7 = FUN_1400fbed0("Invalid source blit rectangle");
        goto LAB_14017dc83;
      }
      if (param_4 == (int *)0x0) {
        local_68[0] = 0;
        local_68[1] = 0;
        uVar6 = param_3[2];
        uVar13 = param_3[3];
        local_60 = *(undefined8 *)(param_3 + 2);
        param_4 = local_68;
      }
      else if ((((*param_4 < 0) || (*piVar15 < 0)) ||
               (uVar6 = *puVar16, (int)param_3[2] < (int)(*param_4 + uVar6))) ||
              (uVar13 = *puVar11, (int)param_3[3] < (int)(*piVar15 + uVar13))) {
        uVar7 = FUN_1400fbed0("Invalid destination blit rectangle");
        goto LAB_14017dc83;
      }
      piVar12 = (int *)CONCAT71((int7)((ulonglong)puVar11 >> 8),1);
      if ((int)uVar13 < 1 || (int)uVar6 < 1) goto LAB_14017de6e;
      if (((int)uVar5 < 0x10000) && ((uVar13 < 0x10000 && uVar6 < 0x10000) && (int)uVar14 < 0x10000)
         ) {
        uVar5 = *param_3;
        if (((uVar5 & 2) == 0) ||
           (cVar4 = parameter_s_is_invalid(param_3), piVar12 = param_2, cVar4 != '\0')) {
          uVar14 = *param_1;
          if (((uVar14 & 2) == 0) ||
             (cVar4 = parameter_s_is_invalid(param_1), piVar12 = param_2, cVar4 != '\0')) {
            if (param_5 == 0) {
              FUN_14017e120();
              piVar12 = (int *)CONCAT71((int7)((ulonglong)piVar12 >> 8),1);
            }
            else {
              local_b8 = *(ulonglong *)(param_3 + 6);
              local_b0 = param_4;
              uVar6 = FUN_14017e750(param_1[4],*(undefined8 *)(param_1 + 6),param_2,param_3[4]);
              piVar12 = (int *)(ulonglong)uVar6;
            }
            if ((uVar5 & 2) != 0) {
              FUN_140113f30(param_3);
            }
            if ((uVar14 & 2) != 0) {
              FUN_140113f30(param_1);
            }
            goto LAB_14017de6e;
          }
          if ((uVar5 & 2) != 0) {
            FUN_140113f30(param_3);
          }
          uVar7 = FUN_1400fbed0("Unable to lock source surface");
        }
        else {
          uVar7 = FUN_1400fbed0("Unable to lock destination surface");
        }
      }
      else {
        uVar7 = FUN_1400fbed0("Size too large for scaling");
      }
    }
  }
LAB_14017dc83:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_d8)) {
    return uVar7;
  }
LAB_14017e104:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_d8);
}

