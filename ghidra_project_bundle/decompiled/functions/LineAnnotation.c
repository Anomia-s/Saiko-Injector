/**
 * Function: LineAnnotation
 * Address:  1408040a0
 * Signature: LineAnnotation * __thiscall LineAnnotation(LineAnnotation * this, ulonglong param_1)
 * Body size: 764 bytes
 */


LineAnnotation * __thiscall
Scintilla::LineAnnotation::LineAnnotation(LineAnnotation *this,ulonglong param_1)

{
  undefined8 *puVar1;
  LineAnnotation *pLVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  LineAnnotation_vftable *pLVar5;
  undefined8 *local_48;
  undefined1 *local_40;
  LineAnnotation *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
                    /* inlined constructor: Scintilla::Document::Document */
  this->vftablePtr = (LineAnnotation_vftable *)&Document::vftable;
  *(Document_vftable1 **)&this->LineAnnotation_data = &Document::vftable;
  *(Document_vftable2 **)&(this->LineAnnotation_data).field_0x8 = &Document::vftable;
  local_40 = &(this->LineAnnotation_data).field_0x18;
  FUN_1407f9810(local_40,(param_1 & 1) == 0,(uint)(param_1 >> 8) & 1);
  FUN_140a4fb20(this + 5);
  *(undefined8 *)&this[10].LineAnnotation_data.field_0x8 = 0;
  *(undefined8 *)&this[0xb].LineAnnotation_data = 0;
  *(undefined8 *)&this[0xb].LineAnnotation_data.field_0x8 = 0;
  *(undefined8 *)&this[0xb].LineAnnotation_data.field_0x10 = 0;
  *(undefined8 *)&this[0xb].LineAnnotation_data.field_0x18 = 0xf;
  this[0xb].LineAnnotation_data.offset_0x20 = 0;
  this[0xc].vftablePtr = (LineAnnotation_vftable *)0x0;
  *(undefined8 *)&this[0xc].LineAnnotation_data = 0;
  *(undefined8 *)&this[0xc].LineAnnotation_data.field_0x8 = 0;
  *(undefined8 *)&this[0xc].LineAnnotation_data.field_0x10 = 0;
  *(undefined8 *)&this[0xc].LineAnnotation_data.field_0x18 = 0;
  this[0xc].LineAnnotation_data.offset_0x20 = 0;
  this[0xd].vftablePtr = (LineAnnotation_vftable *)0x0;
  *(undefined8 *)&this[0xd].LineAnnotation_data.field_0x8 = 0;
  *(undefined8 *)&this[0xd].LineAnnotation_data.field_0x10 = 0;
  *(undefined8 *)&this[0xe].LineAnnotation_data.field_0x8 = 0x3ee4f8b588e368f1;
  *(undefined8 *)&this[0xe].LineAnnotation_data.field_0x10 = 0x3eb0c6f7a0b5ed8d;
  *(undefined8 *)&this[0xe].LineAnnotation_data.field_0x18 = 0x3f1a36e2eb1c432d;
  this[0xe].LineAnnotation_data.offset_0x20 = 0;
  *(undefined4 *)&(this->LineAnnotation_data).field_0x10 = 0;
  *(undefined8 *)&this[10].LineAnnotation_data.field_0x10 = 0;
  *(undefined8 *)&this[10].LineAnnotation_data.field_0x18 = 0;
  *(undefined8 *)&this[10].LineAnnotation_data.field_0x19 = 0;
  *(undefined8 *)((longlong)&this[10].LineAnnotation_data.offset_0x20 + 1) = 0;
  *(undefined4 *)&this[0xd].LineAnnotation_data.field_0x18 = 0;
  *(undefined4 *)&this[0xd].LineAnnotation_data.field_0x1c = 0xfde9;
  *(undefined4 *)&this[0xd].LineAnnotation_data.offset_0x20 = 0;
  *(undefined4 *)((longlong)&this[0xd].LineAnnotation_data.offset_0x20 + 4) = 8;
  this[0xe].vftablePtr = (LineAnnotation_vftable *)0x800000000;
  *(undefined2 *)&this[0xe].LineAnnotation_data = 0x101;
  this[0xe].LineAnnotation_data.field_0x2 = 0;
  *(undefined1 *)&this[0xd].LineAnnotation_data = 0;
  local_38 = this;
  puVar4 = (undefined8 *)FUN_140b65d30(0x50);
                    /* inlined constructor: Scintilla::LineMarkers::LineMarkers */
  *puVar4 = &LineMarkers::vftable;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 8;
  *(undefined4 *)(puVar4 + 9) = 0;
  *(undefined8 **)&local_38[0xc].LineAnnotation_data.field_0x8 = puVar4;
  puVar4 = (undefined8 *)FUN_140b65d30(0x48);
                    /* inlined constructor: Scintilla::LineLevels::LineLevels */
  *puVar4 = &LineLevels::vftable;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 8;
  *(undefined8 **)&local_38[0xc].LineAnnotation_data.field_0x10 = puVar4;
  puVar4 = (undefined8 *)FUN_140b65d30(0x48);
                    /* inlined constructor: Scintilla::LineState::LineState */
  *puVar4 = &LineState::vftable;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 8;
  *(undefined8 **)&local_38[0xc].LineAnnotation_data.field_0x18 = puVar4;
  puVar4 = (undefined8 *)FUN_140b65d30(0x48);
                    /* inlined constructor: Scintilla::LineAnnotation::LineAnnotation */
  *puVar4 = &vftable;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 8;
  local_38[0xc].LineAnnotation_data.offset_0x20 = puVar4;
  pLVar5 = (LineAnnotation_vftable *)FUN_140b65d30(0x48);
  pLVar5->vfunction1 = (vfunction1 *)&vftable;
  pLVar5->vfunction2 = (vfunction2 *)0x0;
  pLVar5->vfunction3 = (vfunction3 *)0x0;
  pLVar5->vfunction4 = (vfunction4 *)0x0;
  pLVar5[1].vfunction1 = (vfunction1 *)0x0;
  pLVar5[1].vfunction2 = (vfunction2 *)0x0;
  pLVar5[1].vfunction3 = (vfunction3 *)0x0;
  pLVar5[1].vfunction4 = (vfunction4 *)0x0;
  pLVar5[2].vfunction1 = (vfunction1 *)0x8;
  local_38[0xd].vftablePtr = pLVar5;
  uVar3 = FUN_1407fbaa0(local_40);
  FUN_140a4fd90(&local_48,uVar3);
  pLVar2 = local_38;
  puVar1 = local_48;
  local_48 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)local_38[0xe].LineAnnotation_data.offset_0x20;
  local_38[0xe].LineAnnotation_data.offset_0x20 = puVar1;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  FUN_1407fb610(local_40,pLVar2);
  FUN_1407fb330(local_40,*(int *)&local_38[0xd].LineAnnotation_data.field_0x1c == 0xfde9);
  return local_38;
}

