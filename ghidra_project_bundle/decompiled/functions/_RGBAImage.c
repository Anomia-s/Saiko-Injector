/**
 * Function: ~RGBAImage
 * Address:  140a94c10
 * Signature: void __thiscall ~RGBAImage(RGBAImage * this)
 * Body size: 34 bytes
 */


void __thiscall Scintilla::RGBAImage::~RGBAImage(RGBAImage *this)

{
  QImage *pQVar1;
  
  this->vftablePtr = &vftable;
  pQVar1 = (this->RGBAImage_data).offset_0x10;
  if (pQVar1 != (QImage *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140a94c2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pQVar1)(pQVar1,1);
    return;
  }
  return;
}

