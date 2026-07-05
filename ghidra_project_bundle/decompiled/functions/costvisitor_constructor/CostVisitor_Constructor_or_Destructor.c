/**
 * Function: CostVisitor_Constructor_or_Destructor
 * Address:  1407b3690
 * Signature: undefined8 __fastcall CostVisitor_Constructor_or_Destructor(undefined8 * param_1, longlong param_2, ulonglong param_3, undefined8 param_4, undefined8 param_5)
 * Body size: 192 bytes
 */


undefined8
Luau::Compile::CostVisitor::CostVisitor_Constructor_or_Destructor
          (undefined8 *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  CostVisitor_vftable *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70 [5];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_88 = &vftable;
  local_78 = param_5;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  local_48 = 0;
  uStack_40 = 0;
  uVar3 = 7;
  if (param_3 < 7) {
    uVar3 = param_3;
  }
  uVar4 = 0;
  local_80 = param_4;
  if (uVar3 != 0) {
    do {
      plVar2 = (longlong *)FUN_14078e300(local_70,param_2 + uVar4 * 8);
      *plVar2 = 0xff00L << ((char)uVar4 * '\b' & 0x3fU);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  (**(code **)*param_1)(param_1,&local_88);
  uVar1 = local_48;
  local_88 = &vftable;
  if (local_70[0] != 0) {
    FUN_140b68ba8();
  }
  return uVar1;
}

