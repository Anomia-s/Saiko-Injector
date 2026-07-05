/**
 * Function: Texture
 * Address:  140722920
 * Signature: Texture * __thiscall Texture(Texture * this, undefined8 param_1, undefined8 param_2, undefined8 * param_3, undefined4 * param_4)
 * Body size: 533 bytes
 */


Texture * __thiscall
nvrhi::d3d12::Texture::Texture
          (Texture *this,undefined8 param_1,undefined8 param_2,undefined8 *param_3,
          undefined4 *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined4 local_28;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *(undefined4 *)&this->field_0x8 = 1;
  this->TextureStateExtension = (TextureStateExtension)&(this->Texture_data).offset_0x8;
  (this->Texture_data).offset_0x0 = 0;
  *(undefined2 *)&(this->Texture_data).offset_0x4 = 0;
  this->vftablePtr = &vftable;
  uVar14 = param_3[1];
  uVar15 = *(undefined8 *)((longlong)param_3 + 0xe);
  uVar16 = *(undefined8 *)((longlong)param_3 + 0x16);
  (this->Texture_data).offset_0x8 = *param_3;
  (this->Texture_data).offset_0x10 = uVar14;
  *(undefined8 *)((longlong)&(this->Texture_data).offset_0x10 + 6) = uVar15;
  (this->Texture_data).offset_0x1e = uVar16;
  (this->Texture_data).offset_0x38 = 0;
  (this->Texture_data).offset_0x40 = 0;
  (this->Texture_data).offset_0x28 = 0;
  (this->Texture_data).offset_0x30 = 0;
  lVar2 = param_3[4];
  uVar14 = param_3[5];
  uVar1 = param_3[7];
  (this->Texture_data).offset_0x38 = param_3[6];
  (this->Texture_data).offset_0x40 = uVar1;
  (this->Texture_data).offset_0x28 = lVar2;
  (this->Texture_data).offset_0x30 = uVar14;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 4) = 0;
  uVar14 = param_3[9];
  uVar15 = param_3[10];
  uVar16 = param_3[0xb];
  uVar17 = *(undefined8 *)((longlong)param_3 + 0x59);
  uVar18 = *(undefined8 *)((longlong)param_3 + 0x61);
  (this->Texture_data).offset_0x48 = param_3[8];
  (this->Texture_data).offset_0x50 = uVar14;
  (this->Texture_data).offset_0x58 = uVar15;
  (this->Texture_data).offset_0x60 = uVar16;
  *(undefined8 *)((longlong)&(this->Texture_data).offset_0x60 + 1) = uVar17;
  (this->Texture_data).offset_0x69 = uVar18;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[4];
  uVar7 = param_4[5];
  uVar8 = param_4[6];
  uVar9 = param_4[7];
  uVar10 = param_4[8];
  uVar11 = param_4[9];
  uVar12 = param_4[10];
  uVar13 = param_4[0xb];
  (this->Texture_data).offset_0x78 = *param_4;
  (this->Texture_data).offset_0x7c = uVar3;
  (this->Texture_data).offset_0x80 = uVar4;
  (this->Texture_data).offset_0x84 = uVar5;
  (this->Texture_data).offset_0x88 = uVar6;
  (this->Texture_data).offset_0x8c = uVar7;
  (this->Texture_data).offset_0x90 = uVar8;
  (this->Texture_data).offset_0x94 = uVar9;
  (this->Texture_data).offset_0x98 = uVar10;
  (this->Texture_data).offset_0x9c = uVar11;
  (this->Texture_data).offset_0xa0 = uVar12;
  (this->Texture_data).offset_0xa4 = uVar13;
  (this->Texture_data).offset_0xa8 = *(undefined8 *)(param_4 + 0xc);
  (this->Texture_data).offset_0xb0 = (longlong *)0x0;
  (this->Texture_data).offset_0xb8 = 1;
  (this->Texture_data).offset_0xc0 = 0;
  (this->Texture_data).offset_0xc8 = (longlong *)0x0;
  (this->Texture_data).offset_0xd0 = param_1;
  (this->Texture_data).offset_0xd8 = param_2;
  local_28 = 0;
  FUN_14047bb50(&(this->Texture_data).field_0xe0,&local_28,&local_21);
  local_28 = 0;
  FUN_14047bb50(&(this->Texture_data).field_0x120,&local_28,&local_21);
  local_28 = 0;
  FUN_14047bb50(&(this->Texture_data).field_0x160,&local_28,&local_21);
  local_28 = 0;
  FUN_14047bb50(&(this->Texture_data).field_0x1a0,&local_28,&local_21);
  (this->Texture_data).offset_0x1e0 = (undefined4 *)0x0;
  (this->Texture_data).offset_0x1e8 = (undefined4 *)0x0;
  (this->Texture_data).offset_0x1f0 = 0;
  (this->Texture_data).offset_0x4 = 1;
  uVar1 = param_3[7];
  if (0xf < uVar1) {
    lVar2 = param_3[4];
    uVar19 = uVar1 + 1;
    lVar20 = lVar2;
    if (0xfff < uVar19) {
      lVar20 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar20)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar19 = uVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar20,uVar19);
  }
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 4) = 0;
  return this;
}

