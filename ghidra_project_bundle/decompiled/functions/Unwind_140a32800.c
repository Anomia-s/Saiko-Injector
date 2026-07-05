/**
 * Function: Unwind@140a32800
 * Address:  140a32800
 * Signature: undefined Unwind@140a32800(void)
 * Body size: 69 bytes
 */


void Unwind_140a32800(undefined8 param_1,longlong param_2)

{
  FontAlias *this;
  longlong lVar1;
  
  this = *(FontAlias **)(param_2 + 0x30);
  for (lVar1 = *(longlong *)(param_2 + 0x28); lVar1 != 0; lVar1 = lVar1 + -0x60) {
    Scintilla::FontAlias::FontAlias(this);
    this = this + 1;
  }
  return;
}

