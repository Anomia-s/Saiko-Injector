/**
 * Function: MeshletPipeline_Constructor_or_Destructor
 * Address:  140709680
 * Signature: void __fastcall MeshletPipeline_Constructor_or_Destructor(undefined8 * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Body size: 370 bytes
 */


void nvrhi::vulkan::MeshletPipeline::MeshletPipeline_Constructor_or_Destructor
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = &vftable;
  if (param_1[0x35] != 0) {
    (*DAT_1416b6f38)(*(undefined8 *)(param_1[0x37] + 0x10),param_1[0x35],
                     *(undefined8 *)(param_1[0x37] + 0x18),param_4,0xfffffffffffffffe);
    param_1[0x35] = 0;
  }
  if (param_1[0x34] != 0) {
    (*DAT_1416b6f48)(*(undefined8 *)(param_1[0x37] + 0x10),param_1[0x34],
                     *(undefined8 *)(param_1[0x37] + 0x18));
    param_1[0x34] = 0;
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
  plVar1 = (longlong *)param_1[0x29];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x29] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x28];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x28] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x27];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x27] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x26];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x26] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140709860(param_1 + 2);
  return;
}

