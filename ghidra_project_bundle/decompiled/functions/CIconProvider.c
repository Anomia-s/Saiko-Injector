/**
 * Function: CIconProvider
 * Address:  14057eb70
 * Signature: CIconProvider * __thiscall CIconProvider(CIconProvider * this)
 * Body size: 75 bytes
 */


CIconProvider * __thiscall ads::CIconProvider::CIconProvider(CIconProvider *this)

{
  longlong lVar1;
  
  this->vftablePtr = &vftable;
  lVar1 = FUN_140b65d30(0x20);
  FUN_14057ea10(lVar1,this);
  (this->CIconProvider_data).offset_0x0 = lVar1;
  return this;
}

