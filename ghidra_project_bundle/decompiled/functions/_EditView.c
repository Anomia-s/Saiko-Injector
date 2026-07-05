/**
 * Function: ~EditView
 * Address:  140a35bd0
 * Signature: void __thiscall ~EditView(EditView * this)
 * Body size: 131 bytes
 */


void __thiscall Scintilla::EditView::~EditView(EditView *this)

{
  undefined8 *puVar1;
  
  this->vftablePtr = &vftable;
  FUN_140a42da0(&(this->EditView_data).field_0x80);
  LineLayoutCache::LineLayoutCache_Constructor_or_Destructor
            ((undefined8 *)&(this->EditView_data).field_0x48);
  puVar1 = (this->EditView_data).offset_0x40;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (this->EditView_data).offset_0x38;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (this->EditView_data).offset_0x30;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (this->EditView_data).offset_0x10;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140a35c49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

