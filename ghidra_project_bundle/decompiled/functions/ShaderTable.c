/**
 * Function: ShaderTable
 * Address:  140734f60
 * Signature: ShaderTable * __thiscall ShaderTable(ShaderTable * this, undefined8 param_1, longlong * param_2, undefined8 * param_3)
 * Body size: 456 bytes
 */


ShaderTable * __thiscall
nvrhi::d3d12::ShaderTable::ShaderTable
          (ShaderTable *this,undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *_Dst;
  ulonglong uVar5;
  undefined8 *_Src;
  
  (this->ShaderTable_data).offset_0x0 = 1;
  this->vftablePtr = &vftable;
  (this->ShaderTable_data).offset_0x8 = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  (this->ShaderTable_data).offset_0x70 = (longlong *)0x0;
  (this->ShaderTable_data).offset_0x78 = 0;
  (this->ShaderTable_data).offset_0x80 = 0;
  (this->ShaderTable_data).offset_0x88 = 0;
  (this->ShaderTable_data).offset_0x90 = 0;
  (this->ShaderTable_data).offset_0x98 = 0;
  (this->ShaderTable_data).offset_0xa0 = 0;
  (this->ShaderTable_data).offset_0xa8 = 0;
  (this->ShaderTable_data).offset_0xb0 = 0;
  (this->ShaderTable_data).offset_0xb8 = 0;
  (this->ShaderTable_data).offset_0xc0 = 0;
  (this->ShaderTable_data).offset_0xc8 = 0;
  (this->ShaderTable_data).offset_0xd0 = 0;
  (this->ShaderTable_data).offset_0xd8 = 0;
  (this->ShaderTable_data).offset_0xe0 = 0;
  (this->ShaderTable_data).offset_0xe8 = 0;
  (this->ShaderTable_data).offset_0xf0 = 0;
  (this->ShaderTable_data).offset_0x10 = 0;
  (this->ShaderTable_data).offset_0x18 = (longlong *)0x0;
  (this->ShaderTable_data).offset_0x20 = 0;
  (this->ShaderTable_data).offset_0x28 = 0;
  (this->ShaderTable_data).offset_0x30 = 0;
  (this->ShaderTable_data).offset_0x38 = 0;
  (this->ShaderTable_data).offset_0x40 = 0;
  (this->ShaderTable_data).offset_0x48 = 0;
  (this->ShaderTable_data).offset_0x50 = 0;
  (this->ShaderTable_data).offset_0x58 = 0;
  *(undefined8 *)((longlong)&(this->ShaderTable_data).offset_0x58 + 4) = 0;
  *(undefined8 *)((longlong)&(this->ShaderTable_data).offset_0x60 + 4) = 0;
  (this->ShaderTable_data).offset_0xf8 = param_1;
  (this->ShaderTable_data).offset_0x100 = *param_3;
  (this->ShaderTable_data).offset_0x108 = (void *)0x0;
  (this->ShaderTable_data).offset_0x110 = 0;
  (this->ShaderTable_data).offset_0x118 = 0;
  (this->ShaderTable_data).offset_0x120 = 0;
  uVar1 = param_3[3];
  if ((ulonglong)param_3[4] < 0x10) {
    _Src = param_3 + 1;
  }
  else {
    _Src = (undefined8 *)param_3[1];
  }
  if (-1 < (longlong)uVar1) {
    if (uVar1 < 0x10) {
      (this->ShaderTable_data).offset_0x118 = uVar1;
      (this->ShaderTable_data).offset_0x120 = 0xf;
      uVar2 = _Src[1];
      (this->ShaderTable_data).offset_0x108 = (void *)*_Src;
      (this->ShaderTable_data).offset_0x110 = uVar2;
    }
    else {
      uVar3 = uVar1 | 0xf;
      uVar5 = 0x16;
      if (0x16 < uVar3) {
        uVar5 = uVar3;
      }
      if (uVar3 < 0xfff) {
        _Dst = (void *)FUN_140b65d30(uVar5 + 1);
      }
      else {
        lVar4 = FUN_140b65d30(uVar5 + 0x28);
        _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)_Dst - 8) = lVar4;
      }
      (this->ShaderTable_data).offset_0x108 = _Dst;
      (this->ShaderTable_data).offset_0x118 = uVar1;
      (this->ShaderTable_data).offset_0x120 = uVar5;
      memcpy(_Dst,_Src,uVar1 + 1);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  string_too_long();
}

