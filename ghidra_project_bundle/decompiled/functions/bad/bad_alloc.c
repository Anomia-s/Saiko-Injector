/**
 * Function: bad_alloc
 * Address:  140b68b20
 * Signature: bad_alloc * __thiscall bad_alloc(bad_alloc * this)
 * Body size: 33 bytes
 */


bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  (this->exception_data).offset_0x8 = 0;
  (this->exception_data).offset_0x0 = "bad allocation";
  this->vftablePtr = &vftable;
  return this;
}

