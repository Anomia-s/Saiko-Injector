/**
 * Function: failed_to_free_library
 * Address:  14000e5c0
 * Signature: ulonglong __fastcall failed_to_free_library(LPCSTR param_1, LPCSTR param_2, undefined8 param_3, undefined8 param_4)
 * Body size: 513 bytes
 */


ulonglong failed_to_free_library
                    (LPCSTR param_1,LPCSTR param_2,undefined8 param_3,undefined8 param_4)

{
  BOOL BVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  ulonglong uVar3;
  LPCSTR pCVar4;
  undefined1 local_180 [32];
  QuillError_vftable *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  QuillError_vftable *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  QuillError_vftable *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  pCVar4 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pCVar4 = *(LPCSTR *)param_1;
  }
  hModule = LoadLibraryA(pCVar4);
  if (hModule == (HMODULE)0x0) {
    FUN_1400119b0(local_98,"Failed to load library ",param_1);
    local_158 = 0;
    uStack_150 = 0;
    local_160 = &quill::v11::QuillError::vftable;
    uStack_140 = uStack_90;
    local_138 = local_88;
    uStack_130 = uStack_80;
    local_88 = 0;
    uStack_80 = 0xf;
    local_98[0] = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_160,(ThrowInfo *)&DAT_14140fa50);
  }
  pCVar4 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pCVar4 = *(LPCSTR *)param_2;
  }
  pFVar2 = GetProcAddress(hModule,pCVar4);
  if (pFVar2 != (FARPROC)0x0) {
    uVar3 = (*pFVar2)(param_3,param_4);
    BVar1 = FreeLibrary(hModule);
    if (BVar1 != 0) {
      return uVar3 & 0xffffffff;
    }
    FUN_1400119b0(local_58,"Failed to free library ",param_1);
    local_e8 = 0;
    uStack_e0 = 0;
    local_f0 = &quill::v11::QuillError::vftable;
    uStack_d0 = uStack_50;
    local_c8 = local_48;
    uStack_c0 = uStack_40;
    local_48 = 0;
    uStack_40 = 0xf;
    local_58[0] = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_f0,(ThrowInfo *)&DAT_14140fa50);
  }
  FreeLibrary(hModule);
  FUN_1400119b0(local_180,"Failed to call ",param_2);
  FUN_140008840(local_b8,local_180,&DAT_1413a21db);
  FUN_140028d40(local_78,local_b8,param_1);
  local_120 = 0;
  uStack_118 = 0;
  local_128 = &quill::v11::QuillError::vftable;
  uStack_108 = uStack_70;
  local_100 = local_68;
  uStack_f8 = uStack_60;
  local_68 = 0;
  uStack_60 = 0xf;
  local_78[0] = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_128,(ThrowInfo *)&DAT_14140fa50);
}

