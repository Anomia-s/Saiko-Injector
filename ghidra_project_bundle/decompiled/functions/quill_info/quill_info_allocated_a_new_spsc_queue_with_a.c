/**
 * Function: quill_info_allocated_a_new_spsc_queue_with_a
 * Address:  140b55bb0
 * Signature: longlong __fastcall quill_info_allocated_a_new_spsc_queue_with_a(longlong param_1, longlong param_2, longlong param_3)
 * Body size: 750 bytes
 */


longlong quill_info_allocated_a_new_spsc_queue_with_a
                   (longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  errno_t eVar3;
  ulonglong uVar4;
  longlong lVar5;
  QuillError_vftable local_128 [2];
  tm local_104;
  undefined8 local_e0;
  QuillError_vftable **local_d8;
  char *local_c0;
  undefined8 local_b8;
  __time64_t local_b0;
  QuillError_vftable *local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong uStack_88;
  undefined8 local_80;
  ulonglong uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  longlong local_48;
  ulonglong local_40;
  ulonglong uStack_38;
  char local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar5 = *(longlong *)(param_2 + 0x100);
  uVar4 = *(ulonglong *)(lVar5 + 0x280);
  if (*(ulonglong *)(lVar5 + 0x288) == uVar4) {
    *(ulonglong *)(lVar5 + 0x288) = *(ulonglong *)(lVar5 + 0x100);
    uVar4 = *(ulonglong *)(lVar5 + 0x280);
    if (*(ulonglong *)(lVar5 + 0x100) == uVar4) goto LAB_140b55c59;
  }
  if (*(longlong *)(lVar5 + 0x98) != 0) {
    return *(longlong *)(lVar5 + 0x98) + (*(ulonglong *)(lVar5 + 0x88) & uVar4);
  }
LAB_140b55c59:
  local_98 = local_98 & 0xffffffffffffff00;
  uStack_a0 = 0;
  local_a8 = (QuillError_vftable *)0x0;
  if (**(longlong **)(param_2 + 0x100) == 0) {
    local_48 = 0;
  }
  else {
    FUN_140029920(param_2,&local_48);
    if (local_30 == '\x01') {
      if ((uStack_38 < local_40) && (*(longlong *)(param_3 + 0x300) != 0)) {
        *(undefined1 *)(*(longlong *)(param_3 + 0x300) + 0x30) = 1;
      }
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        local_b0 = _time64((__time64_t *)0x0);
        eVar3 = _localtime64_s(&local_104,&local_b0);
        if (eVar3 != 0) {
          FUN_140007930(&local_e0,eVar3);
          FUN_1400089f0(&local_68,"failed to call localtime_rs, with error message errno: ",
                        &local_e0);
          uStack_a0 = 0;
          local_98 = 0;
          local_a8 = &quill::v11::QuillError::vftable;
          uStack_88 = uStack_60;
          local_80 = local_58;
          uStack_78 = uStack_50;
          local_58 = 0;
          uStack_50 = 0xf;
          local_68 = 0;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_a8,(ThrowInfo *)&DAT_14140fa50);
        }
        strftime((char *)local_128,0x18,"%X",&local_104);
        local_70 = *(undefined8 *)(param_3 + 0x2d0);
        if (*(ulonglong *)(param_3 + 0x2d8) < 0x10) {
          uStack_78 = param_3 + 0x2c0;
        }
        else {
          uStack_78 = *(longlong *)(param_3 + 0x2c0);
        }
        uStack_88 = local_40 >> 10;
        local_98 = uStack_38 >> 10;
        local_e0 = 0xd44c;
        local_d8 = &local_a8;
        local_c0 = 
        "{} Quill INFO: Allocated a new SPSC queue with a capacity of {} KiB (previously {} KiB) from thread {}"
        ;
        local_b8 = 0x66;
        local_a8 = local_128;
        FUN_140012b00(&local_68,&local_c0,&local_e0);
        plVar1 = *(longlong **)(param_1 + 0xb0);
        if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_Xbad_function_call();
        }
        (**(code **)(*plVar1 + 0x10))(plVar1,&local_68);
        if (0xf < uStack_50) {
          lVar2 = CONCAT71(uStack_67,local_68);
          uVar4 = uStack_50 + 1;
          lVar5 = lVar2;
          if (0xfff < uVar4) {
            lVar5 = *(longlong *)(lVar2 + -8);
            if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            uVar4 = uStack_50 + 0x28;
          }
          thunk_FUN_140b68ba8(lVar5,uVar4);
        }
      }
    }
  }
  return local_48;
}

