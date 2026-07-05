/**
 * Function: _Func_impl_no_alloc<`void___cdecl_ldv::editor::_anon_64E603A3::buildVec3(editor::_anon_64E603A3::EditorContext*___ptr64,unsigned___int64,editor::ComponentAccessor_const&___ptr64,editor::FieldDesc_const&___ptr64,void_const*___ptr64,QWidget*___ptr64,QFormLayout*___ptr64,QString_const&___ptr64)'::`1'::<lambda_0>,void,float,float,float>_Constructor_or_Destructor
 * Address:  140562400
 * Signature: void __fastcall _Func_impl_no_alloc<`void___cdecl_ldv::editor::_anon_64E603A3::buildVec3(editor::_anon_64E603A3::EditorContext*___ptr64,unsigned___int64,editor::ComponentAccessor_const&___ptr64,editor::FieldDesc_const&___ptr64,void_const*___ptr64,QWidget*___ptr64,QFormLayout*___ptr64,QString_const&___ptr64)'::`1'::<lambda_0>,void,float,float,float>_Constructor_or_Destructor(longlong param_1, longlong param_2, longlong * param_3, undefined8 * param_4, longlong param_5, undefined8 param_6, undefined8 param_7)
 * Body size: 369 bytes
 */


void std::
     _Func_impl_no_alloc<`void___cdecl_ldv::editor::_anon_64E603A3::buildVec3(editor::_anon_64E603A3::EditorContext*___ptr64,unsigned___int64,editor::ComponentAccessor_const&___ptr64,editor::FieldDesc_const&___ptr64,void_const*___ptr64,QWidget*___ptr64,QFormLayout*___ptr64,QString_const&___ptr64)'::`1'::<lambda_0>,void,float,float,float>
     ::
     _Func_impl_no_alloc<_void___cdecl_ldv::editor::_anon_64E603A3::buildVec3(editor::_anon_64E603A3::EditorContext*___ptr64,unsigned___int64,editor::ComponentAccessor_const&___ptr64,editor::FieldDesc_const&___ptr64,void_const*___ptr64,QWidget*___ptr64,QFormLayout*___ptr64,QString_const&___ptr64)_::_1_::<lambda_0>,void,float,float,float>_Constructor_or_Destructor
               (longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
               longlong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  ushort uVar5;
  longlong local_128 [7];
  longlong *local_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  QString local_90 [24];
  longlong *local_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  uVar5 = *(ushort *)((longlong)param_4 + 10);
  uVar1 = *(undefined4 *)(param_5 + (ulonglong)uVar5);
  uVar2 = *(undefined4 *)(param_5 + (ulonglong)(uVar5 + 4 & 0xffff));
  uVar3 = *(undefined4 *)(param_5 + (ulonglong)(uVar5 + 8 & 0xffff));
  local_e8 = *param_3;
  lStack_e0 = param_3[1];
  local_d8 = param_3[2];
  lStack_d0 = param_3[3];
  local_c8 = *(undefined4 *)param_4;
  uStack_c4 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_c0 = *(undefined4 *)(param_4 + 1);
  uStack_bc = *(undefined4 *)((longlong)param_4 + 0xc);
  local_b8 = *(undefined4 *)(param_4 + 2);
  uStack_b4 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_b0 = *(undefined4 *)(param_4 + 3);
  uStack_ac = *(undefined4 *)((longlong)param_4 + 0x1c);
  local_a8 = *(undefined4 *)(param_4 + 4);
  uStack_a4 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_a0 = *(undefined4 *)(param_4 + 5);
  uStack_9c = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_f0 = (longlong *)FUN_140b65d30(0x68);
  *local_f0 = (longlong)&vftable;
  local_f0[1] = param_1;
  local_f0[2] = param_2;
  local_f0[5] = local_d8;
  local_f0[6] = lStack_d0;
  local_f0[3] = local_e8;
  local_f0[4] = lStack_e0;
  local_f0[7] = CONCAT44(uStack_c4,local_c8);
  local_f0[8] = CONCAT44(uStack_bc,uStack_c0);
  local_f0[9] = CONCAT44(uStack_b4,local_b8);
  local_f0[10] = CONCAT44(uStack_ac,uStack_b0);
  local_f0[0xb] = CONCAT44(uStack_a4,local_a8);
  local_f0[0xc] = CONCAT44(uStack_9c,uStack_a0);
  fVar4 = *(float *)(param_4 + 3);
  local_78 = local_f0;
  QString::QString(local_90,(char *)*param_4);
  qtoolbutton_border_none_background_transparen
            (param_7,local_90,uVar1,uVar2,uVar3,(double)fVar4,local_128);
  QString::~QString(local_90);
  if (local_f0 != (longlong *)0x0) {
    (**(code **)(*local_f0 + 0x20))(local_f0,local_f0 != local_128);
  }
  return;
}

