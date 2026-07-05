/**
 * Function: key_to_p8info
 * Address:  140d67050
 * Signature: undefined key_to_p8info(void)
 * Body size: 258 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong key_to_p8info(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                      code *param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140d67070;
  local_18 = 0;
  lVar2 = FUN_140c6c1c0();
  if ((lVar2 != 0) && (iVar1 = (*param_5)(param_1,&local_18,param_6), 0 < iVar1)) {
    uVar3 = FUN_140b96310(param_2);
    iVar1 = FUN_140c6c250(lVar2,uVar3,0,param_4,param_3,local_18,iVar1);
    if (iVar1 != 0) {
      return lVar2;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\encode_decode\\encode_key2any.c",0x65,"key_to_p8info");
  FUN_140b91cc0(0x39,0x8000d,0);
  FUN_140c6c1e0(lVar2);
  FUN_140b8d990(local_18,"providers\\implementations\\encode_decode\\encode_key2any.c",0x67);
  return 0;
}

