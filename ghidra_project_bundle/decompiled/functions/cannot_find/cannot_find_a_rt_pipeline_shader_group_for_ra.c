/**
 * Function: cannot_find_a_rt_pipeline_shader_group_for_ra
 * Address:  140713aa0
 * Signature: undefined __thiscall cannot_find_a_rt_pipeline_shader_group_for_ra(void * this)
 * Body size: 490 bytes
 */


bool __thiscall
cannot_find_a_rt_pipeline_shader_group_for_ra(void *this,undefined8 param_2,int param_3)

{
  void *_Src;
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong local_140 [2];
  undefined1 local_130 [8];
  basic_streambuf<char,std::char_traits<char>_> local_128 [3];
  undefined8 *local_110;
  undefined8 *local_108;
  longlong *local_f0;
  ulonglong *local_e8;
  int *local_d8;
  ulonglong local_c0;
  uint local_b8;
  ios_base local_a8 [6];
  longlong local_48 [5];
  
  local_48[4] = 0xfffffffffffffffe;
  if (-1 < param_3) goto LAB_140713c5f;
  FUN_1401e87c0(local_140,1);
  uVar1 = FUN_1400e5ec0(local_130,
                        "Cannot find a RT pipeline shader group for RayGen shader with name ");
  FUN_1400e5ec0(uVar1,param_2);
  uVar1 = *(undefined8 *)((longlong)this + 0xe0);
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0xf;
  if (((local_b8 & 0x22) == 2) || (uVar2 = *local_e8, uVar2 == 0)) {
    if (((local_b8 & 4) == 0) && (*local_f0 != 0)) {
      uVar2 = *local_f0 + (longlong)*local_d8;
      _Src = (void *)*local_110;
      goto joined_r0x000140713b7c;
    }
  }
  else {
    if (uVar2 < local_c0) {
      uVar2 = local_c0;
    }
    _Src = (void *)*local_108;
joined_r0x000140713b7c:
    if (_Src != (void *)0x0) {
      uVar2 = uVar2 - (longlong)_Src;
      if (uVar2 < 0x10) {
        local_48[2] = uVar2;
        memmove(local_48,_Src,uVar2);
        *(undefined1 *)((longlong)local_48 + uVar2) = 0;
      }
      else {
        FUN_1400069b0(local_48,uVar2);
      }
    }
  }
  FUN_140533460(uVar1,local_48);
  if (0xf < (ulonglong)local_48[3]) {
    uVar2 = local_48[3] + 1;
    lVar3 = local_48[0];
    if (0xfff < uVar2) {
      lVar3 = *(longlong *)(local_48[0] + -8);
      if (0x1f < (ulonglong)((local_48[0] + -8) - lVar3)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar2 = local_48[3] + 0x28;
    }
    thunk_FUN_140b68ba8(lVar3,uVar2);
  }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_140 + (longlong)*(int *)(local_140[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_128 + (longlong)*(int *)(local_140[0] + 4) + -0x1c) =
       *(int *)(local_140[0] + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_128[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_128);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_128);
  std::ios_base::~ios_base(local_a8);
LAB_140713c5f:
  return -1 < param_3;
}

