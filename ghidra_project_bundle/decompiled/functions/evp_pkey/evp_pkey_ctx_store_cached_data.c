/**
 * Function: evp_pkey_ctx_store_cached_data
 * Address:  140b7c2a0
 * Signature: undefined evp_pkey_ctx_store_cached_data(void)
 * Body size: 751 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
evp_pkey_ctx_store_cached_data
          (uint *param_1,int param_2,uint param_3,int param_4,char *param_5,undefined8 param_6,
          longlong param_7)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_4 == -1) {
    if ((param_5 == (char *)0x0) ||
       ((iVar2 = strcmp(param_5,"distid"), iVar2 != 0 &&
        (iVar2 = strcmp(param_5,"hexdistid"), iVar2 != 0)))) {
LAB_140b7c37a:
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\pmeth_lib.c",0x5c0,"evp_pkey_ctx_store_cached_data");
      FUN_140b91cc0(6,0x93,0);
      return 0xfffffffe;
    }
  }
  else if (param_4 != 0xf) goto LAB_140b7c37a;
  if (param_2 != -1) {
    iVar2 = FUN_140b7c110(param_1);
    if ((iVar2 == 0) || (iVar2 == 1)) {
      if (*(undefined4 **)(param_1 + 0x1e) == (undefined4 *)0x0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\pmeth_lib.c",0x5d4,"evp_pkey_ctx_store_cached_data");
        FUN_140b91cc0(6,0x93,0);
        return 0xfffffffe;
      }
      iVar2 = FUN_140b7dea0(**(undefined4 **)(param_1 + 0x1e));
      iVar3 = FUN_140b7dea0(param_2);
      if (iVar2 != iVar3) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\pmeth_lib.c",0x5d8,"evp_pkey_ctx_store_cached_data");
        FUN_140b91cc0(6,0x94,0);
        return 0xffffffff;
      }
    }
    else if (iVar2 == 2) {
      if (*(longlong *)(param_1 + 8) == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\pmeth_lib.c",0x5c8,"evp_pkey_ctx_store_cached_data");
        FUN_140b91cc0(6,0x93,0);
        return 0xfffffffe;
      }
      uVar1 = *(undefined8 *)(param_1 + 8);
      uVar4 = FUN_140b80ed0(param_2);
      iVar2 = FUN_140bfdf60(uVar1,uVar4);
      if (iVar2 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\pmeth_lib.c",0x5cd,"evp_pkey_ctx_store_cached_data");
        FUN_140b91cc0(6,0x94,0);
        return 0xffffffff;
      }
    }
  }
  if ((param_3 != 0xffffffff) && ((*param_1 & param_3) == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\pmeth_lib.c",0x5df,"evp_pkey_ctx_store_cached_data");
    FUN_140b91cc0(6,0x94,0);
    return 0xffffffff;
  }
  FUN_140b8d990(*(undefined8 *)(param_1 + 0x10),"crypto\\evp\\pmeth_lib.c",0x5fd);
  FUN_140b8d990(*(undefined8 *)(param_1 + 0xe),"crypto\\evp\\pmeth_lib.c",0x5fe);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (param_5 != (char *)0x0) {
    lVar5 = FUN_140b8c830(param_5,"crypto\\evp\\pmeth_lib.c",0x5e7);
    *(longlong *)(param_1 + 0xe) = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
  }
  if (param_7 != 0) {
    lVar5 = FUN_140b8c7c0(param_6,param_7,"crypto\\evp\\pmeth_lib.c",0x5ec);
    *(longlong *)(param_1 + 0x10) = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
  }
  param_1[0x14] = param_1[0x14] | 1;
  *(longlong *)(param_1 + 0x12) = param_7;
  return 1;
}

