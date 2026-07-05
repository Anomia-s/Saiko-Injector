/**
 * Function: non_default_library_context
 * Address:  140c17850
 * Signature: undefined non_default_library_context(void)
 * Body size: 93 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * non_default_library_context(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_140c17e70();
  }
  if (puVar1 != &DAT_1417001d0) {
    if (param_1 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)FUN_140c17e70();
      if (param_1 != puVar1) {
        return "Non-default library context";
      }
    }
    return "Thread-local default library context";
  }
  return "Global default library context";
}

