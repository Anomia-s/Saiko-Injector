/**
 * Function: ldv_gfx_scenerenderer_executeatmosphere
 * Address:  1401a3370
 * Signature: undefined ldv_gfx_scenerenderer_executeatmosphere(void)
 * Body size: 537 bytes
 */


void ldv_gfx_scenerenderer_executeatmosphere(char *param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte bVar11;
  uint local_b0 [8];
  undefined1 local_90 [40];
  undefined8 local_68;
  undefined4 local_60 [2];
  longlong local_58;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar7 = FUN_1401a9cc0();
  bVar11 = *(byte *)(lVar7 + 0x288);
  if ((bVar11 & 1) == 0) {
    lVar7 = 0;
    cVar1 = *param_1;
  }
  else {
    lVar7 = FUN_1401a9cc0();
    lVar7 = *(longlong *)(lVar7 + 0x290);
    lVar8 = FUN_1401a9e60();
    uVar2 = *(ulonglong *)(lVar8 + 0x28);
    lVar9 = lVar8;
    if ((uVar2 & 0xffff) == 0) {
      lVar9 = FUN_1400637c0(lVar8,uVar2);
    }
    lVar3 = *(longlong *)(lVar8 + 0x48);
    uVar10 = (ulonglong)(uint)((int)(uVar2 & 0xffff) << 5);
    *(undefined1 *)(lVar3 + uVar10) = 0xf;
    uVar4 = rdtsc();
    *(ulonglong *)(lVar3 + 1 + uVar10) =
         uVar4 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar4);
    *(undefined ***)(lVar3 + 9 + uVar10) = &PTR_s_SceneRenderer_Atmosphere_140def428;
    *(ulonglong *)(lVar8 + 0x28) = uVar2 + 1;
    cVar1 = *param_1;
  }
  if ((cVar1 == '\x01') && (*(longlong *)(param_1 + 8) != 0)) {
    local_b0[0] = 0;
    local_58 = lVar7;
    local_49 = bVar11;
    FUN_140220510(*(longlong *)(param_1 + 8),local_b0,0);
    uVar5 = local_b0[0];
    local_b0[0] = 0;
    FUN_140220510(*(undefined8 *)(param_1 + 8),0,local_b0);
    uVar6 = local_b0[0];
    lVar7 = local_58;
    bVar11 = local_49;
    if (local_b0[0] != 0 && uVar5 != 0) {
      local_60[0] = 0;
      local_68 = 0;
      FUN_1404cf7c0(param_1 + 0x1023c,&local_68,(longlong)&local_68 + 4,local_60);
      FUN_1401a3690(local_b0,*(undefined8 *)(param_1 + 8),"Atmosphere",0x119,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/intern/scene_renderer.cpp"
                    ,"ldv::gfx::SceneRenderer::ExecuteAtmosphere");
      anonymous_namespace_draw_sky(param_1 + 0xfbc8,param_2,(float)uVar5 / (float)uVar6,&local_68);
      FUN_1401a43a0(local_90);
      FUN_1401a44e0(local_b0);
      lVar7 = local_58;
      bVar11 = local_49;
    }
  }
  if (((bVar11 & 1) != 0) && (lVar9 = FUN_1401a9cc0(), *(longlong *)(lVar9 + 0x290) == lVar7)) {
    lVar9 = FUN_1401a9e60();
    uVar2 = *(ulonglong *)(lVar9 + 0x28);
    lVar7 = lVar9;
    if ((uVar2 & 0xffff) == 0) {
      lVar7 = FUN_1400637c0(lVar9,uVar2);
    }
    lVar8 = *(longlong *)(lVar9 + 0x48);
    uVar10 = (ulonglong)(uint)((int)(uVar2 & 0xffff) << 5);
    *(undefined1 *)(lVar8 + uVar10) = 0x11;
    uVar4 = rdtsc();
    *(ulonglong *)(lVar8 + 1 + uVar10) =
         uVar4 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar7 >> 0x20),(int)uVar4);
    *(ulonglong *)(lVar9 + 0x28) = uVar2 + 1;
  }
  return;
}

