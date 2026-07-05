/**
 * Function: wr_upload_transparent_draws
 * Address:  1401c0690
 * Signature: undefined wr_upload_transparent_draws(void)
 * Body size: 1573 bytes
 */


void wr_upload_transparent_draws(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 local_e8 [32];
  undefined1 local_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  longlong local_60;
  longlong local_58;
  byte local_4a;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar6 = FUN_1401a9cc0();
  local_4a = *(byte *)(lVar6 + 0x288);
  if ((local_4a & 1) == 0) {
    local_60 = 0;
    lVar6 = param_1[0x4a];
  }
  else {
    lVar6 = FUN_1401a9cc0();
    local_60 = *(longlong *)(lVar6 + 0x290);
    lVar7 = FUN_1401a9e60();
    uVar1 = *(ulonglong *)(lVar7 + 0x28);
    lVar6 = lVar7;
    if ((uVar1 & 0xffff) == 0) {
      lVar6 = FUN_1400637c0(lVar7,uVar1);
    }
    lVar9 = *(longlong *)(lVar7 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar1 & 0xffff) << 5);
    *(undefined1 *)(lVar9 + uVar11) = 0xf;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar9 + 1 + uVar11) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar6 >> 0x20),(int)uVar3);
    *(undefined ***)(lVar9 + 9 + uVar11) = &PTR_s_WR_Transparency_140df0750;
    *(ulonglong *)(lVar7 + 0x28) = uVar1 + 1;
    lVar6 = param_1[0x4a];
  }
  if ((((lVar6 != 0) && (cVar4 = FUN_1404f2db0(lVar6), cVar4 != '\0')) &&
      (uVar5 = FUN_140220660(*param_1), uVar5 < 2)) && (*(int *)(param_1 + 0x27) != 0)) {
    lVar7 = FUN_1401a9cc0();
    local_49 = *(byte *)(lVar7 + 0x288);
    if ((local_49 & 1) == 0) {
      local_58 = 0;
    }
    else {
      lVar7 = FUN_1401a9cc0();
      lVar7 = *(longlong *)(lVar7 + 0x290);
      lVar8 = FUN_1401a9e60();
      uVar1 = *(ulonglong *)(lVar8 + 0x28);
      lVar9 = lVar8;
      if ((uVar1 & 0xffff) == 0) {
        lVar9 = FUN_1400637c0(lVar8,uVar1);
      }
      lVar2 = *(longlong *)(lVar8 + 0x48);
      uVar11 = (ulonglong)(uint)((int)(uVar1 & 0xffff) << 5);
      *(undefined1 *)(lVar2 + uVar11) = 0xf;
      uVar3 = rdtsc();
      *(ulonglong *)(lVar2 + 1 + uVar11) =
           uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
      *(undefined ***)(lVar2 + 9 + uVar11) = &PTR_s_WR_Build_Transparent_Draws_140df0770;
      *(ulonglong *)(lVar8 + 0x28) = uVar1 + 1;
      local_58 = lVar7;
    }
    uVar5 = FUN_1404d4910(param_1 + 2);
    if (((local_49 & 1) != 0) && (lVar7 = FUN_1401a9cc0(), *(longlong *)(lVar7 + 0x290) == local_58)
       ) {
      lVar9 = FUN_1401a9e60();
      uVar1 = *(ulonglong *)(lVar9 + 0x28);
      lVar7 = lVar9;
      if ((uVar1 & 0xffff) == 0) {
        lVar7 = FUN_1400637c0(lVar9,uVar1);
      }
      lVar8 = *(longlong *)(lVar9 + 0x48);
      uVar11 = (ulonglong)(uint)((int)(uVar1 & 0xffff) << 5);
      *(undefined1 *)(lVar8 + uVar11) = 0x11;
      uVar3 = rdtsc();
      *(ulonglong *)(lVar8 + 1 + uVar11) =
           uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar7 >> 0x20),(int)uVar3);
      *(ulonglong *)(lVar9 + 0x28) = uVar1 + 1;
    }
    if ((uVar5 != 0) && (plVar10 = (longlong *)FUN_140220610(*param_1), plVar10 != (longlong *)0x0))
    {
      lVar7 = FUN_1401a9cc0();
      local_49 = *(byte *)(lVar7 + 0x288);
      if ((local_49 & 1) == 0) {
        local_58 = 0;
      }
      else {
        lVar7 = FUN_1401a9cc0();
        local_58 = *(longlong *)(lVar7 + 0x290);
        lVar9 = FUN_1401a9e60();
        uVar1 = *(ulonglong *)(lVar9 + 0x28);
        lVar7 = lVar9;
        if ((uVar1 & 0xffff) == 0) {
          lVar7 = FUN_1400637c0(lVar9,uVar1);
        }
        lVar8 = *(longlong *)(lVar9 + 0x48);
        uVar11 = (ulonglong)(uint)((int)(uVar1 & 0xffff) << 5);
        *(undefined1 *)(lVar8 + uVar11) = 0xf;
        uVar3 = rdtsc();
        *(ulonglong *)(lVar8 + 1 + uVar11) =
             uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar7 >> 0x20),(int)uVar3);
        *(undefined ***)(lVar8 + 9 + uVar11) = &PTR_s_WR_Upload_Transparent_Draws_140df0790;
        *(ulonglong *)(lVar9 + 0x28) = uVar1 + 1;
      }
      FUN_1401a3690(local_e8,*param_1,"WR Upload Transparent Draws",0x1b3,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/world_renderer.cpp",
                    "gfx_wr_execute_transparency");
      (**(code **)(*plVar10 + 0x80))(plVar10,param_1[0x32],param_1[0x26],(ulonglong)uVar5 * 0x14,0);
      FUN_1401a43a0(local_c8);
      FUN_1401a44e0(local_e8);
      if (((local_49 & 1) != 0) &&
         (lVar7 = FUN_1401a9cc0(), *(longlong *)(lVar7 + 0x290) == local_58)) {
        lVar9 = FUN_1401a9e60();
        uVar1 = *(ulonglong *)(lVar9 + 0x28);
        lVar7 = lVar9;
        if ((uVar1 & 0xffff) == 0) {
          lVar7 = FUN_1400637c0(lVar9,uVar1);
        }
        lVar8 = *(longlong *)(lVar9 + 0x48);
        uVar11 = (ulonglong)(uint)((int)(uVar1 & 0xffff) << 5);
        *(undefined1 *)(lVar8 + uVar11) = 0x11;
        uVar3 = rdtsc();
        *(ulonglong *)(lVar8 + 1 + uVar11) =
             uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar7 >> 0x20),(int)uVar3);
        *(ulonglong *)(lVar9 + 0x28) = uVar1 + 1;
      }
      lVar7 = FUN_1401a9cc0();
      local_49 = *(byte *)(lVar7 + 0x288);
      if ((local_49 & 1) == 0) {
        local_58 = 0;
      }
      else {
        lVar7 = FUN_1401a9cc0();
        local_58 = *(longlong *)(lVar7 + 0x290);
        lVar9 = FUN_1401a9e60();
        uVar1 = *(ulonglong *)(lVar9 + 0x28);
        lVar7 = lVar9;
        if ((uVar1 & 0xffff) == 0) {
          lVar7 = FUN_1400637c0(lVar9,uVar1);
        }
        lVar8 = *(longlong *)(lVar9 + 0x48);
        uVar11 = (ulonglong)(uint)((int)(uVar1 & 0xffff) << 5);
        *(undefined1 *)(lVar8 + uVar11) = 0xf;
        uVar3 = rdtsc();
        *(ulonglong *)(lVar8 + 1 + uVar11) =
             uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar7 >> 0x20),(int)uVar3);
        *(undefined ***)(lVar8 + 9 + uVar11) = &PTR_s_WR_Refresh_SRBs_140df07b0;
        *(ulonglong *)(lVar9 + 0x28) = uVar1 + 1;
      }
      FUN_1404cf8f0(param_1);
      if (((local_49 & 1) != 0) &&
         (lVar7 = FUN_1401a9cc0(), *(longlong *)(lVar7 + 0x290) == local_58)) {
        lVar9 = FUN_1401a9e60();
        uVar1 = *(ulonglong *)(lVar9 + 0x28);
        lVar7 = lVar9;
        if ((uVar1 & 0xffff) == 0) {
          lVar7 = FUN_1400637c0(lVar9,uVar1);
        }
        lVar8 = *(longlong *)(lVar9 + 0x48);
        uVar11 = (ulonglong)(uint)((int)(uVar1 & 0xffff) << 5);
        *(undefined1 *)(lVar8 + uVar11) = 0x11;
        uVar3 = rdtsc();
        *(ulonglong *)(lVar8 + 1 + uVar11) =
             uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar7 >> 0x20),(int)uVar3);
        *(ulonglong *)(lVar9 + 0x28) = uVar1 + 1;
      }
      local_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      local_68 = 0;
      local_a0 = param_1[0x32];
      local_98 = *(undefined8 *)(param_1[1] + 0xb0);
      local_90 = param_1[0x28];
      local_88 = *(undefined8 *)(param_1[1] + 0xb8);
      uStack_80 = FUN_1402205a0(*param_1);
      local_78 = FUN_1402205f0(*param_1);
      uStack_70 = FUN_140220600(*param_1);
      local_68 = uVar5;
      lVar7 = FUN_1401a9cc0();
      local_49 = *(byte *)(lVar7 + 0x288);
      if ((local_49 & 1) == 0) {
        local_58 = 0;
      }
      else {
        lVar7 = FUN_1401a9cc0();
        local_58 = *(longlong *)(lVar7 + 0x290);
        lVar9 = FUN_1401a9e60();
        uVar1 = *(ulonglong *)(lVar9 + 0x28);
        lVar7 = lVar9;
        if ((uVar1 & 0xffff) == 0) {
          lVar7 = FUN_1400637c0(lVar9,uVar1);
        }
        lVar8 = *(longlong *)(lVar9 + 0x48);
        uVar11 = (ulonglong)(uint)((int)(uVar1 & 0xffff) << 5);
        *(undefined1 *)(lVar8 + uVar11) = 0xf;
        uVar3 = rdtsc();
        *(ulonglong *)(lVar8 + 1 + uVar11) =
             uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar7 >> 0x20),(int)uVar3);
        *(undefined ***)(lVar8 + 9 + uVar11) = &PTR_s_WR_OIT_Execute_140df07d0;
        *(ulonglong *)(lVar9 + 0x28) = uVar1 + 1;
      }
      FUN_1401a3690(local_e8,*param_1,"Transparency OIT",0x1ca,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/world_renderer.cpp",
                    "gfx_wr_execute_transparency");
      FUN_1404f2060(lVar6,&local_a0);
      FUN_1401a43a0(local_c8);
      FUN_1401a44e0(local_e8);
      if (((local_49 & 1) != 0) &&
         (lVar6 = FUN_1401a9cc0(), *(longlong *)(lVar6 + 0x290) == local_58)) {
        lVar7 = FUN_1401a9e60();
        uVar1 = *(ulonglong *)(lVar7 + 0x28);
        lVar6 = lVar7;
        if ((uVar1 & 0xffff) == 0) {
          lVar6 = FUN_1400637c0(lVar7,uVar1);
        }
        lVar9 = *(longlong *)(lVar7 + 0x48);
        uVar11 = (ulonglong)(uint)((int)(uVar1 & 0xffff) << 5);
        *(undefined1 *)(lVar9 + uVar11) = 0x11;
        uVar3 = rdtsc();
        *(ulonglong *)(lVar9 + 1 + uVar11) =
             uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar6 >> 0x20),(int)uVar3);
        *(ulonglong *)(lVar7 + 0x28) = uVar1 + 1;
      }
    }
  }
  if (((local_4a & 1) != 0) && (lVar6 = FUN_1401a9cc0(), *(longlong *)(lVar6 + 0x290) == local_60))
  {
    lVar7 = FUN_1401a9e60();
    uVar1 = *(ulonglong *)(lVar7 + 0x28);
    lVar6 = lVar7;
    if ((uVar1 & 0xffff) == 0) {
      lVar6 = FUN_1400637c0(lVar7,uVar1);
    }
    lVar9 = *(longlong *)(lVar7 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar1 & 0xffff) << 5);
    *(undefined1 *)(lVar9 + uVar11) = 0x11;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar9 + 1 + uVar11) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar6 >> 0x20),(int)uVar3);
    *(ulonglong *)(lVar7 + 0x28) = uVar1 + 1;
  }
  return;
}

