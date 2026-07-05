/**
 * Function: selection_bounding_boxes
 * Address:  1405a4e60
 * Signature: undefined selection_bounding_boxes(void)
 * Body size: 3039 bytes
 */


void selection_bounding_boxes
               (longlong *param_1,undefined8 param_2,void *param_3,uint param_4,longlong param_5,
               undefined4 param_6)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong local_608;
  longlong lStack_600;
  undefined1 local_5f8 [16];
  undefined1 local_5e8 [664];
  longlong alStack_350 [8];
  longlong local_310;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_110 [32];
  undefined1 local_f0 [40];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  ulonglong local_78;
  uint local_6c;
  uint local_68;
  byte local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_98 = param_2;
  lVar8 = FUN_1401a9cc0();
  bVar12 = *(byte *)(lVar8 + 0x288);
  if ((bVar12 & 1) == 0) {
    local_90 = 0;
  }
  else {
    lVar8 = FUN_1401a9cc0();
    local_90 = *(longlong *)(lVar8 + 0x290);
    lVar9 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar9 + 0x28);
    lVar8 = lVar9;
    if ((uVar10 & 0xffff) == 0) {
      lVar8 = FUN_1400637c0(lVar9,uVar10);
    }
    lVar3 = *(longlong *)(lVar9 + 0x48);
    uVar15 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar3 + uVar15) = 0xf;
    uVar14 = rdtsc();
    *(ulonglong *)(lVar3 + 1 + uVar15) =
         uVar14 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar14);
    *(undefined ***)(lVar3 + 9 + uVar15) = &PTR_s_Selection_Render_14133d719_7_1411f4440;
    *(ulonglong *)(lVar9 + 0x28) = uVar10 + 1;
  }
  if (((((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (param_1[0xc] == 0)) ||
      ((param_1[0x12] == 0 || (param_1[7] == 0)))) ||
     (local_6c = param_4, local_61 = bVar12, local_80 = (longlong *)FUN_140220610(),
     bVar12 = local_61, local_80 == (longlong *)0x0)) goto LAB_1405a59c7;
  if (param_5 == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = FUN_1400b8670(local_98);
  }
  uVar10 = FUN_1401a9cc0();
  uVar14 = (ulonglong)local_6c;
  if ((*(byte *)(uVar10 + 0x288) & 1) != 0) {
    lVar8 = FUN_1401a9e60();
    uVar15 = *(ulonglong *)(lVar8 + 0x28);
    if ((uVar15 & 0xffff) == 0) {
      FUN_1400637c0(lVar8,uVar15);
    }
    lVar9 = *(longlong *)(lVar8 + 0x48);
    uVar17 = (ulonglong)(uint)((int)(uVar15 & 0xffff) << 5);
    *(undefined1 *)(lVar9 + uVar17) = 0x2d;
    *(char **)(lVar9 + 1 + uVar17) = "Selection Count";
    uVar16 = rdtsc();
    uVar10 = CONCAT44(1,(int)uVar16);
    *(ulonglong *)(lVar9 + 9 + uVar17) = uVar16 & 0xffffffff00000000 | uVar10;
    *(ulonglong *)(lVar9 + 0x11 + uVar17) = uVar14;
    *(ulonglong *)(lVar8 + 0x28) = uVar15 + 1;
  }
  if (cVar5 == '\0') {
LAB_1405a5057:
    bVar12 = local_61;
    if (local_6c == 0) goto LAB_1405a59c7;
    local_68 = 0;
  }
  else {
    local_68 = (uint)CONCAT71((int7)(uVar10 >> 8),1);
    if (local_6c != 0) {
      uVar10 = 0;
      do {
        if (*(longlong *)((longlong)param_3 + uVar10 * 8) == param_5) goto LAB_1405a5057;
        uVar10 = uVar10 + 1;
      } while (uVar14 != uVar10);
    }
  }
  lVar8 = FUN_1402205f0(*param_1);
  bVar12 = local_61;
  if ((((lVar8 == 0) ||
       ((lVar8 != param_1[0xd] && (cVar5 = FUN_1405a6030(param_1), bVar12 = local_61, cVar5 == '\0')
        ))) || ((param_1[0x11] == 0 &&
                (cVar5 = FUN_1405a6430(param_1), bVar12 = local_61, cVar5 == '\0')))) ||
     (cVar5 = FUN_1405a67a0(param_1), bVar12 = local_61, cVar5 == '\0')) goto LAB_1405a59c7;
  plVar1 = param_1 + 0x1f;
  if (*(uint *)(param_1 + 0x20) == local_6c && local_6c != 0) {
    iVar6 = memcmp((void *)*plVar1,param_3,uVar14 * 8);
    if (iVar6 != 0) {
LAB_1405a5121:
      lVar8 = FUN_1401a9cc0();
      local_78 = CONCAT71(local_78._1_7_,*(byte *)(lVar8 + 0x288));
      if ((*(byte *)(lVar8 + 0x288) & 1) == 0) {
        local_88 = 0;
      }
      else {
        lVar8 = FUN_1401a9cc0();
        local_88 = *(longlong *)(lVar8 + 0x290);
        lVar9 = FUN_1401a9e60();
        uVar10 = *(ulonglong *)(lVar9 + 0x28);
        lVar8 = lVar9;
        if ((uVar10 & 0xffff) == 0) {
          lVar8 = FUN_1400637c0(lVar9,uVar10);
        }
        lVar3 = *(longlong *)(lVar9 + 0x48);
        uVar16 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
        *(undefined1 *)(lVar3 + uVar16) = 0xf;
        uVar15 = rdtsc();
        *(ulonglong *)(lVar3 + 1 + uVar16) =
             uVar15 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar15);
        *(undefined ***)(lVar3 + 9 + uVar16) = &PTR_s_Selection_LUT_Update_1411f4460;
        *(ulonglong *)(lVar9 + 0x28) = uVar10 + 1;
      }
      uVar13 = *(uint *)(param_1 + 0x20);
      if (uVar13 != 0) {
        uVar10 = 0;
        do {
          uVar4 = *(undefined8 *)(*plVar1 + uVar10 * 8);
          uVar11 = (uint)uVar4;
          if (uVar11 < 0x80000) {
            bVar12 = (byte)uVar4 & 0x1f;
            puVar2 = (uint *)(param_1[0x1e] + (ulonglong)(uVar11 >> 3 & 0xfffc));
            *puVar2 = *puVar2 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
            uVar13 = *(uint *)(param_1 + 0x20);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar13);
      }
      if (local_6c != 0) {
        uVar10 = 0;
        do {
          uVar4 = *(undefined8 *)((longlong)param_3 + uVar10 * 8);
          uVar13 = (uint)uVar4;
          if (uVar13 < 0x80000) {
            puVar2 = (uint *)(param_1[0x1e] + (ulonglong)(uVar13 >> 3 & 0xfffc));
            *puVar2 = *puVar2 | 1 << ((byte)uVar4 & 0x1f);
          }
          uVar10 = uVar10 + 1;
        } while (uVar14 != uVar10);
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (*(uint *)((longlong)param_1 + 0x104) < local_6c) {
        FUN_1404ee220(plVar1,(longlong)param_1 + 0x104,8,local_6c);
      }
      for (uVar13 = 0; uVar13 < local_6c; uVar13 = uVar13 + 1) {
        uVar4 = *(undefined8 *)((longlong)param_3 + (ulonglong)uVar13 * 8);
        uVar11 = *(uint *)(param_1 + 0x20);
        if (uVar11 < *(uint *)((longlong)param_1 + 0x104)) {
LAB_1405a526e:
          *(uint *)(param_1 + 0x20) = uVar11 + 1;
          *(undefined8 *)(param_1[0x1f] + (ulonglong)uVar11 * 8) = uVar4;
        }
        else {
          cVar5 = FUN_1404ee220(plVar1,(longlong)param_1 + 0x104,8,0);
          if (cVar5 != '\0') {
            uVar11 = *(uint *)(param_1 + 0x20);
            goto LAB_1405a526e;
          }
        }
      }
      FUN_1401a3690(&local_608,*param_1,"Selection LUT Upload",0x27e,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/intern/selection.cpp",
                    "gfx_sel_render");
      (**(code **)(*local_80 + 0x80))(local_80,param_1[5],param_1[0x1e],0x10000,0);
      FUN_1401a43a0(local_5e8);
      FUN_1401a44e0(&local_608);
      if (((local_78 & 1) != 0) &&
         (lVar8 = FUN_1401a9cc0(), *(longlong *)(lVar8 + 0x290) == local_88)) {
        lVar9 = FUN_1401a9e60();
        uVar10 = *(ulonglong *)(lVar9 + 0x28);
        lVar8 = lVar9;
        if ((uVar10 & 0xffff) == 0) {
          lVar8 = FUN_1400637c0(lVar9,uVar10);
        }
        lVar3 = *(longlong *)(lVar9 + 0x48);
        uVar15 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
        *(undefined1 *)(lVar3 + uVar15) = 0x11;
        uVar14 = rdtsc();
        *(ulonglong *)(lVar3 + 1 + uVar15) =
             uVar14 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar14);
        *(ulonglong *)(lVar9 + 0x28) = uVar10 + 1;
      }
    }
  }
  else if (*(uint *)(param_1 + 0x20) != local_6c) goto LAB_1405a5121;
  uStack_c0 = 0;
  uVar7 = 0xffffffff;
  if ((char)local_68 != '\0') {
    uVar7 = (undefined4)param_5;
  }
  local_c8 = CONCAT44(uVar7,0x80000);
  FUN_1401a3690(&local_608,*param_1,"Selection Constants Upload",0x287,
                "/opt/actions-runner/_work/Platform/Platform/graphics/intern/selection.cpp",
                "gfx_sel_render");
  (**(code **)(*local_80 + 0x80))(local_80,param_1[4],&local_c8,0x10,0);
  FUN_1401a43a0(local_5e8);
  FUN_1401a44e0(&local_608);
  uStack_130 = 0;
  local_158 = 0x3f0ccccd3e19999a;
  uStack_150 = 0x3f8000003f800000;
  local_148 = 0x3e99999a;
  uStack_144 = 0x3f400000;
  uStack_140 = 0x3f800000;
  uStack_13c = 0x3f4ccccd;
  local_138 = CONCAT44(param_6,0x40c00000);
  FUN_1401a3690(&local_608,*param_1,"Selection Outline Constants Upload",0x297,
                "/opt/actions-runner/_work/Platform/Platform/graphics/intern/selection.cpp",
                "gfx_sel_render");
  (**(code **)(*local_80 + 0x80))(local_80,param_1[3],&local_158,0x30,0);
  FUN_1401a43a0(local_5e8);
  FUN_1401a44e0(&local_608);
  lVar8 = FUN_1401a9cc0();
  local_68 = CONCAT31(local_68._1_3_,*(byte *)(lVar8 + 0x288));
  if ((*(byte *)(lVar8 + 0x288) & 1) == 0) {
    local_78 = 0;
  }
  else {
    lVar8 = FUN_1401a9cc0();
    local_78 = *(longlong *)(lVar8 + 0x290);
    lVar9 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar9 + 0x28);
    lVar8 = lVar9;
    if ((uVar10 & 0xffff) == 0) {
      lVar8 = FUN_1400637c0(lVar9,uVar10);
    }
    lVar3 = *(longlong *)(lVar9 + 0x48);
    uVar15 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar3 + uVar15) = 0xf;
    uVar14 = rdtsc();
    *(ulonglong *)(lVar3 + 1 + uVar15) =
         uVar14 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar14);
    *(undefined ***)(lVar3 + 9 + uVar15) = &PTR_s_Selection_Mask_Pass_1411f4480;
    *(ulonglong *)(lVar9 + 0x28) = uVar10 + 1;
  }
  FUN_1401a3690(local_110,*param_1,"Selection Mask",0x29e,
                "/opt/actions-runner/_work/Platform/Platform/graphics/intern/selection.cpp",
                "gfx_sel_render");
  local_608 = 0;
  lStack_600 = 0;
  local_128 = 0;
  uStack_124 = 0xffffffff;
  uStack_120 = 0;
  uStack_11c = 0xffffffff;
  (**(code **)(*local_80 + 0x40))(local_80,param_1[6],&local_128,&local_608);
  FUN_1404cef10(&local_608);
  local_608 = param_1[0xc];
  lStack_600 = param_1[7];
  FUN_1404cf050(local_5f8,(float)*(uint *)(param_1 + 2),(float)*(uint *)((longlong)param_1 + 0x14));
  alStack_350[local_310] = param_1[0xb];
  local_310 = local_310 + 1;
  (**(code **)(*local_80 + 0xb8))(local_80,&local_608);
  local_a8 = 0;
  local_b8 = 0x100000003;
  uStack_b0 = 0;
  (**(code **)(*local_80 + 0xc0))(local_80,&local_b8);
  FUN_1401a43a0(local_f0);
  FUN_1401a44e0(local_110);
  if (((local_68 & 1) != 0) && (lVar8 = FUN_1401a9cc0(), *(longlong *)(lVar8 + 0x290) == local_78))
  {
    lVar9 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar9 + 0x28);
    lVar8 = lVar9;
    if ((uVar10 & 0xffff) == 0) {
      lVar8 = FUN_1400637c0(lVar9,uVar10);
    }
    lVar3 = *(longlong *)(lVar9 + 0x48);
    uVar15 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar3 + uVar15) = 0x11;
    uVar14 = rdtsc();
    *(ulonglong *)(lVar3 + 1 + uVar15) =
         uVar14 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar14);
    *(ulonglong *)(lVar9 + 0x28) = uVar10 + 1;
  }
  lVar8 = FUN_1401a9cc0();
  local_68 = CONCAT31(local_68._1_3_,*(byte *)(lVar8 + 0x288));
  if ((*(byte *)(lVar8 + 0x288) & 1) == 0) {
    local_78 = 0;
  }
  else {
    lVar8 = FUN_1401a9cc0();
    local_78 = *(ulonglong *)(lVar8 + 0x290);
    lVar9 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar9 + 0x28);
    lVar8 = lVar9;
    if ((uVar10 & 0xffff) == 0) {
      lVar8 = FUN_1400637c0(lVar9,uVar10);
    }
    lVar3 = *(longlong *)(lVar9 + 0x48);
    uVar15 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar3 + uVar15) = 0xf;
    uVar14 = rdtsc();
    *(ulonglong *)(lVar3 + 1 + uVar15) =
         uVar14 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar14);
    *(undefined ***)(lVar3 + 9 + uVar15) = &PTR_s_Selection_Edge_Pass_1411f44a0;
    *(ulonglong *)(lVar9 + 0x28) = uVar10 + 1;
  }
  FUN_1401a3690(local_110,*param_1,"Selection Edge",0x2ae,
                "/opt/actions-runner/_work/Platform/Platform/graphics/intern/selection.cpp",
                "gfx_sel_render");
  FUN_1404cef10(&local_608);
  local_608 = param_1[0x12];
  lStack_600 = param_1[0x13];
  FUN_1404cf050(local_5f8,(float)*(uint *)(param_1 + 2),(float)*(uint *)((longlong)param_1 + 0x14));
  alStack_350[local_310] = param_1[0x11];
  local_310 = local_310 + 1;
  (**(code **)(*local_80 + 0xb8))(local_80,&local_608);
  local_a8 = 0;
  local_b8 = 0x100000003;
  uStack_b0 = 0;
  (**(code **)(*local_80 + 0xc0))(local_80,&local_b8);
  FUN_1401a43a0(local_f0);
  FUN_1401a44e0(local_110);
  if (((local_68 & 1) != 0) && (lVar8 = FUN_1401a9cc0(), *(ulonglong *)(lVar8 + 0x290) == local_78))
  {
    lVar9 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar9 + 0x28);
    lVar8 = lVar9;
    if ((uVar10 & 0xffff) == 0) {
      lVar8 = FUN_1400637c0(lVar9,uVar10);
    }
    lVar3 = *(longlong *)(lVar9 + 0x48);
    uVar15 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar3 + uVar15) = 0x11;
    uVar14 = rdtsc();
    *(ulonglong *)(lVar3 + 1 + uVar15) =
         uVar14 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar14);
    *(ulonglong *)(lVar9 + 0x28) = uVar10 + 1;
  }
  bVar12 = local_61;
  if (1 < local_6c) {
    lVar8 = FUN_1401a9cc0();
    local_68 = CONCAT31(local_68._1_3_,*(byte *)(lVar8 + 0x288));
    if ((*(byte *)(lVar8 + 0x288) & 1) == 0) {
      local_78 = 0;
    }
    else {
      lVar8 = FUN_1401a9cc0();
      local_78 = *(ulonglong *)(lVar8 + 0x290);
      lVar9 = FUN_1401a9e60();
      uVar10 = *(ulonglong *)(lVar9 + 0x28);
      lVar8 = lVar9;
      if ((uVar10 & 0xffff) == 0) {
        lVar8 = FUN_1400637c0(lVar9,uVar10);
      }
      lVar3 = *(longlong *)(lVar9 + 0x48);
      uVar15 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
      *(undefined1 *)(lVar3 + uVar15) = 0xf;
      uVar14 = rdtsc();
      *(ulonglong *)(lVar3 + 1 + uVar15) =
           uVar14 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar14);
      *(undefined ***)(lVar3 + 9 + uVar15) = &PTR_s_Selection_Bounding_Boxes_1411f44c0;
      *(ulonglong *)(lVar9 + 0x28) = uVar10 + 1;
    }
    FUN_1401a3690(&local_608,*param_1,"Selection Bounding Boxes",699,
                  "/opt/actions-runner/_work/Platform/Platform/graphics/intern/selection.cpp",
                  "gfx_sel_render");
    FUN_1405a6ac0(param_1,local_98,param_3,local_6c,local_80);
    FUN_1401a43a0(local_5e8);
    FUN_1401a44e0(&local_608);
    bVar12 = local_61;
    if (((local_68 & 1) != 0) &&
       (lVar8 = FUN_1401a9cc0(), bVar12 = local_61, *(ulonglong *)(lVar8 + 0x290) == local_78)) {
      lVar9 = FUN_1401a9e60();
      uVar10 = *(ulonglong *)(lVar9 + 0x28);
      lVar8 = lVar9;
      if ((uVar10 & 0xffff) == 0) {
        lVar8 = FUN_1400637c0(lVar9,uVar10);
      }
      lVar3 = *(longlong *)(lVar9 + 0x48);
      uVar15 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
      *(undefined1 *)(lVar3 + uVar15) = 0x11;
      uVar14 = rdtsc();
      *(ulonglong *)(lVar3 + 1 + uVar15) =
           uVar14 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar14);
      *(ulonglong *)(lVar9 + 0x28) = uVar10 + 1;
      bVar12 = local_61;
    }
  }
LAB_1405a59c7:
  if (((bVar12 & 1) != 0) && (lVar8 = FUN_1401a9cc0(), *(longlong *)(lVar8 + 0x290) == local_90)) {
    lVar9 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar9 + 0x28);
    lVar8 = lVar9;
    if ((uVar10 & 0xffff) == 0) {
      lVar8 = FUN_1400637c0(lVar9,uVar10);
    }
    lVar3 = *(longlong *)(lVar9 + 0x48);
    uVar15 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar3 + uVar15) = 0x11;
    uVar14 = rdtsc();
    *(ulonglong *)(lVar3 + 1 + uVar15) =
         uVar14 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar14);
    *(ulonglong *)(lVar9 + 0x28) = uVar10 + 1;
  }
  return;
}

