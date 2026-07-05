/**
 * Function: rsa_init
 * Address:  140d4f280
 * Signature: undefined rsa_init(void)
 * Body size: 252 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool rsa_init(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined4 local_res8 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res8[0] = 0;
  iVar1 = FUN_140b69250();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    iVar1 = invalid_operation_d(param_2,0x400,local_res8);
    bVar3 = bVar2;
    if (iVar1 != 0) {
      iVar1 = FUN_140c2a540(param_2);
      if (iVar1 != 0) {
        FUN_140c2a430(*(undefined8 *)(param_1 + 8));
        *(longlong *)(param_1 + 8) = param_2;
        *(undefined4 *)(param_1 + 0x14) = 0x400;
        *(undefined4 *)(param_1 + 0x40) = 1;
        iVar1 = FUN_140c2a410(param_2,0xf000);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x10) = 1;
          iVar1 = tls_client_version(param_1,param_3);
          bVar3 = iVar1 != 0;
        }
        else {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\asymciphers\\rsa_enc.c",0x78,"rsa_init");
          FUN_140b91cc0(0x39,0xc0103,0);
        }
      }
    }
  }
  return bVar3;
}

