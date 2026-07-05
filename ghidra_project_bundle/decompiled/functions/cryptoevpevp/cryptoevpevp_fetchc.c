/**
 * Function: cryptoevpevp_fetchc
 * Address:  140bd6350
 * Signature: undefined cryptoevpevp_fetchc(void)
 * Body size: 376 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 cryptoevpevp_fetchc(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar3 = FUN_140c17600(param_1,0);
  puVar4 = (undefined8 *)FUN_140c60280(param_1,param_3);
  if ((puVar4 == (undefined8 *)0x0) || (lVar3 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar7 = 0x1f9;
  }
  else {
    if (param_4 == 0) {
      FUN_140c606a0(param_1);
    }
    else {
      iVar1 = FUN_140c60660();
      if (iVar1 != 0) {
        return 0;
      }
    }
    lVar5 = FUN_140c5e820(param_1,param_2,0,0);
    if ((lVar5 == 0) || (lVar6 = FUN_140b8d8d0(lVar5,"crypto\\evp\\evp_fetch.c",0x1e2), lVar6 == 0))
    {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar7 = 0x1e4;
    }
    else {
      lVar5 = FUN_140c5e820(param_1,param_2,lVar6,lVar5);
      if (lVar5 != 0) {
        FUN_140bd3350(param_1,lVar6);
        FUN_140b8d990(lVar6,"crypto\\evp\\evp_fetch.c",0x1ee);
        FUN_140c5e6c0(*puVar4);
        *puVar4 = param_2;
        uVar2 = FUN_140c60600(lVar3);
        ossl_decoder_cache_flush(param_1);
        return uVar2;
      }
      FUN_140b8d990(lVar6,"crypto\\evp\\evp_fetch.c",0x1e9);
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar7 = 0x1ea;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\evp\\evp_fetch.c",uVar7,"evp_set_parsed_default_properties");
  FUN_140b91cc0(6,0xc0103,0);
  return 0;
}

