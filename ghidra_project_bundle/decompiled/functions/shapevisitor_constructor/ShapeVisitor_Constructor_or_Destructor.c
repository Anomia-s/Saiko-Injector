/**
 * Function: ShapeVisitor_Constructor_or_Destructor
 * Address:  1407a6a30
 * Signature: void __fastcall ShapeVisitor_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 98 bytes
 */


void Luau::Compile::ShapeVisitor::ShapeVisitor_Constructor_or_Destructor(undefined8 *param_1)

{
  *param_1 = &vftable;
  if (param_1[0xd] != 0) {
    FUN_140b68ba8();
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  if (param_1[7] != 0) {
    FUN_140b68ba8();
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if (param_1[2] != 0) {
    FUN_140b68ba8();
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

