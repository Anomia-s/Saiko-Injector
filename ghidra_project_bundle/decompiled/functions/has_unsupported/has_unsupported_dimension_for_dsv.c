/**
 * Function: has_unsupported_dimension_for_dsv
 * Address:  1407215d0
 * Signature: undefined __thiscall has_unsupported_dimension_for_dsv(void * this)
 * Body size: 811 bytes
 */


void __thiscall
has_unsupported_dimension_for_dsv(void *this,undefined8 param_2,longlong *param_3,char param_4)

{
  void *_Src;
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong local_160 [2];
  undefined1 local_150 [8];
  basic_streambuf<char,std::char_traits<char>_> local_148 [3];
  undefined8 *local_130;
  undefined8 *local_128;
  longlong *local_110;
  ulonglong *local_108;
  int *local_f8;
  ulonglong local_e0;
  uint local_d8;
  ios_base local_c8 [6];
  longlong local_68 [4];
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1406dfba0(param_3,local_160,(longlong)this + 0x20);
  *param_3 = local_160[0];
  param_3[1] = local_160[1];
  local_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  lVar1 = FUN_140720860(*(undefined1 *)((longlong)this + 0x3c));
  local_48 = *(int *)(lVar1 + 0xc);
  if ((param_4 != '\0') && ((uStack_40 = 1, local_48 == 0x2d || (local_48 == 0x14)))) {
    uStack_40 = 3;
  }
  switch(*(undefined1 *)((longlong)this + 0x3d)) {
  case 1:
    _local_44 = CONCAT44(uStack_40,1);
    break;
  case 2:
    _local_44 = CONCAT44(uStack_40,2);
    goto LAB_1407216cf;
  case 3:
    _local_44 = CONCAT44(uStack_40,3);
    break;
  case 4:
  case 5:
  case 6:
    _local_44 = CONCAT44(uStack_40,4);
LAB_1407216cf:
    uStack_38 = (undefined4)param_3[1];
    uStack_34 = (undefined4)((ulonglong)param_3[1] >> 0x20);
    break;
  case 7:
    _local_44 = CONCAT44(uStack_40,5);
    goto LAB_1407216e2;
  case 8:
    _local_44 = CONCAT44(uStack_40,6);
    uStack_3c = (undefined4)param_3[1];
    uStack_38 = (undefined4)((ulonglong)param_3[1] >> 0x20);
    goto LAB_1407216e2;
  case 9:
    FUN_1401e87c0(local_160,1);
    uVar2 = FUN_1400e5ec0(local_150,"Texture ");
    uVar3 = FUN_140527b30((longlong)this + 0x40);
    uVar2 = FUN_1400e5ec0(uVar2,uVar3);
    uVar2 = FUN_1400e5ec0(uVar2," has unsupported dimension for DSV: ");
    uVar3 = FUN_140527b10(*(undefined1 *)((longlong)this + 0x3d));
    FUN_1400e5ec0(uVar2,uVar3);
    uVar2 = *(undefined8 *)((longlong)this + 0xe8);
    local_68[0] = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    local_68[3] = 0xf;
    if (((local_d8 & 0x22) == 2) || (uVar4 = *local_108, uVar4 == 0)) {
      if (((local_d8 & 4) != 0) || (*local_110 == 0)) goto LAB_14072183a;
      uVar4 = *local_110 + (longlong)*local_f8;
      _Src = (void *)*local_130;
    }
    else {
      if (uVar4 < local_e0) {
        uVar4 = local_e0;
      }
      _Src = (void *)*local_128;
    }
    if (_Src != (void *)0x0) {
      uVar4 = uVar4 - (longlong)_Src;
      if (uVar4 < 0x10) {
        local_68[2] = uVar4;
        memmove(local_68,_Src,uVar4);
        *(undefined1 *)((longlong)local_68 + uVar4) = 0;
      }
      else {
        FUN_1400069b0(local_68,uVar4);
      }
    }
LAB_14072183a:
    FUN_14053e350(uVar2,local_68);
    if (0xf < (ulonglong)local_68[3]) {
      uVar4 = local_68[3] + 1;
      lVar1 = local_68[0];
      if (0xfff < uVar4) {
        lVar1 = *(longlong *)(local_68[0] + -8);
        if (0x1f < (ulonglong)((local_68[0] + -8) - lVar1)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar4 = local_68[3] + 0x28;
      }
      thunk_FUN_140b68ba8(lVar1,uVar4);
    }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((longlong)local_160 + (longlong)*(int *)(local_160[0] + 4)) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)local_148 + (longlong)*(int *)(local_160[0] + 4) + -0x1c) =
         *(int *)(local_160[0] + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_148[0] = (basic_streambuf<char,std::char_traits<char>_>)
                   &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
    ;
    FUN_1401da8b0(local_148);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(local_148);
    std::ios_base::~ios_base(local_c8);
    return;
  default:
    httplib::ClientImpl::vfunction4();
    return;
  }
  uStack_3c = (undefined4)*param_3;
LAB_1407216e2:
  (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0xe8) + 0xa8))
            ((longlong *)**(undefined8 **)((longlong)this + 0xe8),
             *(undefined8 *)((longlong)this + 200),&local_48,param_2);
  return;
}

