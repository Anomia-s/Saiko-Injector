/**
 * Function: sdltimer
 * Address:  140117a10
 * Signature: undefined sdltimer(void)
 * Body size: 188 bytes
 */


ulonglong sdltimer(void)

{
  char cVar1;
  undefined8 unaff_RSI;
  
  cVar1 = FUN_1401383d0(&DAT_141525540);
  if (cVar1 == '\0') {
LAB_140117aa7:
    return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1) & 0xffffffff;
  }
  DAT_141525568 = initializesrwlock();
  if (DAT_141525568 != 0) {
    DAT_1415255f8 = uapi_ms_win_core_synch_l1_2_0dll(0);
    if (DAT_1415255f8 != 0) {
      FUN_140106140(&DAT_141525610,1);
      DAT_141525558 =
           sdlthreadcreateentry_function
                     (FUN_140117ad0,"SDLTimer",&DAT_141525540,_beginthreadex_exref,
                      _endthreadex_exref);
      if (DAT_141525558 != 0) {
        FUN_1401384b0(&DAT_141525540,1);
        goto LAB_140117aa7;
      }
    }
  }
  FUN_1401384b0(&DAT_141525540,1);
  FUN_140117d30();
  return 0;
}

