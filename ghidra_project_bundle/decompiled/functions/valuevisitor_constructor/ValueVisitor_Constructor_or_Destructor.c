/**
 * Function: ValueVisitor_Constructor_or_Destructor
 * Address:  14079f740
 * Signature: void __fastcall ValueVisitor_Constructor_or_Destructor(undefined8 param_1, undefined8 param_2, undefined8 * param_3)
 * Body size: 45 bytes
 */


void Luau::Compile::ValueVisitor::ValueVisitor_Constructor_or_Destructor
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ValueVisitor_vftable *local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_18 = &vftable;
  local_10 = param_1;
  local_8 = param_2;
  (**(code **)*param_3)(param_3,&local_18);
  return;
}

