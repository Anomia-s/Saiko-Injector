/**
 * Function: ~_Associated_state<int>
 * Address:  1402a7e10
 * Signature: void __thiscall ~_Associated_state<int>(_Associated_state<int> * this)
 * Body size: 65 bytes
 */


void __thiscall std::_Associated_state<int>::~_Associated_state<int>(_Associated_state<int> *this)

{
  this->vftablePtr = &vftable;
  if (((this->_Associated_state<int>_data).offset_0xb9 == '\x01') &&
     ((this->_Associated_state<int>_data).offset_0xb4 == 0)) {
    _Cnd_unregister_at_thread_exit(&(this->_Associated_state<int>_data).field_0x18);
  }
  __ExceptionPtrDestroy(&(this->_Associated_state<int>_data).field_0x8);
  return;
}

