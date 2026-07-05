/**
 * Function: renderer_clear_targets
 * Address:  14021cd90
 * Signature: undefined renderer_clear_targets(void)
 * Body size: 2259 bytes
 */


void renderer_clear_targets
               (int *param_1,ulonglong param_2,undefined8 param_3,
               _Func_impl_no_alloc<_bool___cdecl_httplib::detail::prepare_content_receiver<httplib::Response,_bool___cdecl_httplib::detail::read_content<httplib::Response>(httplib::Stream&___ptr64,httplib::Response&___ptr64,unsigned___int64,int&___ptr64,std::function<bool___cdecl(unsigned___int64,unsigned___int64)>,std::function<bool___cdecl(char_const*___ptr64,unsigned___int64,unsigned___int64,unsigned___int64)>,bool)_::_1_::<lambda_1>_>(httplib::Response&___ptr64,int&___ptr64,std::function<bool___cdecl(char_const*___ptr64,unsigned___int64,unsigned___int64,unsigned___int64)>,bool,_bool___cdecl_httplib::detail::read_content<httplib::Response>(httplib::Stream&___ptr64,httplib::Response&___ptr64,unsigned___int64,int&___ptr64,std::function<bool___cdecl(unsigned___int64,unsigned___int64)>,std::function<bool___cdecl(char_const*___ptr64,unsigned___int64,unsigned___int64,unsigned___int64)>,bool)_::_1_::<lambda_1>)_::_1_::<lambda_1>,bool,char_const*___ptr64,unsigned___int64,unsigned___int64,unsigned___int64>
               *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  ulonglong uVar13;
  char *pcVar14;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a0 [32];
  undefined1 local_80 [40];
  longlong local_58;
  longlong local_50;
  byte local_42;
  byte local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar7 = FUN_1401a9cc0();
  bVar12 = *(byte *)(lVar7 + 0x288);
  if ((bVar12 & 1) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_1401a9cc0();
    lVar7 = *(longlong *)(lVar7 + 0x290);
    lVar8 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar8 + 0x28);
    lVar9 = lVar8;
    if ((uVar10 & 0xffff) == 0) {
      lVar9 = FUN_1400637c0(lVar8,uVar10);
    }
    lVar1 = *(longlong *)(lVar8 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar1 + uVar11) = 0xf;
    uVar3 = rdtsc();
    param_2 = uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
    *(ulonglong *)(lVar1 + 1 + uVar11) = param_2;
    *(undefined ***)(lVar1 + 9 + uVar11) = &PTR_s_Renderer_Begin_Frame_140df4b30;
    *(ulonglong *)(lVar8 + 0x28) = uVar10 + 1;
  }
  if (((param_1 == (int *)0x0) || (*(longlong *)(param_1 + 4) == 0)) ||
     (param_1[0x30] = 0, *(char *)((longlong)param_1 + 0xba) != '\0')) goto LAB_14021d5f7;
  local_58 = lVar7;
  local_42 = bVar12;
  lVar7 = FUN_1401a9cc0();
  local_41 = *(byte *)(lVar7 + 0x288);
  if ((local_41 & 1) == 0) {
    local_50 = 0;
  }
  else {
    lVar7 = FUN_1401a9cc0();
    lVar7 = *(longlong *)(lVar7 + 0x290);
    lVar8 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar8 + 0x28);
    lVar9 = lVar8;
    if ((uVar10 & 0xffff) == 0) {
      lVar9 = FUN_1400637c0(lVar8,uVar10);
    }
    lVar1 = *(longlong *)(lVar8 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar1 + uVar11) = 0xf;
    uVar3 = rdtsc();
    param_2 = uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
    *(ulonglong *)(lVar1 + 1 + uVar11) = param_2;
    *(undefined ***)(lVar1 + 9 + uVar11) = &PTR_s_Renderer_Ensure_Camera_Buffer_140df4b50;
    *(ulonglong *)(lVar8 + 0x28) = uVar10 + 1;
    local_50 = lVar7;
  }
  uVar10 = renderer_camera_constants(param_1,param_2,param_3,param_4);
  bVar12 = local_42;
  if (((local_41 & 1) != 0) && (lVar7 = FUN_1401a9cc0(), *(longlong *)(lVar7 + 0x290) == local_50))
  {
    lVar9 = FUN_1401a9e60();
    uVar3 = *(ulonglong *)(lVar9 + 0x28);
    lVar7 = lVar9;
    if ((uVar3 & 0xffff) == 0) {
      lVar7 = FUN_1400637c0(lVar9,uVar3);
    }
    lVar8 = *(longlong *)(lVar9 + 0x48);
    uVar13 = (ulonglong)(uint)((int)(uVar3 & 0xffff) << 5);
    *(undefined1 *)(lVar8 + uVar13) = 0x11;
    uVar11 = rdtsc();
    *(ulonglong *)(lVar8 + 1 + uVar13) =
         uVar11 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar7 >> 0x20),(int)uVar11);
    *(ulonglong *)(lVar9 + 0x28) = uVar3 + 1;
  }
  lVar7 = local_58;
  if ((char)uVar10 == '\0') goto LAB_14021d5f7;
  if ((*(longlong **)(param_1 + 4) == (longlong *)0x0) ||
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 4) + 0x38))(), iVar4 == 0)) {
    uVar10 = 0;
  }
  else {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 4) + 0x58))();
    uVar10 = (ulonglong)(uVar5 % 3);
  }
  *(undefined1 *)((longlong)param_1 + uVar10 + 0xb7) = 0;
  lVar7 = FUN_1401a9cc0();
  local_41 = *(byte *)(lVar7 + 0x288);
  if ((local_41 & 1) == 0) {
    local_50 = 0;
  }
  else {
    lVar7 = FUN_1401a9cc0();
    lVar7 = *(longlong *)(lVar7 + 0x290);
    lVar8 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar8 + 0x28);
    lVar9 = lVar8;
    if ((uVar10 & 0xffff) == 0) {
      lVar9 = FUN_1400637c0(lVar8,uVar10);
    }
    lVar1 = *(longlong *)(lVar8 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar1 + uVar11) = 0xf;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar1 + 1 + uVar11) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
    *(undefined ***)(lVar1 + 9 + uVar11) = &PTR_s_Renderer_Wait_Frame_Slot_140df4b70;
    *(ulonglong *)(lVar8 + 0x28) = uVar10 + 1;
    local_50 = lVar7;
  }
  FUN_14021dbe0(param_1);
  if (((local_41 & 1) != 0) && (lVar7 = FUN_1401a9cc0(), *(longlong *)(lVar7 + 0x290) == local_50))
  {
    lVar9 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar9 + 0x28);
    lVar7 = lVar9;
    if ((uVar10 & 0xffff) == 0) {
      lVar7 = FUN_1400637c0(lVar9,uVar10);
    }
    lVar8 = *(longlong *)(lVar9 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar8 + uVar11) = 0x11;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar8 + 1 + uVar11) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar7 >> 0x20),(int)uVar3);
    *(ulonglong *)(lVar9 + 0x28) = uVar10 + 1;
  }
  lVar7 = FUN_1401a9cc0();
  local_41 = *(byte *)(lVar7 + 0x288);
  if ((local_41 & 1) == 0) {
    local_50 = 0;
  }
  else {
    lVar7 = FUN_1401a9cc0();
    lVar7 = *(longlong *)(lVar7 + 0x290);
    lVar8 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar8 + 0x28);
    lVar9 = lVar8;
    if ((uVar10 & 0xffff) == 0) {
      lVar9 = FUN_1400637c0(lVar8,uVar10);
    }
    lVar1 = *(longlong *)(lVar8 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar1 + uVar11) = 0xf;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar1 + 1 + uVar11) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
    *(undefined ***)(lVar1 + 9 + uVar11) = &PTR_s_Renderer_Acquire_Next_Image_140df4b90;
    *(ulonglong *)(lVar8 + 0x28) = uVar10 + 1;
    local_50 = lVar7;
  }
  iVar4 = (**(code **)(**(longlong **)(param_1 + 4) + 0x28))();
  param_1[0x2a] = iVar4;
  if ((local_41 & 1) != 0) {
    lVar7 = FUN_1401a9cc0();
    if (*(longlong *)(lVar7 + 0x290) == local_50) {
      lVar9 = FUN_1401a9e60();
      uVar10 = *(ulonglong *)(lVar9 + 0x28);
      lVar7 = lVar9;
      if ((uVar10 & 0xffff) == 0) {
        lVar7 = FUN_1400637c0(lVar9,uVar10);
      }
      lVar8 = *(longlong *)(lVar9 + 0x48);
      uVar11 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
      *(undefined1 *)(lVar8 + uVar11) = 0x11;
      uVar3 = rdtsc();
      *(ulonglong *)(lVar8 + 1 + uVar11) =
           uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar7 >> 0x20),(int)uVar3);
      *(ulonglong *)(lVar9 + 0x28) = uVar10 + 1;
    }
    iVar4 = param_1[0x2a];
  }
  if (iVar4 == -1) {
    *(undefined1 *)((longlong)param_1 + 0xba) = 1;
    lVar7 = local_58;
    bVar12 = local_42;
    goto LAB_14021d5f7;
  }
  lVar7 = FUN_1401a9cc0();
  local_41 = *(byte *)(lVar7 + 0x288);
  if ((local_41 & 1) == 0) {
    local_50 = 0;
  }
  else {
    lVar7 = FUN_1401a9cc0();
    lVar7 = *(longlong *)(lVar7 + 0x290);
    lVar8 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar8 + 0x28);
    lVar9 = lVar8;
    if ((uVar10 & 0xffff) == 0) {
      lVar9 = FUN_1400637c0(lVar8,uVar10);
    }
    lVar1 = *(longlong *)(lVar8 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar1 + uVar11) = 0xf;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar1 + 1 + uVar11) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
    *(undefined ***)(lVar1 + 9 + uVar11) = &PTR_s_Renderer_Wait_Image_Available_140df4bb0;
    *(ulonglong *)(lVar8 + 0x28) = uVar10 + 1;
    local_50 = lVar7;
  }
  (**(code **)(**(longlong **)(param_1 + 4) + 0x60))();
  if (((local_41 & 1) != 0) && (lVar7 = FUN_1401a9cc0(), *(longlong *)(lVar7 + 0x290) == local_50))
  {
    lVar9 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar9 + 0x28);
    lVar7 = lVar9;
    if ((uVar10 & 0xffff) == 0) {
      lVar7 = FUN_1400637c0(lVar9,uVar10);
    }
    lVar8 = *(longlong *)(lVar9 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar8 + uVar11) = 0x11;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar8 + 1 + uVar11) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar7 >> 0x20),(int)uVar3);
    *(ulonglong *)(lVar9 + 0x28) = uVar10 + 1;
  }
  lVar7 = FUN_1401a9cc0();
  local_41 = *(byte *)(lVar7 + 0x288);
  if ((local_41 & 1) == 0) {
    local_50 = 0;
  }
  else {
    lVar7 = FUN_1401a9cc0();
    lVar7 = *(longlong *)(lVar7 + 0x290);
    lVar8 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar8 + 0x28);
    lVar9 = lVar8;
    if ((uVar10 & 0xffff) == 0) {
      lVar9 = FUN_1400637c0(lVar8,uVar10);
    }
    lVar1 = *(longlong *)(lVar8 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar1 + uVar11) = 0xf;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar1 + 1 + uVar11) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
    *(undefined ***)(lVar1 + 9 + uVar11) = &PTR_s_Renderer_Open___Clear_Targets_140df4bd0;
    *(ulonglong *)(lVar8 + 0x28) = uVar10 + 1;
    local_50 = lVar7;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_1401a3690(local_a0,param_1,"Renderer Clear Targets",0x1b4,
                "/opt/actions-runner/_work/Platform/Platform/graphics/intern/renderer.cpp",
                "gfx_renderer_begin_frame");
  FUN_1401a43a0(local_80);
  FUN_1401a44e0();
  if (*(longlong *)(param_1 + 0x24) == 0) {
    lVar7 = *(longlong *)(param_1 + 0x1c);
    if (lVar7 != *(longlong *)(param_1 + 0x1e)) {
      uVar5 = param_1[0x2a];
      if ((uVar5 == 0xffffffff) || (*(longlong **)(param_1 + 4) == (longlong *)0x0)) {
        uVar10 = 0;
      }
      else {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 4) + 0x38))();
        uVar10 = 0;
        if (uVar5 < uVar6) {
          uVar10 = (ulonglong)(uint)param_1[0x2a];
        }
        lVar7 = *(longlong *)(param_1 + 0x1c);
      }
      plVar2 = *(longlong **)(lVar7 + uVar10 * 8);
      goto joined_r0x00014021d3b0;
    }
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x22);
joined_r0x00014021d3b0:
    if (plVar2 != (longlong *)0x0) {
      FUN_1401a3690(local_a0,param_1,"Renderer Clear Scene Color",0x1b8,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/intern/renderer.cpp",
                    "gfx_renderer_begin_frame");
      local_e8 = 0x3d4ccccd;
      uStack_e4 = 0x3d8f5c29;
      uStack_e0 = 0x3df5c28f;
      uStack_dc = 0x3f800000;
      FUN_140527a70(*(undefined8 *)(param_1 + 8),plVar2,0,&local_e8);
      FUN_1401a43a0(local_80);
      FUN_1401a44e0(local_a0);
      lVar7 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if (*(longlong *)(lVar7 + 0x20) != 0) {
        FUN_1401a3690(local_a0,param_1,"Renderer Clear Entity IDs",0x1bd,
                      "/opt/actions-runner/_work/Platform/Platform/graphics/intern/renderer.cpp",
                      "gfx_renderer_begin_frame");
        local_d8 = *(undefined4 *)(lVar7 + 0x28);
        uStack_d4 = *(undefined4 *)(lVar7 + 0x2c);
        uStack_d0 = *(undefined4 *)(lVar7 + 0x30);
        uStack_cc = *(undefined4 *)(lVar7 + 0x34);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x50))
                  (*(longlong **)(param_1 + 8),*(undefined8 *)(lVar7 + 0x20),&local_d8,0);
        FUN_1401a43a0(local_80);
        FUN_1401a44e0(local_a0);
      }
    }
  }
  if ((*(longlong **)(param_1 + 4) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 4) + 0x38))(), iVar4 != 0)) {
    plVar2 = *(longlong **)(param_1 + 4);
    uVar5 = param_1[0x2a];
    iVar4 = 0;
    if (plVar2 != (longlong *)0x0 && uVar5 != 0xffffffff) {
      uVar6 = (**(code **)(*plVar2 + 0x38))(plVar2,0);
      iVar4 = 0;
      if (uVar5 < uVar6) {
        iVar4 = param_1[0x2a];
      }
    }
    lVar7 = (**(code **)(*plVar2 + 0x40))(plVar2,iVar4);
    lVar7 = *(longlong *)(lVar7 + 8);
    if (lVar7 != 0) {
      FUN_1401a3690(local_a0,param_1,"Renderer Clear Backbuffer",0x1c2,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/intern/renderer.cpp",
                    "gfx_renderer_begin_frame");
      local_c8 = 0x3d4ccccd;
      uStack_c4 = 0x3d8f5c29;
      uStack_c0 = 0x3df5c28f;
      uStack_bc = 0x3f800000;
      FUN_140527a70(*(undefined8 *)(param_1 + 8),lVar7,0,&local_c8);
      FUN_1401a43a0(local_80);
      FUN_1401a44e0(local_a0);
    }
  }
  if (*(longlong *)(param_1 + 0x14) != 0) {
    pcVar14 = "/opt/actions-runner/_work/Platform/Platform/graphics/intern/renderer.cpp";
    FUN_1401a3690(local_a0,param_1,"Renderer Clear Depth",0x1c6,
                  "/opt/actions-runner/_work/Platform/Platform/graphics/intern/renderer.cpp",
                  "gfx_renderer_begin_frame");
    local_b8 = 0;
    uStack_b4 = 0xffffffff;
    uStack_b0 = 0;
    uStack_ac = 0xffffffff;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
              (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x14),&local_b8,1,
               (ulonglong)pcVar14 & 0xffffffff00000000,1,0);
    FUN_1401a43a0(local_80);
    FUN_1401a44e0(local_a0);
  }
  bVar12 = local_42;
  lVar7 = local_58;
  if (((local_41 & 1) != 0) && (lVar9 = FUN_1401a9cc0(), *(longlong *)(lVar9 + 0x290) == local_50))
  {
    lVar8 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar8 + 0x28);
    lVar9 = lVar8;
    if ((uVar10 & 0xffff) == 0) {
      lVar9 = FUN_1400637c0(lVar8,uVar10);
    }
    lVar1 = *(longlong *)(lVar8 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar1 + uVar11) = 0x11;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar1 + 1 + uVar11) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
    *(ulonglong *)(lVar8 + 0x28) = uVar10 + 1;
  }
LAB_14021d5f7:
  if (((bVar12 & 1) != 0) && (lVar9 = FUN_1401a9cc0(), *(longlong *)(lVar9 + 0x290) == lVar7)) {
    lVar9 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar9 + 0x28);
    lVar7 = lVar9;
    if ((uVar10 & 0xffff) == 0) {
      lVar7 = FUN_1400637c0(lVar9,uVar10);
    }
    lVar8 = *(longlong *)(lVar9 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar8 + uVar11) = 0x11;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar8 + 1 + uVar11) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar7 >> 0x20),(int)uVar3);
    *(ulonglong *)(lVar9 + 0x28) = uVar10 + 1;
  }
  return;
}

