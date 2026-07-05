/**
 * Function: wr_transparent_count
 * Address:  1401bd0d0
 * Signature: undefined wr_transparent_count(void)
 * Body size: 6678 bytes
 */


void wr_transparent_count(longlong *param_1,longlong param_2,undefined8 param_3,float *param_4)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  uint uVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  ulonglong uVar50;
  longlong *plVar51;
  longlong *plVar52;
  ulonglong uVar53;
  uint uVar54;
  longlong *plVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar62;
  char *pcVar61;
  char *pcVar63;
  float *pfVar64;
  undefined8 in_stack_fffffffffffffe40;
  ulonglong in_stack_fffffffffffffe48;
  undefined1 local_1a0 [32];
  undefined1 local_180 [40];
  undefined8 local_158;
  longlong *local_150;
  longlong local_148;
  longlong local_140;
  undefined1 local_138 [32];
  undefined1 local_118 [40];
  longlong *local_f0;
  float *local_e8;
  float *local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  byte local_c1;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  
  local_b0 = 0xfffffffffffffffe;
  local_158 = param_3;
  local_e0 = param_4;
  lVar47 = FUN_1401a9cc0();
  local_c1 = *(byte *)(lVar47 + 0x288);
  if ((local_c1 & 1) == 0) {
    local_148 = 0;
  }
  else {
    lVar47 = FUN_1401a9cc0();
    local_148 = *(longlong *)(lVar47 + 0x290);
    lVar48 = FUN_1401a9e60();
    uVar56 = *(ulonglong *)(lVar48 + 0x28);
    lVar47 = lVar48;
    if ((uVar56 & 0xffff) == 0) {
      lVar47 = FUN_1400637c0(lVar48,uVar56);
    }
    lVar49 = *(longlong *)(lVar48 + 0x48);
    uVar53 = (ulonglong)(uint)((int)(uVar56 & 0xffff) << 5);
    *(undefined1 *)(lVar49 + uVar53) = 0xf;
    uVar50 = rdtsc();
    *(ulonglong *)(lVar49 + 1 + uVar53) =
         uVar50 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar50);
    *(undefined ***)(lVar49 + 9 + uVar53) = &PTR_s_WR_Populate_Queue_140df0550;
    *(ulonglong *)(lVar48 + 0x28) = uVar56 + 1;
  }
  if (local_e0 == (float *)0x0) {
    fVar59 = 1.0;
  }
  else {
    fVar59 = local_e0[0x29];
  }
  *(float *)((longlong)param_1 + 0xf364) = fVar59;
  local_150 = param_1 + 2;
  local_d0 = param_2;
  FUN_1404d3bc0();
  FUN_1404d6e80(param_1[0x100],param_1[0x34]);
  local_f0 = param_1 + 0x4c;
  FUN_1404da9c0(local_f0,param_1[0x33]);
  plVar52 = param_1 + 0x60;
  uVar54 = 0;
  do {
    FUN_1404da9c0(plVar52 + (ulonglong)uVar54 * 0x14,param_1[0x33]);
    uVar46 = (uint)((ulonglong)in_stack_fffffffffffffe40 >> 0x20);
    uVar54 = uVar54 + 1;
  } while (uVar54 < 8);
  if (param_1[0x1e66] != local_d0) {
    if (param_1[0x1e66] != 0) {
      FUN_1404eb050(param_1);
    }
    FUN_1404e97f0(param_1,local_d0);
  }
  local_d8 = (longlong *)FUN_140220630(*param_1);
  lVar47 = FUN_1401a9cc0();
  local_c0 = CONCAT71(local_c0._1_7_,*(byte *)(lVar47 + 0x288));
  if ((*(byte *)(lVar47 + 0x288) & 1) == 0) {
    local_b8 = 0;
  }
  else {
    lVar47 = FUN_1401a9cc0();
    lVar47 = *(longlong *)(lVar47 + 0x290);
    lVar49 = FUN_1401a9e60();
    uVar56 = *(ulonglong *)(lVar49 + 0x28);
    lVar48 = lVar49;
    if ((uVar56 & 0xffff) == 0) {
      lVar48 = FUN_1400637c0(lVar49,uVar56);
    }
    lVar4 = *(longlong *)(lVar49 + 0x48);
    uVar53 = (ulonglong)(uint)((int)(uVar56 & 0xffff) << 5);
    *(undefined1 *)(lVar4 + uVar53) = 0xf;
    uVar50 = rdtsc();
    *(ulonglong *)(lVar4 + 1 + uVar53) =
         uVar50 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar48 >> 0x20),(int)uVar50);
    *(undefined ***)(lVar4 + 9 + uVar53) = &PTR_s_WR_Sync_Render_Slots_140df0570;
    *(ulonglong *)(lVar49 + 0x28) = uVar56 + 1;
    local_b8 = lVar47;
  }
  uVar56 = local_d0;
  plVar51 = local_d8;
  wr_pending_initial_render_slots(param_1,local_d0,local_d8);
  FUN_1404ec480(param_1,plVar51);
  FUN_1404edb70(param_1,uVar56,plVar51);
  FUN_1404eda70(param_1,uVar56);
  FUN_1404ed960(param_1,uVar56,local_e0[0x29]);
  if (((local_c0 & 1) != 0) && (lVar47 = FUN_1401a9cc0(), *(longlong *)(lVar47 + 0x290) == local_b8)
     ) {
    lVar48 = FUN_1401a9e60();
    uVar56 = *(ulonglong *)(lVar48 + 0x28);
    lVar47 = lVar48;
    if ((uVar56 & 0xffff) == 0) {
      lVar47 = FUN_1400637c0(lVar48,uVar56);
    }
    lVar49 = *(longlong *)(lVar48 + 0x48);
    uVar53 = (ulonglong)(uint)((int)(uVar56 & 0xffff) << 5);
    *(undefined1 *)(lVar49 + uVar53) = 0x11;
    uVar50 = rdtsc();
    *(ulonglong *)(lVar49 + 1 + uVar53) =
         uVar50 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar50);
    *(ulonglong *)(lVar48 + 0x28) = uVar56 + 1;
  }
  uVar54 = *(uint *)((longlong)param_1 + 0xa4);
  uVar56 = (ulonglong)uVar54;
  if (uVar56 != 0) {
    lVar47 = FUN_1401a9cc0();
    if ((*(byte *)(lVar47 + 0x288) & 1) != 0) {
      lVar47 = FUN_1401a9e60();
      uVar50 = *(ulonglong *)(lVar47 + 0x28);
      if ((uVar50 & 0xffff) == 0) {
        FUN_1400637c0(lVar47,uVar50);
      }
      lVar48 = *(longlong *)(lVar47 + 0x48);
      uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
      *(undefined1 *)(lVar48 + uVar58) = 0x2d;
      *(char **)(lVar48 + 1 + uVar58) = "WR Cull Slot High Water";
      uVar53 = rdtsc();
      *(ulonglong *)(lVar48 + 9 + uVar58) = uVar53 & 0xffffffff00000000 | CONCAT44(1,(int)uVar53);
      *(ulonglong *)(lVar48 + 0x11 + uVar58) = uVar56;
      *(ulonglong *)(lVar47 + 0x28) = uVar50 + 1;
    }
    uVar3 = *(uint *)(param_1 + 0x27);
    lVar47 = FUN_1401a9cc0();
    if ((*(byte *)(lVar47 + 0x288) & 1) != 0) {
      lVar47 = FUN_1401a9e60();
      uVar50 = *(ulonglong *)(lVar47 + 0x28);
      if ((uVar50 & 0xffff) == 0) {
        FUN_1400637c0(lVar47,uVar50);
      }
      lVar48 = *(longlong *)(lVar47 + 0x48);
      uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
      *(undefined1 *)(lVar48 + uVar58) = 0x2d;
      *(char **)(lVar48 + 1 + uVar58) = "WR Transparent Count";
      uVar53 = rdtsc();
      *(ulonglong *)(lVar48 + 9 + uVar58) = uVar53 & 0xffffffff00000000 | CONCAT44(1,(int)uVar53);
      *(ulonglong *)(lVar48 + 0x11 + uVar58) = (ulonglong)uVar3;
      *(ulonglong *)(lVar47 + 0x28) = uVar50 + 1;
    }
    if (local_d8 != (longlong *)0x0) {
      lVar47 = FUN_1401a9cc0();
      local_c0 = CONCAT71(local_c0._1_7_,*(byte *)(lVar47 + 0x288));
      if ((*(byte *)(lVar47 + 0x288) & 1) == 0) {
        local_b8 = 0;
      }
      else {
        lVar47 = FUN_1401a9cc0();
        local_b8 = *(longlong *)(lVar47 + 0x290);
        lVar48 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar50 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar50);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar58) = 0xf;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
        *(undefined ***)(lVar49 + 9 + uVar58) = &PTR_s_WR_Upload_Dirty_Objects_140df0590;
        *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
      }
      uVar62 = 1;
      FUN_1401a3690(local_138,*param_1,"WR Upload Dirty Objects",0xcb,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/world_renderer.cpp",
                    "gfx_wr_populate_queue");
      FUN_1404d3a50(local_150,local_d8);
      FUN_1401a43a0(local_118);
      FUN_1401a44e0(local_138);
      if (((local_c0 & 1) != 0) &&
         (lVar47 = FUN_1401a9cc0(), *(longlong *)(lVar47 + 0x290) == local_b8)) {
        lVar48 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar50 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar50);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar58) = 0x11;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
        *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
      }
      lVar47 = FUN_1401a9cc0();
      local_c0 = CONCAT71(local_c0._1_7_,*(byte *)(lVar47 + 0x288));
      if ((*(byte *)(lVar47 + 0x288) & 1) == 0) {
        local_b8 = 0;
      }
      else {
        lVar47 = FUN_1401a9cc0();
        lVar47 = *(longlong *)(lVar47 + 0x290);
        lVar49 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar49 + 0x28);
        lVar48 = lVar49;
        if ((uVar50 & 0xffff) == 0) {
          lVar48 = FUN_1400637c0(lVar49,uVar50);
        }
        lVar4 = *(longlong *)(lVar49 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar4 + uVar58) = 0xf;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar4 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar48 >> 0x20),(int)uVar53);
        *(undefined ***)(lVar4 + 9 + uVar58) = &PTR_s_WR_Collect_Lights_140df05b0;
        *(ulonglong *)(lVar49 + 0x28) = uVar50 + 1;
        local_b8 = lVar47;
      }
      uVar60 = FUN_1404e4670(param_1[0x101]);
      FUN_1404ee390(local_d0,param_1[0x1e69],param_1[0x1e6a],local_e0,CONCAT44(uVar62,uVar60),
                    param_1 + 0x102);
      if (((local_c0 & 1) != 0) &&
         (lVar47 = FUN_1401a9cc0(), *(longlong *)(lVar47 + 0x290) == local_b8)) {
        lVar48 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar50 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar50);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar58) = 0x11;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
        *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
      }
      lVar47 = FUN_1401a9cc0();
      local_d0 = CONCAT71(local_d0._1_7_,*(byte *)(lVar47 + 0x288));
      if ((*(byte *)(lVar47 + 0x288) & 1) == 0) {
        local_c0 = 0;
      }
      else {
        lVar47 = FUN_1401a9cc0();
        local_c0 = *(longlong *)(lVar47 + 0x290);
        lVar48 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar50 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar50);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar58) = 0xf;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
        *(undefined ***)(lVar49 + 9 + uVar58) = &PTR_s_WR_Upload_Lighting_Constants_140df05d0;
        *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
      }
      FUN_1401a3690(local_138,*param_1,"WR Upload Lighting Constants",0xdb,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/world_renderer.cpp",
                    "gfx_wr_populate_queue");
      (**(code **)(*local_d8 + 0x80))(local_d8,param_1[0x34],param_1 + 0x102,0x820,0);
      FUN_1401a43a0(local_118);
      FUN_1401a44e0(local_138);
      if (((local_d0 & 1) != 0) &&
         (lVar47 = FUN_1401a9cc0(), *(longlong *)(lVar47 + 0x290) == local_c0)) {
        lVar48 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar50 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar50);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar58) = 0x11;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
        *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
      }
      lVar47 = FUN_1401a9cc0();
      local_d0 = CONCAT71(local_d0._1_7_,*(byte *)(lVar47 + 0x288));
      if ((*(byte *)(lVar47 + 0x288) & 1) == 0) {
        local_c0 = 0;
      }
      else {
        lVar47 = FUN_1401a9cc0();
        local_c0 = *(longlong *)(lVar47 + 0x290);
        lVar48 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar50 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar50);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar58) = 0xf;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
        *(undefined ***)(lVar49 + 9 + uVar58) = &PTR_s_WR_Clustered_Lighting_140df05f0;
        *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
      }
      uVar60 = 1;
      FUN_1401a3690(local_138,*param_1,"Clustered Lighting",0xe1,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/world_renderer.cpp",
                    "gfx_wr_populate_queue");
      lVar47 = (**(code **)(**(longlong **)(*param_1 + 0x10) + 0x40))
                         (*(longlong **)(*param_1 + 0x10),0);
      lVar47 = (**(code **)(**(longlong **)(lVar47 + 8) + 0x30))();
      uVar62 = *(undefined4 *)(lVar47 + 0x24);
      lVar47 = (**(code **)(**(longlong **)(*param_1 + 0x10) + 0x40))
                         (*(longlong **)(*param_1 + 0x10),0);
      lVar47 = (**(code **)(**(longlong **)(lVar47 + 8) + 0x30))();
      FUN_1404d6ea0(param_1[0x100],*(undefined4 *)(lVar47 + 0x20),uVar62);
      plVar51 = param_1 + 0xe06;
      if (*(int *)((longlong)param_1 + 0x824) == 0) {
        plVar51 = (longlong *)0x0;
      }
      plVar55 = param_1 + 0x206;
      if ((int)param_1[0x104] == 0) {
        plVar55 = (longlong *)0x0;
      }
      pfVar64 = local_e0;
      FUN_1404d6eb0(param_1[0x100],local_d8,plVar55,(int)param_1[0x104],plVar51,
                    CONCAT44(uVar60,*(int *)((longlong)param_1 + 0x824)),local_e0);
      clustered_assign_lights(param_1[0x100],local_d8,local_e0);
      FUN_1401a43a0(local_118);
      FUN_1401a44e0(local_138);
      if (((local_d0 & 1) != 0) &&
         (lVar47 = FUN_1401a9cc0(), *(longlong *)(lVar47 + 0x290) == local_c0)) {
        lVar48 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar50 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar50);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar58) = 0x11;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
        *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
      }
      lVar47 = FUN_1401a9cc0();
      local_d0 = CONCAT71(local_d0._1_7_,*(byte *)(lVar47 + 0x288));
      if ((*(byte *)(lVar47 + 0x288) & 1) == 0) {
        local_c0 = 0;
      }
      else {
        lVar47 = FUN_1401a9cc0();
        lVar47 = *(longlong *)(lVar47 + 0x290);
        lVar49 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar49 + 0x28);
        lVar48 = lVar49;
        if ((uVar50 & 0xffff) == 0) {
          lVar48 = FUN_1400637c0(lVar49,uVar50);
        }
        lVar4 = *(longlong *)(lVar49 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar4 + uVar58) = 0xf;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar4 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar48 >> 0x20),(int)uVar53);
        *(undefined ***)(lVar4 + 9 + uVar58) = &PTR_s_WR_Refresh_SRBs_140df0610;
        *(ulonglong *)(lVar49 + 0x28) = uVar50 + 1;
        local_c0 = lVar47;
      }
      FUN_1404cf8f0();
      if (((local_d0 & 1) != 0) &&
         (lVar47 = FUN_1401a9cc0(), *(longlong *)(lVar47 + 0x290) == local_c0)) {
        lVar48 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar50 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar50);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar58) = 0x11;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
        *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
      }
      local_d0 = param_1[1];
      lVar47 = FUN_1401a9cc0();
      bVar2 = *(byte *)(lVar47 + 0x288);
      if ((bVar2 & 1) == 0) {
        local_140 = 0;
      }
      else {
        lVar47 = FUN_1401a9cc0();
        local_140 = *(longlong *)(lVar47 + 0x290);
        lVar48 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar50 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar50);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar58) = 0xf;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
        *(undefined ***)(lVar49 + 9 + uVar58) = &PTR_s_WR_Main___Spot_Culling_140df0630;
        *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
      }
      plVar51 = param_1 + 0x1e1e;
      fVar59 = *local_e0;
      fVar6 = local_e0[1];
      fVar7 = local_e0[2];
      fVar8 = local_e0[3];
      fVar9 = local_e0[4];
      fVar10 = local_e0[5];
      fVar11 = local_e0[6];
      fVar12 = local_e0[7];
      fVar13 = local_e0[8];
      fVar14 = local_e0[9];
      fVar15 = local_e0[10];
      fVar16 = local_e0[0xb];
      fVar17 = local_e0[0xc];
      fVar18 = local_e0[0xd];
      fVar19 = local_e0[0xe];
      fVar20 = local_e0[0xf];
      fVar21 = local_e0[0x10];
      fVar22 = local_e0[0x11];
      fVar23 = local_e0[0x12];
      fVar24 = local_e0[0x13];
      fVar25 = local_e0[0x14];
      fVar26 = local_e0[0x15];
      fVar27 = local_e0[0x16];
      fVar28 = local_e0[0x17];
      fVar29 = local_e0[0x18];
      fVar30 = local_e0[0x19];
      fVar31 = local_e0[0x1a];
      fVar32 = local_e0[0x1b];
      fVar33 = local_e0[0x1c];
      fVar34 = local_e0[0x1d];
      fVar35 = local_e0[0x1e];
      fVar36 = local_e0[0x1f];
      *(float *)(param_1 + 0x1e1e) =
           fVar8 * fVar33 + fVar7 * fVar29 + fVar6 * fVar25 + fVar59 * fVar21;
      *(float *)((longlong)param_1 + 0xf0f4) =
           fVar8 * fVar34 + fVar7 * fVar30 + fVar6 * fVar26 + fVar59 * fVar22;
      *(float *)(param_1 + 0x1e1f) =
           fVar8 * fVar35 + fVar7 * fVar31 + fVar6 * fVar27 + fVar59 * fVar23;
      *(float *)((longlong)param_1 + 0xf0fc) =
           fVar8 * fVar36 + fVar7 * fVar32 + fVar6 * fVar28 + fVar59 * fVar24;
      *(float *)(param_1 + 0x1e20) =
           fVar12 * fVar33 + fVar11 * fVar29 + fVar10 * fVar25 + fVar9 * fVar21;
      *(float *)((longlong)param_1 + 0xf104) =
           fVar12 * fVar34 + fVar11 * fVar30 + fVar10 * fVar26 + fVar9 * fVar22;
      *(float *)(param_1 + 0x1e21) =
           fVar12 * fVar35 + fVar11 * fVar31 + fVar10 * fVar27 + fVar9 * fVar23;
      *(float *)((longlong)param_1 + 0xf10c) =
           fVar12 * fVar36 + fVar11 * fVar32 + fVar10 * fVar28 + fVar9 * fVar24;
      *(float *)(param_1 + 0x1e22) =
           fVar16 * fVar33 + fVar15 * fVar29 + fVar14 * fVar25 + fVar13 * fVar21;
      *(float *)((longlong)param_1 + 0xf114) =
           fVar16 * fVar34 + fVar15 * fVar30 + fVar14 * fVar26 + fVar13 * fVar22;
      *(float *)(param_1 + 0x1e23) =
           fVar16 * fVar35 + fVar15 * fVar31 + fVar14 * fVar27 + fVar13 * fVar23;
      *(float *)((longlong)param_1 + 0xf11c) =
           fVar16 * fVar36 + fVar15 * fVar32 + fVar14 * fVar28 + fVar13 * fVar24;
      *(float *)(param_1 + 0x1e24) =
           fVar20 * fVar33 + fVar19 * fVar29 + fVar18 * fVar25 + fVar17 * fVar21;
      *(float *)((longlong)param_1 + 0xf124) =
           fVar20 * fVar34 + fVar19 * fVar30 + fVar18 * fVar26 + fVar17 * fVar22;
      *(float *)(param_1 + 0x1e25) =
           fVar20 * fVar35 + fVar19 * fVar31 + fVar18 * fVar27 + fVar17 * fVar23;
      *(float *)((longlong)param_1 + 0xf12c) =
           fVar20 * fVar36 + fVar19 * fVar32 + fVar18 * fVar28 + fVar17 * fVar24;
      uVar3 = *(uint *)((longlong)param_1 + 0x82c);
      if (uVar3 != 0) {
        if (uVar3 == 1) {
          uVar50 = 0;
        }
        else {
          plVar55 = param_1 + 0x1e2e;
          uVar50 = 0;
          do {
            *(int *)(plVar55 + -2) = (int)plVar55[-0x1c62];
            *(undefined4 *)((longlong)plVar55 + -0xc) = *(undefined4 *)((longlong)plVar55 + -0xe30c)
            ;
            *(int *)(plVar55 + -1) = (int)plVar55[-0x1c61];
            *(undefined4 *)((longlong)plVar55 + -4) = *(undefined4 *)((longlong)plVar55 + -0xe304);
            *(int *)(plVar55 + -4) = (int)plVar55[-0x1c64];
            *(undefined4 *)((longlong)plVar55 + -0x1c) =
                 *(undefined4 *)((longlong)plVar55 + -0xe31c);
            *(int *)(plVar55 + -3) = (int)plVar55[-0x1c63];
            *(undefined4 *)((longlong)plVar55 + -0x14) =
                 *(undefined4 *)((longlong)plVar55 + -0xe314);
            *(int *)(plVar55 + -6) = (int)plVar55[-0x1c66];
            *(undefined4 *)((longlong)plVar55 + -0x2c) =
                 *(undefined4 *)((longlong)plVar55 + -0xe32c);
            *(int *)(plVar55 + -5) = (int)plVar55[-0x1c65];
            *(undefined4 *)((longlong)plVar55 + -0x24) =
                 *(undefined4 *)((longlong)plVar55 + -0xe324);
            plVar55[-8] = plVar55[-0x1c68];
            plVar55[-7] = plVar55[-0x1c67];
            uVar50 = uVar50 + 2;
            *plVar55 = plVar55[-0x1c60];
            plVar55[1] = plVar55[-0x1c5f];
            plVar55[2] = plVar55[-0x1c5e];
            plVar55[3] = plVar55[-0x1c5d];
            plVar55[4] = plVar55[-0x1c5c];
            plVar55[5] = plVar55[-0x1c5b];
            *(int *)(plVar55 + 6) = (int)plVar55[-0x1c5a];
            *(undefined4 *)((longlong)plVar55 + 0x34) = *(undefined4 *)((longlong)plVar55 + -0xe2cc)
            ;
            *(int *)(plVar55 + 7) = (int)plVar55[-0x1c59];
            *(undefined4 *)((longlong)plVar55 + 0x3c) = *(undefined4 *)((longlong)plVar55 + -0xe2c4)
            ;
            plVar55 = plVar55 + 0x10;
          } while ((uVar3 & 0xfffffffe) != uVar50);
        }
        if ((uVar3 & 1) != 0) {
          plVar55 = param_1 + uVar50 * 8 + 0x1c6;
          lVar47 = *plVar55;
          uVar62 = *(undefined4 *)((longlong)plVar55 + 4);
          lVar48 = plVar55[1];
          uVar60 = *(undefined4 *)((longlong)plVar55 + 0xc);
          plVar55 = param_1 + uVar50 * 8 + 0x1c8;
          lVar49 = *plVar55;
          uVar37 = *(undefined4 *)((longlong)plVar55 + 4);
          lVar4 = plVar55[1];
          uVar38 = *(undefined4 *)((longlong)plVar55 + 0xc);
          plVar55 = param_1 + uVar50 * 8 + 0x1ca;
          lVar43 = *plVar55;
          uVar39 = *(undefined4 *)((longlong)plVar55 + 4);
          lVar44 = plVar55[1];
          uVar40 = *(undefined4 *)((longlong)plVar55 + 0xc);
          plVar55 = param_1 + uVar50 * 8 + 0x1cc;
          uVar41 = *(undefined4 *)((longlong)plVar55 + 4);
          lVar45 = plVar55[1];
          uVar42 = *(undefined4 *)((longlong)plVar55 + 0xc);
          plVar1 = plVar51 + uVar50 * 8 + 0xe;
          *(int *)plVar1 = (int)*plVar55;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar41;
          *(int *)(plVar1 + 1) = (int)lVar45;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar42;
          plVar55 = plVar51 + uVar50 * 8 + 0xc;
          *(int *)plVar55 = (int)lVar43;
          *(undefined4 *)((longlong)plVar55 + 4) = uVar39;
          *(int *)(plVar55 + 1) = (int)lVar44;
          *(undefined4 *)((longlong)plVar55 + 0xc) = uVar40;
          plVar55 = plVar51 + uVar50 * 8 + 10;
          *(int *)plVar55 = (int)lVar49;
          *(undefined4 *)((longlong)plVar55 + 4) = uVar37;
          *(int *)(plVar55 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar55 + 0xc) = uVar38;
          plVar55 = plVar51 + uVar50 * 8 + 8;
          *(int *)plVar55 = (int)lVar47;
          *(undefined4 *)((longlong)plVar55 + 4) = uVar62;
          *(int *)(plVar55 + 1) = (int)lVar48;
          *(undefined4 *)((longlong)plVar55 + 0xc) = uVar60;
        }
      }
      local_c0 = CONCAT71(local_c0._1_7_,bVar2);
      lVar47 = FUN_1401a9cc0();
      local_b8 = CONCAT71(local_b8._1_7_,*(byte *)(lVar47 + 0x288));
      if ((*(byte *)(lVar47 + 0x288) & 1) == 0) {
        local_e8 = (float *)0x0;
      }
      else {
        lVar47 = FUN_1401a9cc0();
        local_e8 = *(float **)(lVar47 + 0x290);
        lVar48 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar50 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar50);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar58) = 0xf;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
        *(undefined ***)(lVar49 + 9 + uVar58) = &PTR_s_WR_Upload_VP_Matrices_140df0650;
        *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
      }
      FUN_1401a3690(local_138,*param_1,"WR Upload VP Matrices",0x104,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/world_renderer.cpp",
                    "gfx_wr_populate_queue");
      (**(code **)(*local_d8 + 0x80))(local_d8,param_1[0x33],plVar51,0x240,0);
      FUN_1401a43a0(local_118);
      FUN_1401a44e0(local_138);
      if (((local_b8 & 1) != 0) &&
         (lVar47 = FUN_1401a9cc0(), (float *)*(longlong *)(lVar47 + 0x290) == local_e8)) {
        lVar48 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar50 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar50);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar58) = 0x11;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
        *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
      }
      lVar47 = FUN_1401a9cc0();
      local_b8 = CONCAT71(local_b8._1_7_,*(byte *)(lVar47 + 0x288));
      if ((*(byte *)(lVar47 + 0x288) & 1) == 0) {
        local_e8 = (float *)0x0;
      }
      else {
        lVar47 = FUN_1401a9cc0();
        local_e8 = *(float **)(lVar47 + 0x290);
        lVar48 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar50 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar50);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar58) = 0xf;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
        *(undefined ***)(lVar49 + 9 + uVar58) = &PTR_s_WR_Main_View_Culling_140df0670;
        *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
      }
      pcVar63 = "gfx_wr_populate_queue";
      pcVar61 = "/opt/actions-runner/_work/Platform/Platform/graphics/world_renderer.cpp";
      FUN_1401a3690(local_138,*param_1,"Main View Culling",0x10a,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/world_renderer.cpp",
                    "gfx_wr_populate_queue");
      plVar55 = local_d8;
      plVar51 = local_f0;
      uVar53 = (ulonglong)uVar46 << 0x20;
      uVar50 = (ulonglong)pfVar64 & 0xffffffff00000000;
      FUN_1404db130(local_f0,local_d8,0,uVar56,(ulonglong)pcVar61 & 0xffffffff00000000,
                    (ulonglong)pcVar63 & 0xffffffff00000000,uVar50,uVar53,
                    in_stack_fffffffffffffe48 & 0xffffffffffffff00);
      FUN_1404db240(plVar51,plVar55);
      httplib::ClientImpl::vfunction4();
      FUN_1401a43a0(local_118);
      FUN_1401a44e0(local_138);
      if (((local_b8 & 1) != 0) &&
         (lVar47 = FUN_1401a9cc0(), (float *)*(longlong *)(lVar47 + 0x290) == local_e8)) {
        lVar48 = FUN_1401a9e60();
        uVar58 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar58 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar58);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar57 = (ulonglong)(uint)((int)(uVar58 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar57) = 0x11;
        uVar5 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar57) =
             uVar5 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar5);
        *(ulonglong *)(lVar48 + 0x28) = uVar58 + 1;
      }
      lVar47 = FUN_1401a9cc0();
      local_b8 = CONCAT71(local_b8._1_7_,*(byte *)(lVar47 + 0x288));
      if ((*(byte *)(lVar47 + 0x288) & 1) == 0) {
        local_f0 = (longlong *)0x0;
      }
      else {
        lVar47 = FUN_1401a9cc0();
        plVar51 = *(longlong **)(lVar47 + 0x290);
        lVar48 = FUN_1401a9e60();
        uVar58 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar58 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar58);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar57 = (ulonglong)(uint)((int)(uVar58 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar57) = 0xf;
        uVar5 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar57) =
             uVar5 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar5);
        *(undefined ***)(lVar49 + 9 + uVar57) = &PTR_s_WR_Spot_Shadow_Culling_140df0690;
        *(ulonglong *)(lVar48 + 0x28) = uVar58 + 1;
        local_f0 = plVar51;
      }
      pcVar61 = "gfx_wr_populate_queue";
      FUN_1401a3690(local_138,*param_1,"Spot Shadow Culling",0x112,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/world_renderer.cpp",
                    "gfx_wr_populate_queue");
      plVar51 = local_d8;
      local_e8 = local_e0 + 0x10;
      for (uVar58 = 0; uVar62 = (undefined4)(uVar50 >> 0x20),
          uVar58 < *(uint *)((longlong)param_1 + 0x82c); uVar58 = uVar58 + 1) {
        uVar53 = uVar53 & 0xffffffff00000000;
        uVar50 = uVar50 & 0xffffffff00000000;
        pcVar61 = (char *)((ulonglong)pcVar61 & 0xffffffff00000000);
        FUN_1404db130(plVar52,plVar51,(int)uVar58 + 1,uVar56,2,pcVar61,uVar50,uVar53,1);
        FUN_1404db240(plVar52,plVar51);
        plVar52 = plVar52 + 0x14;
        httplib::ClientImpl::vfunction4();
      }
      FUN_1401a43a0(local_118);
      FUN_1401a44e0(local_138);
      if (((local_b8 & 1) != 0) &&
         (lVar47 = FUN_1401a9cc0(), *(longlong **)(lVar47 + 0x290) == local_f0)) {
        lVar48 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar50 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar50);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar58) = 0x11;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
        *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
      }
      if (param_1[0x3a] != 0) {
        FUN_1404d0860(param_1,local_d8,uVar54);
      }
      if (*(char *)(local_e0 + 0x28) == '\x01') {
        lVar47 = FUN_1401a9cc0();
        local_b8 = CONCAT71(local_b8._1_7_,*(byte *)(lVar47 + 0x288));
        if ((*(byte *)(lVar47 + 0x288) & 1) == 0) {
          local_f0 = (longlong *)0x0;
        }
        else {
          lVar47 = FUN_1401a9cc0();
          local_f0 = *(longlong **)(lVar47 + 0x290);
          lVar48 = FUN_1401a9e60();
          uVar50 = *(ulonglong *)(lVar48 + 0x28);
          lVar47 = lVar48;
          if ((uVar50 & 0xffff) == 0) {
            lVar47 = FUN_1400637c0(lVar48,uVar50);
          }
          lVar49 = *(longlong *)(lVar48 + 0x48);
          uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
          *(undefined1 *)(lVar49 + uVar58) = 0xf;
          uVar53 = rdtsc();
          *(ulonglong *)(lVar49 + 1 + uVar58) =
               uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
          *(undefined ***)(lVar49 + 9 + uVar58) = &PTR_s_WR_Sun_Shadow_Maps_140df06b0;
          *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
        }
        uVar60 = 1;
        FUN_1401a3690(local_138,*param_1,"Sun Shadow Maps",0x11e,
                      "/opt/actions-runner/_work/Platform/Platform/graphics/world_renderer.cpp",
                      "gfx_wr_populate_queue");
        plVar52 = local_d8;
        FUN_1404e11a0(param_1[0x101],local_d8,local_e0,local_e8,local_e0 + 0x20,
                      CONCAT44(uVar60,local_e0[0x23]),CONCAT44(uVar62,local_e0[0x24]),
                      local_e0 + 0x25);
        sun_shadow_cascade_draw
                  (param_1[0x101],plVar52,uVar56,param_1[0x13],param_1[0x28],
                   *(undefined8 *)(local_d0 + 0xb0),*(undefined8 *)(local_d0 + 0xb8));
        FUN_1401a43a0(local_118);
        FUN_1401a44e0(local_138);
        if (((local_b8 & 1) != 0) &&
           (lVar47 = FUN_1401a9cc0(), *(longlong **)(lVar47 + 0x290) == local_f0)) {
          lVar48 = FUN_1401a9e60();
          uVar50 = *(ulonglong *)(lVar48 + 0x28);
          lVar47 = lVar48;
          if ((uVar50 & 0xffff) == 0) {
            lVar47 = FUN_1400637c0(lVar48,uVar50);
          }
          lVar49 = *(longlong *)(lVar48 + 0x48);
          uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
          *(undefined1 *)(lVar49 + uVar58) = 0x11;
          uVar53 = rdtsc();
          *(ulonglong *)(lVar49 + 1 + uVar58) =
               uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
          *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
        }
      }
      lVar47 = FUN_1401a9cc0();
      local_e0 = (float *)CONCAT71(local_e0._1_7_,*(byte *)(lVar47 + 0x288));
      if ((*(byte *)(lVar47 + 0x288) & 1) == 0) {
        local_b8 = 0;
      }
      else {
        lVar47 = FUN_1401a9cc0();
        lVar47 = *(longlong *)(lVar47 + 0x290);
        lVar49 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar49 + 0x28);
        lVar48 = lVar49;
        if ((uVar50 & 0xffff) == 0) {
          lVar48 = FUN_1400637c0(lVar49,uVar50);
        }
        lVar4 = *(longlong *)(lVar49 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar4 + uVar58) = 0xf;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar4 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar48 >> 0x20),(int)uVar53);
        *(undefined ***)(lVar4 + 9 + uVar58) = &PTR_s_WR_Spot_Shadow_Maps_140df06d0;
        *(ulonglong *)(lVar49 + 0x28) = uVar50 + 1;
        local_b8 = lVar47;
      }
      FUN_1401a3690(local_138,*param_1,"Spot Shadow Maps",0x132,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/world_renderer.cpp",
                    "gfx_wr_populate_queue");
      spot_shadow_binding_set
                (param_1[0x101],local_d8,param_1 + 0x1c6,*(undefined4 *)((longlong)param_1 + 0x82c),
                 param_1[0x13]);
      uVar50 = 0;
      if (*(int *)((longlong)param_1 + 0x82c) != 0) {
        do {
          spot_shadow_clear(param_1[0x101],local_d8,uVar50,uVar56,param_1[uVar50 * 0x14 + 99],
                            (param_1 + uVar50 * 0x14 + 99)[1],*(undefined8 *)(local_d0 + 0xb0),
                            param_1[0x28],*(undefined8 *)(local_d0 + 0xb8));
          uVar54 = (int)uVar50 + 1;
          uVar50 = (ulonglong)uVar54;
        } while (uVar54 < *(uint *)((longlong)param_1 + 0x82c));
      }
      FUN_1401a43a0(local_118);
      FUN_1401a44e0(local_138);
      uVar56 = local_c0;
      if ((((ulonglong)local_e0 & 1) != 0) &&
         (lVar47 = FUN_1401a9cc0(), *(longlong *)(lVar47 + 0x290) == local_b8)) {
        lVar48 = FUN_1401a9e60();
        uVar50 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar50 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar50);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar58 = (ulonglong)(uint)((int)(uVar50 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar58) = 0x11;
        uVar53 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar58) =
             uVar53 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar53);
        *(ulonglong *)(lVar48 + 0x28) = uVar50 + 1;
      }
      if (((uVar56 & 1) != 0) &&
         (lVar47 = FUN_1401a9cc0(), *(longlong *)(lVar47 + 0x290) == local_140)) {
        lVar48 = FUN_1401a9e60();
        uVar56 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar56 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar56);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar53 = (ulonglong)(uint)((int)(uVar56 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar53) = 0x11;
        uVar50 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar53) =
             uVar50 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar50);
        *(ulonglong *)(lVar48 + 0x28) = uVar56 + 1;
      }
      lVar47 = FUN_1401a9cc0();
      local_c0 = CONCAT71(local_c0._1_7_,*(byte *)(lVar47 + 0x288));
      if ((*(byte *)(lVar47 + 0x288) & 1) == 0) {
        local_b8 = 0;
      }
      else {
        lVar47 = FUN_1401a9cc0();
        lVar47 = *(longlong *)(lVar47 + 0x290);
        lVar49 = FUN_1401a9e60();
        uVar56 = *(ulonglong *)(lVar49 + 0x28);
        lVar48 = lVar49;
        if ((uVar56 & 0xffff) == 0) {
          lVar48 = FUN_1400637c0(lVar49,uVar56);
        }
        lVar4 = *(longlong *)(lVar49 + 0x48);
        uVar53 = (ulonglong)(uint)((int)(uVar56 & 0xffff) << 5);
        *(undefined1 *)(lVar4 + uVar53) = 0xf;
        uVar50 = rdtsc();
        *(ulonglong *)(lVar4 + 1 + uVar53) =
             uVar50 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar48 >> 0x20),(int)uVar50);
        *(undefined ***)(lVar4 + 9 + uVar53) = &PTR_s_WR_Point_Shadow_Maps_140df06f0;
        *(ulonglong *)(lVar49 + 0x28) = uVar56 + 1;
        local_b8 = lVar47;
      }
      FUN_1401a3690(local_138,*param_1,"Point Shadow Maps",0x149,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/world_renderer.cpp",
                    "gfx_wr_populate_queue");
      plVar52 = local_d8;
      local_e0 = (float *)(param_1 + 0x106);
      for (uVar54 = 0; uVar54 < *(uint *)(param_1 + 0x105); uVar54 = uVar54 + 1) {
        uVar46 = FUN_1404d46f0(local_150,param_1 + (ulonglong)uVar54 * 2 + 0x1e06,
                               -(uint)(param_1[(ulonglong)uVar54 + 0x1e0e] == 0) |
                               (uint)param_1[(ulonglong)uVar54 + 0x1e0e]);
        if (uVar46 != 0) {
          uVar62 = 1;
          FUN_1401a3690(local_1a0,*param_1,"Point Shadow Upload Draws",0x156,
                        "/opt/actions-runner/_work/Platform/Platform/graphics/world_renderer.cpp",
                        "gfx_wr_populate_queue");
          (**(code **)(*plVar52 + 0x80))
                    (plVar52,param_1[0x32],param_1[0x26],(ulonglong)uVar46 * 0x14,0);
          FUN_1401a43a0(local_180);
          FUN_1401a44e0(local_1a0);
          point_shadow_face_draw
                    (param_1[0x101],plVar52,uVar54,local_e0 + (ulonglong)(uVar54 * 6) * 0x10,
                     param_1 + (ulonglong)uVar54 * 2 + 0x1e06,CONCAT44(uVar62,uVar46),param_1[0x32],
                     param_1[0x13],*(undefined8 *)(local_d0 + 0xb0),param_1[0x28],
                     *(undefined8 *)(local_d0 + 0xb8));
        }
      }
      FUN_1401a43a0(local_118);
      FUN_1401a44e0(local_138);
      if (((local_c0 & 1) != 0) &&
         (lVar47 = FUN_1401a9cc0(), *(longlong *)(lVar47 + 0x290) == local_b8)) {
        lVar48 = FUN_1401a9e60();
        uVar56 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar56 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar56);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar53 = (ulonglong)(uint)((int)(uVar56 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar53) = 0x11;
        uVar50 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar53) =
             uVar50 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar50);
        *(ulonglong *)(lVar48 + 0x28) = uVar56 + 1;
      }
      lVar47 = FUN_1401a9cc0();
      local_d8 = (longlong *)CONCAT71(local_d8._1_7_,*(byte *)(lVar47 + 0x288));
      if ((*(byte *)(lVar47 + 0x288) & 1) == 0) {
        local_d0 = 0;
      }
      else {
        lVar47 = FUN_1401a9cc0();
        lVar47 = *(longlong *)(lVar47 + 0x290);
        lVar49 = FUN_1401a9e60();
        uVar56 = *(ulonglong *)(lVar49 + 0x28);
        lVar48 = lVar49;
        if ((uVar56 & 0xffff) == 0) {
          lVar48 = FUN_1400637c0(lVar49,uVar56);
        }
        lVar4 = *(longlong *)(lVar49 + 0x48);
        uVar53 = (ulonglong)(uint)((int)(uVar56 & 0xffff) << 5);
        *(undefined1 *)(lVar4 + uVar53) = 0xf;
        uVar50 = rdtsc();
        *(ulonglong *)(lVar4 + 1 + uVar53) =
             uVar50 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar48 >> 0x20),(int)uVar50);
        *(undefined ***)(lVar4 + 9 + uVar53) = &PTR_s_WR_Refresh_SRBs_140df0710;
        *(ulonglong *)(lVar49 + 0x28) = uVar56 + 1;
        local_d0 = lVar47;
      }
      FUN_1404cf8f0(param_1);
      if ((((ulonglong)local_d8 & 1) != 0) &&
         (lVar47 = FUN_1401a9cc0(), *(longlong *)(lVar47 + 0x290) == local_d0)) {
        lVar48 = FUN_1401a9e60();
        uVar56 = *(ulonglong *)(lVar48 + 0x28);
        lVar47 = lVar48;
        if ((uVar56 & 0xffff) == 0) {
          lVar47 = FUN_1400637c0(lVar48,uVar56);
        }
        lVar49 = *(longlong *)(lVar48 + 0x48);
        uVar53 = (ulonglong)(uint)((int)(uVar56 & 0xffff) << 5);
        *(undefined1 *)(lVar49 + uVar53) = 0x11;
        uVar50 = rdtsc();
        *(ulonglong *)(lVar49 + 1 + uVar53) =
             uVar50 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar50);
        *(ulonglong *)(lVar48 + 0x28) = uVar56 + 1;
      }
      FUN_1404d17c0(param_1,local_158,*(undefined4 *)((longlong)param_1 + 0xf35c),param_1[0x38],
                    param_1[0x39]);
    }
  }
  if (((local_c1 & 1) != 0) &&
     (lVar47 = FUN_1401a9cc0(), *(longlong *)(lVar47 + 0x290) == local_148)) {
    lVar48 = FUN_1401a9e60();
    uVar56 = *(ulonglong *)(lVar48 + 0x28);
    lVar47 = lVar48;
    if ((uVar56 & 0xffff) == 0) {
      lVar47 = FUN_1400637c0(lVar48,uVar56);
    }
    lVar49 = *(longlong *)(lVar48 + 0x48);
    uVar53 = (ulonglong)(uint)((int)(uVar56 & 0xffff) << 5);
    *(undefined1 *)(lVar49 + uVar53) = 0x11;
    uVar50 = rdtsc();
    *(ulonglong *)(lVar49 + 1 + uVar53) =
         uVar50 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar47 >> 0x20),(int)uVar50);
    *(ulonglong *)(lVar48 + 0x28) = uVar56 + 1;
  }
  return;
}

