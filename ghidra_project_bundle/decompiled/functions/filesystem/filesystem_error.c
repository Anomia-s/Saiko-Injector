/**
 * Function: filesystem_error
 * Address:  14003e930
 * Signature: filesystem_error * __thiscall filesystem_error(filesystem_error * this, undefined8 param_1, undefined4 * param_2)
 * Body size: 371 bytes
 */


filesystem_error * __thiscall
std::filesystem::filesystem_error::filesystem_error
          (filesystem_error *this,undefined8 param_1,undefined4 *param_2)

{
  char *pcVar1;
  size_t _Size;
  ulonglong uVar2;
  longlong lVar3;
  void *_Dst;
  char *_Str;
  ulonglong uVar4;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void **local_60;
  exception_data *local_58;
  undefined1 *local_50;
  filesystem_error *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  FUN_140005e90(local_78,&local_78,param_1);
  this->vftablePtr = &vftable;
  local_60 = &(this->exception_data).offset_0x20;
  (this->exception_data).offset_0x20 = (void *)0x0;
  (this->exception_data).offset_0x28 = 0;
  (this->exception_data).offset_0x30 = 0;
  (this->exception_data).offset_0x38 = 7;
  local_50 = &(this->exception_data).field_0x40;
  *(undefined8 *)&(this->exception_data).field_0x40 = 0;
  *(undefined8 *)&(this->exception_data).field_0x48 = 0;
  *(undefined8 *)&(this->exception_data).field_0x50 = 0;
  *(undefined8 *)&(this->exception_data).field_0x58 = 7;
  local_58 = &this->exception_data;
  pcVar1 = (char *)(this->exception_data).offset_0x0;
  _Str = "Unknown exception";
  if (pcVar1 != (char *)0x0) {
    _Str = pcVar1;
  }
  (this->exception_data).offset_0x60 = (void *)0x0;
  (this->exception_data).offset_0x68 = 0;
  (this->exception_data).offset_0x70 = 0;
  (this->exception_data).offset_0x78 = 0;
  _Size = strlen(_Str);
  local_48 = this;
  if (-1 < (longlong)_Size) {
    if (_Size < 0x10) {
      (this->exception_data).offset_0x70 = _Size;
      (this->exception_data).offset_0x78 = 0xf;
      memcpy(&(this->exception_data).offset_0x60,_Str,_Size);
      *(undefined1 *)((longlong)&(this->exception_data).offset_0x60 + _Size) = 0;
    }
    else {
      uVar2 = _Size | 0xf;
      uVar4 = 0x16;
      if (0x16 < uVar2) {
        uVar4 = uVar2;
      }
      if (uVar2 < 0xfff) {
        _Dst = (void *)FUN_140b65d30(uVar4 + 1);
      }
      else {
        lVar3 = FUN_140b65d30(uVar4 + 0x28);
        _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)_Dst - 8) = lVar3;
      }
      this = local_48;
      (local_48->exception_data).offset_0x60 = _Dst;
      (local_48->exception_data).offset_0x70 = _Size;
      (local_48->exception_data).offset_0x78 = uVar4;
      memcpy(_Dst,_Str,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  string_too_long();
}

