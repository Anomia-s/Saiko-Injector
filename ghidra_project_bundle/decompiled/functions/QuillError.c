/**
 * Function: QuillError
 * Address:  140009340
 * Signature: QuillError * __thiscall QuillError(QuillError * this, char * param_1)
 * Body size: 259 bytes
 */


QuillError * __thiscall quill::v11::QuillError::QuillError(QuillError *this,char *param_1)

{
  void *_Size;
  ulonglong uVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
  
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  this->vftablePtr = &vftable;
  (this->exception_data).offset_0x10 = (void *)0x0;
  (this->exception_data).offset_0x18 = (undefined **)0x0;
  (this->exception_data).offset_0x20 = (void *)0x0;
  (this->exception_data).offset_0x28 = 0;
  _Size = (void *)strlen(param_1);
  if (-1 < (longlong)_Size) {
    if (_Size < (void *)0x10) {
      (this->exception_data).offset_0x20 = _Size;
      (this->exception_data).offset_0x28 = 0xf;
      memcpy(&(this->exception_data).offset_0x10,param_1,(size_t)_Size);
      *(undefined1 *)((longlong)&(this->exception_data).offset_0x10 + (longlong)_Size) = 0;
    }
    else {
      uVar1 = (ulonglong)_Size | 0xf;
      uVar3 = 0x16;
      if (0x16 < uVar1) {
        uVar3 = uVar1;
      }
      if (uVar1 < 0xfff) {
        _Dst = (void *)FUN_140b65d30(uVar3 + 1);
      }
      else {
        lVar2 = FUN_140b65d30(uVar3 + 0x28);
        _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)_Dst - 8) = lVar2;
      }
      (this->exception_data).offset_0x10 = _Dst;
      (this->exception_data).offset_0x20 = _Size;
      (this->exception_data).offset_0x28 = uVar3;
      memcpy(_Dst,param_1,(size_t)_Size);
      *(undefined1 *)((longlong)_Dst + (longlong)_Size) = 0;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  string_too_long();
}

