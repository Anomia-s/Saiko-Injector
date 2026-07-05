/**
 * Function: ldv_gfx_scenerenderer_executetransparencyandg
 * Address:  1401a3930
 * Signature: undefined ldv_gfx_scenerenderer_executetransparencyandg(void)
 * Body size: 950 bytes
 */


void ldv_gfx_scenerenderer_executetransparencyandg(char *param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  uint local_a8 [8];
  undefined1 local_88 [40];
  longlong local_60;
  longlong local_58;
  byte local_4a;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar8 = FUN_1401a9cc0();
  bVar12 = *(byte *)(lVar8 + 0x288);
  if ((bVar12 & 1) == 0) {
    local_60 = 0;
    cVar1 = *param_1;
  }
  else {
    lVar8 = FUN_1401a9cc0();
    local_60 = *(longlong *)(lVar8 + 0x290);
    lVar9 = FUN_1401a9e60();
    uVar2 = *(ulonglong *)(lVar9 + 0x28);
    lVar8 = lVar9;
    if ((uVar2 & 0xffff) == 0) {
      lVar8 = FUN_1400637c0(lVar9,uVar2);
    }
    lVar10 = *(longlong *)(lVar9 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar2 & 0xffff) << 5);
    *(undefined1 *)(lVar10 + uVar11) = 0xf;
    uVar4 = rdtsc();
    *(ulonglong *)(lVar10 + 1 + uVar11) =
         uVar4 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar4);
    *(undefined ***)(lVar10 + 9 + uVar11) = &PTR_s_SceneRenderer_Transparency___GTA_140def448;
    *(ulonglong *)(lVar9 + 0x28) = uVar2 + 1;
    cVar1 = *param_1;
  }
  if (cVar1 == '\x01') {
    local_a8[0] = 0;
    local_4a = bVar12;
    FUN_140220510(*(undefined8 *)(param_1 + 8),local_a8,0);
    uVar5 = local_a8[0];
    local_a8[0] = 0;
    FUN_140220510(*(undefined8 *)(param_1 + 8),0,local_a8);
    uVar6 = local_a8[0];
    if (local_a8[0] != 0 && uVar5 != 0) {
      lVar8 = FUN_1401a9cc0();
      local_49 = *(byte *)(lVar8 + 0x288);
      if ((local_49 & 1) == 0) {
        local_58 = 0;
      }
      else {
        lVar8 = FUN_1401a9cc0();
        local_58 = *(longlong *)(lVar8 + 0x290);
        lVar9 = FUN_1401a9e60();
        uVar2 = *(ulonglong *)(lVar9 + 0x28);
        lVar8 = lVar9;
        if ((uVar2 & 0xffff) == 0) {
          lVar8 = FUN_1400637c0(lVar9,uVar2);
        }
        lVar10 = *(longlong *)(lVar9 + 0x48);
        uVar11 = (ulonglong)(uint)((int)(uVar2 & 0xffff) << 5);
        *(undefined1 *)(lVar10 + uVar11) = 0xf;
        uVar4 = rdtsc();
        *(ulonglong *)(lVar10 + 1 + uVar11) =
             uVar4 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar4);
        *(undefined ***)(lVar10 + 9 + uVar11) = &PTR_s_SceneRenderer_GTAO_140def468;
        *(ulonglong *)(lVar9 + 0x28) = uVar2 + 1;
      }
      FUN_1401a3690(local_a8,*(undefined8 *)(param_1 + 8),"GTAO",0x12a,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/intern/scene_renderer.cpp"
                    ,"ldv::gfx::SceneRenderer::ExecuteTransparencyAndGTAO");
      uVar7 = FUN_1401c05c0(param_1 + 0x6b0);
      FUN_1404ce0b0(param_1 + 0xfd40,param_2,(float)uVar5 / (float)uVar6,uVar7);
      FUN_1401a43a0(local_88);
      FUN_1401a44e0(local_a8);
      if (((local_49 & 1) != 0) &&
         (lVar8 = FUN_1401a9cc0(), *(longlong *)(lVar8 + 0x290) == local_58)) {
        lVar9 = FUN_1401a9e60();
        uVar2 = *(ulonglong *)(lVar9 + 0x28);
        lVar8 = lVar9;
        if ((uVar2 & 0xffff) == 0) {
          lVar8 = FUN_1400637c0(lVar9,uVar2);
        }
        lVar10 = *(longlong *)(lVar9 + 0x48);
        uVar11 = (ulonglong)(uint)((int)(uVar2 & 0xffff) << 5);
        *(undefined1 *)(lVar10 + uVar11) = 0x11;
        uVar4 = rdtsc();
        *(ulonglong *)(lVar10 + 1 + uVar11) =
             uVar4 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar4);
        *(ulonglong *)(lVar9 + 0x28) = uVar2 + 1;
      }
    }
    lVar8 = FUN_1401a9cc0();
    local_49 = *(byte *)(lVar8 + 0x288);
    if ((local_49 & 1) == 0) {
      local_58 = 0;
    }
    else {
      lVar8 = FUN_1401a9cc0();
      lVar8 = *(longlong *)(lVar8 + 0x290);
      lVar10 = FUN_1401a9e60();
      uVar2 = *(ulonglong *)(lVar10 + 0x28);
      lVar9 = lVar10;
      if ((uVar2 & 0xffff) == 0) {
        lVar9 = FUN_1400637c0(lVar10,uVar2);
      }
      lVar3 = *(longlong *)(lVar10 + 0x48);
      uVar11 = (ulonglong)(uint)((int)(uVar2 & 0xffff) << 5);
      *(undefined1 *)(lVar3 + uVar11) = 0xf;
      uVar4 = rdtsc();
      *(ulonglong *)(lVar3 + 1 + uVar11) =
           uVar4 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar4);
      *(undefined ***)(lVar3 + 9 + uVar11) = &PTR_s_SceneRenderer_Transparency_140def488;
      *(ulonglong *)(lVar10 + 0x28) = uVar2 + 1;
      local_58 = lVar8;
    }
    wr_upload_transparent_draws(param_1 + 0x6b0);
    bVar12 = local_4a;
    if (((local_49 & 1) != 0) && (lVar8 = FUN_1401a9cc0(), *(longlong *)(lVar8 + 0x290) == local_58)
       ) {
      lVar9 = FUN_1401a9e60();
      uVar2 = *(ulonglong *)(lVar9 + 0x28);
      lVar8 = lVar9;
      if ((uVar2 & 0xffff) == 0) {
        lVar8 = FUN_1400637c0(lVar9,uVar2);
      }
      lVar10 = *(longlong *)(lVar9 + 0x48);
      uVar11 = (ulonglong)(uint)((int)(uVar2 & 0xffff) << 5);
      *(undefined1 *)(lVar10 + uVar11) = 0x11;
      uVar4 = rdtsc();
      *(ulonglong *)(lVar10 + 1 + uVar11) =
           uVar4 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar4);
      *(ulonglong *)(lVar9 + 0x28) = uVar2 + 1;
    }
  }
  if (((bVar12 & 1) != 0) && (lVar8 = FUN_1401a9cc0(), *(longlong *)(lVar8 + 0x290) == local_60)) {
    lVar9 = FUN_1401a9e60();
    uVar2 = *(ulonglong *)(lVar9 + 0x28);
    lVar8 = lVar9;
    if ((uVar2 & 0xffff) == 0) {
      lVar8 = FUN_1400637c0(lVar9,uVar2);
    }
    lVar10 = *(longlong *)(lVar9 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar2 & 0xffff) << 5);
    *(undefined1 *)(lVar10 + uVar11) = 0x11;
    uVar4 = rdtsc();
    *(ulonglong *)(lVar10 + 1 + uVar11) =
         uVar4 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar4);
    *(ulonglong *)(lVar9 + 0x28) = uVar2 + 1;
  }
  return;
}

