/**
 * Function: pem_read_bio_key_decoder
 * Address:  140bf5bd0
 * Signature: undefined pem_read_bio_key_decoder(void)
 * Body size: 551 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong pem_read_bio_key_decoder
                   (undefined8 param_1,longlong *param_2,code *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong local_28 [2];
  
  local_28[1] = 0x140bf5bf4;
  local_28[0] = 0;
  iVar1 = FUN_140b74190(param_1,0x85,0,0);
  if ((iVar1 < 0) ||
     (lVar4 = FUN_140c2d4b0(local_28,&DAT_1413a6874,0,0,param_7,param_5,param_6), lVar4 == 0)) {
    return 0;
  }
  pcVar5 = enter_pem_pass_phrase;
  if (param_3 != (code *)0x0) {
    pcVar5 = param_3;
  }
  iVar2 = FUN_140c2d470(lVar4,pcVar5,param_4);
  if (iVar2 != 0) {
    FUN_140b932f0();
    while( true ) {
      iVar2 = no_supported_data_to_decode_ssssss(lVar4,param_1);
      if ((iVar2 != 0) && (local_28[0] != 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar3 = param_7 & 0xfffffffd;
        if ((param_7 & 1) == 0) {
          uVar3 = param_7;
        }
        iVar1 = FUN_140c06db0(local_28[0],uVar3);
        if (iVar1 == 0) {
          FUN_140b7efe0(local_28[0]);
          local_28[0] = 0;
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\pem\\pem_pkey.c",0x55,"pem_read_bio_key_decoder");
          FUN_140b91cc0(9,0x7e,0);
          FUN_140c2b440(lVar4);
          return local_28[0];
        }
        if (param_2 != (longlong *)0x0) {
          FUN_140b7efe0(*param_2);
          *param_2 = local_28[0];
          FUN_140c2b440(lVar4);
          return local_28[0];
        }
        goto LAB_140bf5dc7;
      }
      iVar2 = FUN_140b74190(param_1,2,0,0);
      if ((((iVar2 != 0) || (iVar2 = FUN_140b74190(param_1,0x85,0,0), iVar2 < 0)) ||
          (iVar2 <= iVar1)) ||
         (uVar3 = FUN_140b92090(),
         (((int)uVar3 >> 0x1f & 0x7f800000U) + 0x7fffff & uVar3) != 0x8010c)) break;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      FUN_140b932f0();
      iVar1 = iVar2;
    }
    FUN_140b93470();
  }
LAB_140bf5dc7:
  FUN_140c2b440(lVar4);
  return local_28[0];
}

