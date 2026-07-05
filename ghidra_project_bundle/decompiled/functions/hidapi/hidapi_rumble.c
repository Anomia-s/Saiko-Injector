/**
 * Function: hidapi_rumble
 * Address:  14064f790
 * Signature: undefined hidapi_rumble(void)
 * Body size: 169 bytes
 */


undefined8 hidapi_rumble(void)

{
  char cVar1;
  
  cVar1 = FUN_140106120(&DAT_1416fde70,0,1);
  if (cVar1 != '\0') {
    DAT_1416fde98 = initializesrwlock();
    if (DAT_1416fde98 != 0) {
      DAT_1416fde80 = uapi_ms_win_core_synch_l1_2_0dll(0);
      if (DAT_1416fde80 != 0) {
        FUN_140106140(&DAT_1416fde74,1);
        DAT_1416fde78 =
             sdlthreadcreateentry_function
                       (FUN_14064fc20,"HIDAPI Rumble",&DAT_1416fde70,_beginthreadex_exref,
                        _endthreadex_exref);
        if (DAT_1416fde78 != 0) goto LAB_14064f81a;
      }
    }
    FUN_14064fac0();
    return 0;
  }
LAB_14064f81a:
  FUN_1401552a0(DAT_1416fde98);
  return 1;
}

