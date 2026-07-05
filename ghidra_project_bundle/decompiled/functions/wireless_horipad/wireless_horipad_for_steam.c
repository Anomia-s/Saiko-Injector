/**
 * Function: wireless_horipad_for_steam
 * Address:  1406438a0
 * Signature: undefined wireless_horipad_for_steam(void)
 * Body size: 74 bytes
 */


undefined8 wireless_horipad_for_steam(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140160c70(1,0x50);
  if (lVar1 != 0) {
    *(longlong *)(param_1 + 0x70) = lVar1;
    *(undefined1 *)(lVar1 + 0x4d) = 1;
    FUN_14043fe30(param_1,"Wireless HORIPAD For Steam");
    uVar2 = FUN_140440300(param_1,0);
    return uVar2;
  }
  return 0;
}

