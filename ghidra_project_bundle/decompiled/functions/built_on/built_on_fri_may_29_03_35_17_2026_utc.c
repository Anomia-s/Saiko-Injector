/**
 * Function: built_on_fri_may_29_03_35_17_2026_utc
 * Address:  140d03c80
 * Signature: undefined built_on_fri_may_29_03_35_17_2026_utc(void)
 * Body size: 203 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * built_on_fri_may_29_03_35_17_2026_utc(undefined4 param_1)

{
  longlong lVar1;
  char *pcVar2;
  
  switch(param_1) {
  case 0:
    return "OpenSSL 3.5.4 30 Sep 2025";
  case 1:
    return 
    "compiler: cl  /Zi /Fdossl_static.pdb /MT /Zl /Gs0 /GF /Gy /W3 /wd4090 /nologo /O2 -DL_ENDIAN -DOPENSSL_PIC -D\"OPENSSL_BUILDING_OPENSSL\" -D\"OPENSSL_SYS_WIN32\" -D\"WIN32_LEAN_AND_MEAN\" -D\"UNICODE\" -D\"_UNICODE\" -D\"_CRT_SECURE_NO_DEPRECATE\" -D\"_WINSOCK_DEPRECATED_NO_WARNINGS\" -D\"NDEBUG\""
    ;
  case 2:
    return "built on: Fri May 29 03:35:17 2026 UTC";
  case 3:
    return "platform: VC-WIN64A";
  case 4:
    return "OPENSSLDIR: \"D:\\a\\Platform\\Platform\\ossl-out\\ssl\"";
  case 5:
    return "ENGINESDIR: \"D:\\a\\Platform\\Platform\\ossl-out\\lib\\engines-3\"";
  case 6:
  case 7:
    return "3.5.4";
  case 8:
    return "MODULESDIR: \"D:\\a\\Platform\\Platform\\ossl-out\\lib\\ossl-modules\"";
  case 9:
    break;
  case 10:
    return "OSSL_WINCTX: Undefined";
  default:
    return "not available";
  }
  lVar1 = FUN_140d94880(0x3f0);
  pcVar2 = "CPUINFO: N/A";
  if (lVar1 != 0) {
    pcVar2 = &DAT_141704470;
  }
  return pcVar2;
}

