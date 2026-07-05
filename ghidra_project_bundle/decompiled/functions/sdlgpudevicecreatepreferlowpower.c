/**
 * Function: sdlgpudevicecreatepreferlowpower
 * Address:  1401020a0
 * Signature: undefined sdlgpudevicecreatepreferlowpower(void)
 * Body size: 121 bytes
 */


longlong sdlgpudevicecreatepreferlowpower(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar3 = (undefined8 *)video_subsystem_not_initialized();
  if (puVar3 == (undefined8 *)0x0) {
    lVar5 = 0;
  }
  else {
    uVar1 = FUN_1401503a0(param_1,"SDL.gpu.device.create.debugmode",1);
    uVar2 = FUN_1401503a0(param_1,"SDL.gpu.device.create.preferlowpower",0);
    lVar4 = (*(code *)puVar3[3])(uVar1,uVar2,param_1);
    lVar5 = 0;
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x298) = *puVar3;
      *(undefined4 *)(lVar4 + 0x2a0) = *(undefined4 *)(puVar3 + 1);
      *(char *)(lVar4 + 0x2a4) = (char)uVar1;
      lVar5 = lVar4;
    }
  }
  return lVar5;
}

