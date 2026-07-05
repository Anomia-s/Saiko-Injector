/**
 * Function: key_to_pubkey
 * Address:  140d672d0
 * Signature: undefined key_to_pubkey(void)
 * Body size: 247 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong key_to_pubkey(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                      code *param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140d672f0;
  local_18 = 0;
  lVar2 = FUN_140b9d530();
  if ((lVar2 != 0) && (iVar1 = (*param_5)(param_1,&local_18,param_6), 0 < iVar1)) {
    uVar3 = FUN_140b96310(param_2);
    iVar1 = FUN_140b9dee0(lVar2,uVar3,param_4,param_3,local_18,iVar1);
    if (iVar1 != 0) {
      return lVar2;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\encode_decode\\encode_key2any.c",0xa6,"key_to_pubkey");
  FUN_140b91cc0(0x39,0x8000b,0);
  FUN_140b9d550(lVar2);
  FUN_140b8d990(local_18,"providers\\implementations\\encode_decode\\encode_key2any.c",0xa8);
  return 0;
}

