/**
 * Function: tls_write_records
 * Address:  140c3f730
 * Signature: undefined tls_write_records(void)
 * Body size: 156 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_write_records(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(ulonglong *)(param_1 + 0x690) < *(ulonglong *)(param_1 + 0x698)) &&
     (*(longlong *)(param_1 + 0x80 + *(ulonglong *)(param_1 + 0x690) * 0x30) != 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\record\\methods\\tls_common.c",0x767,"tls_write_records");
    FUN_140c40330(param_1,0x50,0xc0101,0);
  }
  else {
    iVar1 = (**(code **)(*(longlong *)(param_1 + 0x1148) + 0x48))();
    if (iVar1 != 0) {
      *(undefined8 *)(param_1 + 0x690) = 0;
      uVar2 = tls_retry_write_records(param_1);
      return uVar2;
    }
  }
  return 0xfffffffe;
}

