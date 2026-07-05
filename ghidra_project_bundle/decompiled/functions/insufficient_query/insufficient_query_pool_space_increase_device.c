/**
 * Function: insufficient_query_pool_space_increase_device
 * Address:  1407028b0
 * Signature: undefined8 * __thiscall insufficient_query_pool_space_increase_device(void * this, undefined8 * param_1)
 * Body size: 534 bytes
 */


undefined8 * __thiscall
insufficient_query_pool_space_increase_device(void *this,undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  char *pcVar5;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(longlong *)((longlong)this + 0x618) == 0) {
    lVar1 = (longlong)this + 0x6a0;
    iVar2 = _Mtx_lock(lVar1);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)((longlong)this + 0x6ec) == 0x7fffffff) {
      *(undefined4 *)((longlong)this + 0x6ec) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    if (*(longlong *)((longlong)this + 0x618) == 0) {
      local_50 = (char *)CONCAT44(local_50._4_4_,0xb);
      local_48 = 0;
      local_40 = 0x200000000;
      local_38 = (ulonglong)(uint)(*(int *)((longlong)this + 0x640) * 2);
      iVar2 = (*DAT_1416b6e98)(*(undefined8 *)((longlong)this + 0xa0),&local_50,
                               *(undefined8 *)((longlong)this + 0xa8));
      if (iVar2 != 0) {
        *param_1 = 0;
        _Mtx_unlock(lVar1);
        return param_1;
      }
    }
    _Mtx_unlock(lVar1);
  }
  iVar2 = FUN_140528630((longlong)this + 0x620);
  if (iVar2 < 0) {
    local_48 = 0;
    local_50 = (char *)FUN_140b65d30(0x40);
    local_40 = 0x3f;
    local_38 = 0x3f;
    builtin_strncpy(local_50,"Insufficient query pool space, increase Device::numTimerQueries",0x40)
    ;
    FUN_140533460((longlong)this + 0x90,&local_50);
    if (0xf < local_38) {
      uVar4 = local_38 + 1;
      pcVar5 = local_50;
      if (0xfff < uVar4) {
        pcVar5 = *(char **)(local_50 + -8);
        if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar5)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar4 = local_38 + 0x28;
      }
      thunk_FUN_140b68ba8(pcVar5,uVar4);
    }
    *param_1 = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_140b65d30(0x28);
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &nvrhi::vulkan::TimerQuery::vftable;
    *(undefined2 *)(puVar3 + 3) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
    puVar3[4] = (longlong)this + 0x620;
    *(int *)(puVar3 + 2) = iVar2 * 2;
    *(int *)((longlong)puVar3 + 0x14) = iVar2 * 2 + 1;
    *param_1 = puVar3;
  }
  return param_1;
}

