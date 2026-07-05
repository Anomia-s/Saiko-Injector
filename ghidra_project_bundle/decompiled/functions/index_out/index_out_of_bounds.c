/**
 * Function: index_out_of_bounds
 * Address:  140b65a50
 * Signature: undefined index_out_of_bounds(void)
 * Body size: 626 bytes
 */


bool index_out_of_bounds(longlong param_1,ulonglong param_2,undefined8 *param_3,undefined4 *param_4,
                        undefined4 *param_5,undefined8 *param_6)

{
  longlong *plVar1;
  void *_Buf;
  longlong lVar2;
  void *pvVar3;
  longlong *plVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 local_90 [56];
  undefined4 *local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_2;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar2 = _Xtime_get_ticks();
    lVar2 = lVar2 * 100;
  }
  else if (*(char *)(param_1 + 0x38) == '\0') {
    lVar2 = rdtsc();
  }
  else if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
  }
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar1 = (longlong *)(lVar8 + 8);
  lVar8 = *(longlong *)(lVar8 + 8);
  if (lVar8 == 0) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x20);
    if ((uVar7 & 1) == 0) {
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      *(uint *)(lVar8 + 0x20) = uVar7 | 1;
      std::_Ref_count_obj2<quill::v11::detail::ThreadContext>::
      _Ref_count_obj2<quill::v11::detail::ThreadContext>
                ((_Ref_count_obj2<quill::v11::detail::ThreadContext> *)(lVar8 + 0x10),0,0x20000,
                 0x80000000,0);
      FUN_140b68484(FUN_140006d80);
    }
    lVar8 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10)
    ;
    *plVar1 = lVar8;
  }
  *(undefined8 *)(lVar8 + 0x2b0) = 0;
  _Buf = (void *)*param_3;
  local_58 = param_4;
  if (_Buf == (void *)0x0) {
    uVar7 = 1;
  }
  else {
    pvVar3 = memchr(_Buf,0,0xffffffff);
    uVar6 = (longlong)pvVar3 + (1 - (longlong)_Buf);
    if (0xfffffffe < uVar6) {
      uVar6 = 0xffffffff;
    }
    uVar7 = -(uint)(pvVar3 == (void *)0x0) | (uint)uVar6;
  }
  uVar6 = local_50;
  uVar7 = this_unreachable_code_is_here_only_to_suppres(lVar8 + 0x280,uVar7);
  plVar4 = (longlong *)FUN_140b53af0(param_1,(ulonglong)uVar7 + 0x30,uVar6);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = lVar2;
    plVar4[1] = uVar6;
    plVar4[2] = param_1;
    plVar4[3] = (longlong)&LAB_1406dc630;
    lVar2 = *plVar1;
    if (*(longlong *)(lVar2 + 0x2b0) == 0) {
      quill::v11::QuillError::QuillError((QuillError *)local_90,"index out of bounds");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_90,(ThrowInfo *)&DAT_14140fa50);
    }
    if (*(longlong *)(lVar2 + 0x2b8) == 0xc) {
      puVar5 = (uint *)(lVar2 + 0x280);
    }
    else {
      puVar5 = *(uint **)(lVar2 + 0x280);
    }
    plVar1 = plVar4 + 4;
    uVar9 = (ulonglong)*puVar5;
    uVar6 = (ulonglong)(*puVar5 - 1);
    if ((void *)*param_3 != (void *)0x0) {
      memcpy(plVar1,(void *)*param_3,uVar6);
    }
    *(undefined1 *)((longlong)plVar1 + uVar6) = 0;
    *(undefined4 *)((longlong)plVar1 + uVar9) = *local_58;
    *(undefined4 *)((longlong)plVar4 + uVar9 + 0x24) = *param_5;
    *(undefined8 *)((longlong)plVar4 + uVar9 + 0x28) = *param_6;
    FUN_140b53c70(param_1,(ulonglong)uVar7 + 0x30);
  }
  return plVar4 != (longlong *)0x0;
}

