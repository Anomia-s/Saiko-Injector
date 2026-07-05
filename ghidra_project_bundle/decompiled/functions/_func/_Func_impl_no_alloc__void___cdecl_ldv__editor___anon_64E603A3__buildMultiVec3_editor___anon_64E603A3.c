/**
 * Function: _Func_impl_no_alloc<`void___cdecl_ldv::editor::_anon_64E603A3::buildMultiVec3(editor::_anon_64E603A3::EditorContext*___ptr64,std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_const&___ptr64,editor::ComponentAccessor_const&___ptr64,editor::FieldDesc_const&___ptr64,QWidget*___ptr64,QFormLayout*___ptr64)'::`1'::<lambda_1>,void,float,float,float>_Constructor_or_Destructor
 * Address:  140562740
 * Signature: void __fastcall _Func_impl_no_alloc<`void___cdecl_ldv::editor::_anon_64E603A3::buildMultiVec3(editor::_anon_64E603A3::EditorContext*___ptr64,std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_const&___ptr64,editor::ComponentAccessor_const&___ptr64,editor::FieldDesc_const&___ptr64,QWidget*___ptr64,QFormLayout*___ptr64)'::`1'::<lambda_1>,void,float,float,float>_Constructor_or_Destructor(undefined8 * param_1, longlong * param_2, longlong * param_3, undefined8 * param_4, undefined8 param_5, undefined8 param_6)
 * Body size: 663 bytes
 */


void std::
     _Func_impl_no_alloc<`void___cdecl_ldv::editor::_anon_64E603A3::buildMultiVec3(editor::_anon_64E603A3::EditorContext*___ptr64,std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_const&___ptr64,editor::ComponentAccessor_const&___ptr64,editor::FieldDesc_const&___ptr64,QWidget*___ptr64,QFormLayout*___ptr64)'::`1'::<lambda_1>,void,float,float,float>
     ::
     _Func_impl_no_alloc<_void___cdecl_ldv::editor::_anon_64E603A3::buildMultiVec3(editor::_anon_64E603A3::EditorContext*___ptr64,std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_const&___ptr64,editor::ComponentAccessor_const&___ptr64,editor::FieldDesc_const&___ptr64,QWidget*___ptr64,QFormLayout*___ptr64)_::_1_::<lambda_1>,void,float,float,float>_Constructor_or_Destructor
               (undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  void *_Dst;
  ulonglong uVar6;
  size_t _Size;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong local_160 [7];
  longlong *local_128;
  undefined8 *local_120;
  void *local_118;
  longlong lStack_110;
  longlong local_108;
  longlong local_100;
  longlong lStack_f8;
  longlong local_f0;
  longlong lStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  QString local_b0 [24];
  longlong *local_98;
  undefined8 local_90;
  
  local_90 = 0xfffffffffffffffe;
  puVar7 = (undefined8 *)*param_2;
  puVar5 = (undefined8 *)param_2[1];
  uVar6 = (longlong)puVar5 - (longlong)puVar7;
  if (uVar6 == 0) {
    fVar11 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    puVar7 = puVar5;
  }
  else {
    fVar10 = 0.0;
    fVar9 = 0.0;
    fVar11 = 0.0;
    do {
      lVar3 = FUN_1400ba4f0(*param_1,*puVar7,param_3[1]);
      uVar2 = *(ushort *)((longlong)param_4 + 10);
      fVar10 = fVar10 + *(float *)(lVar3 + (ulonglong)uVar2);
      fVar9 = fVar9 + *(float *)(lVar3 + (ulonglong)(uVar2 + 4 & 0xffff));
      fVar11 = fVar11 + *(float *)(lVar3 + (ulonglong)(ushort)(uVar2 + 8));
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar5);
    puVar5 = (undefined8 *)*param_2;
    puVar7 = (undefined8 *)param_2[1];
  }
  local_118 = (void *)0x0;
  lStack_110 = 0;
  local_108 = 0;
  local_120 = param_1;
  if (puVar7 == puVar5) {
    _Dst = (void *)0x0;
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)puVar7 - (longlong)puVar5;
    if ((ulonglong)(lVar3 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      vector_too_long();
    }
    if ((ulonglong)(lVar3 >> 3) < 0x200) {
      _Dst = (void *)FUN_140b65d30(lVar3);
    }
    else {
      lVar4 = FUN_140b65d30(lVar3 + 0x27);
      _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar4;
    }
    lVar3 = lVar3 + (longlong)_Dst;
    _Size = param_2[1] - *param_2;
    local_118 = _Dst;
    local_108 = lVar3;
    memmove(_Dst,(void *)*param_2,_Size);
    lStack_110 = _Size + (longlong)_Dst;
  }
  lVar4 = lStack_110;
  local_100 = *param_3;
  lStack_f8 = param_3[1];
  local_f0 = param_3[2];
  lStack_e8 = param_3[3];
  local_e0 = *(undefined4 *)param_4;
  uStack_dc = *(undefined4 *)((longlong)param_4 + 4);
  uStack_d8 = *(undefined4 *)(param_4 + 1);
  uStack_d4 = *(undefined4 *)((longlong)param_4 + 0xc);
  local_d0 = *(undefined4 *)(param_4 + 2);
  uStack_cc = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_c8 = *(undefined4 *)(param_4 + 3);
  uStack_c4 = *(undefined4 *)((longlong)param_4 + 0x1c);
  local_c0 = *(undefined4 *)(param_4 + 4);
  uStack_bc = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_b8 = *(undefined4 *)(param_4 + 5);
  uStack_b4 = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_128 = (longlong *)0x0;
  local_128 = (longlong *)FUN_140b65d30(0x78);
  *local_128 = (longlong)&vftable;
  local_128[1] = (longlong)param_1;
  local_118 = (void *)0x0;
  lStack_110 = 0;
  local_108 = 0;
  local_128[2] = (longlong)_Dst;
  local_128[3] = lVar4;
  local_128[4] = lVar3;
  local_128[5] = local_100;
  local_128[6] = lStack_f8;
  local_128[7] = local_f0;
  local_128[8] = lStack_e8;
  local_128[9] = CONCAT44(uStack_dc,local_e0);
  local_128[10] = CONCAT44(uStack_d4,uStack_d8);
  local_128[0xb] = CONCAT44(uStack_cc,local_d0);
  local_128[0xc] = CONCAT44(uStack_c4,uStack_c8);
  local_128[0xd] = CONCAT44(uStack_bc,local_c0);
  local_128[0xe] = CONCAT44(uStack_b4,uStack_b8);
  fVar1 = *(float *)(param_4 + 3);
  local_98 = local_128;
  QString::QString(local_b0,(char *)*param_4);
  fVar8 = (float)(int)(uVar6 >> 3);
  qtoolbutton_border_none_background_transparen
            (param_6,local_b0,fVar10 / fVar8,fVar9 / fVar8,fVar11 / fVar8,(double)fVar1,local_160);
  QString::~QString(local_b0);
  if (local_128 != (longlong *)0x0) {
    (**(code **)(*local_128 + 0x20))(local_128,local_128 != local_160);
  }
  return;
}

