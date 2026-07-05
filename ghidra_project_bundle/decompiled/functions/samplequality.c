/**
 * Function: samplequality
 * Address:  140527f20
 * Signature: undefined __thiscall samplequality(void * this)
 * Body size: 756 bytes
 */


void * __thiscall samplequality(void *this,uint *param_2)

{
  void *_Src;
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  char *pcVar6;
  ulonglong uVar7;
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
  uVar2 = FUN_1400e5ec0(local_120,"Unnamed ");
  if ((ulonglong)*(byte *)((longlong)param_2 + 0x1d) < 10) {
    pcVar6 = (&PTR_s_Unknown_14133fdb1_5_140e4e068)[*(byte *)((longlong)param_2 + 0x1d)];
  }
  else {
    pcVar6 = "<INVALID>";
  }
  FUN_1400e5ec0(uVar2,pcVar6);
  uVar2 = FUN_1400e5ec0(local_120,&DAT_14139c233);
  lVar3 = FUN_1406e0030((char)param_2[7]);
  FUN_1400e5ec0(uVar2,*(undefined8 *)(lVar3 + 8));
  pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(local_120,", Width = ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,*param_2);
  bVar1 = *(byte *)((longlong)param_2 + 0x1d);
  if (2 < bVar1) {
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(local_120,", Height = ");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_2[1]);
    bVar1 = *(byte *)((longlong)param_2 + 0x1d);
    if (bVar1 == 9) {
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(local_120,", Depth = ");
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_2[2]);
      bVar1 = *(byte *)((longlong)param_2 + 0x1d);
    }
  }
  if ((bVar1 < 9) && ((0x154U >> (bVar1 & 0x1f) & 1) != 0)) {
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_120,", ArraySize = ");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_2[3]);
    bVar1 = *(byte *)((longlong)param_2 + 0x1d);
  }
  if ((byte)(bVar1 - 1) < 6) {
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_120,", MipLevels = ");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_2[4]);
    bVar1 = *(byte *)((longlong)param_2 + 0x1d);
  }
  if ((byte)(bVar1 - 7) < 2) {
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_120,", SampleCount = ");
    pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_2[5]);
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(pbVar5,", SampleQuality = ");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_2[6]);
  }
  if (*(char *)((longlong)param_2 + 0x41) == '\x01') {
    FUN_1400e5ec0(local_120,", IsRenderTarget");
  }
  if (*(char *)((longlong)param_2 + 0x42) == '\x01') {
    FUN_1400e5ec0(local_120,", IsUAV");
  }
  if (*(char *)((longlong)param_2 + 0x43) == '\x01') {
    FUN_1400e5ec0(local_120,", IsTypeless");
  }
  FUN_1400e5ec0(local_120,")");
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0xf;
  local_38 = this;
  if (((local_a8 & 0x22) == 2) || (uVar7 = *local_d8, uVar7 == 0)) {
    if (((local_a8 & 4) != 0) || (*local_e0 == 0)) goto LAB_1405281ac;
    uVar7 = *local_e0 + (longlong)*local_c8;
    _Src = (void *)*local_100;
  }
  else {
    if (uVar7 < local_b0) {
      uVar7 = local_b0;
    }
    _Src = (void *)*local_f8;
  }
  if (_Src != (void *)0x0) {
    uVar7 = uVar7 - (longlong)_Src;
    if (uVar7 < 0x10) {
      *(ulonglong *)((longlong)this + 0x10) = uVar7;
      memmove(this,_Src,uVar7);
      *(undefined1 *)((longlong)this + uVar7) = 0;
    }
    else {
      FUN_1400069b0(this,uVar7);
    }
  }
LAB_1405281ac:
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

