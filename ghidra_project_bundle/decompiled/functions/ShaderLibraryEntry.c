/**
 * Function: ShaderLibraryEntry
 * Address:  14072d140
 * Signature: ShaderLibraryEntry * __thiscall ShaderLibraryEntry(ShaderLibraryEntry * this, longlong * param_1, char * param_2, undefined2 param_3)
 * Body size: 284 bytes
 */


ShaderLibraryEntry * __thiscall
nvrhi::d3d12::ShaderLibraryEntry::ShaderLibraryEntry
          (ShaderLibraryEntry *this,longlong *param_1,char *param_2,undefined2 param_3)

{
  size_t _Size;
  void **_Dst;
  ulonglong uVar1;
  
  (this->ShaderLibraryEntry_data).offset_0x0 = 1;
  this->vftablePtr = &vftable;
  (this->ShaderLibraryEntry_data).offset_0x8 = 0;
  (this->ShaderLibraryEntry_data).offset_0x10 = 0;
  (this->ShaderLibraryEntry_data).offset_0x18 = 0;
  (this->ShaderLibraryEntry_data).offset_0x20 = 0;
  (this->ShaderLibraryEntry_data).offset_0x28 = 0xf;
  (this->ShaderLibraryEntry_data).offset_0x30 = (void *)0x0;
  (this->ShaderLibraryEntry_data).offset_0x38 = 0;
  (this->ShaderLibraryEntry_data).offset_0x40 = 4;
  (this->ShaderLibraryEntry_data).offset_0x48 = 0xf;
  *(undefined4 *)&(this->ShaderLibraryEntry_data).offset_0x30 = 0x6e69616d;
  (this->ShaderLibraryEntry_data).offset_0x50 = 0xffffffff;
  (this->ShaderLibraryEntry_data).offset_0x54 = 0;
  (this->ShaderLibraryEntry_data).offset_0x58 = 0;
  (this->ShaderLibraryEntry_data).offset_0x60 = 0;
  (this->ShaderLibraryEntry_data).offset_0x68 = 0;
  (this->ShaderLibraryEntry_data).offset_0x70 = 0;
  (this->ShaderLibraryEntry_data).offset_0x78 = param_1;
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0xf;
  }
  else {
    (**(code **)(*param_1 + 8))(param_1);
    uVar1 = (this->ShaderLibraryEntry_data).offset_0x48;
  }
  _Dst = &(this->ShaderLibraryEntry_data).offset_0x30;
  (this->ShaderLibraryEntry_data).offset_0x8 = param_3;
  _Size = strlen(param_2);
  if (uVar1 < _Size) {
    FUN_1400069b0(_Dst,_Size);
  }
  else {
    if (0xf < uVar1) {
      _Dst = (this->ShaderLibraryEntry_data).offset_0x30;
    }
    (this->ShaderLibraryEntry_data).offset_0x40 = _Size;
    memmove(_Dst,param_2,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = 0;
  }
  return this;
}

