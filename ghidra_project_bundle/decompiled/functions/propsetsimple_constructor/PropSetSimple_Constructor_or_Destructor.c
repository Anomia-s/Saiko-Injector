/**
 * Function: PropSetSimple_Constructor_or_Destructor
 * Address:  140a4e970
 * Signature: void __fastcall PropSetSimple_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 87 bytes
 */


void Scintilla::PropSetSimple::PropSetSimple_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &vftable;
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    FUN_1401c60b0(plVar1,plVar1,*(undefined8 *)(*plVar1 + 8));
    thunk_FUN_140b68ba8(*plVar1,0x60);
    thunk_FUN_140b68ba8(plVar1,0x10);
  }
  param_1[1] = 0;
  return;
}

