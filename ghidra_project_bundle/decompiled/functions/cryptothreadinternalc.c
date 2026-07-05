/**
 * Function: cryptothreadinternalc
 * Address:  140cad4c0
 * Signature: undefined cryptothreadinternalc(void)
 * Body size: 67 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cryptothreadinternalc(longlong param_1)

{
  if (param_1 != 0) {
    cryptothreadarchthread_winc(param_1 + 0x10);
    cryptothreadarchthread_winc(param_1 + 0x18);
    FUN_140b8d990(param_1,"crypto\\thread\\internal.c",0x9c);
  }
  return;
}

