/**
 * Function: release_buffer
 * Address:  140729310
 * Signature: undefined __thiscall release_buffer(void * this)
 * Body size: 778 bytes
 */


void __thiscall release_buffer(void *this)

{
  void *_Src;
  longlong *plVar1;
  undefined8 uVar2;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  longlong lVar3;
  __uint64 _Var4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
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
                    /* inlined constructor or destructor (approx location) for nvrhi::d3d12::Buffer
                        */
  *(Buffer_vftable **)this = &nvrhi::d3d12::Buffer::vftable;
  if (*(char *)(*(longlong *)((longlong)this + 0xd8) + 0x50) == '\x01') {
    FUN_1401e87c0(local_140,1);
    uVar2 = FUN_1400e5ec0(local_130,"Release buffer: ");
    if (*(ulonglong *)((longlong)this + 0x48) < 0x10) {
      lVar3 = (longlong)this + 0x30;
    }
    else {
      lVar3 = *(longlong *)((longlong)this + 0x30);
    }
    uVar2 = FUN_1400e73f0(uVar2,lVar3,*(undefined8 *)((longlong)this + 0x40));
    this_00 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar2," 0x");
    lVar3 = (longlong)this_00->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
    *(uint *)((longlong)&this_00[1].vbtablePtr + lVar3) =
         *(uint *)((longlong)&this_00[1].vbtablePtr + lVar3) & 0xfffff1ff | 0x800;
    _Var4 = (**(code **)(*(longlong *)this + 0x30))(this);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_00,_Var4);
    uVar2 = *(undefined8 *)((longlong)this + 0xd8);
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0xf;
    if (((local_b8 & 0x22) == 2) || (uVar5 = *local_e8, uVar5 == 0)) {
      if (((local_b8 & 4) == 0) && (*local_f0 != 0)) {
        uVar5 = *local_f0 + (longlong)*local_d8;
        _Src = (void *)*local_110;
        goto joined_r0x00014072944b;
      }
    }
    else {
      if (uVar5 < local_c0) {
        uVar5 = local_c0;
      }
      _Src = (void *)*local_108;
joined_r0x00014072944b:
      if (_Src != (void *)0x0) {
        uVar5 = uVar5 - (longlong)_Src;
        if (uVar5 < 0x10) {
          local_48[2] = uVar5;
          memmove(local_48,_Src,uVar5);
          *(undefined1 *)((longlong)local_48 + uVar5) = 0;
        }
        else {
          FUN_1400069b0(local_48,uVar5);
        }
      }
    }
    FUN_14053e370(uVar2,local_48);
    if (0xf < (ulonglong)local_48[3]) {
      uVar5 = local_48[3] + 1;
      lVar3 = local_48[0];
      if (0xfff < uVar5) {
        lVar3 = *(longlong *)(local_48[0] + -8);
        if (0x1f < (ulonglong)((local_48[0] + -8) - lVar3)) goto LAB_140729601;
        uVar5 = local_48[3] + 0x28;
      }
      thunk_FUN_140b68ba8(lVar3,uVar5);
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
                   &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
    ;
    FUN_1401da8b0(local_128);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(local_128);
    std::ios_base::~ios_base(local_a8);
  }
  if (*(uint *)((longlong)this + 0xe8) != 0xffffffff) {
    nvrhi::d3d12::StaticDescriptorHeap::vfunction5
              ((StaticDescriptorHeap *)(*(longlong *)((longlong)this + 0xe0) + 0x180),
               (ulonglong)*(uint *)((longlong)this + 0xe8));
    *(undefined4 *)((longlong)this + 0xe8) = 0xffffffff;
  }
  plVar1 = *(longlong **)((longlong)this + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)this + 0xc0) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)((longlong)this + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)this + 0xb8) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)((longlong)this + 0x70);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)this + 0x70) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  uVar5 = *(ulonglong *)((longlong)this + 0x48);
  if (0xf < uVar5) {
    lVar3 = *(longlong *)((longlong)this + 0x30);
    uVar6 = uVar5 + 1;
    lVar7 = lVar3;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar7)) {
LAB_140729601:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = uVar5 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0xf;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  return;
}

