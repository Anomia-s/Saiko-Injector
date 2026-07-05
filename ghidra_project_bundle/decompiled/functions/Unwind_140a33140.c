/**
 * Function: Unwind@140a33140
 * Address:  140a33140
 * Signature: undefined Unwind@140a33140(void)
 * Body size: 81 bytes
 */


void Unwind_140a33140(undefined8 param_1,longlong param_2)

{
  FontAlias *this;
  longlong lVar1;
  
  this = *(FontAlias **)(param_2 + 0x58);
  for (lVar1 = *(longlong *)(param_2 + 0x60); lVar1 != 0; lVar1 = lVar1 + -0x60) {
    Scintilla::FontAlias::FontAlias(this);
    this = this + 1;
  }
  return;
}

