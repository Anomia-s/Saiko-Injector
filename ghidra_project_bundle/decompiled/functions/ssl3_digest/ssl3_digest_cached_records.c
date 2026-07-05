/**
 * Function: ssl3_digest_cached_records
 * Address:  140c476e0
 * Signature: undefined ssl3_digest_cached_records(void)
 * Body size: 438 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_digest_cached_records(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    iVar1 = FUN_140b74190(*(undefined8 *)(param_1 + 0x1a8),3,0,&local_res8);
    if (iVar1 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\s3_enc.c",0x11a,"ssl3_digest_cached_records");
      FUN_140ba3290(param_1,0x50,0x14c,0);
      return 0;
    }
    lVar3 = FUN_140b70980();
    *(longlong *)(param_1 + 0x1b0) = lVar3;
    if (lVar3 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\s3_enc.c",0x120,"ssl3_digest_cached_records");
      FUN_140ba3290(param_1,0x50,0x80006,0);
      return 0;
    }
    lVar3 = FUN_140ba7640(param_1);
    if (lVar3 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\s3_enc.c",0x127,"ssl3_digest_cached_records");
      FUN_140ba3290(param_1,0x50,0x129,0);
      return 0;
    }
    iVar2 = FUN_140b70ff0(*(undefined8 *)(param_1 + 0x1b0),lVar3,0);
    if ((iVar2 == 0) ||
       (iVar1 = evp_digestupdate(*(undefined8 *)(param_1 + 0x1b0),local_res8,(longlong)iVar1),
       iVar1 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\s3_enc.c",300,"ssl3_digest_cached_records");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      return 0;
    }
  }
  if (param_2 == 0) {
    FUN_140b73150(*(undefined8 *)(param_1 + 0x1a8));
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  return 1;
}

