/**
 * Function: gizmo_arrow_instances
 * Address:  1405a7ad0
 * Signature: undefined gizmo_arrow_instances(void)
 * Body size: 1684 bytes
 */


ulonglong gizmo_arrow_instances(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  _Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_> _Var2;
  char cVar3;
  undefined8 uVar4;
  vfunction1 *pvVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 *local_f0;
  _Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_> local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  _Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable local_58
  ;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((param_2 != 0 && param_1 != (longlong *)0x0) && (*(longlong *)(param_2 + 0x18) != 0)) {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8.vftablePtr =
         (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
          *)0x0;
    uStack_e0 = 0;
    local_68 = 0;
    FUN_1405a8360(param_1,&local_e8);
    FUN_14029d930(&local_e8);
    *param_1 = param_2;
    directory_iterator_directory_iterator(&local_e8,param_2,"gizmo_ring.vsh.hlsl",1);
    _Var2.vftablePtr = local_e8.vftablePtr;
    local_e8.vftablePtr =
         (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
          *)0x0;
    plVar6 = (longlong *)param_1[1];
    param_1[1] = (longlong)_Var2.vftablePtr;
    if ((plVar6 != (longlong *)0x0) &&
       ((**(code **)(*plVar6 + 0x10))(), _Var2.vftablePtr = local_e8.vftablePtr,
       local_e8.vftablePtr !=
       (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable *)
       0x0)) {
      local_e8.vftablePtr =
           (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
            *)0x0;
      (**(code **)((_Var2.vftablePtr)->vfunction1 + 0x10))();
    }
    directory_iterator_directory_iterator(&local_e8,param_2,"gizmo_ring.psh.hlsl",0x10);
    _Var2.vftablePtr = local_e8.vftablePtr;
    local_e8.vftablePtr =
         (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
          *)0x0;
    plVar6 = (longlong *)param_1[2];
    param_1[2] = (longlong)_Var2.vftablePtr;
    if ((plVar6 != (longlong *)0x0) &&
       ((**(code **)(*plVar6 + 0x10))(), _Var2.vftablePtr = local_e8.vftablePtr,
       local_e8.vftablePtr !=
       (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable *)
       0x0)) {
      local_e8.vftablePtr =
           (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
            *)0x0;
      (**(code **)((_Var2.vftablePtr)->vfunction1 + 0x10))();
    }
    directory_iterator_directory_iterator(&local_e8,param_2,"gizmo_arrow.vsh.hlsl",1);
    _Var2.vftablePtr = local_e8.vftablePtr;
    local_e8.vftablePtr =
         (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
          *)0x0;
    plVar6 = (longlong *)param_1[3];
    param_1[3] = (longlong)_Var2.vftablePtr;
    if ((plVar6 != (longlong *)0x0) &&
       ((**(code **)(*plVar6 + 0x10))(), _Var2.vftablePtr = local_e8.vftablePtr,
       local_e8.vftablePtr !=
       (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable *)
       0x0)) {
      local_e8.vftablePtr =
           (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
            *)0x0;
      (**(code **)((_Var2.vftablePtr)->vfunction1 + 0x10))();
    }
    directory_iterator_directory_iterator(&local_e8,param_2,"gizmo_arrow.psh.hlsl",0x10);
    _Var2.vftablePtr = local_e8.vftablePtr;
    local_e8.vftablePtr =
         (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
          *)0x0;
    plVar6 = (longlong *)param_1[4];
    param_1[4] = (longlong)_Var2.vftablePtr;
    if ((plVar6 != (longlong *)0x0) &&
       ((**(code **)(*plVar6 + 0x10))(), _Var2.vftablePtr = local_e8.vftablePtr,
       local_e8.vftablePtr !=
       (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable *)
       0x0)) {
      local_e8.vftablePtr =
           (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
            *)0x0;
      (**(code **)((_Var2.vftablePtr)->vfunction1 + 0x10))();
    }
    directory_iterator_directory_iterator(&local_e8,param_2,"gizmo_sphere.vsh.hlsl",1);
    _Var2.vftablePtr = local_e8.vftablePtr;
    local_e8.vftablePtr =
         (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
          *)0x0;
    plVar6 = (longlong *)param_1[5];
    param_1[5] = (longlong)_Var2.vftablePtr;
    if ((plVar6 != (longlong *)0x0) &&
       ((**(code **)(*plVar6 + 0x10))(), _Var2.vftablePtr = local_e8.vftablePtr,
       local_e8.vftablePtr !=
       (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable *)
       0x0)) {
      local_e8.vftablePtr =
           (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
            *)0x0;
      (**(code **)((_Var2.vftablePtr)->vfunction1 + 0x10))();
    }
    directory_iterator_directory_iterator(&local_e8,param_2,"gizmo_sphere.psh.hlsl",0x10);
    _Var2.vftablePtr = local_e8.vftablePtr;
    local_e8.vftablePtr =
         (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
          *)0x0;
    plVar6 = (longlong *)param_1[6];
    param_1[6] = (longlong)_Var2.vftablePtr;
    if ((plVar6 != (longlong *)0x0) &&
       ((**(code **)(*plVar6 + 0x10))(), _Var2.vftablePtr = local_e8.vftablePtr,
       local_e8.vftablePtr !=
       (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable *)
       0x0)) {
      local_e8.vftablePtr =
           (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
            *)0x0;
      (**(code **)((_Var2.vftablePtr)->vfunction1 + 0x10))();
    }
    if (((((param_1[1] != 0) && (param_1[2] != 0)) && (param_1[3] != 0)) &&
        ((param_1[4] != 0 && (param_1[5] != 0)))) && (param_1[6] != 0)) {
      local_e8.vftablePtr._2_6_ = (uint6)((ulonglong)local_e8.vftablePtr >> 0x10) & 0xffff;
      uStack_e0 = uStack_e0 & 0xffffffffffffff00;
      local_d8 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0x80;
      uStack_b8 = 0x100;
      uStack_b4 = 0x180;
      local_e8.vftablePtr._0_2_ = 0xdf;
      local_58.vfunction1 = (vfunction1 *)&DAT_1000900000000;
      uVar4 = FUN_1405a8ec0(&local_e8,&local_58);
      local_f0 = &DAT_1000500000000;
      FUN_1405a8ec0(uVar4,&local_f0);
      (**(code **)(**(longlong **)(param_2 + 0x18) + 0x168))
                (*(longlong **)(param_2 + 0x18),&local_58,&local_e8);
      pvVar5 = local_58.vfunction1;
      local_58.vfunction1 = (vfunction1 *)0x0;
      plVar6 = (longlong *)param_1[7];
      param_1[7] = (longlong)pvVar5;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))();
        pvVar5 = local_58.vfunction1;
        if (local_58.vfunction1 != (vfunction1 *)0x0) {
          local_58.vfunction1 = (vfunction1 *)0x0;
          (**(code **)(*(longlong *)pvVar5 + 0x10))();
        }
        pvVar5 = (vfunction1 *)param_1[7];
      }
      if (pvVar5 == (vfunction1 *)0x0) {
        if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
           (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_1411f47c8),
           DAT_14151e360 != 0)) {
          FUN_140196ac0(DAT_14151e360,100);
        }
LAB_1405a80e6:
        FUN_1405a8790(param_1);
        uVar8 = 0;
      }
      else {
        cVar3 = FUN_1405a8f00(param_1,"Gizmo Ring Instances",3,0x60,param_1 + 8);
        if (((cVar3 == '\0') ||
            (cVar3 = FUN_1405a8f00(param_1,"Gizmo Arrow Instances",6,0x50,param_1 + 9),
            cVar3 == '\0')) ||
           (cVar3 = FUN_1405a8f00(param_1,"Gizmo Sphere Instances",6,0x50,param_1 + 10),
           cVar3 == '\0')) {
          if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
             (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_1411f47f0),
             DAT_14151e360 != 0)) {
            FUN_140196ac0(DAT_14151e360,100);
          }
          goto LAB_1405a80e6;
        }
        cVar3 = FUN_1405a9230(param_1,param_1[8],param_1 + 0xb);
        if (((cVar3 == '\0') ||
            (cVar3 = FUN_1405a9230(param_1,param_1[9],param_1 + 0xc), cVar3 == '\0')) ||
           (cVar3 = FUN_1405a9230(param_1,param_1[10],param_1 + 0xd), cVar3 == '\0')) {
          if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
             (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_1411f4818),
             DAT_14151e360 != 0)) {
            FUN_140196ac0(DAT_14151e360,100);
          }
          goto LAB_1405a80e6;
        }
        plVar6 = (longlong *)FUN_14021dea0(param_2);
        if (plVar6 == (longlong *)0x0) {
          if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
             (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_1411f4840),
             DAT_14151e360 != 0)) {
            FUN_140196ac0(DAT_14151e360,100);
          }
          goto LAB_1405a80e6;
        }
        puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6);
        local_58.vfunction1 = (vfunction1 *)*puVar7;
        local_58.vfunction2._0_4_ = *(undefined4 *)(puVar7 + 1);
        local_58.vfunction2._4_4_ = *(undefined4 *)((longlong)puVar7 + 0xc);
        local_58.vfunction1._0_4_ = *(undefined4 *)(puVar7 + 2);
        local_58.vfunction1._4_4_ = *(undefined4 *)((longlong)puVar7 + 0x14);
        local_58.vfunction6._0_4_ = *(undefined4 *)(puVar7 + 3);
        local_58.vfunction6._4_4_ = *(undefined4 *)((longlong)puVar7 + 0x1c);
        cVar3 = FUN_1405a9490(param_1,param_1[1],param_1[2],&local_58,param_1 + 0xe);
        if ((cVar3 == '\0') ||
           (cVar3 = FUN_1405a9490(param_1,param_1[3],param_1[4],&local_58,param_1 + 0xf),
           cVar3 == '\0')) {
LAB_1405a7f8f:
          if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
             (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_1411f4868),
             DAT_14151e360 != 0)) {
            FUN_140196ac0(DAT_14151e360,100);
          }
          goto LAB_1405a80e6;
        }
        cVar3 = FUN_1405a9490(param_1,param_1[5],param_1[6],&local_58,param_1 + 0x10);
        uVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
        if (cVar3 == '\0') goto LAB_1405a7f8f;
      }
      std::_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>::
      vfunction1(&local_e8);
      goto LAB_1405a8070;
    }
    if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
       (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_1411f47a0),
       DAT_14151e360 != 0)) {
      lVar1 = DAT_14151e360;
      local_58.vfunction1 = (vfunction1 *)((ulonglong)local_58.vfunction1 & 0xffffffffffffff00);
      local_e8.vftablePtr = &local_58;
      cVar3 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_e8);
      while (cVar3 == '\0') {
        local_e8.vftablePtr =
             (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
              *)0x64;
        FUN_140008100(&local_e8);
        local_e8.vftablePtr = &local_58;
        cVar3 = FUN_140b53dc0(lVar1,&PTR_DAT_140dc1aa0,&local_e8);
      }
      if (((ulonglong)local_58.vfunction1 & 1) == 0) {
        do {
          local_e8.vftablePtr =
               (_Ref_count_obj2<std::vector<unsigned___int64,std::allocator<unsigned___int64>_>_>_vftable
                *)0x64;
          FUN_140008100(&local_e8);
        } while (((ulonglong)local_58.vfunction1 & 1) == 0);
      }
    }
    FUN_1405a8790(param_1);
  }
  uVar8 = 0;
LAB_1405a8070:
  return uVar8 & 0xffffffff;
}

