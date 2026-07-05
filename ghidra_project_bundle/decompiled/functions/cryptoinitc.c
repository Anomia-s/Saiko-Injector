/**
 * Function: cryptoinitc
 * Address:  140bf69f0
 * Signature: undefined cryptoinitc(void)
 * Body size: 273 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cryptoinitc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((DAT_141700044 != 0) && (DAT_141700018 == 0)) {
    DAT_141700018 = 1;
    cryptoinitthreadc();
    puVar2 = DAT_141700028;
    while (puVar2 != (undefined8 *)0x0) {
      (*(code *)*puVar2)();
      puVar1 = (undefined8 *)puVar2[1];
      FUN_140b8d990(puVar2,"crypto\\init.c",0x196);
      puVar2 = puVar1;
    }
    DAT_141700028 = (undefined8 *)0x0;
    cryptothreads_winc(DAT_141700030);
    DAT_141700030 = 0;
    cryptothreads_winc(DAT_141700038);
    DAT_141700038 = 0;
    FUN_140b8b9a0(&DAT_14170001c);
    _guard_check_icall();
    _guard_check_icall();
    _guard_check_icall();
    if (DAT_141700094 != 0) {
      FUN_140ba09f0();
    }
    FUN_140b83150();
    FUN_140c1ac20();
    FUN_140c10350();
    FUN_140c799f0();
    FUN_140c177a0();
    cryptoinitthreadc();
    FUN_140b747c0();
    FUN_140b99ac0();
    FUN_140b96f00();
    FUN_140b92980();
    FUN_140b8dcc0();
    FUN_140c79a10();
    _guard_check_icall();
    DAT_141700044 = 0;
  }
  return 0;
}

