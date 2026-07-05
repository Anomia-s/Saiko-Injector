/**
 * Function: error_could_not_resolve_marker
 * Address:  1406ed070
 * Signature: undefined error_could_not_resolve_marker(void)
 * Body size: 137 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void error_could_not_resolve_marker(void)

{
  _DAT_1417000d0 = 0xffffffff00000000;
  uRam00000001417000d8 = 0xffffffff00000000;
  _DAT_1417000e0 = 0;
  _DAT_1417000e8 = 0xffffffffffffffff;
  DAT_1417000f0 = (char *)0x0;
  uRam00000001417000f8 = 0;
  _DAT_141700100 = 0;
  DAT_141700108 = 0;
  DAT_1417000f0 = (char *)FUN_140b65d30(0x20);
  _DAT_141700100 = 0x1f;
  DAT_141700108 = 0x1f;
  builtin_strncpy(DAT_1417000f0,"ERROR: could not resolve marker",0x20);
  atexit(FUN_1406eccc0);
  return;
}

