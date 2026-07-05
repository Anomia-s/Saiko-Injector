/**
 * Function: lua_exception
 * Address:  1406b8f40
 * Signature: lua_exception * __thiscall lua_exception(lua_exception * this, longlong param_1)
 * Body size: 76 bytes
 */


lua_exception * __thiscall lua_exception::lua_exception(lua_exception *this,longlong param_1)

{
                    /* inlined constructor: std::exception::exception */
  this->vftablePtr = (lua_exception_vftable *)&std::exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  __std_exception_copy(param_1 + 8,&this->exception_data);
  this->vftablePtr = &vftable;
  (this->exception_data).offset_0x10 = *(void **)(param_1 + 0x18);
  *(undefined4 *)&(this->exception_data).offset_0x18 = *(undefined4 *)(param_1 + 0x20);
  return this;
}

