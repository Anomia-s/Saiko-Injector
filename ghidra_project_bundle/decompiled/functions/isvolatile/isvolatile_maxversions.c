/**
 * Function: isvolatile_maxversions
 * Address:  140528280
 * Signature: undefined __thiscall isvolatile_maxversions(void * this)
 * Body size: 702 bytes
 */


void * __thiscall isvolatile_maxversions(void *this,__uint64 *param_2)

{
  void *_Src;
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iStack_134;
  longlong local_130 [2];
  undefined1 local_120 [8];
  basic_streambuf<char,std::char_traits<char>_> local_118 [3];
  undefined8 *local_100;
  undefined8 *local_f8;
  longlong *local_e0;
  ulonglong *local_d8;
  int *local_c8;
  ulonglong local_b0;
  uint local_a8;
  ios_base local_98 [6];
  void *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1401e87c0(local_130,1);
  pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_1400e5ec0(local_120,"Unnamed Buffer (ByteSize = ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,*param_2);
  if ((char)param_2[6] != '\0') {
    uVar2 = FUN_1400e5ec0(local_120,", Format = ");
    lVar3 = FUN_1406e0030((char)param_2[6]);
    FUN_1400e5ec0(uVar2,*(undefined8 *)(lVar3 + 8));
  }
  if ((int)param_2[1] != 0) {
    pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_120,", StructStride = ");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,(uint)param_2[1]);
  }
  if (*(char *)((longlong)param_2 + 0x3b) == '\x01') {
    pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_120,", IsVolatile, MaxVersions = ");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              (pbVar1,*(uint *)((longlong)param_2 + 0xc));
  }
  if (*(char *)((longlong)param_2 + 0x31) == '\x01') {
    FUN_1400e5ec0(local_120,", CanHaveUAVs");
  }
  if (*(char *)((longlong)param_2 + 0x32) == '\x01') {
    FUN_1400e5ec0(local_120,", CanHaveTypedViews");
  }
  if (*(char *)((longlong)param_2 + 0x33) == '\x01') {
    FUN_1400e5ec0(local_120,", CanHaveRawViews");
  }
  if (*(char *)((longlong)param_2 + 0x34) == '\x01') {
    FUN_1400e5ec0(local_120,", IsVertexBuffer");
  }
  if (*(char *)((longlong)param_2 + 0x35) == '\x01') {
    FUN_1400e5ec0(local_120,", IsIndexBuffer");
  }
  if (*(char *)((longlong)param_2 + 0x36) == '\x01') {
    FUN_1400e5ec0(local_120,", IsConstantBuffer");
  }
  if (*(char *)((longlong)param_2 + 0x37) == '\x01') {
    FUN_1400e5ec0(local_120,", IsDrawIndirectArgs");
  }
  if ((char)param_2[7] == '\x01') {
    FUN_1400e5ec0(local_120,", IsAccelStructBuildInput");
  }
  if (*(char *)((longlong)param_2 + 0x39) == '\x01') {
    FUN_1400e5ec0(local_120,", IsAccelStructStorage");
  }
  if (*(char *)((longlong)param_2 + 0x3a) == '\x01') {
    FUN_1400e5ec0(local_120,", IsShaderBindingTable");
  }
  FUN_1400e5ec0(local_120,")");
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0xf;
  local_38 = this;
  if (((local_a8 & 0x22) == 2) || (uVar4 = *local_d8, uVar4 == 0)) {
    if (((local_a8 & 4) != 0) || (*local_e0 == 0)) goto LAB_1405284d6;
    uVar4 = *local_e0 + (longlong)*local_c8;
    _Src = (void *)*local_100;
  }
  else {
    if (uVar4 < local_b0) {
      uVar4 = local_b0;
    }
    _Src = (void *)*local_f8;
  }
  if (_Src != (void *)0x0) {
    uVar4 = uVar4 - (longlong)_Src;
    if (uVar4 < 0x10) {
      *(ulonglong *)((longlong)this + 0x10) = uVar4;
      memmove(this,_Src,uVar4);
      *(undefined1 *)((longlong)this + uVar4) = 0;
    }
    else {
      FUN_1400069b0(this,uVar4);
    }
  }
LAB_1405284d6:
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_130 + (longlong)*(int *)(local_130[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_134 + (longlong)*(int *)(local_130[0] + 4)) =
       *(int *)(local_130[0] + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_118[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_118);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_118);
  std::ios_base::~ios_base(local_98);
  return local_38;
}

