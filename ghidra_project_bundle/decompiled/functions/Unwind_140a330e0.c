/**
 * Function: Unwind@140a330e0
 * Address:  140a330e0
 * Signature: undefined Unwind@140a330e0(void)
 * Body size: 81 bytes
 */


void Unwind_140a330e0(undefined8 param_1,longlong param_2)

{
  FontAlias *this;
  longlong lVar1;
  
  this = *(FontAlias **)(param_2 + 0x50);
  for (lVar1 = *(longlong *)(param_2 + 0x60); lVar1 != 0; lVar1 = lVar1 + -0x60) {
    Scintilla::FontAlias::FontAlias(this);
    this = this + 1;
  }
  return;
}

