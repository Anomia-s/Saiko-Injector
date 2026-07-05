/**
 * Function: tls_aes_128_gcm_sha256
 * Address:  140bedf70
 * Signature: undefined tls_aes_128_gcm_sha256(void)
 * Body size: 206 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong tls_aes_128_gcm_sha256(char *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined *local_38 [3];
  ulonglong local_20 [3];
  
  local_20[0] = 7;
  local_38[0] = &DAT_14150ff70;
  local_20[1] = 0xa7;
  local_38[1] = &DAT_1415101a0;
  uVar4 = 0;
  local_20[2] = 2;
  local_38[2] = &DAT_1415135d0;
  do {
    uVar1 = *(ulonglong *)((longlong)local_20 + uVar4);
    uVar3 = 0;
    lVar5 = *(longlong *)((longlong)local_38 + uVar4);
    if (uVar1 != 0) {
      do {
        if ((*(char **)(lVar5 + 0x10) != (char *)0x0) &&
           (iVar2 = strcmp(param_1,*(char **)(lVar5 + 0x10)), iVar2 == 0)) {
          return lVar5;
        }
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x50;
      } while (uVar3 < uVar1);
    }
    uVar4 = uVar4 + 8;
    if (0x17 < uVar4) {
      return 0;
    }
  } while( true );
}

