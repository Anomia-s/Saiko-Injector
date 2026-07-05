/**
 * Function: openssl_init_ssl
 * Address:  140b7aec0
 * Signature: undefined openssl_init_ssl(void)
 * Body size: 167 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool openssl_init_ssl(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x140b7aeca;
  if (DAT_1416f253c == 0) {
    iVar1 = openssl_init_crypto(~(uint)(param_1 >> 1) & 0x40 | param_1 | 0xc);
    if (iVar1 != 0) {
      iVar2 = FUN_140b8b890(&DAT_1416f2540,FUN_140b7af70);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = DAT_1416f2548;
      }
      return iVar1 != 0;
    }
  }
  else if (DAT_1416f254c == 0) {
    DAT_1416f254c = 1;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\ssl_init.c",0x3a,"OPENSSL_init_ssl",param_4,uVar3);
    FUN_140b91cc0(0x14,0xc0105,0);
  }
  return false;
}

