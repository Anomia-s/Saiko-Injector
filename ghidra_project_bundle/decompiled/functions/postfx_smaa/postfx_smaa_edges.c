/**
 * Function: postfx_smaa_edges
 * Address:  1404ba4c0
 * Signature: undefined postfx_smaa_edges(void)
 * Body size: 698 bytes
 */


undefined8 postfx_smaa_edges(longlong *param_1,uint param_2,ulonglong param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)param_1[0x11];
  uVar3 = *(undefined8 *)(*param_1 + 0x18);
  *(uint *)(param_1 + 2) = param_2;
  *(int *)((longlong)param_1 + 0x14) = (int)param_3;
  *(uint *)(param_1 + 3) = (param_2 >> 1) + (uint)(param_2 >> 1 == 0);
  *(uint *)((longlong)param_1 + 0x1c) =
       ((uint)(param_3 >> 1) & 0x7fffffff) + (uint)((param_3 >> 1 & 0x7fffffff) == 0);
  param_1[0x11] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x13];
  param_1[0x13] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x15];
  param_1[0x15] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x16];
  param_1[0x16] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x17];
  param_1[0x17] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x18];
  param_1[0x18] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x19];
  param_1[0x19] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x1a];
  param_1[0x1a] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x1b];
  param_1[0x1b] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  cVar2 = FUN_1404c0fc0(uVar3,"PostFX Bloom A",(int)param_1[3],
                        *(undefined4 *)((longlong)param_1 + 0x1c),0x26,param_1 + 0x11);
  if ((((cVar2 != '\0') &&
       (cVar2 = FUN_1404c0fc0(uVar3,"PostFX Bloom B",(int)param_1[3],
                              *(undefined4 *)((longlong)param_1 + 0x1c),0x26,param_1 + 0x13),
       cVar2 != '\0')) &&
      (cVar2 = FUN_1404c0fc0(uVar3,"PostFX LDR A",param_2,param_3 & 0xffffffff,0x13,param_1 + 0x15),
      cVar2 != '\0')) &&
     ((cVar2 = FUN_1404c0fc0(uVar3,"PostFX LDR B",param_2,param_3 & 0xffffffff,0x13,param_1 + 0x17),
      cVar2 != '\0' &&
      (cVar2 = FUN_1404c0fc0(uVar3,"PostFX SMAA Edges",param_2,param_3 & 0xffffffff,7,param_1 + 0x19
                            ), cVar2 != '\0')))) {
    uVar3 = FUN_1404c0fc0(uVar3,"PostFX SMAA Blend",param_2,param_3 & 0xffffffff,0x13,param_1 + 0x1b
                         );
    return uVar3;
  }
  return 0;
}

