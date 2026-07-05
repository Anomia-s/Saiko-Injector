/**
 * Function: RootSignature_Constructor_or_Destructor
 * Address:  140746970
 * Signature: void __fastcall RootSignature_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 467 bytes
 */


void nvrhi::d3d12::RootSignature::RootSignature_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = &vftable;
  lVar1 = param_1[0x16];
  lVar4 = (((ulonglong)*(byte *)((longlong)param_1 + 0x17) ^
           ((ulonglong)*(byte *)((longlong)param_1 + 0x16) ^
           ((ulonglong)*(byte *)((longlong)param_1 + 0x15) ^
           ((ulonglong)*(byte *)((longlong)param_1 + 0x14) ^
           ((ulonglong)*(byte *)((longlong)param_1 + 0x13) ^
           ((ulonglong)*(byte *)((longlong)param_1 + 0x12) ^
           ((ulonglong)*(byte *)((longlong)param_1 + 0x11) ^
           ((ulonglong)*(byte *)(param_1 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3
           ) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
           0x100000001b3 & *(ulonglong *)(lVar1 + 0x3b0)) * 0x10;
  lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x398) + 8 + lVar4);
  if (lVar3 != *(longlong *)(lVar1 + 0x388)) {
    if (param_1[2] != *(longlong *)(lVar3 + 0x10)) {
      do {
        if (lVar3 == *(longlong *)(*(longlong *)(lVar1 + 0x398) + lVar4)) goto LAB_140746a60;
        lVar3 = *(longlong *)(lVar3 + 8);
      } while (param_1[2] != *(longlong *)(lVar3 + 0x10));
    }
    if (lVar3 != *(longlong *)(lVar1 + 0x388)) {
      FUN_140184290(lVar1 + 0x380);
    }
  }
LAB_140746a60:
  plVar2 = (longlong *)param_1[0x14];
  if (plVar2 != (longlong *)0x0) {
    param_1[0x14] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = (longlong *)param_1[0x11];
  if (plVar2 != (longlong *)0x0) {
    param_1[0x11] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = (longlong *)param_1[0xf];
  if (plVar2 != (longlong *)0x0) {
    param_1[0xf] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    param_1[0xd] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = (longlong *)param_1[0xb];
  if (plVar2 != (longlong *)0x0) {
    param_1[0xb] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = (longlong *)param_1[9];
  if (plVar2 != (longlong *)0x0) {
    param_1[9] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = (longlong *)param_1[7];
  if (plVar2 != (longlong *)0x0) {
    param_1[7] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    param_1[5] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    param_1[3] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

