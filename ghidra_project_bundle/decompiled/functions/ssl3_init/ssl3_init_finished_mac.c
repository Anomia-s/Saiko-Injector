/**
 * Function: ssl3_init_finished_mac
 * Address:  140c46b10
 * Signature: undefined ssl3_init_finished_mac(void)
 * Body size: 198 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_init_finished_mac(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140c284d0();
  lVar2 = FUN_140b73040(uVar1);
  if (lVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\s3_enc.c",0xe2,"ssl3_init_finished_mac");
    FUN_140ba3290(param_1,0x50,0x80020,0);
    return 0;
  }
  FUN_140b73150(*(undefined8 *)(param_1 + 0x1a8));
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  FUN_140b709d0(*(undefined8 *)(param_1 + 0x1b0));
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(longlong *)(param_1 + 0x1a8) = lVar2;
  FUN_140b74190(lVar2,9,1,0);
  return 1;
}

