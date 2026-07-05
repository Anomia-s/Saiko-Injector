/**
 * Function: mouse_u_not_found
 * Address:  1401350d0
 * Signature: undefined mouse_u_not_found(void)
 * Body size: 80 bytes
 */


undefined8 mouse_u_not_found(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (0 < (longlong)DAT_1415257c0) {
    lVar2 = 0;
    do {
      if (param_1 == *(int *)(DAT_1415257c8 + lVar2)) {
        uVar1 = FUN_1403d9560(*(undefined8 *)(DAT_1415257c8 + 8 + lVar2));
        return uVar1;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)DAT_1415257c0 * 0x10 != lVar2);
  }
  FUN_1400fbed0("Mouse %u not found");
  return 0;
}

