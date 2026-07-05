/**
 * Function: cannot_create_a_heap_with_capacity_0
 * Address:  140512d80
 * Signature: undefined8 * __thiscall cannot_create_a_heap_with_capacity_0(void * this, undefined8 * param_1, longlong * param_2)
 * Body size: 575 bytes
 */


undefined8 * __thiscall
cannot_create_a_heap_with_capacity_0(void *this,undefined8 *param_1,longlong *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *_Src;
  ulonglong uVar6;
  void *local_88;
  longlong lStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  char *local_68;
  undefined8 local_60;
  void *local_58;
  longlong lStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*param_2 == 0) {
    local_60 = 0;
    pcVar1 = (char *)FUN_140b65d30(0x30);
    local_58 = (void *)0x26;
    lStack_50 = 0x2f;
    builtin_strncpy(pcVar1,"Cannot create a Heap with capacity = 0",0x27);
    local_68 = pcVar1;
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pcVar1);
    thunk_FUN_140b68ba8(pcVar1,0x30);
    *param_1 = 0;
  }
  else {
    local_60 = CONCAT71(local_60._1_7_,(char)param_2[1]);
    local_68 = (char *)*param_2;
    local_58 = (void *)0x0;
    lStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uVar2 = param_2[4];
    if ((ulonglong)param_2[5] < 0x10) {
      _Src = param_2 + 2;
    }
    else {
      _Src = (longlong *)param_2[2];
    }
    if ((longlong)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    if (uVar2 < 0x10) {
      uStack_40 = 0xf;
      local_58 = (void *)*_Src;
      lStack_50 = _Src[1];
      local_48 = uVar2;
      if (uVar2 == 0) {
        readback(&local_88,&local_68);
        if (0xf < uStack_40) {
          uVar2 = uStack_40 + 1;
          pvVar5 = local_58;
          if (0xfff < uVar2) {
            pvVar5 = *(void **)((longlong)local_58 + -8);
            if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar5)))
            goto LAB_140512fa6;
            uVar2 = uStack_40 + 0x28;
          }
          thunk_FUN_140b68ba8(pvVar5,uVar2);
        }
        local_48 = local_78;
        uStack_40 = uStack_70;
        local_58 = local_88;
        lStack_50 = lStack_80;
      }
    }
    else {
      uVar3 = uVar2 | 0xf;
      uVar6 = 0x16;
      if (0x16 < uVar3) {
        uVar6 = uVar3;
      }
      if (uVar3 < 0xfff) {
        local_58 = (void *)FUN_140b65d30(uVar6 + 1);
      }
      else {
        lVar4 = FUN_140b65d30(uVar6 + 0x28);
        local_58 = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)local_58 - 8) = lVar4;
      }
      local_48 = uVar2;
      uStack_40 = uVar6;
      memcpy(local_58,_Src,uVar2 + 1);
    }
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x28))
              (*(longlong **)((longlong)this + 0x10),param_1,&local_68);
    if (0xf < uStack_40) {
      uVar2 = uStack_40 + 1;
      pvVar5 = local_58;
      if (0xfff < uVar2) {
        pvVar5 = *(void **)((longlong)local_58 + -8);
        if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar5))) {
LAB_140512fa6:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar2 = uStack_40 + 0x28;
      }
      thunk_FUN_140b68ba8(pvVar5,uVar2);
    }
  }
  return param_1;
}

