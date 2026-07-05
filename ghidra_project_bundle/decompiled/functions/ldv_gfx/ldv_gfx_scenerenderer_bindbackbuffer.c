/**
 * Function: ldv_gfx_scenerenderer_bindbackbuffer
 * Address:  1401a3f70
 * Signature: undefined ldv_gfx_scenerenderer_bindbackbuffer(void)
 * Body size: 380 bytes
 */


void ldv_gfx_scenerenderer_bindbackbuffer(char *param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 local_98 [32];
  undefined1 local_78 [40];
  longlong local_50;
  byte local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar6 = FUN_1401a9cc0();
  bVar1 = *(byte *)(lVar6 + 0x288);
  if ((bVar1 & 1) == 0) {
    cVar2 = *param_1;
    lVar6 = 0;
    lVar8 = local_50;
  }
  else {
    lVar6 = FUN_1401a9cc0();
    lVar6 = *(longlong *)(lVar6 + 0x290);
    lVar7 = FUN_1401a9e60();
    uVar3 = *(ulonglong *)(lVar7 + 0x28);
    lVar8 = lVar7;
    if ((uVar3 & 0xffff) == 0) {
      lVar8 = FUN_1400637c0(lVar7,uVar3);
    }
    lVar4 = *(longlong *)(lVar7 + 0x48);
    uVar9 = (ulonglong)(uint)((int)(uVar3 & 0xffff) << 5);
    *(undefined1 *)(lVar4 + uVar9) = 0xf;
    uVar5 = rdtsc();
    *(ulonglong *)(lVar4 + 1 + uVar9) =
         uVar5 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar5);
    *(undefined ***)(lVar4 + 9 + uVar9) = &PTR_s_SceneRenderer_Bind_BackBuffer_140def4a8;
    *(ulonglong *)(lVar7 + 0x28) = uVar3 + 1;
    cVar2 = *param_1;
    lVar8 = local_50;
  }
  local_50 = lVar6;
  lVar6 = local_50;
  if (cVar2 == '\x01') {
    local_41 = bVar1;
    FUN_1401a3690(local_98,*(undefined8 *)(param_1 + 8),"PostFX Bind BackBuffer",0x13d,
                  "/opt/actions-runner/_work/Platform/Platform/graphics/intern/scene_renderer.cpp",
                  "ldv::gfx::SceneRenderer::BindBackBuffer");
    postfx_bloom_extract(param_1 + 0xfec0);
    FUN_1401a43a0(local_78);
    FUN_1401a44e0(local_98);
    lVar6 = local_50;
    lVar8 = local_50;
    bVar1 = local_41;
  }
  local_50 = lVar8;
  if (((bVar1 & 1) != 0) && (lVar8 = FUN_1401a9cc0(), *(longlong *)(lVar8 + 0x290) == lVar6)) {
    lVar8 = FUN_1401a9e60();
    uVar3 = *(ulonglong *)(lVar8 + 0x28);
    lVar6 = lVar8;
    if ((uVar3 & 0xffff) == 0) {
      lVar6 = FUN_1400637c0(lVar8,uVar3);
    }
    lVar7 = *(longlong *)(lVar8 + 0x48);
    uVar9 = (ulonglong)(uint)((int)(uVar3 & 0xffff) << 5);
    *(undefined1 *)(lVar7 + uVar9) = 0x11;
    uVar5 = rdtsc();
    *(ulonglong *)(lVar7 + 1 + uVar9) =
         uVar5 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar6 >> 0x20),(int)uVar5);
    *(ulonglong *)(lVar8 + 0x28) = uVar3 + 1;
  }
  return;
}

