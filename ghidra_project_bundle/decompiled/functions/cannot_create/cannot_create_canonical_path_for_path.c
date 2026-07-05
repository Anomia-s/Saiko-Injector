/**
 * Function: cannot_create_canonical_path_for_path
 * Address:  14003c210
 * Signature: undefined __thiscall cannot_create_canonical_path_for_path(void * this)
 * Body size: 3654 bytes
 */


void * __thiscall
cannot_create_canonical_path_for_path
          (void *this,longlong *param_2,undefined8 param_3,longlong param_4,longlong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  longlong *plVar13;
  void *pvVar14;
  QuillError_vftable *local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  QuillError_vftable *local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 local_230 [32];
  undefined1 local_210 [8];
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0 [32];
  undefined1 local_1d0 [32];
  undefined1 local_1b0 [32];
  undefined1 local_190 [8];
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined7 uStack_16f;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined1 local_100;
  longlong local_f8;
  longlong local_f0 [3];
  ulonglong local_d8;
  int local_d0 [2];
  undefined **local_c8;
  void *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  ulonglong uStack_98;
  longlong *local_90;
  undefined8 ***local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined8 ***local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_100 = 0;
  local_b8 = param_2;
  if (*(char *)(param_4 + 0x70) == '\x01') {
    FUN_1400311e0(&local_170,param_4);
    local_100 = 1;
                    /* inlined constructor: quill::v11::Sink::Sink
                       inlined constructor: quill::v11::StreamSink::StreamSink */
    *(Sink_vftable **)this = &quill::v11::Sink::vftable;
    *(undefined8 *)((longlong)this + 0x18) = local_160;
    *(undefined8 *)((longlong)this + 0x20) = uStack_158;
    *(ulonglong *)((longlong)this + 8) = CONCAT71(uStack_16f,local_170);
    *(undefined8 *)((longlong)this + 0x10) = uStack_168;
    local_160 = 0;
    uStack_158 = 0xf;
    local_170 = 0;
    *(undefined8 *)((longlong)this + 0x38) = local_140;
    *(undefined8 *)((longlong)this + 0x40) = uStack_138;
    *(ulonglong *)((longlong)this + 0x28) = CONCAT71(uStack_14f,local_150);
    *(undefined8 *)((longlong)this + 0x30) = uStack_148;
    local_140 = 0;
    uStack_138 = 0xf;
    local_150 = 0;
    *(undefined4 *)((longlong)this + 0x58) = (undefined4)local_120;
    *(undefined4 *)((longlong)this + 0x5c) = local_120._4_4_;
    *(undefined4 *)((longlong)this + 0x60) = (undefined4)uStack_118;
    *(undefined4 *)((longlong)this + 100) = uStack_118._4_4_;
    *(ulonglong *)((longlong)this + 0x48) = CONCAT71(uStack_12f,local_130);
    *(undefined8 *)((longlong)this + 0x50) = uStack_128;
    local_120 = 0;
    uStack_118 = 0xf;
    local_130 = 0;
    *(undefined4 *)((longlong)this + 0x70) = local_108;
    *(undefined8 *)((longlong)this + 0x68) = local_110;
    *(undefined1 *)((longlong)this + 0x78) = 1;
    *(undefined8 *)((longlong)this + 0x80) = 0;
    *(undefined8 *)((longlong)this + 0x88) = 0;
    *(undefined8 *)((longlong)this + 0x90) = 0;
    *(undefined8 *)((longlong)this + 0x98) = 0;
    *(undefined8 *)((longlong)this + 0xa0) = 0;
    *(undefined8 *)((longlong)this + 0xa8) = 0;
    *(undefined8 *)((longlong)this + 0xb0) = 0;
    *(undefined8 *)((longlong)this + 0xb8) = 0;
    *(undefined4 *)((longlong)this + 0xbf) = 0;
    FUN_14000f270(&local_170);
  }
  else {
    *(Sink_vftable **)this = &quill::v11::Sink::vftable;
    *(undefined1 *)((longlong)this + 0x78) = 0;
    *(undefined8 *)((longlong)this + 0x80) = 0;
    *(undefined8 *)((longlong)this + 0x88) = 0;
    *(undefined8 *)((longlong)this + 0x90) = 0;
    *(undefined8 *)((longlong)this + 0x98) = 0;
    *(undefined8 *)((longlong)this + 0xa0) = 0;
    *(undefined8 *)((longlong)this + 0xa8) = 0;
    *(undefined8 *)((longlong)this + 0xb0) = 0;
    *(undefined8 *)((longlong)this + 0xb8) = 0;
    *(undefined4 *)((longlong)this + 0xbf) = 0;
  }
  *(StreamSink_vftable **)this = &quill::v11::StreamSink::vftable;
  local_90 = (longlong *)((longlong)this + 200);
  *(undefined8 *)((longlong)this + 0xd8) = 0;
  *(undefined8 *)((longlong)this + 0xe0) = 0;
  *(undefined8 *)((longlong)this + 200) = 0;
  *(undefined8 *)((longlong)this + 0xd0) = 0;
  lVar11 = *local_b8;
  uVar5 = *(undefined4 *)((longlong)local_b8 + 4);
  lVar10 = local_b8[1];
  uVar1 = *(undefined4 *)((longlong)local_b8 + 0xc);
  uVar2 = *(undefined4 *)((longlong)local_b8 + 0x14);
  lVar4 = local_b8[3];
  uVar3 = *(undefined4 *)((longlong)local_b8 + 0x1c);
  *(int *)((longlong)this + 0xd8) = (int)local_b8[2];
  *(undefined4 *)((longlong)this + 0xdc) = uVar2;
  *(int *)((longlong)this + 0xe0) = (int)lVar4;
  *(undefined4 *)((longlong)this + 0xe4) = uVar3;
  *(int *)((longlong)this + 200) = (int)lVar11;
  *(undefined4 *)((longlong)this + 0xcc) = uVar5;
  *(int *)((longlong)this + 0xd0) = (int)lVar10;
  *(undefined4 *)((longlong)this + 0xd4) = uVar1;
  local_b8[2] = 0;
  local_b8[3] = 7;
  *(undefined2 *)local_b8 = 0;
  *(undefined8 *)((longlong)this + 0xe8) = param_3;
  *(undefined8 *)((longlong)this + 0xf0) = 0;
  local_f8 = (longlong)this + 0xf8;
  FUN_14003c030(local_f8,param_5);
  *(undefined2 *)((longlong)this + 0x238) = 0;
  uStack_80 = 0;
  local_78 = 6;
  uStack_70 = 0xf;
  local_88 = (undefined8 ****)0x74756f647473;
  uStack_a8 = 6;
  local_c0 = this;
  local_b0 = &local_88;
  uVar5 = FUN_140b6625c();
  FUN_140004460(&local_68,uVar5,&local_b0);
  local_b0 = &local_68;
  if (7 < uStack_50) {
    local_b0 = (undefined8 ****)local_68;
  }
  uStack_a8 = local_58;
  iVar6 = FUN_14003e220(local_90,&local_b0);
  if (7 < uStack_50) {
    uVar7 = uStack_50 * 2 + 2;
    ppppuVar12 = (undefined8 ****)local_68;
    if (0xfff < uVar7) {
      ppppuVar12 = (undefined8 ****)local_68[-1];
      if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppuVar12))) goto LAB_14003cf62;
      uVar7 = uStack_50 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(ppppuVar12,uVar7);
  }
  plVar13 = local_b8;
  local_58 = 0;
  uStack_50 = 7;
  local_68 = (undefined8 ***)((ulonglong)local_68 & 0xffffffffffff0000);
  if (0xf < uStack_70) {
    uVar7 = uStack_70 + 1;
    ppppuVar12 = (undefined8 ****)local_88;
    if (0xfff < uVar7) {
      ppppuVar12 = (undefined8 ****)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar12))) goto LAB_14003cf62;
      uVar7 = uStack_70 + 0x28;
    }
    thunk_FUN_140b68ba8(ppppuVar12,uVar7);
  }
  if (iVar6 == 0) {
    uVar9 = 1;
LAB_14003cabd:
    uVar9 = __acrt_iob_func(uVar9);
    *(undefined8 *)((longlong)local_c0 + 0xe8) = uVar9;
    pvVar14 = local_c0;
  }
  else {
    uStack_80 = 0;
    local_78 = 6;
    uStack_70 = 0xf;
    local_88 = (undefined8 ****)0x727265647473;
    uStack_a8 = 6;
    local_b0 = &local_88;
    uVar5 = FUN_140b6625c();
    FUN_140004460(&local_68,uVar5,&local_b0);
    local_b0 = &local_68;
    if (7 < uStack_50) {
      local_b0 = (undefined8 ****)local_68;
    }
    uStack_a8 = local_58;
    iVar6 = FUN_14003e220(local_90,&local_b0);
    plVar13 = local_b8;
    if (7 < uStack_50) {
      uVar7 = uStack_50 * 2 + 2;
      ppppuVar12 = (undefined8 ****)local_68;
      if (0xfff < uVar7) {
        ppppuVar12 = (undefined8 ****)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppuVar12)))
        goto LAB_14003cf62;
        uVar7 = uStack_50 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(ppppuVar12,uVar7);
    }
    local_58 = 0;
    uStack_50 = 7;
    local_68 = (undefined8 ***)((ulonglong)local_68 & 0xffffffffffff0000);
    if (0xf < uStack_70) {
      uVar7 = uStack_70 + 1;
      ppppuVar12 = (undefined8 ****)local_88;
      if (0xfff < uVar7) {
        ppppuVar12 = (undefined8 ****)local_88[-1];
        if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar12)))
        goto LAB_14003cf62;
        uVar7 = uStack_70 + 0x28;
      }
      thunk_FUN_140b68ba8(ppppuVar12,uVar7);
    }
    if (iVar6 == 0) {
      uVar9 = 2;
      goto LAB_14003cabd;
    }
    local_78 = 9;
    uStack_70 = 0xf;
    local_88 = (undefined8 ****)0x6c756e2f7665642f;
    uStack_80 = 0x6c;
    uStack_a8 = 9;
    local_b0 = &local_88;
    uVar5 = FUN_140b6625c();
    FUN_140004460(&local_68,uVar5,&local_b0);
    local_b0 = &local_68;
    if (7 < uStack_50) {
      local_b0 = (undefined8 ****)local_68;
    }
    uStack_a8 = local_58;
    iVar6 = FUN_14003e220(local_90,&local_b0);
    plVar13 = local_b8;
    if (7 < uStack_50) {
      uVar7 = uStack_50 * 2 + 2;
      ppppuVar12 = (undefined8 ****)local_68;
      if (0xfff < uVar7) {
        ppppuVar12 = (undefined8 ****)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppuVar12)))
        goto LAB_14003cf62;
        uVar7 = uStack_50 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(ppppuVar12,uVar7);
    }
    local_58 = 0;
    uStack_50 = 7;
    local_68 = (undefined8 ***)((ulonglong)local_68 & 0xffffffffffff0000);
    if (0xf < uStack_70) {
      uVar7 = uStack_70 + 1;
      ppppuVar12 = (undefined8 ****)local_88;
      if (0xfff < uVar7) {
        ppppuVar12 = (undefined8 ****)local_88[-1];
        if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar12)))
        goto LAB_14003cf62;
        uVar7 = uStack_70 + 0x28;
      }
      thunk_FUN_140b68ba8(ppppuVar12,uVar7);
    }
    if (iVar6 == 0) {
      *(undefined1 *)((longlong)local_c0 + 0x238) = 1;
      pvVar14 = local_c0;
    }
    else {
      local_d0[0] = 0;
      local_c8 = &PTR_vftable_140dc1808;
      local_88 = (undefined8 ****)0x0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 7;
      FUN_140003540(local_90,&local_68);
      uVar7 = local_58;
      if (7 < uStack_50) {
        uVar8 = uStack_50 * 2 + 2;
        ppppuVar12 = (undefined8 ****)local_68;
        if (0xfff < uVar8) {
          ppppuVar12 = (undefined8 ****)local_68[-1];
          if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppuVar12)))
          goto LAB_14003cf62;
          uVar8 = uStack_50 * 2 + 0x29;
        }
        thunk_FUN_140b68ba8(ppppuVar12,uVar8);
      }
      if (uVar7 == 0) {
        FUN_14003dd90(&local_68);
        if (7 < uStack_70) {
          uVar7 = uStack_70 * 2 + 2;
          ppppuVar12 = (undefined8 ****)local_88;
          if (0xfff < uVar7) {
            ppppuVar12 = (undefined8 ****)local_88[-1];
            if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar12)))
            goto LAB_14003cf62;
            uVar7 = uStack_70 * 2 + 0x29;
          }
          thunk_FUN_140b68ba8(ppppuVar12,uVar7);
        }
        local_78 = local_58;
        uStack_70 = uStack_50;
        local_88 = local_68;
        uStack_80 = uStack_60;
      }
      else {
        FUN_140003540(local_90,&local_68);
        if (7 < uStack_70) {
          uVar7 = uStack_70 * 2 + 2;
          ppppuVar12 = (undefined8 ****)local_88;
          if (0xfff < uVar7) {
            ppppuVar12 = (undefined8 ****)local_88[-1];
            if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar12)))
            goto LAB_14003cf62;
            uVar7 = uStack_70 * 2 + 0x29;
          }
          thunk_FUN_140b68ba8(ppppuVar12,uVar7);
        }
        local_78 = local_58;
        uStack_70 = uStack_50;
        local_88 = local_68;
        uStack_80 = uStack_60;
        ppppuVar12 = &local_88;
        if (7 < uStack_50) {
          ppppuVar12 = (undefined8 ****)local_68;
        }
        local_d0[0] = FUN_140b65f14(ppppuVar12,&local_68,3);
        if ((local_d0[0] != 0) ||
           ((((local_58 & 0x400) != 0 &&
             ((local_58._4_4_ == -0x5ffffffd || (local_58._4_4_ == -0x5ffffff4)))) ||
            (local_d0[0] = 0, (local_58 & 0x10) == 0)))) {
          local_c8 = &PTR_vftable_140dc1808;
          FUN_14003d9c0(&local_88,local_d0);
          if (local_d0[0] != 0) {
            (**(code **)(*local_c8 + 0x10))(local_c8,&local_68);
            FUN_140004940(local_f0," - error: ");
            FUN_14003dd10(&local_88,local_1d0);
            FUN_140004940(local_1b0,"cannot create directories for path ");
            FUN_140007770(local_1f0);
            FUN_140007770(&local_b0);
            FUN_140007770(local_210);
            local_298 = 0;
            uStack_290 = 0;
                    /* inlined constructor: quill::v11::QuillError::QuillError */
            local_2a0 = &quill::v11::QuillError::vftable;
            uStack_280 = uStack_208;
            local_278 = local_200;
            uStack_270 = uStack_1f8;
            local_200 = 0;
            uStack_1f8 = 0xf;
            local_210[0] = 0;
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_2a0,(ThrowInfo *)&DAT_14140fa50);
          }
        }
      }
      local_d0[0] = 0;
      local_c8 = &PTR_vftable_140dc1808;
      local_68 = (undefined8 ****)0x0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 7;
      local_d0[0] = FUN_14003eb00(&local_68,&local_88);
      local_c8 = &PTR_vftable_140dc1808;
      if (local_d0[0] != 0) {
        std::_System_error_category::vfunction3
                  ((_System_error_category *)&PTR_vftable_140dc1808,&local_b0,local_d0[0]);
        FUN_140004940(local_1f0," - error: ");
        FUN_14003dd10(&local_88,local_1b0);
        FUN_140004940(local_230,"cannot create canonical path for path ");
        FUN_140007770(local_1d0);
        FUN_140007770(local_f0);
        FUN_140007770(local_190);
        local_260 = 0;
        uStack_258 = 0;
        local_268 = &quill::v11::QuillError::vftable;
        uStack_248 = uStack_188;
        local_240 = local_180;
        uStack_238 = uStack_178;
        local_180 = 0;
        uStack_178 = 0xf;
        local_190[0] = 0;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_268,(ThrowInfo *)&DAT_14140fa50);
      }
      FUN_14003df50(local_90,local_f0);
      FUN_140003330(&local_b0,&local_68,local_f0);
      plVar13 = local_b8;
      pvVar14 = local_c0;
      if (local_90 == &local_b0) {
        if (7 < uStack_98) {
          uVar7 = uStack_98 * 2 + 2;
          ppppuVar12 = local_b0;
          if (0xfff < uVar7) {
            ppppuVar12 = (undefined8 ****)local_b0[-1];
            if (0x1f < (ulonglong)((longlong)local_b0 + (-8 - (longlong)ppppuVar12)))
            goto LAB_14003cf62;
            uVar7 = uStack_98 * 2 + 0x29;
          }
          thunk_FUN_140b68ba8(ppppuVar12,uVar7);
        }
      }
      else {
        uVar7 = *(ulonglong *)((longlong)local_c0 + 0xe0);
        if (7 < uVar7) {
          lVar11 = *local_90;
          uVar8 = uVar7 * 2 + 2;
          lVar10 = lVar11;
          if (0xfff < uVar8) {
            lVar10 = *(longlong *)(lVar11 + -8);
            if (0x1f < (ulonglong)((lVar11 + -8) - lVar10)) goto LAB_14003cf62;
            uVar8 = uVar7 * 2 + 0x29;
          }
          thunk_FUN_140b68ba8(lVar10,uVar8);
        }
        local_90[2] = local_a0;
        local_90[3] = uStack_98;
        *(undefined4 *)local_90 = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_90 + 4) = local_b0._4_4_;
        *(undefined4 *)(local_90 + 1) = (undefined4)uStack_a8;
        *(undefined4 *)((longlong)local_90 + 0xc) = uStack_a8._4_4_;
      }
      local_a0 = 0;
      uStack_98 = 7;
      local_b0 = (undefined8 ****)((ulonglong)local_b0 & 0xffffffffffff0000);
      if (7 < local_d8) {
        uVar7 = local_d8 * 2 + 2;
        lVar11 = local_f0[0];
        if (0xfff < uVar7) {
          lVar11 = *(longlong *)(local_f0[0] + -8);
          if (0x1f < (ulonglong)((local_f0[0] + -8) - lVar11)) goto LAB_14003cf62;
          uVar7 = local_d8 * 2 + 0x29;
        }
        thunk_FUN_140b68ba8(lVar11,uVar7);
      }
      if (7 < uStack_50) {
        uVar7 = uStack_50 * 2 + 2;
        ppppuVar12 = (undefined8 ****)local_68;
        if (0xfff < uVar7) {
          ppppuVar12 = (undefined8 ****)local_68[-1];
          if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppuVar12)))
          goto LAB_14003cf62;
          uVar7 = uStack_50 * 2 + 0x29;
        }
        thunk_FUN_140b68ba8(ppppuVar12,uVar7);
      }
      if (7 < uStack_70) {
        uVar7 = uStack_70 * 2 + 2;
        ppppuVar12 = (undefined8 ****)local_88;
        if (0xfff < uVar7) {
          ppppuVar12 = (undefined8 ****)local_88[-1];
          if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar12)))
          goto LAB_14003cf62;
          uVar7 = uStack_70 * 2 + 0x29;
        }
        thunk_FUN_140b68ba8(ppppuVar12,uVar7);
      }
    }
  }
  uVar7 = plVar13[3];
  if (7 < uVar7) {
    lVar11 = *plVar13;
    uVar8 = uVar7 * 2 + 2;
    lVar10 = lVar11;
    if (0xfff < uVar8) {
      lVar10 = *(longlong *)(lVar11 + -8);
      if (0x1f < (ulonglong)((lVar11 + -8) - lVar10)) {
LAB_14003cf62:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar8 = uVar7 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(lVar10,uVar8);
  }
  plVar13[2] = 0;
  plVar13[3] = 7;
  *(undefined2 *)plVar13 = 0;
  plVar13 = (longlong *)param_5[0x27];
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13,plVar13 != param_5 + 0x20);
    param_5[0x27] = 0;
  }
  plVar13 = (longlong *)param_5[0x1f];
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13,plVar13 != param_5 + 0x18);
    param_5[0x1f] = 0;
  }
  plVar13 = (longlong *)param_5[0x17];
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13,plVar13 != param_5 + 0x10);
    param_5[0x17] = 0;
  }
  plVar13 = (longlong *)param_5[0xf];
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13,plVar13 != param_5 + 8);
    param_5[0xf] = 0;
  }
  plVar13 = (longlong *)param_5[7];
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13,plVar13 != param_5);
    param_5[7] = 0;
  }
  return pvVar14;
}

