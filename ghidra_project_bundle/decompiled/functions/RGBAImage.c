/**
 * Function: RGBAImage
 * Address:  140a94b10
 * Signature: RGBAImage * __thiscall RGBAImage(RGBAImage * this, int param_2, int param_3, undefined4 param_4, QImage * param_5)
 * Body size: 148 bytes
 */


RGBAImage * __thiscall
Scintilla::RGBAImage::RGBAImage
          (RGBAImage *this,int param_2,int param_3,undefined4 param_4,QImage *param_5)

{
  QImage *this_00;
  
  this->vftablePtr = &vftable;
  (this->RGBAImage_data).offset_0x0 = param_3;
  (this->RGBAImage_data).offset_0x4 = param_2;
  (this->RGBAImage_data).offset_0x8 = param_4;
  this_00 = (QImage *)FUN_140b65d30(0x18);
  if (param_5 == (QImage *)0x0) {
    QImage::QImage(this_00,param_2,param_3,5);
    (this->RGBAImage_data).offset_0x10 = this_00;
    QImage::fill(this_00,0);
  }
  else {
    QImage::QImage(this_00,param_5);
    (this->RGBAImage_data).offset_0x10 = this_00;
  }
  return this;
}

