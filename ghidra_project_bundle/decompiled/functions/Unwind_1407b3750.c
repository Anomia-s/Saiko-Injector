/**
 * Function: Unwind@1407b3750
 * Address:  1407b3750
 * Signature: void __fastcall Unwind@1407b3750(undefined8 param_1, longlong param_2)
 * Body size: 60 bytes
 */


void Unwind_1407b3750(undefined8 param_1,longlong param_2)

{
  *(CostVisitor_vftable **)(param_2 + 0x20) = &Luau::Compile::CostVisitor::vftable;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_140b68ba8();
  }
  return;
}

