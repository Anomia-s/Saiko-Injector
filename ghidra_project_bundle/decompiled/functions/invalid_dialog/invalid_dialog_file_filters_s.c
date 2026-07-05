/**
 * Function: invalid_dialog_file_filters_s
 * Address:  14016de70
 * Signature: undefined invalid_dialog_file_filters_s(void)
 * Body size: 220 bytes
 */


void invalid_dialog_file_filters_s
               (uint param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  lVar2 = FUN_14014ff10(param_4,"SDL.filedialog.filters",0);
  iVar1 = FUN_140150150(param_4,"SDL.filedialog.nfilters",0xffffffffffffffff);
  if (iVar1 == -1 && lVar2 != 0) {
    FUN_1400fbed0(
                 "Set filter pointers, but didn\'t set number of filters (SDL_PROP_FILE_DIALOG_NFILTERS_NUMBER)"
                 );
  }
  else {
    lVar2 = FUN_14046bcd0(lVar2,iVar1);
    if (lVar2 == 0) {
      if (param_1 < 3) {
        file_dialog_driver_unsupported(param_1,UNRECOVERED_JUMPTABLE,param_3,param_4);
        return;
      }
      FUN_1400fbed0("Unsupported file dialog type: %d",param_1);
    }
    else {
      FUN_1400fbed0("Invalid dialog file filters: %s",lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014016df49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3,0,0xffffffff);
  return;
}

