/**
 * Function: ssl_init_wbio_buffer
 * Address:  140b6e870
 * Signature: undefined ssl_init_wbio_buffer(void)
 * Body size: 216 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_init_wbio_buffer(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    return 1;
  }
  uVar2 = FUN_140b8fe10();
  lVar3 = FUN_140b73040(uVar2);
  if (lVar3 != 0) {
    iVar1 = FUN_140b744c0(lVar3,0x75,1,0);
    if (0 < iVar1) {
      *(longlong *)(param_1 + 0x60) = lVar3;
      uVar2 = FUN_140b744f0(lVar3,*(undefined8 *)(param_1 + 0x58));
      *(undefined8 *)(param_1 + 0x58) = uVar2;
      (**(code **)(*(longlong *)(param_1 + 0xc68) + 0x58))(*(undefined8 *)(param_1 + 0xc78),uVar2);
      return 1;
    }
  }
  FUN_140b73150(lVar3);
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_lib.c",0x14ff,"ssl_init_wbio_buffer");
  FUN_140b91cc0(0x14,0x80007,0);
  return 0;
}

