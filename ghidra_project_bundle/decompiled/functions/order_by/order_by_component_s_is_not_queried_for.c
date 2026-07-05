/**
 * Function: order_by_component_s_is_not_queried_for
 * Address:  140395830
 * Signature: undefined order_by_component_s_is_not_queried_for(void)
 * Body size: 2001 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * order_by_component_s_is_not_queried_for(longlong param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  void *pvVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  code *pcVar12;
  int iVar13;
  ushort *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_15c8 [32];
  undefined8 local_15a8;
  longlong local_1598;
  longlong local_1590;
  void *local_1588;
  undefined1 local_1580 [204];
  uint local_14b4;
  undefined8 local_1418;
  undefined8 uStack_1410;
  undefined1 local_1408 [8];
  undefined1 local_1400 [2304];
  undefined8 local_b00;
  byte local_af4;
  byte local_af1;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined8 local_a50;
  undefined8 uStack_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  code *local_a30;
  longlong lStack_a28;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined1 local_9e8 [2320];
  undefined4 local_d8;
  uint local_d4;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x140395846;
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_15c8;
  lVar3 = *(longlong *)(param_1 + 0x80);
  lVar17 = *(longlong *)(param_1 + 0x98);
  memcpy(local_9e8,param_2,0x988);
  lVar8 = local_68;
  local_d8 = 3;
  local_d0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  plVar7 = (longlong *)FUN_140391620(lVar17 + 0x1a0);
  local_1590 = lVar8;
  plVar7[0x1e] = lVar8;
  *(longlong **)(param_1 + 0x138) = plVar7;
  local_1418 = 0;
  uStack_1410 = 0;
  memcpy(local_1408,local_9e8,0x988);
  local_a80 = 0;
  uStack_a78 = 0;
  local_a70 = 0;
  uStack_a68 = 0;
  local_a60 = 0;
  uStack_a58 = 0;
  local_a50 = 0;
  uStack_a48 = 0;
  local_a40 = 0;
  uStack_a38 = 0;
  local_a30 = (code *)0x0;
  lStack_a28 = 0;
  local_a20 = 0;
  uStack_a18 = 0;
  local_a10 = 0;
  uStack_a08 = 0;
  local_a00 = 0;
  uStack_9f8 = 0;
  local_9f0 = 0;
  local_af1 = local_af1 | 0x20;
  uVar1 = *(undefined4 *)(lVar3 + 0xbbc);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x914);
  local_d4 = local_d4 | 0x20000088;
  lVar17 = *(longlong *)((longlong)param_2 + 0x918);
  lVar8 = cannot_enforce_querycacheall_query_contains_u(lVar3,local_9e8);
  *plVar7 = lVar8;
  if (lVar8 == 0) {
LAB_140395f42:
    plVar7 = (longlong *)0x0;
  }
  else {
    if ((*(byte *)(param_1 + 0x33) & 2) != 0) {
      cVar6 = *(char *)(lVar8 + 0x35);
      if (cVar6 < '\x01') {
        uVar11 = 0;
LAB_140395a00:
        if ((uint)uVar11 != (int)cVar6) goto LAB_140395a53;
      }
      else {
        puVar14 = (ushort *)(*(longlong *)(lVar8 + 0x10) + 0x42);
        uVar11 = 0;
        do {
          if ((3 < *puVar14) || (*puVar14 == 1)) goto LAB_140395a00;
          uVar11 = uVar11 + 1;
          puVar14 = puVar14 + 0x24;
        } while ((uint)(int)cVar6 != uVar11);
      }
      if (((((*(uint *)(lVar8 + 0x30) & 0x40006000) == 0x2000) &&
           (*(longlong *)((longlong)param_2 + 0x928) == 0)) &&
          (*(longlong *)((longlong)param_2 + 0x930) == 0)) &&
         (((*(longlong *)((longlong)param_2 + 0x918) == 0 &&
           (*(longlong *)((longlong)param_2 + 0x938) == 0)) &&
          ((*(byte *)((longlong)param_2 + 0x915) & 1) == 0)))) {
        *(uint *)(lVar8 + 0x30) = *(uint *)(lVar8 + 0x30) | 0x10000000;
      }
    }
LAB_140395a53:
    local_1598 = lVar17;
    local_1588 = param_2;
    if (((*(byte *)((longlong)param_2 + 0x915) & 1) != 0) && ('\0' < *(char *)(lVar8 + 0x35))) {
      lVar19 = 0;
      lVar17 = 0;
      do {
        lVar15 = *(longlong *)(lVar8 + 0x10);
        lVar9 = FUN_1403a6fa0(lVar3,*(undefined8 *)(lVar15 + lVar19));
        *(byte *)(lVar9 + 0x3a) = *(byte *)(lVar9 + 0x3a) | 4;
        uVar11 = *(ulonglong *)(lVar15 + lVar19);
        if (uVar11 < 0x100) {
          *(undefined1 *)(lVar3 + 0x6cc + uVar11) = 1;
        }
        lVar17 = lVar17 + 1;
        lVar19 = lVar19 + 0x48;
      } while (lVar17 < *(char *)(lVar8 + 0x35));
    }
    pvVar5 = local_1588;
    if ((*(longlong *)((longlong)local_1588 + 0x928) != 0) &&
       (lVar17 = FUN_1403a6fa0(lVar3), lVar17 != 0)) {
      *(byte *)(lVar17 + 0x3a) = *(byte *)(lVar17 + 0x3a) | 4;
      if (*(ulonglong *)((longlong)pvVar5 + 0x928) < 0x100) {
        *(undefined1 *)(lVar3 + 0x6cc + *(ulonglong *)((longlong)pvVar5 + 0x928)) = 1;
      }
    }
    bVar20 = local_1598 == 0;
    lVar17 = lVar3 + 0xcc0;
    FUN_1403b26c0(lVar17,plVar7 + 8,
                  (uint)((*(uint *)(*plVar7 + 0x30) & 0x10000000) == 0) << 6 | 0x18,0);
    plVar7[0xe] = (longlong)(plVar7 + 8);
    *(uint *)(lVar8 + 0x30) =
         (uint)((((byte)uVar1 | (byte)uVar2) & 8) >> 3 & bVar20) << 0x1b |
         *(uint *)(lVar8 + 0x30) & 0xf7ffffff;
    lVar19 = *plVar7;
    cVar6 = *(char *)(lVar19 + 0x36);
    if (cVar6 != '\0') {
      iVar13 = cVar6 * 8;
      FUN_140391470(plVar7 + 0x21,iVar13);
      FUN_140391470(plVar7 + 0x25,iVar13);
      FUN_140391470(plVar7 + 0x29,cVar6 * 4 + 4);
      lVar19 = *plVar7;
    }
    if (*(char *)(lVar19 + 0x35) != '\0') {
      lVar19 = FUN_140391620(plVar7 + 0x25);
      plVar7[0x1f] = lVar19;
    }
    if ((longlong)*(char *)(lVar8 + 0x35) != 0) {
      local_a30 = opt_actions_runner_work_platform_platform_thi;
      local_a80 = 0x131;
      uStack_a78 = 0x132;
      local_9f0 = CONCAT44(0x80,(undefined4)local_9f0);
      lStack_a28 = param_1;
      memcpy(local_1400,*(void **)(lVar8 + 0x10),(longlong)*(char *)(lVar8 + 0x35) * 0x48);
      local_b00 = 0;
      local_af4 = local_af4 | 0x80;
      lVar8 = ecs_observer_impl_t(lVar3,local_1590);
      plVar7[1] = lVar8;
      if (lVar8 == 0) goto LAB_140395f42;
    }
    *(undefined4 *)((longlong)plVar7 + 0xe4) = 0xffffffff;
    lVar8 = (longlong)*(char *)(*plVar7 + 0x35);
    local_1598 = lVar17;
    if (0 < lVar8) {
      lVar17 = *(longlong *)(*plVar7 + 0x10);
      iVar13 = 1;
      lVar19 = 0;
      do {
        uVar11 = *(ulonglong *)(lVar17 + 8 + lVar19);
        if ((uVar11 >> 0x3c & 1) != 0) {
          *(int *)((longlong)plVar7 + 0xdc) = iVar13;
          uVar11 = *(ulonglong *)(lVar17 + 8 + lVar19);
        }
        if ((uVar11 & 0x4000000000000000) != 0) {
          *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 8;
        }
        lVar19 = lVar19 + 0x48;
        iVar13 = iVar13 + 1;
      } while (lVar8 * 0x48 != lVar19);
      lVar17 = (longlong)*(char *)(*plVar7 + 0x35);
      if (0 < lVar17) {
        puVar18 = *(undefined8 **)(*plVar7 + 0x10);
        do {
          if ((puVar18[1] & 0x4000000000000000) == 0) {
            if ((longlong)puVar18[1] < 0) {
              FUN_140392fc0(puVar18);
            }
          }
          else {
            FUN_1400bd8a0(lVar3,puVar18[7] << 0x20 | 0x800000000000010e,param_1);
            if (puVar18[7] != 0x127) {
              FUN_1400bd8a0(lVar3,0x800001270000010e,param_1);
            }
            FUN_1400bd8a0(lVar3,*puVar18,param_1);
          }
          puVar18 = puVar18 + 9;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
    }
    lVar17 = (longlong)*(int *)((longlong)plVar7 + 0xdc);
    if (lVar17 != 0) {
      plVar7[0x15] = *(longlong *)(*(longlong *)(*plVar7 + 0x10) + -0x48 + lVar17 * 0x48);
      plVar7[0x16] = (longlong)FUN_1403961b0;
      FUN_1403b61c0(plVar7 + 5,*(longlong *)(*plVar7 + 0x88) + 0xcc0);
      plVar7[0x19] = lVar17 * 0x48 + -0x48 + *(longlong *)(*plVar7 + 0x10);
    }
    pvVar5 = local_1588;
    lVar17 = local_1598;
    pcVar12 = *(code **)((longlong)local_1588 + 0x938);
    if (pcVar12 == (code *)0x0) {
      if (*(longlong *)((longlong)local_1588 + 0x930) != 0) {
        pcVar12 = FUN_1403961d0;
        goto LAB_140395de8;
      }
    }
    else {
LAB_140395de8:
      plVar7[0x15] = *(longlong *)((longlong)local_1588 + 0x930);
      plVar7[0x16] = (longlong)pcVar12;
      FUN_1403b61c0(plVar7 + 5,*(longlong *)(*plVar7 + 0x88) + 0xcc0);
      plVar7[0x19] = *(longlong *)((longlong)pvVar5 + 0x950);
      plVar7[0x17] = *(longlong *)((longlong)pvVar5 + 0x940);
      plVar7[0x18] = *(longlong *)((longlong)pvVar5 + 0x948);
      plVar7[0x1a] = *(longlong *)((longlong)pvVar5 + 0x958);
    }
    FUN_1403b61c0(plVar7 + 2,lVar17);
    FUN_1400bd7b0(local_1580,lVar3,*plVar7);
    local_14b4 = local_14b4 | 0x100002;
    cVar6 = FUN_1400bcfa0(local_1580);
    if (cVar6 != '\0') {
      do {
        cVar6 = FUN_1403d1ad0(plVar7,local_1580);
      } while (cVar6 != '\0');
    }
    lVar17 = *(longlong *)((longlong)pvVar5 + 0x918);
    if (lVar17 != 0) {
      lVar8 = *(longlong *)((longlong)pvVar5 + 0x920);
      lVar19 = *(longlong *)((longlong)pvVar5 + 0x928);
      plVar4 = *(longlong **)(param_1 + 0x138);
      if (lVar19 != 0) {
        cVar6 = *(char *)(*plVar4 + 0x35);
        if ('\0' < cVar6) {
          plVar16 = *(longlong **)(*plVar4 + 0x10);
          lVar15 = 0;
          do {
            if ((*plVar16 == lVar19) && (*(short *)((longlong)plVar16 + 0x42) == 0))
            goto LAB_140395f84;
            lVar15 = lVar15 + 1;
            plVar16 = plVar16 + 9;
          } while (cVar6 != lVar15);
        }
        uVar10 = FUN_1403b36e0(lVar3);
        local_15a8 = uVar10;
        FUN_140399630(0xfffffffd,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/query/cache/cache.c"
                      ,0x16a,"order_by component \'%s\' is not queried for");
        (*DAT_1415033b0)(uVar10);
        goto LAB_140395f42;
      }
      lVar15 = 0xffffffff;
LAB_140395f84:
      plVar4[0xf] = lVar19;
      plVar4[0x10] = lVar17;
      *(int *)(plVar4 + 0x14) = (int)lVar15;
      plVar4[0x11] = lVar8;
      FUN_1403b2770(0,plVar4 + 0x12,0x58);
      FUN_1405d83b0(lVar3,param_1);
      if (plVar4[0x12] == 0) {
        FUN_1405d7e10(plVar4);
      }
    }
    if (((local_1590 != 0) && ((*(uint *)((longlong)plVar7 + 0x1c) & 0x3ffffff) == 0)) &&
       (*(char *)(*plVar7 + 0x35) != '\0')) {
      thunk_FUN_1400b7e20(lVar3,local_1590,0x143);
    }
  }
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStack_15c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStack_15c8);
  }
  return plVar7;
}

