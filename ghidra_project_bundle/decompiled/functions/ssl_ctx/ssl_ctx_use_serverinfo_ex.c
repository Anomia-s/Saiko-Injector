/**
 * Function: ssl_ctx_use_serverinfo_ex
 * Address:  140b79820
 * Signature: undefined ssl_ctx_use_serverinfo_ex(void)
 * Body size: 517 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ssl_ctx_use_serverinfo_ex(longlong param_1,int param_2,void *param_3,size_t param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (((param_1 == 0) || (param_3 == (void *)0x0)) || (param_4 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_rsa.c",800,"SSL_CTX_use_serverinfo_ex");
    FUN_140b91cc0(0x14,0xc0102,0);
    return 0;
  }
  if (param_2 == 1) {
    puVar3 = (undefined4 *)FUN_140b8d8d0(param_4 + 4,"ssl\\ssl_rsa.c",0x32d);
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    *puVar3 = 0xd0010000;
    memcpy(puVar3 + 1,param_3,param_4);
    uVar1 = ssl_ctx_use_serverinfo_ex(param_1,2,puVar3,param_4 + 4);
    FUN_140b8d990(puVar3,"ssl\\ssl_rsa.c",0x336);
    return uVar1;
  }
  iVar2 = FUN_140b7ad30(param_2,param_3,param_4,0);
  if (iVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar5 = 0x33b;
  }
  else {
    if (**(longlong **)(param_1 + 0x158) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\ssl_rsa.c",0x33f,"SSL_CTX_use_serverinfo_ex");
      uVar5 = 0xc0103;
      goto LAB_140b79909;
    }
    lVar4 = FUN_140b8d9c0(*(undefined8 *)(**(longlong **)(param_1 + 0x158) + 0x18),param_4,
                          "ssl\\ssl_rsa.c",0x343);
    if (lVar4 == 0) {
      return 0;
    }
    *(longlong *)(**(longlong **)(param_1 + 0x158) + 0x18) = lVar4;
    memcpy(*(void **)(**(longlong **)(param_1 + 0x158) + 0x18),param_3,param_4);
    *(size_t *)(**(longlong **)(param_1 + 0x158) + 0x20) = param_4;
    iVar2 = FUN_140b7ad30(param_2,param_3,param_4,param_1);
    if (iVar2 != 0) {
      return 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar5 = 0x350;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_rsa.c",uVar5,"SSL_CTX_use_serverinfo_ex");
  uVar5 = 0x184;
LAB_140b79909:
  FUN_140b91cc0(0x14,uVar5,0);
  return 0;
}

