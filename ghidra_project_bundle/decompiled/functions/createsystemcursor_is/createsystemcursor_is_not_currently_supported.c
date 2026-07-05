/**
 * Function: createsystemcursor_is_not_currently_supported
 * Address:  140137640
 * Signature: undefined createsystemcursor_is_not_currently_supported(void)
 * Body size: 64 bytes
 */


undefined8 * createsystemcursor_is_not_currently_supported(void)

{
  undefined8 *puVar1;
  
  if (DAT_1415257d8 == (code *)0x0) {
    FUN_1400fbed0("CreateSystemCursor is not currently supported");
  }
  else {
    puVar1 = (undefined8 *)(*DAT_1415257d8)();
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = DAT_1415258b0;
      DAT_1415258b0 = puVar1;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}

