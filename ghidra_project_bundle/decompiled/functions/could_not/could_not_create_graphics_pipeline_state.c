/**
 * Function: could_not_create_graphics_pipeline_state
 * Address:  1403f6fa0
 * Signature: undefined could_not_create_graphics_pipeline_state(void)
 * Body size: 4368 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * could_not_create_graphics_pipeline_state(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  char *pcVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  int *piVar26;
  int iVar27;
  ulonglong uVar28;
  undefined1 auStack_1498 [32];
  undefined *local_1478;
  longlong *local_1470;
  longlong local_1460;
  undefined8 *local_1458;
  undefined8 *local_1450;
  longlong local_1448;
  longlong *local_1440;
  longlong *local_1438;
  uint local_1430 [2];
  longlong *local_1428;
  undefined4 local_1420;
  undefined8 local_1418;
  undefined4 local_1410;
  undefined8 local_1408;
  uint auStack_1400 [254];
  longlong local_1008;
  undefined8 local_1000;
  undefined8 local_ff8;
  undefined8 local_ff0;
  undefined8 local_fe8;
  undefined1 local_f90 [4];
  undefined4 local_f8c;
  uint local_f88;
  undefined4 local_f84;
  undefined4 local_f80;
  undefined4 local_f7c;
  undefined4 local_f78;
  undefined4 local_f74;
  undefined4 local_f70;
  undefined4 local_f6c;
  undefined4 local_f68;
  undefined1 local_f64;
  uint local_f60;
  undefined4 local_f5c;
  undefined4 local_f58;
  undefined4 local_f54;
  undefined4 local_f50;
  undefined4 local_f4c;
  undefined4 local_f48;
  undefined4 local_f44;
  undefined4 local_f40;
  undefined1 local_f3c;
  uint local_f38;
  undefined4 local_f34;
  undefined4 local_f30;
  undefined4 local_f2c;
  undefined4 local_f28;
  undefined4 local_f24;
  undefined4 local_f20;
  undefined4 local_f1c;
  undefined4 local_f18;
  undefined1 local_f14;
  uint local_f10;
  undefined4 local_f0c;
  undefined4 local_f08;
  undefined4 local_f04;
  undefined4 local_f00;
  undefined4 local_efc;
  undefined4 local_ef8;
  undefined4 local_ef4;
  undefined4 local_ef0;
  undefined1 local_eec;
  undefined4 local_e48;
  undefined4 local_e44;
  undefined4 local_e40;
  undefined4 local_e3c;
  undefined4 local_e38;
  undefined8 local_e34;
  uint local_e2c;
  undefined8 local_e28;
  undefined8 uStack_e20;
  ulonglong local_e18;
  undefined4 local_e10;
  uint local_e0c;
  undefined2 local_e08;
  undefined4 local_e04;
  undefined4 local_e00;
  undefined4 local_dfc;
  undefined4 local_df8;
  undefined4 local_df4;
  undefined4 local_df0;
  undefined4 local_dec;
  undefined4 local_de8;
  undefined8 *local_de0;
  uint local_dd8;
  undefined4 local_dcc;
  uint local_dc8;
  undefined4 auStack_dc4 [8];
  undefined4 local_da4;
  undefined4 local_da0;
  int local_d9c;
  undefined4 local_d98;
  undefined1 local_d90 [16];
  undefined4 local_d80;
  int local_d78 [2];
  undefined1 local_d70 [4];
  undefined8 uStack_d6c;
  int local_d64;
  undefined4 local_d60;
  undefined8 local_d5c;
  undefined4 local_d54;
  longlong local_878;
  undefined8 local_870;
  int *local_868 [255];
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x1403f6fb6;
  local_70 = DAT_1414ef3c0 ^ (ulonglong)auStack_1498;
  puVar5 = (undefined8 *)*param_2;
  puVar6 = (undefined8 *)param_2[1];
  if (*(char *)(param_1 + 0x78) == '\x01') {
    if (*(int *)(puVar5 + 2) != 0) {
      do {
        iVar9 = FUN_14015bb20(&DAT_141503610,"D3D12_CreateGraphicsPipeline",
                              "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/gpu/d3d12/SDL_gpu_d3d12.c"
                             );
      } while (iVar9 == 0);
      if (iVar9 == 1) {
        pcVar7 = (code *)swi(3);
        plVar11 = (longlong *)(*pcVar7)();
        return plVar11;
      }
    }
    if (*(int *)(puVar6 + 2) != 1) {
      do {
        iVar9 = FUN_14015bb20(&DAT_141503640,"D3D12_CreateGraphicsPipeline",
                              "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/gpu/d3d12/SDL_gpu_d3d12.c"
                             );
      } while (iVar9 == 0);
      if (iVar9 == 1) {
        pcVar7 = (code *)swi(3);
        plVar11 = (longlong *)(*pcVar7)();
        return plVar11;
      }
    }
  }
  memset(&local_1008,0,0x290);
  local_1000 = *puVar5;
  local_ff8 = puVar5[1];
  local_ff0 = *puVar6;
  local_fe8 = puVar6[1];
  uVar24 = *(uint *)(param_2 + 5);
  if ((ulonglong)uVar24 != 0) {
    local_de0 = &local_1408;
    uVar14 = *(undefined8 *)(param_1 + 0x60);
    lVar17 = param_2[2];
    lVar16 = param_2[4];
    lVar25 = 0;
    local_dd8 = uVar24;
    do {
      uVar10 = *(undefined4 *)(lVar16 + lVar25);
      uVar22 = *(uint *)(lVar16 + 4 + lVar25);
      iVar9 = *(int *)(lVar16 + 8 + lVar25);
      uVar2 = *(undefined4 *)(lVar16 + 0xc + lVar25);
      *(undefined8 *)((longlong)&local_1408 + lVar25 * 2) = uVar14;
      *(undefined4 *)((longlong)auStack_1400 + lVar25 * 2) = uVar10;
      *(undefined4 *)((longlong)auStack_1400 + lVar25 * 2 + 4) =
           *(undefined4 *)(&DAT_140e14870 + (longlong)iVar9 * 4);
      *(uint *)((longlong)auStack_1400 + lVar25 * 2 + 8) = uVar22;
      *(undefined4 *)((longlong)auStack_1400 + lVar25 * 2 + 0xc) = uVar2;
      lVar23 = (ulonglong)uVar22 * 0x10;
      *(undefined4 *)((longlong)auStack_1400 + lVar25 * 2 + 0x10) =
           *(undefined4 *)(&DAT_140e148ec + (longlong)*(int *)(lVar17 + 8 + lVar23) * 4);
      uVar10 = 0;
      if (*(int *)(lVar17 + 8 + lVar23) == 1) {
        uVar10 = *(undefined4 *)(lVar23 + lVar17 + 0xc);
      }
      *(undefined4 *)((longlong)auStack_1400 + lVar25 * 2 + 0x14) = uVar10;
      lVar25 = lVar25 + 0x10;
    } while ((ulonglong)uVar24 << 4 != lVar25);
  }
  local_dcc = *(undefined4 *)(&DAT_140e14840 + (longlong)(int)param_2[6] * 4);
  uVar14 = *(undefined8 *)((longlong)param_2 + 0x44);
  bVar1 = *(byte *)((longlong)param_2 + 0x4d);
  local_e44 = *(undefined4 *)(&DAT_140e148f4 + (longlong)*(int *)((longlong)param_2 + 0x34) * 4);
  local_e40 = *(undefined4 *)(&DAT_140e14d24 + (longlong)(int)param_2[7] * 4);
  uVar10 = 0;
  local_1450 = puVar5;
  if (*(int *)((longlong)param_2 + 0x3c) == 0) {
    local_e3c = 1;
  }
  else {
    plVar11 = (longlong *)0x0;
    if (*(int *)((longlong)param_2 + 0x3c) != 1) goto LAB_1403f8020;
    local_e3c = 0;
  }
  local_e34 = 0;
  local_1460 = param_1;
  local_1458 = puVar6;
  if ((*(byte *)((longlong)param_2 + 0x4c) & 1) != 0) {
    uVar10 = lroundf();
    local_e34 = uVar14;
  }
  local_e2c = (uint)bVar1;
  local_e28 = 0;
  uStack_e20 = 0;
  uVar22 = 0;
  local_e38 = uVar10;
  memset(local_f90,0,0x148);
  uVar24 = *(uint *)(param_2 + 0x12);
  local_f54 = 1;
  local_f58 = 2;
  local_f88 = 0;
  local_f80 = 2;
  local_f7c = 1;
  local_f78 = 1;
  local_f74 = 2;
  local_f70 = 1;
  local_f6c = 1;
  local_f64 = 0xf;
  if (uVar24 != 0) {
    lVar17 = param_2[0x11];
    local_f64 = 0xf;
    if ((*(byte *)(lVar17 + 0x1e) & 1) != 0) {
      local_f64 = (undefined1)*(undefined4 *)(lVar17 + 0x1c);
    }
    local_f88 = *(byte *)(lVar17 + 0x1d) & 1;
    local_f80 = *(undefined4 *)(&DAT_140e14900 + (longlong)*(int *)(lVar17 + 4) * 4);
    local_f7c = *(undefined4 *)(&DAT_140e14900 + (longlong)*(int *)(lVar17 + 8) * 4);
    local_f78 = *(undefined4 *)(&DAT_140e14940 + (longlong)*(int *)(lVar17 + 0xc) * 4);
    local_f74 = *(undefined4 *)(&DAT_140e14960 + (longlong)*(int *)(lVar17 + 0x10) * 4);
    local_f70 = *(undefined4 *)(&DAT_140e14960 + (longlong)*(int *)(lVar17 + 0x14) * 4);
    local_f6c = *(undefined4 *)(&DAT_140e14940 + (longlong)*(int *)(lVar17 + 0x18) * 4);
  }
  local_f3c = 0xf;
  local_f84 = 0;
  local_f68 = 4;
  local_f50 = 1;
  local_f4c = 2;
  local_f48 = 1;
  local_f44 = 1;
  if (1 < uVar24) {
    lVar17 = param_2[0x11];
    local_f3c = 0xf;
    if ((*(byte *)(lVar17 + 0x42) & 1) != 0) {
      local_f3c = (undefined1)*(undefined4 *)(lVar17 + 0x40);
    }
    local_f44 = *(undefined4 *)(&DAT_140e14940 + (longlong)*(int *)(lVar17 + 0x3c) * 4);
    local_f48 = *(undefined4 *)(&DAT_140e14960 + (longlong)*(int *)(lVar17 + 0x38) * 4);
    local_f4c = *(undefined4 *)(&DAT_140e14960 + (longlong)*(int *)(lVar17 + 0x34) * 4);
    local_f50 = *(undefined4 *)(&DAT_140e14940 + (longlong)*(int *)(lVar17 + 0x30) * 4);
    local_f54 = *(undefined4 *)(&DAT_140e14900 + (longlong)*(int *)(lVar17 + 0x2c) * 4);
    local_f58 = *(undefined4 *)(&DAT_140e14900 + (longlong)*(int *)(lVar17 + 0x28) * 4);
    uVar22 = *(byte *)(lVar17 + 0x41) & 1;
    local_f8c = 1;
  }
  local_f5c = 0;
  local_f40 = 4;
  local_f04 = 1;
  local_f08 = 2;
  local_f10 = 0;
  local_f38 = 0;
  local_f30 = 2;
  local_f2c = 1;
  local_f28 = 1;
  local_f24 = 2;
  local_f20 = 1;
  local_f1c = 1;
  local_f14 = 0xf;
  if (2 < uVar24) {
    lVar17 = param_2[0x11];
    local_f14 = 0xf;
    if ((*(byte *)(lVar17 + 0x66) & 1) != 0) {
      local_f14 = (undefined1)*(undefined4 *)(lVar17 + 100);
    }
    local_f1c = *(undefined4 *)(&DAT_140e14940 + (longlong)*(int *)(lVar17 + 0x60) * 4);
    local_f20 = *(undefined4 *)(&DAT_140e14960 + (longlong)*(int *)(lVar17 + 0x5c) * 4);
    local_f24 = *(undefined4 *)(&DAT_140e14960 + (longlong)*(int *)(lVar17 + 0x58) * 4);
    local_f28 = *(undefined4 *)(&DAT_140e14940 + (longlong)*(int *)(lVar17 + 0x54) * 4);
    local_f2c = *(undefined4 *)(&DAT_140e14900 + (longlong)*(int *)(lVar17 + 0x50) * 4);
    local_f30 = *(undefined4 *)(&DAT_140e14900 + (longlong)*(int *)(lVar17 + 0x4c) * 4);
    local_f38 = *(byte *)(lVar17 + 0x65) & 1;
    local_f8c = 1;
  }
  local_eec = 0xf;
  local_f34 = 0;
  local_f18 = 4;
  local_f00 = 1;
  local_efc = 2;
  local_ef8 = 1;
  local_ef4 = 1;
  if (3 < uVar24) {
    lVar17 = param_2[0x11];
    local_eec = 0xf;
    if ((*(byte *)(lVar17 + 0x8a) & 1) != 0) {
      local_eec = (undefined1)*(undefined4 *)(lVar17 + 0x88);
    }
    local_ef4 = *(undefined4 *)(&DAT_140e14940 + (longlong)*(int *)(lVar17 + 0x84) * 4);
    local_ef8 = *(undefined4 *)(&DAT_140e14960 + (longlong)*(int *)(lVar17 + 0x80) * 4);
    local_efc = *(undefined4 *)(&DAT_140e14960 + (longlong)*(int *)(lVar17 + 0x7c) * 4);
    local_f00 = *(undefined4 *)(&DAT_140e14940 + (longlong)*(int *)(lVar17 + 0x78) * 4);
    local_f04 = *(undefined4 *)(&DAT_140e14900 + (longlong)*(int *)(lVar17 + 0x74) * 4);
    local_f08 = *(undefined4 *)(&DAT_140e14900 + (longlong)*(int *)(lVar17 + 0x70) * 4);
    local_f10 = *(byte *)(lVar17 + 0x89) & 1;
    local_f8c = 1;
  }
  local_f0c = 0;
  local_ef0 = 4;
  local_e08 = (undefined2)param_2[0x10];
  local_e18 = (ulonglong)
              CONCAT14((char)(*(ushort *)((longlong)param_2 + 0x82) >> 8),
                       (uint)(*(ushort *)((longlong)param_2 + 0x82) & 0xff));
  local_e10 = *(undefined4 *)(&DAT_140e149a0 + (longlong)*(int *)((longlong)param_2 + 0x5c) * 4);
  local_e0c = (uint)*(byte *)((longlong)param_2 + 0x84);
  local_e04 = *(undefined4 *)(&DAT_140e149a0 + (longlong)(int)param_2[0xe] * 4);
  local_e00 = *(undefined4 *)(&DAT_140e149a0 + (longlong)(int)param_2[0xf] * 4);
  local_dfc = *(undefined4 *)(&DAT_140e149a0 + (longlong)*(int *)((longlong)param_2 + 0x74) * 4);
  local_df8 = *(undefined4 *)(&DAT_140e149a0 + (longlong)*(int *)((longlong)param_2 + 0x7c) * 4);
  local_df4 = *(undefined4 *)(&DAT_140e149a0 + (longlong)(int)param_2[0xc] * 4);
  local_df0 = *(undefined4 *)(&DAT_140e149a0 + (longlong)(int)param_2[0xd] * 4);
  local_dec = *(undefined4 *)(&DAT_140e149a0 + (longlong)*(int *)((longlong)param_2 + 100) * 4);
  local_de8 = *(undefined4 *)(&DAT_140e149a0 + (longlong)*(int *)((longlong)param_2 + 0x6c) * 4);
  local_f60 = uVar22;
  plVar12 = (longlong *)FUN_140160c70(1,0x78);
  puVar6 = local_1450;
  puVar5 = local_1458;
  if (plVar12 != (longlong *)0x0) {
    local_e48 = 0xffffffff;
    if ((char)param_2[0xb] == '\x01') {
      local_e48 = *(undefined4 *)((longlong)param_2 + 0x54);
    }
    local_da0 = *(undefined4 *)(&DAT_140e14860 + (longlong)(int)param_2[10] * 4);
    local_d9c = -(uint)(0 < (longlong)(int)param_2[10]);
    local_da4 = *(undefined4 *)(&DAT_140e149d0 + (longlong)*(int *)((longlong)param_2 + 0x94) * 4);
    local_dc8 = *(uint *)(param_2 + 0x12);
    if (local_dc8 != 0) {
      piVar13 = (int *)param_2[0x11];
      if (local_dc8 == 1) {
        uVar28 = 0;
      }
      else {
        uVar28 = 0;
        piVar26 = piVar13;
        do {
          auStack_dc4[uVar28] = *(undefined4 *)(&DAT_140e14b80 + (longlong)*piVar26 * 4);
          auStack_dc4[uVar28 + 1] = *(undefined4 *)(&DAT_140e14b80 + (longlong)piVar26[9] * 4);
          uVar28 = uVar28 + 2;
          piVar26 = piVar26 + 0x12;
        } while ((local_dc8 & 0xfffffffe) != uVar28);
      }
      if ((local_dc8 & 1) != 0) {
        auStack_dc4[uVar28] = *(undefined4 *)(&DAT_140e14b80 + (longlong)piVar13[uVar28 * 9] * 4);
      }
    }
    local_d98 = 0;
    local_d90 = (undefined1  [16])0x0;
    local_d80 = 0;
    plVar11 = (longlong *)FUN_140160c70(1);
    if (plVar11 != (longlong *)0x0) {
      uVar28 = 0;
      memset(&local_878,0,0x800);
      memset(local_d78,0,0x500);
      lVar17 = local_1460;
      *(undefined4 *)(plVar11 + 1) = 0xffffffff;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 0xffffffff;
      *(undefined4 *)(plVar11 + 2) = 0xffffffff;
      *(undefined4 *)((longlong)plVar11 + 0x14) = 0xffffffff;
      *(undefined4 *)(plVar11 + 3) = 0xffffffff;
      *(undefined4 *)((longlong)plVar11 + 0x1c) = 0xffffffff;
      *(undefined4 *)(plVar11 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)plVar11 + 0x24) = 0xffffffff;
      *(undefined4 *)(plVar11 + 5) = 0xffffffff;
      *(undefined4 *)((longlong)plVar11 + 0x2c) = 0xffffffff;
      *(undefined4 *)(plVar11 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)plVar11 + 0x34) = 0xffffffff;
      *(undefined4 *)(plVar11 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)plVar11 + 0x3c) = 0xffffffff;
      *(undefined4 *)(plVar11 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)plVar11 + 0x44) = 0xffffffff;
      iVar9 = *(int *)((longlong)puVar6 + 0x14);
      if (iVar9 == 0) {
        piVar13 = (int *)0x0;
      }
      else {
        local_d78[0] = 3;
        _local_d70 = 0;
        uStack_d6c._4_4_ = 0xffffffff;
        local_870 = 1;
        local_868[1] = (int *)0x1;
        *(undefined4 *)(plVar11 + 1) = 0;
        local_d60 = *(undefined4 *)((longlong)puVar6 + 0x14);
        piVar13 = &local_d64;
        local_d64 = 0;
        local_d5c = 0;
        local_d54 = 0xffffffff;
        local_868[2] = (int *)0x0;
        local_868[3] = (int *)0x1;
        local_868[5] = (int *)0x1;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        uVar28 = 2;
        local_d78[1] = iVar9;
        local_868[0] = local_d78;
        local_868[4] = piVar13;
      }
      iVar9 = *(int *)(puVar6 + 4);
      if (iVar9 != 0) {
        uVar10 = *(undefined4 *)((longlong)puVar6 + 0x14);
        uVar24 = (uint)uVar28;
        piVar13 = local_d78 + uVar28 * 5;
        local_d78[uVar28 * 5] = 0;
        *(int *)(local_d70 + uVar28 * 0x14 + -4) = iVar9;
        *(undefined4 *)(local_d70 + uVar28 * 0x14) = uVar10;
        *(undefined8 *)(local_d70 + uVar28 * 0x14 + 4) = 0xffffffff00000000;
        uVar28 = (ulonglong)(uVar24 << 5);
        *(undefined8 *)((longlong)&local_878 + uVar28) = 0;
        *(undefined8 *)((longlong)&local_870 + uVar28) = 1;
        *(int **)((longlong)local_868 + uVar28) = piVar13;
        *(undefined8 *)((longlong)local_868 + uVar28 + 8) = 1;
        *(uint *)(plVar11 + 2) = uVar24;
        uVar28 = (ulonglong)(uVar24 | 1);
      }
      iVar9 = *(int *)((longlong)puVar6 + 0x1c);
      if (iVar9 != 0) {
        iVar3 = *(int *)(puVar6 + 4);
        iVar4 = *(int *)((longlong)puVar6 + 0x14);
        iVar27 = (int)uVar28;
        piVar13 = local_d78 + uVar28 * 5;
        local_d78[uVar28 * 5] = 0;
        *(int *)(local_d70 + uVar28 * 0x14 + -4) = iVar9;
        *(int *)(local_d70 + uVar28 * 0x14) = iVar3 + iVar4;
        *(undefined8 *)(local_d70 + uVar28 * 0x14 + 4) = 0xffffffff00000000;
        uVar28 = (ulonglong)(uint)(iVar27 << 5);
        *(undefined8 *)((longlong)&local_878 + uVar28) = 0;
        *(undefined8 *)((longlong)&local_870 + uVar28) = 1;
        *(int **)((longlong)local_868 + uVar28) = piVar13;
        *(undefined8 *)((longlong)local_868 + uVar28 + 8) = 1;
        *(int *)((longlong)plVar11 + 0x14) = iVar27;
        uVar28 = (ulonglong)(iVar27 + 1);
      }
      uVar24 = (uint)uVar28;
      if (*(int *)(puVar6 + 3) == 0) {
        uVar10 = 0;
        iVar9 = *(int *)((longlong)puVar5 + 0x14);
        local_1430[0] = uVar24;
      }
      else {
        uVar19 = 0;
        do {
          uVar22 = uVar24 + (int)uVar19;
          uVar21 = (ulonglong)uVar22;
          (&local_878)[uVar21 * 4] = 2;
          *(int *)(&local_870 + uVar21 * 4) = (int)uVar19;
          *(undefined4 *)((longlong)&local_870 + uVar21 * 0x20 + 4) = 1;
          local_868[uVar21 * 4] = piVar13;
          local_868[uVar21 * 4 + 1] = (int *)0x1;
          *(uint *)((longlong)plVar11 + uVar19 * 4 + 0x18) = uVar22;
          uVar19 = uVar19 + 1;
        } while (uVar19 < *(uint *)(puVar6 + 3));
        local_1430[0] = (int)uVar19 + uVar24;
        uVar10 = 1;
        iVar9 = *(int *)((longlong)puVar5 + 0x14);
      }
      if (iVar9 != 0) {
        local_d78[uVar28 * 5] = 3;
        *(int *)(local_d70 + uVar28 * 0x14 + -4) = iVar9;
        *(undefined8 *)(local_d70 + uVar28 * 0x14) = 0x200000000;
        *(undefined4 *)((longlong)&uStack_d6c + uVar28 * 0x14 + 4) = 0xffffffff;
        uVar19 = (ulonglong)local_1430[0];
        (&local_878)[uVar19 * 4] = 0;
        *(undefined4 *)(&local_870 + uVar19 * 4) = 1;
        *(undefined4 *)((longlong)&local_870 + uVar19 * 0x20 + 4) = uVar10;
        local_868[uVar19 * 4] = local_d78 + uVar28 * 5;
        local_868[uVar19 * 4 + 1] = (int *)0x5;
        *(uint *)(plVar11 + 5) = local_1430[0];
        uVar28 = (ulonglong)(uVar24 + 1);
        uVar19 = (ulonglong)(local_1430[0] + 1);
        uVar2 = *(undefined4 *)((longlong)puVar5 + 0x14);
        piVar13 = local_d78 + uVar28 * 5;
        local_d78[uVar28 * 5] = 0;
        *(undefined4 *)(local_d70 + uVar28 * 0x14 + -4) = uVar2;
        *(undefined8 *)(local_d70 + uVar28 * 0x14) = 0x200000000;
        *(undefined4 *)((longlong)&uStack_d6c + uVar28 * 0x14 + 4) = 0xffffffff;
        (&local_878)[uVar19 * 4] = 0;
        *(undefined4 *)(&local_870 + uVar19 * 4) = 1;
        *(undefined4 *)((longlong)&local_870 + uVar19 * 0x20 + 4) = uVar10;
        local_868[uVar19 * 4] = piVar13;
        local_868[uVar19 * 4 + 1] = (int *)0x5;
        *(uint *)((longlong)plVar11 + 0x2c) = local_1430[0] + 1;
        uVar28 = (ulonglong)(uVar24 + 2);
        local_1430[0] = local_1430[0] + 2;
      }
      iVar9 = *(int *)(puVar5 + 4);
      if (iVar9 != 0) {
        uVar2 = *(undefined4 *)((longlong)puVar5 + 0x14);
        piVar13 = local_d78 + uVar28 * 5;
        local_d78[uVar28 * 5] = 0;
        *(int *)(local_d70 + uVar28 * 0x14 + -4) = iVar9;
        *(undefined4 *)(local_d70 + uVar28 * 0x14) = uVar2;
        *(undefined8 *)(local_d70 + uVar28 * 0x14 + 4) = 0xffffffff00000002;
        uVar19 = (ulonglong)local_1430[0];
        (&local_878)[uVar19 * 4] = 0;
        *(undefined4 *)(&local_870 + uVar19 * 4) = 1;
        *(undefined4 *)((longlong)&local_870 + uVar19 * 0x20 + 4) = uVar10;
        local_868[uVar19 * 4] = piVar13;
        local_868[uVar19 * 4 + 1] = (int *)0x5;
        *(uint *)(plVar11 + 6) = local_1430[0];
        uVar28 = (ulonglong)((int)uVar28 + 1);
        local_1430[0] = local_1430[0] + 1;
      }
      iVar9 = *(int *)((longlong)puVar5 + 0x1c);
      if (iVar9 != 0) {
        iVar3 = *(int *)(puVar5 + 4);
        iVar4 = *(int *)((longlong)puVar5 + 0x14);
        piVar13 = local_d78 + uVar28 * 5;
        local_d78[uVar28 * 5] = 0;
        *(int *)(local_d70 + uVar28 * 0x14 + -4) = iVar9;
        *(int *)(local_d70 + uVar28 * 0x14) = iVar3 + iVar4;
        *(undefined8 *)(local_d70 + uVar28 * 0x14 + 4) = 0xffffffff00000002;
        uVar28 = (ulonglong)local_1430[0];
        (&local_878)[uVar28 * 4] = 0;
        *(undefined4 *)(&local_870 + uVar28 * 4) = 1;
        *(undefined4 *)((longlong)&local_870 + uVar28 * 0x20 + 4) = uVar10;
        local_868[uVar28 * 4] = piVar13;
        local_868[uVar28 * 4 + 1] = (int *)0x5;
        *(uint *)((longlong)plVar11 + 0x34) = local_1430[0];
        local_1430[0] = local_1430[0] + 1;
      }
      if (*(int *)(puVar5 + 3) != 0) {
        uVar28 = 0;
        do {
          uVar24 = local_1430[0] + (int)uVar28;
          uVar19 = (ulonglong)uVar24;
          (&local_878)[uVar19 * 4] = 2;
          *(int *)(&local_870 + uVar19 * 4) = (int)uVar28;
          *(undefined4 *)((longlong)&local_870 + uVar19 * 0x20 + 4) = 3;
          local_868[uVar19 * 4] = piVar13;
          local_868[uVar19 * 4 + 1] = (int *)0x5;
          *(uint *)((longlong)plVar11 + uVar28 * 4 + 0x38) = uVar24;
          uVar28 = uVar28 + 1;
        } while (uVar28 < *(uint *)(puVar5 + 3));
        local_1430[0] = local_1430[0] + (int)uVar28;
      }
      local_1420 = 0;
      local_1418 = 0;
      local_1410 = 1;
      local_1428 = &local_878;
      iVar9 = (**(code **)(local_1460 + 0x58))(local_1430,1,&local_1438,&local_1440);
      if (iVar9 < 0) {
        if (local_1440 != (longlong *)0x0) {
          if (*(char *)(lVar17 + 0x78) == '\x01') {
            uVar14 = (**(code **)(*local_1440 + 0x18))();
                    /* WARNING: Subroutine does not return */
            FUN_1400fb950(9,"Failed to serialize RootSignature: %s",uVar14);
          }
          uVar14 = (**(code **)(*local_1440 + 0x18))();
          pcVar20 = "Failed to serialize RootSignature: %s";
LAB_1403f7fc0:
          FUN_1400fbed0(pcVar20,uVar14);
          (**(code **)(*local_1440 + 0x10))();
        }
      }
      else {
        pcVar7 = *(code **)(**(longlong **)(lVar17 + 0x50) + 0x80);
        uVar14 = (**(code **)(*local_1438 + 0x20))();
        uVar15 = (**(code **)(*local_1438 + 0x18))();
        local_1470 = &local_1448;
        local_1478 = &DAT_140e14824;
        iVar9 = (*pcVar7)(*(undefined8 *)(lVar17 + 0x50),0,uVar15,uVar14);
        if (-1 < iVar9) {
          *plVar11 = local_1448;
          plVar12[1] = (longlong)plVar11;
          local_1008 = *plVar11;
          iVar9 = (**(code **)(**(longlong **)(lVar17 + 0x50) + 0x50))
                            (*(longlong **)(lVar17 + 0x50),&local_1008,&DAT_140e14814,&local_878);
          if (iVar9 < 0) {
            s_error_code_s_0x08lx(lVar17,"Could not create graphics pipeline state",iVar9);
            if ((longlong *)*plVar12 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar12 + 0x10))();
            }
            plVar11 = (longlong *)plVar12[1];
            if (plVar11 != (longlong *)0x0) {
              if ((longlong *)*plVar11 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar11 + 0x10))();
              }
              FUN_140160cf0(plVar11);
            }
            plVar11 = (longlong *)0x0;
            plVar18 = plVar12;
          }
          else {
            *plVar12 = local_878;
            if ((int)param_2[3] != 0) {
              lVar16 = 4;
              uVar28 = 0;
              do {
                *(undefined4 *)
                 ((longlong)plVar12 + (ulonglong)*(uint *)(param_2[2] + -4 + lVar16) * 4 + 0x14) =
                     *(undefined4 *)(param_2[2] + lVar16);
                uVar28 = uVar28 + 1;
                lVar16 = lVar16 + 0x10;
              } while (uVar28 < *(uint *)(param_2 + 3));
            }
            *(int *)(plVar12 + 2) = (int)param_2[6];
            *(undefined4 *)((longlong)plVar12 + 0x54) = *(undefined4 *)((longlong)puVar6 + 0x14);
            *(undefined4 *)(plVar12 + 0xc) = *(undefined4 *)(puVar6 + 4);
            *(undefined4 *)((longlong)plVar12 + 0x5c) = *(undefined4 *)((longlong)puVar6 + 0x1c);
            *(undefined4 *)(plVar12 + 0xb) = *(undefined4 *)(puVar6 + 3);
            *(undefined4 *)((longlong)plVar12 + 100) = *(undefined4 *)((longlong)puVar5 + 0x14);
            *(undefined4 *)(plVar12 + 0xe) = *(undefined4 *)(puVar5 + 4);
            *(undefined4 *)((longlong)plVar12 + 0x6c) = *(undefined4 *)((longlong)puVar5 + 0x1c);
            *(undefined4 *)(plVar12 + 0xd) = *(undefined4 *)(puVar5 + 3);
            FUN_140106140((longlong)plVar12 + 0x74,0);
            plVar11 = plVar12;
            if ((((*(char *)(lVar17 + 0x78) == '\0') ||
                 (cVar8 = FUN_14014fd70((int)param_2[0x14],"SDL.gpu.graphicspipeline.create.name"),
                 cVar8 == '\0')) ||
                (lVar16 = FUN_14014ffe0((int)param_2[0x14],"SDL.gpu.graphicspipeline.create.name",0)
                , lVar16 == 0)) || (*(char *)(lVar17 + 0x78) == '\0')) goto LAB_1403f8020;
            plVar12 = (longlong *)*plVar12;
            lVar17 = FUN_1400fc570(lVar16);
            plVar18 = (longlong *)FUN_14017b9c0("UTF-16LE","UTF-8",lVar16,lVar17 + 1);
            (**(code **)(*plVar12 + 0x30))(plVar12,plVar18);
          }
          FUN_140160cf0(plVar18);
          goto LAB_1403f8020;
        }
        if (local_1440 != (longlong *)0x0) {
          if (*(char *)(lVar17 + 0x78) == '\x01') {
            uVar14 = (**(code **)(*local_1440 + 0x18))();
                    /* WARNING: Subroutine does not return */
            FUN_1400fb950(9,"Failed to create RootSignature: %s",uVar14);
          }
          uVar14 = (**(code **)(*local_1440 + 0x18))();
          pcVar20 = "Failed to create RootSignature: %s";
          goto LAB_1403f7fc0;
        }
      }
      if ((longlong *)*plVar11 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar11 + 0x10))();
      }
      FUN_140160cf0(plVar11);
    }
    if ((longlong *)*plVar12 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar12 + 0x10))();
    }
    plVar11 = (longlong *)plVar12[1];
    if (plVar11 != (longlong *)0x0) {
      if ((longlong *)*plVar11 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar11 + 0x10))();
      }
      FUN_140160cf0(plVar11);
    }
    FUN_140160cf0(plVar12);
  }
  plVar11 = (longlong *)0x0;
LAB_1403f8020:
  if (DAT_1414ef3c0 == (local_70 ^ (ulonglong)auStack_1498)) {
    return plVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_70 ^ (ulonglong)auStack_1498);
}

