/**
 * Function: Sampler
 * Address:  14053fe60
 * Signature: Sampler * __thiscall Sampler(Sampler * this, undefined8 param_1, undefined8 * param_2)
 * Body size: 243 bytes
 */


Sampler * __thiscall
nvrhi::d3d12::Sampler::Sampler(Sampler *this,undefined8 param_1,undefined8 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  (this->Sampler_data).offset_0x0 = 1;
  this->vftablePtr = &vftable;
  (this->Sampler_data).offset_0x8 = param_1;
  uVar4 = param_2[1];
  fVar1 = *(float *)(param_2 + 2);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  (this->Sampler_data).offset_0x10 = *param_2;
  (this->Sampler_data).offset_0x18 = uVar4;
  (this->Sampler_data).offset_0x20 = fVar1;
  (this->Sampler_data).offset_0x24 = uVar6;
  (this->Sampler_data).offset_0x28 = (char)uVar2;
  (this->Sampler_data).offset_0x29 = (char)((uint)uVar2 >> 8);
  (this->Sampler_data).offset_0x2a = (char)((uint)uVar2 >> 0x10);
  (this->Sampler_data).offset_0x2b = (char)((uint)uVar2 >> 0x18);
  (this->Sampler_data).offset_0x2c = (char)uVar3;
  (this->Sampler_data).offset_0x2d = (char)((uint)uVar3 >> 8);
  *(short *)&(this->Sampler_data).field_0x2e = (short)((uint)uVar3 >> 0x10);
  (this->Sampler_data).offset_0x30 = 0;
  (this->Sampler_data).offset_0x34 = 0;
  (this->Sampler_data).offset_0x38 = 0;
  (this->Sampler_data).offset_0x3c = 0;
  (this->Sampler_data).offset_0x40 = 0;
  (this->Sampler_data).offset_0x44 = 0;
  *(undefined8 *)&(this->Sampler_data).offset_0x48 = 0;
  (this->Sampler_data).offset_0x50 = 0;
  (this->Sampler_data).offset_0x58 = 0;
  (this->Sampler_data).offset_0x60 = 0;
  uVar5 = FUN_14071d7c0(*(undefined1 *)((longlong)param_2 + 0x1e));
  uVar7 = 0x55;
  if ((this->Sampler_data).offset_0x20 <= 1.0) {
    uVar7 = (uint)(this->Sampler_data).offset_0x2a |
            (uint)(this->Sampler_data).offset_0x28 * 0x10 +
            (uint)(this->Sampler_data).offset_0x29 * 4;
  }
  (this->Sampler_data).offset_0x30 = (uVar5 & 3) << 7 | uVar7;
  uVar6 = FUN_14071d790((this->Sampler_data).offset_0x2b);
  (this->Sampler_data).offset_0x34 = uVar6;
  uVar6 = FUN_14071d790((this->Sampler_data).offset_0x2c);
  (this->Sampler_data).offset_0x38 = uVar6;
  uVar6 = FUN_14071d790((this->Sampler_data).offset_0x2d);
  (this->Sampler_data).offset_0x3c = uVar6;
  (this->Sampler_data).offset_0x40 = (this->Sampler_data).offset_0x24;
  uVar7 = (uint)(longlong)(this->Sampler_data).offset_0x20;
  uVar5 = 1;
  if (1 < uVar7) {
    uVar5 = uVar7;
  }
  (this->Sampler_data).offset_0x44 = uVar5;
  (this->Sampler_data).offset_0x48 = (*(char *)((longlong)param_2 + 0x1e) == '\x01') + 1;
  *(undefined8 *)&(this->Sampler_data).field_0x4c = (this->Sampler_data).offset_0x10;
  *(undefined8 *)((longlong)&(this->Sampler_data).offset_0x50 + 4) =
       (this->Sampler_data).offset_0x18;
  *(undefined8 *)((longlong)&(this->Sampler_data).offset_0x58 + 4) = 0x7f7fffff00000000;
  return this;
}

