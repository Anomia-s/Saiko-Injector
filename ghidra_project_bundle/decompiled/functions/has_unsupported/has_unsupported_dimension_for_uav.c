/**
 * Function: has_unsupported_dimension_for_uav
 * Address:  140721090
 * Signature: undefined __thiscall has_unsupported_dimension_for_uav(void * this)
 * Body size: 847 bytes
 */


void __thiscall
has_unsupported_dimension_for_uav
          (void *this,undefined8 param_2,byte param_3,char param_4,longlong *param_5)

{
  undefined4 uVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  char cVar7;
  longlong local_180 [2];
  undefined1 local_170 [8];
  basic_streambuf<char,std::char_traits<char>_> local_168 [3];
  undefined8 *local_150;
  undefined8 *local_148;
  longlong *local_130;
  ulonglong *local_128;
  int *local_118;
  ulonglong local_100;
  uint local_f8;
  ios_base local_e8 [6];
  longlong local_88 [4];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_1406dfba0(param_5,local_180,(longlong)this + 0x20);
  *param_5 = local_180[0];
  param_5[1] = local_180[1];
  cVar7 = *(char *)((longlong)this + 0x3d);
  if (param_4 != '\0') {
    cVar7 = param_4;
  }
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_48 = 0;
  if (param_3 == 0) {
    uVar6 = *(uint *)((longlong)this + 0x3c);
  }
  else {
    uVar6 = (uint)param_3;
  }
  lVar2 = FUN_140720860(uVar6);
  uVar1 = *(undefined4 *)(lVar2 + 8);
  local_68 = CONCAT44(local_68._4_4_,uVar1);
  switch(cVar7) {
  case '\x01':
    local_68 = CONCAT44(2,uVar1);
    break;
  case '\x02':
    local_68 = CONCAT44(3,uVar1);
    goto LAB_1407212a6;
  case '\x03':
    local_68 = CONCAT44(4,uVar1);
    break;
  case '\x04':
  case '\x05':
  case '\x06':
    local_68 = CONCAT44(5,uVar1);
LAB_1407212a6:
    uStack_5c = (undefined4)param_5[1];
    uStack_58 = (undefined4)((ulonglong)param_5[1] >> 0x20);
    break;
  case '\a':
  case '\b':
    FUN_1401e87c0(local_180,1);
    uVar3 = FUN_1400e5ec0(local_170,"Texture ");
    uVar4 = FUN_140527b30((longlong)this + 0x40);
    uVar3 = FUN_1400e5ec0(uVar3,uVar4);
    uVar3 = FUN_1400e5ec0(uVar3," has unsupported dimension for UAV: ");
    uVar4 = FUN_140527b10(*(undefined1 *)((longlong)this + 0x3d));
    FUN_1400e5ec0(uVar3,uVar4);
    uVar3 = *(undefined8 *)((longlong)this + 0xe8);
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0xf;
    if (((local_f8 & 0x22) == 2) || (uVar5 = *local_128, uVar5 == 0)) {
      if (((local_f8 & 4) != 0) || (*local_130 == 0)) goto LAB_140721312;
      uVar5 = *local_130 + (longlong)*local_118;
      _Src = (void *)*local_150;
    }
    else {
      if (uVar5 < local_100) {
        uVar5 = local_100;
      }
      _Src = (void *)*local_148;
    }
    if (_Src != (void *)0x0) {
      uVar5 = uVar5 - (longlong)_Src;
      if (uVar5 < 0x10) {
        local_88[2] = uVar5;
        memmove(local_88,_Src,uVar5);
        *(undefined1 *)((longlong)local_88 + uVar5) = 0;
      }
      else {
        FUN_1400069b0(local_88,uVar5);
      }
    }
LAB_140721312:
    FUN_14053e350(uVar3,local_88);
    if (0xf < (ulonglong)local_88[3]) {
      uVar5 = local_88[3] + 1;
      lVar2 = local_88[0];
      if (0xfff < uVar5) {
        lVar2 = *(longlong *)(local_88[0] + -8);
        if (0x1f < (ulonglong)((local_88[0] + -8) - lVar2)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar5 = local_88[3] + 0x28;
      }
      thunk_FUN_140b68ba8(lVar2,uVar5);
    }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((longlong)local_180 + (longlong)*(int *)(local_180[0] + 4)) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)local_168 + (longlong)*(int *)(local_180[0] + 4) + -0x1c) =
         *(int *)(local_180[0] + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_168[0] = (basic_streambuf<char,std::char_traits<char>_>)
                   &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
    ;
    FUN_1401da8b0(local_168);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(local_168);
    std::ios_base::~ios_base(local_e8);
    return;
  case '\t':
    local_68 = CONCAT44(8,uVar1);
    uStack_5c = 0;
    uStack_58 = *(undefined4 *)((longlong)this + 0x28);
    break;
  default:
    httplib::ClientImpl::vfunction4();
    return;
  }
  uStack_60 = (undefined4)*param_5;
  (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0xe8) + 0x98))
            ((longlong *)**(undefined8 **)((longlong)this + 0xe8),
             *(undefined8 *)((longlong)this + 200),0,&local_68,param_2);
  return;
}

