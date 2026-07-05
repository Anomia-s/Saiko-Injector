/**
 * Function: writefile_failed_getlasterror
 * Address:  140b59b80
 * Signature: void __fastcall writefile_failed_getlasterror(longlong param_1, longlong param_2, longlong param_3, FILE * param_4)
 * Body size: 751 bytes
 */


void writefile_failed_getlasterror(longlong param_1,longlong param_2,longlong param_3,FILE *param_4)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  FILE *pFVar4;
  HANDLE hFile;
  size_t sVar5;
  int *piVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong _Count;
  QuillError_vftable *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  QuillError_vftable *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  QuillError_vftable *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  undefined1 local_108 [8];
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [8];
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  DWORD local_88 [8];
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar8 = param_2 * param_3;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      _Count = uVar8 - uVar9;
      pFVar4 = (FILE *)__acrt_iob_func(1);
      if (param_4 == pFVar4) {
LAB_140b59c00:
        iVar1 = _fileno(param_4);
        hFile = (HANDLE)_get_osfhandle(iVar1);
        if (hFile == (HANDLE)0xffffffffffffffff) goto LAB_140b59c60;
        local_88[0] = 0;
        BVar2 = WriteFile(hFile,(void *)(param_1 + uVar9),(DWORD)_Count,local_88,(LPOVERLAPPED)0x0);
        if ((BVar2 == 0) || (local_88[0] != (DWORD)_Count)) {
          DVar3 = GetLastError();
          FUN_140011070(local_e8,DVar3);
          FUN_140004940(local_c8,"WriteFile failed. GetLastError: ");
          FUN_140007770(local_108);
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_1d0 = &quill::v11::QuillError::vftable;
          uStack_1b0 = uStack_100;
          local_1a8 = local_f8;
          uStack_1a0 = uStack_f0;
          local_f8 = 0;
          uStack_f0 = 0xf;
          local_108[0] = 0;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_1d0,(ThrowInfo *)&DAT_14140fa50);
        }
        sVar5 = _Count & 0xffffffff;
      }
      else {
        pFVar4 = (FILE *)__acrt_iob_func(2);
        if (param_4 == pFVar4) goto LAB_140b59c00;
LAB_140b59c60:
        sVar5 = fwrite((void *)(param_1 + uVar9),1,_Count,param_4);
        if (sVar5 < _Count) {
          iVar1 = ferror(param_4);
          if (iVar1 != 0) {
            piVar6 = _errno();
            iVar1 = *piVar6;
            clearerr(param_4);
            pcVar7 = strerror(iVar1);
            FUN_140007930(local_88,iVar1);
            FUN_140004940(local_128,"fwrite failed errno: ");
            FUN_140007770(local_c8);
            FUN_140008840(local_e8,local_c8," error: ");
            FUN_140008840(local_a8,local_e8,pcVar7);
            local_190 = 0;
            uStack_188 = 0;
            local_198 = &quill::v11::QuillError::vftable;
            uStack_178 = uStack_a0;
            local_170 = local_98;
            uStack_168 = uStack_90;
            local_98 = 0;
            uStack_90 = 0xf;
            local_a8[0] = 0;
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_198,(ThrowInfo *)&DAT_14140fa50);
          }
          if (sVar5 == 0) {
            FUN_140004940(local_68,
                          "fwrite returned 0 bytes written without error - stream may be at EOF or in invalid state"
                         );
            local_158 = 0;
            uStack_150 = 0;
            local_160 = &quill::v11::QuillError::vftable;
            uStack_140 = uStack_60;
            local_138 = local_58;
            uStack_130 = uStack_50;
            local_58 = 0;
            uStack_50 = 0xf;
            local_68[0] = 0;
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_160,(ThrowInfo *)&DAT_14140fa50);
          }
        }
      }
      uVar9 = uVar9 + sVar5;
    } while (uVar9 < uVar8);
  }
  return;
}

