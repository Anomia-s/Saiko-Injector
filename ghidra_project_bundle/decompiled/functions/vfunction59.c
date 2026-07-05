/**
 * Function: vfunction59
 * Address:  1407ef1e0
 * Signature: void __thiscall vfunction59(Editor * this, longlong param_1)
 * Body size: 549 bytes
 */


/* Scintilla::Editor member function inherited by Scintilla::ScintillaBase
   Scintilla::Editor member function inherited by QsciScintillaQt */

void __thiscall Scintilla::Editor::vfunction59(Editor *this,longlong param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Editor_vftable1 **ppEVar10;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  ppEVar10 = &this->vftablePtr;
  FUN_14080cb90((this->EditModel_data).offset_0x2e8,ppEVar10,0);
  lVar7 = (this->EditModel_data).offset_0x2e8;
  (*(code *)**(undefined8 **)(lVar7 + 0x10))(lVar7 + 0x10);
  if (param_1 == 0) {
    param_1 = FUN_140b65d30(0x2d0);
    LineAnnotation::LineAnnotation((LineAnnotation *)param_1,0);
  }
  (this->EditModel_data).offset_0x2e8 = param_1;
  FUN_140804790(param_1);
  uVar6 = FUN_1407fbaa0((this->EditModel_data).offset_0x2e8 + 0x20);
  FUN_140a44a60(&local_30,uVar6);
  puVar5 = local_30;
  local_30 = (undefined8 *)0x0;
  puVar2 = (this->EditModel_data).offset_0x2c0;
  (this->EditModel_data).offset_0x2c0 = puVar5;
  if ((puVar2 != (undefined8 *)0x0) &&
     ((**(code **)*puVar2)(puVar2,1), local_30 != (undefined8 *)0x0)) {
    (**(code **)*local_30)(local_30,1);
  }
  FUN_140803a80(&(this->EditModel_data).field_0x250);
  *(undefined1 (*) [16])&(this->Editor_data).field_0x438 = (undefined1  [16])0x0;
  *(undefined4 *)((this->EditModel_data).offset_0x230 + 8) = 0xffffffff;
  *(undefined4 *)((this->EditModel_data).offset_0x230 + 0xc) = 0xffffffff;
  (this->EditModel_data).offset_0x240 = 0xffffffff;
  (this->EditModel_data).offset_0x244 = 0xffffffff;
  FUN_140a31950(&(this->Editor_data).field_0x38);
  FUN_1407d7c50(this);
  (**(code **)(*(this->EditModel_data).offset_0x2c0 + 8))();
  plVar3 = (this->EditModel_data).offset_0x2c0;
  lVar7 = FUN_140805110((this->EditModel_data).offset_0x2e8);
  (**(code **)(*plVar3 + 0x38))(plVar3,0,lVar7 + -1);
  uVar8 = FUN_140805110((this->EditModel_data).offset_0x2e8);
  uVar9 = 0;
  FUN_1407e2700(this,0,uVar8);
  puVar1 = &(this->Editor_data).field_0x2d8;
  FUN_140a413e0(puVar1);
  lVar7 = *(longlong *)&this[1].EditModel_data.field_0x30;
  lVar4 = *(longlong *)&this[1].EditModel_data.field_0x38;
  if (lVar7 < 1) {
    if (0x7fffffe < lVar4) goto LAB_1407ef38e;
LAB_1407ef376:
    *(undefined8 *)&this[1].EditModel_data.field_0x38 = 0x7ffffff;
  }
  else {
    *(undefined8 *)&this[1].EditModel_data.field_0x30 = 0;
    if (lVar4 < 0x7ffffff || lVar4 <= lVar7) goto LAB_1407ef376;
  }
  uVar9 = 0;
  FUN_140a415f0(puVar1,2);
LAB_1407ef38e:
  if ((*(int *)&(this->Editor_data).field_0x214 != 0) &&
     (*(longlong *)&this[1].EditModel_data.field_0x30 <
      *(longlong *)&this[1].EditModel_data.field_0x38)) {
    (*this->vftablePtr->vfunction6)(this,CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
  }
  (this->EditModel_data).offset_0x2c8 = 0xffffffff;
  (this->EditModel_data).offset_0x2cc = 0xffffffff;
  (this->EditModel_data).offset_0x2d0 = 0xffffffff;
  (this->EditModel_data).offset_0x2d4 = 0xffffffff;
  (this->EditModel_data).offset_0x2d8 = 0xffffffffffffffff;
  FUN_140a35c90(&(this->Editor_data).field_0x288);
  FUN_14080cae0((this->EditModel_data).offset_0x2e8,ppEVar10,0);
  FUN_1407d86a0(this);
  (*this->vftablePtr->vfunction13)(this,ppEVar10);
  return;
}

