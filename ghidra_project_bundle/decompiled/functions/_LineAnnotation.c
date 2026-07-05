/**
 * Function: ~LineAnnotation
 * Address:  140a53240
 * Signature: void __thiscall ~LineAnnotation(LineAnnotation * this, undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 64 bytes
 */


void __thiscall
Scintilla::LineAnnotation::~LineAnnotation
          (LineAnnotation *this,undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  this->vftablePtr = &vftable;
  FUN_140a47020(&this->LineAnnotation_data,0,(this->LineAnnotation_data).offset_0x20,param_3,
                0xfffffffffffffffe);
  FUN_140a45ea0(&this->LineAnnotation_data);
  return;
}

