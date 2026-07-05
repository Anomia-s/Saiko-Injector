/**
 * Function: evp_pkey_verify
 * Address:  140bff020
 * Signature: undefined evp_pkey_verify(void)
 * Body size: 467 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong evp_pkey_verify(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  
  if (param_1 == (int *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\signature.c",0x487,"EVP_PKEY_verify");
    FUN_140b91cc0(6,0xc0102,0);
    return 0xffffffff;
  }
  if ((*param_1 != 0x20) && (*param_1 != 0x8000)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\signature.c",0x48d,"EVP_PKEY_verify");
    FUN_140b91cc0(6,0x97,0);
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0xc) == 0) {
    if ((*(longlong *)(param_1 + 0x1e) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x1e) + 0x58),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140bff0d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return uVar3;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\signature.c",0x4a5,"EVP_PKEY_verify");
    FUN_140b91cc0(6,0x96,0);
    return 0xfffffffe;
  }
  lVar1 = *(longlong *)(param_1 + 10);
  puVar4 = &DAT_1413a2ad6;
  if (*(undefined1 **)(lVar1 + 0x10) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(lVar1 + 0x10);
  }
  if (*(code **)(lVar1 + 0x60) == (code *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\signature.c",0x497,"EVP_PKEY_verify");
    FUN_140b91cc0(6,0xed,"%s verify:%s",*(undefined8 *)(lVar1 + 8),puVar4);
    return 0xfffffffe;
  }
  uVar2 = (**(code **)(lVar1 + 0x60))(*(longlong *)(param_1 + 0xc));
  if ((int)uVar2 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\signature.c",0x49f,"EVP_PKEY_verify");
    FUN_140b91cc0(6,0xea,"%s verify:%s",*(undefined8 *)(lVar1 + 8),puVar4);
  }
  return (ulonglong)uVar2;
}

