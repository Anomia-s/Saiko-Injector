/**
 * Function: bytes_of_scratch_space
 * Address:  14073f590
 * Signature: undefined __thiscall bytes_of_scratch_space(void * this)
 * Body size: 1266 bytes
 */


void __thiscall
bytes_of_scratch_space
          (void *this,longlong param_2,basic_streambuf<char,std::char_traits<char>_> param_3,
          undefined4 param_4,byte param_5)

{
  longlong *plVar1;
  void *pvVar2;
  __uint64 _Var3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iStack_1a4;
  longlong local_1a0;
  undefined4 local_198;
  uint uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  basic_streambuf<char,std::char_traits<char>_> local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  longlong *local_150;
  ulonglong *local_148;
  int *local_138;
  ulonglong local_120;
  uint local_118;
  ios_base local_108 [6];
  ulonglong local_a8;
  __uint64 a_Stack_a0 [3];
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  basic_streambuf<char,std::char_traits<char>_> local_78;
  undefined8 local_70;
  longlong local_68 [5];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_88 = 0;
  uStack_7c = 0;
  uStack_84 = param_5 & 0x7f;
  if (*(char *)(param_2 + 0x98) == '\x01') {
    uStack_84 = uStack_84 | 1;
  }
  local_a8 = 0;
  a_Stack_a0[0] = 0;
  a_Stack_a0[1] = 0;
  plVar1 = *(longlong **)(*(longlong *)((longlong)this + 0x10) + 0x10);
  uStack_80 = param_4;
  local_78 = param_3;
  (**(code **)(*plVar1 + 0x1f8))(plVar1,&local_88,&local_a8);
  if (local_a8 <= *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x20)) {
    _Var3 = a_Stack_a0[(param_5 & 0x20) >> 5];
    local_70 = 0;
    cVar4 = list_too_long((longlong)this + 0x80,_Var3,
                          *(undefined8 *)(*(longlong *)((longlong)this + 0x1e8) + 8),0,0,0,&local_70
                          ,*(undefined8 *)((longlong)this + 0x218),0x100);
    if (cVar4 != '\0') {
      local_188 = local_78;
      local_198 = local_88;
      uStack_194 = uStack_84;
      uStack_190 = uStack_80;
      uStack_18c = uStack_7c;
      local_178 = local_70;
      local_1a0 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x78);
      local_180 = local_1a0;
      if ((param_5 & 0x20) == 0) {
        local_180 = 0;
      }
      plVar1 = *(longlong **)(*(longlong *)((longlong)this + 0x1e8) + 0x10);
      (**(code **)(*plVar1 + 0x240))(plVar1,&local_1a0,0,0);
      return;
    }
    FUN_1401e87c0(&local_1a0,1);
    uVar5 = FUN_1400e5ec0(&uStack_190,"Couldn\'t suballocate a scratch buffer for TLAS ");
    uVar6 = FUN_140527b30(param_2 + 0x70);
    uVar5 = FUN_1400e5ec0(uVar5,uVar6);
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(uVar5," build. The build requires ");
    pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,_Var3);
    FUN_1400e5ec0(pbVar8," bytes of scratch space.");
    uVar5 = *(undefined8 *)((longlong)this + 0x10);
    local_68[0] = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    local_68[3] = 0xf;
    if (((local_118 & 0x22) == 2) || (uVar9 = *local_148, uVar9 == 0)) {
      if (((local_118 & 4) == 0) && (*local_150 != 0)) {
        uVar9 = *local_150 + (longlong)*local_138;
        pvVar2 = (void *)*local_170;
        goto joined_r0x00014073f942;
      }
    }
    else {
      if (uVar9 < local_120) {
        uVar9 = local_120;
      }
      pvVar2 = (void *)*local_168;
joined_r0x00014073f942:
      if (pvVar2 != (void *)0x0) {
        uVar9 = uVar9 - (longlong)pvVar2;
        if (uVar9 < 0x10) {
          local_68[2] = uVar9;
          memmove(local_68,pvVar2,uVar9);
          *(undefined1 *)((longlong)local_68 + uVar9) = 0;
        }
        else {
          FUN_1400069b0(local_68,uVar9);
        }
      }
    }
    FUN_14053e350(uVar5,local_68);
    goto LAB_14073f9c0;
  }
  FUN_1401e87c0(&local_1a0,1);
  uVar5 = FUN_1400e5ec0(&uStack_190,"TLAS ");
  uVar6 = FUN_140527b30(param_2 + 0x70);
  uVar5 = FUN_1400e5ec0(uVar5,uVar6);
  pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_1400e5ec0(uVar5," build requires at least ");
  pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,local_a8);
  pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_1400e5ec0(pbVar8," bytes in the data buffer, while the allocated buffer is only ");
  pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (pbVar7,*(__uint64 *)(*(longlong *)(param_2 + 0x10) + 0x20));
  FUN_1400e5ec0(pbVar8," bytes");
  uVar5 = *(undefined8 *)((longlong)this + 0x10);
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0xf;
  if (((local_118 & 0x22) == 2) || (uVar9 = *local_148, uVar9 == 0)) {
    if (((local_118 & 4) == 0) && (*local_150 != 0)) {
      uVar9 = *local_150 + (longlong)*local_138;
      pvVar2 = (void *)*local_170;
      goto joined_r0x00014073f82e;
    }
  }
  else {
    if (uVar9 < local_120) {
      uVar9 = local_120;
    }
    pvVar2 = (void *)*local_168;
joined_r0x00014073f82e:
    if (pvVar2 != (void *)0x0) {
      uVar9 = uVar9 - (longlong)pvVar2;
      if (uVar9 < 0x10) {
        local_68[2] = uVar9;
        memmove(local_68,pvVar2,uVar9);
        *(undefined1 *)((longlong)local_68 + uVar9) = 0;
      }
      else {
        FUN_1400069b0(local_68,uVar9);
      }
    }
  }
  FUN_14053e350(uVar5,local_68);
LAB_14073f9c0:
  if (0xf < (ulonglong)local_68[3]) {
    uVar9 = local_68[3] + 1;
    lVar10 = local_68[0];
    if (0xfff < uVar9) {
      lVar10 = *(longlong *)(local_68[0] + -8);
      if (0x1f < (ulonglong)((local_68[0] + -8) - lVar10)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar9 = local_68[3] + 0x28;
    }
    thunk_FUN_140b68ba8(lVar10,uVar9);
  }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)&local_1a0 + (longlong)*(int *)(local_1a0 + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_1a4 + (longlong)*(int *)(local_1a0 + 4)) =
       *(int *)(local_1a0 + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_188 = (basic_streambuf<char,std::char_traits<char>_>)
              &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(&local_188);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (&local_188);
  std::ios_base::~ios_base(local_108);
  return;
}

