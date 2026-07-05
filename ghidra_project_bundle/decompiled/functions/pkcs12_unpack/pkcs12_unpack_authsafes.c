/**
 * Function: pkcs12_unpack_authsafes
 * Address:  140d94720
 * Signature: undefined pkcs12_unpack_authsafes(void)
 * Body size: 338 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong pkcs12_unpack_authsafes(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar1 = FUN_140b964c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
  if (iVar1 != 0x15) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pkcs12\\p12_add.c",0xcb,"PKCS12_unpack_authsafes");
    FUN_140b91cc0(0x23,0x79,0);
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(lVar5 + 0x20) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pkcs12\\p12_add.c",0xd0,"PKCS12_unpack_authsafes");
    FUN_140b91cc0(0x23,0x65,0);
    return 0;
  }
  uVar6 = *(undefined8 *)(lVar5 + 0x20);
  uVar2 = FUN_140c6fef0(lVar5 + 0x28);
  uVar3 = FUN_140c6fee0(lVar5 + 0x28);
  uVar4 = FUN_140d01740();
  lVar5 = FUN_140c4d560(uVar6,uVar4,uVar3,uVar2);
  if (lVar5 != 0) {
    iVar7 = 0;
    iVar1 = FUN_140b77980(lVar5);
    if (0 < iVar1) {
      do {
        uVar6 = FUN_140b77990(lVar5,iVar7);
        iVar1 = FUN_140c6ff00(*(undefined8 *)(param_1 + 0x10),uVar6);
        if (iVar1 == 0) {
          FUN_140b77c10(lVar5);
          return 0;
        }
        iVar7 = iVar7 + 1;
        iVar1 = FUN_140b77980();
      } while (iVar7 < iVar1);
    }
  }
  return lVar5;
}

