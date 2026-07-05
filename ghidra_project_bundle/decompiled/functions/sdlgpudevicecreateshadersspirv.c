/**
 * Function: sdlgpudevicecreateshadersspirv
 * Address:  140636430
 * Signature: undefined sdlgpudevicecreateshadersspirv(void)
 * Body size: 61 bytes
 */


void sdlgpudevicecreateshadersspirv(ulonglong param_1)

{
  FUN_14014fd20(param_1,"SDL.gpu.device.create.shaders.spirv",1);
  FUN_14014fd20(param_1 & 0xffffffff,"SDL.gpu.device.create.shaders.dxil",1);
  FUN_14014fd20(param_1 & 0xffffffff,"SDL.gpu.device.create.shaders.msl",0);
  return;
}

