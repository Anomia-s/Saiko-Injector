/**
 * Function: ComputePipeline_Constructor_or_Destructor
 * Address:  140707b60
 * Signature: void __fastcall ComputePipeline_Constructor_or_Destructor(undefined8 * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Body size: 346 bytes
 */


void nvrhi::vulkan::ComputePipeline::ComputePipeline_Constructor_or_Destructor
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = &vftable;
  if (param_1[0x1b] != 0) {
    (*DAT_1416b6f38)(*(undefined8 *)(param_1[0x1d] + 0x10),param_1[0x1b],
                     *(undefined8 *)(param_1[0x1d] + 0x18),param_4,0xfffffffffffffffe);
    param_1[0x1b] = 0;
  }
  if (param_1[0x1a] != 0) {
    (*DAT_1416b6f48)(*(undefined8 *)(param_1[0x1d] + 0x10),param_1[0x1a],
                     *(undefined8 *)(param_1[0x1d] + 0x18));
    param_1[0x1a] = 0;
  }
  plVar1 = (longlong *)param_1[0x13];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x13] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x12];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x12] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x11];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x11] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x10];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x10] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0xf];
  if (plVar1 != (longlong *)0x0) {
    param_1[0xf] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0xe];
  if (plVar1 != (longlong *)0x0) {
    param_1[0xe] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    param_1[0xd] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0xc];
  if (plVar1 != (longlong *)0x0) {
    param_1[0xc] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1404c9920(param_1 + 2);
  return;
}

