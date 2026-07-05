/**
 * Function: inlining_failed_too_many_inlined_frames
 * Address:  1406d4aa0
 * Signature: undefined inlining_failed_too_many_inlined_frames(void)
 * Body size: 981 bytes
 */


ulonglong inlining_failed_too_many_inlined_frames
                    (undefined8 *param_1,longlong param_2,ulonglong param_3,undefined4 param_4,
                    undefined1 param_5,char param_6,int param_7,int param_8,int param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_98 [32];
  int local_78;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  if ((param_1[0xe] != 0) && (param_3 != param_1[0xf])) {
    uVar12 = param_3 >> 9 ^ param_3 >> 4;
    uVar13 = 0;
    do {
      uVar12 = uVar12 & param_1[0xd] - 1;
      lVar10 = uVar12 * 0x38;
      uVar16 = *(ulonglong *)(param_1[0xc] + lVar10);
      if (uVar16 == param_3) {
        lVar10 = param_1[0xc] + lVar10;
        goto LAB_1406d4b19;
      }
      if (uVar16 == param_1[0xf]) break;
      uVar12 = uVar12 + uVar13 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 <= param_1[0xd] - 1);
  }
  lVar10 = 0;
LAB_1406d4b19:
  lVar17 = lVar10 + 8;
  if (lVar10 == 0) {
    lVar17 = 0;
  }
  if ((*(uint *)((longlong)param_1 + 0x4fc) < 0x81) && (*(uint *)(lVar10 + 0x30) < 0x21)) {
    puVar7 = (ulonglong *)param_1[0xaf];
    if ((int)((ulonglong)((longlong)param_1[0xb0] - (longlong)puVar7) >> 4) * -0x55555555 < param_9)
    {
      for (; puVar7 != (ulonglong *)param_1[0xb0]; puVar7 = puVar7 + 6) {
        if (*puVar7 == param_3) {
          uVar8 = *param_1;
          pcVar9 = "inlining failed: can\'t inline recursive calls";
          goto LAB_1406d4b40;
        }
      }
      if (param_6 == '\0') {
        local_50 = 0;
        local_58 = *(ulonglong *)(param_3 + 0x60);
        local_60 = *(ulonglong *)(param_2 + 0x40);
        if (local_58 == 0) {
LAB_1406d4ccf:
          local_68 = 0;
        }
        else {
          uVar12 = 8;
          if (local_60 < 8) {
            uVar12 = local_60;
          }
          if (param_1[0x22] == 0) goto LAB_1406d4ccf;
          lVar10 = param_1[0x20];
          lVar1 = param_1[0x21];
          uVar13 = param_1[0x23];
          local_68 = 0;
          uVar16 = 0;
          do {
            if (uVar16 == uVar12) break;
            uVar2 = *(ulonglong *)(*(longlong *)(param_2 + 0x38) + uVar16 * 8);
            if (uVar2 != uVar13) {
              uVar15 = uVar2 >> 9 ^ uVar2 >> 4;
              uVar14 = 0;
              do {
                uVar15 = uVar15 & lVar1 - 1U;
                lVar11 = uVar15 * 0x20;
                uVar3 = *(ulonglong *)(lVar10 + lVar11);
                if (uVar3 == uVar2) {
                  if (*(int *)(lVar11 + lVar10 + 8) != 0) {
                    *(undefined1 *)((longlong)&local_50 + uVar16) = 1;
                    local_68 = CONCAT71((int7)(uVar2 >> 8),1);
                  }
                  break;
                }
                if (uVar3 == uVar13) break;
                uVar15 = uVar15 + uVar14 + 1;
                uVar14 = uVar14 + 1;
              } while (uVar14 <= lVar1 - 1U);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != local_58);
        }
        if ((local_60 == 0) ||
           (cVar4 = FUN_1406d3410(param_1,*(undefined8 *)
                                           (*(longlong *)(param_2 + 0x38) + -8 + local_60 * 8)),
           cVar4 != '\0')) {
LAB_1406d4d47:
          if ((local_68 & 1) != 0) goto LAB_1406d4d52;
          uVar8 = *(undefined8 *)(lVar17 + 0x20);
        }
        else {
          uVar12 = *(ulonglong *)(param_2 + 0x40);
          uVar13 = 8;
          if (*(ulonglong *)(param_3 + 0x60) < 8) {
            uVar13 = *(ulonglong *)(param_3 + 0x60);
          }
          if (uVar13 < uVar12 || uVar13 - uVar12 == 0) goto LAB_1406d4d47;
          memset((void *)((longlong)&local_50 + uVar12),
                 (int)CONCAT71((int7)((ulonglong)param_2 >> 8),1),uVar13 - uVar12);
LAB_1406d4d52:
          uVar8 = FUN_1406d5700(param_1,param_2,param_3);
        }
        iVar5 = 8;
        if (*(int *)(param_3 + 0x60) < 8) {
          iVar5 = *(int *)(param_3 + 0x60);
        }
        iVar5 = FUN_1407b3790(uVar8,&local_50,(longlong)iVar5);
        iVar6 = FUN_1407b3790(*(undefined8 *)(lVar17 + 0x20),0,0);
        if ((iVar5 != 0) && (iVar6 = (iVar6 * 100 + 300) / iVar5, iVar6 < param_8)) {
          param_8 = iVar6;
        }
        iVar6 = (param_7 * param_8) / 100;
        uVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),iVar5 <= iVar6);
        if (iVar6 < iVar5) {
          FUN_1407ab880(*param_1,"inlining failed: too expensive (cost %d, profit %.2fx)",iVar5,
                        (double)param_8 / 100.0);
        }
        else {
          local_78 = (int)((ulonglong)(param_1[0xb0] - param_1[0xaf]) >> 4) * -0x55555555;
          FUN_1407ab880(*param_1,"inlining succeeded (cost %d, profit %.2fx, depth %d)",iVar5,
                        (double)param_8 / 100.0);
          local_78 = CONCAT31(local_78._1_3_,param_5);
          exceeded_jump_distance_limit_simplify_the_cod(param_1,param_2,param_3,param_4);
        }
        goto LAB_1406d4b48;
      }
      uVar8 = *param_1;
      pcVar9 = "inlining failed: can\'t convert fixed returns to multret";
    }
    else {
      uVar8 = *param_1;
      pcVar9 = "inlining failed: too many inlined frames";
    }
  }
  else {
    uVar8 = *param_1;
    pcVar9 = "inlining failed: high register pressure";
  }
LAB_1406d4b40:
  FUN_1407ab880(uVar8,pcVar9);
  uVar12 = 0;
LAB_1406d4b48:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_98)) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_98);
}

