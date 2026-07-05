/**
 * Function: readback
 * Address:  140527ce0
 * Signature: undefined __thiscall readback(void * this)
 * Body size: 475 bytes
 */


void * __thiscall readback(void *this,__uint64 *param_2)

{
  char cVar1;
  void *_Src;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  ulonglong uVar3;
  int iStack_12c;
  longlong local_128 [2];
  undefined1 local_118 [8];
  basic_streambuf<char,std::char_traits<char>_> local_110 [3];
  undefined8 *local_f8;
  undefined8 *local_f0;
  longlong *local_d8;
  ulonglong *local_d0;
  int *local_c0;
  ulonglong local_a8;
  uint local_a0;
  ios_base local_90 [6];
  void *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1401e87c0(local_128,1);
  FUN_1400e5ec0(local_118,"Unnamed ");
  cVar1 = (char)param_2[1];
  if (cVar1 == '\x02') {
    FUN_1400e5ec0(local_118,"Readback");
  }
  else if (cVar1 == '\x01') {
    FUN_1400e5ec0(local_118,"Upload");
  }
  else if (cVar1 == '\0') {
    FUN_1400e5ec0(local_118,"DeviceLocal");
  }
  else {
    FUN_1400e5ec0(local_118,"Invalid-Type");
  }
  this_00 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(local_118," Heap (");
  pbVar2 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_00,*param_2);
  FUN_1400e5ec0(pbVar2," bytes)");
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0xf;
  local_30 = this;
  if (((local_a0 & 0x22) == 2) || (uVar3 = *local_d0, uVar3 == 0)) {
    if (((local_a0 & 4) != 0) || (*local_d8 == 0)) goto LAB_140527e55;
    uVar3 = *local_d8 + (longlong)*local_c0;
    _Src = (void *)*local_f8;
  }
  else {
    if (uVar3 < local_a8) {
      uVar3 = local_a8;
    }
    _Src = (void *)*local_f0;
  }
  if (_Src != (void *)0x0) {
    uVar3 = uVar3 - (longlong)_Src;
    if (uVar3 < 0x10) {
      *(ulonglong *)((longlong)this + 0x10) = uVar3;
      memmove(this,_Src,uVar3);
      *(undefined1 *)((longlong)this + uVar3) = 0;
    }
    else {
      FUN_1400069b0(this,uVar3);
    }
  }
LAB_140527e55:
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128[0] + 4)) =
       *(int *)(local_128[0] + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_110[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_110);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_110);
  std::ios_base::~ios_base(local_90);
  return local_30;
}

