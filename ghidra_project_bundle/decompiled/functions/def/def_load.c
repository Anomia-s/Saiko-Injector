/**
 * Function: def_load
 * Address:  140cad890
 * Signature: undefined def_load(void)
 * Body size: 215 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 def_load(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = calling_fopens_s(param_2,&DAT_1413a64f4);
  if (lVar3 == 0) {
    uVar1 = FUN_140b92170();
    uVar1 = ((int)uVar1 >> 0x1f & 0x7f800000U) + 0x7fffff & uVar1;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar4 = 0xb3;
    if (uVar1 != 0x80) {
      uVar4 = 0xb5;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\conf\\conf_def.c",uVar4,"def_load");
    uVar4 = 0x72;
    if (uVar1 != 0x80) {
      uVar4 = 0x80002;
    }
    FUN_140b91cc0(0xe,uVar4,0);
    return 0;
  }
  uVar2 = openssl_conf_include(param_1,lVar3,param_3);
  FUN_140b73150(lVar3);
  return uVar2;
}

