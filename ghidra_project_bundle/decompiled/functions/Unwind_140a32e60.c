/**
 * Function: Unwind@140a32e60
 * Address:  140a32e60
 * Signature: undefined Unwind@140a32e60(void)
 * Body size: 68 bytes
 */


void Unwind_140a32e60(undefined8 param_1,longlong param_2)

{
  FontAlias *this;
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_2 + 0x28); lVar1 != 0; lVar1 = lVar1 + -0x60) {
    this = *(FontAlias **)(param_2 + 0x30);
    Scintilla::FontAlias::FontAlias(this);
    *(FontAlias **)(param_2 + 0x30) = this + 1;
  }
  return;
}

