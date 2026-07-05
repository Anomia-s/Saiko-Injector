/**
 * Function: GraphicsPipeline_Constructor_or_Destructor
 * Address:  1407055b0
 * Signature: void __fastcall GraphicsPipeline_Constructor_or_Destructor(undefined8 * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Body size: 370 bytes
 */


void nvrhi::vulkan::GraphicsPipeline::GraphicsPipeline_Constructor_or_Destructor
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = &vftable;
  if (param_1[0x39] != 0) {
    (*DAT_1416b6f38)(*(undefined8 *)(param_1[0x3b] + 0x10),param_1[0x39],
                     *(undefined8 *)(param_1[0x3b] + 0x18),param_4,0xfffffffffffffffe);
    param_1[0x39] = 0;
  }
  if (param_1[0x38] != 0) {
    (*DAT_1416b6f48)(*(undefined8 *)(param_1[0x3b] + 0x10),param_1[0x38],
                     *(undefined8 *)(param_1[0x3b] + 0x18));
    param_1[0x38] = 0;
  }
  plVar1 = (longlong *)param_1[0x31];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x31] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x30];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x30] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x2f];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x2f] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x2e];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x2e] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x2d];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x2d] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x2c];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x2c] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x2b];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x2b] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x2a];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x2a] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140197d40(param_1 + 2);
  return;
}

