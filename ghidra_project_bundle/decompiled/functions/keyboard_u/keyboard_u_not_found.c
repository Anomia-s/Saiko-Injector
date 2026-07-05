/**
 * Function: keyboard_u_not_found
 * Address:  14015f8e0
 * Signature: undefined keyboard_u_not_found(void)
 * Body size: 80 bytes
 */


undefined8 keyboard_u_not_found(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (0 < (longlong)DAT_1415260a0) {
    lVar2 = 0;
    do {
      if (param_1 == *(int *)(DAT_1415260a8 + lVar2)) {
        uVar1 = FUN_1403d9560(*(undefined8 *)(DAT_1415260a8 + 8 + lVar2));
        return uVar1;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)DAT_1415260a0 * 0x10 != lVar2);
  }
  FUN_1400fbed0("Keyboard %u not found");
  return 0;
}

