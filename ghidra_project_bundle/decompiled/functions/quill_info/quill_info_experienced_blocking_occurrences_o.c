/**
 * Function: quill_info_experienced_blocking_occurrences_o
 * Address:  140b55270
 * Signature: void __fastcall quill_info_experienced_blocking_occurrences_o(longlong param_1, longlong param_2)
 * Body size: 678 bytes
 */


void quill_info_experienced_blocking_occurrences_o(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  errno_t eVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  tm local_10c;
  QuillError_vftable local_e8 [2];
  __time64_t local_c8;
  QuillError_vftable *local_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  longlong lStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  QuillError_vftable **local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar8 = *(longlong **)(param_1 + 0x4a0);
  plVar2 = *(longlong **)(param_1 + 0x4a8);
  do {
    if (plVar8 == plVar2) {
      return;
    }
    lVar7 = *plVar8;
    if (((*(uint *)(lVar7 + 0x310) & 0xfffffffe) == 2) && (*(longlong *)(lVar7 + 0x380) != 0)) {
      LOCK();
      lVar1 = *(longlong *)(lVar7 + 0x380);
      *(longlong *)(lVar7 + 0x380) = 0;
      UNLOCK();
      if (lVar1 != 0) {
        local_c8 = _time64((__time64_t *)0x0);
        eVar4 = _localtime64_s(&local_10c,&local_c8);
        if (eVar4 != 0) {
          FUN_140007930(local_e8,eVar4);
          FUN_1400089f0(&local_68,"failed to call localtime_rs, with error message errno: ",local_e8
                       );
          local_b8 = 0;
          lStack_b0 = 0;
          local_c0 = &quill::v11::QuillError::vftable;
          lStack_a0 = uStack_60;
          local_98 = local_58;
          uStack_90 = uStack_50;
          local_58 = 0;
          uStack_50 = 0xf;
          local_68 = 0;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_c0,(ThrowInfo *)&DAT_14140fa50);
        }
        strftime((char *)local_e8,0x18,"%X",&local_10c);
        uVar5 = *(uint *)(lVar7 + 0x310) & 0xfffffffd;
        if (uVar5 == 0) {
          if (*(ulonglong *)(lVar7 + 0x2d8) < 0x10) {
            lStack_a0 = lVar7 + 0x2c0;
          }
          else {
            lStack_a0 = *(longlong *)(lVar7 + 0x2c0);
          }
          local_98 = *(undefined8 *)(lVar7 + 0x2d0);
          local_88 = 0xd4c;
          local_80 = &local_c0;
          local_78 = "{} Quill INFO: Experienced {} blocking occurrences on thread {}";
          local_70 = 0x3f;
          local_c0 = local_e8;
          lStack_b0 = lVar1;
          FUN_140012b00(&local_68,&local_78,&local_88);
          plVar3 = *(longlong **)(param_2 + 0x38);
          if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_Xbad_function_call();
          }
          (**(code **)(*plVar3 + 0x10))(plVar3,&local_68);
        }
        else {
          if (uVar5 != 1) goto LAB_140b552c0;
          if (*(ulonglong *)(lVar7 + 0x2d8) < 0x10) {
            lStack_a0 = lVar7 + 0x2c0;
          }
          else {
            lStack_a0 = *(longlong *)(lVar7 + 0x2c0);
          }
          local_98 = *(undefined8 *)(lVar7 + 0x2d0);
          local_88 = 0xd4c;
          local_80 = &local_c0;
          local_78 = "{} Quill INFO: Dropped {} log messages from thread {}";
          local_70 = 0x35;
          local_c0 = local_e8;
          lStack_b0 = lVar1;
          FUN_140012b00(&local_68,&local_78,&local_88);
          plVar3 = *(longlong **)(param_2 + 0x38);
          if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_Xbad_function_call();
          }
          (**(code **)(*plVar3 + 0x10))(plVar3,&local_68);
        }
        if (0xf < uStack_50) {
          lVar1 = CONCAT71(uStack_67,local_68);
          uVar6 = uStack_50 + 1;
          lVar7 = lVar1;
          if (0xfff < uVar6) {
            lVar7 = *(longlong *)(lVar1 + -8);
            if (0x1f < (ulonglong)((lVar1 + -8) - lVar7)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            uVar6 = uStack_50 + 0x28;
          }
          thunk_FUN_140b68ba8(lVar7,uVar6);
        }
      }
    }
LAB_140b552c0:
    plVar8 = plVar8 + 1;
  } while( true );
}

