/**
 * Function: RayTracingPipeline_Constructor_or_Destructor
 * Address:  140740e80
 * Signature: void __fastcall RayTracingPipeline_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 273 bytes
 */


void nvrhi::d3d12::RayTracingPipeline::RayTracingPipeline_Constructor_or_Destructor
               (undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = &vftable;
  lVar1 = param_1[0x22];
  if (lVar1 != 0) {
    uVar4 = param_1[0x24] - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar3,uVar4);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
  }
  FUN_140740db0(param_1 + 0x20);
  plVar2 = (longlong *)param_1[0x1e];
  if (plVar2 != (longlong *)0x0) {
    param_1[0x1e] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = (longlong *)param_1[0x1d];
  if (plVar2 != (longlong *)0x0) {
    param_1[0x1d] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = (longlong *)param_1[0x1c];
  if (plVar2 != (longlong *)0x0) {
    param_1[0x1c] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  FUN_1407408f0(param_1 + 0x14);
  FUN_140713040(param_1 + 2);
  return;
}

