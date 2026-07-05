/**
 * Function: video_subsystem_not_initialized
 * Address:  140101e40
 * Signature: undefined video_subsystem_not_initialized(void)
 * Body size: 435 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** video_subsystem_not_initialized(undefined4 param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  
  lVar5 = FUN_140144860();
  if (lVar5 == 0) {
    pcVar7 = "Video subsystem not initialized";
LAB_140101f5a:
    FUN_1400fbed0(pcVar7);
    return (undefined **)0x0;
  }
  bVar2 = FUN_1401503a0(param_1,"SDL.gpu.device.create.shaders.private",0);
  cVar3 = FUN_1401503a0(param_1,"SDL.gpu.device.create.shaders.spirv",0);
  uVar1 = bVar2 + 2;
  if (cVar3 == '\0') {
    uVar1 = (uint)bVar2;
  }
  cVar3 = FUN_1401503a0(param_1,"SDL.gpu.device.create.shaders.dxbc",0);
  uVar8 = uVar1 + 4;
  if (cVar3 == '\0') {
    uVar8 = uVar1;
  }
  cVar3 = FUN_1401503a0(param_1,"SDL.gpu.device.create.shaders.dxil",0);
  uVar1 = uVar8 + 8;
  if (cVar3 == '\0') {
    uVar1 = uVar8;
  }
  cVar3 = FUN_1401503a0(param_1,"SDL.gpu.device.create.shaders.msl",0);
  uVar8 = uVar1 | 0x10;
  if (cVar3 == '\0') {
    uVar8 = uVar1;
  }
  cVar3 = FUN_1401503a0(param_1,"SDL.gpu.device.create.shaders.metallib",0);
  uVar1 = uVar8 | 0x20;
  if (cVar3 == '\0') {
    uVar1 = uVar8;
  }
  lVar6 = FUN_140110550("SDL_GPU_DRIVER");
  if ((lVar6 == 0) && (lVar6 = FUN_14014ffe0(param_1,"SDL.gpu.device.create.name",0), lVar6 == 0)) {
    if (((_DAT_141503570 & uVar1) != 0) &&
       (cVar3 = (*(code *)PTR_FUN_141503578)(lVar5), cVar3 != '\0')) {
LAB_140101fc0:
      return &PTR_s_vulkan_141341e4c_0x12_141503568;
    }
    if (((_DAT_1415035f8 & uVar1) == 0) ||
       (cVar3 = (*(code *)PTR_d3d12_could_not_create_dxgifactory_141503600)(lVar5), cVar3 == '\0'))
    {
      pcVar7 = "No supported SDL_GPU backend found!";
      goto LAB_140101f5a;
    }
    goto LAB_140101fde;
  }
  iVar4 = FUN_1400fd210(lVar6,PTR_s_vulkan_141341e4c_0x12_141503568);
  if (iVar4 == 0) {
    if ((_DAT_141503570 & uVar1) != 0) {
      cVar3 = (*(code *)PTR_FUN_141503578)(lVar5);
      if (cVar3 != '\0') goto LAB_140101fc0;
      goto LAB_140101f37;
    }
LAB_140101f8f:
    pcVar7 = "Required shader format for backend %s not provided!";
  }
  else {
LAB_140101f37:
    iVar4 = FUN_1400fd210(lVar6,PTR_s_direct3d12_1415035f0);
    if (iVar4 == 0) {
      if ((_DAT_1415035f8 & uVar1) == 0) goto LAB_140101f8f;
      cVar3 = (*(code *)PTR_d3d12_could_not_create_dxgifactory_141503600)(lVar5);
      if (cVar3 != '\0') {
LAB_140101fde:
        return &PTR_s_direct3d12_1415035f0;
      }
    }
    pcVar7 = "SDL_HINT_GPU_DRIVER %s unsupported!";
  }
  FUN_1400fbed0(pcVar7,lVar6);
  return (undefined **)0x0;
}

