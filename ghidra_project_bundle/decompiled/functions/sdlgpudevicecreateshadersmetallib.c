/**
 * Function: sdlgpudevicecreateshadersmetallib
 * Address:  140101d10
 * Signature: undefined sdlgpudevicecreateshadersmetallib(void)
 * Body size: 261 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void sdlgpudevicecreateshadersmetallib
               (undefined4 param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  if ((param_2 & 1) != 0) {
    FUN_14014fd20(param_1,"SDL.gpu.device.create.shaders.private",1);
  }
  if ((param_2 & 2) != 0) {
    FUN_14014fd20(param_1,"SDL.gpu.device.create.shaders.spirv",1);
  }
  if ((param_2 & 4) != 0) {
    FUN_14014fd20(param_1,"SDL.gpu.device.create.shaders.dxbc",1);
  }
  if ((param_2 & 8) != 0) {
    FUN_14014fd20(param_1,"SDL.gpu.device.create.shaders.dxil",1);
  }
  if ((param_2 & 0x10) != 0) {
    FUN_14014fd20(param_1,"SDL.gpu.device.create.shaders.msl",1);
  }
  if ((param_2 & 0x20) != 0) {
    FUN_14014fd20(param_1,"SDL.gpu.device.create.shaders.metallib",1);
  }
  FUN_14014fd20(param_1,"SDL.gpu.device.create.debugmode",param_3);
  FUN_14014fbf0(param_1,"SDL.gpu.device.create.name",param_4);
  return;
}

