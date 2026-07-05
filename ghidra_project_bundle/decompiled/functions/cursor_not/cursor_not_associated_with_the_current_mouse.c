/**
 * Function: cursor_not_associated_with_the_current_mouse
 * Address:  140135120
 * Signature: undefined cursor_not_associated_with_the_current_mouse(void)
 * Body size: 196 bytes
 */


undefined8 cursor_not_associated_with_the_current_mouse(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 == DAT_1415258c0) {
    return 1;
  }
  if (param_1 == (undefined8 *)0x0) {
    param_1 = DAT_1415258c0;
    if (DAT_141525830 == 0) {
      param_1 = DAT_1415258b8;
    }
    puVar1 = DAT_1415258c0;
    if (param_1 != (undefined8 *)0x0) goto LAB_14013518d;
  }
  else {
    puVar1 = param_1;
    if (param_1 != DAT_1415258b8) {
      puVar2 = &DAT_1415258b0;
      do {
        puVar2 = (undefined8 *)*puVar2;
        if (puVar2 == (undefined8 *)0x0) break;
      } while (puVar2 != param_1);
      puVar1 = param_1;
      if (puVar2 == (undefined8 *)0x0) {
        uVar3 = FUN_1400fbed0("Cursor not associated with the current mouse");
        return uVar3;
      }
    }
LAB_14013518d:
    DAT_1415258c0 = puVar1;
    if ((DAT_141525830 == 0) ||
       ((DAT_1415258c8 == '\x01' && ((DAT_141525861 != '\x01' || (DAT_141525863 != '\0')))))) {
      if (DAT_1415257e0 == (code *)0x0) {
        return 1;
      }
      goto LAB_1401351c9;
    }
  }
  if (DAT_1415257e0 == (code *)0x0) {
    return 1;
  }
  param_1 = (undefined8 *)0x0;
LAB_1401351c9:
  (*DAT_1415257e0)(param_1);
  return 1;
}

