/**
 * Function: failed_to_create_placed_buffer
 * Address:  14072b130
 * Signature: undefined8 __thiscall failed_to_create_placed_buffer(void * this, longlong param_1, longlong * param_2, undefined8 param_3)
 * Body size: 718 bytes
 */


undefined8 __thiscall
failed_to_create_placed_buffer(void *this,longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  void *_Src;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar8;
  int iStack_164;
  longlong local_160 [2];
  basic_ostream<char,std::char_traits<char>_> local_150;
  undefined8 local_130;
  undefined8 local_128 [3];
  longlong *local_110;
  ulonglong *local_108;
  int *local_f8;
  ulonglong local_e0;
  uint local_d8;
  ios_base local_c8 [6];
  longlong local_68 [5];
  undefined8 local_40;
  
  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  puVar5 = local_128;
  local_40 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x5c) != '\x01') {
    return 0;
  }
  iVar2 = FUN_14071d7e0(*(undefined4 *)(param_1 + 0x60));
  iVar2 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0xe8))
                    (*(longlong **)((longlong)this + 0x10),param_2[8],param_3,param_1 + 0x80,
                     CONCAT44(uVar8,(uint)(iVar2 == 0x400000) << 0x16),0,&DAT_140df56c0,
                     param_1 + 0x70);
  if (-1 < iVar2) {
    (**(code **)(*param_2 + 8))(param_2);
    plVar1 = *(longlong **)(param_1 + 0xb8);
    *(longlong **)(param_1 + 0xb8) = param_2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    uVar3 = create_buffer(param_1);
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  FUN_1401e87c0(local_160,1);
  uVar3 = FUN_1400e5ec0(&local_150,"Failed to create placed buffer ");
  uVar4 = FUN_140527b30(param_1 + 0x30);
  uVar3 = FUN_1400e5ec0(uVar3,uVar4);
  FUN_1400e5ec0(uVar3,", error code = 0x");
  *(uint *)(&local_150.basic_ostream<char,std::char_traits<char>_>_data.field_0x0 +
           *(int *)(local_160[0] + 4)) =
       *(uint *)(&local_150.basic_ostream<char,std::char_traits<char>_>_data.field_0x0 +
                *(int *)(local_160[0] + 4)) & 0xfffff1ff | 0x800;
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(&local_150,iVar2);
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0xf;
  if (((local_d8 & 0x22) == 2) || (uVar7 = *local_108, uVar7 == 0)) {
    if (((local_d8 & 4) != 0) || (*local_110 == 0)) goto LAB_14072b32a;
    puVar5 = &local_130;
    uVar7 = *local_110 + (longlong)*local_f8;
  }
  else if (uVar7 < local_e0) {
    uVar7 = local_e0;
  }
  _Src = *(void **)*puVar5;
  if (_Src != (void *)0x0) {
    uVar7 = uVar7 - (longlong)_Src;
    if (uVar7 < 0x10) {
      local_68[2] = uVar7;
      memmove(local_68,_Src,uVar7);
      *(undefined1 *)((longlong)local_68 + uVar7) = 0;
    }
    else {
      FUN_1400069b0(local_68,uVar7);
    }
  }
LAB_14072b32a:
  FUN_14053e350((longlong)this + 0x10,local_68);
  if (0xf < (ulonglong)local_68[3]) {
    uVar7 = local_68[3] + 1;
    lVar6 = local_68[0];
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(local_68[0] + -8);
      if (0x1f < (ulonglong)((local_68[0] + -8) - lVar6)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = local_68[3] + 0x28;
    }
    thunk_FUN_140b68ba8(lVar6,uVar7);
  }
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_160 + (longlong)*(int *)(local_160[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_164 + (longlong)*(int *)(local_160[0] + 4)) =
       *(int *)(local_160[0] + 4) + -0x98;
  local_150.basic_ostream<char,std::char_traits<char>_>_data =
       (basic_ostream<char,std::char_traits<char>_>_data)
       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(&local_150.basic_ostream<char,std::char_traits<char>_>_data);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)
             &local_150.basic_ostream<char,std::char_traits<char>_>_data);
  std::ios_base::~ios_base(local_c8);
  return 0;
}

