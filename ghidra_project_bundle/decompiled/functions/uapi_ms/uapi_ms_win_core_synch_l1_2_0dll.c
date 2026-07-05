/**
 * Function: uapi_ms_win_core_synch_l1_2_0dll
 * Address:  140158140
 * Signature: undefined uapi_ms_win_core_synch_l1_2_0dll(void)
 * Body size: 200 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uapi_ms_win_core_synch_l1_2_0dll(ulonglong param_1)

{
  char cVar1;
  HMODULE hModule;
  code *UNRECOVERED_JUMPTABLE;
  undefined **ppuVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)CONCAT44(DAT_141525b80._4_4_,(undefined4)DAT_141525b80);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    param_1 = param_1 & 0xffffffff;
    cVar1 = FUN_1401106d0("SDL_WINDOWS_FORCE_SEMAPHORE_KERNEL",0);
    ppuVar2 = &PTR_couldnt_create_semaphore_140debca8;
    if (cVar1 == '\0') {
      hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
      if (hModule != (HMODULE)0x0) {
        DAT_141525ba8 = GetProcAddress(hModule,"WaitOnAddress");
        _DAT_141525bb0 = GetProcAddress(hModule,"WakeByAddressSingle");
        ppuVar2 = &PTR_FUN_140debcd0;
        if (_DAT_141525bb0 == (FARPROC)0x0) {
          ppuVar2 = &PTR_couldnt_create_semaphore_140debca8;
        }
        if (DAT_141525ba8 == (FARPROC)0x0) {
          ppuVar2 = &PTR_couldnt_create_semaphore_140debca8;
        }
      }
    }
    DAT_141525b80._0_4_ = *(undefined4 *)ppuVar2;
    DAT_141525b80._4_4_ = *(undefined4 *)((longlong)ppuVar2 + 4);
    UNRECOVERED_JUMPTABLE = (code *)*ppuVar2;
    _DAT_141525b88 = *(undefined4 *)(ppuVar2 + 1);
    uRam0000000141525b8c = *(undefined4 *)((longlong)ppuVar2 + 0xc);
    DAT_141525b90._0_4_ = *(undefined4 *)(ppuVar2 + 2);
    DAT_141525b90._4_4_ = *(undefined4 *)((longlong)ppuVar2 + 0x14);
    uRam0000000141525b98 = *(undefined4 *)(ppuVar2 + 3);
    uRam0000000141525b9c = *(undefined4 *)((longlong)ppuVar2 + 0x1c);
    _DAT_141525ba0 = ppuVar2[4];
  }
                    /* WARNING: Could not recover jumptable at 0x000140158205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

