/**
 * Function: cannot_enforce_querycacheall_query_contains_u
 * Address:  1400b2e10
 * Signature: undefined cannot_enforce_querycacheall_query_contains_u(void)
 * Body size: 1784 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong cannot_enforce_querycacheall_query_contains_u(undefined8 param_1,void *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  uint uVar14;
  byte *pbVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  char *pcVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_13b8 [32];
  undefined8 local_1398;
  undefined8 local_1388;
  undefined1 local_1380 [2320];
  undefined4 local_a70;
  byte local_a6b;
  longlong local_a68;
  longlong local_a58;
  longlong local_a50;
  longlong local_a48;
  longlong local_a00;
  byte local_9f8 [40];
  undefined1 local_9d0 [8];
  undefined8 local_9c8 [4];
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_13b8;
  local_1388 = param_1;
  lVar10 = FUN_1400bd860(&local_1388);
  lVar11 = FUN_140391620(lVar10 + 0x180);
  FUN_140396260(lVar11,0x65637375,0x98,&PTR_s_ecs_query_t_1414f64b8);
  memcpy(local_1380,param_2,0x988);
  lVar20 = *(longlong *)((longlong)param_2 + 0x980);
  if (lVar20 != 0) {
    cVar8 = FUN_140396b90(local_1388);
    if (cVar8 == '\0') {
      thunk_FUN_1400b7f20(local_1388,lVar20,0x8000000300000100);
    }
    else {
      FUN_140398da0(local_1388);
      thunk_FUN_1400b7f20(local_1388,lVar20,0x8000000300000100);
      FUN_140398da0(local_1388);
    }
  }
  *(longlong *)(lVar11 + 0x78) = lVar20;
  *(undefined8 *)(lVar11 + 0x80) = local_1388;
  *(undefined8 *)(lVar11 + 0x88) = param_1;
  *(longlong *)(lVar11 + 0x98) = lVar10;
  iVar9 = last_term_of_query_cant_have_or_operator(local_1388,lVar11,local_1380);
  if (iVar9 != 0) goto LAB_1400b32e2;
  if ((*(longlong *)(lVar11 + 0x78) != 0) && (cVar8 = *(char *)(lVar11 + 0x35), 0 < (longlong)cVar8)
     ) {
    lVar20 = *(longlong *)(lVar11 + 0x10);
    lVar22 = 0;
    do {
      uVar19 = *(ulonglong *)(lVar20 + 8 + lVar22) & 0xffffffffffffff;
      if (uVar19 == *(ulonglong *)(lVar11 + 0x78)) {
        thunk_FUN_1400b7e20(*(undefined8 *)(lVar11 + 0x88),uVar19,*(undefined8 *)(lVar20 + lVar22));
      }
      lVar22 = lVar22 + 0x48;
    } while ((longlong)cVar8 * 0x48 != lVar22);
  }
  *(undefined8 *)(lVar11 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x960);
  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x968);
  *(undefined8 *)(lVar11 + 0x140) = *(undefined8 *)((longlong)param_2 + 0x970);
  *(undefined8 *)(lVar11 + 0x148) = *(undefined8 *)((longlong)param_2 + 0x978);
  *(undefined1 **)(lVar11 + 0x150) = &LAB_1400b3520;
  *(undefined8 *)(lVar11 + 0x138) = 0;
  bVar16 = 1;
  if ((local_a68 == 0 && local_a58 == 0) && (local_a48 == 0 && local_a50 == 0)) {
    bVar16 = local_a6b;
  }
  cVar8 = *(char *)(lVar11 + 0x35);
  uVar14 = (uint)cVar8;
  lVar20 = *(longlong *)(lVar11 + 0x10);
  if ('\0' < cVar8) {
    lVar22 = 0;
    do {
      if ((*(ulonglong *)(lVar20 + 8 + lVar22) & 0x1000000000000000) != 0) {
        bVar16 = 1;
        break;
      }
      lVar22 = lVar22 + 0x48;
    } while ((ulonglong)uVar14 * 0x48 != lVar22);
  }
  switch(local_a70) {
  case 0:
    if ((local_a00 != 0) || ((bVar16 & 1) != 0)) goto switchD_1400b3077_caseD_1;
    goto LAB_1400b30a8;
  case 1:
switchD_1400b3077_caseD_1:
    uVar18 = *(uint *)(lVar11 + 0x30);
    if ((uVar18 & 0x2000000) != 0) {
      if ((uVar18 & 0x40000000) != 0) goto LAB_1400b33ec;
      goto LAB_1400b3134;
    }
    if ((uVar18 & 0x1000000) == 0) {
LAB_1400b30a8:
      *(undefined4 *)(lVar11 + 0x5c) = 3;
      break;
    }
    if ((bVar16 & 1) == 0) {
      if ('\0' < cVar8) {
        if (cVar8 == '\x01') {
          uVar19 = 0;
          iVar9 = 0;
          iVar17 = 0;
        }
        else {
          pbVar15 = (byte *)(lVar20 + 0x8e);
          uVar19 = 0;
          iVar9 = 0;
          iVar17 = 0;
          do {
            if ((pbVar15[-0x48] & 0x40) == 0) {
              bVar16 = *pbVar15;
            }
            else {
              iVar9 = iVar9 + 1;
              iVar17 = iVar17 + (uint)((*(ushort *)(pbVar15 + -0x4c) & 0xfffe) == 2);
              bVar16 = *pbVar15;
            }
            if ((bVar16 & 0x40) != 0) {
              iVar9 = iVar9 + 1;
              iVar17 = iVar17 + (uint)((*(ushort *)(pbVar15 + -4) & 0xfffe) == 2);
            }
            uVar19 = uVar19 + 2;
            pbVar15 = pbVar15 + 0x90;
          } while ((uVar14 & 0x7e) != uVar19);
        }
        if (((uVar14 & 1) != 0) && ((*(byte *)(lVar20 + 0x46 + uVar19 * 0x48) & 0x40) != 0)) {
          iVar9 = iVar9 + 1;
          iVar17 = iVar17 + (uint)((*(ushort *)(lVar20 + uVar19 * 0x48 + 0x42) & 0xfffe) == 2);
        }
        if (iVar9 != iVar17) goto LAB_1400b33ec;
      }
      goto LAB_1400b30a8;
    }
LAB_1400b33ec:
    *(undefined4 *)(lVar11 + 0x5c) = 1;
    iVar9 = 1;
    lVar20 = *(longlong *)(lVar11 + 0x78);
    goto joined_r0x0001400b3145;
  case 2:
    if ((*(byte *)(lVar11 + 0x33) & 2) == 0) {
      pcVar21 = "cannot enforce QueryCacheAll, query contains uncacheable terms";
      uVar13 = 0x85;
LAB_1400b311d:
      FUN_140399630(0xfffffffd,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/query/api.c",
                    uVar13,pcVar21);
      goto LAB_1400b32e2;
    }
LAB_1400b3134:
    *(undefined4 *)(lVar11 + 0x5c) = 2;
    iVar9 = 2;
LAB_1400b3140:
    lVar20 = *(longlong *)(lVar11 + 0x78);
joined_r0x0001400b3145:
    if (lVar20 == 0) {
      local_a00 = FUN_1400b86a0(*(undefined8 *)(lVar11 + 0x88));
      *(longlong *)(lVar11 + 0x78) = local_a00;
      iVar9 = *(int *)(lVar11 + 0x5c);
    }
    if (iVar9 == 1) {
      memcpy(local_9d0,local_1380,0x988);
      memset(local_9c8,0,0x908);
      cVar8 = *(char *)(lVar11 + 0x35);
      if (0 < (longlong)cVar8) {
        puVar1 = *(undefined8 **)(lVar11 + 0x10);
        bVar23 = (*(byte *)((longlong)puVar1 + 0x46) & 0x40) != 0;
        if (bVar23) {
          local_988 = puVar1[8];
          local_9c8[0] = *puVar1;
          local_9c8[1] = puVar1[1];
          local_9c8[2] = puVar1[2];
          local_9c8[3] = puVar1[3];
          local_9a8 = puVar1[4];
          uStack_9a0 = puVar1[5];
          local_998 = puVar1[6];
          uStack_990 = puVar1[7];
          local_9f8[0] = *(byte *)((longlong)puVar1 + 0x44);
        }
        uVar14 = (uint)bVar23;
        if (cVar8 != '\x01') {
          lVar20 = (longlong)cVar8 + -1;
          pbVar15 = (byte *)((longlong)puVar1 + 0x8e);
          uVar18 = uVar14;
          do {
            if ((*pbVar15 & 0x40) != 0) {
              lVar22 = (longlong)(int)uVar14;
              local_9c8[lVar22 * 9 + 8] = *(undefined8 *)(pbVar15 + -6);
              uVar13 = *(undefined8 *)(pbVar15 + -0x46);
              uVar2 = *(undefined8 *)(pbVar15 + -0x3e);
              uVar3 = *(undefined8 *)(pbVar15 + -0x36);
              uVar4 = *(undefined8 *)(pbVar15 + -0x2e);
              uVar5 = *(undefined8 *)(pbVar15 + -0x26);
              uVar6 = *(undefined8 *)(pbVar15 + -0x1e);
              uVar7 = *(undefined8 *)(pbVar15 + -0xe);
              local_9c8[lVar22 * 9 + 6] = *(undefined8 *)(pbVar15 + -0x16);
              local_9c8[lVar22 * 9 + 7] = uVar7;
              local_9c8[lVar22 * 9 + 4] = uVar5;
              local_9c8[lVar22 * 9 + 5] = uVar6;
              local_9c8[lVar22 * 9 + 2] = uVar3;
              local_9c8[lVar22 * 9 + 3] = uVar4;
              local_9c8[lVar22 * 9] = uVar13;
              local_9c8[lVar22 * 9 + 1] = uVar2;
              bVar16 = pbVar15[-2];
              local_9f8[(int)uVar18] = bVar16;
              uVar14 = uVar14 + 1;
              uVar18 = uVar18 + (bVar16 != pbVar15[-0x4a]);
            }
            pbVar15 = pbVar15 + 0x48;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        if (uVar14 != 0) {
          lVar20 = order_by_component_s_is_not_queried_for(lVar11,local_9d0);
          if (lVar20 == 0) goto LAB_1400b32e2;
          uVar13 = FUN_140391250(*(longlong *)(lVar11 + 0x98) + 0x1c0,0x20);
          uVar13 = FUN_140391500(uVar13,"int8_t");
          *(undefined8 *)(*(longlong *)(lVar11 + 0x138) + 0x100) = uVar13;
          memcpy(*(void **)(*(longlong *)(lVar11 + 0x138) + 0x100),local_9f8,(longlong)(int)uVar14);
        }
      }
      goto LAB_1400b32ce;
    }
    if (iVar9 != 2) break;
    lVar20 = order_by_component_s_is_not_queried_for(lVar11,local_1380);
    if (lVar20 != 0) goto LAB_1400b32ce;
    goto LAB_1400b32e2;
  case 3:
    *(undefined4 *)(lVar11 + 0x5c) = 3;
    if (((bVar16 & 1) != 0) && ((*(byte *)(lVar11 + 0x33) & 0x20) == 0)) {
      pcVar21 = "cannot create uncached query with group_by/order_by/change detection";
      uVar13 = 0x78;
      goto LAB_1400b311d;
    }
    break;
  default:
    iVar9 = *(int *)(lVar11 + 0x5c);
    if (iVar9 != 3) goto LAB_1400b3140;
  }
  if (((*(byte *)(lVar11 + 0x33) & 0x20) == 0) && (0 < (longlong)*(char *)(lVar11 + 0x35))) {
    lVar20 = 0;
    do {
      if ((*(ulonglong *)(*(longlong *)(lVar11 + 0x10) + 8 + lVar20) & 0x1000000000000000) != 0) {
        uVar13 = FUN_14039c6a0(lVar11);
        local_1398 = uVar13;
        FUN_140399630(0xfffffffd,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/query/api.c"
                      ,0x100,"cascade is unsupported for uncached query\n  %s");
        (*DAT_1415033b0)(uVar13);
        goto LAB_1400b32e2;
      }
      lVar20 = lVar20 + 0x48;
    } while ((longlong)*(char *)(lVar11 + 0x35) * 0x48 != lVar20);
  }
LAB_1400b32ce:
  iVar9 = cant_use_anonymous_variable_s_as_source_of_da(local_1388,lVar10,lVar11);
  if (iVar9 == 0) {
    lVar20 = *(longlong *)(lVar11 + 0x78);
    if (lVar20 != 0) {
      plVar12 = (longlong *)FUN_1403962a0(local_1388,lVar20,0x100);
      *plVar12 = lVar11;
      FUN_140396330(local_1388,lVar20,0x100);
    }
  }
  else {
LAB_1400b32e2:
    *(undefined8 *)(lVar11 + 0x78) = 0;
    FUN_1400b2bf0(lVar11);
    lVar11 = 0;
  }
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_13b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_13b8);
  }
  return lVar11;
}

