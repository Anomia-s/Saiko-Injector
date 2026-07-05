/**
 * Function: ~LineMarkers
 * Address:  140a52010
 * Signature: void __thiscall ~LineMarkers(LineMarkers * this, undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 178 bytes
 */


void __thiscall
Scintilla::LineMarkers::~LineMarkers
          (LineMarkers *this,undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  this->vftablePtr = &vftable;
  FUN_140a541f0(&this->LineMarkers_data);
  plVar1 = (this->LineMarkers_data).offset_0x18;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = (longlong *)*plVar1;
    *plVar1 = 0;
    if (plVar5 != (longlong *)0x0) {
      do {
        plVar2 = (longlong *)*plVar5;
        thunk_FUN_140b68ba8(plVar5,0x10);
        plVar5 = plVar2;
      } while (plVar2 != (longlong *)0x0);
      puVar3 = (undefined8 *)*plVar1;
      *plVar1 = 0;
      while (puVar3 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar3;
        thunk_FUN_140b68ba8(puVar3,0x10);
        puVar3 = puVar4;
      }
    }
    thunk_FUN_140b68ba8(plVar1,8);
  }
  FUN_140a53f50(&this->LineMarkers_data);
  return;
}

