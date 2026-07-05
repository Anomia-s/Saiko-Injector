/**
 * Function: Unwind@1406d43d0
 * Address:  1406d43d0
 * Signature: void __fastcall Unwind@1406d43d0(undefined8 param_1, longlong param_2)
 * Body size: 71 bytes
 */


void Unwind_1406d43d0(undefined8 param_1,longlong param_2)

{
  *(UndefinedLocalVisitor_vftable **)(param_2 + 0x50) =
       &Luau::Compiler::UndefinedLocalVisitor::vftable;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_140b68ba8();
  }
  return;
}

