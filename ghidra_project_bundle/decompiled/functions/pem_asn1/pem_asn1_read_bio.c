/**
 * Function: pem_asn1_read_bio
 * Address:  140c3c770
 * Signature: undefined pem_asn1_read_bio(void)
 * Body size: 223 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong pem_asn1_read_bio(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                          undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140c3c780;
  local_18 = 0;
  local_20 = 0;
  iVar1 = FUN_140bf4400(&local_20,local_28,0,param_2,param_3,param_5,param_6);
  if (iVar1 == 0) {
    return 0;
  }
  local_18 = local_20;
  lVar2 = (*param_1)(param_4,&local_18,local_28[0]);
  if (lVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\pem\\pem_oth.c",0x21,"PEM_ASN1_read_bio")
    ;
    FUN_140b91cc0(9,0x8000d,0);
  }
  FUN_140b8d990(local_20,"crypto\\pem\\pem_oth.c",0x22);
  return lVar2;
}

