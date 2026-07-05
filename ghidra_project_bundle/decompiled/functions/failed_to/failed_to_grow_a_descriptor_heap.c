/**
 * Function: failed_to_grow_a_descriptor_heap
 * Address:  14071d190
 * Signature: uint __thiscall failed_to_grow_a_descriptor_heap(void * this, uint param_1)
 * Body size: 546 bytes
 */


uint __thiscall failed_to_grow_a_descriptor_heap(void *this,uint param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar11 = (longlong)this + 0x70;
  iVar4 = _Mtx_lock();
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)((longlong)this + 0xbc) == 0x7fffffff) {
    *(undefined4 *)((longlong)this + 0xbc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  uVar9 = *(uint *)((longlong)this + 0x44);
  uVar10 = *(uint *)((longlong)this + 0x68);
  local_40 = lVar11;
  if (uVar10 < uVar9) {
    uVar8 = 0;
    do {
      uVar8 = uVar8 + 1;
      if ((*(uint *)(*(longlong *)((longlong)this + 0x48) + (ulonglong)(uVar10 >> 5) * 4) >>
           (uVar10 & 0x1f) & 1) != 0) {
        uVar8 = 0;
      }
      if (param_1 <= uVar8) {
        uVar9 = (uVar10 - param_1) + 1;
        uVar10 = uVar10 + 1;
        uVar8 = uVar10 - uVar9;
        if (uVar9 <= uVar10 && uVar8 != 0) goto LAB_14071d2f1;
        goto LAB_14071d35d;
      }
      uVar10 = uVar10 + 1;
    } while (uVar9 != uVar10);
  }
  uVar10 = uVar9 + param_1;
  iVar4 = FUN_14071cfc0(this,uVar10);
  if (iVar4 < 0) {
    uVar2 = *(undefined8 *)((longlong)this + 8);
    local_58 = 0;
    uStack_50 = 0;
    local_68 = (char *)0x0;
    uStack_60 = 0;
    local_68 = (char *)FUN_140b65d30(0x30);
    local_58 = 0x21;
    uStack_50 = 0x2f;
    builtin_strncpy(local_68,"Failed to grow a descriptor heap!",0x22);
    FUN_14053e350(uVar2,&local_68);
    lVar11 = local_40;
    if (0xf < uStack_50) {
      uVar6 = uStack_50 + 1;
      pcVar7 = local_68;
      if (0xfff < uVar6) {
        pcVar7 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar7)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar6 = uStack_50 + 0x28;
      }
      thunk_FUN_140b68ba8(pcVar7,uVar6);
    }
    uVar9 = 0xffffffff;
  }
  else {
    uVar8 = uVar10 - uVar9;
    if (uVar9 <= uVar10 && uVar8 != 0) {
LAB_14071d2f1:
      uVar5 = uVar9 + 1;
      uVar3 = uVar9;
      if ((uVar8 & 1) != 0) {
        puVar1 = (uint *)(*(longlong *)((longlong)this + 0x48) + (ulonglong)(uVar9 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
        uVar3 = uVar5;
      }
      while (uVar10 != uVar5) {
        puVar1 = (uint *)(*(longlong *)((longlong)this + 0x48) + (ulonglong)(uVar3 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar3 & 0x1f);
        puVar1 = (uint *)(*(longlong *)((longlong)this + 0x48) + (ulonglong)(uVar3 + 1 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)(uVar3 + 1) & 0x1f);
        uVar5 = uVar3 + 2;
        uVar3 = uVar5;
      }
    }
LAB_14071d35d:
    *(int *)((longlong)this + 0x6c) = *(int *)((longlong)this + 0x6c) + param_1;
    *(uint *)((longlong)this + 0x68) = uVar10;
    lVar11 = local_40;
  }
  _Mtx_unlock(lVar11);
  return uVar9;
}

