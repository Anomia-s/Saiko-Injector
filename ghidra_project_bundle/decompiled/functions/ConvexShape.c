/**
 * Function: ConvexShape
 * Address:  1402f8bc0
 * Signature: void __thiscall ConvexShape(ConvexShape * this, undefined4 param_2, undefined4 param_3, undefined8 param_4, longlong param_5)
 * Body size: 93 bytes
 */


void __thiscall
JPH::ConvexShape::ConvexShape
          (ConvexShape *this,undefined4 param_2,undefined4 param_3,undefined8 param_4,
          longlong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 in_register_00001244 [12];
  undefined1 in_register_00001284 [12];
  undefined1 in_XMM3 [16];
  
  *(undefined4 *)&this->RefTarget<JPH::Shape> = 0;
  (this->Shape_data).offset_0x0 = 0;
  (this->Shape_data).offset_0x8 = 0x500;
  this->vftablePtr = &vftable;
  (this->Shape_data).offset_0x10 = (float)(undefined4)param_5;
  (this->Shape_data).offset_0x14 = param_5._4_4_;
  if (param_5 != 0) {
    LOCK();
    *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
    UNLOCK();
  }
  (this->Shape_data).offset_0x18 = 1000.0;
  this->vftablePtr = (ConvexShape_vftable *)&PTR_ConvexShape_140e09200;
  *(undefined4 *)&(this->Shape_data).offset_0x20 = param_2;
  *(undefined4 *)((longlong)&(this->Shape_data).offset_0x20 + 4) = param_3;
  auVar1._4_12_ = in_register_00001244;
  auVar1._0_4_ = param_2;
  auVar2._4_12_ = in_register_00001284;
  auVar2._0_4_ = param_3;
  auVar1 = vminss_avx(auVar2,auVar1);
  auVar1 = vminss_avx(auVar1,in_XMM3);
  (this->Shape_data).offset_0x28 = auVar1._0_4_;
  return;
}

