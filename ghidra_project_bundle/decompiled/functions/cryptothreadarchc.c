/**
 * Function: cryptothreadarchc
 * Address:  140cd9700
 * Signature: undefined cryptothreadarchc(void)
 * Body size: 163 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cryptothreadarchc(byte *param_1)

{
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  FUN_140c20b60(*(undefined8 *)(param_1 + 0x30));
  if ((*param_1 & 5) == 0) {
    FUN_140c20b80(*(undefined8 *)(param_1 + 0x30));
    return 0;
  }
  FUN_140c20b80(*(undefined8 *)(param_1 + 0x30));
  cryptothreadarchthread_winc(param_1 + 0x28);
  cryptothreadarchthread_winc(param_1 + 0x30);
  cryptothreadarchthread_winc(param_1 + 0x38);
  FUN_140b8d990(*(undefined8 *)(param_1 + 0x20),"crypto\\thread\\arch.c",0x80);
  FUN_140b8d990(param_1,"crypto\\thread\\arch.c",0x81);
  return 1;
}

