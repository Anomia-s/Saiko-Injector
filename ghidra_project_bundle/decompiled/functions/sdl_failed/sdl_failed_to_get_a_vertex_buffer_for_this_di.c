/**
 * Function: sdl_failed_to_get_a_vertex_buffer_for_this_di
 * Address:  140424770
 * Signature: undefined sdl_failed_to_get_a_vertex_buffer_for_this_di(void)
 * Body size: 1773 bytes
 */


char sdl_failed_to_get_a_vertex_buffer_for_this_di
               (longlong param_1,undefined4 *param_2,void *param_3,ulonglong param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_138 [32];
  uint local_118;
  longlong **local_110;
  ulonglong local_108;
  char local_f9;
  void *local_f8;
  undefined4 *local_f0;
  int *local_e8;
  int *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  longlong *local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_1414ef3c0 ^ (ulonglong)auStack_138;
  lVar8 = *(longlong *)(param_1 + 0x2c0);
  lVar19 = (longlong)*(int *)(lVar8 + 0x128);
  local_a8 = (longlong *)0x0;
  local_d0 = *(longlong *)(param_1 + 0x1e0);
  local_f8 = param_3;
  local_d8 = param_1;
  local_f9 = FUN_140425b40();
  if (local_f9 == '\0') goto LAB_140424e35;
  if (param_4 == 0) {
LAB_140424927:
    plVar17 = (longlong *)0x0;
  }
  else {
    local_a8 = *(longlong **)(lVar8 + 0xa8 + lVar19 * 8);
    if (*(ulonglong *)(lVar8 + 0xe8 + lVar19 * 8) < param_4) {
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))();
      }
      local_110 = &local_a8;
      local_108 = 0;
      local_118 = 0;
      iVar12 = (**(code **)(**(longlong **)(lVar8 + 0x10) + 0xd0))
                         (*(longlong **)(lVar8 + 0x10),param_4 & 0xffffffff,0x208,0x142);
      if (iVar12 < 0) {
        local_a8 = (longlong *)0x0;
      }
      *(longlong **)(lVar8 + 0xa8 + lVar19 * 8) = local_a8;
      uVar21 = param_4;
      if (local_a8 == (longlong *)0x0) {
        uVar21 = 0;
      }
      *(ulonglong *)(lVar8 + 0xe8 + lVar19 * 8) = uVar21;
    }
    if (local_a8 == (longlong *)0x0) {
LAB_14042491d:
      if (*(char *)(lVar8 + 300) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_1400fb950(6,"SDL failed to get a vertex buffer for this Direct3D 9 rendering batch!");
      }
      goto LAB_140424927;
    }
    local_118 = 0x2000;
    iVar12 = (**(code **)(*local_a8 + 0x58))(local_a8,0,param_4 & 0xffffffff,&local_c8);
    if (iVar12 < 0) {
LAB_140424911:
      local_a8 = (longlong *)0x0;
      goto LAB_14042491d;
    }
    memcpy((void *)CONCAT44(uStack_c4,local_c8),local_f8,param_4);
    iVar12 = (**(code **)(*local_a8 + 0x60))();
    if (iVar12 < 0) goto LAB_140424911;
    if (local_a8 == (longlong *)0x0) goto LAB_14042491d;
    uVar13 = *(int *)(lVar8 + 0x128) + 1;
    uVar15 = 0;
    if (uVar13 < 8) {
      uVar15 = uVar13;
    }
    *(uint *)(lVar8 + 0x128) = uVar15;
    plVar17 = local_a8;
  }
  local_118 = 0x18;
  (**(code **)(**(longlong **)(lVar8 + 0x10) + 800))(*(longlong **)(lVar8 + 0x10),0,plVar17,0);
  if (param_2 != (undefined4 *)0x0) {
    piVar1 = (int *)(lVar8 + 0x130);
    local_e0 = (int *)(lVar8 + 0x20);
    local_e8 = (int *)(lVar8 + 0x24);
    local_f0 = (undefined4 *)(lVar8 + 0x158);
    do {
      switch(*param_2) {
      case 1:
        iVar12 = FUN_1400fc560(piVar1);
        if (iVar12 != 0) {
          uVar9 = param_2[5];
          uVar10 = param_2[6];
          uVar11 = param_2[7];
          *piVar1 = param_2[4];
          *(undefined4 *)(lVar8 + 0x134) = uVar9;
          *(undefined4 *)(lVar8 + 0x138) = uVar10;
          *(undefined4 *)(lVar8 + 0x13c) = uVar11;
          *(undefined1 *)(lVar8 + 0x140) = 1;
          *(undefined1 *)(lVar8 + 0x168) = 1;
        }
        break;
      case 2:
        if (*(char *)(lVar8 + 0x154) != *(char *)(param_2 + 2)) {
          *(char *)(lVar8 + 0x154) = *(char *)(param_2 + 2);
          *(undefined1 *)(lVar8 + 0x155) = 1;
        }
        iVar12 = FUN_1400fc560(local_f0);
        if (iVar12 != 0) {
          uVar9 = param_2[4];
          uVar10 = param_2[5];
          uVar11 = param_2[6];
          *local_f0 = param_2[3];
          local_f0[1] = uVar9;
          local_f0[2] = uVar10;
          local_f0[3] = uVar11;
          *(undefined1 *)(lVar8 + 0x168) = 1;
        }
        break;
      case 4:
        piVar14 = local_e8;
        piVar16 = local_e0;
        if (local_d0 != 0) {
          piVar16 = (int *)(*(longlong *)(local_d8 + 0x1e0) + 4);
          piVar14 = (int *)(*(longlong *)(local_d8 + 0x1e0) + 8);
        }
        iVar12 = *piVar16;
        iVar7 = *piVar14;
        if (((*piVar1 == 0) && (*(int *)(lVar8 + 0x134) == 0)) &&
           (*(int *)(lVar8 + 0x138) == iVar12)) {
          bVar23 = *(int *)(lVar8 + 0x13c) == iVar7;
        }
        else {
          bVar23 = false;
        }
        fVar2 = (float)param_2[8];
        fVar3 = (float)param_2[4];
        fVar4 = (float)param_2[5];
        fVar5 = (float)param_2[6];
        fVar6 = (float)param_2[7];
        if ((*(char *)(lVar8 + 0x154) != '\0') || (*(char *)(lVar8 + 0x155) == '\x01')) {
          (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x1c8))(*(longlong **)(lVar8 + 0x10),0xae,0);
          *(undefined1 *)(lVar8 + 0x155) = *(undefined1 *)(lVar8 + 0x154);
        }
        if (((*(byte *)(lVar8 + 0x140) ^ 1) & bVar23) != 1) {
          local_c8 = 0;
          uStack_c4 = 0;
          local_b8 = 0x3f80000000000000;
          iStack_c0 = iVar12;
          iStack_bc = iVar7;
          (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x178))
                    (*(longlong **)(lVar8 + 0x10),&local_c8);
          *(undefined1 *)(lVar8 + 0x140) = 1;
        }
        local_108 = local_108 & 0xffffffff00000000;
        local_110 = (longlong **)((ulonglong)local_110 & 0xffffffff00000000);
        local_118 = (uint)(longlong)(fVar3 * fVar6 * 255.0) & 0xff |
                    ((uint)(longlong)(fVar5 * fVar3 * 255.0) & 0xff) << 8 |
                    ((uint)(longlong)(fVar4 * fVar3 * 255.0) & 0xff) << 0x10 |
                    (int)(longlong)(fVar2 * 255.0) << 0x18;
        (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x158))(*(longlong **)(lVar8 + 0x10),0,0,1);
        break;
      case 5:
        uVar22 = *(ulonglong *)(param_2 + 2);
        uVar21 = *(ulonglong *)(param_2 + 4);
        texture_is_not_currently_available(lVar8,param_2);
        if (local_a8 == (longlong *)0x0) {
          pfVar20 = (float *)(uVar22 + (longlong)local_f8);
          plVar17 = *(longlong **)(lVar8 + 0x10);
          lVar19 = *plVar17;
          uVar18 = 1;
          uVar21 = uVar21 & 0xffffffff;
LAB_140424e2a:
          local_118 = 0x18;
          (**(code **)(lVar19 + 0x298))(plVar17,uVar18,uVar21,pfVar20);
        }
        else {
          (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x288))
                    (*(longlong **)(lVar8 + 0x10),1,uVar22 / 0x18,uVar21 & 0xffffffff);
        }
        break;
      case 6:
        uVar21 = *(ulonglong *)(param_2 + 2);
        lVar19 = *(longlong *)(param_2 + 4);
        pfVar20 = (float *)((longlong)local_f8 + uVar21);
        bVar23 = true;
        if (lVar19 != 2) {
          if ((*pfVar20 == pfVar20[lVar19 * 6 + -6]) &&
             (!NAN(*pfVar20) && !NAN(pfVar20[lVar19 * 6 + -6]))) {
            bVar23 = pfVar20[lVar19 * 6 + -5] != pfVar20[1];
          }
        }
        texture_is_not_currently_available(lVar8,param_2);
        uVar22 = lVar19 - 1;
        plVar17 = *(longlong **)(lVar8 + 0x10);
        if (local_a8 == (longlong *)0x0) {
          local_118 = 0x18;
          (**(code **)(*plVar17 + 0x298))(plVar17,3,uVar22 & 0xffffffff,pfVar20);
          if (bVar23) {
            plVar17 = *(longlong **)(lVar8 + 0x10);
            lVar19 = *plVar17;
            pfVar20 = pfVar20 + uVar22 * 6;
            uVar18 = 1;
            uVar21 = 1;
            goto LAB_140424e2a;
          }
        }
        else {
          uVar21 = uVar21 / 0x18;
          (**(code **)(*plVar17 + 0x288))(plVar17,3,uVar21 & 0xffffffff,uVar22 & 0xffffffff);
          if (bVar23) {
            (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x288))
                      (*(longlong **)(lVar8 + 0x10),1,(int)uVar21 + (int)uVar22,1);
          }
        }
        break;
      case 10:
        uVar21 = *(ulonglong *)(param_2 + 2);
        uVar22 = *(ulonglong *)(param_2 + 4);
        texture_is_not_currently_available(lVar8,param_2);
        if (local_a8 == (longlong *)0x0) {
          pfVar20 = (float *)(uVar21 + (longlong)local_f8);
          plVar17 = *(longlong **)(lVar8 + 0x10);
          lVar19 = *plVar17;
          uVar21 = (uVar22 & 0xffffffff) / 3;
          uVar18 = 4;
          goto LAB_140424e2a;
        }
        (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x288))
                  (*(longlong **)(lVar8 + 0x10),4,uVar21 / 0x18,(uVar22 & 0xffffffff) / 3);
      }
      param_2 = *(undefined4 **)(param_2 + 0x10);
    } while (param_2 != (undefined4 *)0x0);
  }
LAB_140424e35:
  if (DAT_1414ef3c0 == (local_a0 ^ (ulonglong)auStack_138)) {
    return local_f9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_a0 ^ (ulonglong)auStack_138);
}

