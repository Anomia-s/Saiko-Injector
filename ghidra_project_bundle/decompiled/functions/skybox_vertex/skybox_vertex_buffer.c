/**
 * Function: skybox_vertex_buffer
 * Address:  1404b70b0
 * Signature: undefined4 __fastcall skybox_vertex_buffer(byte * * param_1, byte * param_2)
 * Body size: 4289 bytes
 */


undefined4 skybox_vertex_buffer(byte **param_1,byte *param_2)

{
  undefined2 uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 uVar8;
  char cVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined4 uVar12;
  byte *pbVar13;
  vfunction1 *pvVar14;
  ulonglong uVar15;
  char *pcVar16;
  _Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
  *p_Var17;
  ulonglong uVar18;
  byte *pbVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  longlong lVar22;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined2 uStack_210;
  undefined1 uStack_20e;
  undefined4 uStack_20d;
  undefined1 uStack_209;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined1 uStack_1f0;
  undefined4 local_1ef;
  undefined4 uStack_1eb;
  undefined4 uStack_1e7;
  undefined1 uStack_1e3;
  undefined2 uStack_1e2;
  undefined4 uStack_1e0;
  undefined5 uStack_1dc;
  undefined8 uStack_1d7;
  undefined8 local_1cf;
  undefined8 uStack_1c7;
  undefined8 local_1bf;
  undefined8 uStack_1b7;
  undefined4 local_1af;
  undefined4 uStack_1ab;
  undefined4 uStack_1a7;
  undefined4 uStack_1a3;
  undefined1 local_19c;
  undefined1 uStack_19b;
  undefined1 uStack_19a;
  undefined1 uStack_199;
  undefined1 uStack_198;
  undefined1 local_197;
  undefined1 uStack_196;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined8 local_164;
  longlong local_158 [10];
  undefined8 local_108;
  longlong lStack_100;
  undefined1 local_f8;
  undefined8 local_f4;
  uint local_e8;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  undefined6 uStack_e0;
  undefined2 uStack_da;
  undefined4 *local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined2 uStack_b2;
  undefined5 uStack_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined4 local_a0;
  _Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
  *local_98;
  undefined8 *puStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_6c;
  undefined4 local_64;
  _Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
  **local_60;
  vfunction1 *local_50;
  undefined1 local_41;
  vfunction3 *local_40;
  
  local_40 = (vfunction3 *)0xfffffffffffffffe;
  memset(param_1 + 1,0,0x160);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  cVar9 = FUN_14021cba0(param_2);
  if (cVar9 == '\0') {
    return 0;
  }
  pbVar13 = (byte *)FUN_140220540(*param_1);
  pbVar19 = param_1[0x28];
  if (pbVar19 != pbVar13) {
    if (pbVar13 != (byte *)0x0) {
      (**(code **)(*(longlong *)pbVar13 + 8))(pbVar13);
      pbVar19 = param_1[0x28];
    }
    param_1[0x28] = pbVar13;
    if (pbVar19 != (byte *)0x0) {
      (**(code **)(*(longlong *)pbVar19 + 0x10))();
      pbVar13 = param_1[0x28];
    }
  }
  if (pbVar13 == (byte *)0x0) {
    if ((*(byte *)(DAT_14151e360 + 0x39) < 8) &&
       (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e1c698),
       DAT_14151e360 == 0)) {
      return 0;
    }
    lVar22 = DAT_14151e360;
    local_e8 = local_e8 & 0xffffff00;
    local_228 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                 **)&local_e8;
    cVar9 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_228);
    if (cVar9 == '\0') {
      do {
        local_228._0_4_ = 100;
        local_228._4_4_ = 0;
        FUN_140008100(&local_228);
        local_228 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                     **)&local_e8;
        cVar9 = FUN_140b53dc0(lVar22,&PTR_DAT_140dc1aa0,&local_228);
      } while (cVar9 == '\0');
    }
    if ((local_e8 & 1) != 0) {
      return 0;
    }
    do {
      local_228._0_4_ = 100;
      local_228._4_4_ = 0;
      FUN_140008100(&local_228);
    } while ((local_e8 & 1) == 0);
    return 0;
  }
  local_228._0_4_ = 0x3f800000;
  local_228._4_4_ = 0x3f800000;
  uStack_220 = 0x3f800000;
  uStack_21c = 0x3f800000;
  local_218 = 0x3f800000;
  uStack_214 = 0;
  uStack_20d = 0;
  uStack_20e = 1;
  uStack_210 = 0x101;
  (**(code **)(**(longlong **)(*param_1 + 0x18) + 0xd0))
            (*(longlong **)(*param_1 + 0x18),&local_e8,&local_228);
  pbVar13 = (byte *)CONCAT26(uStack_e2,CONCAT24(uStack_e4,local_e8));
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e2 = 0;
  pbVar19 = param_1[0x27];
  param_1[0x27] = pbVar13;
  if (pbVar19 != (byte *)0x0) {
    (**(code **)(*(longlong *)pbVar19 + 0x10))();
    plVar20 = (longlong *)CONCAT26(uStack_e2,CONCAT24(uStack_e4,local_e8));
    if (plVar20 != (longlong *)0x0) {
      local_e8 = 0;
      uStack_e4 = 0;
      uStack_e2 = 0;
      (**(code **)(*plVar20 + 0x10))();
    }
    pbVar13 = param_1[0x27];
  }
  if (pbVar13 == (byte *)0x0) {
    if ((*(byte *)(DAT_14151e360 + 0x39) < 8) &&
       (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e1c6c0),
       DAT_14151e360 == 0)) {
      return 0;
    }
    lVar22 = DAT_14151e360;
    local_98 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                *)((ulonglong)local_98 & 0xffffffffffffff00);
    local_e8 = (uint)&local_98;
    uVar11 = local_e8;
    uStack_e4 = (undefined2)((ulonglong)&local_98 >> 0x20);
    uVar1 = uStack_e4;
    uStack_e2 = (undefined2)((ulonglong)&local_98 >> 0x30);
    uVar8 = uStack_e2;
    cVar9 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_e8);
    if (cVar9 == '\0') {
      do {
        local_e8 = 100;
        uStack_e4 = 0;
        uStack_e2 = 0;
        FUN_140008100(&local_e8);
        local_e8 = uVar11;
        uStack_e4 = uVar1;
        uStack_e2 = uVar8;
        cVar9 = FUN_140b53dc0(lVar22,&PTR_DAT_140dc1aa0,&local_e8);
      } while (cVar9 == '\0');
    }
    if (((ulonglong)local_98 & 1) != 0) {
      return 0;
    }
    do {
      local_e8 = 100;
      uStack_e4 = 0;
      uStack_e2 = 0;
      FUN_140008100(&local_e8);
    } while (((ulonglong)local_98 & 1) == 0);
    return 0;
  }
  directory_iterator_directory_iterator(&local_228,*param_1,"skybox.vsh.hlsl",1);
  pbVar13 = (byte *)CONCAT44(local_228._4_4_,(undefined4)local_228);
  local_228._0_4_ = 0;
  local_228._4_4_ = 0;
  pbVar19 = param_1[0x25];
  param_1[0x25] = pbVar13;
  if (pbVar19 != (byte *)0x0) {
    (**(code **)(*(longlong *)pbVar19 + 0x10))();
    plVar20 = (longlong *)CONCAT44(local_228._4_4_,(undefined4)local_228);
    if (plVar20 != (longlong *)0x0) {
      local_228._0_4_ = 0;
      local_228._4_4_ = 0;
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  directory_iterator_directory_iterator(&local_228,*param_1,"skybox.psh.hlsl",0x10);
  pbVar13 = (byte *)CONCAT44(local_228._4_4_,(undefined4)local_228);
  local_228._0_4_ = 0;
  local_228._4_4_ = 0;
  pbVar19 = param_1[0x26];
  param_1[0x26] = pbVar13;
  if (pbVar19 != (byte *)0x0) {
    (**(code **)(*(longlong *)pbVar19 + 0x10))();
    plVar20 = (longlong *)CONCAT44(local_228._4_4_,(undefined4)local_228);
    if (plVar20 != (longlong *)0x0) {
      local_228._0_4_ = 0;
      local_228._4_4_ = 0;
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  if (param_1[0x25] == (byte *)0x0) {
    return 0;
  }
  if (param_1[0x26] == (byte *)0x0) {
    return 0;
  }
  local_e8 = 0x52545441;
  uStack_e4 = 0x4249;
  local_d8 = (undefined4 *)0x6;
  uStack_d0 = 0xf;
  uStack_e2 = 0;
  uStack_e0 = 0;
  uStack_da = 0;
  local_c8 = 0x10000002e;
  uStack_c0 = 0;
  uStack_b8 = 0xc;
  uStack_b4 = 0;
  (**(code **)(**(longlong **)(*param_1 + 0x18) + 0xd8))
            (*(longlong **)(*param_1 + 0x18),&local_228,&local_e8,1,param_1[0x25]);
  pbVar13 = (byte *)CONCAT44(local_228._4_4_,(undefined4)local_228);
  local_228._0_4_ = 0;
  local_228._4_4_ = 0;
  pbVar19 = param_1[0x24];
  param_1[0x24] = pbVar13;
  if (pbVar19 != (byte *)0x0) {
    (**(code **)(*(longlong *)pbVar19 + 0x10))();
    plVar20 = (longlong *)CONCAT44(local_228._4_4_,(undefined4)local_228);
    if (plVar20 != (longlong *)0x0) {
      local_228._0_4_ = 0;
      local_228._4_4_ = 0;
      (**(code **)(*plVar20 + 0x10))();
    }
    pbVar13 = param_1[0x24];
  }
  if (pbVar13 == (byte *)0x0) {
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e1c6e8);
      if (DAT_14151e360 != 0) goto LAB_1404b760f;
    }
    else {
LAB_1404b760f:
      lVar22 = DAT_14151e360;
      local_98 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                  *)((ulonglong)local_98 & 0xffffffffffffff00);
      local_228 = &local_98;
      cVar9 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_228);
      if (cVar9 == '\0') {
        do {
          local_228._0_4_ = 100;
          local_228._4_4_ = 0;
          FUN_140008100(&local_228);
          local_228 = &local_98;
          cVar9 = FUN_140b53dc0(lVar22,&PTR_DAT_140dc1aa0,&local_228);
        } while (cVar9 == '\0');
      }
      if (((ulonglong)local_98 & 1) == 0) {
        do {
          local_228._0_4_ = 100;
          local_228._4_4_ = 0;
          FUN_140008100(&local_228);
        } while (((ulonglong)local_98 & 1) == 0);
      }
    }
    bVar2 = false;
  }
  else {
    uVar15 = (ulonglong)local_98 >> 0x10;
    puStack_90 = (undefined8 *)((ulonglong)puStack_90 & 0xffffffffffffff00);
    local_88 = 0;
    uStack_80._0_4_ = 0;
    uStack_80._4_4_ = 0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    local_6c = 0x10000000080;
    local_64 = 0x180;
    local_98 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                *)CONCAT62((uint6)uVar15 & 0xffff,0xdf);
    local_228._0_4_ = 0;
    local_228._4_4_ = 0x10009;
    FUN_140029790(&local_88,0,&local_228);
    puVar7 = (undefined8 *)CONCAT44(uStack_80._4_4_,(undefined4)uStack_80);
    local_108 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                 *)&DAT_1000100000000;
    if (puVar7 == (undefined8 *)CONCAT44(uStack_74,local_78)) {
      FUN_140029790(&local_88,puVar7,&local_108);
    }
    else {
      *puVar7 = &DAT_1000100000000;
      uStack_80 = (undefined8 *)(CONCAT44(uStack_80._4_4_,(undefined4)uStack_80) + 8);
    }
    local_50 = (vfunction1 *)0x1000b00000000;
    if (uStack_80 == (undefined8 *)CONCAT44(uStack_74,local_78)) {
      FUN_140029790(&local_88,uStack_80,&local_50);
    }
    else {
      *uStack_80 = 0x1000b00000000;
      uStack_80 = uStack_80 + 1;
    }
    (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x168))
              (*(longlong **)(*param_1 + 0x18),&local_228);
    pbVar13 = (byte *)CONCAT44(local_228._4_4_,(undefined4)local_228);
    local_228._0_4_ = 0;
    local_228._4_4_ = 0;
    pbVar19 = param_1[0x22];
    param_1[0x22] = pbVar13;
    if (pbVar19 != (byte *)0x0) {
      (**(code **)(*(longlong *)pbVar19 + 0x10))();
      plVar20 = (longlong *)CONCAT44(local_228._4_4_,(undefined4)local_228);
      if (plVar20 != (longlong *)0x0) {
        local_228._0_4_ = 0;
        local_228._4_4_ = 0;
        (**(code **)(*plVar20 + 0x10))();
      }
      pbVar13 = param_1[0x22];
    }
    if (pbVar13 == (byte *)0x0) {
      if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
        FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e1c710);
        if (DAT_14151e360 != 0) goto LAB_1404b7a11;
      }
      else {
LAB_1404b7a11:
        lVar22 = DAT_14151e360;
        local_108 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                     *)((ulonglong)local_108 & 0xffffffffffffff00);
        local_228 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                     **)&local_108;
        cVar9 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
        if (cVar9 == '\0') {
          do {
            local_228._0_4_ = 100;
            local_228._4_4_ = 0;
            FUN_140008100(&local_228);
            local_228 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                         **)&local_108;
            cVar9 = FUN_140b53dc0(lVar22,&PTR_DAT_140dc1aa0);
          } while (cVar9 == '\0');
        }
        if (((ulonglong)local_108 & 1) == 0) {
          do {
            local_228._0_4_ = 100;
            local_228._4_4_ = 0;
            FUN_140008100(&local_228);
          } while (((ulonglong)local_108 & 1) == 0);
        }
      }
      bVar2 = false;
    }
    else {
      uStack_204 = 0;
      uStack_200 = 0;
      uStack_1fc = 0;
      uStack_214 = 0;
      uStack_210 = 0;
      uStack_20e = 0;
      uStack_20d = 0;
      uStack_209 = 0;
      uStack_208 = 0;
      local_228._4_4_ = 0;
      uStack_220 = 0;
      uStack_21c = 0;
      local_218 = 0;
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      uStack_1f0 = 0;
      local_1ef = 0x2010102;
      uStack_1eb = 0xf0101;
      uStack_1e7 = 0x2010102;
      uStack_1e3 = 1;
      uStack_1e2 = 0xf01;
      uStack_1e0 = 0x1010200;
      uStack_1dc = 0xf010102;
      uStack_1d7 = 0xf010102010102;
      local_1cf = 0xf010102010102;
      uStack_1c7 = 0xf010102010102;
      local_1bf = 0xf010102010102;
      uStack_1b7 = 0xf010102010102;
      local_1af = 0x20101;
      uStack_1ab = 0xffff;
      uStack_1a7 = 0x8010101;
      uStack_1a3 = 0x8010101;
      local_19c = 0;
      uStack_19b = 0;
      uStack_19a = 0;
      uStack_199 = 0;
      uStack_198 = 0;
      local_197 = 0;
      uStack_196 = 0;
      local_158[0] = 0;
      local_158[1] = 0;
      local_158[2] = 0;
      local_158[3] = 0;
      local_158[4] = 0;
      local_158[5] = 0;
      local_158[6] = 0;
      local_158[7] = 0;
      local_158[8] = 0;
      local_194 = 0;
      uStack_18c = 0;
      local_184 = 0;
      uStack_17c = 0;
      local_174 = 0;
      uStack_16c = 0;
      local_164 = 0;
      local_228._0_4_ = CONCAT31(local_228._1_3_,3);
      pbVar19 = param_1[0x24];
      plVar20 = (longlong *)0x0;
      if (pbVar19 != (byte *)0x0) {
        if (pbVar19 != (byte *)0x0) {
          (**(code **)(*(longlong *)pbVar19 + 8))(pbVar19);
          plVar20 = (longlong *)CONCAT44(uStack_21c,uStack_220);
        }
        uStack_220 = SUB84(pbVar19,0);
        uStack_21c = (undefined4)((ulonglong)pbVar19 >> 0x20);
        if (plVar20 != (longlong *)0x0) {
          (**(code **)(*plVar20 + 0x10))();
        }
      }
      pbVar19 = param_1[0x25];
      pbVar13 = (byte *)CONCAT44(uStack_214,local_218);
      if (pbVar13 != pbVar19) {
        if (pbVar19 != (byte *)0x0) {
          (**(code **)(*(longlong *)pbVar19 + 8))(pbVar19);
          pbVar13 = (byte *)CONCAT44(uStack_214,local_218);
        }
        local_218 = SUB84(pbVar19,0);
        uStack_214 = (undefined4)((ulonglong)pbVar19 >> 0x20);
        if (pbVar13 != (byte *)0x0) {
          (**(code **)(*(longlong *)pbVar13 + 0x10))();
        }
      }
      pbVar19 = param_1[0x26];
      pbVar13 = (byte *)CONCAT44(uStack_1f4,uStack_1f8);
      if (pbVar13 != pbVar19) {
        if (pbVar19 != (byte *)0x0) {
          (**(code **)(*(longlong *)pbVar19 + 8))(pbVar19);
          pbVar13 = (byte *)CONCAT44(uStack_1f4,uStack_1f8);
        }
        uStack_1f8 = SUB84(pbVar19,0);
        uStack_1f4 = (undefined4)((ulonglong)pbVar19 >> 0x20);
        if (pbVar13 != (byte *)0x0) {
          (**(code **)(*(longlong *)pbVar13 + 0x10))();
        }
      }
      pbVar19 = param_1[0x22];
      if (pbVar19 != (byte *)0x0) {
        (**(code **)(*(longlong *)pbVar19 + 8))(pbVar19);
      }
      plVar20 = (longlong *)local_158[local_158[8]];
      local_158[local_158[8]] = (longlong)pbVar19;
      if (plVar20 != (longlong *)0x0) {
        (**(code **)(*plVar20 + 0x10))();
      }
      local_158[8] = local_158[8] + 1;
      uStack_19b = 1;
      uVar11 = FUN_140220660(*param_1);
      local_197 = 1 < uVar11;
      local_1af = CONCAT13(local_1af._3_1_,0x70001);
      local_108 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                   *)0x0;
      lStack_100 = 0;
      local_f8 = 0;
      local_f4 = 1;
      uVar10 = FUN_140220650(*param_1);
      *(undefined1 *)((longlong)&local_108 + lStack_100) = uVar10;
      lVar22 = lStack_100 + 1;
      lStack_100 = lStack_100 + 1;
      *(undefined1 *)((longlong)&local_108 + lVar22) = 0x21;
      lStack_100 = lStack_100 + 1;
      local_f8 = 0x36;
      uVar12 = FUN_140220660(*param_1);
      local_f4 = CONCAT44(local_f4._4_4_,uVar12);
      (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x140))
                (*(longlong **)(*param_1 + 0x18),&local_50);
      pvVar14 = local_50;
      local_50 = (vfunction1 *)0x0;
      pbVar19 = param_1[0x21];
      param_1[0x21] = (byte *)pvVar14;
      if (pbVar19 != (byte *)0x0) {
        (**(code **)(*(longlong *)pbVar19 + 0x10))();
        pvVar14 = local_50;
        if (local_50 != (vfunction1 *)0x0) {
          local_50 = (vfunction1 *)0x0;
          (**(code **)(*(longlong *)pvVar14 + 0x10))();
        }
        pvVar14 = (vfunction1 *)param_1[0x21];
      }
      bVar2 = pvVar14 != (vfunction1 *)0x0;
      if (pvVar14 == (vfunction1 *)0x0) {
        if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
          FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e1c738);
          if (DAT_14151e360 == 0) goto LAB_1404b79c5;
        }
        lVar22 = DAT_14151e360;
        local_41 = (vfunction1)0x0;
        local_50 = (vfunction1 *)&local_41;
        cVar9 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
        if (cVar9 == '\0') {
          do {
            local_50 = (vfunction1 *)0x64;
            FUN_140008100(&local_50);
            local_50 = (vfunction1 *)&local_41;
            cVar9 = FUN_140b53dc0(lVar22,&PTR_DAT_140dc1aa0);
          } while (cVar9 == '\0');
        }
        if (((byte)local_41 & 1) == 0) {
          do {
            local_50 = (vfunction1 *)0x64;
            FUN_140008100(&local_50);
          } while (((byte)local_41 & 1) == 0);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
LAB_1404b79c5:
      FUN_140197d40(&local_228);
    }
    if (local_88 != 0) {
      uVar15 = CONCAT44(uStack_74,local_78) - local_88;
      lVar22 = local_88;
      if (0xfff < uVar15) {
        lVar22 = *(longlong *)(local_88 + -8);
        if (0x1f < (ulonglong)((local_88 + -8) - lVar22)) goto LAB_1404b8158;
        uVar15 = uVar15 + 0x27;
      }
      thunk_FUN_140b68ba8(lVar22,uVar15);
    }
  }
  if (0xf < uStack_d0) {
    lVar6 = CONCAT26(uStack_e2,CONCAT24(uStack_e4,local_e8));
    uVar15 = uStack_d0 + 1;
    lVar22 = lVar6;
    if (0xfff < uVar15) {
      lVar22 = *(longlong *)(lVar6 + -8);
      if (0x1f < (ulonglong)((lVar6 + -8) - lVar22)) goto LAB_1404b8158;
      uVar15 = uStack_d0 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar22,uVar15);
  }
  if (!bVar2) {
    return 0;
  }
  uStack_210 = 0;
  uStack_20e = 0;
  uStack_20d = 0;
  uStack_209 = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  local_218 = 0;
  uStack_214 = 0;
  uStack_200 = 0xf;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  local_1ef = 0;
  uStack_1eb = CONCAT13(1,(undefined3)uStack_1eb);
  uStack_1e7 = 0;
  uStack_1e3 = 0;
  uStack_1e0 = 0;
  local_228._0_4_ = 0x60;
  local_228._4_4_ = 0;
  uStack_1f4 = 1;
  local_d8 = (undefined4 *)0x0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e2 = 0;
  uStack_e0 = 0;
  uStack_da = 0;
  local_108 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
               *)param_1;
  pcVar16 = (char *)FUN_140b65d30(0x20);
  local_e8 = (uint)pcVar16;
  uStack_e4 = (undefined2)((ulonglong)pcVar16 >> 0x20);
  uStack_e2 = (undefined2)((ulonglong)pcVar16 >> 0x30);
  local_d8 = (undefined4 *)&DAT_00000014;
  uStack_d0 = 0x1f;
  builtin_strncpy(pcVar16,"Skybox Vertex Buffer",0x15);
  if (CONCAT44(uStack_1fc,uStack_200) < 0x14) {
    FUN_1400069b0(&local_218,0x14);
  }
  else {
    puVar21 = (undefined4 *)CONCAT44(uStack_214,local_218);
    uStack_208 = 0x14;
    uStack_204 = 0;
    uVar12 = *(undefined4 *)pcVar16;
    uVar3 = *(undefined4 *)(pcVar16 + 4);
    uVar4 = *(undefined4 *)(pcVar16 + 8);
    uVar5 = *(undefined4 *)(pcVar16 + 0xc);
    puVar21[4] = *(undefined4 *)(pcVar16 + 0x10);
    *puVar21 = uVar12;
    puVar21[1] = uVar3;
    puVar21[2] = uVar4;
    puVar21[3] = uVar5;
    *(undefined1 *)(puVar21 + 5) = 0;
  }
  uStack_1eb = CONCAT13(4,(undefined3)uStack_1eb);
  uStack_1e7 = 0x1000000;
  thunk_FUN_140b68ba8(pcVar16,0x20);
  (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x88))
            (*(longlong **)(*param_1 + 0x18),&local_e8,&local_228);
  pbVar13 = (byte *)CONCAT26(uStack_e2,CONCAT24(uStack_e4,local_e8));
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e2 = 0;
  pbVar19 = param_1[0x29];
  param_1[0x29] = pbVar13;
  if (pbVar19 != (byte *)0x0) {
    (**(code **)(*(longlong *)pbVar19 + 0x10))();
    plVar20 = (longlong *)CONCAT26(uStack_e2,CONCAT24(uStack_e4,local_e8));
    if (plVar20 != (longlong *)0x0) {
      local_e8 = 0;
      uStack_e4 = 0;
      uStack_e2 = 0;
      (**(code **)(*plVar20 + 0x10))();
    }
    pbVar13 = param_1[0x29];
  }
  if (pbVar13 == (byte *)0x0) {
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e1c760);
      if (DAT_14151e360 != 0) goto LAB_1404b7d93;
    }
    else {
LAB_1404b7d93:
      lVar22 = DAT_14151e360;
      local_98 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                  *)((ulonglong)local_98 & 0xffffffffffffff00);
      local_e8 = (uint)&local_98;
      uVar11 = local_e8;
      uStack_e4 = (undefined2)((ulonglong)&local_98 >> 0x20);
      uVar1 = uStack_e4;
      uStack_e2 = (undefined2)((ulonglong)&local_98 >> 0x30);
      uVar8 = uStack_e2;
      cVar9 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_e8);
      if (cVar9 == '\0') {
        do {
          local_e8 = 100;
          uStack_e4 = 0;
          uStack_e2 = 0;
          FUN_140008100(&local_e8);
          local_e8 = uVar11;
          uStack_e4 = uVar1;
          uStack_e2 = uVar8;
          cVar9 = FUN_140b53dc0(lVar22,&PTR_DAT_140dc1aa0,&local_e8);
        } while (cVar9 == '\0');
      }
      if (((ulonglong)local_98 & 1) == 0) {
        do {
          local_e8 = 100;
          uStack_e4 = 0;
          uStack_e2 = 0;
          FUN_140008100(&local_e8);
        } while (((ulonglong)local_98 & 1) == 0);
      }
    }
    uVar12 = 0;
  }
  else {
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_e0 = 0;
    uStack_da = 0;
    local_d8 = (undefined4 *)0x0;
    uStack_c0 = 0xf;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b2 = 0;
    uStack_b0 = 0;
    local_a8 = 1;
    local_a4 = 0;
    local_a0 = 0;
    local_e8 = 0x48;
    uStack_e4 = 0;
    uStack_e2 = 0;
    uStack_b3 = 1;
    local_88 = 0;
    uStack_80._0_4_ = 0;
    uStack_80._4_4_ = 0;
    local_98 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                *)0x0;
    puStack_90 = (undefined8 *)0x0;
    p_Var17 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
               *)FUN_140b65d30(0x20);
    local_88 = 0x13;
    uStack_80._0_4_ = 0x1f;
    uStack_80._4_4_ = 0;
    *(undefined4 *)&p_Var17->vfunction1 = 0x62796b53;
    pbVar19 = (byte *)((longlong)&p_Var17->vfunction1 + 4);
    pbVar19[0] = 'o';
    pbVar19[1] = 'x';
    pbVar19[2] = ' ';
    pbVar19[3] = 'I';
    *(undefined4 *)&p_Var17->vfunction1 = 0x7865646e;
    builtin_strncpy((char *)((longlong)&p_Var17->vfunction1 + 4)," Buf",4);
    *(undefined4 *)((longlong)&p_Var17->vfunction1 + 7) = 0x72656666;
    *(undefined1 *)((longlong)&p_Var17->vfunction3 + 3) = 0;
    if (uStack_c0 < 0x13) {
      local_98 = p_Var17;
      FUN_1400069b0(&local_d8,0x13);
    }
    else {
      local_c8 = 0x13;
      uVar12 = *(undefined4 *)&p_Var17->vfunction1;
      uVar3 = *(undefined4 *)((longlong)&p_Var17->vfunction1 + 4);
      uVar4 = *(undefined4 *)&p_Var17->vfunction1;
      uVar5 = *(undefined4 *)((longlong)&p_Var17->vfunction1 + 4);
      uVar1 = *(undefined2 *)&p_Var17->vfunction3;
      *(undefined1 *)((longlong)local_d8 + 0x12) =
           *(undefined1 *)((longlong)&p_Var17->vfunction3 + 2);
      *(undefined2 *)(local_d8 + 4) = uVar1;
      *local_d8 = uVar12;
      local_d8[1] = uVar3;
      local_d8[2] = uVar4;
      local_d8[3] = uVar5;
      *(undefined1 *)((longlong)local_d8 + 0x13) = 0;
      local_98 = p_Var17;
    }
    local_a8 = 8;
    local_a4 = CONCAT11(local_a4._1_1_,1);
    thunk_FUN_140b68ba8(p_Var17,0x20);
    (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x88))
              (*(longlong **)(*param_1 + 0x18),&local_98,&local_e8);
    p_Var17 = local_98;
    local_98 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                *)0x0;
    pbVar19 = param_1[0x2a];
    param_1[0x2a] = (byte *)p_Var17;
    if (pbVar19 != (byte *)0x0) {
      (**(code **)(*(longlong *)pbVar19 + 0x10))();
      p_Var17 = local_98;
      if (local_98 !=
          (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
           *)0x0) {
        local_98 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                    *)0x0;
        (**(code **)(p_Var17->vfunction1 + 0x10))();
      }
      p_Var17 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                 *)param_1[0x2a];
    }
    if (p_Var17 ==
        (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
         *)0x0) {
      if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
         (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e1c788),
         DAT_14151e360 != 0)) {
        lVar22 = DAT_14151e360;
        local_50 = (vfunction1 *)((ulonglong)local_50 & 0xffffffffffffff00);
        local_98 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                    *)&local_50;
        cVar9 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_98);
        while (cVar9 == '\0') {
          local_98 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                      *)0x64;
          FUN_140008100(&local_98);
          local_98 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                      *)&local_50;
          cVar9 = FUN_140b53dc0(lVar22,&PTR_DAT_140dc1aa0,&local_98);
        }
        if (((ulonglong)local_50 & 1) == 0) {
          do {
            local_98 = (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                        *)0x64;
            FUN_140008100(&local_98);
          } while (((ulonglong)local_50 & 1) == 0);
        }
      }
      uVar12 = 0;
    }
    else {
      local_98 = &std::
                  _Func_impl_no_alloc<`bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)'::`1'::<lambda_0>,void,nvrhi::ICommandList*___ptr64>
                  ::vftable;
      puStack_90 = &local_108;
      local_60 = &local_98;
      uVar12 = FUN_1404b89c0(*param_1,&local_98);
      if (local_60 !=
          (_Func_impl_no_alloc<_bool___cdecl__anon_627F7237::create_mesh(gfx_skybox*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
           **)0x0) {
        (*(*local_60)->vfunction5)(local_60,local_60 != &local_98);
      }
    }
    if (0xf < uStack_c0) {
      uVar15 = uStack_c0 + 1;
      puVar21 = local_d8;
      if (0xfff < uVar15) {
        puVar21 = *(undefined4 **)(local_d8 + -2);
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_d8 + (-8 - (longlong)puVar21)))
        goto LAB_1404b8158;
        uVar15 = uStack_c0 + 0x28;
      }
      thunk_FUN_140b68ba8(puVar21,uVar15);
    }
  }
  uVar15 = CONCAT44(uStack_1fc,uStack_200);
  if (uVar15 < 0x10) {
    return uVar12;
  }
  lVar6 = CONCAT44(uStack_214,local_218);
  uVar18 = uVar15 + 1;
  lVar22 = lVar6;
  if (0xfff < uVar18) {
    lVar22 = *(longlong *)(lVar6 + -8);
    if (0x1f < (ulonglong)((lVar6 + -8) - lVar22)) {
LAB_1404b8158:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar18 = uVar15 + 0x28;
  }
  thunk_FUN_140b68ba8(lVar22,uVar18);
  return uVar12;
}

