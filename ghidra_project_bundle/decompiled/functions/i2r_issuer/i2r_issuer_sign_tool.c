/**
 * Function: i2r_issuer_sign_tool
 * Address:  140c690b0
 * Signature: undefined i2r_issuer_sign_tool(void)
 * Body size: 411 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
i2r_issuer_sign_tool(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  
  if (param_2 == (longlong *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\v3_ist.c",0x66,"i2r_issuer_sign_tool");
    FUN_140b91cc0(0x22,0x80106,0);
    return 0;
  }
  bVar1 = *param_2 != 0;
  if (bVar1) {
    FUN_140c078a0(param_3,"%*ssignTool    : ",param_4,&DAT_1413a2ad6);
    FUN_140b73860(param_3,*(undefined8 *)((undefined4 *)*param_2 + 2),*(undefined4 *)*param_2);
  }
  if (param_2[1] != 0) {
    if (bVar1) {
      FUN_140b73860(param_3,&DAT_1413a7288,1);
    }
    FUN_140c078a0(param_3,"%*scATool      : ",param_4,&DAT_1413a2ad6);
    FUN_140b73860(param_3,*(undefined8 *)((undefined4 *)param_2[1] + 2),*(undefined4 *)param_2[1]);
    bVar1 = true;
  }
  if (param_2[2] != 0) {
    if (bVar1) {
      FUN_140b73860(param_3,&DAT_1413a7288,1);
    }
    FUN_140c078a0(param_3,"%*ssignToolCert: ",param_4,&DAT_1413a2ad6);
    FUN_140b73860(param_3,*(undefined8 *)((undefined4 *)param_2[2] + 2),*(undefined4 *)param_2[2]);
    bVar1 = true;
  }
  if (param_2[3] != 0) {
    if (bVar1) {
      FUN_140b73860(param_3,&DAT_1413a7288,1);
    }
    FUN_140c078a0(param_3,"%*scAToolCert  : ",param_4,&DAT_1413a2ad6);
    FUN_140b73860(param_3,*(undefined8 *)((undefined4 *)param_2[3] + 2),*(undefined4 *)param_2[3]);
  }
  return 1;
}

